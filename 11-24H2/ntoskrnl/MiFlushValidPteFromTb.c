/*
 * XREFs of MiFlushValidPteFromTb @ 0x1403942E4
 * Callers:
 *     MiTransformValidPteUsingAccessedBit @ 0x1403940AC (MiTransformValidPteUsingAccessedBit.c)
 * Callees:
 *     MiVaToFlushVm @ 0x1402293EC (MiVaToFlushVm.c)
 *     MiInitializeTbFlushList @ 0x140233BB0 (MiInitializeTbFlushList.c)
 *     MiInsertRecursiveTbFlushEntries @ 0x140234E68 (MiInsertRecursiveTbFlushEntries.c)
 *     MiReleaseProcessorFlushList @ 0x14023FFD0 (MiReleaseProcessorFlushList.c)
 *     MiGetProcessorFlushList @ 0x1402894BC (MiGetProcessorFlushList.c)
 *     MiFlushTbList @ 0x140291730 (MiFlushTbList.c)
 *     MiGetLeafVa @ 0x1402DEE20 (MiGetLeafVa.c)
 *     MiInsertLargeTbFlushEntry @ 0x1403A4A2C (MiInsertLargeTbFlushEntry.c)
 */

__int64 *__fastcall MiFlushValidPteFromTb(unsigned __int64 a1, char a2, int a3, unsigned int a4)
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
