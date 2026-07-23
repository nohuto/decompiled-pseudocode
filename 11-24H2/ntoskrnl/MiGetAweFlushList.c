/*
 * XREFs of MiGetAweFlushList @ 0x1406836D4
 * Callers:
 *     MiWriteAwePtes @ 0x1404B4FD0 (MiWriteAwePtes.c)
 *     MiZeroAndFlushAweLazyPtes @ 0x1406844BC (MiZeroAndFlushAweLazyPtes.c)
 * Callees:
 *     MiInitializeTbFlushList @ 0x140214780 (MiInitializeTbFlushList.c)
 *     MiGetProcessorFlushList @ 0x1402990BC (MiGetProcessorFlushList.c)
 */

__int64 __fastcall MiGetAweFlushList(__int64 a1, int a2)
{
  __int64 *ProcessorFlushList; // rax
  __int64 v5; // rcx

  ProcessorFlushList = MiGetProcessorFlushList();
  MiInitializeTbFlushList((__int64)ProcessorFlushList, *(_QWORD *)(a1 + 40), *((_DWORD *)ProcessorFlushList + 3), 0, a2);
  return v5;
}
