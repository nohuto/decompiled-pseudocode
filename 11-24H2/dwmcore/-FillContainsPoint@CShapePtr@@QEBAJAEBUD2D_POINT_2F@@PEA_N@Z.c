/*
 * XREFs of ?FillContainsPoint@CShapePtr@@QEBAJAEBUD2D_POINT_2F@@PEA_N@Z @ 0x18014C84C
 * Callers:
 *     ?HitTestContent@CWindowNode@@UEAAJ_NAEBUD2D_POINT_2F@@PEA_N@Z @ 0x18014BF30 (-HitTestContent@CWindowNode@@UEAAJ_NAEBUD2D_POINT_2F@@PEA_N@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180061E70 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetD2DGeometry@CRoundedRectangleShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z @ 0x180072D70 (-GetD2DGeometry@CRoundedRectangleShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetTightBounds@CRectanglesShape@@UEBAJPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x1800CD910 (-GetTightBounds@CRectanglesShape@@UEBAJPEAV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDS.c)
 *     ?GetTightBounds@CRegionShape@@UEBAJPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x1800CFE30 (-GetTightBounds@CRegionShape@@UEBAJPEAV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_.c)
 *     ?GetD2DGeometry@CPathSegmentsShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z @ 0x1800D0D60 (-GetD2DGeometry@CPathSegmentsShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z.c)
 *     ?IsRectangles@CRectanglesShape@@UEBA_NPEAI@Z @ 0x180101230 (-IsRectangles@CRectanglesShape@@UEBA_NPEAI@Z.c)
 *     ?IsRectangles@CRegionShape@@UEBA_NPEAI@Z @ 0x180101250 (-IsRectangles@CRegionShape@@UEBA_NPEAI@Z.c)
 *     ?IsRectangles@CRoundedRectangleShape@@UEBA_NPEAI@Z @ 0x18014CB30 (-IsRectangles@CRoundedRectangleShape@@UEBA_NPEAI@Z.c)
 *     ?GetD2DGeometry@CRegionShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z @ 0x18014CF00 (-GetD2DGeometry@CRegionShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CShapePtr::FillContainsPoint(CRoundedRectangleShape **this, const struct D2D_POINT_2F *a2, bool *a3)
{
  CRoundedRectangleShape *v3; // rdi
  int v6; // ebx
  __int64 v7; // rax
  char (__fastcall *v8)(CRectanglesShape *, unsigned int *); // rax
  char IsRectangles; // al
  __int64 v10; // rax
  __int64 (__fastcall *v11)(CRoundedRectangleShape *, struct D2D_RECT_F *, _QWORD); // rax
  int TightBounds; // eax
  BOOL v13; // eax
  float y; // xmm1_4
  __int64 v16; // rax
  __int64 (__fastcall *v17)(CPathSegmentsShape *, const struct CMILMatrix *, struct ID2D1Geometry **); // rbx
  int D2DGeometry; // eax
  int v19; // eax
  struct ID2D1Geometry *v20; // rcx
  unsigned int v21; // [rsp+30h] [rbp-30h] BYREF
  struct ID2D1Geometry *v22; // [rsp+38h] [rbp-28h] BYREF
  BOOL v23; // [rsp+40h] [rbp-20h]
  struct D2D_RECT_F v24; // [rsp+48h] [rbp-18h] BYREF

  v3 = *this;
  v6 = -2003304309;
  if ( !*this )
    return (unsigned int)v6;
  v7 = *(_QWORD *)v3;
  v23 = 0;
  v21 = 0;
  v8 = *(char (__fastcall **)(CRectanglesShape *, unsigned int *))(v7 + 64);
  if ( (char *)v8 == (char *)CRoundedRectangleShape::IsRectangles )
  {
    IsRectangles = CRoundedRectangleShape::IsRectangles(v3, &v21);
  }
  else if ( v8 == CRectanglesShape::IsRectangles )
  {
    IsRectangles = CRectanglesShape::IsRectangles(v3, &v21);
  }
  else if ( (char *)v8 == (char *)CRegionShape::IsRectangles )
  {
    IsRectangles = CRegionShape::IsRectangles(v3, &v21);
  }
  else
  {
    IsRectangles = v8(v3, &v21);
  }
  if ( IsRectangles && v21 == 1 )
  {
    v10 = *(_QWORD *)v3;
    v24 = 0LL;
    v11 = *(__int64 (__fastcall **)(CRoundedRectangleShape *, struct D2D_RECT_F *, _QWORD))(v10 + 48);
    if ( (char *)v11 == (char *)CRegionShape::GetTightBounds )
    {
      TightBounds = CRegionShape::GetTightBounds((__int64)v3, (__int64)&v24, 0LL);
    }
    else if ( (char *)v11 == (char *)CRectanglesShape::GetTightBounds )
    {
      TightBounds = CRectanglesShape::GetTightBounds((__int64)v3, &v24, 0LL);
    }
    else
    {
      TightBounds = v11(v3, &v24, 0LL);
    }
    v6 = TightBounds;
    if ( TightBounds < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, TightBounds, 0x77u, 0LL);
    }
    else
    {
      v13 = 0;
      if ( a2->x >= v24.left && v24.right > a2->x )
      {
        y = a2->y;
        if ( y >= v24.top )
          v13 = v24.bottom > y;
      }
      v23 = v13;
    }
    goto LABEL_14;
  }
  v16 = *(_QWORD *)v3;
  v22 = 0LL;
  v17 = *(__int64 (__fastcall **)(CPathSegmentsShape *, const struct CMILMatrix *, struct ID2D1Geometry **))(v16 + 24);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v22);
  if ( (char *)v17 == (char *)CRegionShape::GetD2DGeometry )
  {
    D2DGeometry = CRegionShape::GetD2DGeometry(v3, 0LL, &v22);
  }
  else if ( v17 == CRoundedRectangleShape::GetD2DGeometry )
  {
    D2DGeometry = CRoundedRectangleShape::GetD2DGeometry(v3, 0LL, &v22);
  }
  else if ( v17 == CPathSegmentsShape::GetD2DGeometry )
  {
    D2DGeometry = CPathSegmentsShape::GetD2DGeometry(v3, 0LL, &v22);
  }
  else
  {
    D2DGeometry = v17(v3, 0LL, &v22);
  }
  v6 = D2DGeometry;
  if ( D2DGeometry < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, D2DGeometry, 0x7Eu, 0LL);
LABEL_23:
    v20 = v22;
    if ( v22 )
    {
      v22 = 0LL;
      (*(void (__fastcall **)(struct ID2D1Geometry *))(*(_QWORD *)v20 + 16LL))(v20);
    }
    goto LABEL_14;
  }
  v19 = (*(__int64 (__fastcall **)(struct ID2D1Geometry *, unsigned __int64, _QWORD))(*(_QWORD *)v22 + 56LL))(
          v22,
          _mm_unpacklo_ps((__m128)LODWORD(a2->x), (__m128)LODWORD(a2->y)).m128_u64[0],
          0LL);
  v6 = v19;
  if ( v19 >= 0 )
    goto LABEL_23;
  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v19, 0x80u, 0LL);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v22);
LABEL_14:
  *a3 = v23;
  if ( v6 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v6, 0x17Bu, 0LL);
  return (unsigned int)v6;
}
