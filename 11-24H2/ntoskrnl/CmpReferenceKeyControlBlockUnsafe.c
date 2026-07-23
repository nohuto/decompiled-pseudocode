/*
 * XREFs of CmpReferenceKeyControlBlockUnsafe @ 0x14087F300
 * Callers:
 *     CmpLoadKeyCommon @ 0x14045ABA8 (CmpLoadKeyCommon.c)
 *     CmpCloneToUnbackedKcb @ 0x1407DB018 (CmpCloneToUnbackedKcb.c)
 *     CmpCreateGlobalKeyLockEntry @ 0x1407DE2E8 (CmpCreateGlobalKeyLockEntry.c)
 *     CmpCreateSiloKeyLockEntry @ 0x1407DE344 (CmpCreateSiloKeyLockEntry.c)
 *     CmpDoParseKey @ 0x140872AE0 (CmpDoParseKey.c)
 *     CmpCommitDiscardReplacePost @ 0x140874DC4 (CmpCommitDiscardReplacePost.c)
 *     CmpGetSymbolicLinkTarget @ 0x14087ABD0 (CmpGetSymbolicLinkTarget.c)
 *     CmpTransMgrFreeVolatileData @ 0x14087F134 (CmpTransMgrFreeVolatileData.c)
 *     CmpEnumerateLayeredKey @ 0x140909AC4 (CmpEnumerateLayeredKey.c)
 *     CmpKeyEnumStackCreateResumeContext @ 0x14090B1D0 (CmpKeyEnumStackCreateResumeContext.c)
 *     CmpLinkHiveToMaster @ 0x14092E380 (CmpLinkHiveToMaster.c)
 *     CmLoadAppKey @ 0x14092FCDC (CmLoadAppKey.c)
 *     CmpFreezeHive @ 0x140AA0194 (CmpFreezeHive.c)
 * Callees:
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 */

__int64 __fastcall CmpReferenceKeyControlBlockUnsafe(volatile signed __int64 *BugCheckParameter2)
{
  __int64 result; // rax

  result = _InterlockedIncrement64(BugCheckParameter2);
  if ( !result )
    KeBugCheckEx(0x51u, 0x24uLL, (ULONG_PTR)BugCheckParameter2, 0LL, 0LL);
  if ( result == 1 )
    KeBugCheckEx(0x51u, 0x15uLL, 0LL, 0LL, 0LL);
  return result;
}
