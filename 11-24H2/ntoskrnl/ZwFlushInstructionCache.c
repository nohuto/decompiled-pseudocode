/*
 * XREFs of ZwFlushInstructionCache @ 0x1406A91D0
 * Callers:
 *     DifZwFlushInstructionCacheWrapper @ 0x14063E620 (DifZwFlushInstructionCacheWrapper.c)
 *     sub_140801320 @ 0x140801320 (sub_140801320.c)
 *     WbCreateHeapExecutedBlock @ 0x1409203B8 (WbCreateHeapExecutedBlock.c)
 *     sub_1409DA700 @ 0x1409DA700 (sub_1409DA700.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwFlushInstructionCache(HANDLE ProcessHandle, PVOID BaseAddress, SIZE_T Length)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ProcessHandle);
}
