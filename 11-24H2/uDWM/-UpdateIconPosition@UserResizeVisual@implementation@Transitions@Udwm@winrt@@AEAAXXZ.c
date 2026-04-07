/*
 * XREFs of ?UpdateIconPosition@UserResizeVisual@implementation@Transitions@Udwm@winrt@@AEAAXXZ @ 0x1800EBAEC
 * Callers:
 *     ?Rect@UserResizeVisual@implementation@Transitions@Udwm@winrt@@QEAAXAEBU0Foundation@Windows@5@@Z @ 0x1800EB78C (-Rect@UserResizeVisual@implementation@Transitions@Udwm@winrt@@QEAAXAEBU0Foundation@Windows@5@@Z.c)
 *     ?SetBitmap@UserResizeVisual@implementation@Transitions@Udwm@winrt@@UEAAXPEAVCBitmapSource@@@Z @ 0x1800EB800 (-SetBitmap@UserResizeVisual@implementation@Transitions@Udwm@winrt@@UEAAXPEAVCBitmapSource@@@Z.c)
 * Callees:
 *     ?SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z @ 0x180027EF8 (-SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z.c)
 *     ?GetMidpoint@UserResizeVisual@implementation@Transitions@Udwm@winrt@@AEAA?AUtagPOINT@@UtagRECT@@UtagSIZE@@H@Z @ 0x1800EB6F0 (-GetMidpoint@UserResizeVisual@implementation@Transitions@Udwm@winrt@@AEAA-AUtagPOINT@@UtagRECT@@.c)
 *     ?WFRectToDpiScaledMarginRect@@YA?AUtagRECT@@URect@Foundation@Windows@winrt@@@Z @ 0x1800EBB98 (-WFRectToDpiScaledMarginRect@@YA-AUtagRECT@@URect@Foundation@Windows@winrt@@@Z.c)
 */

void __fastcall winrt::Udwm::Transitions::implementation::UserResizeVisual::UpdateIconPosition(
        winrt::Udwm::Transitions::implementation::UserResizeVisual *this,
        __int64 a2,
        __int64 a3)
{
  _OWORD *v4; // rax
  winrt::Udwm::Transitions::implementation::UserResizeVisual *v5; // rcx
  bool v6; // zf
  __int64 v7; // rbx
  const struct tagPOINT *Midpoint; // rax
  __int64 v9; // rbx
  const struct tagPOINT *v10; // rax
  struct tagSIZE v11[2]; // [rsp+30h] [rbp-20h] BYREF
  _BYTE v12[16]; // [rsp+40h] [rbp-10h] BYREF
  struct tagRECT v13; // [rsp+60h] [rbp+10h] BYREF

  *(_OWORD *)&v11[0].cx = *(_OWORD *)((char *)this + 92);
  v4 = (_OWORD *)WFRectToDpiScaledMarginRect(v12, v11, a3);
  v6 = *((_QWORD *)this + 7) == 0LL;
  *(_OWORD *)&v11[0].cx = *v4;
  if ( !v6 )
  {
    v7 = *((_QWORD *)this + 6);
    Midpoint = (const struct tagPOINT *)winrt::Udwm::Transitions::implementation::UserResizeVisual::GetMidpoint(
                                          v5,
                                          &v13,
                                          (struct tagSIZE)v11,
                                          *(_QWORD *)(v7 + 72),
                                          -32);
    CVisual::SetOffset((struct tagPOINT *)v7, Midpoint);
    *(__m128i *)&v11[0].cx = _mm_load_si128((const __m128i *)&_xmm);
  }
  v9 = *((_QWORD *)this + 10);
  v10 = (const struct tagPOINT *)winrt::Udwm::Transitions::implementation::UserResizeVisual::GetMidpoint(
                                   v5,
                                   &v13,
                                   (struct tagSIZE)v11,
                                   *(_QWORD *)(v9 + 72),
                                   0);
  CVisual::SetOffset((struct tagPOINT *)v9, v10);
}
