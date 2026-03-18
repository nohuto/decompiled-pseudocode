/*
 * XREFs of HUBDSM_PreparingEndpointAndInterfaceListsOnClientReset @ 0x140023510
 * Callers:
 *     <none>
 * Callees:
 *     HUBMISC_PrepareEndpointAndInterfaceListsForConfiguringDeviceOnReset @ 0x140031314 (HUBMISC_PrepareEndpointAndInterfaceListsForConfiguringDeviceOnReset.c)
 */

__int64 __fastcall HUBDSM_PreparingEndpointAndInterfaceListsOnClientReset(__int64 a1)
{
  return HUBMISC_PrepareEndpointAndInterfaceListsForConfiguringDeviceOnReset(*(_QWORD *)(a1 + 960));
}
