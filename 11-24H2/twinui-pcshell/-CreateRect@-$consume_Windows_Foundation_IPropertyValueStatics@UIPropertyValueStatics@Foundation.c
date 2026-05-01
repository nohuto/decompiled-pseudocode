/*
 * XREFs of ?CreateRect@?$consume_Windows_Foundation_IPropertyValueStatics@UIPropertyValueStatics@Foundation@Windows@winrt@@@impl@winrt@@QEBA@AEBURect@Foundation@Windows@3@@Z @ 0x1801BB984
 * Callers:
 *     ??0?$IReference@URect@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@QEAA@AEBURect@123@@Z @ 0x1801BB854 (--0-$IReference@URect@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@QEAA@AEBURect@123@@Z.c)
 *     ??R_lambda_d2d745a365ed96454831d77c0426b2fd_@@QEBA@AEBUIPropertyValueStatics@Foundation@Windows@winrt@@@Z @ 0x1801BB95C (--R_lambda_d2d745a365ed96454831d77c0426b2fd_@@QEBA@AEBUIPropertyValueStatics@Foundation@Windows@.c)
 * Callees:
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802DF798 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_QWORD *__fastcall winrt::impl::consume_Windows_Foundation_IPropertyValueStatics<winrt::Windows::Foundation::IPropertyValueStatics>::CreateRect(
        __int64 *a1,
        _QWORD *a2,
        __int128 *a3)
{
  __int64 v3; // rcx
  __int64 (__fastcall *v5)(__int64, __int128 *, __int64 *); // rax
  unsigned int v6; // eax
  __int128 v8; // [rsp+30h] [rbp-38h] BYREF
  int v9; // [rsp+40h] [rbp-28h] BYREF
  __int128 v10; // [rsp+48h] [rbp-20h]
  __int64 v11; // [rsp+70h] [rbp+8h] BYREF
  _QWORD *v12; // [rsp+78h] [rbp+10h] BYREF

  v12 = a2;
  v3 = *a1;
  v11 = 0LL;
  v9 = 0;
  v10 = 0LL;
  v5 = *(__int64 (__fastcall **)(__int64, __int128 *, __int64 *))(*(_QWORD *)v3 + 200LL);
  v8 = *a3;
  v6 = v5(v3, &v8, &v11);
  winrt::check_hresult(&v12, v6, &v9);
  *a2 = v11;
  return a2;
}
