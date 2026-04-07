/*
 * XREFs of ?UpdateAngle@WindowMoveResizeCrossfadeTransition@implementation@Private@Transitions@Udwm@winrt@@QEAAXHH@Z @ 0x1800E4170
 * Callers:
 *     ?UpdateAngle@?$produce@UWindowMoveResizeCrossfadeTransition@implementation@Private@Transitions@Udwm@winrt@@UITransition@456@@impl@winrt@@UEAAHHH@Z @ 0x1800E4160 (-UpdateAngle@-$produce@UWindowMoveResizeCrossfadeTransition@implementation@Private@Transitions@U.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180096A00 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

void __fastcall __noreturn winrt::Udwm::Transitions::Private::implementation::WindowMoveResizeCrossfadeTransition::UpdateAngle(
        winrt::Udwm::Transitions::Private::implementation::WindowMoveResizeCrossfadeTransition *this,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  wil::details::in1diag3::_FailFast_Unexpected(
    retaddr,
    (void *)0x20,
    (int)"clientcore\\windows\\dwm\\udwm\\transitions.windowmoveresizecrossfadetransition.cpp",
    a4);
}
