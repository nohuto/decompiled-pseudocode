/*
 * XREFs of ?GetBorderMargins@CTopLevelWindow@@QEAAXPEAU_MARGINS@@@Z @ 0x1800E5740
 * Callers:
 *     ?UpdateRectFromWindow@CProjectionBorderVisual@@QEAAXPEAVCWindowData@@@Z @ 0x1800D5870 (-UpdateRectFromWindow@CProjectionBorderVisual@@QEAAXPEAVCWindowData@@@Z.c)
 * Callees:
 *     ?_GetRightFrameThickness@CTopLevelWindow@@AEAAHXZ @ 0x1800E6B98 (-_GetRightFrameThickness@CTopLevelWindow@@AEAAHXZ.c)
 */

void __fastcall CTopLevelWindow::GetBorderMargins(CTopLevelWindow *this, struct _MARGINS *a2)
{
  bool v2; // cf
  __m128i v3; // xmm6
  int RightFrameThickness; // eax
  int v5; // edx
  __int64 v6; // r8
  char v7; // r9
  _DWORD *v8; // r10
  int v9; // r11d
  int v10; // edx

  v2 = (*((_BYTE *)this + 248) & 4) != 0;
  a2->cxLeftWidth = *((_DWORD *)this + 157);
  v3 = *(__m128i *)((char *)this + (v2 ? 0x10 : 0) + 660);
  a2->cyTopHeight = _mm_srli_si128(v3, 8).m128i_u32[0];
  a2->cyBottomHeight = *((_DWORD *)this + 160);
  RightFrameThickness = CTopLevelWindow::_GetRightFrameThickness(this);
  if ( v3.m128i_i32[1] > RightFrameThickness )
    RightFrameThickness = v3.m128i_i32[1];
  v8[1] = RightFrameThickness;
  if ( v7 )
  {
    v8[1] = RightFrameThickness + 1;
    v10 = v5 + 1;
  }
  else
  {
    v10 = v5 - HIDWORD(v6);
    v8[2] = v6 + 1;
    *v8 = v9 - v3.m128i_i32[0];
  }
  v8[3] = v10;
}
