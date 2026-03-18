/*
 * XREFs of ?D2DCombine@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x18004DFE0
 * Callers:
 *     ?ComputeLayout@CSurfaceBrush@@QEBAJAEBUD2D_SIZE_F@@PEAULayoutData@CContent@@PEAPEAVCShape@@@Z @ 0x180015130 (-ComputeLayout@CSurfaceBrush@@QEBAJAEBUD2D_SIZE_F@@PEAULayoutData@CContent@@PEAPEAVCShape@@@Z.c)
 *     ?GenerateDrawListPrimitive@CBrushDrawListGenerator@@AEBAJPEAUGenerateDrawListParameters@1@@Z @ 0x180049BE0 (-GenerateDrawListPrimitive@CBrushDrawListGenerator@@AEBAJPEAUGenerateDrawListParameters@1@@Z.c)
 *     ?ComputeBrushClamp@CBrushDrawListGenerator@@CAJV?$span@PEBVCDrawListBrush@@$0?0@gsl@@KAEBVMatrix3x3@@PEAPEAVCShape@@@Z @ 0x18004E5B0 (-ComputeBrushClamp@CBrushDrawListGenerator@@CAJV-$span@PEBVCDrawListBrush@@$0-0@gsl@@KAEBVMatrix.c)
 *     ?Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x18004F510 (-Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     ?GetSpriteClipShape@CWindowNode@@AEBAJPEAVCShapePtr@@@Z @ 0x18005E280 (-GetSpriteClipShape@CWindowNode@@AEBAJPEAVCShapePtr@@@Z.c)
 *     ?GetContentBounds@CWindowNode@@UEAAJPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18005E4C0 (-GetContentBounds@CWindowNode@@UEAAJPEAV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE.c)
 *     ?RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIBitmapResource@@PEBVCShape@@_NH@Z @ 0x1800727D4 (-RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIBitmapResourc.c)
 *     ?AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@@Z @ 0x18008B5B0 (-AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAtt.c)
 *     ?PushCpuClipToScope@CScopedClipStack@@QEAAJPEBVCShape@@0PEBVCMILMatrix@@W4D2D1_ANTIALIAS_MODE@@_NPEAVCCpuClipAntialiasSink@@PEA_N@Z @ 0x1800A6FE0 (-PushCpuClipToScope@CScopedClipStack@@QEAAJPEBVCShape@@0PEBVCMILMatrix@@W4D2D1_ANTIALIAS_MODE@@_.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@VSharedData@CPolygonShape@@@WRL@Microsoft@@IEBAXXZ @ 0x18004DEFC (-InternalAddRef@-$ComPtr@VSharedData@CPolygonShape@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?ContainsOnlyPolygons@CRoundedRectangleShape@@UEBA_NXZ @ 0x18004DF50 (-ContainsOnlyPolygons@CRoundedRectangleShape@@UEBA_NXZ.c)
 *     ?D2DCombineModeFromMilCombineMode@@YA?AW4D2D1_COMBINE_MODE@@W4Enum@MilCombineMode@@@Z @ 0x18004DFC0 (-D2DCombineModeFromMilCombineMode@@YA-AW4D2D1_COMBINE_MODE@@W4Enum@MilCombineMode@@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18006BC80 (--2@YAPEAX_K@Z.c)
 *     ?Alloc@?$CThreadLocalObjectCache@VCRectanglesShape@@V1@@@SAPEAX_K@Z @ 0x1800A3230 (-Alloc@-$CThreadLocalObjectCache@VCRectanglesShape@@V1@@@SAPEAX_K@Z.c)
 *     ?GetD2DGeometry@CRoundedRectangleShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z @ 0x1800A45E0 (-GetD2DGeometry@CRoundedRectangleShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z.c)
 *     ??1CRectanglesShape@@UEAA@XZ @ 0x1800AABD0 (--1CRectanglesShape@@UEAA@XZ.c)
 *     MIDL_user_allocate @ 0x1800B12F0 (MIDL_user_allocate.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetD2DGeometry@CPolygonShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z @ 0x1801775C0 (-GetD2DGeometry@CPolygonShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z.c)
 *     ?GetD2DGeometry@CRectanglesShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z @ 0x1801E3C90 (-GetD2DGeometry@CRectanglesShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z.c)
 *     ??0CComplexShape@@QEAA@PEAUID2D1Geometry@@@Z @ 0x1801E7FAC (--0CComplexShape@@QEAA@PEAUID2D1Geometry@@@Z.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CShape::D2DCombine(
        CRectanglesShape *a1,
        __int64 a2,
        CRoundedRectangleShape *a3,
        _DWORD *a4,
        int a5,
        CComplexShape **a6)
{
  int (*v9)(CRectanglesShape *__hidden, const struct CMILMatrix *, struct ID2D1Geometry **); // rax
  int D2DGeometry; // eax
  unsigned int v11; // ebx
  int (*v12)(CRectanglesShape *__hidden, const struct CMILMatrix *, struct ID2D1Geometry **); // rax
  int v13; // eax
  __int64 v14; // rdx
  __int128 *v15; // rcx
  int v16; // eax
  int v17; // eax
  char (__fastcall *v18)(CRoundedRectangleShape *); // rax
  char v19; // al
  char (__fastcall *v20)(CRoundedRectangleShape *); // rax
  char v21; // al
  HANDLE ProcessHeap; // rax
  CEffectCompilationTask **v23; // rax
  CEffectCompilationTask **v24; // rsi
  struct ID2D1Geometry *v25; // r14
  CEffectCompilationTask *v26; // rax
  CEffectCompilationTask *v27; // rdi
  unsigned int v29; // xmm1_4
  int v30; // xmm0_4
  int v31; // xmm1_4
  CComplexShape *v32; // rax
  CComplexShape *v33; // rax
  CComplexShape *v34; // rax
  unsigned int v35; // [rsp+20h] [rbp-E0h]
  struct ID2D1Geometry *v36; // [rsp+50h] [rbp-B0h] BYREF
  struct ID2D1Geometry *v37; // [rsp+58h] [rbp-A8h] BYREF
  struct ID2D1Geometry *v38; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v39; // [rsp+68h] [rbp-98h] BYREF
  int v40; // [rsp+78h] [rbp-88h]
  int v41; // [rsp+7Ch] [rbp-84h]
  _QWORD v42[5]; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v43[16]; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v44; // [rsp+B8h] [rbp-48h] BYREF
  _QWORD v45[5]; // [rsp+C0h] [rbp-40h] BYREF
  _BYTE v46[16]; // [rsp+E8h] [rbp-18h] BYREF
  __int64 v47; // [rsp+F8h] [rbp-8h] BYREF

  v45[2] = v46;
  v45[1] = 0LL;
  v47 = 0LL;
  v45[0] = &CRectanglesShape::`vftable';
  v45[3] = v46;
  v42[0] = &CRectanglesShape::`vftable';
  v45[4] = &v47;
  v42[1] = 0LL;
  v42[2] = v43;
  v44 = 0LL;
  v42[3] = v43;
  v42[4] = &v44;
  v37 = 0LL;
  v36 = 0LL;
  v38 = 0LL;
  if ( a1 )
  {
    v9 = *(int (**)(CRectanglesShape *__hidden, const struct CMILMatrix *, struct ID2D1Geometry **))(*(_QWORD *)a1 + 24LL);
    if ( v9 == CRectanglesShape::GetD2DGeometry )
    {
      D2DGeometry = CRectanglesShape::GetD2DGeometry(a1, 0LL, &v37);
    }
    else if ( v9 == CPolygonShape::GetD2DGeometry )
    {
      D2DGeometry = CPolygonShape::GetD2DGeometry(a1, 0LL, &v37);
    }
    else
    {
      D2DGeometry = ((__int64 (__fastcall *)(CRectanglesShape *, _QWORD, struct ID2D1Geometry **))v9)(a1, 0LL, &v37);
    }
    v11 = D2DGeometry;
    if ( D2DGeometry < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, D2DGeometry, 0x20Cu, 0LL);
      goto LABEL_28;
    }
  }
  else
  {
    v17 = CRectanglesShape::GetD2DGeometry((CRectanglesShape *)v45, 0LL, &v37);
    v11 = v17;
    if ( v17 < 0 )
    {
      v35 = 528;
LABEL_44:
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v17, v35, 0LL);
      goto LABEL_28;
    }
  }
  if ( a3 )
  {
    v12 = *(int (**)(CRectanglesShape *__hidden, const struct CMILMatrix *, struct ID2D1Geometry **))(*(_QWORD *)a3 + 24LL);
    if ( (char *)v12 == (char *)CRoundedRectangleShape::GetD2DGeometry )
    {
      v13 = CRoundedRectangleShape::GetD2DGeometry(a3, 0LL, &v36);
    }
    else if ( v12 == CRectanglesShape::GetD2DGeometry )
    {
      v13 = CRectanglesShape::GetD2DGeometry(a3, 0LL, &v36);
    }
    else if ( v12 == CPolygonShape::GetD2DGeometry )
    {
      v13 = CPolygonShape::GetD2DGeometry(a3, 0LL, &v36);
    }
    else
    {
      v13 = ((__int64 (__fastcall *)(CRoundedRectangleShape *, _QWORD, struct ID2D1Geometry **))v12)(a3, 0LL, &v36);
    }
    v11 = v13;
    if ( v13 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v13, 0x215u, 0LL);
      goto LABEL_28;
    }
  }
  else
  {
    v17 = CRectanglesShape::GetD2DGeometry((CRectanglesShape *)v42, 0LL, &v36);
    v11 = v17;
    if ( v17 < 0 )
    {
      v35 = 537;
      goto LABEL_44;
    }
  }
  v14 = (unsigned int)D2DCombineModeFromMilCombineMode(a5);
  if ( a4 )
  {
    v15 = &v39;
    v29 = a4[1];
    LODWORD(v39) = *a4;
    *(_QWORD *)((char *)&v39 + 4) = __PAIR64__(a4[4], v29);
    v30 = a4[12];
    HIDWORD(v39) = a4[5];
    v31 = a4[13];
    v40 = v30;
    v41 = v31;
  }
  else
  {
    v15 = 0LL;
  }
  v16 = (*(__int64 (__fastcall **)(__int64, __int64, struct ID2D1Geometry *, _QWORD, struct ID2D1Geometry *, __int128 *, _DWORD, struct ID2D1Geometry **))(*(_QWORD *)qword_180406B08 + 32LL))(
          qword_180406B08,
          v14,
          v37,
          0LL,
          v36,
          v15,
          LODWORD(FLOAT_0_25),
          &v38);
  v11 = v16;
  if ( v16 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v16, 0x221u, 0LL);
    goto LABEL_28;
  }
  v39 = 0LL;
  v17 = (*(__int64 (__fastcall **)(struct ID2D1Geometry *, _QWORD, __int128 *))(*(_QWORD *)v38 + 32LL))(v38, 0LL, &v39);
  v11 = v17;
  if ( v17 < 0 )
  {
    v35 = 549;
    goto LABEL_44;
  }
  if ( *((float *)&v39 + 2) <= *(float *)&v39 || *((float *)&v39 + 3) <= *((float *)&v39 + 1) )
  {
    v32 = (CComplexShape *)CThreadLocalObjectCache<CRectanglesShape,CRectanglesShape>::Alloc();
    if ( v32 )
    {
      *((_QWORD *)v32 + 1) = 0LL;
      *(_QWORD *)v32 = &CRectanglesShape::`vftable';
      *((_QWORD *)v32 + 2) = (char *)v32 + 40;
      *((_QWORD *)v32 + 3) = (char *)v32 + 40;
      *((_QWORD *)v32 + 4) = (char *)v32 + 56;
      *((_QWORD *)v32 + 7) = 0LL;
      *a6 = v32;
    }
    else
    {
      v11 = -2147024882;
      *a6 = 0LL;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x22Au, 0LL);
    }
  }
  else
  {
    v18 = *(char (__fastcall **)(CRoundedRectangleShape *))(*(_QWORD *)a1 + 56LL);
    if ( v18 == CRoundedRectangleShape::ContainsOnlyPolygons )
      v19 = CRoundedRectangleShape::ContainsOnlyPolygons(a1);
    else
      v19 = v18(a1);
    if ( v19
      && ((v20 = *(char (__fastcall **)(CRoundedRectangleShape *))(*(_QWORD *)a3 + 56LL),
           v20 != CRoundedRectangleShape::ContainsOnlyPolygons)
        ? (v21 = v20(a3))
        : (v21 = CRoundedRectangleShape::ContainsOnlyPolygons(a3)),
          v21 && (!a5 || a5 == 1)) )
    {
      ProcessHeap = GetProcessHeap();
      v23 = (CEffectCompilationTask **)HeapAlloc(ProcessHeap, 0, 0x18uLL);
      v24 = v23;
      if ( v23 )
      {
        v25 = v38;
        v23[1] = 0LL;
        *v23 = (CEffectCompilationTask *)&CPolygonShape::`vftable';
        v26 = (CEffectCompilationTask *)operator new(0x30uLL);
        v27 = v26;
        if ( v26 )
        {
          *((_DWORD *)v26 + 2) = 0;
          *(_QWORD *)v26 = &CPolygonShape::SharedData::`vftable';
          *((_QWORD *)v26 + 2) = v25;
          if ( v25 )
            (*(void (__fastcall **)(struct ID2D1Geometry *))(*(_QWORD *)v25 + 8LL))(v25);
          *((_QWORD *)v27 + 3) = 0LL;
          *((_QWORD *)v27 + 4) = 0LL;
          *((_QWORD *)v27 + 5) = 0LL;
        }
        else
        {
          v27 = 0LL;
        }
        v24[2] = v27;
        Microsoft::WRL::ComPtr<CPolygonShape::SharedData>::InternalAddRef(v24 + 2);
        *a6 = (CComplexShape *)v24;
      }
      else
      {
        v11 = -2147024882;
        *a6 = 0LL;
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x235u, 0LL);
      }
    }
    else
    {
      v33 = (CComplexShape *)MIDL_user_allocate(0x18uLL);
      if ( v33 )
      {
        v34 = CComplexShape::CComplexShape(v33, v38);
        *a6 = v34;
        if ( v34 )
          goto LABEL_28;
      }
      else
      {
        *a6 = 0LL;
      }
      v11 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x23Au, 0LL);
    }
  }
LABEL_28:
  if ( v38 )
    (*(void (__fastcall **)(struct ID2D1Geometry *))(*(_QWORD *)v38 + 16LL))(v38);
  if ( v37 )
    (*(void (__fastcall **)(struct ID2D1Geometry *))(*(_QWORD *)v37 + 16LL))(v37);
  if ( v36 )
    (*(void (__fastcall **)(struct ID2D1Geometry *))(*(_QWORD *)v36 + 16LL))(v36);
  CRectanglesShape::~CRectanglesShape((CRectanglesShape *)v42);
  CRectanglesShape::~CRectanglesShape((CRectanglesShape *)v45);
  return v11;
}
