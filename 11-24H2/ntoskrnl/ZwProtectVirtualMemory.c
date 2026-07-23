/*
 * XREFs of ZwProtectVirtualMemory @ 0x1406A7DB0
 * Callers:
 *     CmSiProtectViewOfSection @ 0x1404631DC (CmSiProtectViewOfSection.c)
 *     KiOpPatchCode @ 0x1405C2A90 (KiOpPatchCode.c)
 *     DifZwProtectVirtualMemoryWrapper @ 0x140642090 (DifZwProtectVirtualMemoryWrapper.c)
 *     WbMakeUserDataPagesKernelWritable @ 0x1409DAE38 (WbMakeUserDataPagesKernelWritable.c)
 *     MiCheckForUserStackOverflow @ 0x140A1C9F4 (MiCheckForUserStackOverflow.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwProtectVirtualMemory(
        HANDLE ProcessHandle,
        PVOID *BaseAddress,
        PSIZE_T RegionSize,
        ULONG NewProtect,
        PULONG OldProtect)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ProcessHandle);
}
