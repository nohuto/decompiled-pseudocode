/*
 * XREFs of CmFcpManagerArmFeatureUsageProviderFlushTimerDpc @ 0x14065CC30
 * Callers:
 *     <none>
 * Callees:
 *     CmFcpManagerArmFeatureUsageProviderFlushTimer @ 0x1404F8718 (CmFcpManagerArmFeatureUsageProviderFlushTimer.c)
 */

__int64 __fastcall CmFcpManagerArmFeatureUsageProviderFlushTimerDpc(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  _InterlockedAnd((volatile signed __int32 *)(a2 + 1744), 0xFFFFFFFB);
  _m_prefetchw((const void *)(a2 + 1744));
  result = (unsigned int)_InterlockedOr((volatile signed __int32 *)(a2 + 1744), 2u);
  if ( (result & 2) == 0 )
    return CmFcpManagerArmFeatureUsageProviderFlushTimer(a2);
  return result;
}
