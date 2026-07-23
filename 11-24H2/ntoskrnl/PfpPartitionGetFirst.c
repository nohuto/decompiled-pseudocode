/*
 * XREFs of PfpPartitionGetFirst @ 0x14022B450
 * Callers:
 *     PfpPartitionIterate @ 0x14022A280 (PfpPartitionIterate.c)
 *     PfFileInfoNotify @ 0x14022A7B0 (PfFileInfoNotify.c)
 * Callees:
 *     ExAcquireRundownProtectionCacheAware @ 0x140238FA0 (ExAcquireRundownProtectionCacheAware.c)
 *     KeWakeAddressAll @ 0x1402CA630 (KeWakeAddressAll.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x1402CA820 (KiReleaseQueuedSpinLockInstrumented.c)
 *     KxWaitForLockChainValid @ 0x1402CA8D0 (KxWaitForLockChainValid.c)
 *     KxWaitForLockOwnerShip @ 0x140357C10 (KxWaitForLockOwnerShip.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140359870 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 */

_QWORD *__fastcall PfpPartitionGetFirst(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int8 CurrentIrql; // di
  __int64 v6; // rdx
  _QWORD *v7; // rdi
  _QWORD *v8; // rbx
  _QWORD *v9; // rsi
  unsigned __int64 v10; // rbx
  __int64 v12; // rax
  volatile signed __int64 *v13; // rdx
  __int64 v14; // [rsp+20h] [rbp-28h] BYREF
  volatile signed __int64 *v15; // [rsp+28h] [rbp-20h]
  __int64 v16; // [rsp+30h] [rbp-18h]
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h]

  v16 = 0LL;
  v14 = 0LL;
  v15 = (volatile signed __int64 *)a1;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags != (unsigned __int8)v14 )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2LL);
  LOBYTE(v16) = CurrentIrql;
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
  {
    v6 = _InterlockedExchange64((volatile __int64 *)a1, (__int64)&v14);
    if ( v6 )
      KxWaitForLockOwnerShip(&v14, v6);
  }
  else
  {
    KiAcquireQueuedSpinLockInstrumented(&v14, a1);
  }
  v7 = *(_QWORD **)(a1 + 8);
  v8 = (_QWORD *)(a1 + 8);
  while ( v7 != v8 )
  {
    v9 = v7 - 3;
    if ( ExAcquireRundownProtectionCacheAware((PEX_RUNDOWN_REF_CACHE_AWARE)*(v7 - 1)) )
      goto LABEL_9;
    v7 = (_QWORD *)*v7;
  }
  v9 = 0LL;
LABEL_9:
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 && !PopHibernateInProgress )
  {
    KiReleaseQueuedSpinLockInstrumented(&v14, retaddr);
    goto LABEL_12;
  }
  _m_prefetchw(&v14);
  v12 = v14;
  if ( !v14 )
  {
    if ( (__int64 *)_InterlockedCompareExchange64(v15, 0LL, (signed __int64)&v14) == &v14 )
      goto LABEL_12;
    v12 = KxWaitForLockChainValid(&v14);
  }
  v14 = 0LL;
  v13 = v15;
  if ( (((unsigned __int8)v13 ^ (unsigned __int8)_InterlockedExchange64((volatile __int64 *)(v12 + 8), (__int64)v15)) & 4) != 0 )
    KeWakeAddressAll(v12 + 8, v13, a3, a4);
LABEL_12:
  v10 = (unsigned __int8)v16;
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), (unsigned __int8)v16);
  __writecr8(v10);
  return v9;
}
