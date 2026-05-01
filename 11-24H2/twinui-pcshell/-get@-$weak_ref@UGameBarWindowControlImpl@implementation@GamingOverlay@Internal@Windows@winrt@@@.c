/*
 * XREFs of ?get@?$weak_ref@UGameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@@winrt@@QEBA@XZ @ 0x180365178
 * Callers:
 *     _lambda_c680e10b8be88f9d1d2ee302a6ab3748_::operator() @ 0x180361E18 (_lambda_c680e10b8be88f9d1d2ee302a6ab3748_--operator().c)
 *     ?Invoke@?$delegate@U?$TypedEventHandler@UIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@winrt@@UIClientWindowReadyForPresentationChangedEventArgs@23456@@Foundation@Windows@winrt@@V_lambda_b7adc96a5bea5400a0c4e7ac87874578_@@@impl@winrt@@UEAAHPEAX0@Z @ 0x180363850 (-Invoke@-$delegate@U-$TypedEventHandler@UIClientWindowState@ViewManagerInterop@Shell@Internal@Wi.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18004C5EC (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?put_abi@winrt@@YAPEAPEAXAEAUIUnknown@Foundation@Windows@1@@Z @ 0x180050FE0 (-put_abi@winrt@@YAPEAPEAXAEAUIUnknown@Foundation@Windows@1@@Z.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

struct IUnknown *__fastcall winrt::weak_ref<winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl>::get(
        __int64 *a1,
        struct IUnknown *a2)
{
  __int64 v2; // rsi
  void (__fastcall *v4)(__int64, __int64 *, void **); // rbx
  void **v5; // rax
  __int64 v6; // rax
  struct IUnknownVtbl *v7; // rcx
  __int64 v9; // [rsp+20h] [rbp-18h] BYREF

  v2 = *a1;
  if ( *a1 )
  {
    v9 = 0LL;
    v4 = *(void (__fastcall **)(__int64, __int64 *, void **))(*(_QWORD *)v2 + 24LL);
    v5 = winrt::put_abi((winrt *)&v9, a2);
    v4(v2, &winrt::impl::guid_v<winrt::Windows::Internal::GamingOverlay::IGameBarWindowControl>, v5);
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
