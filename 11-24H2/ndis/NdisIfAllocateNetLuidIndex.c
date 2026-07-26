/*
 * XREFs of NdisIfAllocateNetLuidIndex @ 0x140147810
 * Callers:
 *     ?ndisHandlePnPRequest@@_Y2PAGENPNP@@AJPEAU_IRP@@@Z @ 0x14017F9C0 (-ndisHandlePnPRequest@@_Y2PAGENPNP@@AJPEAU_IRP@@@Z.c)
 * Callees:
 *     ?ndisIfAllocateAndVerifyNetLuidIndex@@YAHGPEAIEE@Z @ 0x140163CC0 (-ndisIfAllocateAndVerifyNetLuidIndex@@YAHGPEAIEE@Z.c)
 */

NDIS_STATUS __stdcall NdisIfAllocateNetLuidIndex(NET_IFTYPE ifType, PUINT32 pNetLuidIndex)
{
  return ndisIfAllocateAndVerifyNetLuidIndex(ifType, pNetLuidIndex, 1u, 1u);
}
