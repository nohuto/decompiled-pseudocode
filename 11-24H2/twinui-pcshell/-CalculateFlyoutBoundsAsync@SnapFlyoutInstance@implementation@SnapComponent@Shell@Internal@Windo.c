/*
 * XREFs of ?CalculateFlyoutBoundsAsync@SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@CA?AU?$IAsyncOperation@URect@Foundation@Windows@winrt@@@Foundation@67@PEAUHMONITOR__@@AEBUFrameworkElement@Xaml@UI@67@PEAUHWND__@@_NAEBURect@967@@Z @ 0x1805C0670
 * Callers:
 *     winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance::ShowFlyoutAsync$_ResumeCoro$1 @ 0x180274700 (winrt--Windows--Internal--Shell--SnapComponent--implementation--SnapFlyoutInstance-_ea_180274700.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1802D2108 (--2@YAPEAX_K@Z.c)
 *     winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance::CalculateFlyoutBoundsAsync$_InitCoro$2 @ 0x1805BFFD0 (winrt--Windows--Internal--Shell--SnapComponent--implementation--SnapFlyoutInstance--CalculateFly.c)
 */

__int64 *__fastcall winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance::CalculateFlyoutBoundsAsync(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        char a5,
        __int64 a6)
{
  void *v10; // rax
  int v12; // [rsp+1B0h] [rbp+8h] BYREF

  v10 = operator new(0x150uLL);
  v12 = 0;
  winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance::CalculateFlyoutBoundsAsync__InitCoro_2(
    &v12,
    (__int64)v10 + 128,
    a1,
    a2,
    a3,
    a4,
    &a5,
    a6);
  return a1;
}
