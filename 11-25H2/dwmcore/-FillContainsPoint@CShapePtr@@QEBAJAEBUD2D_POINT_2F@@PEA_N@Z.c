/*
 * XREFs of ?FillContainsPoint@CShapePtr@@QEBAJAEBUD2D_POINT_2F@@PEA_N@Z @ 0x18007B73C
 * Callers:
 *     ?HitTestContent@CWindowNode@@UEAAJ_NAEBUD2D_POINT_2F@@PEA_N@Z @ 0x18007AE20 (-HitTestContent@CWindowNode@@UEAAJ_NAEBUD2D_POINT_2F@@PEA_N@Z.c)
 * Callees:
 *     ?GetTightBounds@CRectanglesShape@@UEBAJPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x180051CA0 (-GetTightBounds@CRectanglesShape@@UEBAJPEAV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDS.c)
 *     ?IsRectangles@CRoundedRectangleShape@@UEBA_NPEAI@Z @ 0x18007BA20 (-IsRectangles@CRoundedRectangleShape@@UEBA_NPEAI@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18007BD44 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetD2DGeometry@CRegionShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z @ 0x18007BDE0 (-GetD2DGeometry@CRegionShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z.c)
 *     ?GetTightBounds@CRegionShape@@UEBAJPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x1800889D0 (-GetTightBounds@CRegionShape@@UEBAJPEAV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_.c)
 *     ?GetD2DGeometry@CPathSegmentsShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z @ 0x180089900 (-GetD2DGeometry@CPathSegmentsShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z.c)
 *     ?GetD2DGeometry@CRoundedRectangleShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z @ 0x1800A45E0 (-GetD2DGeometry@CRoundedRectangleShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?IsRectangles@CRegionShape@@UEBA_NPEAI@Z @ 0x1801C33B0 (-IsRectangles@CRegionShape@@UEBA_NPEAI@Z.c)
 *     ?IsRectangles@CRectanglesShape@@UEBA_NPEAI@Z @ 0x1801C5250 (-IsRectangles@CRectanglesShape@@UEBA_NPEAI@Z.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CShapePtr::FillContainsPoint(CRoundedRectangleShape **this, const struct D2D_POINT_2F *a2, bool *a3)
{
  CRoundedRectangleShape *v3; // rdi
  int v6; // ebx
  __int64 v7; // rax
  bool (__fastcall *v8)(CRoundedRectangleShape *__hidden, unsigned int *); // rax
  bool IsRectangles; // al
  __int64 v10; // rax
  __int64 (__fastcall *v11)(__int64, struct D2D_RECT_F *, __int64); // rax
  int TightBounds; // eax
  BOOL v13; // eax
  float y; // xmm1_4
  __int64 v16; // rax
  int (*v17)(CRegionShape *__hidden, const struct CMILMatrix *, struct ID2D1Geometry **); // rbx
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
  v8 = *(bool (__fastcall **)(CRoundedRectangleShape *__hidden, unsigned int *))(v7 + 64);
  if ( v8 == CRoundedRectangleShape::IsRectangles )
  {
    IsRectangles = CRoundedRectangleShape::IsRectangles(v3, &v21);
  }
  else if ( v8 == CRectanglesShape::IsRectangles )
  {
    IsRectangles = CRectanglesShape::IsRectangles(v3, &v21);
  }
  else if ( v8 == CRegionShape::IsRectangles )
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
    v11 = *(__int64 (__fastcall **)(__int64, struct D2D_RECT_F *, __int64))(v10 + 48);
    if ( (char *)v11 == (char *)CRegionShape::GetTightBounds )
    {
      TightBounds = CRegionShape::GetTightBounds(v3, &v24, 0LL);
    }
    else if ( v11 == CRectanglesShape::GetTightBounds )
    {
      TightBounds = CRectanglesShape::GetTightBounds((__int64)v3, &v24, 0LL);
    }
    else
    {
      TightBounds = v11((__int64)v3, &v24, 0LL);
    }
    v6 = TightBounds;
    if ( TightBounds < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, TightBounds, 0x77u, 0LL);
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
  v17 = *(int (**)(CRegionShape *__hidden, const struct CMILMatrix *, struct ID2D1Geometry **))(v16 + 24);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v22);
  if ( v17 == CRegionShape::GetD2DGeometry )
  {
    D2DGeometry = CRegionShape::GetD2DGeometry(v3, 0LL, &v22);
  }
  else if ( (char *)v17 == (char *)CRoundedRectangleShape::GetD2DGeometry )
  {
    D2DGeometry = CRoundedRectangleShape::GetD2DGeometry(v3, 0LL, &v22);
  }
  else if ( v17 == CPathSegmentsShape::GetD2DGeometry )
  {
    D2DGeometry = CPathSegmentsShape::GetD2DGeometry(v3, 0LL, &v22);
  }
  else
  {
    D2DGeometry = ((__int64 (__fastcall *)(CRoundedRectangleShape *, _QWORD, struct ID2D1Geometry **))v17)(
                    v3,
                    0LL,
                    &v22);
  }
  v6 = D2DGeometry;
  if ( D2DGeometry < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, D2DGeometry, 0x7Eu, 0LL);
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
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v19, 0x80u, 0LL);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v22);
LABEL_14:
  *a3 = v23;
  if ( v6 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0x17Bu, 0LL);
  return (unsigned int)v6;
}
