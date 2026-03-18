/*
 * XREFs of HUBDSM_DeletingDeviceAndDefaultEndpointOnCleanupAfterDetach @ 0x1400219E0
 * Callers:
 *     <none>
 * Callees:
 *     HUBPDO_SignalPnpPowerEvent @ 0x14001BAFC (HUBPDO_SignalPnpPowerEvent.c)
 *     HUBUCX_DeleteDefaultEndpointFromUCX @ 0x140026BAC (HUBUCX_DeleteDefaultEndpointFromUCX.c)
 *     HUBUCX_DeleteDeviceFromUCX @ 0x140026BE8 (HUBUCX_DeleteDeviceFromUCX.c)
 *     HUBUCX_DeleteEndpointsAndFreeResourcesForConfiguration @ 0x140026C20 (HUBUCX_DeleteEndpointsAndFreeResourcesForConfiguration.c)
 */

__int64 __fastcall HUBDSM_DeletingDeviceAndDefaultEndpointOnCleanupAfterDetach(__int64 a1)
{
  __int64 v1; // rbx

  v1 = *(_QWORD *)(a1 + 960);
  if ( *(_QWORD *)(v1 + 48) )
  {
    HUBUCX_DeleteEndpointsAndFreeResourcesForConfiguration(*(_QWORD *)(a1 + 960));
    *(_QWORD *)(v1 + 48) = 0LL;
  }
  HUBUCX_DeleteDefaultEndpointFromUCX(v1);
  HUBUCX_DeleteDeviceFromUCX(v1);
  HUBPDO_SignalPnpPowerEvent(v1);
  return 4077LL;
}
