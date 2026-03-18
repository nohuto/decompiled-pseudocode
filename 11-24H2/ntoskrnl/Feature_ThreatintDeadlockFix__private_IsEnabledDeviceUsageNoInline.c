/*
 * XREFs of Feature_ThreatintDeadlockFix__private_IsEnabledDeviceUsageNoInline @ 0x14064FF78
 * Callers:
 *     EtwTimLogBlockNonCetBinaries @ 0x1407AB488 (EtwTimLogBlockNonCetBinaries.c)
 *     EtwTimLogProhibitLowILImageMap @ 0x1407AC0C4 (EtwTimLogProhibitLowILImageMap.c)
 *     EtwpTimLogMitigationForProcess @ 0x140A6DB4C (EtwpTimLogMitigationForProcess.c)
 *     EtwTimLogProhibitNonMicrosoftBinaries @ 0x140AD9A3C (EtwTimLogProhibitNonMicrosoftBinaries.c)
 * Callees:
 *     Feature_ThreatintDeadlockFix__private_IsEnabledFallback @ 0x14064FFB0 (Feature_ThreatintDeadlockFix__private_IsEnabledFallback.c)
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
