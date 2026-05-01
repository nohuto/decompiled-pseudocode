/*
 * XREFs of ?RegisterSharedBackgroundVisualSink@?$produce@UThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@UIThemeCoordinator@34567@@impl@winrt@@UEAAHHPEA_K@Z @ 0x180605F80
 * Callers:
 *     <none>
 * Callees:
 *     ?GetBackgroundHostForType@ThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@AEAA_KW4BackgroundIdentifier@34567@_N@Z @ 0x180605334 (-GetBackgroundHostForType@ThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@AEAA.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::Windows::Internal::UI::Themes::implementation::ThemeCoordinator,winrt::Windows::Internal::UI::Themes::IThemeCoordinator>::RegisterSharedBackgroundVisualSink(
        __int64 a1,
        unsigned int a2,
        __int64 *a3)
{
  __int64 v3; // rcx
  __int64 result; // rax
  int v5; // [rsp+38h] [rbp+10h] BYREF

  v3 = (a1 - 24) & -(__int64)(a1 != 0);
  try
  {
    *a3 = winrt::Windows::Internal::UI::Themes::implementation::ThemeCoordinator::GetBackgroundHostForType(v3, a2, 1);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)*winrt::to_hresult(&v5);
  }
  return result;
}
