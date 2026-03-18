/*
 * XREFs of CmLockHiveSecurityShared @ 0x140BA9A5C
 * Callers:
 *     CmDumpKeyToFile @ 0x1407BD56C (CmDumpKeyToFile.c)
 *     CmSaveMergedKeys @ 0x1407BE848 (CmSaveMergedKeys.c)
 *     CmpCreateKeyControlBlock @ 0x140875390 (CmpCreateKeyControlBlock.c)
 *     CmpRebuildKcbCacheFromNode @ 0x140885FAC (CmpRebuildKcbCacheFromNode.c)
 *     CmpCreateChild @ 0x1408884FC (CmpCreateChild.c)
 *     CmpAssignSecurityToKcb @ 0x1409D27A0 (CmpAssignSecurityToKcb.c)
 *     CmpLightWeightCommitSetSecDescUoW @ 0x1409D8A60 (CmpLightWeightCommitSetSecDescUoW.c)
 *     CmpLightWeightCommitAddKeyUoW @ 0x1409DA778 (CmpLightWeightCommitAddKeyUoW.c)
 *     CmpLockTwoSecurityCachesExclusiveShared @ 0x140A31CF8 (CmpLockTwoSecurityCachesExclusiveShared.c)
 *     CmpDumpKeyToBuffer @ 0x140BA9128 (CmpDumpKeyToBuffer.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14029B5A0 (ExfAcquirePushLockSharedEx.c)
 */

signed __int64 __fastcall CmLockHiveSecurityShared(__int64 a1)
{
  volatile signed __int64 *v1; // rdi
  __int64 *v2; // rbx
  signed __int64 result; // rax

  v1 = (volatile signed __int64 *)(a1 + 1784);
  v2 = KeAbPreAcquire(a1 + 1784, 0LL);
  result = _InterlockedCompareExchange64(v1, 17LL, 0LL);
  if ( result )
    result = ExfAcquirePushLockSharedEx((signed __int64 *)v1, 0, v2, (unsigned __int64)v1);
  if ( v2 )
    *((_BYTE *)v2 + 10) = 1;
  return result;
}
