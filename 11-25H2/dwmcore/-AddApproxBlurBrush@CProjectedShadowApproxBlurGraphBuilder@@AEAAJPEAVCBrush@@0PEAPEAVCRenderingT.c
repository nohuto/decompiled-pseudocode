/*
 * XREFs of ?AddApproxBlurBrush@CProjectedShadowApproxBlurGraphBuilder@@AEAAJPEAVCBrush@@0PEAPEAVCRenderingTechniqueFragment@@@Z @ 0x1802B443C
 * Callers:
 *     ?Build@CProjectedShadowApproxBlurGraphBuilder@@AEAAJPEAVCBrush@@0PEAPEAUIEffectInstance@Composition@UI@Windows@@@Z @ 0x1802B45D8 (-Build@CProjectedShadowApproxBlurGraphBuilder@@AEAAJPEAVCBrush@@0PEAPEAUIEffectInstance@Composit.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18006BC80 (--2@YAPEAX_K@Z.c)
 *     ??1?$unique_ptr@VCRenderingTechniqueFragment@@U?$default_delete@VCRenderingTechniqueFragment@@@std@@@std@@QEAA@XZ @ 0x18007012C (--1-$unique_ptr@VCRenderingTechniqueFragment@@U-$default_delete@VCRenderingTechniqueFragment@@@s.c)
 *     ??0CRenderingTechniqueFragment@@QEAA@PEAUIEffectInstance@Composition@UI@Windows@@PEAVCShaderCache@@IW4Enum@CompiledEffectSubgraphFlags@234@_N@Z @ 0x180070CA4 (--0CRenderingTechniqueFragment@@QEAA@PEAUIEffectInstance@Composition@UI@Windows@@PEAVCShaderCach.c)
 *     ?AddNamedInputToFragment@CBrushRenderingGraphBuilder@@IEAAXPEAVCRenderingTechniqueFragment@@AEBUGraphInputParameters@CBrushRenderingGraph@@@Z @ 0x180070DA4 (-AddNamedInputToFragment@CBrushRenderingGraphBuilder@@IEAAXPEAVCRenderingTechniqueFragment@@AEBU.c)
 *     MIDL_user_allocate @ 0x1800B12F0 (MIDL_user_allocate.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?reset@?$unique_ptr@VCShaderCache@@U?$default_delete@VCShaderCache@@@std@@@std@@QEAAXPEAVCShaderCache@@@Z @ 0x18025B9C0 (-reset@-$unique_ptr@VCShaderCache@@U-$default_delete@VCShaderCache@@@std@@@std@@QEAAXPEAVCShader.c)
 *     ??0CProjectedShadowApproxBlurEffect@@QEAA@XZ @ 0x1802E5318 (--0CProjectedShadowApproxBlurEffect@@QEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CProjectedShadowApproxBlurGraphBuilder::AddApproxBlurBrush(
        CProjectedShadowApproxBlurGraphBuilder *this,
        struct CBrush *a2,
        struct CBrush *a3,
        struct CRenderingTechniqueFragment **a4)
{
  unsigned int v7; // r14d
  CProjectedShadowApproxBlurEffect *v8; // rax
  CProjectedShadowApproxBlurEffect *v9; // rax
  __int64 v10; // rbx
  void *v11; // rdi
  CShaderCache *v12; // r8
  _QWORD *v13; // rax
  struct CRenderingTechniqueFragment *v14; // rsi
  CRenderingTechniqueFragment **v15; // rdi
  __int64 v16; // r15
  CRenderingTechniqueFragment *v17; // rax
  CRenderingTechniqueFragment *v19[2]; // [rsp+30h] [rbp-30h] BYREF
  _QWORD v20[2]; // [rsp+40h] [rbp-20h] BYREF
  int v21; // [rsp+50h] [rbp-10h]
  int v22; // [rsp+54h] [rbp-Ch]

  v7 = 0;
  v8 = (CProjectedShadowApproxBlurEffect *)operator new(0x68uLL);
  if ( v8 )
  {
    v9 = CProjectedShadowApproxBlurEffect::CProjectedShadowApproxBlurEffect(v8);
    v10 = (__int64)v9;
    if ( v9 )
      (**(void (__fastcall ***)(CProjectedShadowApproxBlurEffect *))v9)(v9);
  }
  else
  {
    v10 = 0LL;
  }
  v11 = MIDL_user_allocate(0x78uLL);
  if ( !v11 )
  {
    v19[0] = 0LL;
LABEL_16:
    v7 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x5Du, 0LL);
    goto LABEL_17;
  }
  v12 = CProjectedShadowApproxBlurEffect::s_spShaderCache;
  if ( !CProjectedShadowApproxBlurEffect::s_spShaderCache )
  {
    v13 = operator new(0x20uLL);
    if ( v13 )
    {
      *v13 = 0LL;
      v13[1] = 0LL;
      *((_DWORD *)v13 + 4) = 0;
      v13[3] = v13;
    }
    else
    {
      v13 = 0LL;
    }
    std::unique_ptr<CShaderCache>::reset(&CProjectedShadowApproxBlurEffect::s_spShaderCache, (CShaderCache *)v13);
    v12 = CProjectedShadowApproxBlurEffect::s_spShaderCache;
  }
  v19[0] = (CRenderingTechniqueFragment *)CRenderingTechniqueFragment::CRenderingTechniqueFragment(
                                            (__int64)v11,
                                            v10,
                                            (__int64)v12,
                                            0,
                                            0,
                                            0);
  v14 = v19[0];
  if ( !v19[0] )
    goto LABEL_16;
  v19[0] = a2;
  v15 = v19;
  v19[1] = a3;
  v16 = 2LL;
  do
  {
    v17 = *v15;
    v22 = 0;
    v20[1] = 0LL;
    v21 = 0;
    v20[0] = v17;
    CBrushRenderingGraphBuilder::AddNamedInputToFragment(
      this,
      v14,
      (const struct CBrushRenderingGraph::GraphInputParameters *)v20);
    ++v15;
    --v16;
  }
  while ( v16 );
  v19[0] = 0LL;
  *a4 = v14;
LABEL_17:
  std::unique_ptr<CRenderingTechniqueFragment>::~unique_ptr<CRenderingTechniqueFragment>(v19);
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
  return v7;
}
