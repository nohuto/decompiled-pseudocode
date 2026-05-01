/*
 * XREFs of ?ErrorCode@?$consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallStatus@UIAppInstallStatus@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x1805CF1B4
 * Callers:
 *     ??R_lambda_9f5c7493512f30cd4ebf6dfda1287bbc_@@QEAA@AEBUAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@AEBUIInspectable@Foundation@67@@Z @ 0x1805CC4F4 (--R_lambda_9f5c7493512f30cd4ebf6dfda1287bbc_@@QEAA@AEBUAppInstallItem@InstallControl@Preview@Sto.c)
 * Callees:
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802DF798 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_DWORD *__fastcall winrt::impl::consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallStatus<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallStatus>::ErrorCode(
        __int64 *a1,
        _DWORD *a2)
{
  __int64 v2; // rcx
  int v4; // eax
  int v6; // [rsp+20h] [rbp-28h] BYREF
  __int128 v7; // [rsp+28h] [rbp-20h]
  int v8; // [rsp+50h] [rbp+8h] BYREF

  *a2 = 0;
  v2 = *a1;
  v6 = 0;
  v7 = 0LL;
  v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 80LL))(v2);
  winrt::check_hresult(&v8, v4, (__int64)&v6);
  return a2;
}
