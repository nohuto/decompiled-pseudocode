/*
 * XREFs of ?Rect@UserResizeVisual@implementation@Transitions@Udwm@winrt@@QEAAXAEBU0Foundation@Windows@5@@Z @ 0x1801044CC
 * Callers:
 *     ??0UserResizeVisual@implementation@Transitions@Udwm@winrt@@QEAA@PEAVCTopLevelWindow3D@@_N@Z @ 0x180103EA4 (--0UserResizeVisual@implementation@Transitions@Udwm@winrt@@QEAA@PEAVCTopLevelWindow3D@@_N@Z.c)
 *     ?put_Rect@?$produce@UUserResizeVisual@implementation@Transitions@Udwm@winrt@@UIUserResizeVisual@345@@impl@winrt@@UEAAHURect@Foundation@Windows@3@@Z @ 0x180104D20 (-put_Rect@-$produce@UUserResizeVisual@implementation@Transitions@Udwm@winrt@@UIUserResizeVisual@.c)
 * Callees:
 *     ?UpdateRect@CAcrylicSheet@@QEAAJAEBUtagRECT@@@Z @ 0x18006B7BE (-UpdateRect@CAcrylicSheet@@QEAAJAEBUtagRECT@@@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_JointResizeIcons@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800F9BD0 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_JointResizeIcons@@@details@wil@@QEAAX_NW4.c)
 *     ?UpdateIconPosition@UserResizeVisual@implementation@Transitions@Udwm@winrt@@AEAAXXZ @ 0x180104874 (-UpdateIconPosition@UserResizeVisual@implementation@Transitions@Udwm@winrt@@AEAAXXZ.c)
 *     ?WFRectToDpiScaledMarginRect@Utils@Private@Transitions@Udwm@winrt@@YA?AUtagRECT@@URect@Foundation@Windows@5@@Z @ 0x180104994 (-WFRectToDpiScaledMarginRect@Utils@Private@Transitions@Udwm@winrt@@YA-AUtagRECT@@URect@Foundatio.c)
 */

void __fastcall winrt::Udwm::Transitions::implementation::UserResizeVisual::Rect(
        winrt::Udwm::Transitions::implementation::UserResizeVisual *this,
        struct tagRECT *a2,
        __int64 a3,
        __int64 a4)
{
  struct tagRECT *v6; // rax
  CAcrylicSheet *v7; // rcx
  struct tagRECT v8; // [rsp+20h] [rbp-28h] BYREF
  _BYTE v9[24]; // [rsp+30h] [rbp-18h] BYREF

  *(struct tagRECT *)((char *)this + 92) = *a2;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_JointResizeIcons>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_JointResizeIcons>::GetImpl'::`2'::impl,
    1u,
    a3,
    a4);
  if ( *((_QWORD *)this + 10) )
    winrt::Udwm::Transitions::implementation::UserResizeVisual::UpdateIconPosition(this);
  v8 = *a2;
  v6 = (struct tagRECT *)winrt::Udwm::Transitions::Private::Utils::WFRectToDpiScaledMarginRect(v9, &v8);
  v7 = (CAcrylicSheet *)*((_QWORD *)this + 5);
  v8 = *v6;
  CAcrylicSheet::UpdateRect(v7, &v8);
}
