/*
 * XREFs of ?GetBoundsSafe@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800583D0
 * Callers:
 *     ?TryDrawCommandAsDrawList@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListCache@@PEAVCDrawListEntryBuilder@@IV?$span@$$CBE$0?0@gsl@@PEA_N@Z @ 0x18000F914 (-TryDrawCommandAsDrawList@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListCache@@PEAVCDrawLi.c)
 *     ?DrawGeometry@CRenderDataBounds@@UEAAJPEAVCLegacyMilBrush@@PEAVCGeometry@@@Z @ 0x1801EDE60 (-DrawGeometry@CRenderDataBounds@@UEAAJPEAVCLegacyMilBrush@@PEAVCGeometry@@@Z.c)
 * Callees:
 *     ?GetBoundingRect@CRegion@FastRegion@@QEBA_NAEAUtagRECT@@@Z @ 0x180058110 (-GetBoundingRect@CRegion@FastRegion@@QEBA_NAEAUtagRECT@@@Z.c)
 *     ?GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x180058F30 (-GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 *     ?GetTightBounds@CRoundedRectangleShape@@UEBAJPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x180088CB0 (-GetTightBounds@CRoundedRectangleShape@@UEBAJPEAV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POI.c)
 *     ?UnionUnsafe@?$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x180099A00 (-UnionUnsafe@-$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     ??1CRectanglesShape@@UEAA@XZ @ 0x1800AABD0 (--1CRectanglesShape@@UEAA@XZ.c)
 *     ?Free@?$CThreadLocalObjectCache@VCRectanglesShape@@V1@@@SAXPEAX@Z @ 0x1800AACE0 (-Free@-$CThreadLocalObjectCache@VCRectanglesShape@@V1@@@SAXPEAX@Z.c)
 *     ?Free@?$CThreadLocalObjectCache@VCRoundedRectangleShape@@V1@@@SAXPEAX@Z @ 0x1800AADF0 (-Free@-$CThreadLocalObjectCache@VCRoundedRectangleShape@@V1@@@SAXPEAX@Z.c)
 *     ??1CRoundedRectangleShape@@UEAA@XZ @ 0x1800AAEE0 (--1CRoundedRectangleShape@@UEAA@XZ.c)
 *     ??_GCPolygonShape@@UEAAPEAXI@Z @ 0x1800AB080 (--_GCPolygonShape@@UEAAPEAXI@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CGeometry::GetBoundsSafe(CGeometry *a1, const struct D2D_SIZE_F *a2, __int64 a3)
{
  int ShapeData; // eax
  unsigned int v5; // esi
  CRectanglesShape *v6; // rbx
  int v7; // edi
  __int64 (__fastcall *v8)(__int64, struct D2D_RECT_F *, __int64); // rax
  _OWORD *v9; // rcx
  unsigned __int64 v10; // rdi
  __int64 v11; // rcx
  float bottom; // xmm0_4
  float right; // xmm1_4
  float top; // xmm2_4
  float left; // xmm3_4
  int TightBounds; // eax
  void *(__fastcall *v17)(CRoundedRectangleShape *__hidden, unsigned int); // rax
  __int64 v19; // rsi
  CRectanglesShape *v20; // [rsp+30h] [rbp-58h] BYREF
  char v21; // [rsp+38h] [rbp-50h]
  struct tagRECT v22; // [rsp+40h] [rbp-48h] BYREF

  v20 = 0LL;
  v21 = 0;
  ShapeData = CGeometry::GetShapeData(a1, a2, (struct CShapePtr *)&v20);
  v5 = ShapeData;
  if ( ShapeData >= 0 )
  {
    v6 = v20;
    v7 = -2003304309;
    if ( v20 )
    {
      v8 = *(__int64 (__fastcall **)(__int64, struct D2D_RECT_F *, __int64))(*(_QWORD *)v20 + 48LL);
      if ( v8 == CRectanglesShape::GetTightBounds )
      {
        v9 = (_OWORD *)*((_QWORD *)v20 + 2);
        if ( *((_OWORD **)v20 + 3) == v9 )
        {
          *(_QWORD *)(a3 + 8) = 0LL;
          v5 = 0;
          *(_QWORD *)a3 = 0LL;
          goto LABEL_21;
        }
        v10 = 1LL;
        *(_OWORD *)a3 = *v9;
        v11 = *((_QWORD *)v6 + 2);
        if ( (unsigned __int64)((*((_QWORD *)v6 + 3) - v11) >> 4) > 1 )
        {
          v19 = 16LL;
          do
          {
            TMilRect<float,D2D_RECT_F,D3D_RECT_F,RectUniqueness::NotNeeded>::UnionUnsafe(a3, v19 + v11);
            v11 = *((_QWORD *)v6 + 2);
            v19 += 16LL;
            ++v10;
          }
          while ( v10 < (*((_QWORD *)v6 + 3) - v11) >> 4 );
          v6 = v20;
        }
        goto LABEL_6;
      }
      if ( (char *)v8 == (char *)CRegionShape::GetTightBounds )
      {
        v22 = 0LL;
        if ( FastRegion::CRegion::GetBoundingRect((LONG **)v20 + 2, &v22) )
        {
          bottom = (float)v22.bottom;
          right = (float)v22.right;
          top = (float)v22.top;
          left = (float)v22.left;
        }
        else
        {
          bottom = 0.0;
          right = 0.0;
          top = 0.0;
          left = 0.0;
        }
        *(float *)a3 = left;
        v5 = 0;
        *(float *)(a3 + 4) = top;
        *(float *)(a3 + 8) = right;
        *(float *)(a3 + 12) = bottom;
        v6 = v20;
        goto LABEL_21;
      }
      if ( (char *)v8 == (char *)CRoundedRectangleShape::GetTightBounds )
        TightBounds = CRoundedRectangleShape::GetTightBounds(v20, (struct D2D_RECT_F *)a3, 0LL);
      else
        TightBounds = v8((__int64)v20, (struct D2D_RECT_F *)a3, 0LL);
      v7 = TightBounds;
      v5 = TightBounds;
      if ( TightBounds < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, TightBounds, 0x140u, 0LL);
LABEL_16:
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0x63u, 0LL);
        goto LABEL_17;
      }
      v6 = v20;
    }
    v5 = v7;
    if ( v7 >= 0 )
      goto LABEL_19;
    goto LABEL_16;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, ShapeData, 0x62u, 0LL);
LABEL_17:
  v6 = v20;
LABEL_19:
  if ( v5 == -2003304438 || v5 == -2003304309 )
  {
    *(_OWORD *)a3 = TMilRect<float,D2D_RECT_F,D3D_RECT_F,RectUniqueness::NotNeeded>::sc_rcInfinite;
LABEL_6:
    v5 = 0;
  }
LABEL_21:
  if ( v21 && v6 )
  {
    v17 = **(void *(__fastcall ***)(CRoundedRectangleShape *__hidden, unsigned int))v6;
    if ( v17 == CRectanglesShape::`scalar deleting destructor' )
    {
      CRectanglesShape::~CRectanglesShape(v6);
      CThreadLocalObjectCache<CRectanglesShape,CRectanglesShape>::Free(v6);
    }
    else if ( v17 == CRoundedRectangleShape::`vector deleting destructor' )
    {
      CRoundedRectangleShape::~CRoundedRectangleShape(v6);
      CThreadLocalObjectCache<CRoundedRectangleShape,CRoundedRectangleShape>::Free(v6);
    }
    else if ( v17 == CPolygonShape::`scalar deleting destructor' )
    {
      CPolygonShape::`scalar deleting destructor'(v6, 1u);
    }
    else
    {
      v17(v6, 1u);
    }
  }
  return v5;
}
