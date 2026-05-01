/*
 * XREFs of ?_lambda_invoker_cdecl_@_lambda_d40a3c21b753ac56a0209c4a8237fefe_@@CA@AEBUIIntegratedServicesGeographicRegionPoliciesStatics@Profile@System@WindowsUdk@winrt@@@Z @ 0x1805C2280
 * Callers:
 *     <none>
 * Callees:
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802DF798 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall _lambda_d40a3c21b753ac56a0209c4a8237fefe_::_lambda_invoker_cdecl_(
        const struct winrt::WindowsUdk::System::Profile::IIntegratedServicesGeographicRegionPoliciesStatics *a1)
{
  __int64 v1; // rcx
  int v2; // eax
  int v4; // [rsp+20h] [rbp-28h] BYREF
  __int128 v5; // [rsp+28h] [rbp-20h]
  char v6; // [rsp+50h] [rbp+8h] BYREF
  int v7; // [rsp+58h] [rbp+10h] BYREF

  v1 = *(_QWORD *)a1;
  v4 = 0;
  v6 = 0;
  v5 = 0LL;
  v2 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v1 + 152LL))(v1, &v6);
  winrt::check_hresult(&v7, v2, (__int64)&v4);
  return v6;
}
