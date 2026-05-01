/*
 * XREFs of ?OnWindowArrangementMessage@WindowDragInputProvider@@AEAA_JI_K_J@Z @ 0x180273D10
 * Callers:
 *     ?MsgWindowWndProc@WindowDragInputProvider@@CA_JPEAUHWND__@@I_K_J@Z @ 0x180273760 (-MsgWindowWndProc@WindowDragInputProvider@@CA_JPEAUHWND__@@I_K_J@Z.c)
 * Callees:
 *     ?_lambda_invoker_cdecl_@_lambda_eb21f5065b31fe54e3e22ffca6c3b9a9_@@CA@AEBUIIntegratedServicesGeographicRegionPoliciesStatics@Profile@System@WindowsUdk@winrt@@@Z @ 0x180052A10 (-_lambda_invoker_cdecl_@_lambda_eb21f5065b31fe54e3e22ffca6c3b9a9_@@CA@AEBUIIntegratedServicesGeo.c)
 *     ?OnArrangementReset@WindowDragInputProvider@@AEAAXAEBUtagSHELL_WND_MGMT_SIMPLE_PAYLOAD@@@Z @ 0x18027385C (-OnArrangementReset@WindowDragInputProvider@@AEAAXAEBUtagSHELL_WND_MGMT_SIMPLE_PAYLOAD@@@Z.c)
 *     ?OnGetArrangementRects@WindowDragInputProvider@@AEAAXAEAU_WINDOW_ARRANGEMENT_INFO@@@Z @ 0x1802739C8 (-OnGetArrangementRects@WindowDragInputProvider@@AEAAXAEAU_WINDOW_ARRANGEMENT_INFO@@@Z.c)
 *     ?complete_without_lock@?$shared_data@$0A@$0A@$0A@@details@tip2@@AEAAXXZ @ 0x180288ABC (-complete_without_lock@-$shared_data@$0A@$0A@$0A@@details@tip2@@AEAAXXZ.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_WindowDragInputProviderTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x18028A664 (--1-$test_data_control@V-$merged_data@U_tip_WindowDragInputProviderTest@@U1@@details@tip2@@@tip2.c)
 *     ?start_and_watch_errors@?$tip_test@V?$merged_data@U_tip_WindowDragInputProviderTest@@U1@@details@tip2@@@tip2@@QEAA?AV?$test_watcher@V?$merged_data@U_tip_WindowDragInputProviderTest@@U1@@details@tip2@@@2@XZ @ 0x18028AEC8 (-start_and_watch_errors@-$tip_test@V-$merged_data@U_tip_WindowDragInputProviderTest@@U1@@details.c)
 *     ??C?$tip_test@V?$merged_data@U_tip_WindowDragInputProviderTest@@U1@@details@tip2@@@tip2@@QEAA?AV?$test_data_control@V?$merged_data@U_tip_WindowDragInputProviderTest@@U1@@details@tip2@@@1@XZ @ 0x18028B3B0 (--C-$tip_test@V-$merged_data@U_tip_WindowDragInputProviderTest@@U1@@details@tip2@@@tip2@@QEAA-AV.c)
 *     ??1?$test_watcher@V?$merged_data@U_tip_WindowDragInputProviderTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x180296FAC (--1-$test_watcher@V-$merged_data@U_tip_WindowDragInputProviderTest@@U1@@details@tip2@@@tip2@@QEA.c)
 *     ??1?$com_ptr_t@V?$merged_data@U_tip_WindowDragInputProviderTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180296FD4 (--1-$com_ptr_t@V-$merged_data@U_tip_WindowDragInputProviderTest@@U1@@details@tip2@@Uerr_returnco.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18029721C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$verify_hresult@J@wil@@YAJJ@Z @ 0x1802CFC8C (--$verify_hresult@J@wil@@YAJJ@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall WindowDragInputProvider::OnWindowArrangementMessage(
        WindowDragInputProvider *this,
        int a2,
        __int64 a3,
        __int64 a4)
{
  const struct winrt::WindowsUdk::System::Profile::IIntegratedServicesGeographicRegionPoliciesStatics *v7; // rcx
  int v8; // ebx
  int v9; // ebx
  int v11; // ebx
  unsigned int v12; // eax
  int v13[16]; // [rsp+20h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]
  char v15; // [rsp+80h] [rbp+20h] BYREF
  __int64 v16; // [rsp+90h] [rbp+30h] BYREF

  v16 = a3;
  v7 = (WindowDragInputProvider *)((char *)this + 40);
  if ( !*(_QWORD *)v7 || _lambda_eb21f5065b31fe54e3e22ffca6c3b9a9_::_lambda_invoker_cdecl_(v7) )
    return 0LL;
  v16 = 0LL;
  *(_DWORD *)(*(_QWORD *)tip2::tip_test<tip2::details::merged_data<_tip_WindowDragInputProviderTest,_tip_WindowDragInputProviderTest>>::operator->(
                           &v16,
                           &v15)
            + 272LL) = a2;
  tip2::test_data_control<tip2::details::merged_data<_tip_WindowDragInputProviderTest,_tip_WindowDragInputProviderTest>>::~test_data_control<tip2::details::merged_data<_tip_WindowDragInputProviderTest,_tip_WindowDragInputProviderTest>>(&v15);
  tip2::tip_test<tip2::details::merged_data<_tip_WindowDragInputProviderTest,_tip_WindowDragInputProviderTest>>::start_and_watch_errors(
    &v16,
    v13);
  v8 = a2 - 833;
  if ( v8 )
  {
    if ( v8 != 1 )
    {
      v12 = wil::verify_hresult<long>(2147942487LL);
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0xC3,
        (unsigned int)"pcshell\\twinui\\snapcomponent\\lib\\windowdraginputprovider.cpp",
        (const char *)v12,
        v13[0]);
    }
    v9 = *(_DWORD *)(a4 + 8);
    *(_DWORD *)(*(_QWORD *)tip2::tip_test<tip2::details::merged_data<_tip_WindowDragInputProviderTest,_tip_WindowDragInputProviderTest>>::operator->(
                             &v16,
                             &v15)
              + 276LL) = v9;
    tip2::test_data_control<tip2::details::merged_data<_tip_WindowDragInputProviderTest,_tip_WindowDragInputProviderTest>>::~test_data_control<tip2::details::merged_data<_tip_WindowDragInputProviderTest,_tip_WindowDragInputProviderTest>>(&v15);
    if ( *(_DWORD *)(a4 + 8) == 3 )
      WindowDragInputProvider::OnArrangementReset(this, (const struct tagSHELL_WND_MGMT_SIMPLE_PAYLOAD *)(a4 + 16));
    goto LABEL_7;
  }
  v11 = *(_DWORD *)(a4 + 8);
  *(_DWORD *)(*(_QWORD *)tip2::tip_test<tip2::details::merged_data<_tip_WindowDragInputProviderTest,_tip_WindowDragInputProviderTest>>::operator->(
                           &v16,
                           &v15)
            + 276LL) = v11;
  tip2::test_data_control<tip2::details::merged_data<_tip_WindowDragInputProviderTest,_tip_WindowDragInputProviderTest>>::~test_data_control<tip2::details::merged_data<_tip_WindowDragInputProviderTest,_tip_WindowDragInputProviderTest>>(&v15);
  if ( *(_DWORD *)(a4 + 8) )
  {
LABEL_7:
    if ( v16 )
      tip2::details::shared_data<0,0,0>::complete_without_lock(v16 + 8);
    tip2::test_watcher<tip2::details::merged_data<_tip_WindowDragInputProviderTest,_tip_WindowDragInputProviderTest>>::~test_watcher<tip2::details::merged_data<_tip_WindowDragInputProviderTest,_tip_WindowDragInputProviderTest>>(v13);
    wil::com_ptr_t<tip2::details::merged_data<_tip_WindowDragInputProviderTest,_tip_WindowDragInputProviderTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_WindowDragInputProviderTest,_tip_WindowDragInputProviderTest>,wil::err_returncode_policy>(&v16);
    return 0LL;
  }
  WindowDragInputProvider::OnGetArrangementRects(this, (struct _WINDOW_ARRANGEMENT_INFO *)(a4 + 16));
  tip2::test_watcher<tip2::details::merged_data<_tip_WindowDragInputProviderTest,_tip_WindowDragInputProviderTest>>::~test_watcher<tip2::details::merged_data<_tip_WindowDragInputProviderTest,_tip_WindowDragInputProviderTest>>(v13);
  wil::com_ptr_t<tip2::details::merged_data<_tip_WindowDragInputProviderTest,_tip_WindowDragInputProviderTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_WindowDragInputProviderTest,_tip_WindowDragInputProviderTest>,wil::err_returncode_policy>(&v16);
  return 1LL;
}
