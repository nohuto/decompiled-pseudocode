/*
 * XREFs of NdisIfRegisterInterface @ 0x1400C8E30
 * Callers:
 *     <none>
 * Callees:
 *     ndisIfRegisterInterfaceEx @ 0x140087DB0 (ndisIfRegisterInterfaceEx.c)
 */

NDIS_STATUS __stdcall NdisIfRegisterInterface(
        NDIS_HANDLE NdisProviderHandle,
        NET_LUID NetLuid,
        NDIS_HANDLE ProviderIfContext,
        PNET_IF_INFORMATION pIfInfo,
        PNET_IFINDEX pfIndex)
{
  return ndisIfRegisterInterfaceEx(
           NdisProviderHandle,
           NetLuid.Value,
           (__int64)ProviderIfContext,
           (__int64)pIfInfo,
           0,
           0,
           pfIndex);
}
