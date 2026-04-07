/*
 * XREFs of ?Rect@UserResizeVisual@implementation@Transitions@Udwm@winrt@@QEAAXAEBU0Foundation@Windows@5@@Z @ 0x1800EB78C
 * Callers:
 *     ??0UserResizeVisual@implementation@Transitions@Udwm@winrt@@QEAA@PEAVCTopLevelWindow3D@@_N@Z @ 0x1800EB158 (--0UserResizeVisual@implementation@Transitions@Udwm@winrt@@QEAA@PEAVCTopLevelWindow3D@@_N@Z.c)
 *     ?put_Rect@?$produce@UUserResizeVisual@implementation@Transitions@Udwm@winrt@@UIUserResizeVisual@345@@impl@winrt@@UEAAHURect@Foundation@Windows@3@@Z @ 0x1800EBF00 (-put_Rect@-$produce@UUserResizeVisual@implementation@Transitions@Udwm@winrt@@UIUserResizeVisual@.c)
 * Callees:
 *     ?UpdateRect@CAcrylicSheet@@QEAAJAEBUtagRECT@@@Z @ 0x180067DFC (-UpdateRect@CAcrylicSheet@@QEAAJAEBUtagRECT@@@Z.c)
 *     ?UpdateIconPosition@UserResizeVisual@implementation@Transitions@Udwm@winrt@@AEAAXXZ @ 0x1800EBAEC (-UpdateIconPosition@UserResizeVisual@implementation@Transitions@Udwm@winrt@@AEAAXXZ.c)
 *     ?WFRectToDpiScaledMarginRect@@YA?AUtagRECT@@URect@Foundation@Windows@winrt@@@Z @ 0x1800EBB98 (-WFRectToDpiScaledMarginRect@@YA-AUtagRECT@@URect@Foundation@Windows@winrt@@@Z.c)
 */

void __fastcall winrt::Udwm::Transitions::implementation::UserResizeVisual::Rect(
        winrt::Udwm::Transitions::implementation::UserResizeVisual *this,
        struct tagRECT *a2)
{
  bool v2; // zf
  __int64 v5; // r8
  CAcrylicSheet *v6; // r8
  struct tagRECT v7; // [rsp+20h] [rbp-28h] BYREF
  _BYTE v8[24]; // [rsp+30h] [rbp-18h] BYREF

  v2 = *((_QWORD *)this + 10) == 0LL;
  *(struct tagRECT *)((char *)this + 92) = *a2;
  if ( !v2 )
    winrt::Udwm::Transitions::implementation::UserResizeVisual::UpdateIconPosition(this);
  v5 = *((_QWORD *)this + 5);
  v7 = *a2;
  v7 = *(struct tagRECT *)WFRectToDpiScaledMarginRect(v8, &v7, v5);
  CAcrylicSheet::UpdateRect(v6, &v7);
}
