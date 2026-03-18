/*
 * XREFs of Feature_HShellAppComandInputMessageSourceCleanup__private_IsEnabledDeviceUsage @ 0x1C0139A64
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C0109880 (xxxRealDefWindowProc.c)
 *     xxxProcessEventMessage @ 0x1C0125980 (xxxProcessEventMessage.c)
 * Callees:
 *     Feature_HShellAppComandInputMessageSourceCleanup__private_IsEnabledFallback @ 0x1C0139A9C (Feature_HShellAppComandInputMessageSourceCleanup__private_IsEnabledFallback.c)
 */

__int64 Feature_HShellAppComandInputMessageSourceCleanup__private_IsEnabledDeviceUsage()
{
  if ( (Feature_HShellAppComandInputMessageSourceCleanup__private_featureState & 0x10) != 0 )
    return Feature_HShellAppComandInputMessageSourceCleanup__private_featureState & 1;
  else
    return Feature_HShellAppComandInputMessageSourceCleanup__private_IsEnabledFallback(
             (unsigned int)Feature_HShellAppComandInputMessageSourceCleanup__private_featureState,
             3LL);
}
