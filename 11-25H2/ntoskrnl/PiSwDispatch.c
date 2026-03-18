/*
 * XREFs of PiSwDispatch @ 0x140AC02F0
 * Callers:
 *     <none>
 * Callees:
 *     IofCompleteRequest @ 0x140251700 (IofCompleteRequest.c)
 *     PiSwIrpCleanup @ 0x140724800 (PiSwIrpCleanup.c)
 *     PiSwIrpGetAttributes @ 0x1407249F4 (PiSwIrpGetAttributes.c)
 *     PiSwIrpGetLifetime @ 0x140724A94 (PiSwIrpGetLifetime.c)
 *     PiSwIrpSetAttributes @ 0x140724B34 (PiSwIrpSetAttributes.c)
 *     PiSwIrpInterfacePropertySet @ 0x140835F5C (PiSwIrpInterfacePropertySet.c)
 *     PiAuDoesClientHaveAccess @ 0x14095D51C (PiAuDoesClientHaveAccess.c)
 *     PiSwIrpInterfaceRegister @ 0x14095D5E8 (PiSwIrpInterfaceRegister.c)
 *     PiSwIrpInterfaceSetState @ 0x14095DFA4 (PiSwIrpInterfaceSetState.c)
 *     PiSwDeviceDereference @ 0x1409A3528 (PiSwDeviceDereference.c)
 *     PiSwIrpStartCreate @ 0x1409A4020 (PiSwIrpStartCreate.c)
 *     PiSwIrpPropertySet @ 0x140A66038 (PiSwIrpPropertySet.c)
 *     PiSwIrpSetLifetime @ 0x140AC0768 (PiSwIrpSetLifetime.c)
 */

__int64 __fastcall PiSwDispatch(__int64 a1, IRP *a2, __int64 a3)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rsi
  unsigned int Status; // ebx
  UCHAR MajorFunction; // al
  __int64 v7; // rcx
  IRP *v8; // rcx
  PVOID FsContext2; // rcx

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  Status = a2->IoStatus.Status;
  MajorFunction = CurrentStackLocation->MajorFunction;
  if ( !CurrentStackLocation->MajorFunction )
  {
    CurrentStackLocation->FileObject->FsContext2 = 0LL;
    Status = PiAuDoesClientHaveAccess(0x80u) == 0 ? 0xC0000022 : 0;
    a2->IoStatus.Status = Status;
    goto LABEL_31;
  }
  switch ( MajorFunction )
  {
    case 2u:
      FsContext2 = CurrentStackLocation->FileObject->FsContext2;
      if ( FsContext2 )
      {
        PiSwDeviceDereference(FsContext2);
        CurrentStackLocation->FileObject->FsContext2 = 0LL;
      }
      goto LABEL_7;
    case 0xEu:
      switch ( CurrentStackLocation->Parameters.Read.ByteOffset.LowPart )
      {
        case 0x470400u:
          return (unsigned int)PiSwIrpStartCreate(a2, (__int64)a2, a3);
        case 0x470404u:
          return (unsigned int)PiSwIrpPropertySet(a2, (__int64)a2, a3);
        case 0x470408u:
          return (unsigned int)PiSwIrpInterfaceRegister(a2, (__int64)a2, a3);
        case 0x47040Cu:
          return (unsigned int)PiSwIrpInterfaceSetState(a2, (__int64)a2, a3);
        case 0x470410u:
          return (unsigned int)PiSwIrpInterfacePropertySet(a2, (__int64)a2, a3);
        case 0x470414u:
          return (unsigned int)PiSwIrpSetLifetime(a2);
        case 0x470418u:
          return (unsigned int)PiSwIrpGetLifetime(a2);
        case 0x47041Cu:
          return (unsigned int)PiSwIrpSetAttributes(a2, (__int64)a2, a3);
        default:
          v8 = a2;
          if ( CurrentStackLocation->Parameters.Read.ByteOffset.LowPart != 4654112 )
          {
            Status = -1073741637;
            a2->IoStatus.Status = -1073741637;
LABEL_32:
            IofCompleteRequest(v8, 0);
            return Status;
          }
          return (unsigned int)PiSwIrpGetAttributes(a2);
      }
    case 0x12u:
      v7 = (__int64)CurrentStackLocation->FileObject->FsContext2;
      if ( v7 )
        PiSwIrpCleanup(v7, (__int64)a2, a3);
LABEL_7:
      Status = 0;
      a2->IoStatus.Status = 0;
LABEL_31:
      v8 = a2;
      goto LABEL_32;
  }
  return Status;
}
