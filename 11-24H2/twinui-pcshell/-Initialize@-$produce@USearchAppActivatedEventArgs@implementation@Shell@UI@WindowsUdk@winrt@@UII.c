/*
 * XREFs of ?Initialize@?$produce@USearchAppActivatedEventArgs@implementation@Shell@UI@WindowsUdk@winrt@@UIInitializeActivatedEventArgs@Activation@ApplicationModel@Windows@6@@impl@winrt@@UEAAH_KPEAXH_N20Uguid@3@@Z @ 0x1803D6790
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::produce<winrt::WindowsUdk::UI::Shell::implementation::SearchAppActivatedEventArgs,winrt::Windows::ApplicationModel::Activation::IInitializeActivatedEventArgs>::Initialize(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4)
{
  __int64 v4; // rax

  v4 = a1 + 76;
  if ( !a1 )
    v4 = 116LL;
  *(_DWORD *)v4 = a4;
  return 0LL;
}
