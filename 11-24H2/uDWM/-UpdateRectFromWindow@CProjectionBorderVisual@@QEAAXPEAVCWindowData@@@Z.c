/*
 * XREFs of ?UpdateRectFromWindow@CProjectionBorderVisual@@QEAAXPEAVCWindowData@@@Z @ 0x1800D02C8
 * Callers:
 *     ?OnPositionChange@CWindowList@@QEAAXPEAVCWindowData@@_N@Z @ 0x18001AA30 (-OnPositionChange@CWindowList@@QEAAXPEAVCWindowData@@_N@Z.c)
 *     ?ShowProjectionBorder@CWindowList@@QEAAJPEAVCWindowData@@_N@Z @ 0x18001C0D4 (-ShowProjectionBorder@CWindowList@@QEAAJPEAVCWindowData@@_N@Z.c)
 *     ?UpdateMarginsAndStyle@CTopLevelWindow@@AEAAJ_N00PEA_N11@Z @ 0x180029060 (-UpdateMarginsAndStyle@CTopLevelWindow@@AEAAJ_N00PEA_N11@Z.c)
 *     ?UpdateMargins@CTopLevelWindow@@AEAA_NXZ @ 0x18002B290 (-UpdateMargins@CTopLevelWindow@@AEAA_NXZ.c)
 *     ?OnWindowSizeUpdated@CProjectionBorderManager@@UEAAJPEAVCWindowData@@@Z @ 0x1800650D0 (-OnWindowSizeUpdated@CProjectionBorderManager@@UEAAJPEAVCWindowData@@@Z.c)
 *     ?OnWindowSizeUpdated@CCaptureManager@@UEAAJPEAVCWindowData@@@Z @ 0x1800AF6F0 (-OnWindowSizeUpdated@CCaptureManager@@UEAAJPEAVCWindowData@@@Z.c)
 * Callees:
 *     ?GetBorderRect@CTopLevelWindow@@QEBA?AUtagRECT@@_N@Z @ 0x18004073C (-GetBorderRect@CTopLevelWindow@@QEBA-AUtagRECT@@_N@Z.c)
 *     __security_check_cookie @ 0x18009B5A0 (__security_check_cookie.c)
 *     ?UpdateRect@CSolidRectangleVisual@@QEAAXAEBUtagRECT@@@Z @ 0x1800D0264 (-UpdateRect@CSolidRectangleVisual@@QEAAXAEBUtagRECT@@@Z.c)
 */

void __fastcall CProjectionBorderVisual::UpdateRectFromWindow(const RECT *this, struct CWindowData *a2)
{
  __m128i v2; // xmm1
  CTopLevelWindow *v5; // rcx
  unsigned __int64 v6; // xmm0_8
  struct tagRECT v7; // [rsp+20h] [rbp-38h] BYREF
  struct tagRECT v8; // [rsp+30h] [rbp-28h] BYREF

  v2 = *((__m128i *)a2 + 3);
  v5 = (CTopLevelWindow *)*((_QWORD *)a2 + 55);
  v8 = (struct tagRECT)v2;
  if ( v5 )
  {
    v2 = *(__m128i *)CTopLevelWindow::GetBorderRect(v5, &v7, 1);
    v8 = (struct tagRECT)v2;
  }
  v6 = _mm_srli_si128(v2, 8).m128i_u64[0];
  if ( (int)v6 < v2.m128i_i32[0] || SHIDWORD(v6) < v2.m128i_i32[1] )
    v8 = (struct tagRECT)*((_OWORD *)a2 + 3);
  CSolidRectangleVisual::UpdateRect(this, &v8);
}
