/*
 * XREFs of ?AnimateRect@CAcrylicSheet@@QEAAJPEAVCWindowData@@MKM@Z @ 0x1800A2144
 * Callers:
 *     ?ApplyWindowResizeStateTransition@CWindowList@@AEAAJXZ @ 0x1800EE11C (-ApplyWindowResizeStateTransition@CWindowList@@AEAAJXZ.c)
 * Callees:
 *     ?GetMarginAdjustedWindowRect@CAcrylicSheet@@CA?AUtagRECT@@PEAVCWindowData@@@Z @ 0x180040558 (-GetMarginAdjustedWindowRect@CAcrylicSheet@@CA-AUtagRECT@@PEAVCWindowData@@@Z.c)
 *     ?AnimateRect@CAcrylicSheet@@QEAAJAEBUtagRECT@@MKUInterpolationParameters@@M@Z @ 0x180068CA0 (-AnimateRect@CAcrylicSheet@@QEAAJAEBUtagRECT@@MKUInterpolationParameters@@M@Z.c)
 *     __security_check_cookie @ 0x18009B5A0 (__security_check_cookie.c)
 */

__int64 __fastcall CAcrylicSheet::AnimateRect(CAcrylicSheet *this, struct CWindowData *a2, float a3)
{
  RECT v4; // xmm1
  __int64 v5; // r8
  __m256i v7; // [rsp+30h] [rbp-41h] BYREF
  __m256i v8; // [rsp+60h] [rbp-11h] BYREF
  __int64 v9; // [rsp+80h] [rbp+Fh]
  struct tagRECT v10; // [rsp+90h] [rbp+1Fh] BYREF
  RECT v11; // [rsp+A0h] [rbp+2Fh] BYREF

  memset(&v7, 0, 24);
  v7.m256i_i64[3] = _xmm;
  v4 = *CAcrylicSheet::GetMarginAdjustedWindowRect(&v10, a2);
  v8 = v7;
  v11 = v4;
  v9 = *(_OWORD *)&_mm_unpackhi_pd((__m128d)_xmm, (__m128d)_xmm);
  return CAcrylicSheet::AnimateRect((__int64)this, &v11, v5, 50, (__int64)&v8);
}
