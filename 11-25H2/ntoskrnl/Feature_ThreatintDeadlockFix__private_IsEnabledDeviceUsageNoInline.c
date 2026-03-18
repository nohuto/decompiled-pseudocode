/*
 * XREFs of Feature_ThreatintDeadlockFix__private_IsEnabledDeviceUsageNoInline @ 0x140643F68
 * Callers:
 *     EtwTimLogBlockNonCetBinaries @ 0x14079C0B8 (EtwTimLogBlockNonCetBinaries.c)
 *     EtwTimLogProhibitLowILImageMap @ 0x14079CCF4 (EtwTimLogProhibitLowILImageMap.c)
 *     EtwpTimLogMitigationForProcess @ 0x140904814 (EtwpTimLogMitigationForProcess.c)
 *     EtwTimLogProhibitNonMicrosoftBinaries @ 0x140ACEE4C (EtwTimLogProhibitNonMicrosoftBinaries.c)
 * Callees:
 *     Feature_ThreatintDeadlockFix__private_IsEnabledFallback @ 0x140643FA0 (Feature_ThreatintDeadlockFix__private_IsEnabledFallback.c)
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
