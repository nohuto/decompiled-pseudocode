/*
 * XREFs of KeInitializeCrashDumpHeader @ 0x140592310
 * Callers:
 *     <none>
 * Callees:
 *     IoFillDumpHeader @ 0x14058D79C (IoFillDumpHeader.c)
 */

NTSTATUS __stdcall KeInitializeCrashDumpHeader(
        ULONG DumpType,
        ULONG Flags,
        PVOID Buffer,
        ULONG BufferSize,
        PULONG BufferNeeded)
{
  if ( BufferNeeded )
    *BufferNeeded = 0x2000;
  if ( DumpType != 1 )
    return -1073741585;
  if ( Flags )
    return -1073741584;
  if ( BufferSize < 0x2000 )
    return -1073741582;
  IoFillDumpHeader(Buffer, 1, 0, 0LL, 0LL, 0LL, 0LL, (__int64)KeGetCurrentThread());
  return 0;
}
