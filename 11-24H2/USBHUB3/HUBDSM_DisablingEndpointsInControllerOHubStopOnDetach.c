/*
 * XREFs of HUBDSM_DisablingEndpointsInControllerOHubStopOnDetach @ 0x1400218D0
 * Callers:
 *     <none>
 * Callees:
 *     HUBUCX_DisableAllEndpointsForCurrentConfigurationUsingUCXIoctl @ 0x140026D7C (HUBUCX_DisableAllEndpointsForCurrentConfigurationUsingUCXIoctl.c)
 */

__int64 __fastcall HUBDSM_DisablingEndpointsInControllerOHubStopOnDetach(__int64 a1)
{
  HUBUCX_DisableAllEndpointsForCurrentConfigurationUsingUCXIoctl(*(_QWORD *)(a1 + 960));
  return 1000LL;
}
