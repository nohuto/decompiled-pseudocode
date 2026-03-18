/*
 * XREFs of MiPurgePartitionStandby @ 0x140342C30
 * Callers:
 *     MiMirrorPurgePartitionPages @ 0x1404B4CD0 (MiMirrorPurgePartitionPages.c)
 *     MiTrimAllSystemPagableMemory @ 0x14066D43C (MiTrimAllSystemPagableMemory.c)
 *     MmPerformMemoryListCommand @ 0x140B5EAC0 (MmPerformMemoryListCommand.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiRemoveLowestPriorityStandbyPage @ 0x140342DE0 (MiRemoveLowestPriorityStandbyPage.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x140343510 (MiInsertPageInFreeOrZeroedList.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall MiPurgePartitionStandby(__int64 a1, unsigned int a2)
{
  unsigned __int8 CurrentIrql; // bp
  __int64 v5; // rax
  ULONG_PTR v6; // rsi
  __int64 v7; // rbx
  int v8; // edi
  __int64 result; // rax

  while ( 1 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql);
    v5 = MiRemoveLowestPriorityStandbyPage(a1, a2, 512LL);
    v6 = v5;
    if ( v5 == -1 )
      break;
    v7 = 48 * v5 - 0x220000000000LL;
    v8 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v7 + 24), 0x3FuLL) )
    {
      do
      {
        if ( (++v8 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && KiCheckVpBackingLongSpinWaitHypercall() )
        {
          HvlNotifyLongSpinWait();
        }
        else
        {
          _mm_pause();
        }
      }
      while ( *(__int64 *)(v7 + 24) < 0 );
    }
    *(_QWORD *)(v7 + 24) |= 0x4000000000000000uLL;
    MiInsertPageInFreeOrZeroedList(v6);
    _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
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
