/*
 * XREFs of ?Create@CFlipManagerSignal@@SAJ_K_NPEAUFlipManagerTokenIFlipInfo@@PEAPEAV1@@Z @ 0x14009F620
 * Callers:
 *     ?ConsumerDwmApplyUpdate@CFlipManager@@AEAAXPEAUFlipManagerTokenObject@@PEAVCCompositionFrame@@PEAPEAVCFlipPresentUpdate@@@Z @ 0x140049338 (-ConsumerDwmApplyUpdate@CFlipManager@@AEAAXPEAUFlipManagerTokenObject@@PEAVCCompositionFrame@@PE.c)
 *     ?PurgeSkippedTokens@CFlipManager@@AEAAX_K_N@Z @ 0x140050018 (-PurgeSkippedTokens@CFlipManager@@AEAAX_K_N@Z.c)
 *     ?ConsumerImmediateTokenCompleted@CFlipManager@@QEAAXPEAVCFlipManagerToken@@PEAPEAVCToken@@PEAPEAVCFlipManagerSignal@@@Z @ 0x14009EA58 (-ConsumerImmediateTokenCompleted@CFlipManager@@QEAAXPEAVCFlipManagerToken@@PEAPEAVCToken@@PEAPEA.c)
 * Callees:
 *     ??0CFlipManagerSignal@@IEAA@_K_NPEAUFlipManagerTokenIFlipInfo@@@Z @ 0x14009F5B8 (--0CFlipManagerSignal@@IEAA@_K_NPEAUFlipManagerTokenIFlipInfo@@@Z.c)
 */

__int64 __fastcall CFlipManagerSignal::Create(
        __int64 a1,
        char a2,
        struct FlipManagerTokenIFlipInfo *a3,
        struct CFlipManagerSignal **a4)
{
  unsigned int v7; // ebx
  CFlipManagerSignal *Pool2; // rax
  struct CFlipManagerSignal *v10; // rax

  v7 = 0;
  Pool2 = (CFlipManagerSignal *)ExAllocatePool2(257LL, 72LL, 1769161542LL);
  if ( Pool2 && (v10 = CFlipManagerSignal::CFlipManagerSignal(Pool2, a1, a2, a3)) != 0LL )
    *a4 = v10;
  else
    return (unsigned int)-1073741801;
  return v7;
}
