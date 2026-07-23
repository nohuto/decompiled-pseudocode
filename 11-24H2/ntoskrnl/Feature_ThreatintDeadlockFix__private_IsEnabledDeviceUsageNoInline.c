/*
 * XREFs of Feature_ThreatintDeadlockFix__private_IsEnabledDeviceUsageNoInline @ 0x14064E5BC
 * Callers:
 *     EtwTimLogBlockNonCetBinaries @ 0x1407AB958 (EtwTimLogBlockNonCetBinaries.c)
 *     EtwTimLogProhibitLowILImageMap @ 0x1407AC594 (EtwTimLogProhibitLowILImageMap.c)
 *     EtwpTimLogMitigationForProcess @ 0x140A63DF0 (EtwpTimLogMitigationForProcess.c)
 *     EtwTimLogProhibitNonMicrosoftBinaries @ 0x140ADB280 (EtwTimLogProhibitNonMicrosoftBinaries.c)
 * Callees:
 *     Feature_ThreatintDeadlockFix__private_IsEnabledFallback @ 0x14064E5F4 (Feature_ThreatintDeadlockFix__private_IsEnabledFallback.c)
 */

__int64 Feature_ThreatintDeadlockFix__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_ThreatintDeadlockFix__private_featureState & 0x10) != 0 )
    return Feature_ThreatintDeadlockFix__private_featureState & 1;
  else
    return Feature_ThreatintDeadlockFix__private_IsEnabledFallback(
             (unsigned int)Feature_ThreatintDeadlockFix__private_featureState,
             3LL);
}
