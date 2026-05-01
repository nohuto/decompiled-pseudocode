/*
 * XREFs of ?get_PreviousExecutionState@?$produce@USearchAppActivatedEventArgs@implementation@Shell@UI@WindowsUdk@winrt@@UIActivatedEventArgs@Activation@ApplicationModel@Windows@6@@impl@winrt@@UEAAHPEAH@Z @ 0x1803D6920
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::produce<winrt::WindowsUdk::UI::Shell::implementation::SearchAppActivatedEventArgs,winrt::Windows::ApplicationModel::Activation::IActivatedEventArgs>::get_PreviousExecutionState(
        __int64 a1,
        _DWORD *a2)
{
  __int64 v2; // rax

  v2 = a1 + 84;
  if ( !a1 )
    v2 = 116LL;
  *a2 = *(_DWORD *)v2;
  return 0LL;
}
