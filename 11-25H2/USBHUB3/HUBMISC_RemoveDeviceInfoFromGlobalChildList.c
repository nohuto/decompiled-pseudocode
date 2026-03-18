/*
 * XREFs of HUBMISC_RemoveDeviceInfoFromGlobalChildList @ 0x1400334CC
 * Callers:
 *     HUBDSM_DeletingDeviceAndDefaultEndpointOnCleanupWithPortOff @ 0x140021940 (HUBDSM_DeletingDeviceAndDefaultEndpointOnCleanupWithPortOff.c)
 *     HUBDSM_DeletingEndpointsAndDeviceOnOnCleanup @ 0x1400219F0 (HUBDSM_DeletingEndpointsAndDeviceOnOnCleanup.c)
 *     HUBDSM_RemovingDeviceInfoFromGlobalListOnReportedMissingOnHubStopOnDetach @ 0x140023A30 (HUBDSM_RemovingDeviceInfoFromGlobalListOnReportedMissingOnHubStopOnDetach.c)
 *     HUBDSM_RequestingDeviceCycleInReportingToPnp @ 0x140023B30 (HUBDSM_RequestingDeviceCycleInReportingToPnp.c)
 *     HUBDSM_WaitingForPDORemovedOnDetachInConfigured @ 0x140025FB0 (HUBDSM_WaitingForPDORemovedOnDetachInConfigured.c)
 *     HUBPDO_EvtDeviceSurpriseRemoval @ 0x140083D20 (HUBPDO_EvtDeviceSurpriseRemoval.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HUBMISC_RemoveDeviceInfoFromGlobalChildList(__int64 a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  if ( *(_QWORD *)(a1 + 2152) )
    return USBD_RemoveDeviceFromGlobalList();
  v1 = *(_QWORD *)(a1 + 8);
  if ( (*(_DWORD *)(v1 + 204) & 0x200) != 0 )
    _InterlockedAnd((volatile signed __int32 *)(v1 + 1336), 0xFFFFFFBF);
  if ( *(_QWORD *)(a1 + 2152) )
    return USBD_RemoveDeviceFromGlobalList();
  return result;
}
