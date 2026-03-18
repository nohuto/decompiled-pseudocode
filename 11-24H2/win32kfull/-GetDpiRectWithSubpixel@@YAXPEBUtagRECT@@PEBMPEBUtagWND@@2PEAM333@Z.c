/*
 * XREFs of ?GetDpiRectWithSubpixel@@YAXPEBUtagRECT@@PEBMPEBUtagWND@@2PEAM333@Z @ 0x1401A8204
 * Callers:
 *     DpiRectIntersectsRectWithSubpixel @ 0x1400462D4 (DpiRectIntersectsRectWithSubpixel.c)
 *     DpiRectContainsRectWithSubpixel @ 0x1401A8118 (DpiRectContainsRectWithSubpixel.c)
 * Callees:
 *     ?GetTopLevelOrDpiBoundaryWindow@@YAPEBUtagWND@@PEBU1@@Z @ 0x1400453CC (-GetTopLevelOrDpiBoundaryWindow@@YAPEBUtagWND@@PEBU1@@Z.c)
 *     LogicalToPhysicalInPlaceRectWithSubpixel @ 0x14008D6FC (LogicalToPhysicalInPlaceRectWithSubpixel.c)
 *     ?ScaleValueWithSubpixel@@YAXPEAJPEAMM@Z @ 0x14008D8F8 (-ScaleValueWithSubpixel@@YAXPEAJPEAMM@Z.c)
 *     ScaleDpiOffsetWithSubpixel @ 0x1401A83A0 (ScaleDpiOffsetWithSubpixel.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

void __fastcall GetDpiRectWithSubpixel(
        __m128i *a1,
        const float *a2,
        const struct tagWND *a3,
        const struct tagWND *a4,
        float *a5,
        float *a6,
        float *a7,
        float *a8)
{
  __m128i v8; // xmm1
  LONG v11; // edx
  int v13; // ecx
  int v14; // r8d
  int v15; // edx
  __int64 v16; // rdx
  __int64 v17; // r8
  const struct tagWND *TopLevelOrDpiBoundaryWindow; // rax
  float v19; // xmm1_4
  float *v20; // r10
  int v21; // eax
  int v22; // ecx
  int v23; // eax
  float v24; // xmm2_4
  __int64 v25; // r10
  int v26[4]; // [rsp+20h] [rbp-40h] BYREF
  int v27; // [rsp+30h] [rbp-30h] BYREF
  int v28; // [rsp+34h] [rbp-2Ch]
  float v29[6]; // [rsp+38h] [rbp-28h] BYREF

  v8 = *a1;
  v11 = a1->m128i_i32[2];
  v13 = HIDWORD(a1->m128i_i64[1]) - HIDWORD(a1->m128i_i64[0]);
  v14 = _mm_cvtsi128_si32(v8);
  *(__m128i *)v26 = v8;
  v28 = v13;
  v15 = v11 - v14;
  v27 = v15;
  *(_OWORD *)v29 = 0LL;
  if ( a2 )
    *(_OWORD *)v29 = *(_OWORD *)a2;
  if ( a3 && a4 && a3 != a4 )
  {
    LogicalToPhysicalInPlaceRectWithSubpixel(a4, v26, (__int64)v29);
    TopLevelOrDpiBoundaryWindow = GetTopLevelOrDpiBoundaryWindow(a3, v16, v17);
    if ( TopLevelOrDpiBoundaryWindow )
    {
      v20 = (float *)*((_QWORD *)TopLevelOrDpiBoundaryWindow + 27);
      if ( v20 )
      {
        v21 = (int)v20[12];
        v22 = -(int)v20[13];
        v26[3] -= (int)v20[13];
        v26[1] += v22;
        v23 = -v21;
        v24 = 1.0 / *v20;
        v26[0] += v23;
        v26[2] += v23;
        ScaleValueWithSubpixel(v26, v29, v24);
        ScaleValueWithSubpixel(&v26[1], &v29[1], 1.0 / *(float *)(v25 + 20));
      }
    }
    ScaleDpiOffsetWithSubpixel(&v27, &v29[2], a3, a4);
    v14 = v26[0];
    v13 = v28;
    v15 = v27;
  }
  v19 = (float)v26[1] + v29[1];
  *a5 = (float)v14 + v29[0];
  *a6 = v19;
  *a7 = (float)((float)v15 + *a5) + v29[2];
  *a8 = (float)((float)v13 + *a6) + v29[3];
}
