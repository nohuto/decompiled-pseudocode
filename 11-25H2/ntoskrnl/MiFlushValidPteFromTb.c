/*
 * XREFs of MiFlushValidPteFromTb @ 0x1403FF67C
 * Callers:
 *     MiTransformValidPteUsingAccessedBit @ 0x1403FF444 (MiTransformValidPteUsingAccessedBit.c)
 * Callees:
 *     MiReleaseProcessorFlushList @ 0x140237CC0 (MiReleaseProcessorFlushList.c)
 *     MiGetLeafVa @ 0x1402B5480 (MiGetLeafVa.c)
 *     MiInsertRecursiveTbFlushEntries @ 0x1402FB420 (MiInsertRecursiveTbFlushEntries.c)
 *     MiVaToFlushVm @ 0x140327844 (MiVaToFlushVm.c)
 *     MiFlushTbList @ 0x14032BCA0 (MiFlushTbList.c)
 *     MiGetProcessorFlushList @ 0x140381500 (MiGetProcessorFlushList.c)
 *     MiInitializeTbFlushList @ 0x140388790 (MiInitializeTbFlushList.c)
 *     MiInsertLargeTbFlushEntry @ 0x14038BC74 (MiInsertLargeTbFlushEntry.c)
 */

__int64 *__fastcall MiFlushValidPteFromTb(unsigned __int64 a1, char a2, int a3, int a4)
{
  unsigned __int64 LeafVa; // rax
  struct _LIST_ENTRY **v9; // rdi
  __int64 *ProcessorFlushList; // rbp
  __int64 v11; // rcx

  LeafVa = MiGetLeafVa(a1);
  v9 = MiVaToFlushVm(LeafVa);
  ProcessorFlushList = MiGetProcessorFlushList();
  MiInitializeTbFlushList((__int64)ProcessorFlushList, (__int64)v9, *((_DWORD *)ProcessorFlushList + 3), 8, a3);
  if ( a2 < 0 )
    MiInsertLargeTbFlushEntry(v11, a4, a1);
  else
    MiInsertRecursiveTbFlushEntries(v11, a4, a1);
  MiFlushTbList((__int64)ProcessorFlushList);
  return MiReleaseProcessorFlushList();
}
