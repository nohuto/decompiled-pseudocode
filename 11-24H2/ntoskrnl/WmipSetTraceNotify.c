/*
 * XREFs of WmipSetTraceNotify @ 0x140AA6BEC
 * Callers:
 *     IoWMIRegistrationControl @ 0x1409D0C80 (IoWMIRegistrationControl.c)
 * Callees:
 *     IoFreeIrp @ 0x14031A520 (IoFreeIrp.c)
 *     KeReleaseMutex @ 0x1403379B0 (KeReleaseMutex.c)
 *     KeWaitForSingleObject @ 0x14033E960 (KeWaitForSingleObject.c)
 *     IoAllocateIrp @ 0x1403724A0 (IoAllocateIrp.c)
 *     IoWMIDeviceObjectToProviderId @ 0x1404639F0 (IoWMIDeviceObjectToProviderId.c)
 *     WmipForwardWmiIrp @ 0x1409CE2C0 (WmipForwardWmiIrp.c)
 */

void __fastcall WmipSetTraceNotify(PDEVICE_OBJECT DeviceObject, int a2)
{
  __int64 *v3; // rax
  CCHAR v4; // bl
  PIRP Irp; // rax
  IRP *v6; // rbx
  ULONG v7; // eax
  __int64 v8; // [rsp+30h] [rbp-10h] BYREF
  __int64 *v9; // [rsp+38h] [rbp-8h]

  LODWORD(v9) = 0;
  v8 = 0LL;
  if ( a2 == 0x100000 )
  {
    v3 = &EtwpDiskIoNotifyRoutines;
    goto LABEL_9;
  }
  if ( a2 == 0x200000 )
  {
    v3 = (__int64 *)EtwpTdiIoNotify;
LABEL_9:
    LODWORD(v8) = 1;
    goto LABEL_10;
  }
  if ( a2 != 0x400000 )
  {
    if ( a2 != 0x800000 )
      goto LABEL_11;
    v3 = &EtwpSplitIoNotifyRoutines;
    goto LABEL_9;
  }
  LODWORD(v8) = 2;
  v3 = (__int64 *)&EtwpFileIoNotifyRoutines;
LABEL_10:
  v9 = v3;
LABEL_11:
  KeWaitForSingleObject(&WmipSMMutex, Executive, 0, 0, 0LL);
  v4 = WmipServiceDeviceObject->StackSize + 1;
  KeReleaseMutex((PRKMUTEX)&WmipSMMutex, 0);
  Irp = IoAllocateIrp(v4, 0);
  v6 = Irp;
  if ( Irp )
  {
    --Irp->Tail.Overlay.CurrentStackLocation;
    --Irp->CurrentLocation;
    Irp->Tail.Overlay.CurrentStackLocation->DeviceObject = WmipServiceDeviceObject;
    v7 = IoWMIDeviceObjectToProviderId(DeviceObject);
    WmipForwardWmiIrp(v6, 0xDu, v7, 0LL, 0x10u, (__int64)&v8);
    IoFreeIrp(v6);
  }
}
