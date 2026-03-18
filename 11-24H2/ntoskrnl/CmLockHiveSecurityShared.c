/*
 * XREFs of CmLockHiveSecurityShared @ 0x140BB996C
 * Callers:
 *     CmDumpKeyToFile @ 0x1407CCD84 (CmDumpKeyToFile.c)
 *     CmSaveMergedKeys @ 0x1407CE060 (CmSaveMergedKeys.c)
 *     CmpCreateKeyControlBlock @ 0x1408717C0 (CmpCreateKeyControlBlock.c)
 *     CmpRebuildKcbCacheFromNode @ 0x14087C024 (CmpRebuildKcbCacheFromNode.c)
 *     CmpLockTwoSecurityCachesExclusiveShared @ 0x1408808E4 (CmpLockTwoSecurityCachesExclusiveShared.c)
 *     CmpCreateChild @ 0x14091788C (CmpCreateChild.c)
 *     CmpAssignSecurityToKcb @ 0x1409D58E0 (CmpAssignSecurityToKcb.c)
 *     CmpLightWeightCommitAddKeyUoW @ 0x140A1F89C (CmpLightWeightCommitAddKeyUoW.c)
 *     CmpLightWeightCommitSetSecDescUoW @ 0x140A82334 (CmpLightWeightCommitSetSecDescUoW.c)
 *     CmpDumpKeyToBuffer @ 0x140BB9130 (CmpDumpKeyToBuffer.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14034050C (ExfAcquirePushLockSharedEx.c)
 */

signed __int64 __fastcall CmLockHiveSecurityShared(__int64 a1)
{
  volatile signed __int64 *v1; // rdi
  _QWORD *v2; // rbx
  signed __int64 result; // rax

  v1 = (volatile signed __int64 *)(a1 + 1784);
  v2 = KeAbPreAcquire(a1 + 1784, 0LL);
  result = _InterlockedCompareExchange64(v1, 17LL, 0LL);
  if ( result )
    result = ExfAcquirePushLockSharedEx((signed __int64 *)v1, 0, v2, (__int64)v1);
  if ( v2 )
    *((_BYTE *)v2 + 10) = 1;
  return result;
}
