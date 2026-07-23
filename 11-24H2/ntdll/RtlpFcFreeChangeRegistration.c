/*
 * XREFs of RtlpFcFreeChangeRegistration @ 0x1800F26AC
 * Callers:
 *     RtlUnregisterFeatureConfigurationChangeNotification @ 0x1800F2630 (RtlUnregisterFeatureConfigurationChangeNotification.c)
 * Callees:
 *     TpReleaseWork @ 0x180089580 (TpReleaseWork.c)
 *     TpWaitForWork @ 0x18008A170 (TpWaitForWork.c)
 */

LOGICAL __fastcall RtlpFcFreeChangeRegistration(PTP_WORK *a1)
{
  _TP_WORK *v2; // rcx

  v2 = a1[5];
  if ( v2 )
  {
    TpWaitForWork(v2, 1u);
    TpReleaseWork(a1[5]);
  }
  return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, a1);
}
