/*
 * XREFs of ?ValidateVisual@CDesktopThumbnailCVIVisual@@UEAAJXZ @ 0x18000A760
 * Callers:
 *     <none>
 * Callees:
 *     ?Update@CRectResourceProxy@@QEAAJAEBUMilRectF@@@Z @ 0x18000DE78 (-Update@CRectResourceProxy@@QEAAJAEBUMilRectF@@@Z.c)
 *     ?CreateRectangleGeometry@ResourceHelper@@SAJHHHHPEAPEAVCRectangleGeometryProxy@@@Z @ 0x18001C16C (-CreateRectangleGeometry@ResourceHelper@@SAJHHHHPEAPEAVCRectangleGeometryProxy@@@Z.c)
 *     ?ValidateVisual@CRenderDataVisual@@UEAAJXZ @ 0x180050710 (-ValidateVisual@CRenderDataVisual@@UEAAJXZ.c)
 *     __security_check_cookie @ 0x18005C640 (__security_check_cookie.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D254 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$IntersectRectT@UMilPointAndSizeL@@@@YAHPEAUMilPointAndSizeL@@PEBU0@1@Z @ 0x18010ED2C (--$IntersectRectT@UMilPointAndSizeL@@@@YAHPEAUMilPointAndSizeL@@PEBU0@1@Z.c)
 */

__int64 __fastcall CDesktopThumbnailCVIVisual::ValidateVisual(struct CRectangleGeometryProxy **this)
{
  int RectangleGeometry; // edi
  char v3; // cl
  struct CRectangleGeometryProxy *v4; // rdx
  int v5; // edi
  __m128i *v6; // rdx
  int v7; // ecx
  int v8; // r12d
  __int32 v9; // r15d
  unsigned __int64 v10; // r8
  __m128i v11; // xmm0
  int v12; // ecx
  double v13; // xmm0_8
  __m128i v14; // xmm2
  int v15; // eax
  double v16; // xmm2_8
  double v17; // xmm4_8
  int v18; // eax
  CRectResourceProxy *v19; // rcx
  float v20; // xmm3_4
  float v21; // xmm1_4
  __int64 v23; // rdx
  int v24; // ecx
  int v25; // eax
  float v26; // ecx
  int v27; // [rsp+20h] [rbp-50h]
  int v28[4]; // [rsp+30h] [rbp-40h] BYREF
  __int64 v29; // [rsp+40h] [rbp-30h] BYREF
  float v30; // [rsp+48h] [rbp-28h]
  float v31; // [rsp+4Ch] [rbp-24h]
  __m128i v32; // [rsp+50h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+28h]

  RectangleGeometry = CRenderDataVisual::ValidateVisual((CRenderDataVisual *)this);
  if ( RectangleGeometry < 0 )
  {
    v23 = 414LL;
  }
  else
  {
    if ( ((_DWORD)this[11] & 0x1000) == 0 )
      return 0LL;
    if ( *((_BYTE *)this + 345) || (v3 = 1, (*((_DWORD *)this + 87) & 0x100000) != 0) )
      v3 = 0;
    if ( !this[36] || !this[37] || (v4 = this[40]) == 0LL )
    {
LABEL_15:
      *((_DWORD *)this + 22) &= ~0x1000u;
      return 0LL;
    }
    v5 = *((_DWORD *)this + 32);
    v32.m128i_i64[1] = __PAIR64__(*((_DWORD *)this + 33), v5);
    v32.m128i_i64[0] = 0LL;
    *(__m128i *)v28 = v32;
    if ( v3 )
    {
      *(float *)&v24 = 0.0;
      LODWORD(v29) = -*((_DWORD *)this + 30);
      HIDWORD(v29) = -*((_DWORD *)this + 31);
      if ( *((_DWORD *)v4 + 56) - *((_DWORD *)v4 + 54) >= 0 )
        v24 = *((_DWORD *)v4 + 56) - *((_DWORD *)v4 + 54);
      v25 = *((_DWORD *)v4 + 57) - *((_DWORD *)v4 + 55);
      v30 = *(float *)&v24;
      v26 = 0.0;
      if ( v25 >= 0 )
        v26 = *(float *)&v25;
      v31 = v26;
      IntersectRectT<MilPointAndSizeL>(v28, &v29, &v32);
    }
    v6 = (__m128i *)this[39];
    v7 = *((_DWORD *)this + 84);
    v8 = *((_DWORD *)this + 82);
    v10 = _mm_srli_si128(v6[2], 8).m128i_u64[0];
    v11 = _mm_cvtsi32_si128(v6[3].m128i_u32[0]);
    v32 = v6[2];
    v9 = v32.m128i_i32[0];
    v12 = v7 - v8;
    *(_QWORD *)&v13 = *(_OWORD *)&_mm_cvtepi32_pd(v11);
    v14 = _mm_cvtsi32_si128((int)v10 - v32.m128i_i32[0]);
    v15 = 0;
    if ( v12 >= 0 )
      v15 = v12;
    v16 = _mm_cvtepi32_pd(v14).m128d_f64[0];
    v17 = (double)v5 * v16 / ((double)v15 * v13);
    if ( (*((_DWORD *)this + 87) & 0x100000) != 0 )
    {
      if ( *((_BYTE *)this + 346) )
        goto LABEL_15;
      v29 = 0LL;
      LODWORD(v30) = (int)(v16 / v17);
      LODWORD(v31) = (int)((double)(HIDWORD(v10) - v32.m128i_i32[1]) / v17);
      IntersectRectT<MilPointAndSizeL>(v28, &v29, v28);
    }
    v18 = *((_DWORD *)this + 83) - v32.m128i_i32[1];
    v19 = this[37];
    v20 = (double)(v8 - v9) + (double)v28[0] / v17;
    *(float *)&v29 = v20;
    *((float *)&v29 + 1) = (double)v18 + (double)v28[1] / v17;
    v21 = (double)v28[2] / v17;
    v30 = v21 + v20;
    v31 = (float)((double)v28[3] / v17) + *((float *)&v29 + 1);
    RectangleGeometry = CRectResourceProxy::Update(v19, (const struct MilRectF *)&v29);
    if ( RectangleGeometry < 0 )
    {
      v23 = 465LL;
    }
    else
    {
      RectangleGeometry = ResourceHelper::CreateRectangleGeometry(v28[0], v28[1], v28[2], v28[3], this + 36);
      if ( RectangleGeometry >= 0 )
      {
        *((_BYTE *)this + 346) = 1;
        goto LABEL_15;
      }
      v23 = 467LL;
    }
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v23,
    (unsigned int)"clientcore\\windows\\dwm\\udwm\\desktopthumbnail.cpp",
    (const char *)(unsigned int)RectangleGeometry,
    v27);
  return (unsigned int)RectangleGeometry;
}
