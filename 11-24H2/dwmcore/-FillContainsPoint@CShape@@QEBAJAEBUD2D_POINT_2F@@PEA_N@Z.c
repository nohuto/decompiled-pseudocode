/*
 * XREFs of ?FillContainsPoint@CShape@@QEBAJAEBUD2D_POINT_2F@@PEA_N@Z @ 0x1800CE960
 * Callers:
 *     ?HitTest@CSurfaceBrush@@UEBAJAEBUD2D_SIZE_F@@AEBUD2D_POINT_2F@@PEA_N@Z @ 0x18014C600 (-HitTest@CSurfaceBrush@@UEBAJAEBUD2D_SIZE_F@@AEBUD2D_POINT_2F@@PEA_N@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180061E70 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetD2DGeometry@CRoundedRectangleShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z @ 0x180072D70 (-GetD2DGeometry@CRoundedRectangleShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?HasAnyRoundedCorners@CRoundedRectangleGeometryData@@QEBA_NXZ @ 0x1800C7010 (-HasAnyRoundedCorners@CRoundedRectangleGeometryData@@QEBA_NXZ.c)
 *     ?GetTightBounds@CRectanglesShape@@UEBAJPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x1800CD910 (-GetTightBounds@CRectanglesShape@@UEBAJPEAV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDS.c)
 *     ?GetTightBounds@CRegionShape@@UEBAJPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x1800CFE30 (-GetTightBounds@CRegionShape@@UEBAJPEAV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_.c)
 *     ?GetD2DGeometry@CPathSegmentsShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z @ 0x1800D0D60 (-GetD2DGeometry@CPathSegmentsShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z.c)
 *     ?IsRectangles@CRectanglesShape@@UEBA_NPEAI@Z @ 0x180101230 (-IsRectangles@CRectanglesShape@@UEBA_NPEAI@Z.c)
 *     ?IsRectangles@CRegionShape@@UEBA_NPEAI@Z @ 0x180101250 (-IsRectangles@CRegionShape@@UEBA_NPEAI@Z.c)
 *     ?GetD2DGeometry@CRegionShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z @ 0x18014CF00 (-GetD2DGeometry@CRegionShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CShape::FillContainsPoint(CShape *this, const struct D2D_POINT_2F *a2, bool *a3)
{
  __int64 v3; // rax
  bool (__fastcall *v7)(CRoundedRectangleShape *__hidden, unsigned int *); // rax
  __int64 v8; // rax
  __int64 (__fastcall *v9)(CRoundedRectangleShape *, const struct CMILMatrix *, struct ID2D1Geometry **); // rax
  int D2DGeometry; // eax
  unsigned int v11; // ebx
  int v12; // eax
  struct ID2D1Geometry *v13; // rcx
  bool IsRectangles; // al
  __int64 v15; // rax
  __int64 (__fastcall *v16)(__int64, struct D2D_RECT_F *, __int64); // rax
  int TightBounds; // eax
  BOOL v18; // eax
  float y; // xmm1_4
  BOOL v21; // [rsp+30h] [rbp-20h]
  struct ID2D1Geometry *v22[2]; // [rsp+38h] [rbp-18h] BYREF

  v3 = *(_QWORD *)this;
  v21 = 0;
  LODWORD(v22[0]) = 0;
  v7 = *(bool (__fastcall **)(CRoundedRectangleShape *__hidden, unsigned int *))(v3 + 64);
  if ( v7 != CRoundedRectangleShape::IsRectangles )
  {
    if ( v7 == CRectanglesShape::IsRectangles )
    {
      IsRectangles = CRectanglesShape::IsRectangles(this, (unsigned int *)v22);
    }
    else if ( v7 == CRegionShape::IsRectangles )
    {
      IsRectangles = CRegionShape::IsRectangles(this, (unsigned int *)v22);
    }
    else
    {
      IsRectangles = v7(this, (unsigned int *)v22);
    }
    if ( !IsRectangles || LODWORD(v22[0]) != 1 )
      goto LABEL_3;
LABEL_13:
    v15 = *(_QWORD *)this;
    *(_OWORD *)v22 = 0LL;
    v16 = *(__int64 (__fastcall **)(__int64, struct D2D_RECT_F *, __int64))(v15 + 48);
    if ( (char *)v16 == (char *)CRegionShape::GetTightBounds )
    {
      TightBounds = CRegionShape::GetTightBounds(this, v22, 0LL);
    }
    else if ( v16 == CRectanglesShape::GetTightBounds )
    {
      TightBounds = CRectanglesShape::GetTightBounds((__int64)this, (struct D2D_RECT_F *)v22, 0LL);
    }
    else
    {
      TightBounds = v16((__int64)this, (struct D2D_RECT_F *)v22, 0LL);
    }
    v11 = TightBounds;
    if ( TightBounds < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, TightBounds, 0x77u, 0LL);
    }
    else
    {
      v18 = 0;
      if ( a2->x >= *(float *)v22 && *(float *)&v22[1] > a2->x )
      {
        y = a2->y;
        if ( y >= *((float *)v22 + 1) )
          v18 = *((float *)&v22[1] + 1) > y;
      }
      v21 = v18;
    }
    goto LABEL_21;
  }
  if ( !CRoundedRectangleGeometryData::HasAnyRoundedCorners((CRoundedRectangleGeometryData *)(*((_QWORD *)this + 2)
                                                                                            + 16LL)) )
    goto LABEL_13;
LABEL_3:
  v8 = *(_QWORD *)this;
  v22[0] = 0LL;
  v9 = *(__int64 (__fastcall **)(CRoundedRectangleShape *, const struct CMILMatrix *, struct ID2D1Geometry **))(v8 + 24);
  if ( (char *)v9 == (char *)CRegionShape::GetD2DGeometry )
  {
    D2DGeometry = CRegionShape::GetD2DGeometry(this, 0LL, v22);
  }
  else if ( v9 == CRoundedRectangleShape::GetD2DGeometry )
  {
    D2DGeometry = CRoundedRectangleShape::GetD2DGeometry(this, 0LL, v22);
  }
  else if ( (char *)v9 == (char *)CPathSegmentsShape::GetD2DGeometry )
  {
    D2DGeometry = CPathSegmentsShape::GetD2DGeometry(this, 0LL, v22);
  }
  else
  {
    D2DGeometry = v9(this, 0LL, v22);
  }
  v11 = D2DGeometry;
  if ( D2DGeometry < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, D2DGeometry, 0x7Eu, 0LL);
  }
  else
  {
    v12 = (*(__int64 (__fastcall **)(struct ID2D1Geometry *, unsigned __int64, _QWORD))(*(_QWORD *)v22[0] + 56LL))(
            v22[0],
            _mm_unpacklo_ps((__m128)LODWORD(a2->x), (__m128)LODWORD(a2->y)).m128_u64[0],
            0LL);
    v11 = v12;
    if ( v12 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v12, 0x80u, 0LL);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)v22);
      goto LABEL_21;
    }
  }
  v13 = v22[0];
  if ( v22[0] )
  {
    v22[0] = 0LL;
    (*(void (__fastcall **)(struct ID2D1Geometry *))(*(_QWORD *)v13 + 16LL))(v13);
  }
LABEL_21:
  *a3 = v21;
  return v11;
}
