/*
 * XREFs of ?CreateRenderTasks@CSpriteVectorShape@@QEAAJPEAVCShapeDrawingContext@@@Z @ 0x18005A960
 * Callers:
 *     ??$Walk@VCShapeDrawingContext@@@CShapeTreeIterator@@QEAAJPEAVCVectorShape@@PEAVCShapeDrawingContext@@@Z @ 0x180015B90 (--$Walk@VCShapeDrawingContext@@@CShapeTreeIterator@@QEAAJPEAVCVectorShape@@PEAVCShapeDrawingCont.c)
 * Callees:
 *     ?IsRectEmptyOrInvalid@@YA_NPEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180057A20 (-IsRectEmptyOrInvalid@@YA_NPEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotN.c)
 *     ?GetBoundingRect@CRegion@FastRegion@@QEBA_NAEAUtagRECT@@@Z @ 0x180058110 (-GetBoundingRect@CRegion@FastRegion@@QEBA_NAEAUtagRECT@@@Z.c)
 *     ?GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x180058F30 (-GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 *     ?EnsureStrokeStyleForRender@CSpriteVectorShape@@AEAAJXZ @ 0x18005AFDC (-EnsureStrokeStyleForRender@CSpriteVectorShape@@AEAAJXZ.c)
 *     ?IsOfType@CGradientBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18005B270 (-IsOfType@CGradientBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsReadyToDraw@CColorBrush@@UEBA_NPEAVCDrawingContext@@PEA_N@Z @ 0x18005B2A0 (-IsReadyToDraw@CColorBrush@@UEBA_NPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?IsEmpty@CRoundedRectangleShape@@UEBA_NXZ @ 0x18005B2E0 (-IsEmpty@CRoundedRectangleShape@@UEBA_NXZ.c)
 *     ??$_Emplace_one_at_back@$$V@?$vector@VCShapeRenderTask@@V?$allocator@VCShapeRenderTask@@@std@@@std@@AEAAAEAVCShapeRenderTask@@XZ @ 0x18006C798 (--$_Emplace_one_at_back@$$V@-$vector@VCShapeRenderTask@@V-$allocator@VCShapeRenderTask@@@std@@@s.c)
 *     ?HasAnyRoundedCorners@CRoundedRectangleGeometryData@@QEBA_NXZ @ 0x18008B530 (-HasAnyRoundedCorners@CRoundedRectangleGeometryData@@QEBA_NXZ.c)
 *     ??1CRectanglesShape@@UEAA@XZ @ 0x1800AABD0 (--1CRectanglesShape@@UEAA@XZ.c)
 *     ?Free@?$CThreadLocalObjectCache@VCRectanglesShape@@V1@@@SAXPEAX@Z @ 0x1800AACE0 (-Free@-$CThreadLocalObjectCache@VCRectanglesShape@@V1@@@SAXPEAX@Z.c)
 *     ?Free@?$CThreadLocalObjectCache@VCRoundedRectangleShape@@V1@@@SAXPEAX@Z @ 0x1800AADF0 (-Free@-$CThreadLocalObjectCache@VCRoundedRectangleShape@@V1@@@SAXPEAX@Z.c)
 *     ??1CRoundedRectangleShape@@UEAA@XZ @ 0x1800AAEE0 (--1CRoundedRectangleShape@@UEAA@XZ.c)
 *     ??_GCPolygonShape@@UEAAPEAXI@Z @ 0x1800AB080 (--_GCPolygonShape@@UEAAPEAXI@Z.c)
 *     ?IsCloseRealZero@@YA_NMM@Z @ 0x1800D23E0 (-IsCloseRealZero@@YA_NMM@Z.c)
 *     ?empty@?$vector@PEAVCColorGradientStop@@V?$allocator@PEAVCColorGradientStop@@@std@@@std@@QEBA_NXZ @ 0x1800D2520 (-empty@-$vector@PEAVCColorGradientStop@@V-$allocator@PEAVCColorGradientStop@@@std@@@std@@QEBA_NX.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?IsOfType@CColorBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18012D970 (-IsOfType@CColorBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsEmpty@CRectanglesShape@@UEBA_NXZ @ 0x1801C22A0 (-IsEmpty@CRectanglesShape@@UEBA_NXZ.c)
 *     ?IsRectangles@CRegionShape@@UEBA_NPEAI@Z @ 0x1801C33B0 (-IsRectangles@CRegionShape@@UEBA_NPEAI@Z.c)
 *     ?IsRectangles@CRectanglesShape@@UEBA_NPEAI@Z @ 0x1801C5250 (-IsRectangles@CRectanglesShape@@UEBA_NPEAI@Z.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CSpriteVectorShape::CreateRenderTasks(CSpriteVectorShape *this, struct CShapeDrawingContext *a2)
{
  CGeometry *v3; // rcx
  int ShapeData; // eax
  unsigned int v6; // esi
  CRoundedRectangleShape *v7; // rbx
  bool (__fastcall *v8)(CRoundedRectangleShape *__hidden); // rax
  void (__fastcall *v9)(CRoundedRectangleShape *, __int128 *, _QWORD); // rax
  bool IsEmpty; // al
  CColorBrush *v11; // rcx
  bool (__fastcall *v12)(CColorBrush *__hidden, struct CDrawingContext *, bool *); // rax
  char *v13; // rbx
  char v14; // al
  __int64 v15; // rax
  bool (__fastcall *v16)(CRoundedRectangleShape *__hidden, unsigned int *); // rax
  __int64 v17; // rcx
  __int64 (__fastcall *v18)(__int64, __int64); // rax
  __int64 v19; // rcx
  unsigned __int8 (__fastcall *v20)(__int64, __int64); // rax
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rdx
  __int128 v24; // xmm0
  float *v25; // rbx
  bool (__fastcall *v26)(CColorBrush *__hidden, struct CDrawingContext *, bool *); // rax
  bool v27; // al
  float v28; // xmm6_4
  int v29; // eax
  void *(__fastcall *v30)(CRoundedRectangleShape *__hidden, unsigned int); // rax
  char v32; // al
  __int64 v33; // rdx
  __int64 v34; // rax
  __int64 v35; // rcx
  __int64 (__fastcall *v36)(__int64, __int64); // rax
  char v37; // al
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // rax
  __int64 v41; // r8
  __int128 v42; // xmm0
  bool IsRectangles; // al
  __int64 v44; // rax
  __int64 v45; // rcx
  __int128 v46; // xmm0
  __int64 v47; // rcx
  __int64 v48; // rax
  __int64 v49; // rdx
  __int64 v50; // r8
  __int128 v51; // xmm0
  bool v52[4]; // [rsp+38h] [rbp-29h] BYREF
  unsigned int v53; // [rsp+3Ch] [rbp-25h] BYREF
  CRoundedRectangleShape *v54; // [rsp+40h] [rbp-21h] BYREF
  char v55; // [rsp+48h] [rbp-19h]
  __int128 v56; // [rsp+50h] [rbp-11h] BYREF
  struct tagRECT v57; // [rsp+60h] [rbp-1h] BYREF

  v3 = (CGeometry *)*((_QWORD *)this + 15);
  v54 = 0LL;
  v55 = 0;
  ShapeData = CGeometry::GetShapeData(v3, 0LL, (struct CShapePtr *)&v54);
  v6 = ShapeData;
  if ( ShapeData < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, ShapeData, 0x14Fu, 0LL);
    goto LABEL_33;
  }
  v7 = v54;
  if ( v54 )
  {
    v8 = *(bool (__fastcall **)(CRoundedRectangleShape *__hidden))(*(_QWORD *)v54 + 16LL);
    if ( v8 == CShape::IsEmpty )
    {
      v9 = *(void (__fastcall **)(CRoundedRectangleShape *, __int128 *, _QWORD))(*(_QWORD *)v54 + 48LL);
      v56 = 0LL;
      if ( (char *)v9 == (char *)CRegionShape::GetTightBounds )
      {
        v57 = 0LL;
        if ( FastRegion::CRegion::GetBoundingRect((LONG **)v54 + 2, &v57) )
        {
          *(float *)&v56 = (float)v57.left;
          *((float *)&v56 + 1) = (float)v57.top;
          *((float *)&v56 + 2) = (float)v57.right;
          *((float *)&v56 + 3) = (float)v57.bottom;
        }
      }
      else
      {
        v9(v54, &v56, 0LL);
      }
      IsEmpty = IsRectEmptyOrInvalid((float *)&v56);
    }
    else if ( v8 == CRoundedRectangleShape::IsEmpty )
    {
      IsEmpty = CRoundedRectangleShape::IsEmpty(v54);
    }
    else if ( v8 == CRectanglesShape::IsEmpty )
    {
      IsEmpty = CRectanglesShape::IsEmpty(v54);
    }
    else
    {
      IsEmpty = v8(v54);
    }
    if ( IsEmpty )
      goto LABEL_33;
    v11 = (CColorBrush *)*((_QWORD *)this + 13);
    v52[0] = 0;
    if ( !v11 )
      goto LABEL_24;
    v12 = *(bool (__fastcall **)(CColorBrush *__hidden, struct CDrawingContext *, bool *))(*(_QWORD *)v11 + 312LL);
    if ( v12 == CGradientBrush::IsReadyToDraw )
    {
      v13 = (char *)v11 + 168;
      v52[0] = std::vector<CColorGradientStop *>::empty((char *)v11 + 168);
      v14 = std::vector<CColorGradientStop *>::empty(v13) ^ 1;
    }
    else
    {
      v14 = v12 == CColorBrush::IsReadyToDraw ? CColorBrush::IsReadyToDraw(v11, 0LL, v52) : v12(v11, 0LL, v52);
    }
    if ( !v14 || v52[0] )
      goto LABEL_24;
    if ( v54 )
    {
      v15 = *(_QWORD *)v54;
      v53 = 0;
      v16 = *(bool (__fastcall **)(CRoundedRectangleShape *__hidden, unsigned int *))(v15 + 64);
      if ( v16 == CRoundedRectangleShape::IsRectangles )
      {
        if ( CRoundedRectangleGeometryData::HasAnyRoundedCorners((CRoundedRectangleGeometryData *)(*((_QWORD *)v54 + 2)
                                                                                                 + 16LL)) )
          goto LABEL_17;
      }
      else
      {
        if ( v16 == CRectanglesShape::IsRectangles )
        {
          IsRectangles = CRectanglesShape::IsRectangles(v54, &v53);
        }
        else if ( v16 == CRegionShape::IsRectangles )
        {
          IsRectangles = CRegionShape::IsRectangles(v54, &v53);
        }
        else
        {
          IsRectangles = v16(v54, &v53);
        }
        if ( !IsRectangles || v53 != 1 )
          goto LABEL_17;
      }
      if ( !(*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 13) + 64LL))(
              *((_QWORD *)this + 13),
              125LL) )
      {
        std::vector<CShapeRenderTask>::_Emplace_one_at_back<>((char *)a2 + 496);
        v44 = *((_QWORD *)a2 + 63);
        v45 = *((_QWORD *)this + 13);
        *(_DWORD *)(v44 - 56) = 4;
        v46 = *((_OWORD *)this + 9);
        *(_QWORD *)(v44 - 32) = v45;
        *(_OWORD *)(v44 - 48) = v46;
        goto LABEL_23;
      }
    }
LABEL_17:
    v17 = *((_QWORD *)this + 13);
    v18 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v17 + 64LL);
    if ( (char *)v18 == (char *)&CLinearGradientBrush::IsOfType )
    {
      if ( !(unsigned __int8)CGradientBrush::IsOfType(v17, 22LL) )
      {
LABEL_19:
        v19 = *((_QWORD *)this + 13);
        v20 = *(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v19 + 64LL);
        if ( (char *)v20 == (char *)&CLinearGradientBrush::IsOfType )
        {
          if ( !(unsigned __int8)CGradientBrush::IsOfType(v19, 72LL) )
            goto LABEL_24;
          goto LABEL_21;
        }
        if ( v20(v19, 72LL) )
        {
LABEL_21:
          std::vector<CShapeRenderTask>::_Emplace_one_at_back<>((char *)a2 + 496);
          v21 = *((_QWORD *)a2 + 63);
          v22 = *((_QWORD *)this + 15);
          v23 = *((_QWORD *)this + 13);
          *(_DWORD *)(v21 - 56) = 3;
          *(_QWORD *)(v21 - 48) = v22;
          v24 = *((_OWORD *)this + 9);
          *(_QWORD *)(v21 - 24) = v23;
LABEL_22:
          *(_OWORD *)(v21 - 40) = v24;
LABEL_23:
          v6 = 0;
        }
LABEL_24:
        v25 = (float *)*((_QWORD *)this + 14);
        if ( v25 )
        {
          v26 = *(bool (__fastcall **)(CColorBrush *__hidden, struct CDrawingContext *, bool *))(*(_QWORD *)v25 + 312LL);
          if ( v26 == CColorBrush::IsReadyToDraw )
          {
            v27 = IsCloseRealZero(v25[29], 0.0000011920929);
            v52[0] = v27;
LABEL_27:
            if ( !v27 && *((_QWORD *)this + 16) )
            {
              v28 = fmaxf(0.0, *((float *)this + 52));
              if ( *((_BYTE *)this + 212) )
                v28 = v28 * fminf(*((float *)a2 + 122), *((float *)a2 + 123));
              v29 = CSpriteVectorShape::EnsureStrokeStyleForRender(this);
              v6 = v29;
              if ( v29 >= 0 )
              {
                v35 = *((_QWORD *)this + 14);
                v36 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v35 + 64LL);
                if ( v36 == CColorBrush::IsOfType )
                  v37 = CColorBrush::IsOfType(v35, 22LL);
                else
                  v37 = v36(v35, 22LL);
                if ( v37 )
                {
                  std::vector<CShapeRenderTask>::_Emplace_one_at_back<>((char *)a2 + 496);
                  v38 = *((_QWORD *)this + 14);
                  v6 = 0;
                  v39 = *((_QWORD *)a2 + 63);
                  v40 = *((_QWORD *)this + 15);
                  v41 = *((_QWORD *)this + 17);
                  *(_DWORD *)(v39 - 56) = 5;
                  *(_QWORD *)(v39 - 48) = v40;
                  v42 = *(_OWORD *)(v38 + 104);
                  *(_QWORD *)(v39 - 16) = v41;
                  *(float *)(v39 - 24) = v28;
                  *(_OWORD *)(v39 - 40) = v42;
                }
                else if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 14) + 64LL))(
                            *((_QWORD *)this + 14),
                            72LL) )
                {
                  std::vector<CShapeRenderTask>::_Emplace_one_at_back<>((char *)a2 + 496);
                  v47 = *((_QWORD *)a2 + 63);
                  v6 = 0;
                  v48 = *((_QWORD *)this + 15);
                  v49 = *((_QWORD *)this + 14);
                  v50 = *((_QWORD *)this + 17);
                  *(_DWORD *)(v47 - 56) = 6;
                  *(_QWORD *)(v47 - 48) = v48;
                  v51 = *((_OWORD *)this + 9);
                  *(_QWORD *)(v47 - 24) = v49;
                  *(float *)(v47 - 16) = v28;
                  *(_OWORD *)(v47 - 40) = v51;
                  *(_QWORD *)(v47 - 8) = v50;
                }
              }
              else
              {
                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v29, 0x17Bu, 0LL);
              }
            }
            goto LABEL_33;
          }
          if ( v26(*((CColorBrush **)this + 14), 0LL, v52) )
          {
            v27 = v52[0];
            goto LABEL_27;
          }
        }
LABEL_33:
        v7 = v54;
        goto LABEL_34;
      }
    }
    else
    {
      if ( v18 == CColorBrush::IsOfType )
        v32 = CColorBrush::IsOfType(v17, 22LL);
      else
        v32 = v18(v17, 22LL);
      if ( !v32 )
        goto LABEL_19;
    }
    std::vector<CShapeRenderTask>::_Emplace_one_at_back<>((char *)a2 + 496);
    v33 = *((_QWORD *)this + 13);
    v21 = *((_QWORD *)a2 + 63);
    v34 = *((_QWORD *)this + 15);
    *(_DWORD *)(v21 - 56) = 2;
    *(_QWORD *)(v21 - 48) = v34;
    v24 = *(_OWORD *)(v33 + 104);
    goto LABEL_22;
  }
LABEL_34:
  if ( v55 && v7 )
  {
    v30 = **(void *(__fastcall ***)(CRoundedRectangleShape *__hidden, unsigned int))v7;
    if ( v30 == CRectanglesShape::`scalar deleting destructor' )
    {
      CRectanglesShape::~CRectanglesShape(v7);
      CThreadLocalObjectCache<CRectanglesShape,CRectanglesShape>::Free(v7);
    }
    else if ( v30 == CRoundedRectangleShape::`vector deleting destructor' )
    {
      CRoundedRectangleShape::~CRoundedRectangleShape(v7);
      CThreadLocalObjectCache<CRoundedRectangleShape,CRoundedRectangleShape>::Free(v7);
    }
    else if ( v30 == CPolygonShape::`scalar deleting destructor' )
    {
      CPolygonShape::`scalar deleting destructor'(v7, 1u);
    }
    else
    {
      v30(v7, 1u);
    }
  }
  return v6;
}
