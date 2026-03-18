/*
 * XREFs of ?UnlockAndRelease@CFlipManagerToken@@QEAAXXZ @ 0x14000B3C8
 * Callers:
 *     ??1CIFlipPresentHistoryTokenFlipManager@@UEAA@XZ @ 0x14000B000 (--1CIFlipPresentHistoryTokenFlipManager@@UEAA@XZ.c)
 *     ?ConsumerDwmApplyUpdate@CFlipManager@@AEAAXPEAUFlipManagerTokenObject@@PEAVCCompositionFrame@@PEAPEAVCFlipPresentUpdate@@@Z @ 0x140049C48 (-ConsumerDwmApplyUpdate@CFlipManager@@AEAAXPEAUFlipManagerTokenObject@@PEAVCCompositionFrame@@PE.c)
 *     ?CompleteFlipManagerToken@CTokenManager@@IEAAXPEAUFlipManagerTokenObject@@PEA_N@Z @ 0x14005E1D4 (-CompleteFlipManagerToken@CTokenManager@@IEAAXPEAUFlipManagerTokenObject@@PEA_N@Z.c)
 *     ?FlipManagerConsumerAdapterCleanupTokenDiscard@@YAJPEAUFlipManagerTokenObject@@@Z @ 0x1400624A4 (-FlipManagerConsumerAdapterCleanupTokenDiscard@@YAJPEAUFlipManagerTokenObject@@@Z.c)
 * Callees:
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x14000C610 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 */

void __fastcall CFlipManagerToken::UnlockAndRelease(CFlipManagerToken *this)
{
  CPushLock::ReleaseLock((CFlipManagerToken *)((char *)this + 56));
  ObfDereferenceObject((char *)this - 32);
}
