/*
 * XREFs of CmFcpManagerArmFeatureUsageProviderFlushTimerDpc @ 0x140666FF0
 * Callers:
 *     <none>
 * Callees:
 *     CmFcpManagerArmFeatureUsageProviderFlushTimer @ 0x1404F8498 (CmFcpManagerArmFeatureUsageProviderFlushTimer.c)
 */

__int64 __fastcall CmFcpManagerArmFeatureUsageProviderFlushTimerDpc(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  _InterlockedAnd((volatile signed __int32 *)(a2 + 1816), 0xFFFFFFFB);
  _m_prefetchw((const void *)(a2 + 1816));
  result = (unsigned int)_InterlockedOr((volatile signed __int32 *)(a2 + 1816), 2u);
  if ( (result & 2) == 0 )
    return CmFcpManagerArmFeatureUsageProviderFlushTimer(a2);
  return result;
}
