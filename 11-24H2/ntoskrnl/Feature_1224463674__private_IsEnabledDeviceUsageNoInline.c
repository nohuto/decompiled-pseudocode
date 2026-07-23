/*
 * XREFs of Feature_1224463674__private_IsEnabledDeviceUsageNoInline @ 0x14064D46C
 * Callers:
 *     EtwpTraceThreadRundown @ 0x1404ECB50 (EtwpTraceThreadRundown.c)
 *     EtwTraceThread @ 0x1408FCF28 (EtwTraceThread.c)
 * Callees:
 *     Feature_1224463674__private_IsEnabledFallback @ 0x14064D4A4 (Feature_1224463674__private_IsEnabledFallback.c)
 */

__int64 Feature_1224463674__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_1224463674__private_featureState & 0x10) != 0 )
    return Feature_1224463674__private_featureState & 1;
  else
    return Feature_1224463674__private_IsEnabledFallback((unsigned int)Feature_1224463674__private_featureState, 3LL);
}
