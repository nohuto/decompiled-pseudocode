/*
 * XREFs of MiLockPartitionMappedWriter @ 0x14040AB54
 * Callers:
 *     MiDeleteMappedMdls @ 0x14040A9BC (MiDeleteMappedMdls.c)
 *     MiAllocateMappedWriterMdls @ 0x14040AA5C (MiAllocateMappedWriterMdls.c)
 *     MiMappedPageWriter @ 0x14040C760 (MiMappedPageWriter.c)
 *     MiWriteComplete @ 0x14040E620 (MiWriteComplete.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 */

__int64 *__fastcall MiLockPartitionMappedWriter(__int64 a1, __int64 a2)
{
  unsigned __int64 *v2; // rdi
  __int64 *result; // rax
  __int64 *v4; // rbx

  --*(_WORD *)(a2 + 486);
  v2 = (unsigned __int64 *)(a1 + 656);
  result = KeAbPreAcquire(a1 + 656, 0LL);
  v4 = result;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v2, 0LL) )
    result = (__int64 *)ExfAcquirePushLockExclusiveEx(v2, result, (__int64)v2);
  if ( v4 )
    *((_BYTE *)v4 + 10) = 1;
  return result;
}
