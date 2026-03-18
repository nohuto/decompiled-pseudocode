/*
 * XREFs of ?PlaneLineIntersection@@YA_NAEBUfloat3@Numerics@Foundation@Windows@@000PEAU1234@@Z @ 0x18011C6AC
 * Callers:
 *     ?FindIntersectionOfCornersAndLines@CVisualDepthGeometry@@AEBAXPEBV1@PEAUfloat3@Numerics@Foundation@Windows@@PEAH@Z @ 0x18011C524 (-FindIntersectionOfCornersAndLines@CVisualDepthGeometry@@AEBAXPEBV1@PEAUfloat3@Numerics@Foundati.c)
 *     ?GetRelativeOrder@CVisualDepthGeometry@@QEBA?AW4RelativeOrder@@AEBV1@@Z @ 0x18011CD6C (-GetRelativeOrder@CVisualDepthGeometry@@QEBA-AW4RelativeOrder@@AEBV1@@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall PlaneLineIntersection(
        const struct Windows::Foundation::Numerics::float3 *a1,
        const struct Windows::Foundation::Numerics::float3 *a2,
        const struct Windows::Foundation::Numerics::float3 *a3,
        const struct Windows::Foundation::Numerics::float3 *a4,
        struct Windows::Foundation::Numerics::float3 *a5)
{
  float v5; // xmm7_4
  float v6; // xmm8_4
  float v7; // xmm5_4
  float v9; // xmm2_4
  float v10; // xmm4_4
  float v11; // xmm3_4

  v5 = *((float *)a4 + 1);
  v6 = *((float *)a4 + 2);
  v7 = (float)((float)(*(float *)a4 * *(float *)a2) + (float)(*((float *)a2 + 1) * v5))
     + (float)(*((float *)a2 + 2) * v6);
  if ( COERCE_FLOAT(LODWORD(v7) & _xmm) < 0.0000011920929 )
    return 0;
  v9 = *((float *)a3 + 1);
  v10 = *((float *)a3 + 2);
  v11 = (float)((float)((float)((float)(*((float *)a1 + 1) - v9) * *((float *)a2 + 1))
                      + (float)((float)(*(float *)a1 - *(float *)a3) * *(float *)a2))
              + (float)((float)(*((float *)a1 + 2) - v10) * *((float *)a2 + 2)))
      / v7;
  *(float *)a5 = (float)(*(float *)a4 * v11) + *(float *)a3;
  *((float *)a5 + 1) = (float)(v5 * v11) + v9;
  *((float *)a5 + 2) = (float)(v6 * v11) + v10;
  return 1;
}
