/*
 * XREFs of ?RenderInternalEffect@CBrushRenderingGraph@@IEBAJPEAVCDrawingContext@@PEAUEffectStage@@AEBUIntermediateConfigurationInputs@1@PEAUEffectInput@@@Z @ 0x18019FAE8
 * Callers:
 *     ?RenderSubgraphToIntermediateInternal@CBrushRenderingGraph@@IEBAJPEBVCRenderingTechnique@@PEAVCDrawingContext@@AEBUIntermediateConfigurationInputs@1@AEBV?$span@$$CBUEffectInput@@$0?0@gsl@@AEBV?$span@UEffectInput@@$0?0@6@@Z @ 0x180127930 (-RenderSubgraphToIntermediateInternal@CBrushRenderingGraph@@IEBAJPEBVCRenderingTechnique@@PEAVCD.c)
 * Callees:
 *     ??0CDrawListBitmap@@QEAA@PEAVIBitmapRealization@@@Z @ 0x180073D20 (--0CDrawListBitmap@@QEAA@PEAVIBitmapRealization@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18007BD44 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z @ 0x18007E7D0 (-PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z.c)
 *     ?PopLayer@CDrawingContext@@QEAAJXZ @ 0x180085F60 (-PopLayer@CDrawingContext@@QEAAJXZ.c)
 *     ??1CDrawListBitmap@@QEAA@XZ @ 0x1800D0080 (--1CDrawListBitmap@@QEAA@XZ.c)
 *     ?Render@CDrawListCache@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@BlendMode@@@Z @ 0x1800D4880 (-Render@CDrawListCache@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@BlendMode@@@Z.c)
 *     ?PushOffScreenRenderingLayer@CDrawingContext@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_F@@VDisplayId@@W4Enum@CacheMode@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x1800DCA0C (-PushOffScreenRenderingLayer@CDrawingContext@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_F@@VDisplayId@.c)
 *     ?ConfigureIntermediateFromBackdropInput@CBrushRenderingGraph@@KAXAEBUIntermediateConfigurationInputs@1@PEAUIntermediateConfigurationOutputs@1@@Z @ 0x1800DE390 (-ConfigureIntermediateFromBackdropInput@CBrushRenderingGraph@@KAXAEBUIntermediateConfigurationIn.c)
 *     ??DMatrix3x3@@QEBA?AV0@AEBUD2D_MATRIX_3X2_F@@@Z @ 0x1800DE760 (--DMatrix3x3@@QEBA-AV0@AEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?InternalCreate@CDrawListCache@@CAJ_NPEAPEAV1@@Z @ 0x18010C790 (-InternalCreate@CDrawListCache@@CAJ_NPEAPEAV1@@Z.c)
 *     ?PopTransformInternal@CDrawingContext@@IEAAX_N@Z @ 0x180118590 (-PopTransformInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     ?Free@?$CThreadLocalObjectCache@VCGeometryOnlyDrawListBrush@@V1@@@SAXPEAX@Z @ 0x180126B64 (-Free@-$CThreadLocalObjectCache@VCGeometryOnlyDrawListBrush@@V1@@@SAXPEAX@Z.c)
 *     ?Create@CGeometryOnlyDrawListBrush@@SAJPEAPEAV1@@Z @ 0x180126F18 (-Create@CGeometryOnlyDrawListBrush@@SAJPEAPEAV1@@Z.c)
 *     ?UpdateDrawListCache@CBrushRenderingGraph@@IEBAJPEAVCDrawingContext@@PEBVCDrawListBrush@@PEAUEffectStage@@IPEAVCDrawListCache@@@Z @ 0x18012707C (-UpdateDrawListCache@CBrushRenderingGraph@@IEBAJPEAVCDrawingContext@@PEBVCDrawListBrush@@PEAUEff.c)
 *     ?InternalRelease@?$ComPtr@VCDrawListCache@@@WRL@Microsoft@@IEAAKXZ @ 0x18014C440 (-InternalRelease@-$ComPtr@VCDrawListCache@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??4CDrawListBitmap@@QEAAAEAV0@$$QEAV0@@Z @ 0x18016FEF0 (--4CDrawListBitmap@@QEAAAEAV0@$$QEAV0@@Z.c)
 *     ?GetSize@CDrawListBitmap@@QEBA?AUD2D_SIZE_U@@XZ @ 0x18019E740 (-GetSize@CDrawListBitmap@@QEBA-AUD2D_SIZE_U@@XZ.c)
 *     ?ConfigureIntermediateFromInput@CBrushRenderingGraph@@IEBAXAEBUIntermediateConfigurationInputs@1@PEAUIntermediateConfigurationOutputs@1@@Z @ 0x18019E848 (-ConfigureIntermediateFromInput@CBrushRenderingGraph@@IEBAXAEBUIntermediateConfigurationInputs@1.c)
 *     ?As3DHomogeneous@Matrix3x3@@QEBA?AVCMILMatrix@@XZ @ 0x1801A0068 (-As3DHomogeneous@Matrix3x3@@QEBA-AVCMILMatrix@@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CBrushRenderingGraph::RenderInternalEffect(
        CBrushRenderingGraph *this,
        struct CDrawingContext *a2,
        struct EffectStage *a3,
        const struct CBrushRenderingGraph::IntermediateConfigurationInputs *a4,
        struct EffectInput *a5)
{
  __m128 v5; // xmm2
  struct EffectInput *v6; // r12
  CMILRefCountImpl *v7; // rbx
  char *v9; // r13
  __int128 v11; // xmm0
  float v12; // xmm3_4
  int v13; // eax
  CBrushRenderingGraph *v14; // rcx
  int updated; // esi
  unsigned int v16; // edx
  char *v17; // rax
  __int64 v18; // rax
  unsigned int *v19; // rdi
  unsigned int *v20; // rbx
  __int64 v21; // rax
  int v22; // eax
  int v23; // eax
  __int64 v24; // rdx
  _QWORD *v25; // rcx
  float v26; // xmm0_4
  _QWORD *v27; // rax
  struct CDrawListCache *v28; // rdi
  CDrawingContext *v29; // rcx
  int v30; // eax
  __int64 *v31; // rax
  __int64 v32; // r8
  float *v33; // rax
  unsigned int v34; // eax
  CMILRefCountImpl *v36; // [rsp+38h] [rbp-D0h] BYREF
  struct CDrawListCache *v37; // [rsp+40h] [rbp-C8h] BYREF
  _QWORD *lpMem; // [rsp+48h] [rbp-C0h] BYREF
  LPVOID lpMem_8[2]; // [rsp+50h] [rbp-B8h] BYREF
  __int128 v40; // [rsp+60h] [rbp-A8h]
  __int64 v41; // [rsp+70h] [rbp-98h]
  struct EffectInput *v42; // [rsp+98h] [rbp-70h] BYREF
  float v43; // [rsp+A0h] [rbp-68h] BYREF
  float v44; // [rsp+A4h] [rbp-64h]
  float v45; // [rsp+A8h] [rbp-60h]
  float v46; // [rsp+ACh] [rbp-5Ch]
  __int64 v47; // [rsp+B0h] [rbp-58h]
  __int128 v48; // [rsp+C8h] [rbp-40h] BYREF
  __int128 v49; // [rsp+D8h] [rbp-30h]
  __int128 v50; // [rsp+E8h] [rbp-20h]
  __int128 v51; // [rsp+F8h] [rbp-10h]
  int v52; // [rsp+108h] [rbp+0h]
  const struct CBrushRenderingGraph::IntermediateConfigurationInputs *v54; // [rsp+190h] [rbp+88h] BYREF

  v54 = a4;
  v5 = *(__m128 *)a4;
  v6 = a5;
  v7 = 0LL;
  v9 = (char *)a5 + 48;
  v48 = _xmm;
  v50 = _xmm;
  v11 = *((_OWORD *)a4 + 1);
  v52 = 10666;
  lpMem = 0LL;
  v37 = 0LL;
  v36 = 0LL;
  v47 = 0LL;
  v42 = a5;
  v43 = 1.0;
  v44 = 1.0;
  v40 = v11;
  *(__m128 *)lpMem_8 = v5;
  v49 = _xmm;
  v51 = *(__int128 *)&_xmm.r;
  v41 = *((_QWORD *)a4 + 4);
  v12 = 1.0 / _mm_shuffle_ps(v5, v5, 85).m128_f32[0];
  v45 = 1.0 / v5.m128_f32[0];
  v46 = v12;
  *(_QWORD *)((char *)a5 + 84) = 0LL;
  *((_DWORD *)v6 + 23) = 1065353216;
  *((_DWORD *)v6 + 24) = 1065353216;
  *(_QWORD *)(v9 + 4) = 0LL;
  *(float *)v9 = 1.0 / v5.m128_f32[0];
  *((float *)v9 + 4) = v12;
  *((float *)v9 + 6) = 0.0 - (float)((float)(1.0 / v5.m128_f32[0]) * 0.0);
  *((_DWORD *)v9 + 3) = 0;
  *((_DWORD *)v9 + 5) = 0;
  *((_DWORD *)v9 + 8) = 1065353216;
  *((float *)v9 + 7) = 0.0 - (float)(v12 * 0.0);
  Microsoft::WRL::ComPtr<CDrawListCache>::InternalRelease((volatile signed __int32 **)&v37);
  v13 = CDrawListCache::InternalCreate(1, &v37);
  updated = v13;
  if ( v13 >= 0 )
  {
    v16 = *((_DWORD *)a3 + 1);
    if ( v16 )
    {
      do
      {
        v17 = (char *)a3 + 112 * (unsigned int)v7 + 8;
        *(_QWORD *)&v40 = v17;
        if ( v17[44] && v17[105] && v16 == 1 )
          CBrushRenderingGraph::ConfigureIntermediateFromBackdropInput(
            (const struct CBrushRenderingGraph::IntermediateConfigurationInputs *)lpMem_8,
            (struct CBrushRenderingGraph::IntermediateConfigurationOutputs *)&v42);
        else
          CBrushRenderingGraph::ConfigureIntermediateFromInput(
            v14,
            (FLOAT *)lpMem_8,
            (struct CBrushRenderingGraph::IntermediateConfigurationOutputs *)&v42);
        v16 = *((_DWORD *)a3 + 1);
        LODWORD(v7) = (_DWORD)v7 + 1;
      }
      while ( (unsigned int)v7 < v16 );
    }
    v18 = Matrix3x3::As3DHomogeneous(v9, lpMem_8);
    v19 = (unsigned int *)&v43;
    v20 = (unsigned int *)*((_QWORD *)v54 + 3);
    v48 = *(_OWORD *)v18;
    if ( v20 )
      v19 = v20;
    v49 = *(_OWORD *)(v18 + 16);
    v50 = *(_OWORD *)(v18 + 32);
    v51 = *(_OWORD *)(v18 + 48);
    v52 = *(_DWORD *)(v18 + 64);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v36);
    v21 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)a2 + 3) + 16LL))((char *)a2 + 24);
    LODWORD(lpMem_8[1]) = 32;
    lpMem_8[0] = "DWM Internal Effect intermediate";
    v22 = CDrawingContext::PushOffScreenRenderingLayer(
            (__int64)a2,
            (struct CResourceTag *)lpMem_8,
            v19,
            *(_DWORD *)(v21 + 8),
            (unsigned int)(v20 != 0LL) + 3,
            &v36);
    updated = v22;
    if ( v22 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v22, 0x221u, 0LL);
    }
    else
    {
      v23 = CDrawingContext::PushTransformInternal((const void **)a2, 0LL, (__m128 *)&v48, 0, 1);
      updated = v23;
      if ( v23 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v23, 0x224u, 0LL);
      }
      else
      {
        lpMem_8[1] = 0LL;
        lpMem_8[0] = &lpMem;
        LOBYTE(v40) = 1;
        updated = CGeometryOnlyDrawListBrush::Create((struct CGeometryOnlyDrawListBrush **)&lpMem_8[1], v24);
        if ( (_BYTE)v40 )
        {
          v25 = *(_QWORD **)lpMem_8[0];
          *(_QWORD *)lpMem_8[0] = lpMem_8[1];
          if ( v25 )
            CThreadLocalObjectCache<CGeometryOnlyDrawListBrush,CGeometryOnlyDrawListBrush>::Free(v25);
        }
        if ( updated < 0 )
        {
          v34 = 553;
        }
        else
        {
          v26 = v43 / v45;
          v27 = lpMem;
          lpMem_8[0] = 0LL;
          *((_DWORD *)lpMem + 12) = 0;
          v28 = v37;
          *((_BYTE *)v27 + 52) = 1;
          *(float *)&lpMem_8[1] = v26;
          *((float *)&lpMem_8[1] + 1) = v44 / v46;
          *((_OWORD *)v27 + 2) = *(_OWORD *)lpMem_8;
          updated = CBrushRenderingGraph::UpdateDrawListCache(
                      this,
                      a2,
                      (const struct CDrawListBrush *)lpMem,
                      a3,
                      0,
                      v28);
          if ( updated < 0 )
          {
            v34 = 565;
          }
          else
          {
            updated = CDrawListCache::Render((__int64)v28, a2, (CMILMatrix *)&v48, 1.0);
            if ( updated >= 0 )
            {
              CDrawingContext::PopTransformInternal(a2, 1);
              v30 = CDrawingContext::PopLayer(v29);
              updated = v30;
              if ( v30 >= 0 )
              {
                v7 = v36;
                v31 = (__int64 *)CDrawListBitmap::CDrawListBitmap(
                                   (CDrawListBitmap *)lpMem_8,
                                   (struct IBitmapRealization *)(((unsigned __int64)v36 + 8) & ((unsigned __int128)-(__int128)(unsigned __int64)v36 >> 64)));
                CDrawListBitmap::operator=((__int64)v6, v31);
                CDrawListBitmap::~CDrawListBitmap((CDrawListBitmap *)lpMem_8);
                CDrawListBitmap::GetSize(v6, &v54, v32);
                *(LPVOID *)((char *)lpMem_8 + 4) = 0LL;
                *(float *)lpMem_8 = 1.0 / (float)(int)v54;
                *((float *)&lpMem_8[1] + 1) = 1.0 / (float)SHIDWORD(v54);
                *(float *)&v40 = 0.0 - (float)(*(float *)lpMem_8 * 0.0);
                *((float *)&v40 + 1) = 0.0 - (float)(*((float *)&lpMem_8[1] + 1) * 0.0);
                v33 = Matrix3x3::operator*((float *)v9, (float *)&v42, (float *)lpMem_8);
                *(_OWORD *)v9 = *(_OWORD *)v33;
                *((_OWORD *)v9 + 1) = *((_OWORD *)v33 + 1);
                *((float *)v9 + 8) = v33[8];
                *((_DWORD *)v6 + 10) |= *((_DWORD *)v28 + 18) & 0x278;
                goto LABEL_23;
              }
              MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v30, 0x241u, 0LL);
              goto LABEL_22;
            }
            v34 = 570;
          }
        }
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, updated, v34, 0LL);
        CDrawingContext::PopTransformInternal(a2, 1);
      }
      CDrawingContext::PopLayer(a2);
    }
LABEL_22:
    v7 = v36;
    goto LABEL_23;
  }
  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v13, 0x1F1u, 0LL);
LABEL_23:
  Microsoft::WRL::ComPtr<CDrawListCache>::InternalRelease((volatile signed __int32 **)&v37);
  if ( lpMem )
    CThreadLocalObjectCache<CGeometryOnlyDrawListBrush,CGeometryOnlyDrawListBrush>::Free(lpMem);
  if ( v7 )
    (*(void (__fastcall **)(CMILRefCountImpl *))(*(_QWORD *)v7 + 16LL))(v7);
  return (unsigned int)updated;
}
