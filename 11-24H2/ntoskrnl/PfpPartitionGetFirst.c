/*
 * XREFs of PfpPartitionGetFirst @ 0x140275EC0
 * Callers:
 *     PfpPartitionIterate @ 0x140274CF0 (PfpPartitionIterate.c)
 *     PfFileInfoNotify @ 0x140275220 (PfFileInfoNotify.c)
 * Callees:
 *     ExAcquireRundownProtectionCacheAware @ 0x140283A10 (ExAcquireRundownProtectionCacheAware.c)
 *     KxWaitForLockOwnerShip @ 0x1402D6990 (KxWaitForLockOwnerShip.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1402D85F0 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KeWakeAddressAll @ 0x140321AA0 (KeWakeAddressAll.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x140321C90 (KiReleaseQueuedSpinLockInstrumented.c)
 *     KxWaitForLockChainValid @ 0x140321D40 (KxWaitForLockChainValid.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 */

_QWORD *__fastcall PfpPartitionGetFirst(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int8 CurrentIrql; // di
  _QWORD *v6; // rdi
  _QWORD *v7; // rbx
  _QWORD *v8; // rsi
  unsigned __int64 v9; // rbx
  __int64 v11; // rax
  volatile signed __int64 *v12; // rdx
  __int64 v13; // [rsp+20h] [rbp-28h] BYREF
  volatile signed __int64 *v14; // [rsp+28h] [rbp-20h]
  __int64 v15; // [rsp+30h] [rbp-18h]
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h]

  v15 = 0LL;
  v13 = 0LL;
  v14 = (volatile signed __int64 *)a1;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags != (unsigned __int8)v13 )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2LL);
  LOBYTE(v15) = CurrentIrql;
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
  {
    if ( _InterlockedExchange64((volatile __int64 *)a1, (__int64)&v13) )
      KxWaitForLockOwnerShip(&v13);
  }
  else
  {
    KiAcquireQueuedSpinLockInstrumented(&v13, a1);
  }
  v6 = *(_QWORD **)(a1 + 8);
  v7 = (_QWORD *)(a1 + 8);
  while ( v6 != v7 )
  {
    v8 = v6 - 3;
    if ( ExAcquireRundownProtectionCacheAware((PEX_RUNDOWN_REF_CACHE_AWARE)*(v6 - 1)) )
      goto LABEL_9;
    v6 = (_QWORD *)*v6;
  }
  v8 = 0LL;
LABEL_9:
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 && !PopHibernateInProgress )
  {
    KiReleaseQueuedSpinLockInstrumented(&v13, retaddr);
    goto LABEL_12;
  }
  _m_prefetchw(&v13);
  v11 = v13;
  if ( !v13 )
  {
    if ( (__int64 *)_InterlockedCompareExchange64(v14, 0LL, (signed __int64)&v13) == &v13 )
      goto LABEL_12;
    v11 = KxWaitForLockChainValid(&v13);
  }
  v13 = 0LL;
  v12 = v14;
  if ( (((unsigned __int8)v12 ^ (unsigned __int8)_InterlockedExchange64((volatile __int64 *)(v11 + 8), (__int64)v14)) & 4) != 0 )
    KeWakeAddressAll(v11 + 8, v12, a3, a4);
LABEL_12:
  v9 = (unsigned __int8)v15;
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), (unsigned __int8)v15);
  __writecr8(v9);
  return v8;
}
