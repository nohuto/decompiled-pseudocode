/*
 * XREFs of KiApplyDpcVerificationScaleSettings @ 0x1405B3268
 * Callers:
 *     KeUpdateDpcWatchdogConfiguration @ 0x1405B191C (KeUpdateDpcWatchdogConfiguration.c)
 *     KeInitSystem @ 0x140C62E30 (KeInitSystem.c)
 * Callees:
 *     <none>
 */

__int64 KiApplyDpcVerificationScaleSettings()
{
  __int64 result; // rax

  if ( ViVerifierEnabled )
  {
    KeDpcWatchdogPeriodMs *= KeVerifierDpcScalingFactor;
    KeDpcTimeoutMs *= KeVerifierDpcScalingFactor;
    KeDpcSoftTimeoutMs *= KeVerifierDpcScalingFactor;
    KeDpcCumulativeSoftTimeoutMs *= KeVerifierDpcScalingFactor;
    KeDpcWatchdogProfileSingleDpcThresholdMs *= KeVerifierDpcScalingFactor;
    result = (unsigned int)(KeVerifierDpcScalingFactor * KeDpcWatchdogProfileCumulativeDpcThresholdMs);
    KeDpcWatchdogProfileCumulativeDpcThresholdMs *= KeVerifierDpcScalingFactor;
  }
  return result;
}
