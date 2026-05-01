/*
 * XREFs of ?get@?$weak_ref@UDashboardManager@implementation@Shell@Internal@Windows@winrt@@@winrt@@QEBA@XZ @ 0x1805DCAFC
 * Callers:
 *     winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Foundation::IInspectable_winrt::hstring___lambda_d5b01ac3cd59fca883f981d906b097ab___::Invoke @ 0x1805D3EA0 (winrt--impl--delegate_winrt--Windows--Foundation--TypedEventHandler_winrt--Windows-_ea_1805D3EA0.c)
 *     winrt::Windows::Internal::Shell::implementation::DashboardManager::StartWidgetsOverwatchAsync$_ResumeCoro$1 @ 0x1805D7A80 (winrt--Windows--Internal--Shell--implementation--DashboardManager--StartWidgetsOverwatchAsync$_R.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18004C5EC (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?put_abi@winrt@@YAPEAPEAXAEAUIUnknown@Foundation@Windows@1@@Z @ 0x180050FE0 (-put_abi@winrt@@YAPEAPEAXAEAUIUnknown@Foundation@Windows@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

struct IUnknown *__fastcall winrt::weak_ref<winrt::Windows::Internal::Shell::implementation::DashboardManager>::get(
        __int64 *a1,
        struct IUnknown *a2)
{
  __int64 v2; // rsi
  void (__fastcall *v4)(__int64, __int64 *, void **); // rbx
  void **v5; // rax
  __int64 v6; // rax
  struct IUnknownVtbl *v7; // rcx
  __int64 v9; // [rsp+30h] [rbp+8h] BYREF

  v2 = *a1;
  if ( *a1 )
  {
    v9 = 0LL;
    v4 = *(void (__fastcall **)(__int64, __int64 *, void **))(*(_QWORD *)v2 + 24LL);
    v5 = winrt::put_abi((winrt *)&v9, a2);
    v4(
      v2,
      &winrt::impl::uncloaked_iids<winrt::impl::interface_list<winrt::Windows::Internal::Shell::DashboardManager>>::value,
      v5);
    v6 = v9;
    v7 = 0LL;
    if ( v9 )
    {
      v9 = 0LL;
      v7 = (struct IUnknownVtbl *)(v6 - 16);
    }
    a2->lpVtbl = v7;
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v9);
  }
  else
  {
    a2->lpVtbl = 0LL;
  }
  return a2;
}
