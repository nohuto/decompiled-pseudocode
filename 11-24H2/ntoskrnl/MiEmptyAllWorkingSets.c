/*
 * XREFs of MiEmptyAllWorkingSets @ 0x1406799E0
 * Callers:
 *     MiFlushAllFilesystemPages @ 0x1404CFFDC (MiFlushAllFilesystemPages.c)
 *     MmEmptyAllWorkingSets @ 0x14067A064 (MmEmptyAllWorkingSets.c)
 *     MiMirrorBrownPhase @ 0x140B6E4AC (MiMirrorBrownPhase.c)
 *     MmPerformMemoryListCommand @ 0x140B6F414 (MmPerformMemoryListCommand.c)
 * Callees:
 *     MiQueueWorkingSetRequest @ 0x1404F3BCC (MiQueueWorkingSetRequest.c)
 */

__int64 __fastcall MiEmptyAllWorkingSets(__int64 a1)
{
  __int64 result; // rax

  result = *(_QWORD *)(a1 + 17600);
  if ( byte_140E37654 )
  {
    ++*(_DWORD *)(result + 28);
    return MiQueueWorkingSetRequest(a1, 4);
  }
  return result;
}
