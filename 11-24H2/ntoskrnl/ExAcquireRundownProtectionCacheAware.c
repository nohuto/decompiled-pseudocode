/*
 * XREFs of ExAcquireRundownProtectionCacheAware @ 0x140238FA0
 * Callers:
 *     PfpPartitionIterate @ 0x14022A280 (PfpPartitionIterate.c)
 *     PfFileInfoNotify @ 0x14022A7B0 (PfFileInfoNotify.c)
 *     PfpPartitionGetFirst @ 0x14022B450 (PfpPartitionGetFirst.c)
 *     MiProbeLockFrame @ 0x140238050 (MiProbeLockFrame.c)
 *     PfpPartitionRundownProtectionAcquire @ 0x140473AB8 (PfpPartitionRundownProtectionAcquire.c)
 *     MiSwitchToTransition @ 0x1404EEE28 (MiSwitchToTransition.c)
 *     PfpPartitionCreate @ 0x1405C9F7C (PfpPartitionCreate.c)
 * Callees:
 *     ExfAcquireRundownProtection @ 0x1402F60C0 (ExfAcquireRundownProtection.c)
 */

BOOLEAN __stdcall ExAcquireRundownProtectionCacheAware(PEX_RUNDOWN_REF_CACHE_AWARE RunRefCacheAware)
{
  struct _EX_RUNDOWN_REF *v1; // rcx
  unsigned __int64 v2; // rtt

  v1 = (_EX_RUNDOWN_REF *)((char *)RunRefCacheAware->RunRefs
                         + RunRefCacheAware->RunRefSize * (KeGetPcr()->Prcb.Number % RunRefCacheAware->Number));
  _m_prefetchw(v1);
  v2 = v1->Count & 0xFFFFFFFFFFFFFFFEuLL;
  if ( v2 == _InterlockedCompareExchange64((volatile signed __int64 *)v1, v2 + 2, v2) )
    return 1;
  else
    return ExfAcquireRundownProtection(v1);
}
