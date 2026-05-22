/*
 * XREFs of ?CreateWatcher@?$consume_Windows_Internal_ApplicationModel_WindowManagement_IAppViewStatics@UIAppViewStatics@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x1800938E0
 * Callers:
 *     ?_lambda_invoker_cdecl_@_lambda_bde3f744bf3d16209662d38da0fd875b_@@CA@AEBUIAppViewStatics@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@Z @ 0x180093840 (-_lambda_invoker_cdecl_@_lambda_bde3f744bf3d16209662d38da0fd875b_@@CA@AEBUIAppViewStatics@Window.c)
 *     ?CreateWatcher@AppViewInProc@WindowManagement@ApplicationModel@Internal@Windows@winrt@@SA@XZ @ 0x180093868 (-CreateWatcher@AppViewInProc@WindowManagement@ApplicationModel@Internal@Windows@winrt@@SA@XZ.c)
 * Callees:
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1800A8FD8 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_QWORD *__fastcall winrt::impl::consume_Windows_Internal_ApplicationModel_WindowManagement_IAppViewStatics<winrt::Windows::Internal::ApplicationModel::WindowManagement::IAppViewStatics>::CreateWatcher(
        __int64 **a1,
        _QWORD *a2)
{
  __int64 *v2; // rcx
  __int64 v4; // rax
  unsigned int v5; // eax
  int v7; // [rsp+28h] [rbp-20h] BYREF
  __int128 v8; // [rsp+30h] [rbp-18h]
  __int64 v9; // [rsp+50h] [rbp+8h] BYREF
  _QWORD *v10; // [rsp+58h] [rbp+10h] BYREF

  v10 = a2;
  v2 = *a1;
  v9 = 0LL;
  v7 = 0;
  v4 = *v2;
  v8 = 0LL;
  v5 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(v4 + 96))(v2, &v9);
  winrt::check_hresult(&v10, v5, &v7);
  *a2 = v9;
  return a2;
}
