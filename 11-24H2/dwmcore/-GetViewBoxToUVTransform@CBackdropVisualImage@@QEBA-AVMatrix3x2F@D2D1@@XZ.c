/*
 * XREFs of ?GetViewBoxToUVTransform@CBackdropVisualImage@@QEBA?AVMatrix3x2F@D2D1@@XZ @ 0x1800B94F8
 * Callers:
 *     ?LogEtwEvent@CBackdropVisualImage@@QEBAXVDbgString@DwmDbg@@0@Z @ 0x18000A7D0 (-LogEtwEvent@CBackdropVisualImage@@QEBAXVDbgString@DwmDbg@@0@Z.c)
 * Callees:
 *     ?SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z @ 0x1800B95C0 (-SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 */

void __fastcall CBackdropVisualImage::GetViewBoxToUVTransform(__int64 a1, D2D1::Matrix3x2F *a2)
{
  int v2; // xmm2_4
  int v3; // xmm1_4
  float v4; // xmm3_4
  float v5; // xmm2_4
  _DWORD v6[6]; // [rsp+20h] [rbp-48h] BYREF
  __int128 v7; // [rsp+38h] [rbp-30h] BYREF
  int v8; // [rsp+48h] [rbp-20h]
  int v9; // [rsp+4Ch] [rbp-1Ch]

  v2 = *(_DWORD *)(a1 + 96) ^ _xmm;
  v3 = *(_DWORD *)(a1 + 100);
  v4 = *(float *)(a1 + 2152) / *(float *)(a1 + 120);
  v6[1] = 0;
  v6[2] = 0;
  v8 = v2;
  v5 = *(float *)(a1 + 2156) / *(float *)(a1 + 124);
  v9 = v3 ^ _xmm;
  v7 = _xmm;
  *(float *)&v6[3] = v5;
  *(float *)v6 = v4;
  *(float *)&v6[4] = 0.0 - (float)(v4 * 0.0);
  *(float *)&v6[5] = 0.0 - (float)(v5 * 0.0);
  D2D1::Matrix3x2F::SetProduct(a2, (const struct D2D1::Matrix3x2F *)&v7, (const struct D2D1::Matrix3x2F *)v6);
}
