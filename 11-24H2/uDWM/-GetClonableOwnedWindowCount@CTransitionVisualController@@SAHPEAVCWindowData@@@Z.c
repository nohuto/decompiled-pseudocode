/*
 * XREFs of ?GetClonableOwnedWindowCount@CTransitionVisualController@@SAHPEAVCWindowData@@@Z @ 0x1800DD7C8
 * Callers:
 *     ?EnsureSnapshot@CTransitionVisualController@@QEAAJPEAVCWindowData@@@Z @ 0x180004E74 (-EnsureSnapshot@CTransitionVisualController@@QEAAJPEAVCWindowData@@@Z.c)
 *     ?CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TARGET@@_NHPEAVCStoryboard@@PEAUtagRECT@@4H2PEAPEAVCAnimationComponent@@@Z @ 0x180041140 (-CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TAR.c)
 *     ?_Create3DComponent@CGroupingStoryboard@@IEAAJPEAVCWindowData@@@Z @ 0x1800D3FCC (-_Create3DComponent@CGroupingStoryboard@@IEAAJPEAVCWindowData@@@Z.c)
 *     ?_CreateAndAddCrossfadeAnimationComponent@CSSCrossFade@@MEAAJPEAVCWindowData@@_NPEAPEAVCAnimationComponent@@@Z @ 0x1800D44B0 (-_CreateAndAddCrossfadeAnimationComponent@CSSCrossFade@@MEAAJPEAVCWindowData@@_NPEAPEAVCAnimatio.c)
 *     ?_WindowEnumCallback@CAppArrangementDelayed@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800D5B40 (-_WindowEnumCallback@CAppArrangementDelayed@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboar.c)
 * Callees:
 *     CTransitionVisualController::ForEachOwnedWindow__lambda_99e2d1a5823ec03a5ca5bd7b77684933___ @ 0x180080B04 (CTransitionVisualController--ForEachOwnedWindow__lambda_99e2d1a5823ec03a5ca5bd7b77684933___.c)
 */

__int64 __fastcall CTransitionVisualController::GetClonableOwnedWindowCount(struct CWindowData *a1)
{
  unsigned int v2; // [rsp+38h] [rbp+10h] BYREF
  unsigned int *v3; // [rsp+40h] [rbp+18h] BYREF

  v2 = 0;
  v3 = &v2;
  CTransitionVisualController::ForEachOwnedWindow__lambda_99e2d1a5823ec03a5ca5bd7b77684933___((__int64)a1, &v3, 1);
  return v2;
}
