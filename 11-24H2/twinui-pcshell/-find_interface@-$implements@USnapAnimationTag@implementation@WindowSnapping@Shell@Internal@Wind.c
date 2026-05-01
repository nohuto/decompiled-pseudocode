/*
 * XREFs of ?find_interface@?$implements@USnapAnimationTag@implementation@WindowSnapping@Shell@Internal@Windows@winrt@@U134567@@winrt@@UEBAPEAXAEBUguid@2@@Z @ 0x1805A8850
 * Callers:
 *     <none>
 * Callees:
 *     ??$find@U?$find_iid_traits@USnapAnimationTag@implementation@WindowSnapping@Shell@Internal@Windows@winrt@@@impl@winrt@@@?$interface_list@USnapAnimationTag@WindowSnapping@Shell@Internal@Windows@winrt@@@impl@winrt@@SA?A_PAEBU?$find_iid_traits@USnapAnimationTag@implementation@WindowSnapping@Shell@Internal@Windows@winrt@@@12@@Z @ 0x1805A5094 (--$find@U-$find_iid_traits@USnapAnimationTag@implementation@WindowSnapping@Shell@Internal@Window.c)
 */

__int64 __fastcall winrt::implements<winrt::Windows::Internal::Shell::WindowSnapping::implementation::SnapAnimationTag,winrt::Windows::Internal::Shell::WindowSnapping::SnapAnimationTag>::find_interface(
        __int64 a1,
        __int64 a2)
{
  _QWORD v3[3]; // [rsp+20h] [rbp-18h] BYREF

  v3[0] = a1;
  v3[1] = a2;
  return winrt::impl::interface_list<winrt::Windows::Internal::Shell::WindowSnapping::SnapAnimationTag>::find<winrt::impl::find_iid_traits<winrt::Windows::Internal::Shell::WindowSnapping::implementation::SnapAnimationTag>>(v3);
}
