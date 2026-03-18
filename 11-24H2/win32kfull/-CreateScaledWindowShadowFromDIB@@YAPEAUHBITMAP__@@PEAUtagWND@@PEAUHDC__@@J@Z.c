/*
 * XREFs of ?CreateScaledWindowShadowFromDIB@@YAPEAUHBITMAP__@@PEAUtagWND@@PEAUHDC__@@J@Z @ 0x14026797C
 * Callers:
 *     ?GenerateWindowShadow@@YAPEAUHBITMAP__@@PEAUtagWND@@PEAUHDC__@@@Z @ 0x14009583C (-GenerateWindowShadow@@YAPEAUHBITMAP__@@PEAUtagWND@@PEAUHDC__@@@Z.c)
 * Callees:
 *     GreCreateCompatibleBitmapEx @ 0x1400135CC (GreCreateCompatibleBitmapEx.c)
 *     NtGdiStretchBlt @ 0x1400D0D00 (NtGdiStretchBlt.c)
 */

HBITMAP __fastcall CreateScaledWindowShadowFromDIB(struct tagWND *a1, HDC a2, int a3)
{
  HDC DCEx; // rax
  HDC v7; // rbx
  __int64 v8; // rcx
  __m128i v9; // xmm1
  int v10; // r12d
  int v11; // r13d
  HBITMAP CompatibleBitmap; // rsi
  __int64 CompatibleDC; // rax
  HDC v14; // rbp
  __int64 v15; // rdi
  int v16; // ebx

  DCEx = (HDC)_GetDCEx(a1, 0LL, 3LL);
  v7 = DCEx;
  if ( !DCEx )
    return 0LL;
  v8 = *((_QWORD *)a1 + 5);
  v9 = *(__m128i *)(v8 + 88);
  v10 = *(_QWORD *)(v8 + 96) - v9.m128i_i32[0] + 5;
  v11 = _mm_cvtsi128_si32(_mm_srli_si128(v9, 12)) - v9.m128i_i32[1] + 5;
  CompatibleBitmap = GreCreateCompatibleBitmapEx(DCEx, v10, v11, 0, 0LL, 0LL);
  _ReleaseDC(v7);
  if ( !CompatibleBitmap )
    return 0LL;
  CompatibleDC = GreCreateCompatibleDC(a2);
  v14 = (HDC)CompatibleDC;
  if ( !CompatibleDC
    || (v15 = GreSelectBitmap(CompatibleDC, CompatibleBitmap),
        v16 = NtGdiStretchBlt(v14, 0, 0, v10, v11, a2, 0, 0, a3 * v10, a3 * v11, 0xCC0020u, 0),
        GreSelectBitmap(v14, v15),
        GreDeleteDC(v14),
        !v16) )
  {
    GreDeleteObject(CompatibleBitmap);
    return 0LL;
  }
  return CompatibleBitmap;
}
