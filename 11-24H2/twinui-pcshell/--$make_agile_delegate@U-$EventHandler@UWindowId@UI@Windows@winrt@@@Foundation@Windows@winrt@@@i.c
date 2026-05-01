/*
 * XREFs of ??$make_agile_delegate@U?$EventHandler@UWindowId@UI@Windows@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@YA?AU?$EventHandler@UWindowId@UI@Windows@winrt@@@Foundation@Windows@1@AEBU2341@@Z @ 0x18065E36C
 * Callers:
 *     ?add@?$event@U?$EventHandler@UWindowId@UI@Windows@winrt@@@Foundation@Windows@winrt@@@winrt@@QEAA?AUevent_token@2@AEBU?$EventHandler@UWindowId@UI@Windows@winrt@@@Foundation@Windows@2@@Z @ 0x18065F618 (-add@-$event@U-$EventHandler@UWindowId@UI@Windows@winrt@@@Foundation@Windows@winrt@@@winrt@@QEAA.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x18004C608 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ?InternalAddRef@?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ @ 0x18004C654 (-InternalAddRef@-$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ??0_lambda_1d99fdbe0740601814aa3a75b33e3225_@@QEAA@$$QEAU?$com_ptr@UIAgileReference@impl@winrt@@@winrt@@AEBUguid@2@@Z @ 0x18032C518 (--0_lambda_1d99fdbe0740601814aa3a75b33e3225_@@QEAA@$$QEAU-$com_ptr@UIAgileReference@impl@winrt@@.c)
 *     ?get_agile_reference@impl@winrt@@YA?AUhresult@2@AEBUguid@2@PEAXPEAPEAX@Z @ 0x180336EB0 (-get_agile_reference@impl@winrt@@YA-AUhresult@2@AEBUguid@2@PEAXPEAPEAX@Z.c)
 *     ??$?0V_lambda_b299aa741e32ec30a9963223bba9e020_@@@?$EventHandler@UWindowId@UI@Windows@winrt@@@Foundation@Windows@winrt@@QEAA@V_lambda_b299aa741e32ec30a9963223bba9e020_@@@Z @ 0x18065DEE0 (--$-0V_lambda_b299aa741e32ec30a9963223bba9e020_@@@-$EventHandler@UWindowId@UI@Windows@winrt@@@Fo.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 *__fastcall winrt::impl::make_agile_delegate<winrt::Windows::Foundation::EventHandler<winrt::Windows::UI::WindowId>>(
        __int64 *a1,
        __int64 *a2)
{
  void (__fastcall ***v4)(_QWORD, __int64 *, __int64 *); // rcx
  __int64 v5; // rax
  __int64 v7; // [rsp+20h] [rbp-40h] BYREF
  __int64 v8; // [rsp+28h] [rbp-38h] BYREF
  _BYTE v9[24]; // [rsp+30h] [rbp-30h] BYREF
  __int128 v10; // [rsp+48h] [rbp-18h] BYREF

  v4 = (void (__fastcall ***)(_QWORD, __int64 *, __int64 *))*a2;
  if ( *a2 && (v8 = 0LL, (**v4)(v4, &winrt::impl::guid_v<winrt::impl::IAgileObject>, &v8), v8) )
  {
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v8);
    *a1 = *a2;
    Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef(a1);
  }
  else
  {
    v10 = winrt::impl::guid_v<winrt::Windows::Foundation::EventHandler<winrt::Windows::UI::WindowId>>;
    v7 = 0LL;
    winrt::impl::get_agile_reference(&v8, (__int64)&v10, *a2, (__int64)&v7);
    if ( v7 )
    {
      v5 = _lambda_1d99fdbe0740601814aa3a75b33e3225_::_lambda_1d99fdbe0740601814aa3a75b33e3225_((__int64)v9, &v7, &v10);
      winrt::Windows::Foundation::EventHandler<winrt::Windows::UI::WindowId>::EventHandler<winrt::Windows::UI::WindowId>(
        a1,
        v5);
    }
    else
    {
      *a1 = *a2;
      Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef(a1);
    }
    if ( v7 )
      winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v7);
  }
  return a1;
}
