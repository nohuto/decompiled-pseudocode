/*
 * XREFs of ?IsWindowCloaked@@YA_NPEBUtagWND@@@Z @ 0x140067F70
 * Callers:
 *     ?PositioningChanged@NotifyShell@@YAXPEAUtagWND@@AEBUtagCVR@@@Z @ 0x140067B0C (-PositioningChanged@NotifyShell@@YAXPEAUtagWND@@AEBUtagCVR@@@Z.c)
 *     _ChildWindowFromPointEx @ 0x140067D2C (_ChildWindowFromPointEx.c)
 *     ?ShouldDeferRecalc@CRecalcState@@QEBA_NPEBUtagWND@@W4ShouldDeferRecalcOption@1@@Z @ 0x140068228 (-ShouldDeferRecalc@CRecalcState@@QEBA_NPEBUtagWND@@W4ShouldDeferRecalcOption@1@@Z.c)
 *     xxxTouchTargetWindow @ 0x140068F84 (xxxTouchTargetWindow.c)
 *     _RealChildWindowFromPoint @ 0x14006CF5C (_RealChildWindowFromPoint.c)
 *     ?NextTopWindow@FindNextTopWindow@@YAPEAUtagWND@@PEBU2@0W4FindOption@1@@Z @ 0x1400F697C (-NextTopWindow@FindNextTopWindow@@YAPEAUtagWND@@PEBU2@0W4FindOption@1@@Z.c)
 *     ?IsWindowActivateable@@YA_NPEBUtagWND@@@Z @ 0x1400F6BF4 (-IsWindowActivateable@@YA_NPEBUtagWND@@@Z.c)
 *     ?xxxActivateOnMinimize@@YAHPEAUtagWND@@@Z @ 0x1400F7A10 (-xxxActivateOnMinimize@@YAHPEAUtagWND@@@Z.c)
 *     ?_GetNextQueueWindow@@YAPEAUtagWND@@PEAU1@HH@Z @ 0x1400F829C (-_GetNextQueueWindow@@YAPEAUtagWND@@PEAU1@HH@Z.c)
 *     ?ShouldProcessHungWindow@@YAPEAUtagWND@@PEAU1@@Z @ 0x140148C3C (-ShouldProcessHungWindow@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     ?FindRestorableRecalcState@CRecalcProp@@AEAAPEAVCRecalcState@@XZ @ 0x14014AB1C (-FindRestorableRecalcState@CRecalcProp@@AEAAPEAVCRecalcState@@XZ.c)
 *     xxxAddShadow @ 0x14015CF84 (xxxAddShadow.c)
 *     ?xxxWindowHitTestWithTargeting@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@UtagRECT@@W4tagTARGETING_PROPERTY@@@Z @ 0x1401B6258 (-xxxWindowHitTestWithTargeting@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTAR.c)
 *     _lambda_c536c12f7ba0511efb3a861cb960a4e0_::operator() @ 0x140285F64 (_lambda_c536c12f7ba0511efb3a861cb960a4e0_--operator().c)
 * Callees:
 *     <none>
 */

bool __fastcall IsWindowCloaked(const struct tagWND *a1)
{
  int v1; // eax
  char v2; // dl

  v1 = 0;
  v2 = *(_BYTE *)(*((_QWORD *)a1 + 5) + 233LL);
  if ( (v2 & 0x20) != 0 )
    v1 = 2;
  if ( (v2 & 0x40) != 0 )
    v1 |= 1u;
  if ( v2 < 0 )
    v1 |= 1u;
  return v1 != 0;
}
