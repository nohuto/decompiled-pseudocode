/*
 * XREFs of ?UnlockAndRelease@CFlipManagerToken@@QEAAXXZ @ 0x14001A8F8
 * Callers:
 *     ??1CIFlipPresentHistoryTokenFlipManager@@UEAA@XZ @ 0x14001A530 (--1CIFlipPresentHistoryTokenFlipManager@@UEAA@XZ.c)
 *     ?ConsumerDwmApplyUpdate@CFlipManager@@AEAAXPEAUFlipManagerTokenObject@@PEAVCCompositionFrame@@PEAPEAVCFlipPresentUpdate@@@Z @ 0x140049338 (-ConsumerDwmApplyUpdate@CFlipManager@@AEAAXPEAUFlipManagerTokenObject@@PEAVCCompositionFrame@@PE.c)
 *     ?CompleteFlipManagerToken@CTokenManager@@IEAAXPEAUFlipManagerTokenObject@@PEA_N@Z @ 0x14005E9A4 (-CompleteFlipManagerToken@CTokenManager@@IEAAXPEAUFlipManagerTokenObject@@PEA_N@Z.c)
 *     ?FlipManagerConsumerAdapterCleanupTokenDiscard@@YAJPEAUFlipManagerTokenObject@@@Z @ 0x140062D98 (-FlipManagerConsumerAdapterCleanupTokenDiscard@@YAJPEAUFlipManagerTokenObject@@@Z.c)
 * Callees:
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x14001BAF0 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 */

void __fastcall CFlipManagerToken::UnlockAndRelease(CFlipManagerToken *this)
{
  CPushLock::ReleaseLock((CFlipManagerToken *)((char *)this + 56));
  ObfDereferenceObject((char *)this - 32);
}
