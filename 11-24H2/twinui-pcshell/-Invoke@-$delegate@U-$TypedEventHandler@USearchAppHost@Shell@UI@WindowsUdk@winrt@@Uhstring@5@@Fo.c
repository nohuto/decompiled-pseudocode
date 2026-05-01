/*
 * XREFs of ?Invoke@?$delegate@U?$TypedEventHandler@USearchAppHost@Shell@UI@WindowsUdk@winrt@@Uhstring@5@@Foundation@Windows@winrt@@V_lambda_e25625625bdc64a68585e6164476e8f0_@@@impl@winrt@@UEAAHPEAX0@Z @ 0x1803D4DD0
 * Callers:
 *     <none>
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x18004C608 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ?put_abi@winrt@@YAPEAPEAXAEAUIUnknown@Foundation@Windows@1@@Z @ 0x180050FE0 (-put_abi@winrt@@YAPEAPEAXAEAUIUnknown@Foundation@Windows@1@@Z.c)
 *     ??R?$EventHandler@URemoteSystemStateChangedEventArgs@Shell@Internal@Windows@winrt@@@Foundation@Windows@winrt@@QEBA@AEBUIInspectable@123@AEBURemoteSystemStateChangedEventArgs@Shell@Internal@23@@Z @ 0x18023C994 (--R-$EventHandler@URemoteSystemStateChangedEventArgs@Shell@Internal@Windows@winrt@@@Foundation@W.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall winrt::impl::delegate<winrt::Windows::Foundation::TypedEventHandler<winrt::WindowsUdk::UI::Shell::SearchAppHost,winrt::hstring>,_lambda_e25625625bdc64a68585e6164476e8f0_>::Invoke(
        __int64 a1,
        struct IUnknown *a2,
        __int64 a3)
{
  __int64 v5; // rdi
  void (__fastcall *v6)(__int64, __int64, void **); // rbx
  void **v7; // rax
  __int64 result; // rax
  __int64 v9[7]; // [rsp+20h] [rbp-38h] BYREF
  __int64 *v10; // [rsp+60h] [rbp+8h] BYREF
  struct IUnknown *v11; // [rsp+68h] [rbp+10h] BYREF

  v11 = a2;
  v10 = 0LL;
  v5 = *(_QWORD *)(a1 + 16);
  v6 = *(void (__fastcall **)(__int64, __int64, void **))(*(_QWORD *)v5 + 24LL);
  v7 = winrt::put_abi((winrt *)&v10, a2);
  v6(v5, a1 + 24, v7);
  v9[0] = a3;
  try
  {
    winrt::Windows::Foundation::EventHandler<winrt::Windows::Internal::Shell::RemoteSystemStateChangedEventArgs>::operator()(
      &v10,
      (__int64 *)&v11,
      v9);
    if ( v10 )
      winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)&v10);
    result = 0LL;
  }
  catch ( ... )
  {
    LODWORD(v10) = *winrt::to_hresult(&v10);
    return (unsigned int)v10;
  }
  return result;
}
