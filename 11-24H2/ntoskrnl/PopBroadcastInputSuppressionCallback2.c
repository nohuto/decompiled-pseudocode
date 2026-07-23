/*
 * XREFs of PopBroadcastInputSuppressionCallback2 @ 0x140758520
 * Callers:
 *     <none>
 * Callees:
 *     Feature_InputSuppressionRespectAcLidPolicy__private_IsEnabledDeviceUsageNoInline @ 0x1405D50BC (Feature_InputSuppressionRespectAcLidPolicy__private_IsEnabledDeviceUsageNoInline.c)
 *     PopBroadcastInputSuppressionCallback @ 0x140AC54B0 (PopBroadcastInputSuppressionCallback.c)
 */

__int64 __fastcall PopBroadcastInputSuppressionCallback2(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  if ( (unsigned int)Feature_InputSuppressionRespectAcLidPolicy__private_IsEnabledDeviceUsageNoInline() )
    return PopBroadcastInputSuppressionCallback(a1, a2, a3, a4);
  else
    return 0LL;
}
