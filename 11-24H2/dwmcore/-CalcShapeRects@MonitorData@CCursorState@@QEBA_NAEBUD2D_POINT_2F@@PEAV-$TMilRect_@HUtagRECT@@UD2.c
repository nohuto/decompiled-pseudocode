/*
 * XREFs of ?CalcShapeRects@MonitorData@CCursorState@@QEBA_NAEBUD2D_POINT_2F@@PEAV?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@1@Z @ 0x1802B21C4
 * Callers:
 *     ?SetPosition@CCursorState@@UEAAXMM@Z @ 0x1802B41A0 (-SetPosition@CCursorState@@UEAAXMM@Z.c)
 *     ?UpdateHardwareCursor@CCursorState@@AEAA_NPEAVMonitorData@1@_N@Z @ 0x1802B49CC (-UpdateHardwareCursor@CCursorState@@AEAA_NPEAVMonitorData@1@_N@Z.c)
 * Callees:
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z @ 0x1800D1630 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z.c)
 *     ?IntersectUnsafe@?$TMilRect@HUtagRECT@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x1801C3440 (-IntersectUnsafe@-$TMilRect@HUtagRECT@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniqueness@@@@QEAA_.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 */

char __fastcall CCursorState::MonitorData::CalcShapeRects(const __m128i *a1, float *a2, int *a3, int *a4)
{
  __m128i v4; // xmm0
  FLOAT v7; // xmm1_4
  __int32 v8; // ecx
  int v9; // ecx
  __int32 v10; // r8d
  int v11; // r8d
  _DWORD *v12; // r11
  __int32 v14; // [rsp+20h] [rbp-20h]
  float v15; // [rsp+20h] [rbp-20h]
  __m128i v16; // [rsp+28h] [rbp-18h] BYREF

  v4 = _mm_loadu_si128(a1 + 6);
  v16 = v4;
  v7 = *(float *)&v4.m128i_i32[2] + *a2;
  *(float *)v16.m128i_i32 = *(float *)v4.m128i_i32 + *a2;
  *(float *)v4.m128i_i32 = *(float *)&v4.m128i_i32[1] + a2[1];
  *(FLOAT *)&v16.m128i_i32[2] = v7;
  v16.m128i_i32[1] = v4.m128i_i32[0];
  *(float *)&v16.m128i_i32[3] = *(float *)&v16.m128i_i32[3] + a2[1];
  CMILMatrix::Transform2DBoundsHelper<0>(
    (__int64)&a1->m128i_i64[1] + 4,
    (const struct D2D_RECT_F *)&v16,
    (float *)v16.m128i_i32);
  *(float *)v4.m128i_i32 = *(float *)v16.m128i_i32 + 6291456.25;
  v8 = v4.m128i_i32[0];
  *(double *)v4.m128i_i64 = *(float *)&v16.m128i_i32[1];
  v9 = v8 << 10 >> 11;
  *a3 = v9;
  *(float *)v4.m128i_i32 = *(double *)v4.m128i_i64 + 6291456.25;
  v10 = v4.m128i_i32[0];
  *(float *)v4.m128i_i32 = *(float *)&v16.m128i_i32[2] - *(float *)v16.m128i_i32;
  v11 = v10 << 10 >> 11;
  a3[1] = v11;
  *(float *)v4.m128i_i32 = *(float *)v4.m128i_i32 + 6291456.25;
  v14 = v4.m128i_i32[0];
  *(float *)v4.m128i_i32 = *(float *)&v16.m128i_i32[3] - *(float *)&v16.m128i_i32[1];
  a3[2] = v9 + (v14 << 10 >> 11);
  v15 = *(float *)v4.m128i_i32 + 6291456.25;
  a3[3] = v11 + ((int)(LODWORD(v15) << 10) >> 11);
  *a4 = v12[20];
  a4[1] = v12[21];
  a4[2] = v12[22];
  a4[3] = v12[23];
  return TMilRect<int,tagRECT,D2D_POINTANDSIZE_L,RectUniqueness::_CMilRectL_>::IntersectUnsafe(a4, a3);
}
