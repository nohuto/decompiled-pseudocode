/*
 * XREFs of ?D2DCombine@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x180146340
 * Callers:
 *     ?GetSpriteClipShape@CWindowNode@@AEBAJPEAVCShapePtr@@@Z @ 0x1800165D0 (-GetSpriteClipShape@CWindowNode@@AEBAJPEAVCShapePtr@@@Z.c)
 *     ?GetContentBounds@CWindowNode@@UEAAJPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180016810 (-GetContentBounds@CWindowNode@@UEAAJPEAV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE.c)
 *     ?PushCpuClipToScope@CScopedClipStack@@QEAAJPEBVCShape@@0PEBVCMILMatrix@@W4D2D1_ANTIALIAS_MODE@@_NPEAVCCpuClipAntialiasSink@@PEA_N@Z @ 0x180075170 (-PushCpuClipToScope@CScopedClipStack@@QEAAJPEBVCShape@@0PEBVCMILMatrix@@W4D2D1_ANTIALIAS_MODE@@_.c)
 *     ?AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@@Z @ 0x1800C7090 (-AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAtt.c)
 *     ?Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x1800CB180 (-Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     ?ComputeLayout@CSurfaceBrush@@QEBAJAEBUD2D_SIZE_F@@PEAULayoutData@CContent@@PEAPEAVCShape@@@Z @ 0x180141330 (-ComputeLayout@CSurfaceBrush@@QEBAJAEBUD2D_SIZE_F@@PEAULayoutData@CContent@@PEAPEAVCShape@@@Z.c)
 *     ?ComputeBrushClamp@CBrushDrawListGenerator@@CAJV?$span@PEBVCDrawListBrush@@$0?0@gsl@@KAEBVMatrix3x3@@PEAPEAVCShape@@@Z @ 0x180143A90 (-ComputeBrushClamp@CBrushDrawListGenerator@@CAJV-$span@PEBVCDrawListBrush@@$0-0@gsl@@KAEBVMatrix.c)
 * Callees:
 *     MIDL_user_allocate @ 0x18001C2F0 (MIDL_user_allocate.c)
 *     ??2@YAPEAX_K@Z @ 0x180041E40 (--2@YAPEAX_K@Z.c)
 *     ?GetD2DGeometry@CRoundedRectangleShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z @ 0x180072D70 (-GetD2DGeometry@CRoundedRectangleShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z.c)
 *     ??1CRectanglesShape@@UEAA@XZ @ 0x180078DB0 (--1CRectanglesShape@@UEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetD2DGeometry@CPolygonShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z @ 0x180123CE0 (-GetD2DGeometry@CPolygonShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z.c)
 *     ?D2DCombineModeFromMilCombineMode@@YA?AW4D2D1_COMBINE_MODE@@W4Enum@MilCombineMode@@@Z @ 0x180146908 (-D2DCombineModeFromMilCombineMode@@YA-AW4D2D1_COMBINE_MODE@@W4Enum@MilCombineMode@@@Z.c)
 *     ?ContainsOnlyPolygons@CRoundedRectangleShape@@UEBA_NXZ @ 0x180146930 (-ContainsOnlyPolygons@CRoundedRectangleShape@@UEBA_NXZ.c)
 *     ?InternalAddRef@?$ComPtr@VSharedData@CPolygonShape@@@WRL@Microsoft@@IEBAXXZ @ 0x180146A68 (-InternalAddRef@-$ComPtr@VSharedData@CPolygonShape@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Alloc@?$CThreadLocalObjectCache@VCRectanglesShape@@V1@@@SAPEAX_K@Z @ 0x180175100 (-Alloc@-$CThreadLocalObjectCache@VCRectanglesShape@@V1@@@SAPEAX_K@Z.c)
 *     ?GetD2DGeometry@CRectanglesShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z @ 0x1801D7CD0 (-GetD2DGeometry@CRectanglesShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z.c)
 *     ??0CComplexShape@@QEAA@PEAUID2D1Geometry@@@Z @ 0x1801DE5AC (--0CComplexShape@@QEAA@PEAUID2D1Geometry@@@Z.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CShape::D2DCombine(
        CRectanglesShape *a1,
        __int64 a2,
        CRoundedRectangleShape *a3,
        _DWORD *a4,
        unsigned int a5,
        CComplexShape **a6)
{
  __int64 (__fastcall *v9)(CPolygonShape *, const struct CMILMatrix *, struct ID2D1Geometry **); // rax
  int D2DGeometry; // eax
  unsigned int v11; // ebx
  __int64 (__fastcall *v12)(CPolygonShape *, const struct CMILMatrix *, struct ID2D1Geometry **); // rax
  int v13; // eax
  __int64 v14; // rdx
  __int128 *v15; // rcx
  int v16; // eax
  int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // rcx
  bool (__fastcall *v20)(CRoundedRectangleShape *__hidden); // rax
  bool v21; // al
  bool (__fastcall *v22)(CRoundedRectangleShape *__hidden); // rax
  bool v23; // al
  HANDLE ProcessHeap; // rax
  CComplexShape *v25; // rax
  CComplexShape *v26; // rsi
  struct ID2D1Geometry *v27; // r14
  _QWORD *v28; // rax
  _QWORD *v29; // rdi
  unsigned int v31; // xmm1_4
  int v32; // xmm0_4
  int v33; // xmm1_4
  CComplexShape *v34; // rax
  CComplexShape *v35; // rax
  CComplexShape *v36; // rax
  unsigned int v37; // [rsp+20h] [rbp-E0h]
  struct ID2D1Geometry *v38; // [rsp+50h] [rbp-B0h] BYREF
  struct ID2D1Geometry *v39; // [rsp+58h] [rbp-A8h] BYREF
  struct ID2D1Geometry *v40; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v41; // [rsp+68h] [rbp-98h] BYREF
  int v42; // [rsp+78h] [rbp-88h]
  int v43; // [rsp+7Ch] [rbp-84h]
  _QWORD v44[5]; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v45[16]; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v46; // [rsp+B8h] [rbp-48h] BYREF
  _QWORD v47[5]; // [rsp+C0h] [rbp-40h] BYREF
  _BYTE v48[16]; // [rsp+E8h] [rbp-18h] BYREF
  __int64 v49; // [rsp+F8h] [rbp-8h] BYREF

  v47[2] = v48;
  v47[1] = 0LL;
  v49 = 0LL;
  v47[0] = &CRectanglesShape::`vftable';
  v47[3] = v48;
  v44[0] = &CRectanglesShape::`vftable';
  v47[4] = &v49;
  v44[1] = 0LL;
  v44[2] = v45;
  v46 = 0LL;
  v44[3] = v45;
  v44[4] = &v46;
  v39 = 0LL;
  v38 = 0LL;
  v40 = 0LL;
  if ( a1 )
  {
    v9 = *(__int64 (__fastcall **)(CPolygonShape *, const struct CMILMatrix *, struct ID2D1Geometry **))(*(_QWORD *)a1 + 24LL);
    if ( (char *)v9 == (char *)CRectanglesShape::GetD2DGeometry )
    {
      D2DGeometry = CRectanglesShape::GetD2DGeometry(a1, 0LL, &v39);
    }
    else if ( v9 == CPolygonShape::GetD2DGeometry )
    {
      D2DGeometry = CPolygonShape::GetD2DGeometry(a1, 0LL, &v39);
    }
    else
    {
      D2DGeometry = v9(a1, 0LL, &v39);
    }
    v11 = D2DGeometry;
    if ( D2DGeometry < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, D2DGeometry, 0x20Cu, 0LL);
      goto LABEL_28;
    }
  }
  else
  {
    v17 = CRectanglesShape::GetD2DGeometry((CRectanglesShape *)v47, 0LL, &v39);
    v11 = v17;
    if ( v17 < 0 )
    {
      v37 = 528;
LABEL_44:
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v17, v37, 0LL);
      goto LABEL_28;
    }
  }
  if ( a3 )
  {
    v12 = *(__int64 (__fastcall **)(CPolygonShape *, const struct CMILMatrix *, struct ID2D1Geometry **))(*(_QWORD *)a3 + 24LL);
    if ( v12 == CRoundedRectangleShape::GetD2DGeometry )
    {
      v13 = CRoundedRectangleShape::GetD2DGeometry(a3, 0LL, &v38);
    }
    else if ( (char *)v12 == (char *)CRectanglesShape::GetD2DGeometry )
    {
      v13 = CRectanglesShape::GetD2DGeometry(a3, 0LL, &v38);
    }
    else if ( v12 == CPolygonShape::GetD2DGeometry )
    {
      v13 = CPolygonShape::GetD2DGeometry(a3, 0LL, &v38);
    }
    else
    {
      v13 = v12(a3, 0LL, &v38);
    }
    v11 = v13;
    if ( v13 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v13, 0x215u, 0LL);
      goto LABEL_28;
    }
  }
  else
  {
    v17 = CRectanglesShape::GetD2DGeometry((CRectanglesShape *)v44, 0LL, &v38);
    v11 = v17;
    if ( v17 < 0 )
    {
      v37 = 537;
      goto LABEL_44;
    }
  }
  v14 = (unsigned int)D2DCombineModeFromMilCombineMode(a5);
  if ( a4 )
  {
    v15 = &v41;
    v31 = a4[1];
    LODWORD(v41) = *a4;
    *(_QWORD *)((char *)&v41 + 4) = __PAIR64__(a4[4], v31);
    v32 = a4[12];
    HIDWORD(v41) = a4[5];
    v33 = a4[13];
    v42 = v32;
    v43 = v33;
  }
  else
  {
    v15 = 0LL;
  }
  v16 = (*(__int64 (__fastcall **)(__int64, __int64, struct ID2D1Geometry *, _QWORD, struct ID2D1Geometry *, __int128 *, _DWORD, struct ID2D1Geometry **))(*(_QWORD *)qword_1803FAAB8 + 32LL))(
          qword_1803FAAB8,
          v14,
          v39,
          0LL,
          v38,
          v15,
          LODWORD(FLOAT_0_25),
          &v40);
  v11 = v16;
  if ( v16 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v16, 0x221u, 0LL);
    goto LABEL_28;
  }
  v41 = 0LL;
  v17 = (*(__int64 (__fastcall **)(struct ID2D1Geometry *, _QWORD, __int128 *))(*(_QWORD *)v40 + 32LL))(v40, 0LL, &v41);
  v11 = v17;
  if ( v17 < 0 )
  {
    v37 = 549;
    goto LABEL_44;
  }
  if ( *((float *)&v41 + 2) <= *(float *)&v41 || *((float *)&v41 + 3) <= *((float *)&v41 + 1) )
  {
    v34 = (CComplexShape *)CThreadLocalObjectCache<CRectanglesShape,CRectanglesShape>::Alloc(v19, v18);
    if ( v34 )
    {
      *((_QWORD *)v34 + 1) = 0LL;
      *(_QWORD *)v34 = &CRectanglesShape::`vftable';
      *((_QWORD *)v34 + 2) = (char *)v34 + 40;
      *((_QWORD *)v34 + 3) = (char *)v34 + 40;
      *((_QWORD *)v34 + 4) = (char *)v34 + 56;
      *((_QWORD *)v34 + 7) = 0LL;
      *a6 = v34;
    }
    else
    {
      v11 = -2147024882;
      *a6 = 0LL;
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x22Au, 0LL);
    }
  }
  else
  {
    v20 = *(bool (__fastcall **)(CRoundedRectangleShape *__hidden))(*(_QWORD *)a1 + 56LL);
    if ( v20 == CRoundedRectangleShape::ContainsOnlyPolygons )
      v21 = CRoundedRectangleShape::ContainsOnlyPolygons(a1);
    else
      v21 = v20(a1);
    if ( v21
      && ((v22 = *(bool (__fastcall **)(CRoundedRectangleShape *__hidden))(*(_QWORD *)a3 + 56LL),
           v22 != CRoundedRectangleShape::ContainsOnlyPolygons)
        ? (v23 = v22(a3))
        : (v23 = CRoundedRectangleShape::ContainsOnlyPolygons(a3)),
          v23 && (!a5 || a5 == 1)) )
    {
      ProcessHeap = GetProcessHeap();
      v25 = (CComplexShape *)HeapAlloc(ProcessHeap, 0, 0x18uLL);
      v26 = v25;
      if ( v25 )
      {
        v27 = v40;
        *((_QWORD *)v25 + 1) = 0LL;
        *(_QWORD *)v25 = &CPolygonShape::`vftable';
        v28 = operator new(0x30uLL);
        v29 = v28;
        if ( v28 )
        {
          *((_DWORD *)v28 + 2) = 0;
          *v28 = &CPolygonShape::SharedData::`vftable';
          v28[2] = v27;
          if ( v27 )
            (*(void (__fastcall **)(struct ID2D1Geometry *))(*(_QWORD *)v27 + 8LL))(v27);
          v29[3] = 0LL;
          v29[4] = 0LL;
          v29[5] = 0LL;
        }
        else
        {
          v29 = 0LL;
        }
        *((_QWORD *)v26 + 2) = v29;
        Microsoft::WRL::ComPtr<CPolygonShape::SharedData>::InternalAddRef((char *)v26 + 16);
        *a6 = v26;
      }
      else
      {
        v11 = -2147024882;
        *a6 = 0LL;
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x235u, 0LL);
      }
    }
    else
    {
      v35 = (CComplexShape *)MIDL_user_allocate(0x18uLL);
      if ( v35 )
      {
        v36 = CComplexShape::CComplexShape(v35, v40);
        *a6 = v36;
        if ( v36 )
          goto LABEL_28;
      }
      else
      {
        *a6 = 0LL;
      }
      v11 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x23Au, 0LL);
    }
  }
LABEL_28:
  if ( v40 )
    (*(void (__fastcall **)(struct ID2D1Geometry *))(*(_QWORD *)v40 + 16LL))(v40);
  if ( v39 )
    (*(void (__fastcall **)(struct ID2D1Geometry *))(*(_QWORD *)v39 + 16LL))(v39);
  if ( v38 )
    (*(void (__fastcall **)(struct ID2D1Geometry *))(*(_QWORD *)v38 + 16LL))(v38);
  CRectanglesShape::~CRectanglesShape((CRectanglesShape *)v44);
  CRectanglesShape::~CRectanglesShape((CRectanglesShape *)v47);
  return v11;
}
