/*
 * XREFs of IopRemoveDevice @ 0x1409A1004
 * Callers:
 *     PnpRemoveLockedDeviceNode @ 0x1404938EC (PnpRemoveLockedDeviceNode.c)
 *     PnpDisableDevice @ 0x140717160 (PnpDisableDevice.c)
 *     PnpCancelRemoveLockedDeviceNode @ 0x140717A44 (PnpCancelRemoveLockedDeviceNode.c)
 *     PnpQueryRemoveLockedDeviceNode @ 0x140717C70 (PnpQueryRemoveLockedDeviceNode.c)
 *     PnpSurpriseRemoveLockedDeviceNode @ 0x1409A0984 (PnpSurpriseRemoveLockedDeviceNode.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140309490 (ObfDereferenceObject.c)
 *     PnpFindMountableDevice @ 0x1404A6B84 (PnpFindMountableDevice.c)
 *     PnpMarkDeviceForRemove @ 0x1404BFB50 (PnpMarkDeviceForRemove.c)
 *     PnpUnlockMountableDevice @ 0x1404C3480 (PnpUnlockMountableDevice.c)
 *     PnpLockMountableDevice @ 0x1404C5784 (PnpLockMountableDevice.c)
 *     IopDecrementDeviceObjectHandleCount @ 0x140592974 (IopDecrementDeviceObjectHandleCount.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     IopDecDisableableDepends @ 0x140727750 (IopDecDisableableDepends.c)
 *     PipClearDevNodeUserFlags @ 0x14082F904 (PipClearDevNodeUserFlags.c)
 *     IopSynchronousCall @ 0x140834D44 (IopSynchronousCall.c)
 *     PipClearDevNodeFlags @ 0x1408350BC (PipClearDevNodeFlags.c)
 *     PiPnpRtlBeginOperation @ 0x1408D0818 (PiPnpRtlBeginOperation.c)
 *     PiPnpRtlEndOperation @ 0x1408D09F8 (PiPnpRtlEndOperation.c)
 *     IopInvalidateVolumesForDevice @ 0x1409A05FC (IopInvalidateVolumesForDevice.c)
 *     IopUncacheInterfaceInformation @ 0x1409A1274 (IopUncacheInterfaceInformation.c)
 *     PiSwStopDestroy @ 0x1409A13B8 (PiSwStopDestroy.c)
 *     PiSwProcessParentRemoveIrp @ 0x1409A1544 (PiSwProcessParentRemoveIrp.c)
 *     PoFxAbandonDevice @ 0x140A72534 (PoFxAbandonDevice.c)
 */

__int64 __fastcall IopRemoveDevice(PDEVICE_OBJECT DeviceObject, int a2)
{
  int v2; // r15d
  _DWORD *DeviceNode; // rsi
  PDEVICE_OBJECT v6; // rbp
  __int64 v7; // rcx
  int v8; // r14d
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  void *v13; // rbp
  __int64 v14; // rax
  unsigned __int64 v15; // rax
  __int128 v16; // [rsp+30h] [rbp-78h] BYREF
  _BYTE v17[80]; // [rsp+40h] [rbp-68h] BYREF
  PVOID P; // [rsp+B0h] [rbp+8h] BYREF

  v2 = 0;
  v16 = 0LL;
  if ( DeviceObject )
    DeviceNode = DeviceObject->DeviceObjectExtension->DeviceNode;
  else
    DeviceNode = 0LL;
  P = 0LL;
  PiPnpRtlBeginOperation(&P);
  if ( a2 == 2 )
    IopUncacheInterfaceInformation(DeviceObject, 1LL);
  memset_0(v17, 0, 0x48uLL);
  v17[0] = 27;
  v17[1] = a2;
  if ( PnpFindMountableDevice((__int64)DeviceObject) )
  {
    v2 = 1;
    PnpLockMountableDevice(DeviceObject);
    v6 = (PDEVICE_OBJECT)PnpMarkDeviceForRemove((ULONG_PTR)DeviceObject, 1, (ULONG_PTR *)&v16);
    PnpUnlockMountableDevice((__int64)DeviceObject);
  }
  else
  {
    v6 = DeviceObject;
  }
  if ( a2 == 2 || a2 == 23 )
  {
    if ( (DeviceNode[100] & 8) != 0 )
    {
      PipClearDevNodeUserFlags((__int64)DeviceNode, 8);
      IopDecDisableableDepends((__int64)DeviceNode);
    }
    if ( a2 == 2 )
    {
      PiSwProcessParentRemoveIrp(DeviceObject);
      PiSwStopDestroy(v7, *((_QWORD *)DeviceNode + 6), *((_QWORD *)DeviceNode + 4));
    }
  }
  v8 = IopSynchronousCall(v6, (__int64)v17, -1073741637, 0LL, 0LL);
  if ( v2 )
  {
    PnpLockMountableDevice(DeviceObject);
    if ( (unsigned int)(a2 - 2) <= 1 )
      PnpMarkDeviceForRemove((ULONG_PTR)DeviceObject, 0, (ULONG_PTR *)&v16);
    v13 = (void *)*((_QWORD *)&v16 + 1);
    if ( *((_QWORD *)&v16 + 1) )
    {
      IopDecrementDeviceObjectHandleCount(*((ULONG_PTR *)&v16 + 1), v10, v11, v12);
      ObfDereferenceObject(v13);
    }
    PnpUnlockMountableDevice((__int64)DeviceObject);
    if ( (a2 != 1 || v8 < 0) && a2 != 23 )
    {
LABEL_14:
      if ( a2 != 2 )
        goto LABEL_15;
      goto LABEL_29;
    }
    v8 = IopInvalidateVolumesForDevice(DeviceObject);
  }
  if ( a2 != 23 )
    goto LABEL_14;
LABEL_29:
  PoFxAbandonDevice(DeviceNode);
  DeviceNode[39] = 0;
  if ( a2 == 2 )
  {
    PipClearDevNodeFlags((__int64)DeviceNode, 4104);
    v14 = *((_QWORD *)DeviceNode + 81);
    if ( v14 )
    {
      if ( (v14 & 1) != 0 )
      {
        v15 = v14 & 0xFFFFFFFFFFFFFFFEuLL;
        *((_QWORD *)DeviceNode + 81) = v15;
        --*(_DWORD *)(v15 + 656);
      }
    }
  }
LABEL_15:
  if ( P )
    PiPnpRtlEndOperation((PVOID **)P);
  return (unsigned int)v8;
}
