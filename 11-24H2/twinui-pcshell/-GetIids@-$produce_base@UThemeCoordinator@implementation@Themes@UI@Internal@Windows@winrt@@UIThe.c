/*
 * XREFs of ?GetIids@?$produce_base@UThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@UIThemeCoordinator@34567@X@impl@winrt@@UEAAHPEAIPEAPEAUguid@3@@Z @ 0x1806055C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::produce_base<winrt::Windows::Internal::UI::Themes::implementation::ThemeCoordinator,winrt::Windows::Internal::UI::Themes::IThemeCoordinator,void>::GetIids(
        __int64 a1,
        unsigned int *a2,
        _QWORD *a3)
{
  __int64 v3; // rax

  v3 = a1 + 40;
  if ( !a1 )
    v3 = 64LL;
  return winrt::impl::root_implements<winrt::immersive_shell_component,IObjectWithSite,IServiceProvider,IImmersiveShellComponent,winrt::Windows::Foundation::IInspectable>::GetIids(
           v3,
           a2,
           a3);
}
