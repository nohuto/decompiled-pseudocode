/*
 * XREFs of ??$as@UIPropertySet@Collections@Foundation@Windows@winrt@@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@5@$0A@@impl@winrt@@YA?AUIPropertySet@Collections@Foundation@Windows@1@PEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@01@@Z @ 0x1803689D8
 * Callers:
 *     ?GamingAppRequestsLegacyNexus@NexusPolicyManager@@CA_NXZ @ 0x180369358 (-GamingAppRequestsLegacyNexus@NexusPolicyManager@@CA_NXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802DF798 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_QWORD *__fastcall winrt::impl::as<winrt::Windows::Foundation::Collections::IPropertySet,winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type,0>(
        _QWORD *a1,
        __int64 (__fastcall ***a2)(_QWORD, void *, _QWORD **))
{
  __int64 (__fastcall **v3)(_QWORD, void *, _QWORD **); // rax
  int v4; // eax
  int v6; // [rsp+24h] [rbp-34h] BYREF
  int v7; // [rsp+28h] [rbp-30h] BYREF
  __int128 v8; // [rsp+30h] [rbp-28h]
  _QWORD *v9; // [rsp+40h] [rbp-18h] BYREF

  v9 = a1;
  if ( a2 )
  {
    v9 = 0LL;
    v7 = 0;
    v3 = *a2;
    v8 = 0LL;
    v4 = (*v3)(a2, &winrt::impl::guid_v<winrt::Windows::Foundation::Collections::IPropertySet>, &v9);
    winrt::check_hresult(&v6, v4, (__int64)&v7);
    *a1 = v9;
  }
  else
  {
    *a1 = 0LL;
  }
  return a1;
}
