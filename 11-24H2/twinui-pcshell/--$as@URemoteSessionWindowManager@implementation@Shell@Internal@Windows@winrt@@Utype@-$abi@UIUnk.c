/*
 * XREFs of ??$as@URemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@6@$0A@@impl@winrt@@YA?AU?$com_ptr@URemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@@1@PEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@01@@Z @ 0x18063C808
 * Callers:
 *     _lambda_1b883f708510332cacc7ae6dcbc72df7_::operator() @ 0x18063F1B0 (_lambda_1b883f708510332cacc7ae6dcbc72df7_--operator().c)
 * Callees:
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802DF798 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 *__fastcall winrt::impl::as<winrt::Windows::Internal::Shell::implementation::RemoteSessionWindowManager,winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type,0>(
        __int64 *a1,
        __int64 (__fastcall ***a2)(_QWORD, __int128 *, __int64 *))
{
  __int64 (__fastcall **v3)(_QWORD, __int128 *, __int64 *); // rax
  int v4; // eax
  int v6; // [rsp+28h] [rbp-20h] BYREF
  __int128 v7; // [rsp+30h] [rbp-18h]
  int v8; // [rsp+58h] [rbp+10h] BYREF
  __int64 v9; // [rsp+60h] [rbp+18h] BYREF

  if ( a2 )
  {
    v9 = 0LL;
    v6 = 0;
    v3 = *a2;
    v7 = 0LL;
    v4 = (*v3)(
           a2,
           &winrt::impl::uncloaked_iids<winrt::impl::interface_list<winrt::Windows::Internal::Shell::RemoteSessionWindowManager>>::value,
           &v9);
    winrt::check_hresult(&v8, v4, (__int64)&v6);
    *a1 = (v9 - 16) & -(__int64)(v9 != 0);
  }
  else
  {
    *a1 = 0LL;
  }
  return a1;
}
