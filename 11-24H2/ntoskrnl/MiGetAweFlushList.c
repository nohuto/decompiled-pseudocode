/*
 * XREFs of MiGetAweFlushList @ 0x1406824E4
 * Callers:
 *     MiWriteAwePtes @ 0x1404BA130 (MiWriteAwePtes.c)
 *     MiZeroAndFlushAweLazyPtes @ 0x1406832CC (MiZeroAndFlushAweLazyPtes.c)
 * Callees:
 *     MiInitializeTbFlushList @ 0x140233BB0 (MiInitializeTbFlushList.c)
 *     MiGetProcessorFlushList @ 0x1402894BC (MiGetProcessorFlushList.c)
 */

__int64 __fastcall MiGetAweFlushList(__int64 a1, int a2)
{
  __int64 *ProcessorFlushList; // rax
  __int64 v5; // rcx

  ProcessorFlushList = MiGetProcessorFlushList();
  MiInitializeTbFlushList((__int64)ProcessorFlushList, *(_QWORD *)(a1 + 40), *((_DWORD *)ProcessorFlushList + 3), 0, a2);
  return v5;
}
