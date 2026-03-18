/*
 * XREFs of ?RenderInternalEffect@CBrushRenderingGraph@@IEBAJPEAVCDrawingContext@@PEAUEffectStage@@AEBUIntermediateConfigurationInputs@1@PEAUEffectInput@@@Z @ 0x18006B114
 * Callers:
 *     ?RenderSubgraphToIntermediateInternal@CBrushRenderingGraph@@IEBAJPEBVCRenderingTechnique@@PEAVCDrawingContext@@AEBUIntermediateConfigurationInputs@1@AEBV?$span@$$CBUEffectInput@@$0?0@gsl@@AEBV?$span@UEffectInput@@$0?0@6@@Z @ 0x180018180 (-RenderSubgraphToIntermediateInternal@CBrushRenderingGraph@@IEBAJPEBVCRenderingTechnique@@PEAVCD.c)
 * Callees:
 *     ?ConfigureIntermediateFromInput@CBrushRenderingGraph@@IEBAXAEBUIntermediateConfigurationInputs@1@PEAUIntermediateConfigurationOutputs@1@@Z @ 0x1800498DC (-ConfigureIntermediateFromInput@CBrushRenderingGraph@@IEBAXAEBUIntermediateConfigurationInputs@1.c)
 *     ?ConfigureIntermediateFromBackdropInput@CBrushRenderingGraph@@KAXAEBUIntermediateConfigurationInputs@1@PEAUIntermediateConfigurationOutputs@1@@Z @ 0x18004A6B4 (-ConfigureIntermediateFromBackdropInput@CBrushRenderingGraph@@KAXAEBUIntermediateConfigurationIn.c)
 *     ??DMatrix3x3@@QEBA?AV0@AEBUD2D_MATRIX_3X2_F@@@Z @ 0x18004AA90 (--DMatrix3x3@@QEBA-AV0@AEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     ??1CDrawListBitmap@@QEAA@XZ @ 0x18004D620 (--1CDrawListBitmap@@QEAA@XZ.c)
 *     ?Render@CDrawListCache@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@BlendMode@@@Z @ 0x180051E30 (-Render@CDrawListCache@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@BlendMode@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180061E70 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetSize@CDrawListBitmap@@QEBA?AUD2D_SIZE_U@@XZ @ 0x1800638E0 (-GetSize@CDrawListBitmap@@QEBA-AUD2D_SIZE_U@@XZ.c)
 *     ?As3DHomogeneous@Matrix3x3@@QEBA?AVCMILMatrix@@XZ @ 0x18006B694 (-As3DHomogeneous@Matrix3x3@@QEBA-AVCMILMatrix@@XZ.c)
 *     ?Create@CGeometryOnlyDrawListBrush@@SAJPEAPEAV1@@Z @ 0x18006BF94 (-Create@CGeometryOnlyDrawListBrush@@SAJPEAPEAV1@@Z.c)
 *     ?Free@?$CThreadLocalObjectCache@VCGeometryOnlyDrawListBrush@@V1@@@SAXPEAX@Z @ 0x18006C184 (-Free@-$CThreadLocalObjectCache@VCGeometryOnlyDrawListBrush@@V1@@@SAXPEAX@Z.c)
 *     ?UpdateDrawListCache@CBrushRenderingGraph@@IEBAJPEAVCDrawingContext@@PEBVCDrawListBrush@@PEAUEffectStage@@IPEAVCDrawListCache@@@Z @ 0x18006C70C (-UpdateDrawListCache@CBrushRenderingGraph@@IEBAJPEAVCDrawingContext@@PEBVCDrawListBrush@@PEAUEff.c)
 *     ??0CDrawListBitmap@@QEAA@PEAVIBitmapRealization@@@Z @ 0x18006DC60 (--0CDrawListBitmap@@QEAA@PEAVIBitmapRealization@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?InternalCreate@CDrawListCache@@CAJ_NPEAPEAV1@@Z @ 0x1800D6ED0 (-InternalCreate@CDrawListCache@@CAJ_NPEAPEAV1@@Z.c)
 *     ?PopTransformInternal@CDrawingContext@@IEAAX_N@Z @ 0x1800F5C80 (-PopTransformInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     ?PushOffScreenRenderingLayer@CDrawingContext@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_F@@VDisplayId@@W4Enum@CacheMode@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x1800F8DB4 (-PushOffScreenRenderingLayer@CDrawingContext@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_F@@VDisplayId@.c)
 *     ?PopLayer@CDrawingContext@@QEAAJXZ @ 0x1800FA030 (-PopLayer@CDrawingContext@@QEAAJXZ.c)
 *     ??4CDrawListBitmap@@QEAAAEAV0@$$QEAV0@@Z @ 0x1800FDB08 (--4CDrawListBitmap@@QEAAAEAV0@$$QEAV0@@Z.c)
 *     ?InternalRelease@?$ComPtr@VCDrawListCache@@@WRL@Microsoft@@IEAAKXZ @ 0x180110800 (-InternalRelease@-$ComPtr@VCDrawListCache@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z @ 0x1801379A0 (-PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
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
  __int64 v7; // rbx
  char *v9; // r13
  __int128 v11; // xmm0
  float v12; // xmm3_4
  int v13; // eax
  CBrushRenderingGraph *v14; // rcx
  int updated; // esi
  unsigned int v16; // edx
  char *v17; // rax
  __int64 v18; // rax
  float *v19; // rdi
  float *v20; // rbx
  __int64 v21; // rax
  int v22; // eax
  int v23; // eax
  void *v24; // rcx
  float v25; // xmm0_4
  const struct CDrawListBrush *v26; // rax
  struct CDrawListCache *v27; // rdi
  CDrawingContext *v28; // rcx
  int v29; // eax
  CDrawListBitmap *v30; // rax
  float *v31; // rax
  unsigned int v32; // eax
  unsigned __int64 v34; // [rsp+38h] [rbp-D0h] BYREF
  struct CDrawListCache *v35; // [rsp+40h] [rbp-C8h] BYREF
  const struct CDrawListBrush *lpMem; // [rsp+48h] [rbp-C0h] BYREF
  LPVOID lpMem_8[2]; // [rsp+50h] [rbp-B8h] BYREF
  __int128 v38; // [rsp+60h] [rbp-A8h]
  __int64 v39; // [rsp+70h] [rbp-98h]
  struct EffectInput *v40; // [rsp+98h] [rbp-70h] BYREF
  float v41; // [rsp+A0h] [rbp-68h] BYREF
  float v42; // [rsp+A4h] [rbp-64h]
  float v43; // [rsp+A8h] [rbp-60h]
  float v44; // [rsp+ACh] [rbp-5Ch]
  __int64 v45; // [rsp+B0h] [rbp-58h]
  __int128 v46; // [rsp+C8h] [rbp-40h] BYREF
  __int128 v47; // [rsp+D8h] [rbp-30h]
  __int128 v48; // [rsp+E8h] [rbp-20h]
  __int128 v49; // [rsp+F8h] [rbp-10h]
  int v50; // [rsp+108h] [rbp+0h]
  const struct CBrushRenderingGraph::IntermediateConfigurationInputs *v52; // [rsp+190h] [rbp+88h] BYREF

  v52 = a4;
  v5 = *(__m128 *)a4;
  v6 = a5;
  v7 = 0LL;
  v9 = (char *)a5 + 48;
  v46 = _xmm;
  v48 = _xmm;
  v11 = *((_OWORD *)a4 + 1);
  v50 = 10666;
  lpMem = 0LL;
  v35 = 0LL;
  v34 = 0LL;
  v45 = 0LL;
  v40 = a5;
  v41 = 1.0;
  v42 = 1.0;
  v38 = v11;
  *(__m128 *)lpMem_8 = v5;
  v47 = _xmm;
  v49 = *(__int128 *)&_xmm.r;
  v39 = *((_QWORD *)a4 + 4);
  v12 = 1.0 / _mm_shuffle_ps(v5, v5, 85).m128_f32[0];
  v43 = 1.0 / v5.m128_f32[0];
  v44 = v12;
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
  Microsoft::WRL::ComPtr<CDrawListCache>::InternalRelease(&v35);
  v13 = CDrawListCache::InternalCreate(1, &v35);
  updated = v13;
  if ( v13 >= 0 )
  {
    v16 = *((_DWORD *)a3 + 1);
    if ( v16 )
    {
      do
      {
        v17 = (char *)a3 + 112 * (unsigned int)v7 + 8;
        *(_QWORD *)&v38 = v17;
        if ( v17[44] && v17[105] && v16 == 1 )
          CBrushRenderingGraph::ConfigureIntermediateFromBackdropInput(
            (const struct CBrushRenderingGraph::IntermediateConfigurationInputs *)lpMem_8,
            (struct CBrushRenderingGraph::IntermediateConfigurationOutputs *)&v40);
        else
          CBrushRenderingGraph::ConfigureIntermediateFromInput(
            v14,
            (FLOAT *)lpMem_8,
            (struct CBrushRenderingGraph::IntermediateConfigurationOutputs *)&v40);
        v16 = *((_DWORD *)a3 + 1);
        LODWORD(v7) = v7 + 1;
      }
      while ( (unsigned int)v7 < v16 );
    }
    v18 = Matrix3x3::As3DHomogeneous(v9, lpMem_8);
    v19 = &v41;
    v20 = (float *)*((_QWORD *)v52 + 3);
    v46 = *(_OWORD *)v18;
    if ( v20 )
      v19 = v20;
    v47 = *(_OWORD *)(v18 + 16);
    v48 = *(_OWORD *)(v18 + 32);
    v49 = *(_OWORD *)(v18 + 48);
    v50 = *(_DWORD *)(v18 + 64);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v34);
    v21 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)a2 + 3) + 16LL))((char *)a2 + 24);
    LODWORD(lpMem_8[1]) = 32;
    lpMem_8[0] = "DWM Internal Effect intermediate";
    v22 = CDrawingContext::PushOffScreenRenderingLayer(
            a2,
            lpMem_8,
            v19,
            *(unsigned int *)(v21 + 8),
            (unsigned int)(v20 != 0LL) + 3,
            &v34);
    updated = v22;
    if ( v22 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v22, 0x221u, 0LL);
    }
    else
    {
      v23 = CDrawingContext::PushTransformInternal(a2, 0LL, (const struct CMILMatrix *)&v46, 0, 1);
      updated = v23;
      if ( v23 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v23, 0x224u, 0LL);
      }
      else
      {
        lpMem_8[1] = 0LL;
        lpMem_8[0] = &lpMem;
        LOBYTE(v38) = 1;
        updated = CGeometryOnlyDrawListBrush::Create((struct CGeometryOnlyDrawListBrush **)&lpMem_8[1]);
        if ( (_BYTE)v38 )
        {
          v24 = *(void **)lpMem_8[0];
          *(_QWORD *)lpMem_8[0] = lpMem_8[1];
          if ( v24 )
            CThreadLocalObjectCache<CGeometryOnlyDrawListBrush,CGeometryOnlyDrawListBrush>::Free(v24);
        }
        if ( updated < 0 )
        {
          v32 = 553;
        }
        else
        {
          v25 = v41 / v43;
          v26 = lpMem;
          lpMem_8[0] = 0LL;
          *((_DWORD *)lpMem + 12) = 0;
          v27 = v35;
          *((_BYTE *)v26 + 52) = 1;
          *(float *)&lpMem_8[1] = v25;
          *((float *)&lpMem_8[1] + 1) = v42 / v44;
          *((_OWORD *)v26 + 2) = *(_OWORD *)lpMem_8;
          updated = CBrushRenderingGraph::UpdateDrawListCache(this, a2, lpMem, a3, 0, v27);
          if ( updated < 0 )
          {
            v32 = 565;
          }
          else
          {
            updated = CDrawListCache::Render((__int64)v27, a2, (CMILMatrix *)&v46, 1.0);
            if ( updated >= 0 )
            {
              CDrawingContext::PopTransformInternal(a2, 1);
              v29 = CDrawingContext::PopLayer(v28);
              updated = v29;
              if ( v29 >= 0 )
              {
                v7 = v34;
                v30 = CDrawListBitmap::CDrawListBitmap(
                        (CDrawListBitmap *)lpMem_8,
                        (struct IBitmapRealization *)((v34 + 8) & ((unsigned __int128)-(__int128)v34 >> 64)));
                CDrawListBitmap::operator=(v6, v30);
                CDrawListBitmap::~CDrawListBitmap((CDrawListBitmap *)lpMem_8);
                CDrawListBitmap::GetSize(v6, &v52);
                *(LPVOID *)((char *)lpMem_8 + 4) = 0LL;
                *(float *)lpMem_8 = 1.0 / (float)(int)v52;
                *((float *)&lpMem_8[1] + 1) = 1.0 / (float)SHIDWORD(v52);
                *(float *)&v38 = 0.0 - (float)(*(float *)lpMem_8 * 0.0);
                *((float *)&v38 + 1) = 0.0 - (float)(*((float *)&lpMem_8[1] + 1) * 0.0);
                v31 = Matrix3x3::operator*((float *)v9, (float *)&v40, (float *)lpMem_8);
                *(_OWORD *)v9 = *(_OWORD *)v31;
                *((_OWORD *)v9 + 1) = *((_OWORD *)v31 + 1);
                *((float *)v9 + 8) = v31[8];
                *((_DWORD *)v6 + 10) |= *((_DWORD *)v27 + 18) & 0x278;
                goto LABEL_23;
              }
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v29, 0x241u, 0LL);
              goto LABEL_22;
            }
            v32 = 570;
          }
        }
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, updated, v32, 0LL);
        CDrawingContext::PopTransformInternal(a2, 1);
      }
      CDrawingContext::PopLayer(a2);
    }
LABEL_22:
    v7 = v34;
    goto LABEL_23;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v13, 0x1F1u, 0LL);
LABEL_23:
  Microsoft::WRL::ComPtr<CDrawListCache>::InternalRelease(&v35);
  if ( lpMem )
    CThreadLocalObjectCache<CGeometryOnlyDrawListBrush,CGeometryOnlyDrawListBrush>::Free(lpMem);
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  return (unsigned int)updated;
}
