/*
 * XREFs of CmLockHiveSecurityShared @ 0x140BBB96C
 * Callers:
 *     CmDumpKeyToFile @ 0x1407CD274 (CmDumpKeyToFile.c)
 *     CmSaveMergedKeys @ 0x1407CE550 (CmSaveMergedKeys.c)
 *     CmpCreateKeyControlBlock @ 0x140875AF0 (CmpCreateKeyControlBlock.c)
 *     CmpRebuildKcbCacheFromNode @ 0x14087FED4 (CmpRebuildKcbCacheFromNode.c)
 *     CmpLockTwoSecurityCachesExclusiveShared @ 0x140884794 (CmpLockTwoSecurityCachesExclusiveShared.c)
 *     CmpCreateChild @ 0x14090B2FC (CmpCreateChild.c)
 *     CmpAssignSecurityToKcb @ 0x1409C5710 (CmpAssignSecurityToKcb.c)
 *     CmpLightWeightCommitAddKeyUoW @ 0x140A1499C (CmpLightWeightCommitAddKeyUoW.c)
 *     CmpLightWeightCommitSetSecDescUoW @ 0x140A7CED8 (CmpLightWeightCommitSetSecDescUoW.c)
 *     CmpDumpKeyToBuffer @ 0x140BBB130 (CmpDumpKeyToBuffer.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14031F9EC (ExfAcquirePushLockSharedEx.c)
 */

signed __int64 __fastcall CmLockHiveSecurityShared(__int64 a1)
{
  volatile signed __int64 *v1; // rdi
  char *v2; // rbx
  signed __int64 result; // rax

  v1 = (volatile signed __int64 *)(a1 + 1784);
  v2 = (char *)KeAbPreAcquire(a1 + 1784, 0LL);
  result = _InterlockedCompareExchange64(v1, 17LL, 0LL);
  if ( result )
    result = ExfAcquirePushLockSharedEx((signed __int64 *)v1, 0, v2, (__int64)v1);
  if ( v2 )
    v2[10] = 1;
  return result;
}
