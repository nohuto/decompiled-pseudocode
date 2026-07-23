/*
 * XREFs of PiSwIrpSetLifetime @ 0x14072ED60
 * Callers:
 *     PiSwDispatch @ 0x14072E770 (PiSwDispatch.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14028AA60 (ExReleaseResourceLite.c)
 *     McTemplateK0zzd_EtwWriteTransfer @ 0x1402B827C (McTemplateK0zzd_EtwWriteTransfer.c)
 *     IofCompleteRequest @ 0x1403CCDA0 (IofCompleteRequest.c)
 *     McTemplateK0zz_EtwWriteTransfer @ 0x1405A5298 (McTemplateK0zz_EtwWriteTransfer.c)
 *     McTemplateK0zztt_EtwWriteTransfer @ 0x1405A5450 (McTemplateK0zztt_EtwWriteTransfer.c)
 *     PiSwLock @ 0x1408B6E3C (PiSwLock.c)
 *     PiSwDeviceOperationsAllowed @ 0x1408B7FB4 (PiSwDeviceOperationsAllowed.c)
 */

__int64 __fastcall PiSwIrpSetLifetime(PIRP Irp, __int64 a2, __int64 a3)
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
  if ( (byte_140EEFF64 & 0x40) != 0 )
    McTemplateK0zz_EtwWriteTransfer(
      (__int64)Irp,
      (const EVENT_DESCRIPTOR *)KMPnPEvt_SwDevice_LifetimeChange_Start,
      a3,
      FsContext2[1],
      FsContext2[2]);
  if ( CurrentStackLocation->Parameters.Create.Options == 4 && *(_DWORD *)&MasterIrp->Type <= 1u )
  {
    PiSwLock();
    if ( (unsigned __int8)PiSwDeviceOperationsAllowed(FsContext2) )
    {
      v9 = *(unsigned int *)&MasterIrp->Type;
      if ( (_DWORD)v9 == 1 && (*((_DWORD *)FsContext2 + 51) & 1) != 0 )
      {
        v4 = -1073741436;
      }
      else
      {
        if ( (byte_140EEFF64 & 0x40) != 0 )
          McTemplateK0zztt_EtwWriteTransfer(
            v9,
            (const EVENT_DESCRIPTOR *)KMPnPEvt_SwDevice_LifetimeChanged,
            v8,
            FsContext2[1],
            FsContext2[2],
            *((_DWORD *)FsContext2 + 45),
            *(_DWORD *)&MasterIrp->Type);
        *((_DWORD *)FsContext2 + 45) = *(_DWORD *)&MasterIrp->Type;
      }
    }
    else
    {
      v4 = -1073741637;
    }
    ExReleaseResourceLite(&PiSwLockObj);
    KeLeaveCriticalRegion();
  }
  else
  {
    v4 = -1073741811;
  }
  Irp->IoStatus.Status = v4;
  IofCompleteRequest(Irp, 0);
  if ( (byte_140EEFF64 & 0x40) != 0 )
    McTemplateK0zzd_EtwWriteTransfer(
      (__int64)FsContext2[2],
      (__int64)KMPnPEvt_SwDevice_LifetimeChange_Stop,
      v10,
      FsContext2[1],
      FsContext2[2],
      v4);
  return v4;
}
