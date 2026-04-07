/*
 * XREFs of ?OnAnimationComplete@ScreenRotationResponsiveTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@UEAAJI@Z @ 0x1800F5490
 * Callers:
 *     <none>
 * Callees:
 *     ?HandleAnimationEnd@ScreenRotationResponsiveTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ @ 0x1800F52A8 (-HandleAnimationEnd@ScreenRotationResponsiveTransitionHandler@implementation@Private@Transitions.c)
 *     ?log@?$tip_test@U_tip_ResponsiveScreenRotationAnimationTest@Tip@Private@Transitions@Udwm@@@tip@@QEAAXV?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x1800F69C8 (-log@-$tip_test@U_tip_ResponsiveScreenRotationAnimationTest@Tip@Private@Transitions@Udwm@@@tip@@.c)
 */

__int64 __fastcall winrt::Udwm::Transitions::Private::implementation::ScreenRotationResponsiveTransitionHandler::OnAnimationComplete(
        winrt::Udwm::Transitions::Private::implementation::ScreenRotationResponsiveTransitionHandler *this,
        int a2,
        __int64 a3,
        const char *a4)
{
  const wchar_t *v6; // [rsp+20h] [rbp-18h] BYREF
  __int64 v7; // [rsp+28h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  try
  {
    if ( a2 == *((_DWORD *)this + 10) )
    {
      v6 = L"First animation complete";
      v7 = 24LL;
      tip::tip_test<Udwm::Transitions::Private::Tip::_tip_ResponsiveScreenRotationAnimationTest>::log(
        (char *)this + 72,
        &v6);
      *((_DWORD *)this + 10) = -1;
      if ( *((_DWORD *)this + 2) == 4 )
      {
        v6 = L"Half rotation animation complete";
        v7 = 32LL;
        tip::tip_test<Udwm::Transitions::Private::Tip::_tip_ResponsiveScreenRotationAnimationTest>::log(
          (char *)this + 72,
          &v6);
        winrt::Udwm::Transitions::Private::implementation::ScreenRotationResponsiveTransitionHandler::HandleAnimationEnd((winrt::Udwm::Transitions::Private::implementation::ScreenRotationResponsiveTransitionHandler *)((char *)this - 32));
      }
    }
    else if ( a2 == *((_DWORD *)this + 11) )
    {
      v6 = L"Second animation complete";
      v7 = 25LL;
      tip::tip_test<Udwm::Transitions::Private::Tip::_tip_ResponsiveScreenRotationAnimationTest>::log(
        (char *)this + 72,
        &v6);
      *((_DWORD *)this + 11) = -1;
      winrt::Udwm::Transitions::Private::implementation::ScreenRotationResponsiveTransitionHandler::HandleAnimationEnd((winrt::Udwm::Transitions::Private::implementation::ScreenRotationResponsiveTransitionHandler *)((char *)this - 32));
    }
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x9A,
                           (int)"clientcore\\windows\\dwm\\udwm\\udwm.transitions.private.screenrotationresponsivetransitionhandler.cpp",
                           a4);
  }
  return 0LL;
}
