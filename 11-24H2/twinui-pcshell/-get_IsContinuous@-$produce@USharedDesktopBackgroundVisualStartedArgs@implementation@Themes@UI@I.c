/*
 * XREFs of ?get_IsContinuous@?$produce@USharedDesktopBackgroundVisualStartedArgs@implementation@Themes@UI@Internal@Windows@winrt@@UISharedDesktopBackgroundVisualStartedArgs@34567@@impl@winrt@@UEAAHPEA_N@Z @ 0x18060E690
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::produce<winrt::Windows::Internal::UI::Themes::implementation::SharedDesktopBackgroundVisualStartedArgs,winrt::Windows::Internal::UI::Themes::ISharedDesktopBackgroundVisualStartedArgs>::get_IsContinuous(
        __int64 a1,
        _BYTE *a2)
{
  __int64 v2; // rax

  v2 = a1 + 8;
  if ( !a1 )
    v2 = 24LL;
  *a2 = *(_BYTE *)v2;
  return 0LL;
}
