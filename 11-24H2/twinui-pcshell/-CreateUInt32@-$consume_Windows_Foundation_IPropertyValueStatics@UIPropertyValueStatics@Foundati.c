/*
 * XREFs of ?CreateUInt32@?$consume_Windows_Foundation_IPropertyValueStatics@UIPropertyValueStatics@Foundation@Windows@winrt@@@impl@winrt@@QEBA@I@Z @ 0x1803B7E0C
 * Callers:
 *     ??R_lambda_32c8b3fea86403d9f21a612c35bffd2c_@@QEBA@AEBUIPropertyValueStatics@Foundation@Windows@winrt@@@Z @ 0x1803B619C (--R_lambda_32c8b3fea86403d9f21a612c35bffd2c_@@QEBA@AEBUIPropertyValueStatics@Foundation@Windows@.c)
 * Callees:
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802DF798 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_QWORD *__fastcall winrt::impl::consume_Windows_Foundation_IPropertyValueStatics<winrt::Windows::Foundation::IPropertyValueStatics>::CreateUInt32(
        __int64 **a1,
        _QWORD *a2,
        unsigned int a3)
{
  __int64 *v3; // rcx
  __int64 v5; // rax
  int v6; // eax
  int v8; // [rsp+28h] [rbp-20h] BYREF
  __int128 v9; // [rsp+30h] [rbp-18h]
  __int64 v10; // [rsp+50h] [rbp+8h] BYREF
  _QWORD *v11; // [rsp+58h] [rbp+10h] BYREF

  v11 = a2;
  v3 = *a1;
  v10 = 0LL;
  v8 = 0;
  v5 = *v3;
  v9 = 0LL;
  v6 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, __int64 *))(v5 + 88))(v3, a3, &v10);
  winrt::check_hresult((int *)&v11, v6, (__int64)&v8);
  *a2 = v10;
  return a2;
}
