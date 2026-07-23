/*
 * XREFs of NtAllocateUserPhysicalPagesEx @ 0x1407E9D20
 * Callers:
 *     <none>
 * Callees:
 *     MiAllocateUserPhysicalPages @ 0x1407E8638 (MiAllocateUserPhysicalPages.c)
 */

NTSTATUS __cdecl NtAllocateUserPhysicalPagesEx(
        HANDLE ProcessHandle,
        PULONG_PTR NumberOfPages,
        PULONG_PTR UserPfnArray,
        PMEM_EXTENDED_PARAMETER ExtendedParameters,
        ULONG ExtendedParameterCount)
{
  return MiAllocateUserPhysicalPages(ProcessHandle, NumberOfPages, UserPfnArray, ExtendedParameters);
}
