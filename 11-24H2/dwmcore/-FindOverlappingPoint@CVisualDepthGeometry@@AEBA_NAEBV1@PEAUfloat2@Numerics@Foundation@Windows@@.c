/*
 * XREFs of ?FindOverlappingPoint@CVisualDepthGeometry@@AEBA_NAEBV1@PEAUfloat2@Numerics@Foundation@Windows@@@Z @ 0x180164F1C
 * Callers:
 *     ?GetRelativeOrder@CVisualDepthGeometry@@QEBA?AW4RelativeOrder@@AEBV1@@Z @ 0x1801653CC (-GetRelativeOrder@CVisualDepthGeometry@@QEBA-AW4RelativeOrder@@AEBV1@@Z.c)
 * Callees:
 *     ?IsPointOnPolygonBorder@CVisualDepthGeometry@@AEBA_NAEBUfloat2@Numerics@Foundation@Windows@@@Z @ 0x180163F40 (-IsPointOnPolygonBorder@CVisualDepthGeometry@@AEBA_NAEBUfloat2@Numerics@Foundation@Windows@@@Z.c)
 *     ?Intersects@CLineSegment@@QEBA_NAEBV1@PEAUfloat2@Numerics@Foundation@Windows@@@Z @ 0x180164E00 (-Intersects@CLineSegment@@QEBA_NAEBV1@PEAUfloat2@Numerics@Foundation@Windows@@@Z.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 */

bool __fastcall CVisualDepthGeometry::FindOverlappingPoint(
        CVisualDepthGeometry *this,
        const struct CVisualDepthGeometry *a2,
        struct Windows::Foundation::Numerics::float2 *a3)
{
  __m128 v3; // xmm2
  __m128 v5; // xmm3
  __m128 v7; // xmm6
  __m128 v8; // xmm7
  float *v9; // rdx
  char v10; // cl
  char v11; // al
  __int64 i; // r8
  float v13; // xmm1_4
  float *v14; // rbx
  char v15; // cl
  char v16; // al
  float *v17; // rdx
  __int64 j; // r8
  float v19; // xmm1_4
  CLineSegment *v20; // r15
  __int64 v21; // r14
  const struct CLineSegment *v22; // r13
  float *v23; // rsi
  __int64 v24; // r12
  const struct CLineSegment *v25; // rdx
  __int64 v26; // rdi
  __int64 v27; // rdx
  int v28; // r9d
  __int64 v29; // r10
  _QWORD *v30; // r11
  float v31; // xmm2_4
  char v32; // cl
  float v33; // xmm3_4
  char v34; // al
  __int64 v35; // r8
  float *v36; // rdx
  float v37; // xmm1_4
  bool result; // al
  float v39; // xmm2_4
  char v40; // cl
  float v41; // xmm3_4
  char v42; // al
  float *v43; // rdx
  __int64 k; // r8
  float v45; // xmm1_4
  CVisualDepthGeometry *v46; // r13
  __int64 m; // rax
  __int32 v48; // [rsp+20h] [rbp-E0h] BYREF
  __int32 v49; // [rsp+24h] [rbp-DCh]
  __int64 v50; // [rsp+28h] [rbp-D8h] BYREF
  float *v51; // [rsp+30h] [rbp-D0h]
  CVisualDepthGeometry *v52; // [rsp+38h] [rbp-C8h]
  CVisualDepthGeometry *v53; // [rsp+40h] [rbp-C0h]
  struct Windows::Foundation::Numerics::float2 *v54; // [rsp+48h] [rbp-B8h]
  _DWORD v55[48]; // [rsp+50h] [rbp-B0h]

