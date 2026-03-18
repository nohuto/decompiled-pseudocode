/*
 * XREFs of PiSwIrpSetAttributes @ 0x140724B34
 * Callers:
 *     PiSwDispatch @ 0x140AC02F0 (PiSwDispatch.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     IofCompleteRequest @ 0x140251700 (IofCompleteRequest.c)
 *     ExReleaseResourceLite @ 0x140296E10 (ExReleaseResourceLite.c)
 *     McTemplateK0zzd_EtwWriteTransfer @ 0x140424514 (McTemplateK0zzd_EtwWriteTransfer.c)
 *     McTemplateK0zz_EtwWriteTransfer @ 0x1405A4A98 (McTemplateK0zz_EtwWriteTransfer.c)
 *     McTemplateK0zztt_EtwWriteTransfer @ 0x1405A4C50 (McTemplateK0zztt_EtwWriteTransfer.c)
 *     PiSwDeviceOperationsAllowed @ 0x140835F30 (PiSwDeviceOperationsAllowed.c)
 *     PiSwLock @ 0x1408363D0 (PiSwLock.c)
 */

__int64 __fastcall PiSwIrpSetAttributes(PIRP Irp, __int64 a2, __int64 a3)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r14
  unsigned int v4; // ebx
  struct _IRP *MasterIrp; // rsi
  const wchar_t **FsContext2; // rdi
  __int64 v8; // r8
  __int64 v9; // rcx
  __int64 v10; // r8

  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  v4 = 0;
  MasterIrp = Irp->AssociatedIrp.MasterIrp;
  FsContext2 = (const wchar_t **)CurrentStackLocation->FileObject->FsContext2;
  if ( (byte_140EEFA6C & 0x40) != 0 )
    McTemplateK0zz_EtwWriteTransfer(
      (__int64)Irp,
      (const EVENT_DESCRIPTOR *)KMPnPEvt_SwDevice_AttributesChange_Start,
      a3,
      FsContext2[1],
      FsContext2[2]);
  if ( CurrentStackLocation->Parameters.Create.Options != 4 || (*(_DWORD *)&MasterIrp->Type & 0xFFFFFFFE) != 0 )
  {
    v4 = -1073741811;
  }
  else
  {
    PiSwLock();
    if ( (unsigned __int8)PiSwDeviceOperationsAllowed(FsContext2) )
    {
      v9 = *(unsigned int *)&MasterIrp->Type;
      if ( (v9 & 1) != 0 && *((_DWORD *)FsContext2 + 45) == 1 )
      {
        v4 = -1073741436;
      }
      else
      {
        if ( (byte_140EEFA6C & 0x40) != 0 )
          McTemplateK0zztt_EtwWriteTransfer(
            v9,
            (const EVENT_DESCRIPTOR *)KMPnPEvt_SwDevice_AttributesChanged,
            v8,
            FsContext2[1],
            FsContext2[2],
            *((_DWORD *)FsContext2 + 51),
            *(_DWORD *)&MasterIrp->Type);
        *((_DWORD *)FsContext2 + 51) = *(_DWORD *)&MasterIrp->Type;
      }
    }
    else
    {
      v4 = -1073741637;
    }
    ExReleaseResourceLite(&PiSwLockObj);
    KeLeaveCriticalRegion();
  }
  Irp->IoStatus.Status = v4;
  IofCompleteRequest(Irp, 0);
  if ( (byte_140EEFA6C & 0x40) != 0 )
    McTemplateK0zzd_EtwWriteTransfer(
      (__int64)FsContext2[2],
      (__int64)KMPnPEvt_SwDevice_AttributesChange_Stop,
      v10,
      FsContext2[1],
      FsContext2[2],
      v4);
  return v4;
}
