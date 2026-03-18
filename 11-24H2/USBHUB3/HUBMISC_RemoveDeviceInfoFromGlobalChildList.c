/*
 * XREFs of HUBMISC_RemoveDeviceInfoFromGlobalChildList @ 0x14003371C
 * Callers:
 *     HUBDSM_DeletingDeviceAndDefaultEndpointOnCleanupWithPortOff @ 0x140021980 (HUBDSM_DeletingDeviceAndDefaultEndpointOnCleanupWithPortOff.c)
 *     HUBDSM_DeletingEndpointsAndDeviceOnOnCleanup @ 0x140021A30 (HUBDSM_DeletingEndpointsAndDeviceOnOnCleanup.c)
 *     HUBDSM_RemovingDeviceInfoFromGlobalListOnReportedMissingOnHubStopOnDetach @ 0x140023A70 (HUBDSM_RemovingDeviceInfoFromGlobalListOnReportedMissingOnHubStopOnDetach.c)
 *     HUBDSM_RequestingDeviceCycleInReportingToPnp @ 0x140023B70 (HUBDSM_RequestingDeviceCycleInReportingToPnp.c)
 *     HUBDSM_WaitingForPDORemovedOnDetachInConfigured @ 0x140025FF0 (HUBDSM_WaitingForPDORemovedOnDetachInConfigured.c)
 *     HUBPDO_EvtDeviceSurpriseRemoval @ 0x140082C50 (HUBPDO_EvtDeviceSurpriseRemoval.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HUBMISC_RemoveDeviceInfoFromGlobalChildList(__int64 a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  if ( *(_QWORD *)(a1 + 2160) )
    return USBD_RemoveDeviceFromGlobalList();
  v1 = *(_QWORD *)(a1 + 8);
  if ( (*(_DWORD *)(v1 + 204) & 0x200) != 0 )
    _InterlockedAnd((volatile signed __int32 *)(v1 + 1336), 0xFFFFFFBF);
  if ( *(_QWORD *)(a1 + 2160) )
    return USBD_RemoveDeviceFromGlobalList();
  return result;
}
