/*
 * XREFs of MiPurgePartitionStandby @ 0x140220D50
 * Callers:
 *     MiMirrorPurgePartitionPages @ 0x1404B45F0 (MiMirrorPurgePartitionPages.c)
 *     MiTrimAllSystemPagableMemory @ 0x140678D48 (MiTrimAllSystemPagableMemory.c)
 *     MmPerformMemoryListCommand @ 0x140B6DB74 (MmPerformMemoryListCommand.c)
 * Callees:
 *     MiRemoveLowestPriorityStandbyPage @ 0x140220F00 (MiRemoveLowestPriorityStandbyPage.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x140222210 (MiInsertPageInFreeOrZeroedList.c)
 *     HvlNotifyLongSpinWait @ 0x140293260 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140293290 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall MiPurgePartitionStandby(__int64 a1, unsigned int a2, __int64 a3)
{
  unsigned __int8 CurrentIrql; // bp
  __int64 v6; // rax
  ULONG_PTR v7; // rsi
  unsigned __int64 v8; // rcx
  __int64 v9; // rbx
  unsigned int v10; // edi
  __int64 result; // rax

  while ( 1 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2LL, a3);
    v6 = MiRemoveLowestPriorityStandbyPage(a1, a2, 512LL);
    v7 = v6;
    if ( v6 == -1 )
      break;
    v8 = 0xFFFFDE0000000000uLL;
    v9 = 48 * v6 - 0x220000000000LL;
    v10 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v9 + 24), 0x3FuLL) )
    {
      do
      {
        if ( (++v10 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v8) )
        {
          HvlNotifyLongSpinWait(v10);
        }
        else
        {
          _mm_pause();
        }
      }
      while ( *(__int64 *)(v9 + 24) < 0 );
    }
    *(_QWORD *)(v9 + 24) |= 0x4000000000000000uLL;
    MiInsertPageInFreeOrZeroedList(v7);
    _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    __writecr8(CurrentIrql);
  }
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
