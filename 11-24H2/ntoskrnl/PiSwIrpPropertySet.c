/*
 * XREFs of PiSwIrpPropertySet @ 0x1408AF734
 * Callers:
 *     PiSwDispatch @ 0x14072E770 (PiSwDispatch.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14028AA60 (ExReleaseResourceLite.c)
 *     McTemplateK0zzd_EtwWriteTransfer @ 0x1402B827C (McTemplateK0zzd_EtwWriteTransfer.c)
 *     IofCompleteRequest @ 0x1403CCDA0 (IofCompleteRequest.c)
 *     McTemplateK0zz_EtwWriteTransfer @ 0x1405A5298 (McTemplateK0zz_EtwWriteTransfer.c)
 *     PiSwUpdateArrayProperties @ 0x1408AF964 (PiSwUpdateArrayProperties.c)
 *     PiSwPropertySet @ 0x1408B5A60 (PiSwPropertySet.c)
 *     PiSwValidatePropertyArray @ 0x1408B66DC (PiSwValidatePropertyArray.c)
 *     PiSwLock @ 0x1408B6E3C (PiSwLock.c)
 *     PiSwDeviceOperationsAllowed @ 0x1408B7FB4 (PiSwDeviceOperationsAllowed.c)
 *     PnpAllocatePWSTR @ 0x1408D1794 (PnpAllocatePWSTR.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiSwIrpPropertySet(PIRP Irp, __int64 a2, __int64 a3)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rbx
  const wchar_t **FsContext2; // rdi
  struct _IRP *MasterIrp; // rcx
  int updated; // ebx
  __int64 v8; // rcx
  __int64 v9; // r8
  PVOID v11; // [rsp+68h] [rbp+10h] BYREF
  PVOID P; // [rsp+70h] [rbp+18h] BYREF
  __int64 v13; // [rsp+78h] [rbp+20h] BYREF

  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  FsContext2 = (const wchar_t **)CurrentStackLocation->FileObject->FsContext2;
  v13 = 0LL;
  v11 = 0LL;
  P = 0LL;
  if ( (byte_140EEFF64 & 0x40) != 0 )
    McTemplateK0zz_EtwWriteTransfer(
      (__int64)Irp,
      (const EVENT_DESCRIPTOR *)KMPnPEvt_SwDevice_SetDeviceProperty_Start,
      a3,
      FsContext2[1],
      FsContext2[2]);
  MasterIrp = Irp->AssociatedIrp.MasterIrp;
  if ( !MasterIrp )
    goto LABEL_14;
  updated = MesDecodeBufferHandleCreate(MasterIrp, CurrentStackLocation->Parameters.Create.Options, &v13);
  if ( updated < 0 )
    goto LABEL_15;
  NdrMesTypeDecode3(v13, "TP 3\a", &off_140B3D1E0, &off_140E06FF0, 1, &v11);
  if ( v11 && *((_QWORD *)v11 + 1) && *(_DWORD *)v11 )
  {
    updated = PiSwValidatePropertyArray(*((_QWORD *)v11 + 1));
    if ( updated >= 0 )
    {
      PiSwLock();
      if ( (unsigned __int8)PiSwDeviceOperationsAllowed(FsContext2) )
      {
        updated = PnpAllocatePWSTR(FsContext2[10], 200LL, 1466986064LL, &P);
        if ( updated >= 0 )
          updated = PiSwUpdateArrayProperties(
                      FsContext2[21],
                      *((unsigned int *)FsContext2 + 44),
                      *((_QWORD *)v11 + 1),
                      *(unsigned int *)v11);
      }
      else
      {
        updated = -1073741637;
      }
      ExReleaseResourceLite(&PiSwLockObj);
      KeLeaveCriticalRegion();
      if ( updated >= 0 )
        updated = PiSwPropertySet(P, 1LL, *((_QWORD *)v11 + 1), *(unsigned int *)v11);
    }
  }
  else
  {
LABEL_14:
    updated = -1073741811;
  }
LABEL_15:
  if ( P )
    ExFreePoolWithTag(P, 0x57706E50u);
  if ( v11 )
    ExFreePoolWithTag(v11, 0x6370726Bu);
  if ( v13 )
    MesHandleFree();
  Irp->IoStatus.Status = updated;
  IofCompleteRequest(Irp, 0);
  if ( (byte_140EEFF64 & 0x40) != 0 )
    McTemplateK0zzd_EtwWriteTransfer(
      v8,
      (__int64)KMPnPEvt_SwDevice_SetDeviceProperty_Stop,
      v9,
      FsContext2[1],
      FsContext2[2],
      updated);
  return (unsigned int)updated;
}
