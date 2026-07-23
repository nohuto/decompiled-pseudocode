/*
 * XREFs of IoReleaseCancelSpinLock @ 0x1404150F0
 * Callers:
 *     <none>
 * Callees:
 *     KeWakeAddressAll @ 0x1402CA630 (KeWakeAddressAll.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x1402CA820 (KiReleaseQueuedSpinLockInstrumented.c)
 *     KxWaitForLockChainValid @ 0x1402CA8D0 (KxWaitForLockChainValid.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 */

void __stdcall IoReleaseCancelSpinLock(KIRQL Irql)
{
  volatile signed __int64 **v1; // rbx
  unsigned __int64 v2; // rdi
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  v1 = (volatile signed __int64 **)((char *)KeGetPcr()->NtTib.ArbitraryUserPointer + 112);
  v2 = Irql;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 && !PopHibernateInProgress )
  {
    KiReleaseQueuedSpinLockInstrumented(v1, retaddr);
    goto LABEL_4;
  }
  _m_prefetchw(v1);
  v3 = (__int64)*v1;
  if ( !*v1 )
  {
    if ( v1 == (volatile signed __int64 **)_InterlockedCompareExchange64(v1[1], 0LL, (signed __int64)v1) )
      goto LABEL_4;
    v3 = KxWaitForLockChainValid((__int64 *)v1);
  }
  *v1 = 0LL;
  v4 = (__int64)v1[1];
  if ( (((unsigned __int8)v4 ^ (unsigned __int8)_InterlockedExchange64((volatile __int64 *)(v3 + 8), v4)) & 4) != 0 )
    KeWakeAddressAll(v3 + 8, v4);
LABEL_4:
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), (unsigned __int8)v2);
  __writecr8(v2);
}
