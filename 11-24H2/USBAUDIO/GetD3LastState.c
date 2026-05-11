/*
 * XREFs of GetD3LastState @ 0x140039154
 * Callers:
 *     USBCntrlRestoreBoolean @ 0x140042960 (USBCntrlRestoreBoolean.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14001BB50 (_guard_dispatch_icall.c)
 *     memset @ 0x14001BF00 (memset.c)
 */

__int64 __fastcall GetD3LastState(PDEVICE_OBJECT DeviceObject, __int64 a2)
{
  PDEVICE_OBJECT AttachedDeviceReference; // rsi
  PIRP Irp; // rax
  IRP *v6; // rdi
  int v7; // ebx
  PIRP v8; // rdx
  __int64 v9; // rax
  _QWORD v11[9]; // [rsp+20h] [rbp-58h] BYREF

  memset(v11, 0, sizeof(v11));
  if ( !DeviceObject || !a2 )
    return 3221225485LL;
  AttachedDeviceReference = IoGetAttachedDeviceReference(DeviceObject);
  Irp = IoAllocateIrp(AttachedDeviceReference->StackSize, 0);
  v6 = Irp;
  if ( Irp )
  {
    Irp->IoStatus.Information = 0LL;
    Irp->IoStatus.Status = -1073741637;
    v8 = Irp;
    v9 = (__int64)&Irp->Tail.Overlay.CurrentStackLocation[-1];
    *(_QWORD *)(v9 + 32) = 0LL;
    *(_QWORD *)(v9 + 8) = &GUID_D3COLD_SUPPORT_INTERFACE;
    *(_QWORD *)(v9 + 24) = v11;
    *(_WORD *)v9 = 2075;
    *(_DWORD *)(v9 + 16) = 65608;
    v7 = IoSynchronousCallDriver(AttachedDeviceReference, v8);
    IoFreeIrp(v6);
    if ( v7 >= 0 )
    {
      if ( v11[8] )
        ((void (__fastcall *)(_QWORD, __int64))v11[8])(v11[1], a2);
    }
  }
  else
  {
    v7 = -1073741670;
  }
  ObfDereferenceObject(AttachedDeviceReference);
  return (unsigned int)v7;
}
