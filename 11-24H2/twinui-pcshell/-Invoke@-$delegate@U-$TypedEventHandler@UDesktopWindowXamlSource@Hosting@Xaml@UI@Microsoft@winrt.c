/*
 * XREFs of ?Invoke@?$delegate@U?$TypedEventHandler@UDesktopWindowXamlSource@Hosting@Xaml@UI@Microsoft@winrt@@UDesktopWindowXamlSourceTakeFocusRequestedEventArgs@23456@@Foundation@Windows@winrt@@V_lambda_24f9a2f893cdb50a379e319867e5c1aa_@@@impl@winrt@@UEAAHPEAX0@Z @ 0x180450950
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall winrt::impl::delegate<winrt::Windows::Foundation::TypedEventHandler<winrt::Microsoft::UI::Xaml::Hosting::DesktopWindowXamlSource,winrt::Microsoft::UI::Xaml::Hosting::DesktopWindowXamlSourceTakeFocusRequestedEventArgs>,_lambda_24f9a2f893cdb50a379e319867e5c1aa_>::Invoke(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 result; // rax
  int v4; // [rsp+20h] [rbp-28h] BYREF
  __int64 v5; // [rsp+28h] [rbp-20h] BYREF
  __int64 v6; // [rsp+30h] [rbp-18h] BYREF

  try
  {
    v6 = a2;
    v5 = a3;
    (*(void (__fastcall **)(_QWORD, __int64 *, __int64 *))(a1 + 24))(*(_QWORD *)(a1 + 16) + *(int *)(a1 + 32), &v6, &v5);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)*winrt::to_hresult(&v4);
  }
  return result;
}
