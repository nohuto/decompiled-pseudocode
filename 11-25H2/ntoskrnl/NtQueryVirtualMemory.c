/*
 * XREFs of NtQueryVirtualMemory @ 0x1409D0630
 * Callers:
 *     <none>
 * Callees:
 *     MmQueryVirtualMemory @ 0x1409D0670 (MmQueryVirtualMemory.c)
 */

NTSTATUS __stdcall NtQueryVirtualMemory(
        HANDLE ProcessHandle,
        PVOID BaseAddress,
        MEMORY_INFORMATION_CLASS MemoryInformationClass,
        PVOID MemoryInformation,
        SIZE_T MemoryInformationLength,
        PSIZE_T ReturnLength)
{
  return MmQueryVirtualMemory(ProcessHandle, BaseAddress, MemoryInformationClass, MemoryInformation);
}
