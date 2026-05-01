/*
 * XREFs of ??$make@USnapAnimationTag@implementation@WindowSnapping@Shell@Internal@Windows@winrt@@AEA_KAEAURect@Foundation@67@PEAUIPrivilegedPresentationOperations@@@winrt@@YA?A_PAEA_KAEAURect@Foundation@Windows@0@$$QEAPEAUIPrivilegedPresentationOperations@@@Z @ 0x1805A5150
 * Callers:
 *     ?TagWindowForSnapAnimation@CSnapAssistControllerBase@@UEAAJ_KURect@Foundation@Windows@@PEAPEAUISnapAnimationTag@WindowSnapping@Shell@Internal@4@@Z @ 0x1805A72B0 (-TagWindowForSnapAnimation@CSnapAssistControllerBase@@UEAAJ_KURect@Foundation@Windows@@PEAPEAUIS.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1802D2108 (--2@YAPEAX_K@Z.c)
 *     ??0SnapAnimationTag@implementation@WindowSnapping@Shell@Internal@Windows@winrt@@QEAA@_KAEBURect@Foundation@56@PEAUIPrivilegedPresentationOperations@@@Z @ 0x1805BC7B0 (--0SnapAnimationTag@implementation@WindowSnapping@Shell@Internal@Windows@winrt@@QEAA@_KAEBURect@.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall winrt::make<winrt::Windows::Internal::Shell::WindowSnapping::implementation::SnapAnimationTag,unsigned __int64 &,winrt::Windows::Foundation::Rect &,IPrivilegedPresentationOperations *>(
        _QWORD *a1,
        unsigned __int64 *a2,
        const struct winrt::Windows::Foundation::Rect *a3,
        struct IPrivilegedPresentationOperations **a4)
{
  winrt::Windows::Internal::Shell::WindowSnapping::implementation::SnapAnimationTag *v9; // [rsp+50h] [rbp+8h]

  v9 = (winrt::Windows::Internal::Shell::WindowSnapping::implementation::SnapAnimationTag *)operator new(0x28uLL);
  winrt::Windows::Internal::Shell::WindowSnapping::implementation::SnapAnimationTag::SnapAnimationTag(v9, *a2, a3, *a4);
  *(_QWORD *)v9 = &winrt::Windows::Internal::Shell::WindowSnapping::implementation::SnapAnimationTag::`vftable';
  *a1 = (char *)v9 + 16;
  return a1;
}
