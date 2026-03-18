/*
 * XREFs of ?GetInput@CEffectBrush@@QEBAPEAVCBrush@@I@Z @ 0x180238374
 * Callers:
 *     ?AddEffectBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCEffectBrush@@_NPEAPEAVCRenderingTechniqueFragment@@@Z @ 0x180046B2C (-AddEffectBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCEffectBrush@@_NPEAPEAVCRenderingTechnique.c)
 *     ?PopLayerTransformFromExplicitSurfaceInput@CTreeEffectLayer@@AEAAXXZ @ 0x18020BAA4 (-PopLayerTransformFromExplicitSurfaceInput@CTreeEffectLayer@@AEAAXXZ.c)
 *     ?PushLayerTransformOnExplicitSurfaceInput@CTreeEffectLayer@@AEAAXXZ @ 0x180210ADC (-PushLayerTransformOnExplicitSurfaceInput@CTreeEffectLayer@@AEAAXXZ.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1802422DC (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

struct CBrush *__fastcall CEffectBrush::GetInput(CEffectBrush *this, unsigned int a2, __int64 a3, const char *a4)
{
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( a2 >= *((_DWORD *)this + 40) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x1FD,
      (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\effectbrush.cpp",
      a4);
  return *(struct CBrush **)(*((_QWORD *)this + 17) + 8LL * a2);
}
