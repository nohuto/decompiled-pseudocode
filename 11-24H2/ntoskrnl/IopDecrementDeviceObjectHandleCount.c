/*
 * XREFs of IopDecrementDeviceObjectHandleCount @ 0x140595FD4
 * Callers:
 *     PiIrpQueryRemoveDevice @ 0x140733E34 (PiIrpQueryRemoveDevice.c)
 *     IopRemoveDevice @ 0x140A10084 (IopRemoveDevice.c)
 *     PnpSurpriseRemoveLockedDeviceNode @ 0x140A109EC (PnpSurpriseRemoveLockedDeviceNode.c)
 * Callees:
 *     IopDecrementDeviceObjectRef @ 0x1403F2340 (IopDecrementDeviceObjectRef.c)
 */

__int64 __fastcall IopDecrementDeviceObjectHandleCount(ULONG_PTR a1)
{
  return IopDecrementDeviceObjectRef(a1, 0);
}
