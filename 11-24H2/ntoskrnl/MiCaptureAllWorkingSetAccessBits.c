/*
 * XREFs of MiCaptureAllWorkingSetAccessBits @ 0x1404F3BAC
 * Callers:
 *     MmPerformMemoryListCommand @ 0x140B6F414 (MmPerformMemoryListCommand.c)
 * Callees:
 *     MiQueueWorkingSetRequest @ 0x1404F3BCC (MiQueueWorkingSetRequest.c)
 */

__int64 __fastcall MiCaptureAllWorkingSetAccessBits(__int64 a1, int a2)
{
  return MiQueueWorkingSetRequest(a1, a2 != 0 ? 16 : 8);
}
