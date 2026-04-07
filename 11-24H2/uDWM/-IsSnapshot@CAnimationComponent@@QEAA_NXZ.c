/*
 * XREFs of ?IsSnapshot@CAnimationComponent@@QEAA_NXZ @ 0x1800427FC
 * Callers:
 *     ?_IsAnimationComponentVisible@CTransitionVisualController@@IEAA_NPEAVCAnimationComponent@@@Z @ 0x1800427B4 (-_IsAnimationComponentVisible@CTransitionVisualController@@IEAA_NPEAVCAnimationComponent@@@Z.c)
 *     ?GetSurfaceFromExistingAnimationComponent@CTransitionVisualController@@QEAAJPEAVCAnimationComponent@@PEBUtagRECT@@_NPEAPEAVCImageLegacyMilBrushProxy@@PEAPEAVCCachedVisualImageProxy@@PEA_NPEAUD2D_POINT_3F@@@Z @ 0x1800829F4 (-GetSurfaceFromExistingAnimationComponent@CTransitionVisualController@@QEAAJPEAVCAnimationCompon.c)
 *     ?_WindowEnumCallback@CAppArrangementImmediate@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800D6600 (-_WindowEnumCallback@CAppArrangementImmediate@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStorybo.c)
 * Callees:
 *     <none>
 */

bool __fastcall CAnimationComponent::IsSnapshot(CAnimationComponent *this)
{
  return *((_BYTE *)this + 67);
}
