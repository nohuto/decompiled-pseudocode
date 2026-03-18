/*
 * XREFs of KeQueryBasePriorityThread @ 0x1402C3D10
 * Callers:
 *     NtQueryInformationThread @ 0x1409A7C80 (NtQueryInformationThread.c)
 * Callees:
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x1402465FC (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 *     HvlNotifyLongSpinWait @ 0x140293260 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140293290 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x1402C4AD0 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x1402DFAA0 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall KeQueryBasePriorityThread(__int64 a1, __int64 a2)
{
  __int64 v2; // r14
  unsigned __int8 CurrentIrql; // bp
  signed __int32 v5; // eax
  signed __int32 v6; // ett
  unsigned int v7; // edi
  unsigned int v8; // edi
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  v2 = *(_QWORD *)(a1 + 544);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2LL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
  {
    _m_prefetchw((const void *)(v2 + 64));
    v5 = *(_DWORD *)(v2 + 64) & 0x7FFFFFFF;
    while ( 1 )
    {
      v6 = v5;
      v5 = _InterlockedCompareExchange((volatile signed __int32 *)(v2 + 64), v5 + 1, v5);
      if ( v6 == v5 )
        break;
      if ( v5 < 0 )
      {
        LOBYTE(a2) = -1;
        ExpWaitForSpinLockSharedAndAcquire(v2 + 64, a2);
        break;
      }
    }
  }
  else
  {
    LOBYTE(a2) = -1;
    ExpAcquireSpinLockSharedAtDpcLevelInstrumented(v2 + 64, a2);
  }
  v7 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
  {
    do
    {
      if ( (++v7 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && KiCheckVpBackingLongSpinWaitHypercall() )
      {
        HvlNotifyLongSpinWait(v7);
      }
      else
      {
        _mm_pause();
      }
    }
    while ( *(_QWORD *)(a1 + 64) );
  }
  v8 = *(char *)(a1 + 563) - *(char *)(v2 + 144);
  if ( *(_BYTE *)(a1 + 645) )
    v8 = 16 * *(char *)(a1 + 645);
  *(_QWORD *)(a1 + 64) = 0LL;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
  {
    _InterlockedAnd((volatile signed __int32 *)(v2 + 64), 0xBFFFFFFF);
    _InterlockedDecrement((volatile signed __int32 *)(v2 + 64));
  }
  else
  {
    ExpReleaseSpinLockSharedFromDpcLevelInstrumented((volatile signed __int32 *)(v2 + 64), retaddr);
  }
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  __writecr8(CurrentIrql);
  return v8;
}
