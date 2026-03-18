/*
 * XREFs of Feature_1806129466__private_IsEnabledDeviceUsageNoInline @ 0x1405970A0
 * Callers:
 *     IopCloseWaitCompletionPacket @ 0x1404E5B40 (IopCloseWaitCompletionPacket.c)
 *     NtAssociateWaitCompletionPacket @ 0x1404E5C30 (NtAssociateWaitCompletionPacket.c)
 *     NtCancelWaitCompletionPacket @ 0x1404E5EF0 (NtCancelWaitCompletionPacket.c)
 *     NtCreateWaitCompletionPacket @ 0x140AC3670 (NtCreateWaitCompletionPacket.c)
 * Callees:
 *     Feature_1806129466__private_IsEnabledFallback @ 0x1405970D8 (Feature_1806129466__private_IsEnabledFallback.c)
 */

__int64 Feature_1806129466__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_1806129466__private_featureState & 0x10) != 0 )
    return Feature_1806129466__private_featureState & 1;
  else
    return Feature_1806129466__private_IsEnabledFallback((unsigned int)Feature_1806129466__private_featureState, 3LL);
}
