/*
 * XREFs of PiIrpQueryRemoveDevice @ 0x140727B9C
 * Callers:
 *     PnpDisableDevice @ 0x140717160 (PnpDisableDevice.c)
 *     PnpQueryRemoveLockedDeviceNode @ 0x140717C70 (PnpQueryRemoveLockedDeviceNode.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14029C6A0 (KeWaitForSingleObject.c)
 *     ObfDereferenceObject @ 0x140309490 (ObfDereferenceObject.c)
 *     KeInitializeEvent @ 0x140401B80 (KeInitializeEvent.c)
 *     PnpFindMountableDevice @ 0x1404A6B84 (PnpFindMountableDevice.c)
 *     PnpMarkDeviceForRemove @ 0x1404BFB50 (PnpMarkDeviceForRemove.c)
 *     PnpUnlockMountableDevice @ 0x1404C3480 (PnpUnlockMountableDevice.c)
 *     PnpLockMountableDevice @ 0x1404C5784 (PnpLockMountableDevice.c)
 *     IopDecrementDeviceObjectHandleCount @ 0x140592974 (IopDecrementDeviceObjectHandleCount.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     IopInvalidateVolumesForDevice @ 0x1409A05FC (IopInvalidateVolumesForDevice.c)
 *     PnpAsynchronousCall @ 0x140A4B038 (PnpAsynchronousCall.c)
 */

__int64 __fastcall PiIrpQueryRemoveDevice(PDEVICE_OBJECT DeviceObject, _QWORD *a2)
{
  int v4; // r14d
  PDEVICE_OBJECT v5; // rdi
  int v6; // edi
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  PVOID v10; // rsi
  __int64 v12; // [rsp+38h] [rbp-29h] BYREF
  struct _KEVENT Event; // [rsp+40h] [rbp-21h] BYREF
  int v14; // [rsp+58h] [rbp-9h]
  int v15; // [rsp+5Ch] [rbp-5h]
  PVOID Object[2]; // [rsp+60h] [rbp-1h] BYREF
  _WORD v17[36]; // [rsp+70h] [rbp+Fh] BYREF

  v15 = 0;
  v4 = 0;
  *(_OWORD *)Object = 0LL;
  memset(&Event, 0, sizeof(Event));
  memset_0(v17, 0, sizeof(v17));
  v17[0] = 283;
  if ( PnpFindMountableDevice((__int64)DeviceObject) )
  {
    v4 = 1;
    PnpLockMountableDevice(DeviceObject);
    v5 = (PDEVICE_OBJECT)PnpMarkDeviceForRemove((ULONG_PTR)DeviceObject, 1, (ULONG_PTR *)Object);
    PnpUnlockMountableDevice((__int64)DeviceObject);
  }
  else
  {
    v5 = DeviceObject;
  }
  v12 = 0LL;
  v14 = -1073741823;
  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  v6 = PnpAsynchronousCall(v5, v17, PnpDiagnosticCompletionRoutine, &v12);
  if ( v6 == 259 )
  {
    KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    v6 = v14;
  }
  if ( a2 )
    *a2 = v12;
  if ( v4 )
  {
    PnpLockMountableDevice(DeviceObject);
    v10 = Object[1];
    if ( Object[1] )
    {
      IopDecrementDeviceObjectHandleCount((ULONG_PTR)Object[1], v7, v8, v9);
      ObfDereferenceObject(v10);
    }
    PnpUnlockMountableDevice((__int64)DeviceObject);
    if ( v6 >= 0 )
      return (unsigned int)IopInvalidateVolumesForDevice(DeviceObject);
  }
  return (unsigned int)v6;
}
