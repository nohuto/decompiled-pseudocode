/*
 * XREFs of ?UpdateIsVisible@AppViewDataSourceAdapterBase@@MEAAXPEAUIApplicationView@@PEAUIRootSwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x1801CF960
 * Callers:
 *     <none>
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800A59D8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall AppViewDataSourceAdapterBase::UpdateIsVisible(
        AppViewDataSourceAdapterBase *this,
        struct IApplicationView *a2,
        struct Windows::Internal::ComposableShell::Multitasking::IRootSwitchItem *a3)
{
  __int64 v3; // rax
  int v6; // eax
  int v7; // eax
  __int64 v8; // rax
  int v9; // eax
  __int64 (__fastcall *v10)(struct Windows::Internal::ComposableShell::Multitasking::IRootSwitchItem *, __int64); // rbx
  __int64 v11; // rdx
  int v12; // eax
  int v13; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int v15; // [rsp+38h] [rbp+10h] BYREF
  HWND hWnd; // [rsp+48h] [rbp+20h] BYREF

  v3 = *(_QWORD *)a2;
  v15 = 0;
  v6 = (*(__int64 (__fastcall **)(struct IApplicationView *, int *))(v3 + 88))(a2, &v15);
  if ( v6 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x116,
      (int)"pcshell\\private\\shell\\inc\\AppViewDataSource\\AppViewDataSourceAdapterBase.h",
      (const char *)(unsigned int)v6,
      v13);
  if ( v15 )
  {
    v8 = *(_QWORD *)a2;
    hWnd = 0LL;
    v9 = (*(__int64 (__fastcall **)(struct IApplicationView *, HWND *))(v8 + 72))(a2, &hWnd);
    if ( v9 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x11E,
        (int)"pcshell\\private\\shell\\inc\\AppViewDataSource\\AppViewDataSourceAdapterBase.h",
        (const char *)(unsigned int)v9,
        v13);
    v10 = *(__int64 (__fastcall **)(struct Windows::Internal::ComposableShell::Multitasking::IRootSwitchItem *, __int64))(*(_QWORD *)a3 + 112LL);
    LOBYTE(v11) = !IsIconic(hWnd);
    v12 = v10(a3, v11);
    if ( v12 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x11F,
        (int)"pcshell\\private\\shell\\inc\\AppViewDataSource\\AppViewDataSourceAdapterBase.h",
        (const char *)(unsigned int)v12,
        v13);
  }
  else
  {
    v7 = (*(__int64 (__fastcall **)(struct Windows::Internal::ComposableShell::Multitasking::IRootSwitchItem *, _QWORD))(*(_QWORD *)a3 + 112LL))(
           a3,
           0LL);
    if ( v7 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x119,
        (int)"pcshell\\private\\shell\\inc\\AppViewDataSource\\AppViewDataSourceAdapterBase.h",
        (const char *)(unsigned int)v7,
        v13);
  }
}
