/*
 * XREFs of ?DoesPolygonHaveEdgeThatContainsAllPoints@CVisualDepthGeometry@@AEBA_NPEBUfloat3@Numerics@Foundation@Windows@@H@Z @ 0x1802AC840
 * Callers:
 *     ?AreVisualsAbutting@CVisualDepthGeometry@@AEBA_NAEBV1@PEBUfloat3@Numerics@Foundation@Windows@@H@Z @ 0x1802AC7E0 (-AreVisualsAbutting@CVisualDepthGeometry@@AEBA_NAEBV1@PEBUfloat3@Numerics@Foundation@Windows@@H@.c)
 * Callees:
 *     ?DistSquaredToLine@@YAMAEBUfloat2@Numerics@Foundation@Windows@@00@Z @ 0x180163F9C (-DistSquaredToLine@@YAMAEBUfloat2@Numerics@Foundation@Windows@@00@Z.c)
 */

char __fastcall CVisualDepthGeometry::DoesPolygonHaveEdgeThatContainsAllPoints(
        CVisualDepthGeometry *this,
        const struct Windows::Foundation::Numerics::float3 *a2,
        int a3)
{
  __int64 v5; // r11
  int v6; // r9d
  const struct Windows::Foundation::Numerics::float3 *v7; // r10
  const struct Windows::Foundation::Numerics::float2 *v8; // rdx
  __int64 v9; // rax
  const struct Windows::Foundation::Numerics::float2 *v10; // r8
  int v11; // xmm1_4
  __int64 v12; // rax
  int v13; // r9d
  __int64 v14; // r10
  float v15; // xmm0_4
  float v16; // xmm5_4
  int v18; // [rsp+48h] [rbp+20h] BYREF
  int v19; // [rsp+4Ch] [rbp+24h]

  v5 = a3;
  v6 = 0;
LABEL_2:
  if ( v6 >= 4 )
    return 0;
  v7 = a2;
  v8 = (CVisualDepthGeometry *)((char *)this + 16 * v6 + 84);
  v9 = 0LL;
  v10 = (const struct Windows::Foundation::Numerics::float2 *)((char *)v8 + 8);
  while ( v9 < v5 )
  {
    v11 = *((_DWORD *)v7 + 1);
    v18 = *(_DWORD *)v7;
    v19 = v11;
    v15 = DistSquaredToLine((const struct Windows::Foundation::Numerics::float2 *)&v18, v8, v10);
    if ( v16 <= COERCE_FLOAT(LODWORD(v15) & _xmm) )
    {
      v6 = v13 + 1;
      goto LABEL_2;
    }
    v9 = v12 + 1;
    v7 = (const struct Windows::Foundation::Numerics::float3 *)(v14 + 12);
  }
  return 1;
}
