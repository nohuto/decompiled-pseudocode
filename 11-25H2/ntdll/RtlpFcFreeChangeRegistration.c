/*
 * XREFs of RtlpFcFreeChangeRegistration @ 0x18003A2D4
 * Callers:
 *     RtlUnregisterFeatureConfigurationChangeNotification @ 0x1800FB290 (RtlUnregisterFeatureConfigurationChangeNotification.c)
 * Callees:
 *     TpReleaseWork @ 0x18003A420 (TpReleaseWork.c)
 *     TpWaitForWork @ 0x18003A590 (TpWaitForWork.c)
 */

__int64 __fastcall RtlpFcFreeChangeRegistration(__int64 a1)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 40);
  if ( v2 )
  {
    TpWaitForWork(v2, 1LL);
    TpReleaseWork(*(_QWORD *)(a1 + 40));
  }
  return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, a1);
}
