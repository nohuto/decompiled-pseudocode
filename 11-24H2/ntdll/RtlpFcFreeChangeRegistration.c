/*
 * XREFs of RtlpFcFreeChangeRegistration @ 0x1800F7B3C
 * Callers:
 *     RtlUnregisterFeatureConfigurationChangeNotification @ 0x1800F7AC0 (RtlUnregisterFeatureConfigurationChangeNotification.c)
 * Callees:
 *     TpReleaseWork @ 0x18006CCA0 (TpReleaseWork.c)
 *     TpWaitForWork @ 0x18006D890 (TpWaitForWork.c)
 */

__int64 __fastcall RtlpFcFreeChangeRegistration(unsigned __int64 a1)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 40);
  if ( v2 )
  {
    TpWaitForWork(v2);
    TpReleaseWork(*(_QWORD *)(a1 + 40));
  }
  return RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, a1);
}
