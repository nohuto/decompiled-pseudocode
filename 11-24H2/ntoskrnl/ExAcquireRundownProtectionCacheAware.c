/*
 * XREFs of ExAcquireRundownProtectionCacheAware @ 0x140283A10
 * Callers:
 *     PfpPartitionIterate @ 0x140274CF0 (PfpPartitionIterate.c)
 *     PfFileInfoNotify @ 0x140275220 (PfFileInfoNotify.c)
 *     PfpPartitionGetFirst @ 0x140275EC0 (PfpPartitionGetFirst.c)
 *     MiProbeLockFrame @ 0x140282AC0 (MiProbeLockFrame.c)
 *     PfpPartitionRundownProtectionAcquire @ 0x140477518 (PfpPartitionRundownProtectionAcquire.c)
 *     MiSwitchToTransition @ 0x1404F1388 (MiSwitchToTransition.c)
 *     PfpPartitionCreate @ 0x1405CC80C (PfpPartitionCreate.c)
 * Callees:
 *     ExfAcquireRundownProtection @ 0x140247210 (ExfAcquireRundownProtection.c)
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
