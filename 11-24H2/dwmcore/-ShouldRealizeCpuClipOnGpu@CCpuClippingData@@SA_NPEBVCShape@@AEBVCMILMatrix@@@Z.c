/*
 * XREFs of ?ShouldRealizeCpuClipOnGpu@CCpuClippingData@@SA_NPEBVCShape@@AEBVCMILMatrix@@@Z @ 0x1800C6BC0
 * Callers:
 *     ?PushClipRectForCurrentNode@CDrawingContext@@QEAAJAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEA_N@Z @ 0x1801741B0 (-PushClipRectForCurrentNode@CDrawingContext@@QEAAJAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2.c)
 * Callees:
 *     ?UnionUnsafe@?$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x18003DED0 (-UnionUnsafe@-$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     ?HasAnyRoundedCorners@CRoundedRectangleGeometryData@@QEBA_NXZ @ 0x1800C7010 (-HasAnyRoundedCorners@CRoundedRectangleGeometryData@@QEBA_NXZ.c)
 *     ?GetTightBounds@CRegionShape@@UEBAJPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x1800CFE30 (-GetTightBounds@CRegionShape@@UEBAJPEAV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_.c)
 *     ??$IsIdentity@$0A@@CMILMatrix@@AEBA_NXZ @ 0x1800D07A0 (--$IsIdentity@$0A@@CMILMatrix@@AEBA_NXZ.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z @ 0x1800D1630 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z.c)
 *     ?IsRectangles@CRectanglesShape@@UEBA_NPEAI@Z @ 0x180101230 (-IsRectangles@CRectanglesShape@@UEBA_NPEAI@Z.c)
 *     ?IsRectangles@CRegionShape@@UEBA_NPEAI@Z @ 0x180101250 (-IsRectangles@CRegionShape@@UEBA_NPEAI@Z.c)
 *     ??$Is90Or270RotationWithTranslateAndScaleIgnoreZ@$00@CMILMatrix@@AEBA_NXZ @ 0x1801470D0 (--$Is90Or270RotationWithTranslateAndScaleIgnoreZ@$00@CMILMatrix@@AEBA_NXZ.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

bool __fastcall CCpuClippingData::ShouldRealizeCpuClipOnGpu(const struct CShape *this, const struct CMILMatrix *a2)
{
  __int64 v2; // rax
  bool (__fastcall *v5)(CRoundedRectangleShape *__hidden, unsigned int *); // rax
  bool IsRectangles; // al
  char v8; // cl
  __int64 v9; // rax
  __int64 (__fastcall *v10)(const struct CShape *, __int128 *, const struct CMILMatrix *); // rax
  __int128 *v11; // rcx
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rsi
  float v14; // xmm1_4
  char v15; // dl
  int TightBounds; // eax
  __int64 v17; // r14
  unsigned int v18; // [rsp+20h] [rbp-48h] BYREF
  __int128 v19; // [rsp+28h] [rbp-40h] BYREF

  v2 = *(_QWORD *)this;
  v18 = 0;
  v5 = *(bool (__fastcall **)(CRoundedRectangleShape *__hidden, unsigned int *))(v2 + 64);
  if ( v5 == CRoundedRectangleShape::IsRectangles )
  {
    if ( CRoundedRectangleGeometryData::HasAnyRoundedCorners((CRoundedRectangleGeometryData *)(*((_QWORD *)this + 2)
                                                                                             + 16LL)) )
      return 0;
  }
  else
  {
    if ( v5 == CRectanglesShape::IsRectangles )
    {
      IsRectangles = CRectanglesShape::IsRectangles(this, &v18);
    }
    else if ( v5 == CRegionShape::IsRectangles )
    {
      IsRectangles = CRegionShape::IsRectangles(this, &v18);
    }
    else
    {
      IsRectangles = v5(this, &v18);
    }
    if ( !IsRectangles || v18 != 1 )
      return 0;
  }
  v8 = *((_BYTE *)a2 + 64);
  if ( v8 >> 6 == 1 )
    goto LABEL_25;
  if ( v8 >> 6 < 0 )
    goto LABEL_10;
  v15 = *((_BYTE *)a2 + 65);
  if ( (char)(4 * v15) >> 6 != 1 )
  {
    if ( (char)(4 * v15) >> 6 < 0 )
    {
LABEL_23:
      if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)a2 + 1) - 0.0) & _xmm) < 0.000081380211
        && COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)a2 + 4) - 0.0) & _xmm) < 0.000081380211 )
      {
        *((_BYTE *)a2 + 64) = v8 | 0xC0;
        goto LABEL_10;
      }
      goto LABEL_24;
    }
    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(
                        (float)((float)((float)(COERCE_FLOAT(*((_DWORD *)a2 + 7) & _xmm) * 61440.0)
                                      + (float)(COERCE_FLOAT(*((_DWORD *)a2 + 3) & _xmm) * 61440.0))
                              + COERCE_FLOAT(*((_DWORD *)a2 + 15) & _xmm))
                      - 1.0) & _xmm) < 0.000081380211 )
    {
      *((_BYTE *)a2 + 65) = v15 | 0x30;
      goto LABEL_23;
    }
    *((_BYTE *)a2 + 65) = v15 & 0xCF | 0x10;
  }
LABEL_24:
  *((_BYTE *)a2 + 64) = v8 & 0x3F | 0x40;
LABEL_25:
  if ( !(unsigned __int8)CMILMatrix::Is90Or270RotationWithTranslateAndScaleIgnoreZ<1>(a2) )
    return 0;
LABEL_10:
  v9 = *(_QWORD *)this;
  v19 = 0LL;
  v10 = *(__int64 (__fastcall **)(const struct CShape *, __int128 *, const struct CMILMatrix *))(v9 + 48);
  if ( (char *)v10 == (char *)CRectanglesShape::GetTightBounds )
  {
    v11 = (__int128 *)*((_QWORD *)this + 2);
    v12 = (__int64)(*((_QWORD *)this + 3) - (_QWORD)v11) >> 4;
    if ( v12 )
    {
      v13 = 1LL;
      v19 = *v11;
      if ( v12 > 1 )
      {
        v17 = 1LL;
        do
        {
          TMilRect<float,D2D_RECT_F,D3D_RECT_F,RectUniqueness::NotNeeded>::UnionUnsafe(
            (float *)&v19,
            (float *)&v11[v17]);
          v11 = (__int128 *)*((_QWORD *)this + 2);
          ++v17;
          ++v13;
        }
        while ( v13 < (__int64)(*((_QWORD *)this + 3) - (_QWORD)v11) >> 4 );
      }
      if ( !(unsigned __int8)CMILMatrix::IsIdentity<0>(a2) )
        CMILMatrix::Transform2DBoundsHelper<0>(a2, &v19, &v19);
    }
  }
  else
  {
    if ( (char *)v10 == (char *)CRegionShape::GetTightBounds )
      TightBounds = CRegionShape::GetTightBounds(this, &v19, a2);
    else
      TightBounds = v10(this, &v19, a2);
    if ( TightBounds < 0 )
      return 0;
  }
  if ( *(float *)&v19 <= -3.4028235e38 && *((float *)&v19 + 2) >= 3.4028235e38
    || *((float *)&v19 + 1) <= -3.4028235e38 && *((float *)&v19 + 3) >= 3.4028235e38 )
  {
    return 0;
  }
  if ( *((float *)&v19 + 2) <= *(float *)&v19 || *((float *)&v19 + 3) <= *((float *)&v19 + 1) )
    v14 = 0.0;
  else
    v14 = (float)(*((float *)&v19 + 3) - *((float *)&v19 + 1)) * (float)(*((float *)&v19 + 2) - *(float *)&v19);
  return v14 >= (float)CCommonRegistryData::CpuClipAreaThreshold;
}
