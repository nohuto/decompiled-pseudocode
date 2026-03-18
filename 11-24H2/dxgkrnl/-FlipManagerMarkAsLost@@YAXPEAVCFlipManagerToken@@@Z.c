/*
 * XREFs of ?FlipManagerMarkAsLost@@YAXPEAVCFlipManagerToken@@@Z @ 0x14009E75C
 * Callers:
 *     ?CompleteFlipManagerToken@CTokenManager@@IEAAXPEAUFlipManagerTokenObject@@PEA_N@Z @ 0x14005E9A4 (-CompleteFlipManagerToken@CTokenManager@@IEAAXPEAUFlipManagerTokenObject@@PEA_N@Z.c)
 * Callees:
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x14001A9A4 (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x14001BAF0 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?MarkAsLost@CFlipManager@@AEAAXJW4Operation@PresentHistory@1@_K@Z @ 0x14009F1E4 (-MarkAsLost@CFlipManager@@AEAAXJW4Operation@PresentHistory@1@_K@Z.c)
 */

void __fastcall FlipManagerMarkAsLost(struct CFlipManagerToken *a1)
{
  __int64 v1; // rbx

  v1 = *((_QWORD *)a1 + 11);
  CPushLock::AcquireLockExclusive((CPushLock *)(v1 + 40));
  CFlipManager::MarkAsLost(v1 + 32, 3221225473LL, 24LL);
  CPushLock::ReleaseLock((CPushLock *)(v1 + 40));
}
