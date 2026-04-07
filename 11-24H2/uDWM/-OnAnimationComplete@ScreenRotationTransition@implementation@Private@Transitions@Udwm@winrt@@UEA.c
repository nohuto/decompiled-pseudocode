/*
 * XREFs of ?OnAnimationComplete@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@UEAAJI@Z @ 0x1800E1160
 * Callers:
 *     <none>
 * Callees:
 *     ?Cancel@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@QEAAXXZ @ 0x18004B6AC (-Cancel@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@QEAAXXZ.c)
 *     ?HandleAnimationEnd@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ @ 0x1800E1018 (-HandleAnimationEnd@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@AEAA.c)
 *     ?log@?$tip_test@V?$merged_data@U_tip_ResponsiveScreenRotationAnimationTest@Tip@Private@Transitions@Udwm@@U12345@@details@tip2@@@tip2@@QEAAXPEBG@Z @ 0x1800E2B1C (-log@-$tip_test@V-$merged_data@U_tip_ResponsiveScreenRotationAnimationTest@Tip@Private@Transitio.c)
 */

__int64 __fastcall winrt::Udwm::Transitions::Private::implementation::ScreenRotationTransition::OnAnimationComplete(
        winrt::Udwm::Transitions::Private::implementation::ScreenRotationTransition *this,
        int a2,
        __int64 a3,
        const char *a4)
{
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  try
  {
    if ( *((_DWORD *)this + 2) )
    {
      if ( a2 == *((_DWORD *)this + 10) )
      {
        tip2::tip_test<tip2::details::merged_data<Udwm::Transitions::Private::Tip::_tip_ResponsiveScreenRotationAnimationTest,Udwm::Transitions::Private::Tip::_tip_ResponsiveScreenRotationAnimationTest>>::log(
          (char *)this + 72,
          L"First animation complete");
        *((_DWORD *)this + 10) = -1;
        if ( *((_DWORD *)this + 2) == 4 )
        {
          tip2::tip_test<tip2::details::merged_data<Udwm::Transitions::Private::Tip::_tip_ResponsiveScreenRotationAnimationTest,Udwm::Transitions::Private::Tip::_tip_ResponsiveScreenRotationAnimationTest>>::log(
            (char *)this + 72,
            L"Half rotation animation complete");
          winrt::Udwm::Transitions::Private::implementation::ScreenRotationTransition::HandleAnimationEnd((winrt::Udwm::Transitions::Private::implementation::ScreenRotationTransition *)((char *)this - 32));
        }
      }
      else if ( a2 == *((_DWORD *)this + 11) )
      {
        tip2::tip_test<tip2::details::merged_data<Udwm::Transitions::Private::Tip::_tip_ResponsiveScreenRotationAnimationTest,Udwm::Transitions::Private::Tip::_tip_ResponsiveScreenRotationAnimationTest>>::log(
          (char *)this + 72,
          L"Second animation complete");
        *((_DWORD *)this + 11) = -1;
        winrt::Udwm::Transitions::Private::implementation::ScreenRotationTransition::HandleAnimationEnd((winrt::Udwm::Transitions::Private::implementation::ScreenRotationTransition *)((char *)this - 32));
      }
    }
    else
    {
      winrt::Udwm::Transitions::Private::implementation::ScreenRotationTransition::Cancel((winrt::Udwm::Transitions::Private::implementation::ScreenRotationTransition *)((char *)this - 32));
    }
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x8B,
                           (int)"clientcore\\windows\\dwm\\udwm\\transitions.screenrotationtransition.cpp",
                           a4);
  }
  return 0LL;
}
