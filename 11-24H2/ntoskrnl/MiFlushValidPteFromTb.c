/*
 * XREFs of MiFlushValidPteFromTb @ 0x14038D900
 * Callers:
 *     MiTransformValidPteUsingAccessedBit @ 0x14038D6C8 (MiTransformValidPteUsingAccessedBit.c)
 * Callees:
 *     MiReleaseProcessorFlushList @ 0x140208120 (MiReleaseProcessorFlushList.c)
 *     MiInsertRecursiveTbFlushEntries @ 0x14020EDF8 (MiInsertRecursiveTbFlushEntries.c)
 *     MiInitializeTbFlushList @ 0x140214780 (MiInitializeTbFlushList.c)
 *     MiInsertLargeTbFlushEntry @ 0x14021C25C (MiInsertLargeTbFlushEntry.c)
 *     MiGetLeafVa @ 0x140240700 (MiGetLeafVa.c)
 *     MiGetProcessorFlushList @ 0x1402990BC (MiGetProcessorFlushList.c)
 *     MiFlushTbList @ 0x1402A1330 (MiFlushTbList.c)
 *     MiVaToFlushVm @ 0x1402FC5EC (MiVaToFlushVm.c)
 */

__int64 *__fastcall MiFlushValidPteFromTb(unsigned __int64 a1, char a2, int a3, int a4)
{
  unsigned __int64 LeafVa; // rax
  void *v9; // rdi
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
