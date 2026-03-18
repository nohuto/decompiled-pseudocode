/*
 * XREFs of PfpPartitionGetFirst @ 0x140302770
 * Callers:
 *     PfpPartitionIterate @ 0x140301540 (PfpPartitionIterate.c)
 *     PfFileInfoNotify @ 0x140301AC0 (PfFileInfoNotify.c)
 * Callees:
 *     KeWakeAddressAll @ 0x14028A700 (KeWakeAddressAll.c)
 *     KxWaitForLockChainValid @ 0x14028A940 (KxWaitForLockChainValid.c)
 *     ExAcquireRundownProtectionCacheAware @ 0x1402ADA40 (ExAcquireRundownProtectionCacheAware.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x1402FF4DC (KiReleaseQueuedSpinLockInstrumented.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140301030 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KxWaitForLockOwnerShip @ 0x140301110 (KxWaitForLockOwnerShip.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 */

_QWORD *__fastcall PfpPartitionGetFirst(__int64 a1)
{
  unsigned __int8 CurrentIrql; // di
  struct _KPRCB **v3; // rdx
  _QWORD *v4; // rdi
  _QWORD *v5; // rbx
  _QWORD *v6; // rsi
  volatile signed __int64 *v7; // rax
  volatile signed __int64 *v8; // rdx
  unsigned __int64 v9; // rbx
  volatile signed __int64 *v11; // [rsp+20h] [rbp-28h] BYREF
  volatile signed __int64 *v12; // [rsp+28h] [rbp-20h]
  __int64 v13; // [rsp+30h] [rbp-18h]
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  v13 = 0LL;
  v11 = 0LL;
  v12 = (volatile signed __int64 *)a1;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags != (unsigned __int8)v11 )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql);
  LOBYTE(v13) = CurrentIrql;
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
  {
    v3 = (struct _KPRCB **)_InterlockedExchange64((volatile __int64 *)a1, (__int64)&v11);
    if ( v3 )
      KxWaitForLockOwnerShip((struct _KPRCB *)&v11, v3);
  }
  else
  {
    KiAcquireQueuedSpinLockInstrumented((__int64)&v11, (volatile __int64 *)a1);
  }
  v4 = *(_QWORD **)(a1 + 8);
  v5 = (_QWORD *)(a1 + 8);
  while ( v4 != v5 )
  {
    v6 = v4 - 3;
    if ( ExAcquireRundownProtectionCacheAware((PEX_RUNDOWN_REF_CACHE_AWARE)*(v4 - 1)) )
      goto LABEL_9;
    v4 = (_QWORD *)*v4;
  }
  v6 = 0LL;
LABEL_9:
  if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
  {
    _m_prefetchw(&v11);
    v7 = v11;
    if ( !v11 )
    {
      if ( (volatile signed __int64 **)_InterlockedCompareExchange64(v12, 0LL, (signed __int64)&v11) == &v11 )
        goto LABEL_15;
      v7 = (volatile signed __int64 *)KxWaitForLockChainValid((__int64 *)&v11);
    }
    v11 = 0LL;
    v8 = v12;
    if ( (((unsigned __int8)v8 ^ (unsigned __int8)_InterlockedExchange64(v7 + 1, (__int64)v12)) & 4) != 0 )
      KeWakeAddressAll((unsigned __int64)(v7 + 1), (__int64)v8);
  }
  else
  {
    KiReleaseQueuedSpinLockInstrumented(&v11, retaddr);
  }
LABEL_15:
  v9 = (unsigned __int8)v13;
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), (unsigned __int8)v13);
  __writecr8(v9);
  return v6;
}
