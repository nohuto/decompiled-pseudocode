/*
 * XREFs of ??R_lambda_125aca5befc74b4b5a948ae8fd19779a_@@QEBA@AEBUILowLatencyActionStatics@Shell@UI@WindowsUdk@winrt@@@Z @ 0x1803A1D60
 * Callers:
 *     ??$call@AEAV_lambda_125aca5befc74b4b5a948ae8fd19779a_@@@?$factory_cache_entry@ULowLatencyAction@Shell@UI@WindowsUdk@winrt@@UILowLatencyActionStatics@2345@@impl@winrt@@QEAA?A_PAEAV_lambda_125aca5befc74b4b5a948ae8fd19779a_@@@Z @ 0x1803A18B0 (--$call@AEAV_lambda_125aca5befc74b4b5a948ae8fd19779a_@@@-$factory_cache_entry@ULowLatencyAction@.c)
 *     ?Create@LowLatencyAction@Shell@UI@WindowsUdk@winrt@@SA@AEBUhstring@param@5@@Z @ 0x1803A23C0 (-Create@LowLatencyAction@Shell@UI@WindowsUdk@winrt@@SA@AEBUhstring@param@5@@Z.c)
 * Callees:
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802DF798 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_QWORD *__fastcall _lambda_125aca5befc74b4b5a948ae8fd19779a_::operator()(__int64 **a1, _QWORD *a2, __int64 **a3)
{
  __int64 *v4; // rdx
  __int64 *v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rax
  int v8; // eax
  int v10; // [rsp+28h] [rbp-20h] BYREF
  __int128 v11; // [rsp+30h] [rbp-18h]
  __int64 v12; // [rsp+50h] [rbp+8h] BYREF
  _QWORD *v13; // [rsp+58h] [rbp+10h] BYREF

  v13 = a2;
  v4 = *a1;
  v5 = *a3;
  v12 = 0LL;
  v10 = 0;
  v6 = *v4;
  v7 = *v5;
  v11 = 0LL;
  v8 = (*(__int64 (__fastcall **)(__int64 *, __int64, __int64 *))(v7 + 48))(v5, v6, &v12);
  winrt::check_hresult((int *)&v13, v8, (__int64)&v10);
  *a2 = v12;
  return a2;
}
