/*
 * XREFs of ?SetMaxOpacity@CProjectedShadowScene@@AEAAXM@Z @ 0x1802ABF28
 * Callers:
 *     ?ProcessSetMaxOpacity@CProjectedShadowScene@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PROJECTEDSHADOWSCENE_SETMAXOPACITY@@@Z @ 0x1802ABE5C (-ProcessSetMaxOpacity@CProjectedShadowScene@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PROJECTEDSHA.c)
 *     ?SetProperty@CProjectedShadowScene@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1802AC090 (-SetProperty@CProjectedShadowScene@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 * Callees:
 *     ?InvalidateAnimationSources@CResource@@IEAAXI@Z @ 0x1800E4E40 (-InvalidateAnimationSources@CResource@@IEAAXI@Z.c)
 *     ?RequestRedrawAll@CProjectedShadowScene@@QEAAXXZ @ 0x1801B7B6C (-RequestRedrawAll@CProjectedShadowScene@@QEAAXXZ.c)
 */

void __fastcall CProjectedShadowScene::SetMaxOpacity(CProjectedShadowScene *this, float a2)
{
  float v3; // xmm1_4
  float v4; // xmm0_4

  v3 = fmaxf(0.0, a2);
  v4 = fminf(1.0, v3);
  if ( *((float *)this + 33) != v4 )
  {
    *((float *)this + 33) = v4;
    CResource::InvalidateAnimationSources(this, 5LL);
    CProjectedShadowScene::RequestRedrawAll(this);
  }
}
