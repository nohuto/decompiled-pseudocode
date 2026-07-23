/*
 * XREFs of RtlULongLongMult @ 0x14042A2B0
 * Callers:
 *     HalpTimerConvertPerformanceCounterToAuxiliaryCounter @ 0x140538150 (HalpTimerConvertPerformanceCounterToAuxiliaryCounter.c)
 *     HalpTimerSchedulePeriodicQueries @ 0x140539000 (HalpTimerSchedulePeriodicQueries.c)
 *     HalpSetResumeTime @ 0x1405581B8 (HalpSetResumeTime.c)
 *     RtlpFcValidateGovernedFeatures @ 0x1405F00D8 (RtlpFcValidateGovernedFeatures.c)
 *     RtlpHpVaMgrCtxStart @ 0x14060319C (RtlpHpVaMgrCtxStart.c)
 *     ExPoolQueryLimits @ 0x140652A00 (ExPoolQueryLimits.c)
 *     ExPoolSetLimit @ 0x140652BF8 (ExPoolSetLimit.c)
 *     PopFxPepPerfInfoQuery @ 0x14074C664 (PopFxPepPerfInfoQuery.c)
 *     PopFxRegisterComponentPerfStates @ 0x14074C864 (PopFxRegisterComponentPerfStates.c)
 *     PpmRegisterProfiles @ 0x1407635A0 (PpmRegisterProfiles.c)
 *     NtAlertMultipleThreadByThreadId @ 0x14077C020 (NtAlertMultipleThreadByThreadId.c)
 *     RtlpFcValidateFeatureUsageSubscriptionBuffer @ 0x14078D434 (RtlpFcValidateFeatureUsageSubscriptionBuffer.c)
 *     SdbpResolveMatchingFile @ 0x140805CD0 (SdbpResolveMatchingFile.c)
 *     RtlpMuiRegGetOrAddStringToPool @ 0x14082D340 (RtlpMuiRegGetOrAddStringToPool.c)
 *     MiCaptureSectionCreateExtendedParameters @ 0x14098AE58 (MiCaptureSectionCreateExtendedParameters.c)
 *     AuthzBasepGetClaimAttributeValueCopyoutBufferSize @ 0x140A03924 (AuthzBasepGetClaimAttributeValueCopyoutBufferSize.c)
 *     RtlpFcCalculateRequiredSizeForNewUsageSubscriptionTable @ 0x140A2B438 (RtlpFcCalculateRequiredSizeForNewUsageSubscriptionTable.c)
 *     RtlpFcCalculateRequiredSizeForNewFeatureTable @ 0x140A93B4C (RtlpFcCalculateRequiredSizeForNewFeatureTable.c)
 *     PopReadResumeContext @ 0x140AABF98 (PopReadResumeContext.c)
 *     PopFxConvertV1Components @ 0x140AB7D1C (PopFxConvertV1Components.c)
 *     PopDiagTraceFirmwareS3Stats @ 0x140B61A18 (PopDiagTraceFirmwareS3Stats.c)
 *     AnFwDisplayBackgroundUpdate @ 0x140BB3E44 (AnFwDisplayBackgroundUpdate.c)
 *     AnFwpBackgroundUpdateTimer @ 0x140BB41B0 (AnFwpBackgroundUpdateTimer.c)
 *     GetBootSystemTime @ 0x140C0CA8C (GetBootSystemTime.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlULongLongMult(ULONGLONG ullMultiplicand, ULONGLONG ullMultiplier, ULONGLONG *pullResult)
{
  if ( is_mul_ok(ullMultiplicand, ullMultiplier) )
  {
    *pullResult = ullMultiplicand * ullMultiplier;
    return 0;
  }
  else
  {
    *pullResult = -1LL;
    return -1073741675;
  }
}
