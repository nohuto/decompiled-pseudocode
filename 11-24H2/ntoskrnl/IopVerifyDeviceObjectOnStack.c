/*
 * XREFs of IopVerifyDeviceObjectOnStack @ 0x14040A8E0
 * Callers:
 *     IopCheckTopDeviceHint @ 0x1409DE490 (IopCheckTopDeviceHint.c)
 * Callees:
 *     KeWakeAddressAll @ 0x1402CA630 (KeWakeAddressAll.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x1402CA820 (KiReleaseQueuedSpinLockInstrumented.c)
 *     KxWaitForLockChainValid @ 0x1402CA8D0 (KxWaitForLockChainValid.c)
 *     KeReleaseQueuedSpinLock @ 0x1402CB820 (KeReleaseQueuedSpinLock.c)
 *     KxWaitForLockOwnerShip @ 0x140357C10 (KxWaitForLockOwnerShip.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140359870 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 */

char __fastcall IopVerifyDeviceObjectOnStack(__int64 a1, __int64 a2, char a3)
{
  KIRQL CurrentIrql; // si
  char *v7; // rcx
  volatile __int64 *v8; // r8
  _QWORD *v9; // rdx
  volatile signed __int64 **v11; // rbx
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  CurrentIrql = 0;
  if ( a3 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2LL);
    v7 = (char *)KeGetPcr()->NtTib.ArbitraryUserPointer + 160;
    v8 = (volatile __int64 *)*((_QWORD *)v7 + 1);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
    {
      v9 = (_QWORD *)_InterlockedExchange64(v8, (__int64)v7);
      if ( v9 )
        KxWaitForLockOwnerShip((__int64)v7, v9);
    }
    else
    {
      KiAcquireQueuedSpinLockInstrumented((__int64)v7, v8);
    }
  }
  do
  {
    if ( a1 == a2 )
    {
      if ( !a3 )
        return 1;
      v11 = (volatile signed __int64 **)((char *)KeGetPcr()->NtTib.ArbitraryUserPointer + 160);
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 && !PopHibernateInProgress )
      {
        KiReleaseQueuedSpinLockInstrumented(v11, retaddr);
LABEL_16:
        if ( KiIrqlFlags )
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
        __writecr8(CurrentIrql);
        return 1;
      }
      _m_prefetchw(v11);
      v12 = (__int64)*v11;
      if ( !*v11 )
      {
        if ( v11 == (volatile signed __int64 **)_InterlockedCompareExchange64(v11[1], 0LL, (signed __int64)v11) )
          goto LABEL_16;
        v12 = KxWaitForLockChainValid((__int64 *)v11);
      }
      *v11 = 0LL;
      v13 = (__int64)v11[1];
      if ( (((unsigned __int8)v13 ^ (unsigned __int8)_InterlockedExchange64((volatile __int64 *)(v12 + 8), v13)) & 4) != 0 )
        KeWakeAddressAll(v12 + 8, v13);
      goto LABEL_16;
    }
    a1 = *(_QWORD *)(a1 + 24);
  }
  while ( a1 );
  if ( a3 )
    KeReleaseQueuedSpinLock(0xAuLL, CurrentIrql);
  return 0;
}
