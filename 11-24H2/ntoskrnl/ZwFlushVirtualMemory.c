/*
 * XREFs of ZwFlushVirtualMemory @ 0x1406A8290
 * Callers:
 *     DifZwFlushVirtualMemoryWrapper @ 0x140640350 (DifZwFlushVirtualMemoryWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwFlushVirtualMemory(
        HANDLE ProcessHandle,
        PVOID *BaseAddress,
        PSIZE_T RegionSize,
        PIO_STATUS_BLOCK IoStatus)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ProcessHandle, BaseAddress);
}
