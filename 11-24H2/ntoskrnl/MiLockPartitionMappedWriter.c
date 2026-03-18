/*
 * XREFs of MiLockPartitionMappedWriter @ 0x140469F04
 * Callers:
 *     MiMappedPageWriter @ 0x140369760 (MiMappedPageWriter.c)
 *     MiWriteComplete @ 0x14036B660 (MiWriteComplete.c)
 *     MiDeleteMappedMdls @ 0x140469D6C (MiDeleteMappedMdls.c)
 *     MiAllocateMappedWriterMdls @ 0x140469E0C (MiAllocateMappedWriterMdls.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 */

__int64 __fastcall MiLockPartitionMappedWriter(__int64 a1, __int64 a2)
{
  unsigned __int64 *v2; // rdi
  __int64 result; // rax
  __int64 v4; // rbx

  --*(_WORD *)(a2 + 486);
  v2 = (unsigned __int64 *)(a1 + 656);
  result = (__int64)KeAbPreAcquire(a1 + 656, 0LL);
  v4 = result;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v2, 0LL) )
    result = ExfAcquirePushLockExclusiveEx(v2, result, (__int64)v2);
  if ( v4 )
    *(_BYTE *)(v4 + 10) = 1;
  return result;
}
