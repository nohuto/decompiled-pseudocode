/*
 * XREFs of MiEmptyAllWorkingSets @ 0x140678800
 * Callers:
 *     MiFlushAllFilesystemPages @ 0x1404D6B8C (MiFlushAllFilesystemPages.c)
 *     MmEmptyAllWorkingSets @ 0x140678E84 (MmEmptyAllWorkingSets.c)
 *     MiMirrorBrownPhase @ 0x140B6CC0C (MiMirrorBrownPhase.c)
 *     MmPerformMemoryListCommand @ 0x140B6DB74 (MmPerformMemoryListCommand.c)
 * Callees:
 *     MiQueueWorkingSetRequest @ 0x1404F62CC (MiQueueWorkingSetRequest.c)
 */

__int64 __fastcall MiEmptyAllWorkingSets(__int64 a1)
{
  __int64 result; // rax

  result = *(_QWORD *)(a1 + 17600);
  if ( byte_140E37514 )
  {
    ++*(_DWORD *)(result + 28);
    return MiQueueWorkingSetRequest(a1, 4);
  }
  return result;
}
