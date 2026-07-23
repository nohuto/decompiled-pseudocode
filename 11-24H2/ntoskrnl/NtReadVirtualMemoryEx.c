/*
 * XREFs of NtReadVirtualMemoryEx @ 0x140467170
 * Callers:
 *     <none>
 * Callees:
 *     MiReadWriteVirtualMemory @ 0x140992B20 (MiReadWriteVirtualMemory.c)
 */

NTSTATUS __cdecl NtReadVirtualMemoryEx(
        HANDLE ProcessHandle,
        PVOID BaseAddress,
        PVOID Buffer,
        SIZE_T BufferSize,
        PSIZE_T NumberOfBytesRead,
        ULONG Flags)
{
  return MiReadWriteVirtualMemory((ULONG_PTR)ProcessHandle, (__int64)NumberOfBytesRead, 16, Flags);
}
