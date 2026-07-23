/*
 * XREFs of MiLockPartitionMappedWriter @ 0x140462E34
 * Callers:
 *     MiMappedPageWriter @ 0x1402EB500 (MiMappedPageWriter.c)
 *     MiWriteComplete @ 0x1402ED400 (MiWriteComplete.c)
 *     MiDeleteMappedMdls @ 0x140462C9C (MiDeleteMappedMdls.c)
 *     MiAllocateMappedWriterMdls @ 0x140462D3C (MiAllocateMappedWriterMdls.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 */

char *__fastcall MiLockPartitionMappedWriter(__int64 a1, __int64 a2)
{
  unsigned __int64 *v2; // rdi
  char *result; // rax
  char *v4; // rbx

  --*(_WORD *)(a2 + 486);
  v2 = (unsigned __int64 *)(a1 + 656);
  result = (char *)KeAbPreAcquire(a1 + 656, 0LL);
  v4 = result;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v2, 0LL) )
    result = (char *)ExfAcquirePushLockExclusiveEx(v2, result, (__int64)v2);
  if ( v4 )
    v4[10] = 1;
  return result;
}
