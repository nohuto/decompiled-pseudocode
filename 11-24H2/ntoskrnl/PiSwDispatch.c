/*
 * XREFs of PiSwDispatch @ 0x140730760
 * Callers:
 *     <none>
 * Callees:
 *     IofCompleteRequest @ 0x1403DBAD0 (IofCompleteRequest.c)
 *     PiSwIrpCleanup @ 0x1407308E0 (PiSwIrpCleanup.c)
 *     PiSwIrpGetAttributes @ 0x140730AD4 (PiSwIrpGetAttributes.c)
 *     PiSwIrpGetLifetime @ 0x140730B74 (PiSwIrpGetLifetime.c)
 *     PiSwIrpSetAttributes @ 0x140730C14 (PiSwIrpSetAttributes.c)
 *     PiSwIrpSetLifetime @ 0x140730D50 (PiSwIrpSetLifetime.c)
 *     PiSwIrpInterfaceSetState @ 0x1408B1C78 (PiSwIrpInterfaceSetState.c)
 *     PiSwIrpPropertySet @ 0x1408B1E40 (PiSwIrpPropertySet.c)
 *     PiSwIrpInterfaceRegister @ 0x1408B2584 (PiSwIrpInterfaceRegister.c)
 *     PiSwIrpInterfacePropertySet @ 0x1408B9044 (PiSwIrpInterfacePropertySet.c)
 *     PiAuDoesClientHaveAccess @ 0x1408BC6A8 (PiAuDoesClientHaveAccess.c)
 *     PiSwIrpStartCreate @ 0x1409F8394 (PiSwIrpStartCreate.c)
 *     PiSwDeviceDereference @ 0x1409FB4F8 (PiSwDeviceDereference.c)
 */

__int64 __fastcall PiSwDispatch(__int64 a1, IRP *a2)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rsi
  unsigned int Status; // ebx
  UCHAR MajorFunction; // al
  IRP *v6; // rcx
  PVOID FsContext2; // rcx

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  Status = a2->IoStatus.Status;
  MajorFunction = CurrentStackLocation->MajorFunction;
  if ( !CurrentStackLocation->MajorFunction )
  {
    CurrentStackLocation->FileObject->FsContext2 = 0LL;
    Status = (unsigned __int8)PiAuDoesClientHaveAccess(0x80u) == 0 ? 0xC0000022 : 0;
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
          return (unsigned int)PiSwIrpStartCreate(a2);
        case 0x470404u:
          return (unsigned int)PiSwIrpPropertySet(a2);
        case 0x470408u:
          return (unsigned int)PiSwIrpInterfaceRegister(a2);
        case 0x47040Cu:
          return (unsigned int)PiSwIrpInterfaceSetState(a2);
        case 0x470410u:
          return (unsigned int)PiSwIrpInterfacePropertySet(a2);
        case 0x470414u:
          return (unsigned int)PiSwIrpSetLifetime(a2);
        case 0x470418u:
          return (unsigned int)PiSwIrpGetLifetime(a2);
        case 0x47041Cu:
          return (unsigned int)PiSwIrpSetAttributes(a2);
        default:
          v6 = a2;
          if ( CurrentStackLocation->Parameters.Read.ByteOffset.LowPart != 4654112 )
          {
            Status = -1073741637;
            a2->IoStatus.Status = -1073741637;
LABEL_32:
            IofCompleteRequest(v6, 0);
            return Status;
          }
          return (unsigned int)PiSwIrpGetAttributes(a2);
      }
    case 0x12u:
      if ( CurrentStackLocation->FileObject->FsContext2 )
        PiSwIrpCleanup();
LABEL_7:
      Status = 0;
      a2->IoStatus.Status = 0;
LABEL_31:
      v6 = a2;
      goto LABEL_32;
  }
  return Status;
}
