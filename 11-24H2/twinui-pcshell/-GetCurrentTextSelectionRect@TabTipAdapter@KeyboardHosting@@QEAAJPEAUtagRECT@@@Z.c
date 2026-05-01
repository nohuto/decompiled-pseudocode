/*
 * XREFs of ?GetCurrentTextSelectionRect@TabTipAdapter@KeyboardHosting@@QEAAJPEAUtagRECT@@@Z @ 0x1802BFAA8
 * Callers:
 *     ?ShowView@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@PEBUtagRECT@@PEBUViewOptions@@@Z @ 0x180080818 (-ShowView@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@PEBUtagRECT@@PEBUViewOptions@@@Z.c)
 *     ?FireInputPaneShowingEvent@TouchKeyboardExperienceManager@@AEAAJIUtagRECT@@AEBU2@@Z @ 0x180294C34 (-FireInputPaneShowingEvent@TouchKeyboardExperienceManager@@AEAAJIUtagRECT@@AEBU2@@Z.c)
 *     ?GetCurrentTextSelectionRect@TouchKeyboardExperienceManager@@UEAAJPEAUtagRECT@@@Z @ 0x180471D10 (-GetCurrentTextSelectionRect@TouchKeyboardExperienceManager@@UEAAJPEAUtagRECT@@@Z.c)
 * Callees:
 *     ?IsRectNull@KeyboardHosting@@YA_NAEBURect@Foundation@Windows@@@Z @ 0x18013D890 (-IsRectNull@KeyboardHosting@@YA_NAEBURect@Foundation@Windows@@@Z.c)
 */

__int64 __fastcall KeyboardHosting::TabTipAdapter::GetCurrentTextSelectionRect(
        KeyboardHosting::TabTipAdapter *this,
        struct tagRECT *a2)
{
  bool IsRectNull; // al
  __int64 v3; // r9
  float v4; // xmm2_4
  float v5; // xmm3_4
  float v6; // xmm0_4
  float v7; // xmm1_4
  _DWORD *v8; // rdx

  IsRectNull = KeyboardHosting::IsRectNull(
                 (KeyboardHosting::TabTipAdapter *)((char *)this + 472),
                 (const struct Windows::Foundation::Rect *)a2);
  v4 = *(float *)(v3 + 16 * !IsRectNull + 456);
  v5 = *(float *)(v3 + 16 * !IsRectNull + 460);
  v6 = *(float *)(v3 + 16 * !IsRectNull + 464);
  v7 = *(float *)(v3 + 16 * !IsRectNull + 468);
  *v8 = (int)v4;
  v8[1] = (int)v5;
  v8[2] = (int)(float)(v4 + v6);
  v8[3] = (int)(float)(v5 + v7);
  return 0LL;
}
