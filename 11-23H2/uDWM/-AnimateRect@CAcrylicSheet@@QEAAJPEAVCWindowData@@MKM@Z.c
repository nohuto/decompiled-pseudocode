/*
 * XREFs of ?AnimateRect@CAcrylicSheet@@QEAAJPEAVCWindowData@@MKM@Z @ 0x1800A280C
 * Callers:
 *     ?ApplyWindowResizeStateTransition@CWindowList@@AEAAJXZ @ 0x180108EAC (-ApplyWindowResizeStateTransition@CWindowList@@AEAAJXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x18005C640 (__security_check_cookie.c)
 *     ?AnimateRect@CAcrylicSheet@@QEAAJAEBUtagRECT@@MKUInterpolationParameters@@M@Z @ 0x1800A261C (-AnimateRect@CAcrylicSheet@@QEAAJAEBUtagRECT@@MKUInterpolationParameters@@M@Z.c)
 *     ?GetMarginAdjustedWindowRect@CAcrylicSheet@@CA?AUtagRECT@@PEAVCWindowData@@@Z @ 0x1800A2F50 (-GetMarginAdjustedWindowRect@CAcrylicSheet@@CA-AUtagRECT@@PEAVCWindowData@@@Z.c)
 */

__int64 __fastcall CAcrylicSheet::AnimateRect(CAcrylicSheet *this, struct CWindowData *a2, float a3)
{
  RECT v4; // xmm0
  __int64 v5; // r8
  __m256i v7; // [rsp+38h] [rbp-61h]
  __m256i v8; // [rsp+68h] [rbp-31h] BYREF
  __int64 v9; // [rsp+88h] [rbp-11h]
  struct tagRECT v10; // [rsp+98h] [rbp-1h] BYREF
  RECT v11; // [rsp+A8h] [rbp+Fh] BYREF

  v7.m256i_i32[0] = 0;
  *(_OWORD *)&v7.m256i_u64[1] = 0LL;
  v7.m256i_i64[3] = _xmm;
  v4 = *CAcrylicSheet::GetMarginAdjustedWindowRect(&v10, a2);
  v8 = v7;
  v11 = v4;
  v9 = *(_OWORD *)&_mm_unpackhi_pd((__m128d)_xmm, (__m128d)_xmm);
  return CAcrylicSheet::AnimateRect((__int64)this, &v11, v5, 50, (__int64)&v8);
}
