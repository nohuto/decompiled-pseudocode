/*
 * XREFs of ?TryGetMaximizeButtonRectFromTitleBarInfoAsync@SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@CA?AU?$IAsyncOperation@URect@Foundation@Windows@winrt@@@Foundation@67@PEAUHWND__@@@Z @ 0x1805C15B4
 * Callers:
 *     winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance::CalculateFlyoutBoundsAsync$_ResumeCoro$1 @ 0x1805C0130 (winrt--Windows--Internal--Shell--SnapComponent--implementation--SnapFlyoutInstance-_ea_1805C0130.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1802D2108 (--2@YAPEAX_K@Z.c)
 *     winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance::TryGetMaximizeButtonRectFromTitleBarInfoAsync$_InitCoro$2 @ 0x1805C1298 (winrt--Windows--Internal--Shell--SnapComponent--implementation--SnapFlyoutInstance--TryGetMaximi.c)
 */

__int64 *__fastcall winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance::TryGetMaximizeButtonRectFromTitleBarInfoAsync(
        __int64 *a1,
        __int64 a2)
{
  void *v4; // rax
  int v6; // [rsp+130h] [rbp+8h] BYREF

  v4 = operator new(0x100uLL);
  v6 = 0;
  winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance::TryGetMaximizeButtonRectFromTitleBarInfoAsync__InitCoro_2(
    &v6,
    (__int64)v4 + 128,
    a1,
    a2);
  return a1;
}
