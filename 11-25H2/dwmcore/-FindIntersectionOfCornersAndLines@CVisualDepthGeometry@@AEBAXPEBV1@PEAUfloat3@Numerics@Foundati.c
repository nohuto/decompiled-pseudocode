/*
 * XREFs of ?FindIntersectionOfCornersAndLines@CVisualDepthGeometry@@AEBAXPEBV1@PEAUfloat3@Numerics@Foundation@Windows@@PEAH@Z @ 0x18011C524
 * Callers:
 *     ?GetRelativeOrder@CVisualDepthGeometry@@QEBA?AW4RelativeOrder@@AEBV1@@Z @ 0x18011CD6C (-GetRelativeOrder@CVisualDepthGeometry@@QEBA-AW4RelativeOrder@@AEBV1@@Z.c)
 * Callees:
 *     ?PlaneLineIntersection@@YA_NAEBUfloat3@Numerics@Foundation@Windows@@000PEAU1234@@Z @ 0x18011C6AC (-PlaneLineIntersection@@YA_NAEBUfloat3@Numerics@Foundation@Windows@@000PEAU1234@@Z.c)
 *     ?ContainsPoint@CVisualDepthGeometry@@AEBA_NAEBUfloat2@Numerics@Foundation@Windows@@_N@Z @ 0x18020F034 (-ContainsPoint@CVisualDepthGeometry@@AEBA_NAEBUfloat2@Numerics@Foundation@Windows@@_N@Z.c)
 */

void __fastcall CVisualDepthGeometry::FindIntersectionOfCornersAndLines(
        CVisualDepthGeometry *this,
        const struct CVisualDepthGeometry *a2,
        struct Windows::Foundation::Numerics::float3 *a3,
        int *a4)
{
  float *v4; // rbx
  const struct Windows::Foundation::Numerics::float3 *v5; // r10
  const struct Windows::Foundation::Numerics::float3 *v6; // r11
  int v7; // esi
  __int64 v12; // r14
  __int64 v13; // rax
  float v14; // xmm1_4
  float v15; // xmm0_4
  float *v16; // r8
  __m128 v17; // xmm6
  float v18; // xmm8_4
  float v19; // xmm4_4
  bool v20; // al
  __m128 v21; // xmm5
  __int64 v22; // rdx
  __int64 v23; // rcx
  unsigned __int64 v24; // [rsp+38h] [rbp-29h] BYREF
  float v25; // [rsp+40h] [rbp-21h] BYREF
  float v26; // [rsp+44h] [rbp-1Dh]
  float v27; // [rsp+48h] [rbp-19h]
  unsigned __int64 v28; // [rsp+50h] [rbp-11h] BYREF
  float v29; // [rsp+58h] [rbp-9h]

  v4 = (float *)((char *)this + 44);
  v5 = (const struct CVisualDepthGeometry *)((char *)a2 + 160);
  v6 = (const struct CVisualDepthGeometry *)((char *)a2 + 36);
  v7 = 1;
  v12 = 4LL;
  do
  {
    v13 = v7 % 4;
    v14 = *((float *)this + 3 * v13 + 11) - *v4;
    v25 = *((float *)this + 3 * v13 + 9) - *(v4 - 2);
    v15 = *((float *)this + 3 * v13 + 10) - *(v4 - 1);
    v27 = v14;
    v26 = v15;
    if ( PlaneLineIntersection(
           v6,
           v5,
           (const struct Windows::Foundation::Numerics::float3 *)(v4 - 2),
           (const struct Windows::Foundation::Numerics::float3 *)&v25,
           (struct Windows::Foundation::Numerics::float3 *)&v28) )
    {
      v17 = (__m128)(unsigned int)v28;
      v18 = v29;
      v19 = (float)((float)((float)((float)(*((float *)&v28 + 1) - *(v4 - 1)) * v26)
                          + (float)((float)(*(float *)&v28 - *v16) * v25))
                  + (float)((float)(v29 - *v4) * v27))
          / (float)((float)((float)(v26 * v26) + (float)(v25 * v25)) + (float)(v27 * v27));
      if ( v19 >= 0.0 && v19 <= 1.0 )
      {
        v24 = v28;
        v20 = CVisualDepthGeometry::ContainsPoint(a2, (const struct Windows::Foundation::Numerics::float2 *)&v24, 1);
        v5 = (const struct CVisualDepthGeometry *)((char *)a2 + 160);
        v6 = (const struct CVisualDepthGeometry *)((char *)a2 + 36);
        if ( v20 )
        {
          v22 = *a4;
          v28 = _mm_unpacklo_ps(v17, v21).m128_u64[0];
          v23 = 3 * v22;
          *(_QWORD *)((char *)a3 + 4 * v23) = v28;
          *((float *)a3 + v23 + 2) = v18;
          *a4 = v22 + 1;
        }
      }
    }
    ++v7;
    v4 += 3;
    --v12;
  }
  while ( v12 );
}
