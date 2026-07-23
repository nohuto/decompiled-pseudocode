/*
 * XREFs of Feature_ModernWpp__private_IsEnabledDeviceUsageNoInline @ 0x14064D73C
 * Callers:
 *     EtwpEventWriteFull @ 0x140326D30 (EtwpEventWriteFull.c)
 *     EtwpTrackProviderRegistration @ 0x14083A130 (EtwpTrackProviderRegistration.c)
 *     EtwpSetProviderTraitsCommon @ 0x1409F69B4 (EtwpSetProviderTraitsCommon.c)
 *     EtwpProviderArrivalCallback @ 0x140A3B8FC (EtwpProviderArrivalCallback.c)
 *     EtwpEnableGuid @ 0x140A3EA20 (EtwpEnableGuid.c)
 *     NtTraceControl @ 0x140A82250 (NtTraceControl.c)
 *     EtwpWriteUserEvent @ 0x140AD78A0 (EtwpWriteUserEvent.c)
 *     EtwSetInformation @ 0x140AD9290 (EtwSetInformation.c)
 *     EtwpAddRegEntryToGroup @ 0x140AD9390 (EtwpAddRegEntryToGroup.c)
 * Callees:
 *     Feature_ModernWpp__private_IsEnabledFallback @ 0x14064D774 (Feature_ModernWpp__private_IsEnabledFallback.c)
 */

__int64 Feature_ModernWpp__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_ModernWpp__private_featureState & 0x10) != 0 )
    return Feature_ModernWpp__private_featureState & 1;
  else
    return Feature_ModernWpp__private_IsEnabledFallback((unsigned int)Feature_ModernWpp__private_featureState, 3LL);
}
