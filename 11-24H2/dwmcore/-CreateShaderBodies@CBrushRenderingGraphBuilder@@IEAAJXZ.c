/*
 * XREFs of ?CreateShaderBodies@CBrushRenderingGraphBuilder@@IEAAJXZ @ 0x180045678
 * Callers:
 *     ?Build@CBrushRenderingGraphBuilder@@AEAAJPEAVCBrush@@@Z @ 0x180046158 (-Build@CBrushRenderingGraphBuilder@@AEAAJPEAVCBrush@@@Z.c)
 *     ?Build@CBlurRenderingGraphBuilder@@QEAAJW4D3D_FEATURE_LEVEL@@@Z @ 0x180047968 (-Build@CBlurRenderingGraphBuilder@@QEAAJW4D3D_FEATURE_LEVEL@@@Z.c)
 *     ?Build@CProjectedShadowApproxBlurGraphBuilder@@AEAAJPEAVCBrush@@0PEAPEAUIEffectInstance@Composition@UI@Windows@@@Z @ 0x1802AAB18 (-Build@CProjectedShadowApproxBlurGraphBuilder@@AEAAJPEAVCBrush@@0PEAPEAUIEffectInstance@Composit.c)
 * Callees:
 *     ?CreateShaderBodies@CRenderingTechnique@@QEAAJXZ @ 0x180044974 (-CreateShaderBodies@CRenderingTechnique@@QEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CBrushRenderingGraphBuilder::CreateShaderBodies(CBrushRenderingGraphBuilder *this)
{
  __int64 v1; // rsi
  unsigned int v2; // ebx
  __int64 v3; // rdi
  unsigned int v4; // ebp
  CRenderingTechnique *v5; // rcx
  int ShaderBodies; // eax

  v1 = *(_QWORD *)this;
  v2 = 0;
  v3 = 0LL;
  v4 = *(_DWORD *)(*(_QWORD *)this + 168LL);
  while ( (unsigned int)v3 < v4 )
  {
    v5 = *(CRenderingTechnique **)(*(_QWORD *)(v1 + 144) + 8 * v3);
    if ( (*((_DWORD *)v5 + 66) & 1) == 0 )
    {
      ShaderBodies = CRenderingTechnique::CreateShaderBodies(v5);
      v2 = ShaderBodies;
      if ( ShaderBodies < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, ShaderBodies, 0x2C9u, 0LL);
        return v2;
      }
    }
    v3 = (unsigned int)(v3 + 1);
  }
  return v2;
}
