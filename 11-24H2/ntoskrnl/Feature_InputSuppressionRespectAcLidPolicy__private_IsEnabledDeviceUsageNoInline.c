/*
 * XREFs of Feature_InputSuppressionRespectAcLidPolicy__private_IsEnabledDeviceUsageNoInline @ 0x1405D50BC
 * Callers:
 *     PopBroadcastInputSuppressionCallback2 @ 0x140758520 (PopBroadcastInputSuppressionCallback2.c)
 *     PopBroadcastInputSuppressionCallback @ 0x140AC54B0 (PopBroadcastInputSuppressionCallback.c)
 *     PopEvaluateInputSuppressionAction @ 0x140AC5570 (PopEvaluateInputSuppressionAction.c)
 * Callees:
 *     Feature_InputSuppressionRespectAcLidPolicy__private_IsEnabledFallback @ 0x1405D50F4 (Feature_InputSuppressionRespectAcLidPolicy__private_IsEnabledFallback.c)
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
