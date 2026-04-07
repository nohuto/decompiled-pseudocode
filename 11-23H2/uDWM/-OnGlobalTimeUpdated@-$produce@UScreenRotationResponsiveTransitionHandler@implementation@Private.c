/*
 * XREFs of ?OnGlobalTimeUpdated@?$produce@UScreenRotationResponsiveTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@UIScreenRotationResponsiveTransitionHandler@3456@@impl@winrt@@UEAAHXZ @ 0x1800F55B0
 * Callers:
 *     <none>
 * Callees:
 *     ?StartFirstAnimation@ScreenRotationResponsiveTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ @ 0x1800F59E8 (-StartFirstAnimation@ScreenRotationResponsiveTransitionHandler@implementation@Private@Transition.c)
 *     ?StartSecondAnimation@ScreenRotationResponsiveTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ @ 0x1800F5EF0 (-StartSecondAnimation@ScreenRotationResponsiveTransitionHandler@implementation@Private@Transitio.c)
 *     ?UnregisterGlobalTimeChanged@ScreenRotationResponsiveTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ @ 0x1800F6460 (-UnregisterGlobalTimeChanged@ScreenRotationResponsiveTransitionHandler@implementation@Private@Tr.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::Udwm::Transitions::Private::implementation::ScreenRotationResponsiveTransitionHandler,winrt::Udwm::Transitions::Private::IScreenRotationResponsiveTransitionHandler>::OnGlobalTimeUpdated(
        unsigned __int64 a1)
{
  winrt::Udwm::Transitions::Private::implementation::ScreenRotationResponsiveTransitionHandler *v1; // rbx
  __int64 v2; // rax
  int v3; // edi
  int v5; // [rsp+30h] [rbp+8h] BYREF

  v1 = (winrt::Udwm::Transitions::Private::implementation::ScreenRotationResponsiveTransitionHandler *)((a1 - 24) & ((unsigned __int128)-(__int128)a1 >> 64));
  v2 = *((_QWORD *)v1 + 11);
  if ( v2 && *(_BYTE *)(v2 + 72) )
  {
    try
    {
      v3 = *(_DWORD *)(((a1 - 24) & ((unsigned __int128)-(__int128)a1 >> 64)) + 0x54);
      winrt::Udwm::Transitions::Private::implementation::ScreenRotationResponsiveTransitionHandler::UnregisterGlobalTimeChanged(v1);
      if ( v3 == 1 )
      {
        winrt::Udwm::Transitions::Private::implementation::ScreenRotationResponsiveTransitionHandler::StartFirstAnimation(v1);
      }
      else if ( v3 == 2 )
      {
        winrt::Udwm::Transitions::Private::implementation::ScreenRotationResponsiveTransitionHandler::StartSecondAnimation(v1);
      }
    }
    catch ( ... )
    {
      return (unsigned int)*winrt::to_hresult(&v5);
    }
  }
  return 0LL;
}
