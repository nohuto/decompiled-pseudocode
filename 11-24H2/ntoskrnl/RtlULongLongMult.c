/*
 * XREFs of RtlULongLongMult @ 0x140437830
 * Callers:
 *     HalpTimerConvertPerformanceCounterToAuxiliaryCounter @ 0x14053A910 (HalpTimerConvertPerformanceCounterToAuxiliaryCounter.c)
 *     HalpTimerSchedulePeriodicQueries @ 0x14053B720 (HalpTimerSchedulePeriodicQueries.c)
 *     HalpSetResumeTime @ 0x14055A588 (HalpSetResumeTime.c)
 *     RtlpFcValidateGovernedFeatures @ 0x1405F2A98 (RtlpFcValidateGovernedFeatures.c)
 *     RtlpHpVaMgrCtxStart @ 0x140605B5C (RtlpHpVaMgrCtxStart.c)
 *     ExPoolQueryLimits @ 0x140654308 (ExPoolQueryLimits.c)
 *     ExPoolSetLimit @ 0x140654500 (ExPoolSetLimit.c)
 *     PopFxPepPerfInfoQuery @ 0x14074E334 (PopFxPepPerfInfoQuery.c)
 *     PopFxRegisterComponentPerfStates @ 0x14074E534 (PopFxRegisterComponentPerfStates.c)
 *     PpmRegisterProfiles @ 0x140763BDC (PpmRegisterProfiles.c)
 *     NtAlertMultipleThreadByThreadId @ 0x14077C170 (NtAlertMultipleThreadByThreadId.c)
 *     RtlpFcValidateFeatureUsageSubscriptionBuffer @ 0x14078D504 (RtlpFcValidateFeatureUsageSubscriptionBuffer.c)
 *     SdbpResolveMatchingFile @ 0x140805590 (SdbpResolveMatchingFile.c)
 *     RtlpMuiRegGetOrAddStringToPool @ 0x14082CB10 (RtlpMuiRegGetOrAddStringToPool.c)
 *     MiCaptureSectionCreateExtendedParameters @ 0x140940BF8 (MiCaptureSectionCreateExtendedParameters.c)
 *     AuthzBasepGetClaimAttributeValueCopyoutBufferSize @ 0x140A073F4 (AuthzBasepGetClaimAttributeValueCopyoutBufferSize.c)
 *     RtlpFcCalculateRequiredSizeForNewUsageSubscriptionTable @ 0x140A35F1C (RtlpFcCalculateRequiredSizeForNewUsageSubscriptionTable.c)
 *     RtlpFcCalculateRequiredSizeForNewFeatureTable @ 0x140A9731C (RtlpFcCalculateRequiredSizeForNewFeatureTable.c)
 *     PopReadResumeContext @ 0x140AB1028 (PopReadResumeContext.c)
 *     PopFxConvertV1Components @ 0x140ABCCB0 (PopFxConvertV1Components.c)
 *     PopDiagTraceFirmwareS3Stats @ 0x140B5F998 (PopDiagTraceFirmwareS3Stats.c)
 *     AnFwDisplayBackgroundUpdate @ 0x140BB1E44 (AnFwDisplayBackgroundUpdate.c)
 *     AnFwpBackgroundUpdateTimer @ 0x140BB21B0 (AnFwpBackgroundUpdateTimer.c)
 *     GetBootSystemTime @ 0x140C0AA8C (GetBootSystemTime.c)
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
