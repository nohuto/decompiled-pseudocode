/*
 * XREFs of ?UpdateScene@?$produce@UWindowJointResizeTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@UITransitionHandler@456@@impl@winrt@@UEAAHXZ @ 0x1800F9F70
 * Callers:
 *     <none>
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18009B0B8 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

void __fastcall __noreturn winrt::impl::produce<winrt::Udwm::Transitions::Private::implementation::WindowJointResizeTransitionHandler,winrt::Udwm::Transitions::ITransitionHandler>::UpdateScene(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  wil::details::in1diag3::_FailFast_Unexpected(
    retaddr,
    (void *)0xC3,
    (__int64)"clientcore\\windows\\dwm\\udwm\\udwm.transitions.private.windowjointresizetransitionhandler.cpp",
    a4);
}
