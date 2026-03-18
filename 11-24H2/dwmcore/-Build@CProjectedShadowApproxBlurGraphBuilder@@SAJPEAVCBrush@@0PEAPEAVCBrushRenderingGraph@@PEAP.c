/*
 * XREFs of ?Build@CProjectedShadowApproxBlurGraphBuilder@@SAJPEAVCBrush@@0PEAPEAVCBrushRenderingGraph@@PEAPEAUIEffectInstance@Composition@UI@Windows@@@Z @ 0x1802AAC98
 * Callers:
 *     ?CreateCrossFadeGraph@CProjectedShadow@@AEAAJPEAVCBrush@@0@Z @ 0x18028D570 (-CreateCrossFadeGraph@CProjectedShadow@@AEAAJPEAVCBrush@@0@Z.c)
 * Callees:
 *     MIDL_user_allocate @ 0x18001C2F0 (MIDL_user_allocate.c)
 *     ??0CBrushRenderingGraph@@IEAA@XZ @ 0x180047160 (--0CBrushRenderingGraph@@IEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?InternalRelease@?$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ @ 0x18008F428 (-InternalRelease@-$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Build@CProjectedShadowApproxBlurGraphBuilder@@AEAAJPEAVCBrush@@0PEAPEAUIEffectInstance@Composition@UI@Windows@@@Z @ 0x1802AAB18 (-Build@CProjectedShadowApproxBlurGraphBuilder@@AEAAJPEAVCBrush@@0PEAPEAUIEffectInstance@Composit.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CProjectedShadowApproxBlurGraphBuilder::Build(
        struct CBrush *a1,
        struct CBrush *a2,
        struct CBrushRenderingGraph **a3,
        struct Windows::UI::Composition::IEffectInstance **a4)
{
  CBrushRenderingGraph *v8; // rax
  CInteractionContextWrapper *v9; // rax
  struct CBrushRenderingGraph *v10; // rdi
  int v11; // eax
  unsigned int v12; // ebx
  CInteractionContextWrapper *v14; // [rsp+30h] [rbp-28h] BYREF
  struct CBrushRenderingGraph *v15; // [rsp+38h] [rbp-20h] BYREF
  int v16; // [rsp+40h] [rbp-18h]

  v8 = (CBrushRenderingGraph *)MIDL_user_allocate(0xD8uLL);
  if ( !v8 )
  {
    v14 = 0LL;
    goto LABEL_7;
  }
  v9 = CBrushRenderingGraph::CBrushRenderingGraph(v8);
  v14 = v9;
  v10 = v9;
  if ( !v9 )
  {
LABEL_7:
    v12 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x17u, 0LL);
    goto LABEL_8;
  }
  (**(void (__fastcall ***)(CInteractionContextWrapper *))v9)(v9);
  v16 = 0;
  v15 = v10;
  v11 = CProjectedShadowApproxBlurGraphBuilder::Build((CProjectedShadowApproxBlurGraphBuilder *)&v15, a1, a2, a4);
  v12 = v11;
  if ( v11 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v11, 0x1Bu, 0LL);
  }
  else
  {
    v14 = 0LL;
    *a3 = v10;
  }
LABEL_8:
  Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease(&v14);
  return v12;
}
