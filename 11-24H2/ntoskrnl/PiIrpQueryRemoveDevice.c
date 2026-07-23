/*
 * XREFs of PiIrpQueryRemoveDevice @ 0x140731D68
 * Callers:
 *     PnpDisableDevice @ 0x140720DF0 (PnpDisableDevice.c)
 *     PnpQueryRemoveLockedDeviceNode @ 0x140721900 (PnpQueryRemoveLockedDeviceNode.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     KeWaitForSingleObject @ 0x14031DE40 (KeWaitForSingleObject.c)
 *     KeInitializeEvent @ 0x140402260 (KeInitializeEvent.c)
 *     PnpFindMountableDevice @ 0x1404A1F5C (PnpFindMountableDevice.c)
 *     PnpMarkDeviceForRemove @ 0x1404B965C (PnpMarkDeviceForRemove.c)
 *     PnpUnlockMountableDevice @ 0x1404BD46C (PnpUnlockMountableDevice.c)
 *     PnpLockMountableDevice @ 0x1404BF394 (PnpLockMountableDevice.c)
 *     IopDecrementDeviceObjectHandleCount @ 0x140593004 (IopDecrementDeviceObjectHandleCount.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     IopInvalidateVolumesForDevice @ 0x1408AEAB4 (IopInvalidateVolumesForDevice.c)
 *     PnpAsynchronousCall @ 0x140A44414 (PnpAsynchronousCall.c)
 */

__int64 __fastcall PiIrpQueryRemoveDevice(PDEVICE_OBJECT DeviceObject, _QWORD *a2)
{
  int v4; // r14d
  PDEVICE_OBJECT v5; // rdi
  int v6; // edi
  PVOID v7; // rsi
  __int64 v9; // [rsp+38h] [rbp-29h] BYREF
  struct _KEVENT Event; // [rsp+40h] [rbp-21h] BYREF
  int v11; // [rsp+58h] [rbp-9h]
  int v12; // [rsp+5Ch] [rbp-5h]
  PVOID Object[2]; // [rsp+60h] [rbp-1h] BYREF
  _WORD v14[36]; // [rsp+70h] [rbp+Fh] BYREF

  v12 = 0;
  v4 = 0;
  *(_OWORD *)Object = 0LL;
  memset(&Event, 0, sizeof(Event));
  memset_0(v14, 0, sizeof(v14));
  v14[0] = 283;
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
  v9 = 0LL;
  v11 = -1073741823;
  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  v6 = PnpAsynchronousCall(v5, v14, PnpDiagnosticCompletionRoutine, &v9);
  if ( v6 == 259 )
  {
    KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    v6 = v11;
  }
  if ( a2 )
    *a2 = v9;
  if ( v4 )
  {
    PnpLockMountableDevice(DeviceObject);
    v7 = Object[1];
    if ( Object[1] )
    {
      IopDecrementDeviceObjectHandleCount((ULONG_PTR)Object[1]);
      ObfDereferenceObject(v7);
    }
    PnpUnlockMountableDevice((__int64)DeviceObject);
    if ( v6 >= 0 )
      return (unsigned int)IopInvalidateVolumesForDevice(DeviceObject);
  }
  return (unsigned int)v6;
}