  v3 = (__m128)*((unsigned int *)a2 + 37);
  v5 = (__m128)*((unsigned int *)a2 + 38);
  v7 = 0LL;
  v8 = 0LL;
  v52 = a2;
  v53 = this;
  v9 = (float *)((char *)this + 88);
  v10 = 1;
  v54 = a3;
  v51 = v9;
  v48 = 0;
  v11 = 1;
  v49 = 0;
  for ( i = 0LL; i < 4; ++i )
  {
    if ( !v10 && !v11 )
      goto LABEL_11;
    v13 = (float)((float)(v5.m128_f32[0] - *v9) * v9[1]) - (float)((float)(v3.m128_f32[0] - *(v9 - 1)) * v9[2]);
    if ( v10 && v13 < 0.0 )
      v10 = 0;
    if ( v11 && v13 > 0.0 )
      v11 = 0;
    if ( COERCE_FLOAT(LODWORD(v13) & _xmm) < 0.0000011920929 )
      goto LABEL_11;
    v9 += 4;
  }
  if ( v11 || v10 )
  {
    v14 = (float *)((char *)a2 + 88);
  }
  else
  {
LABEL_11:
    v3 = (__m128)*((unsigned int *)this + 37);
    v14 = (float *)((char *)a2 + 88);
    v5 = (__m128)*((unsigned int *)this + 38);
    v15 = 1;
    v16 = 1;
    v17 = (float *)((char *)a2 + 88);
    for ( j = 0LL; j < 4; ++j )
    {
      if ( !v15 && !v16 )
        goto LABEL_24;
      v19 = (float)((float)(v5.m128_f32[0] - *v17) * v17[1]) - (float)((float)(v3.m128_f32[0] - *(v17 - 1)) * v17[2]);
      if ( v15 && v19 < 0.0 )
        v15 = 0;
      if ( v16 && v19 > 0.0 )
        v16 = 0;
      if ( COERCE_FLOAT(LODWORD(v19) & _xmm) < 0.0000011920929 )
        goto LABEL_24;
      v17 += 4;
    }
    if ( !v16 && !v15 )
      goto LABEL_24;
  }
  v49 = v5.m128_i32[0];
  v48 = v3.m128_i32[0];
  v8 = v5;
  v7 = v3;
  if ( !CVisualDepthGeometry::IsPointOnPolygonBorder(this, (const struct Windows::Foundation::Numerics::float2 *)&v48)
    && !CVisualDepthGeometry::IsPointOnPolygonBorder(a2, (const struct Windows::Foundation::Numerics::float2 *)&v48) )
  {
    goto LABEL_44;
  }
LABEL_24:
  v20 = (CVisualDepthGeometry *)((char *)this + 84);
  v21 = a2 - this;
  v22 = (const struct CVisualDepthGeometry *)((char *)a2 + 84);
  v23 = (float *)((char *)this + 40);
  v24 = 4LL;
  do
  {
    v25 = v22;
    v26 = 4LL;
    do
    {
      if ( CLineSegment::Intersects(v20, v25, (struct Windows::Foundation::Numerics::float2 *)&v50) )
      {
        ++v28;
        ++v29;
        *v30 = v50;
      }
      v25 = (const struct CLineSegment *)(v27 + 16);
      --v26;
    }
    while ( v26 );
    v31 = *(v23 - 1);
    v32 = 1;
    v33 = *v23;
    v34 = 1;
    v35 = 0LL;
    v36 = v14;
    while ( v35 < 4 )
    {
      if ( !v32 && !v34 )
        goto LABEL_49;
      v37 = (float)((float)(v33 - *v36) * v36[1]) - (float)((float)(v31 - *(v36 - 1)) * v36[2]);
      if ( v32 && v37 < 0.0 )
        v32 = 0;
      if ( v34 )
      {
        if ( v37 > 0.0 )
          v34 = 0;
      }
      ++v35;
      v36 += 4;
    }
    if ( v34 || v32 )
    {
      ++v28;
      *(float *)&v55[2 * v29] = v31;
      *(float *)&v55[2 * v29++ + 1] = v33;
    }
LABEL_49:
    v39 = *(float *)((char *)v23 + v21 - 4);
    v40 = 1;
    v41 = *(float *)((char *)v23 + v21);
    v42 = 1;
    v43 = v51;
    for ( k = 0LL; k < 4; ++k )
    {
      if ( !v40 && !v42 )
        goto LABEL_61;
      v45 = (float)((float)(v41 - *v43) * v43[1]) - (float)((float)(v39 - *(v43 - 1)) * v43[2]);
      if ( v40 && v45 < 0.0 )
        v40 = 0;
      if ( v42 && v45 > 0.0 )
        v42 = 0;
      v43 += 4;
    }
    if ( v42 || v40 )
    {
      ++v28;
      *(float *)&v55[2 * v29] = v39;
      *(float *)&v55[2 * v29 + 1] = v41;
    }
LABEL_61:
    v20 = (CLineSegment *)((char *)v20 + 16);
    v23 += 3;
    --v24;
  }
  while ( v24 );
  v46 = v52;
  if ( v28 > 0 )
  {
    for ( m = 0LL; m < v28; v8.m128_f32[0] = v8.m128_f32[0] + *(float *)&v55[2 * m++ + 1] )
      v7.m128_f32[0] = v7.m128_f32[0] + *(float *)&v55[2 * m];
    v7.m128_f32[0] = v7.m128_f32[0] * (float)(1.0 / (float)v28);
    v8.m128_f32[0] = v8.m128_f32[0] * (float)(1.0 / (float)v28);
    v48 = v7.m128_i32[0];
    v49 = v8.m128_i32[0];
LABEL_74:
    if ( CVisualDepthGeometry::IsPointOnPolygonBorder(v53, (const struct Windows::Foundation::Numerics::float2 *)&v48)
      || CVisualDepthGeometry::IsPointOnPolygonBorder(v46, (const struct Windows::Foundation::Numerics::float2 *)&v48) )
    {
      return 0;
    }
LABEL_44:
    result = 1;
    *(_QWORD *)v54 = _mm_unpacklo_ps(v7, v8).m128_u64[0];
    return result;
  }
  if ( v28 )
    goto LABEL_74;
  return 0;
}
