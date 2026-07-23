/*
 * XREFs of IopRemoveDevice @ 0x1409BE494
 * Callers:
 *     PnpRemoveLockedDeviceNode @ 0x14048D53C (PnpRemoveLockedDeviceNode.c)
 *     PnpDisableDevice @ 0x140720DF0 (PnpDisableDevice.c)
 *     PnpCancelRemoveLockedDeviceNode @ 0x1407216D4 (PnpCancelRemoveLockedDeviceNode.c)
 *     PnpQueryRemoveLockedDeviceNode @ 0x140721900 (PnpQueryRemoveLockedDeviceNode.c)
 *     PnpSurpriseRemoveLockedDeviceNode @ 0x1409BEDFC (PnpSurpriseRemoveLockedDeviceNode.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     PnpFindMountableDevice @ 0x1404A1F5C (PnpFindMountableDevice.c)
 *     PnpMarkDeviceForRemove @ 0x1404B965C (PnpMarkDeviceForRemove.c)
 *     PnpUnlockMountableDevice @ 0x1404BD46C (PnpUnlockMountableDevice.c)
 *     PnpLockMountableDevice @ 0x1404BF394 (PnpLockMountableDevice.c)
 *     IopDecrementDeviceObjectHandleCount @ 0x140593004 (IopDecrementDeviceObjectHandleCount.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     IopDecDisableableDepends @ 0x14073191C (IopDecDisableableDepends.c)
 *     IopInvalidateVolumesForDevice @ 0x1408AEAB4 (IopInvalidateVolumesForDevice.c)
 *     PipClearDevNodeFlags @ 0x1408B8F2C (PipClearDevNodeFlags.c)
 *     IopSynchronousCall @ 0x1408B9564 (IopSynchronousCall.c)
 *     PiPnpRtlBeginOperation @ 0x1408C99A8 (PiPnpRtlBeginOperation.c)
 *     PiPnpRtlEndOperation @ 0x1408C9B88 (PiPnpRtlEndOperation.c)
 *     PipClearDevNodeUserFlags @ 0x140979A0C (PipClearDevNodeUserFlags.c)
 *     PiSwStopDestroy @ 0x1409BE704 (PiSwStopDestroy.c)
 *     IopUncacheInterfaceInformation @ 0x1409BE8C4 (IopUncacheInterfaceInformation.c)
 *     PiSwProcessParentRemoveIrp @ 0x1409BEA08 (PiSwProcessParentRemoveIrp.c)
 *     PoFxAbandonDevice @ 0x140A6EBB4 (PoFxAbandonDevice.c)
 */

__int64 __fastcall IopRemoveDevice(PDEVICE_OBJECT DeviceObject, int a2)
{
  int v2; // r15d
  _DWORD *DeviceNode; // rsi
  PDEVICE_OBJECT v6; // rbp
  __int64 v7; // rcx
  int v8; // r14d
  void *v10; // rbp
  __int64 v11; // rax
  unsigned __int64 v12; // rax
  __int128 v13; // [rsp+30h] [rbp-78h] BYREF
  _BYTE v14[80]; // [rsp+40h] [rbp-68h] BYREF
  PVOID P; // [rsp+B0h] [rbp+8h] BYREF

  v2 = 0;
  v13 = 0LL;
  if ( DeviceObject )
    DeviceNode = DeviceObject->DeviceObjectExtension->DeviceNode;
  else
    DeviceNode = 0LL;
  P = 0LL;
  PiPnpRtlBeginOperation(&P);
  if ( a2 == 2 )
    IopUncacheInterfaceInformation(DeviceObject, 1LL);
  memset_0(v14, 0, 0x48uLL);
  v14[0] = 27;
  v14[1] = a2;
  if ( PnpFindMountableDevice((__int64)DeviceObject) )
  {
    v2 = 1;
    PnpLockMountableDevice(DeviceObject);
    v6 = (PDEVICE_OBJECT)PnpMarkDeviceForRemove((ULONG_PTR)DeviceObject, 1, (ULONG_PTR *)&v13);
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
  v8 = IopSynchronousCall(v6, (__int64)v14, -1073741637, 0LL, 0LL);
  if ( v2 )
  {
    PnpLockMountableDevice(DeviceObject);
    if ( (unsigned int)(a2 - 2) <= 1 )
      PnpMarkDeviceForRemove((ULONG_PTR)DeviceObject, 0, (ULONG_PTR *)&v13);
    v10 = (void *)*((_QWORD *)&v13 + 1);
    if ( *((_QWORD *)&v13 + 1) )
    {
      IopDecrementDeviceObjectHandleCount(*((ULONG_PTR *)&v13 + 1));
      ObfDereferenceObject(v10);
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
    v11 = *((_QWORD *)DeviceNode + 81);
    if ( v11 )
    {
      if ( (v11 & 1) != 0 )
      {
        v12 = v11 & 0xFFFFFFFFFFFFFFFEuLL;
        *((_QWORD *)DeviceNode + 81) = v12;
        --*(_DWORD *)(v12 + 656);
      }
    }
  }
LABEL_15:
  if ( P )
    PiPnpRtlEndOperation((PVOID **)P);
  return (unsigned int)v8;
}
