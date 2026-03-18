/*
 * XREFs of PiSwIrpInterfaceSetState @ 0x14095DFA4
 * Callers:
 *     PiSwDispatch @ 0x140AC02F0 (PiSwDispatch.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     IofCompleteRequest @ 0x140251700 (IofCompleteRequest.c)
 *     ExReleaseResourceLite @ 0x140296E10 (ExReleaseResourceLite.c)
 *     McTemplateK0zzd_EtwWriteTransfer @ 0x140424514 (McTemplateK0zzd_EtwWriteTransfer.c)
 *     McTemplateK0zz_EtwWriteTransfer @ 0x1405A4A98 (McTemplateK0zz_EtwWriteTransfer.c)
 *     PiSwDeviceFindInterfaceEntry @ 0x140835384 (PiSwDeviceFindInterfaceEntry.c)
 *     PiSwDeviceOperationsAllowed @ 0x140835F30 (PiSwDeviceOperationsAllowed.c)
 *     PiSwLock @ 0x1408363D0 (PiSwLock.c)
 *     PiSwDeviceInterfaceSetState @ 0x14095DA64 (PiSwDeviceInterfaceSetState.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiSwIrpInterfaceSetState(PIRP Irp, __int64 a2, __int64 a3)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rbx
  __int64 FsContext2; // rdi
  struct _IRP *MasterIrp; // rcx
  int v7; // ebx
  __int64 v8; // rcx
  __int64 *InterfaceEntry; // rax
  __int64 v10; // rcx
  __int64 v11; // r8
  PVOID P; // [rsp+58h] [rbp+10h] BYREF
  __int64 v14; // [rsp+60h] [rbp+18h] BYREF
  __int64 v15; // [rsp+68h] [rbp+20h]

  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  FsContext2 = (__int64)CurrentStackLocation->FileObject->FsContext2;
  v15 = FsContext2;
  v14 = 0LL;
  P = 0LL;
  if ( (byte_140EEFA6C & 0x40) != 0 )
    McTemplateK0zz_EtwWriteTransfer(
      (__int64)Irp,
      (const EVENT_DESCRIPTOR *)KMPnPEvt_SwDevice_SetInterfaceState_Start,
      a3,
      *(const wchar_t **)(FsContext2 + 8),
      *(const wchar_t **)(FsContext2 + 16));
  MasterIrp = Irp->AssociatedIrp.MasterIrp;
  if ( !MasterIrp )
    goto LABEL_20;
  v7 = MesDecodeBufferHandleCreate(MasterIrp, CurrentStackLocation->Parameters.Create.Options, &v14);
  if ( v7 < 0 )
    goto LABEL_11;
  NdrMesTypeDecode3(v14, "TP 3\a", &off_140B2C160, &off_140E06FF0, 3, &P);
  if ( P && *(_QWORD *)P )
  {
    PiSwLock();
    if ( PiSwDeviceOperationsAllowed(FsContext2) )
    {
      InterfaceEntry = PiSwDeviceFindInterfaceEntry(v8, *(const wchar_t **)P);
      if ( InterfaceEntry )
        v7 = PiSwDeviceInterfaceSetState(FsContext2, (__int64)InterfaceEntry, *((_BYTE *)P + 8));
      else
        v7 = -1073741275;
    }
    else
    {
      v7 = -1073741637;
    }
    ExReleaseResourceLite(&PiSwLockObj);
    KeLeaveCriticalRegion();
  }
  else
  {
LABEL_20:
    v7 = -1073741811;
  }
LABEL_11:
  if ( P )
    ExFreePoolWithTag(P, 0x6370726Bu);
  if ( v14 )
    MesHandleFree();
  Irp->IoStatus.Status = v7;
  IofCompleteRequest(Irp, 0);
  if ( (byte_140EEFA6C & 0x40) != 0 )
    McTemplateK0zzd_EtwWriteTransfer(
      v10,
      (__int64)KMPnPEvt_SwDevice_SetInterfaceState_Stop,
      v11,
      *(const wchar_t **)(FsContext2 + 8),
      *(const wchar_t **)(FsContext2 + 16),
      v7);
  return (unsigned int)v7;
}
