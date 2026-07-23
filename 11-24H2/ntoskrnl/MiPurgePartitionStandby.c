/*
 * XREFs of MiPurgePartitionStandby @ 0x14024DAA0
 * Callers:
 *     MiMirrorPurgePartitionPages @ 0x1404AEE30 (MiMirrorPurgePartitionPages.c)
 *     MiTrimAllSystemPagableMemory @ 0x140679F28 (MiTrimAllSystemPagableMemory.c)
 *     MmPerformMemoryListCommand @ 0x140B6F414 (MmPerformMemoryListCommand.c)
 * Callees:
 *     MiRemoveLowestPriorityStandbyPage @ 0x14024DC50 (MiRemoveLowestPriorityStandbyPage.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x14024EF60 (MiInsertPageInFreeOrZeroedList.c)
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall MiPurgePartitionStandby(__int64 a1, unsigned int a2)
{
  unsigned __int8 CurrentIrql; // bp
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  ULONG_PTR v9; // rsi
  unsigned __int64 v10; // rcx
  __int64 v11; // rbx
  unsigned int v12; // edi
  __int64 result; // rax

  while ( 1 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2LL);
    v5 = MiRemoveLowestPriorityStandbyPage(a1, a2, 512LL);
    v9 = v5;
    if ( v5 == -1 )
      break;
    v10 = 0xFFFFDE0000000000uLL;
    v11 = 48 * v5 - 0x220000000000LL;
    v12 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v11 + 24), 0x3FuLL) )
    {
      do
      {
        if ( (++v12 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v10, v6, v7, v8) )
        {
          HvlNotifyLongSpinWait(v12);
        }
        else
        {
          _mm_pause();
        }
      }
      while ( *(__int64 *)(v11 + 24) < 0 );
    }
    *(_QWORD *)(v11 + 24) |= 0x4000000000000000uLL;
    MiInsertPageInFreeOrZeroedList(v9);
    _InterlockedAnd64((volatile signed __int64 *)(v11 + 24), 0x7FFFFFFFFFFFFFFFuLL);
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
