/*
 * XREFs of RtlExtendMemoryBlockLookaside @ 0x180116E10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __cdecl RtlExtendMemoryBlockLookaside(PVOID MemoryBlockLookaside, ULONG Increment)
{
  return RtlExtendMemoryZone(*((_QWORD *)MemoryBlockLookaside + 2), *(__int64 *)&Increment);
}
