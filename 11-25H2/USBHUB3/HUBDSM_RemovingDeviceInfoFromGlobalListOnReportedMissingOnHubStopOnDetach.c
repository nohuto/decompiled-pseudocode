/*
 * XREFs of HUBDSM_RemovingDeviceInfoFromGlobalListOnReportedMissingOnHubStopOnDetach @ 0x140023A30
 * Callers:
 *     <none>
 * Callees:
 *     HUBMISC_ReleaseWdfReferenceOnPort @ 0x140033464 (HUBMISC_ReleaseWdfReferenceOnPort.c)
 *     HUBMISC_RemoveDeviceInfoFromGlobalChildList @ 0x1400334CC (HUBMISC_RemoveDeviceInfoFromGlobalChildList.c)
 */

__int64 __fastcall HUBDSM_RemovingDeviceInfoFromGlobalListOnReportedMissingOnHubStopOnDetach(__int64 a1)
{
  __int64 v1; // rbx

  v1 = *(_QWORD *)(a1 + 960);
  HUBMISC_RemoveDeviceInfoFromGlobalChildList(v1);
  HUBMISC_ReleaseWdfReferenceOnPort(v1);
  return 4077LL;
}
