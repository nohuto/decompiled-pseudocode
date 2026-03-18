/*
 * XREFs of ZwFlushInstructionCache @ 0x1406A8230
 * Callers:
 *     DifZwFlushInstructionCacheWrapper @ 0x140640060 (DifZwFlushInstructionCacheWrapper.c)
 *     sub_140800BE0 @ 0x140800BE0 (sub_140800BE0.c)
 *     WbCreateHeapExecutedBlock @ 0x1408FDAD8 (WbCreateHeapExecutedBlock.c)
 *     sub_1409E0950 @ 0x1409E0950 (sub_1409E0950.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwFlushInstructionCache(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
