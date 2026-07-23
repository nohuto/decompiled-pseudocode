/*
 * XREFs of KeQueryBasePriorityThread @ 0x14021B3D0
 * Callers:
 *     NtQueryInformationThread @ 0x1409910D0 (NtQueryInformationThread.c)
 * Callees:
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x140219638 (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x140219B50 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x140241380 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall KeQueryBasePriorityThread(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r14
  unsigned __int8 CurrentIrql; // bp
  __int64 v7; // rcx
  signed __int32 v8; // eax
  signed __int32 v9; // ett
  unsigned int v10; // edi
  unsigned int v11; // edi
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  v4 = *(_QWORD *)(a1 + 544);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2LL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
  {
    _m_prefetchw((const void *)(v4 + 64));
    v8 = *(_DWORD *)(v4 + 64) & 0x7FFFFFFF;
    while ( 1 )
    {
      v7 = (unsigned int)(v8 + 1);
      v9 = v8;
      v8 = _InterlockedCompareExchange((volatile signed __int32 *)(v4 + 64), v7, v8);
      if ( v9 == v8 )
        break;
      if ( v8 < 0 )
      {
        LOBYTE(a2) = -1;
        ExpWaitForSpinLockSharedAndAcquire((signed __int32 *)(v4 + 64), a2, a3, a4);
        break;
      }
    }
  }
  else
  {
    LOBYTE(a2) = -1;
    ExpAcquireSpinLockSharedAtDpcLevelInstrumented(v4 + 64, a2);
  }
  v10 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
  {
    do
    {
      if ( (++v10 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v7, a2, a3, a4) )
      {
        HvlNotifyLongSpinWait(v10);
      }
      else
      {
        _mm_pause();
      }
    }
    while ( *(_QWORD *)(a1 + 64) );
  }
  v11 = *(char *)(a1 + 563) - *(char *)(v4 + 144);
  if ( *(_BYTE *)(a1 + 645) )
    v11 = 16 * *(char *)(a1 + 645);
  *(_QWORD *)(a1 + 64) = 0LL;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
  {
    _InterlockedAnd((volatile signed __int32 *)(v4 + 64), 0xBFFFFFFF);
    _InterlockedDecrement((volatile signed __int32 *)(v4 + 64));
  }
  else
  {
    ExpReleaseSpinLockSharedFromDpcLevelInstrumented((volatile signed __int32 *)(v4 + 64), retaddr);
  }
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  __writecr8(CurrentIrql);
  return v11;
}
