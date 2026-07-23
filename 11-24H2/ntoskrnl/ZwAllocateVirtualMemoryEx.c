/*
 * XREFs of ZwAllocateVirtualMemoryEx @ 0x1406A82B0
 * Callers:
 *     PspSetupReservedUserMappings @ 0x140A3D458 (PspSetupReservedUserMappings.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwAllocateVirtualMemoryEx(
        HANDLE ProcessHandle,
        PVOID *BaseAddress,
        PSIZE_T RegionSize,
        ULONG AllocationType,
        ULONG PageProtection,
        PMEM_EXTENDED_PARAMETER ExtendedParameters,
        ULONG ExtendedParameterCount)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ProcessHandle);
}
