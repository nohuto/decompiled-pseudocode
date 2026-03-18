/*
 * XREFs of ExAcquireRundownProtectionCacheAware @ 0x1402ADA40
 * Callers:
 *     MiProbeLockFrame @ 0x1402ACAF0 (MiProbeLockFrame.c)
 *     PfpPartitionIterate @ 0x140301540 (PfpPartitionIterate.c)
 *     PfFileInfoNotify @ 0x140301AC0 (PfFileInfoNotify.c)
 *     PfpPartitionGetFirst @ 0x140302770 (PfpPartitionGetFirst.c)
 *     PfpPartitionRundownProtectionAcquire @ 0x1404778C0 (PfpPartitionRundownProtectionAcquire.c)
 *     MiSwitchToTransition @ 0x1404AC960 (MiSwitchToTransition.c)
 *     PfpPartitionCreate @ 0x1405C823C (PfpPartitionCreate.c)
 * Callees:
 *     ExfAcquireRundownProtection @ 0x140326BD0 (ExfAcquireRundownProtection.c)
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
