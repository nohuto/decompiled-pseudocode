/*
 * XREFs of ZwSetInformationVirtualMemory @ 0x1406AA9B0
 * Callers:
 *     CmSiPrefetchVirtualMemoryRange @ 0x140483CEC (CmSiPrefetchVirtualMemoryRange.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwSetInformationVirtualMemory(
        HANDLE ProcessHandle,
        VIRTUAL_MEMORY_INFORMATION_CLASS VmInformationClass,
        ULONG_PTR NumberOfEntries,
        PMEMORY_RANGE_ENTRY VirtualAddresses,
        PVOID VmInformation,
        ULONG VmInformationLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ProcessHandle);
}
