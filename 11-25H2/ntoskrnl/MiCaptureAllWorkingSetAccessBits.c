/*
 * XREFs of MiCaptureAllWorkingSetAccessBits @ 0x1404F3A58
 * Callers:
 *     MmPerformMemoryListCommand @ 0x140B5EAC0 (MmPerformMemoryListCommand.c)
 * Callees:
 *     MiQueueWorkingSetRequest @ 0x1404F3A78 (MiQueueWorkingSetRequest.c)
 */

__int64 __fastcall MiCaptureAllWorkingSetAccessBits(__int64 a1, int a2)
{
  return MiQueueWorkingSetRequest(a1, a2 != 0 ? 16 : 8);
}
