/*
 * XREFs of CmpDereferenceKeyControlBlockUnsafe @ 0x140987400
 * Callers:
 *     CmpLoadKeyCommon @ 0x14045ABA8 (CmpLoadKeyCommon.c)
 *     CmRenameKey @ 0x1407D95B8 (CmRenameKey.c)
 *     CmpCreateGlobalKeyLockEntry @ 0x1407DE2E8 (CmpCreateGlobalKeyLockEntry.c)
 *     CmpCreateSiloKeyLockEntry @ 0x1407DE344 (CmpCreateSiloKeyLockEntry.c)
 *     CmpCreateKeyBody @ 0x14083A700 (CmpCreateKeyBody.c)
 *     CmpDoParseKey @ 0x140872AE0 (CmpDoParseKey.c)
 *     CmpCommitDiscardReplacePost @ 0x140874DC4 (CmpCommitDiscardReplacePost.c)
 *     CmpCreateKeyControlBlock @ 0x140875AF0 (CmpCreateKeyControlBlock.c)
 *     CmpRundownUnitOfWork @ 0x14087EED4 (CmpRundownUnitOfWork.c)
 *     CmpFreezeHive @ 0x140AA0194 (CmpFreezeHive.c)
 * Callees:
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 */

signed __int64 __fastcall CmpDereferenceKeyControlBlockUnsafe(volatile signed __int64 *a1)
{
  signed __int64 result; // rax

  result = _InterlockedExchangeAdd64(a1, 0xFFFFFFFFFFFFFFFFuLL);
  if ( result == 1 )
    KeBugCheckEx(0x51u, 0x1FuLL, 0LL, 0LL, 0LL);
  return result;
}
