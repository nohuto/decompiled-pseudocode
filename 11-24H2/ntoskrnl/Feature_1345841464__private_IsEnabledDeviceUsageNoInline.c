/*
 * XREFs of Feature_1345841464__private_IsEnabledDeviceUsageNoInline @ 0x14064D6E8
 * Callers:
 *     EtwpEventWriteFull @ 0x140326D30 (EtwpEventWriteFull.c)
 *     EtwpWriteUserEvent @ 0x140AD78A0 (EtwpWriteUserEvent.c)
 * Callees:
 *     Feature_1345841464__private_IsEnabledFallback @ 0x14064D720 (Feature_1345841464__private_IsEnabledFallback.c)
 */

__int64 Feature_1345841464__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_1345841464__private_featureState & 0x10) != 0 )
    return Feature_1345841464__private_featureState & 1;
  else
    return Feature_1345841464__private_IsEnabledFallback((unsigned int)Feature_1345841464__private_featureState, 3LL);
}
