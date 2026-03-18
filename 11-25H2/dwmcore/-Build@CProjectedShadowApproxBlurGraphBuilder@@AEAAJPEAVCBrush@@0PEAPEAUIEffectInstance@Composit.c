/*
 * XREFs of ?Build@CProjectedShadowApproxBlurGraphBuilder@@AEAAJPEAVCBrush@@0PEAPEAUIEffectInstance@Composition@UI@Windows@@@Z @ 0x1802B45D8
 * Callers:
 *     ?Build@CProjectedShadowApproxBlurGraphBuilder@@SAJPEAVCBrush@@0PEAPEAVCBrushRenderingGraph@@PEAPEAUIEffectInstance@Composition@UI@Windows@@@Z @ 0x1802B4758 (-Build@CProjectedShadowApproxBlurGraphBuilder@@SAJPEAVCBrush@@0PEAPEAVCBrushRenderingGraph@@PEAP.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCRenderingEffect@@@WRL@Microsoft@@IEAAKXZ @ 0x18005D64C (-InternalRelease@-$ComPtr@VCRenderingEffect@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?CreateTechniqueForFragment@CBrushRenderingGraphBuilder@@IEAAJ$$QEAV?$unique_ptr@VCRenderingTechniqueFragment@@U?$default_delete@VCRenderingTechniqueFragment@@@std@@@std@@PEAI@Z @ 0x18006DC54 (-CreateTechniqueForFragment@CBrushRenderingGraphBuilder@@IEAAJ$$QEAV-$unique_ptr@VCRenderingTech.c)
 *     ?CreateShaderBodies@CBrushRenderingGraphBuilder@@IEAAJXZ @ 0x18006F2A4 (-CreateShaderBodies@CBrushRenderingGraphBuilder@@IEAAJXZ.c)
 *     ??1?$unique_ptr@VCRenderingTechniqueFragment@@U?$default_delete@VCRenderingTechniqueFragment@@@std@@@std@@QEAA@XZ @ 0x18007012C (--1-$unique_ptr@VCRenderingTechniqueFragment@@U-$default_delete@VCRenderingTechniqueFragment@@@s.c)
 *     ?CheckFragmentSize@CBrushRenderingGraphBuilder@@IEAAJPEAVCRenderingTechniqueFragment@@@Z @ 0x1800703DC (-CheckFragmentSize@CBrushRenderingGraphBuilder@@IEAAJPEAVCRenderingTechniqueFragment@@@Z.c)
 *     ?EnsureShaderCache@CBrushRenderingGraphBuilder@@IEAAJ_N@Z @ 0x180071970 (-EnsureShaderCache@CBrushRenderingGraphBuilder@@IEAAJ_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CheckBackdropInputs@CBrushRenderingGraphBuilder@@IEAAXXZ @ 0x1801EE820 (-CheckBackdropInputs@CBrushRenderingGraphBuilder@@IEAAXXZ.c)
 *     ??1?$out_param_t@V?$unique_ptr@VCRenderingTechniqueFragment@@U?$default_delete@VCRenderingTechniqueFragment@@@std@@@std@@@details@wil@@QEAA@XZ @ 0x180217194 (--1-$out_param_t@V-$unique_ptr@VCRenderingTechniqueFragment@@U-$default_delete@VCRenderingTechni.c)
 *     ?AddApproxBlurBrush@CProjectedShadowApproxBlurGraphBuilder@@AEAAJPEAVCBrush@@0PEAPEAVCRenderingTechniqueFragment@@@Z @ 0x1802B443C (-AddApproxBlurBrush@CProjectedShadowApproxBlurGraphBuilder@@AEAAJPEAVCBrush@@0PEAPEAVCRenderingT.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CProjectedShadowApproxBlurGraphBuilder::Build(
        CProjectedShadowApproxBlurGraphBuilder *this,
        struct CBrush *a2,
        struct CBrush *a3,
        struct Windows::UI::Composition::IEffectInstance **a4)
{
  int v6; // ebx
  int ShaderBodies; // eax
  struct Windows::UI::Composition::IEffectInstance *v8; // rsi
  struct Windows::UI::Composition::IEffectInstance *v9; // rbx
  int v10; // r9d
  unsigned int v12; // [rsp+20h] [rbp-40h]
  __int64 v13; // [rsp+30h] [rbp-30h] BYREF
  struct CRenderingTechniqueFragment *v14; // [rsp+38h] [rbp-28h] BYREF
  struct Windows::UI::Composition::IEffectInstance *v15; // [rsp+40h] [rbp-20h] BYREF
  struct CRenderingTechniqueFragment **v16; // [rsp+48h] [rbp-18h] BYREF
  struct CRenderingTechniqueFragment *v17; // [rsp+50h] [rbp-10h] BYREF
  char v18; // [rsp+58h] [rbp-8h]

  v15 = 0LL;
  v14 = 0LL;
  v17 = 0LL;
  v16 = &v14;
  v18 = 1;
  v6 = CProjectedShadowApproxBlurGraphBuilder::AddApproxBlurBrush(this, a2, a3, &v17);
  wil::details::out_param_t<std::unique_ptr<CRenderingTechniqueFragment>>::~out_param_t<std::unique_ptr<CRenderingTechniqueFragment>>((__int64)&v16);
  if ( v6 < 0 )
  {
    v10 = v6;
    v12 = 54;
    goto LABEL_15;
  }
  ShaderBodies = CBrushRenderingGraphBuilder::CheckFragmentSize((struct CBrushRenderingGraph **)this, v14);
  v6 = ShaderBodies;
  if ( ShaderBodies < 0 )
  {
    v12 = 57;
    goto LABEL_10;
  }
  v8 = 0LL;
  v9 = *(struct Windows::UI::Composition::IEffectInstance **)v14;
  if ( *(_QWORD *)v14 )
  {
    (**(void (__fastcall ***)(_QWORD))v9)(*(_QWORD *)v14);
    v13 = 0LL;
    v15 = v9;
    Microsoft::WRL::ComPtr<CRenderingEffect>::InternalRelease(&v13);
    v8 = v9;
  }
  LODWORD(v13) = 0;
  ShaderBodies = CBrushRenderingGraphBuilder::CreateTechniqueForFragment(this, (__int64 *)&v14, &v13);
  v6 = ShaderBodies;
  if ( ShaderBodies < 0 )
  {
    v12 = 62;
    goto LABEL_10;
  }
  ShaderBodies = CBrushRenderingGraphBuilder::EnsureShaderCache(this, 0);
  v6 = ShaderBodies;
  if ( ShaderBodies < 0 )
  {
    v12 = 64;
    goto LABEL_10;
  }
  ShaderBodies = CBrushRenderingGraphBuilder::CreateShaderBodies(this);
  v6 = ShaderBodies;
  if ( ShaderBodies < 0 )
  {
    v12 = 65;
LABEL_10:
    v10 = ShaderBodies;
LABEL_15:
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v10, v12, 0LL);
    goto LABEL_16;
  }
  CBrushRenderingGraphBuilder::CheckBackdropInputs(this);
  v15 = 0LL;
  *a4 = v8;
LABEL_16:
  std::unique_ptr<CRenderingTechniqueFragment>::~unique_ptr<CRenderingTechniqueFragment>(&v14);
  Microsoft::WRL::ComPtr<CRenderingEffect>::InternalRelease((__int64 *)&v15);
  return (unsigned int)v6;
}
