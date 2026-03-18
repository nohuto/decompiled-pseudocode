/*
 * XREFs of ?GetEffectiveBounds@CWindowNode@@AEBAJPEBVCShape@@PEAV?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@PEA_N@Z @ 0x1800C5DA0
 * Callers:
 *     ?GetContentBounds@CWindowNode@@UEAAJPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180016810 (-GetContentBounds@CWindowNode@@UEAAJPEAV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE.c)
 *     ?CollectOcclusion@CWindowNode@@UEAAJPEAVCOcclusionContext@@PEAVCOcclusionInfo@@@Z @ 0x1800FF480 (-CollectOcclusion@CWindowNode@@UEAAJPEAVCOcclusionContext@@PEAVCOcclusionInfo@@@Z.c)
 *     ?RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIBitmapResource@@PEBVCShape@@_NH@Z @ 0x1802379C0 (-RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIBitmapResourc.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetBoundingRect@CRegion@FastRegion@@QEBA_NAEAUtagRECT@@@Z @ 0x1800C6450 (-GetBoundingRect@CRegion@FastRegion@@QEBA_NAEAUtagRECT@@@Z.c)
 *     ?HasAnyRoundedCorners@CRoundedRectangleGeometryData@@QEBA_NXZ @ 0x1800C7010 (-HasAnyRoundedCorners@CRoundedRectangleGeometryData@@QEBA_NXZ.c)
 *     ?FloorSat@CFloatFPU@@SAHM@Z @ 0x1800D3E10 (-FloorSat@CFloatFPU@@SAHM@Z.c)
 *     ?CeilingSat@CFloatFPU@@SAHM@Z @ 0x1800D3E60 (-CeilingSat@CFloatFPU@@SAHM@Z.c)
 *     ?IsRectangles@CRectanglesShape@@UEBA_NPEAI@Z @ 0x180101230 (-IsRectangles@CRectanglesShape@@UEBA_NPEAI@Z.c)
 *     ?IsRectangles@CRegionShape@@UEBA_NPEAI@Z @ 0x180101250 (-IsRectangles@CRegionShape@@UEBA_NPEAI@Z.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CWindowNode::GetEffectiveBounds(__int64 a1, __int64 *a2, int *a3, char *a4)
{
  __m128 v4; // xmm2
  unsigned int v8; // esi
  char v9; // dl
  __int64 v10; // rax
  __int64 (__fastcall *v11)(__int64 *, __int128 *, _QWORD); // rax
  __m128i v12; // xmm3
  __m128i v13; // xmm6
  __m128i v14; // xmm7
  __m128i v15; // xmm8
  int v16; // r14d
  __m128 v17; // xmm2
  __m128 v18; // xmm2
  int v19; // r12d
  __m128 v20; // xmm2
  __m128 v21; // xmm2
  int v22; // r15d
  __m128 v23; // xmm2
  __m128 v24; // xmm2
  int v25; // ecx
  int v26; // r9d
  int v27; // r8d
  int v28; // edx
  int v29; // eax
  __int64 v30; // rax
  bool (__fastcall *v31)(CRoundedRectangleShape *__hidden, unsigned int *); // rax
  bool IsRectangles; // al
  int v33; // eax
  __m128 v35; // rt1
  unsigned int v36; // [rsp+38h] [rbp-69h] BYREF
  __int128 v37; // [rsp+40h] [rbp-61h] BYREF
  struct tagRECT v38; // [rsp+50h] [rbp-51h] BYREF

  *(_QWORD *)a3 = 0LL;
  a3[2] = *(_DWORD *)(a1 + 728);
  v8 = 0;
  v9 = 1;
  a3[3] = HIDWORD(*(_QWORD *)(a1 + 728));
  if ( !a2 )
    goto LABEL_39;
  v10 = *a2;
  v37 = 0LL;
  v11 = *(__int64 (__fastcall **)(__int64 *, __int128 *, _QWORD))(v10 + 48);
  if ( (char *)v11 != (char *)CRegionShape::GetTightBounds )
  {
    v33 = v11(a2, &v37, 0LL);
    v8 = v33;
    if ( v33 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v33, 0x1B2u, 0LL);
      return v8;
    }
    goto LABEL_44;
  }
  v38 = 0LL;
  if ( !FastRegion::CRegion::GetBoundingRect((FastRegion::CRegion *)(a2 + 2), &v38) )
  {
LABEL_44:
    v12 = (__m128i)(unsigned int)v37;
    v13 = (__m128i)DWORD1(v37);
    v14 = (__m128i)DWORD2(v37);
    v15 = (__m128i)HIDWORD(v37);
    goto LABEL_5;
  }
  v12 = (__m128i)COERCE_UNSIGNED_INT((float)v38.left);
  v13 = (__m128i)COERCE_UNSIGNED_INT((float)v38.top);
  v14 = (__m128i)COERCE_UNSIGNED_INT((float)v38.right);
  v15 = (__m128i)COERCE_UNSIGNED_INT((float)v38.bottom);
  *(float *)&v37 = (float)v38.left;
  *((float *)&v37 + 1) = (float)v38.top;
  *((float *)&v37 + 2) = (float)v38.right;
  *((float *)&v37 + 3) = (float)v38.bottom;
LABEL_5:
  if ( (_mm_cvtsi128_si32(v12) & 0x7FFFFFFFu) > 0x497FFFF0 )
  {
    v4.m128_f32[0] = (float)(int)*(float *)v12.m128i_i32 - *(float *)v12.m128i_i32;
    v16 = (int)*(float *)v12.m128i_i32 - _mm_cvtsi128_si32((__m128i)_mm_cmple_ss(v4, (__m128)LODWORD(FLOAT_N0_5)));
  }
  else
  {
    *(float *)&v36 = *(float *)v12.m128i_i32 + 6291456.25;
    v16 = (int)(v36 << 10) >> 11;
  }
  v17 = (__m128)v12;
  v17.m128_f32[0] = *(float *)v12.m128i_i32 - (float)v16;
  v18 = _mm_and_ps(v17, (__m128)(unsigned int)_xmm);
  if ( v18.m128_f32[0] > 0.00390625 )
    v16 = CFloatFPU::FloorSat(*(float *)v12.m128i_i32);
  if ( (_mm_cvtsi128_si32(v13) & 0x7FFFFFFFu) > 0x497FFFF0 )
  {
    v18.m128_f32[0] = (float)(int)*(float *)v13.m128i_i32 - *(float *)v13.m128i_i32;
    v19 = (int)*(float *)v13.m128i_i32 - _mm_cvtsi128_si32((__m128i)_mm_cmple_ss(v18, (__m128)LODWORD(FLOAT_N0_5)));
  }
  else
  {
    *(float *)&v36 = *(float *)v13.m128i_i32 + 6291456.25;
    v19 = (int)(v36 << 10) >> 11;
  }
  v20 = (__m128)v13;
  v20.m128_f32[0] = *(float *)v13.m128i_i32 - (float)v19;
  v21 = _mm_and_ps(v20, (__m128)(unsigned int)_xmm);
  if ( v21.m128_f32[0] > 0.00390625 )
    v19 = CFloatFPU::FloorSat(*(float *)v13.m128i_i32);
  if ( (_mm_cvtsi128_si32(v14) & 0x7FFFFFFFu) > 0x497FFFF0 )
  {
    v21.m128_f32[0] = (float)(int)*(float *)v14.m128i_i32 - *(float *)v14.m128i_i32;
    v22 = (int)*(float *)v14.m128i_i32 - _mm_cvtsi128_si32((__m128i)_mm_cmple_ss(v21, (__m128)LODWORD(FLOAT_N0_5)));
  }
  else
  {
    *(float *)&v36 = *(float *)v14.m128i_i32 + 6291456.25;
    v22 = (int)(v36 << 10) >> 11;
  }
  v23 = (__m128)v14;
  v23.m128_f32[0] = *(float *)v14.m128i_i32 - (float)v22;
  v24 = _mm_and_ps(v23, (__m128)(unsigned int)_xmm);
  if ( v24.m128_f32[0] > 0.00390625 )
    v22 = CFloatFPU::CeilingSat(*(float *)v14.m128i_i32);
  if ( (_mm_cvtsi128_si32(v15) & 0x7FFFFFFFu) > 0x497FFFF0 )
  {
    v24.m128_f32[0] = (float)(int)*(float *)v15.m128i_i32 - *(float *)v15.m128i_i32;
    v35.m128_f32[0] = FLOAT_N0_5;
    v25 = (int)*(float *)v15.m128i_i32 - _mm_cvtsi128_si32((__m128i)_mm_cmple_ss(v24, v35));
  }
  else
  {
    *(float *)&v36 = *(float *)v15.m128i_i32 + 6291456.25;
    v25 = (int)(v36 << 10) >> 11;
  }
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)v15.m128i_i32 - (float)v25) & _xmm) > 0.00390625 )
    v25 = CFloatFPU::CeilingSat(*(float *)v15.m128i_i32);
  v26 = *a3;
  if ( v16 > *a3 )
  {
    *a3 = v16;
    v26 = v16;
  }
  v27 = a3[1];
  if ( v19 > v27 )
  {
    a3[1] = v19;
    v27 = v19;
  }
  v28 = a3[2];
  if ( v22 < v28 )
  {
    a3[2] = v22;
    v28 = v22;
  }
  v29 = a3[3];
  if ( v25 < v29 )
  {
    a3[3] = v25;
    v29 = v25;
  }
  if ( v28 <= v26 || v29 <= v27 )
  {
    *((_QWORD *)a3 + 1) = 0LL;
    *(_QWORD *)a3 = 0LL;
  }
  v30 = *a2;
  *(float *)&v36 = 0.0;
  v31 = *(bool (__fastcall **)(CRoundedRectangleShape *__hidden, unsigned int *))(v30 + 64);
  if ( v31 == CRoundedRectangleShape::IsRectangles )
  {
    if ( !CRoundedRectangleGeometryData::HasAnyRoundedCorners((CRoundedRectangleGeometryData *)(a2[2] + 16)) )
    {
LABEL_33:
      v9 = 1;
      goto LABEL_39;
    }
  }
  else
  {
    if ( v31 == CRectanglesShape::IsRectangles )
    {
      IsRectangles = CRectanglesShape::IsRectangles((CRectanglesShape *)a2, &v36);
    }
    else if ( v31 == CRegionShape::IsRectangles )
    {
      IsRectangles = CRegionShape::IsRectangles((CRegionShape *)a2, &v36);
    }
    else
    {
      IsRectangles = v31((CRoundedRectangleShape *)a2, &v36);
    }
    if ( IsRectangles && v36 == 1 )
      goto LABEL_33;
  }
  v9 = 0;
LABEL_39:
  if ( a4 )
    *a4 = v9;
  return v8;
}
