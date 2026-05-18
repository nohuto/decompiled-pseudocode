/*
 * XREFs of sub_1800CD960 @ 0x1800CD960
 * Callers:
 *     sub_1800CD140 @ 0x1800CD140 (sub_1800CD140.c)
 * Callees:
 *     sub_18000E954 @ 0x18000E954 (sub_18000E954.c)
 *     sub_1800403F0 @ 0x1800403F0 (sub_1800403F0.c)
 */

HRESULT __fastcall sub_1800CD960(
        IDXGIAdapter *pAdapter,
        D3D_DRIVER_TYPE DriverType,
        ID3D11DeviceContext *a3,
        UINT a4,
        D3D_FEATURE_LEVEL *a5,
        UINT a6,
        int a7,
        ID3D11Device **a8,
        D3D_FEATURE_LEVEL *a9,
        ID3D11DeviceContext **a10)
{
  UINT v10; // ebx
  UINT FeatureLevels; // r12d
  const D3D_FEATURE_LEVEL *pFeatureLevels; // r13
  char v15; // r15
  unsigned int v16; // ecx
  HRESULT v17; // r14d
  ID3D11Device *v18; // rax
  ID3D11DeviceContext *v19; // rax
  ID3D11Device *ppDevice[2]; // [rsp+50h] [rbp-10h] BYREF
  ID3D11DeviceContext *ppImmediateContext; // [rsp+B0h] [rbp+50h] BYREF
  D3D_FEATURE_LEVEL pFeatureLevel; // [rsp+B8h] [rbp+58h] BYREF

  ppImmediateContext = a3;
  v10 = a4;
  if ( (a4 & 2) == 0 )
    return D3D11CreateDevice(pAdapter, DriverType, 0LL, a4, a5, a6, 7u, a8, a9, a10);
  FeatureLevels = a6;
  pFeatureLevels = a5;
  while ( 1 )
  {
    v15 = sub_1800403F0((__int64)&byte_1801C3BFC);
    v16 = v10 & 0xFFFFFFFD;
    v10 |= 2u;
    if ( !v15 )
      v10 = v16;
    ppDevice[0] = 0LL;
    pFeatureLevel = 0;
    ppImmediateContext = 0LL;
    sub_18000E954((__int64 *)&ppImmediateContext);
    sub_18000E954((__int64 *)ppDevice);
    v17 = D3D11CreateDevice(
            pAdapter,
            DriverType,
            0LL,
            v10,
            pFeatureLevels,
            FeatureLevels,
            7u,
            ppDevice,
            &pFeatureLevel,
            &ppImmediateContext);
    if ( v17 >= 0 )
      break;
    if ( !v15 )
      goto LABEL_14;
    byte_1801C3BFC = 0;
    sub_18000E954((__int64 *)&ppImmediateContext);
    sub_18000E954((__int64 *)ppDevice);
  }
  if ( a8 )
  {
    v18 = ppDevice[0];
    ppDevice[0] = 0LL;
    *a8 = v18;
  }
  if ( a9 )
    *a9 = pFeatureLevel;
  if ( a10 )
  {
    v19 = ppImmediateContext;
    ppImmediateContext = 0LL;
    *a10 = v19;
  }
LABEL_14:
  sub_18000E954((__int64 *)&ppImmediateContext);
  sub_18000E954((__int64 *)ppDevice);
  return v17;
}
