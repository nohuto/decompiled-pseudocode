/*
 * XREFs of ?get_SplashScreen@?$produce@USearchAppActivatedEventArgs@implementation@Shell@UI@WindowsUdk@winrt@@UIActivatedEventArgs@Activation@ApplicationModel@Windows@6@@impl@winrt@@UEAAHPEAPEAX@Z @ 0x18020D4B0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::WindowsUdk::UI::Shell::implementation::SearchAppActivatedEventArgs,winrt::Windows::ApplicationModel::Activation::IActivatedEventArgs>::get_SplashScreen(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v3; // rbx
  __int64 v4; // rbx

  *a2 = 0LL;
  v3 = a1 + 88;
  if ( !a1 )
    v3 = 120LL;
  v4 = *(_QWORD *)v3;
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  *a2 = v4;
  return 0LL;
}
