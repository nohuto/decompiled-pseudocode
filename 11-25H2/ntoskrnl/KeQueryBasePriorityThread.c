/*
 * XREFs of KeQueryBasePriorityThread @ 0x1402FC0E0
 * Callers:
 *     NtQueryInformationThread @ 0x1409C32F0 (NtQueryInformationThread.c)
 * Callees:
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x140212BC0 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x1402FD480 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x140323E4C (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall KeQueryBasePriorityThread(__int64 a1, __int64 a2)
{
  __int64 v2; // r14
  unsigned __int8 CurrentIrql; // bp
  signed __int32 v5; // eax
  __int64 v6; // rcx
  signed __int32 v7; // ett
  unsigned int v8; // edi
  unsigned int v9; // edi
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]

  v2 = *(_QWORD *)(a1 + 544);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
  {
    _m_prefetchw((const void *)(v2 + 64));
    v5 = *(_DWORD *)(v2 + 64) & 0x7FFFFFFF;
    while ( 1 )
    {
      v6 = (unsigned int)(v5 + 1);
      v7 = v5;
      v5 = _InterlockedCompareExchange((volatile signed __int32 *)(v2 + 64), v6, v5);
      if ( v7 == v5 )
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
    ExpAcquireSpinLockSharedAtDpcLevelInstrumented((_DWORD *)(v2 + 64), 0xFFu);
  }
  v8 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
  {
    do
    {
      if ( (++v8 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v6) )
      {
        HvlNotifyLongSpinWait(v8);
      }
      else
      {
        _mm_pause();
      }
    }
    while ( *(_QWORD *)(a1 + 64) );
  }
  v9 = *(char *)(a1 + 563) - *(char *)(v2 + 144);
  if ( *(_BYTE *)(a1 + 645) )
    v9 = 16 * *(char *)(a1 + 645);
  *(_QWORD *)(a1 + 64) = 0LL;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
  {
    _InterlockedAnd((volatile signed __int32 *)(v2 + 64), 0xBFFFFFFF);
    _InterlockedDecrement((volatile signed __int32 *)(v2 + 64));
  }
  else
  {
    ExpReleaseSpinLockSharedFromDpcLevelInstrumented(v2 + 64, retaddr);
  }
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  __writecr8(CurrentIrql);
  return v9;
}
