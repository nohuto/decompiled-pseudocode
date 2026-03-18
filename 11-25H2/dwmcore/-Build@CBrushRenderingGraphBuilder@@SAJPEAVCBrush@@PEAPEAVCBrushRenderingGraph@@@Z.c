/*
 * XREFs of ?Build@CBrushRenderingGraphBuilder@@SAJPEAVCBrush@@PEAPEAVCBrushRenderingGraph@@@Z @ 0x18007123C
 * Callers:
 *     ?EnsureBrushGraph@CEffectBrush@@MEAAJ_N@Z @ 0x1800724A0 (-EnsureBrushGraph@CEffectBrush@@MEAAJ_N@Z.c)
 *     ?EnsureBrushGraph@CMaskBrush@@MEAAJ_N@Z @ 0x1802288B0 (-EnsureBrushGraph@CMaskBrush@@MEAAJ_N@Z.c)
 *     ?EnsureBrushGraph@CNineGridBrush@@MEAAJ_N@Z @ 0x18022B220 (-EnsureBrushGraph@CNineGridBrush@@MEAAJ_N@Z.c)
 *     ?EnsureBrushGraph@CClipBrush@@MEAAJ_N@Z @ 0x18029F650 (-EnsureBrushGraph@CClipBrush@@MEAAJ_N@Z.c)
 *     ?EnsureBrushGraph@CRadialGradientBrush@@EEAAJ_N@Z @ 0x1802AC760 (-EnsureBrushGraph@CRadialGradientBrush@@EEAAJ_N@Z.c)
 * Callees:
 *     ?Build@CBrushRenderingGraphBuilder@@AEAAJPEAVCBrush@@@Z @ 0x18006FD84 (-Build@CBrushRenderingGraphBuilder@@AEAAJPEAVCBrush@@@Z.c)
 *     ??0CBrushRenderingGraph@@IEAA@XZ @ 0x180071310 (--0CBrushRenderingGraph@@IEAA@XZ.c)
 *     MIDL_user_allocate @ 0x1800B12F0 (MIDL_user_allocate.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?InternalRelease@?$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ @ 0x180133FE8 (-InternalRelease@-$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CBrushRenderingGraphBuilder::Build(struct CBrush *a1, struct CBrushRenderingGraph **a2)
{
  CBrushRenderingGraph *v4; // rax
  CBrushRenderingGraph *v5; // rax
  struct CBrushRenderingGraph *v6; // rbx
  int v7; // eax
  unsigned int v8; // edi
  struct CBrushRenderingGraph *v10; // [rsp+30h] [rbp-18h] BYREF
  int v11; // [rsp+38h] [rbp-10h]
  CBrushRenderingGraph *v12; // [rsp+60h] [rbp+18h] BYREF

  v4 = (CBrushRenderingGraph *)MIDL_user_allocate(0xD8uLL);
  if ( !v4 )
  {
    v12 = 0LL;
    goto LABEL_7;
  }
  v5 = CBrushRenderingGraph::CBrushRenderingGraph(v4);
  v12 = v5;
  v6 = v5;
  if ( !v5 )
  {
LABEL_7:
    v8 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x14u, 0LL);
    goto LABEL_5;
  }
  (**(void (__fastcall ***)(CBrushRenderingGraph *))v5)(v5);
  v11 = 0;
  v10 = v6;
  v7 = CBrushRenderingGraphBuilder::Build((CBrushRenderingGraphBuilder *)&v10, a1);
  v8 = v7;
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0x18u, 0LL);
  }
  else
  {
    v12 = 0LL;
    *a2 = v6;
  }
LABEL_5:
  Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease(&v12);
  return v8;
}
