/*
 * XREFs of RtlULongLongMult @ 0x14043A9F0
 * Callers:
 *     HalpTimerConvertPerformanceCounterToAuxiliaryCounter @ 0x140538160 (HalpTimerConvertPerformanceCounterToAuxiliaryCounter.c)
 *     HalpTimerSchedulePeriodicQueries @ 0x140538F70 (HalpTimerSchedulePeriodicQueries.c)
 *     HalpSetResumeTime @ 0x140557C88 (HalpSetResumeTime.c)
 *     RtlpFcValidateGovernedFeatures @ 0x1405E6748 (RtlpFcValidateGovernedFeatures.c)
 *     RtlpHpVaMgrCtxStart @ 0x1405F981C (RtlpHpVaMgrCtxStart.c)
 *     ExPoolQueryLimits @ 0x140648408 (ExPoolQueryLimits.c)
 *     ExPoolSetLimit @ 0x140648600 (ExPoolSetLimit.c)
 *     PopFxPepPerfInfoQuery @ 0x140742264 (PopFxPepPerfInfoQuery.c)
 *     PopFxRegisterComponentPerfStates @ 0x140742464 (PopFxRegisterComponentPerfStates.c)
 *     PpmRegisterProfiles @ 0x14075411C (PpmRegisterProfiles.c)
 *     NtAlertMultipleThreadByThreadId @ 0x14076C5D0 (NtAlertMultipleThreadByThreadId.c)
 *     RtlpFcValidateFeatureUsageSubscriptionBuffer @ 0x14077E250 (RtlpFcValidateFeatureUsageSubscriptionBuffer.c)
 *     SdbpResolveMatchingFile @ 0x1407F5A20 (SdbpResolveMatchingFile.c)
 *     RtlpMuiRegGetOrAddStringToPool @ 0x14081CDD0 (RtlpMuiRegGetOrAddStringToPool.c)
 *     MiCaptureSectionCreateExtendedParameters @ 0x14093C338 (MiCaptureSectionCreateExtendedParameters.c)
 *     AuthzBasepGetClaimAttributeValueCopyoutBufferSize @ 0x140A052F8 (AuthzBasepGetClaimAttributeValueCopyoutBufferSize.c)
 *     RtlpFcCalculateRequiredSizeForNewUsageSubscriptionTable @ 0x140A30664 (RtlpFcCalculateRequiredSizeForNewUsageSubscriptionTable.c)
 *     RtlpFcCalculateRequiredSizeForNewFeatureTable @ 0x140A93040 (RtlpFcCalculateRequiredSizeForNewFeatureTable.c)
 *     PopReadResumeContext @ 0x140AABB28 (PopReadResumeContext.c)
 *     PopFxConvertV1Components @ 0x140AB8BCC (PopFxConvertV1Components.c)
 *     PopDiagTraceFirmwareS3Stats @ 0x140B4F858 (PopDiagTraceFirmwareS3Stats.c)
 *     AnFwDisplayBackgroundUpdate @ 0x140BA1E44 (AnFwDisplayBackgroundUpdate.c)
 *     AnFwpBackgroundUpdateTimer @ 0x140BA21B0 (AnFwpBackgroundUpdateTimer.c)
 *     GetBootSystemTime @ 0x140BF9A8C (GetBootSystemTime.c)
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
