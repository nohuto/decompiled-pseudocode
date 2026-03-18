/*
 * XREFs of MiEmptyAllWorkingSets @ 0x14066CEF4
 * Callers:
 *     MiFlushAllFilesystemPages @ 0x1404D7D5C (MiFlushAllFilesystemPages.c)
 *     MmEmptyAllWorkingSets @ 0x14066D578 (MmEmptyAllWorkingSets.c)
 *     MiMirrorBrownPhase @ 0x140B5DB2C (MiMirrorBrownPhase.c)
 *     MmPerformMemoryListCommand @ 0x140B5EAC0 (MmPerformMemoryListCommand.c)
 * Callees:
 *     MiQueueWorkingSetRequest @ 0x1404F3A78 (MiQueueWorkingSetRequest.c)
 */

__int64 __fastcall MiEmptyAllWorkingSets(__int64 a1)
{
  __int64 result; // rax

  result = *(_QWORD *)(a1 + 17600);
  if ( byte_140E372D4 )
  {
    ++*(_DWORD *)(result + 28);
    return MiQueueWorkingSetRequest(a1, 4);
  }
  return result;
}
