/*
 * XREFs of ?AddItemForView@AppViewDataSourceAdapterBase@@IEAA?AV?$com_ptr_t@UIRootSwitchItem@Multitasking@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@PEAUIApplicationView@@@Z @ 0x180170FBC
 * Callers:
 *     ?InitializeAppViewItems@AppViewDataSourceAdapter@@AEAAXXZ @ 0x18002BD38 (-InitializeAppViewItems@AppViewDataSourceAdapter@@AEAAXXZ.c)
 *     ?OnApplicationViewAdded@AppViewDataSourceAdapterBase@@MEAAXPEAUIApplicationView@@PEAUIRootSwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x180170F50 (-OnApplicationViewAdded@AppViewDataSourceAdapterBase@@MEAAXPEAUIApplicationView@@PEAUIRootSwitch.c)
 *     ?OnApplicationViewAppIdChanged@AppViewDataSourceAdapterBase@@MEAAXPEAUIApplicationView@@PEAUIRootSwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x1801F97D0 (-OnApplicationViewAppIdChanged@AppViewDataSourceAdapterBase@@MEAAXPEAUIApplicationView@@PEAUIRoo.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800A59D8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_Try_emplace@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@$$V@?$map@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UIRootSwitchItem@Multitasking@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@2@U?$less@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@@std@@V?$allocator@U?$pair@$$CBV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UIRootSwitchItem@Multitasking@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@2@@std@@@5@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UIRootSwitchItem@Multitasking@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@2@@std@@PEAX@std@@_N@1@$$QEAV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x1801711EC (--$_Try_emplace@V-$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@$$V@-$map@V-$co.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
_QWORD *__fastcall AppViewDataSourceAdapterBase::AddItemForView(_QWORD *a1, _QWORD *a2, __int64 a3)
{
  __int64 *v6; // rcx
  __int64 v7; // rax
  int v8; // eax
  __int64 v9; // rdx
  int v10; // eax
  int v11; // eax
  int v12; // eax
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rdi
  _BYTE v17[32]; // [rsp+28h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v19; // [rsp+50h] [rbp+8h] BYREF
  _QWORD *v20; // [rsp+58h] [rbp+10h]

  v20 = a2;
  *a2 = 0LL;
  v6 = (__int64 *)a1[3];
  v7 = *v6;
  *a2 = 0LL;
  v8 = (*(__int64 (__fastcall **)(__int64 *))(v7 + 48))(v6);
  if ( v8 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0xB8,
      (int)"pcshell\\private\\shell\\inc\\AppViewDataSource\\AppViewDataSourceAdapterBase.h",
      (const char *)(unsigned int)v8,
      1);
  (*(void (__fastcall **)(_QWORD *, __int64, _QWORD))(*a1 + 88LL))(a1, a3, *a2);
  (*(void (__fastcall **)(_QWORD *, __int64, _QWORD))(*a1 + 96LL))(a1, a3, *a2);
  (*(void (__fastcall **)(_QWORD *, __int64, _QWORD))(*a1 + 104LL))(a1, a3, *a2);
  (*(void (__fastcall **)(_QWORD *, __int64, _QWORD))(*a1 + 112LL))(a1, a3, *a2);
  (*(void (__fastcall **)(_QWORD *, __int64, _QWORD))(*a1 + 120LL))(a1, a3, *a2);
  (*(void (__fastcall **)(_QWORD *, __int64, _QWORD))(*a1 + 136LL))(a1, a3, *a2);
  (*(void (__fastcall **)(_QWORD *, __int64, _QWORD))(*a1 + 128LL))(a1, a3, *a2);
  LOBYTE(v9) = 1;
  v10 = (*(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*a2 + 80LL))(*a2, v9);
  if ( v10 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0xC3,
      (int)"pcshell\\private\\shell\\inc\\AppViewDataSource\\AppViewDataSourceAdapterBase.h",
      (const char *)(unsigned int)v10,
      1);
  v11 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*a2 + 72LL))(*a2, 0LL);
  if ( v11 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0xC6,
      (int)"pcshell\\private\\shell\\inc\\AppViewDataSource\\AppViewDataSourceAdapterBase.h",
      (const char *)(unsigned int)v11,
      1);
  v12 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)a1[3] + 56LL))(a1[3], *a2);
  if ( v12 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0xC9,
      (int)"pcshell\\private\\shell\\inc\\AppViewDataSource\\AppViewDataSourceAdapterBase.h",
      (const char *)(unsigned int)v12,
      1);
  v19 = a3;
  if ( a3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a3 + 8LL))(a3);
  v13 = std::map<wil::com_ptr_t<IApplicationView,wil::err_exception_policy>,wil::com_ptr_t<Windows::Internal::ComposableShell::Multitasking::IRootSwitchItem,wil::err_exception_policy>>::_Try_emplace<wil::com_ptr_t<IApplicationView,wil::err_exception_policy>,>(
          a1 + 12,
          v17,
          &v19);
  v14 = *a2;
  v15 = *(_QWORD *)(*(_QWORD *)v13 + 40LL);
  *(_QWORD *)(*(_QWORD *)v13 + 40LL) = *a2;
  if ( v14 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 8LL))(v14);
  if ( v15 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  if ( v19 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
  return a2;
}
