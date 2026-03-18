/*
 * XREFs of Feature_InputSuppressionRespectAcLidPolicy__private_IsEnabledDeviceUsageNoInline @ 0x1405D7B9C
 * Callers:
 *     PopBroadcastInputSuppressionCallback2 @ 0x14075A100 (PopBroadcastInputSuppressionCallback2.c)
 *     PopBroadcastInputSuppressionCallback @ 0x140AC7A50 (PopBroadcastInputSuppressionCallback.c)
 *     PopEvaluateInputSuppressionAction @ 0x140AC7B10 (PopEvaluateInputSuppressionAction.c)
 * Callees:
 *     Feature_InputSuppressionRespectAcLidPolicy__private_IsEnabledFallback @ 0x1405D7BD4 (Feature_InputSuppressionRespectAcLidPolicy__private_IsEnabledFallback.c)
 */

__int64 Feature_InputSuppressionRespectAcLidPolicy__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_InputSuppressionRespectAcLidPolicy__private_featureState & 0x10) != 0 )
    return Feature_InputSuppressionRespectAcLidPolicy__private_featureState & 1;
  else
    return Feature_InputSuppressionRespectAcLidPolicy__private_IsEnabledFallback(
             (unsigned int)Feature_InputSuppressionRespectAcLidPolicy__private_featureState,
             3LL);
}
