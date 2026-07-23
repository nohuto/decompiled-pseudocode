/*
 * XREFs of RtlFreeMemoryBlockLookaside @ 0x1801721A0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpInterlockedPushEntrySList @ 0x180166FD0 (RtlpInterlockedPushEntrySList.c)
 */

NTSTATUS __cdecl RtlFreeMemoryBlockLookaside(PVOID MemoryBlockLookaside, PVOID Block)
{
  RtlpInterlockedPushEntrySList(*((__int128 **)Block - 2), (_QWORD *)Block - 6);
  return 0;
}
