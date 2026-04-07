/*
 * XREFs of ?PreTransition@?$produce@UWindowMaximizeSnapTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@UITransitionHandler@456@@impl@winrt@@UEAAHHPEAX@Z @ 0x1800F7F30
 * Callers:
 *     <none>
 * Callees:
 *     ??4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@AEBU0123@@Z @ 0x18002044C (--4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@AEBU0123@@Z.c)
 *     ?CaptureVisuals@WindowMaximizeSnapTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@AEAAXW4ShellTransition@456@@Z @ 0x1800F765C (-CaptureVisuals@WindowMaximizeSnapTransitionHandler@implementation@Private@Transitions@Udwm@winr.c)
 *     ?CompleteState@WindowMaximizeSnapTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ @ 0x1800F7880 (-CompleteState@WindowMaximizeSnapTransitionHandler@implementation@Private@Transitions@Udwm@winrt.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::Udwm::Transitions::Private::implementation::WindowMaximizeSnapTransitionHandler,winrt::Udwm::Transitions::ITransitionHandler>::PreTransition(
        unsigned __int64 a1,
        int a2,
        __int64 a3)
{
  _DWORD *v4; // rbx
  __int64 result; // rax
  int v6; // [rsp+38h] [rbp+10h] BYREF
  __int64 v7; // [rsp+40h] [rbp+18h] BYREF

  v7 = a3;
  v4 = (_DWORD *)((a1 - 16) & ((unsigned __int128)-(__int128)a1 >> 64));
  try
  {
    winrt::Udwm::Transitions::Private::implementation::WindowMaximizeSnapTransitionHandler::CompleteState((winrt::Udwm::Transitions::Private::implementation::WindowMaximizeSnapTransitionHandler *)v4);
    winrt::Windows::Foundation::IUnknown::operator=(
      (winrt::Windows::Foundation::IUnknown *)(v4 + 6),
      (winrt::Windows::Foundation::IUnknown *)&v7);
    v4[12] = a2;
    winrt::Udwm::Transitions::Private::implementation::WindowMaximizeSnapTransitionHandler::CaptureVisuals(
      (__int64)v4,
      a2);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)*winrt::to_hresult(&v6);
  }
  return result;
}
