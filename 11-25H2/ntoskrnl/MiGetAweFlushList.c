/*
 * XREFs of MiGetAweFlushList @ 0x140676CC4
 * Callers:
 *     MiWriteAwePtes @ 0x1403FBB7C (MiWriteAwePtes.c)
 *     MiZeroAndFlushAweLazyPtes @ 0x140677AAC (MiZeroAndFlushAweLazyPtes.c)
 * Callees:
 *     MiGetProcessorFlushList @ 0x140381500 (MiGetProcessorFlushList.c)
 *     MiInitializeTbFlushList @ 0x140388790 (MiInitializeTbFlushList.c)
 */

__int64 __fastcall MiGetAweFlushList(__int64 a1, int a2)
{
  __int64 *ProcessorFlushList; // rax
  __int64 v5; // rcx

  ProcessorFlushList = MiGetProcessorFlushList();
  MiInitializeTbFlushList((__int64)ProcessorFlushList, *(_QWORD *)(a1 + 40), *((_DWORD *)ProcessorFlushList + 3), 0, a2);
  return v5;
}
