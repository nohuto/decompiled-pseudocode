/*
 * XREFs of ?Create@CBlurRenderingGraph@@SAJAEBVCResourceTag@@W4D3D_FEATURE_LEVEL@@AEBUD2D_VECTOR_2F@@W4D2D1_GAUSSIANBLUR_OPTIMIZATION@@W4D2D1_BORDER_MODE@@PEAPEAV1@@Z @ 0x180071ACC
 * Callers:
 *     ?GenerateBlurIntermediate@ShadowHelpers@@YAJAEBVCResourceTag@@PEAVCDrawingContext@@PEAVIBitmapRealization@@PEBUD2D_SIZE_F@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@MPEAPEAVIRenderTargetBitmap@@PEAV6@@Z @ 0x180072534 (-GenerateBlurIntermediate@ShadowHelpers@@YAJAEBVCResourceTag@@PEAVCDrawingContext@@PEAVIBitmapRe.c)
 *     ?ExecuteBlur@CRenderingTechnique@@QEAAJPEAVCDrawingContext@@AEBUEffectInput@@AEBUD2D_VECTOR_2F@@PEBUD2D_SIZE_F@@PEAU3@@Z @ 0x1800DDD70 (-ExecuteBlur@CRenderingTechnique@@QEAAJPEAVCDrawingContext@@AEBUEffectInput@@AEBUD2D_VECTOR_2F@@.c)
 * Callees:
 *     ??0CBrushRenderingGraph@@IEAA@XZ @ 0x180071310 (--0CBrushRenderingGraph@@IEAA@XZ.c)
 *     ?Build@CBlurRenderingGraphBuilder@@QEAAJW4D3D_FEATURE_LEVEL@@@Z @ 0x180071698 (-Build@CBlurRenderingGraphBuilder@@QEAAJW4D3D_FEATURE_LEVEL@@@Z.c)
 *     MIDL_user_allocate @ 0x1800B12F0 (MIDL_user_allocate.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CBlurRenderingGraph::Create(
        const struct CResourceTag *a1,
        int a2,
        const struct D2D_VECTOR_2F *a3,
        enum D2D1_GAUSSIANBLUR_OPTIMIZATION a4,
        enum D2D1_BORDER_MODE a5,
        struct CBlurRenderingGraph **a6)
{
  CBrushRenderingGraph *v10; // rax
  struct CBlurRenderingGraph *v11; // rbx
  __int64 v12; // rcx
  __int128 v13; // xmm0
  int v14; // eax
  unsigned int v15; // edi
  struct CBlurRenderingGraph *v17; // [rsp+30h] [rbp-18h] BYREF
  int v18; // [rsp+38h] [rbp-10h]

  v10 = (CBrushRenderingGraph *)MIDL_user_allocate(0x638uLL);
  v11 = v10;
  if ( v10 )
  {
    CBrushRenderingGraph::CBrushRenderingGraph(v10);
    *(_QWORD *)(v12 + 216) = v12 + 240;
    *(_QWORD *)(v12 + 224) = v12 + 240;
    *(_QWORD *)(v12 + 232) = v12 + 496;
    *(_QWORD *)v12 = &CExternalEffectGraph::`vftable';
    *(_QWORD *)(v12 + 496) = v12 + 520;
    *(_QWORD *)(v12 + 504) = v12 + 520;
    *(_QWORD *)(v12 + 512) = v12 + 1544;
    v13 = *(_OWORD *)a1;
    *(_DWORD *)(v12 + 1560) = 0;
    *(_DWORD *)(v12 + 1564) = 0;
    *(_QWORD *)v12 = &CBlurRenderingGraph::`vftable';
    *(_OWORD *)(v12 + 1544) = v13;
    *(_DWORD *)(v12 + 1580) = a5;
    *(struct D2D_VECTOR_2F *)(v12 + 1568) = *a3;
    *(_DWORD *)(v12 + 1576) = a4;
    (**(void (__fastcall ***)(__int64))v12)(v12);
    v18 = 0;
    v17 = v11;
    v14 = CBlurRenderingGraphBuilder::Build((CBlurRenderingGraphBuilder *)&v17, a2);
    v15 = v14;
    if ( v14 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v14, 0x75u, 0LL);
      (*(void (__fastcall **)(struct CBlurRenderingGraph *))(*(_QWORD *)v11 + 8LL))(v11);
    }
    else
    {
      *a6 = v11;
    }
  }
  else
  {
    v15 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x71u, 0LL);
  }
  return v15;
}
