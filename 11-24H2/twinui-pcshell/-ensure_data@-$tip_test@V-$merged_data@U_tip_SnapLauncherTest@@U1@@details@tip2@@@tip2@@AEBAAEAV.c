/*
 * XREFs of ?ensure_data@?$tip_test@V?$merged_data@U_tip_SnapLauncherTest@@U1@@details@tip2@@@tip2@@AEBAAEAV?$com_ptr_t@V?$merged_data@U_tip_SnapLauncherTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@XZ @ 0x1805A3C44
 * Callers:
 *     ??0?$tip_test@V?$merged_data@U_tip_SnapLauncherTest@@U1@@details@tip2@@@tip2@@QEAA@AEBV01@@Z @ 0x18059C504 (--0-$tip_test@V-$merged_data@U_tip_SnapLauncherTest@@U1@@details@tip2@@@tip2@@QEAA@AEBV01@@Z.c)
 *     ??C?$tip_test@V?$merged_data@U_tip_SnapLauncherTest@@U1@@details@tip2@@@tip2@@QEAA?AV?$test_data_control@V?$merged_data@U_tip_SnapLauncherTest@@U1@@details@tip2@@@1@XZ @ 0x18059D420 (--C-$tip_test@V-$merged_data@U_tip_SnapLauncherTest@@U1@@details@tip2@@@tip2@@QEAA-AV-$test_data.c)
 *     ?StartSnapLaunch@CShellSnapComponent@@UEAAJHHE@Z @ 0x1805A13D0 (-StartSnapLaunch@CShellSnapComponent@@UEAAJHHE@Z.c)
 * Callees:
 *     ?FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ @ 0x18028C6A4 (-FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ.c)
 *     ??0?$merged_data@U_tip_SnapLauncherTest@@U1@@details@tip2@@QEAA@XZ @ 0x18059C3A0 (--0-$merged_data@U_tip_SnapLauncherTest@@U1@@details@tip2@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@V?$merged_data@U_tip_SnapLauncherTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18059CC30 (--1-$com_ptr_t@V-$merged_data@U_tip_SnapLauncherTest@@U1@@details@tip2@@Uerr_returncode_policy@w.c)
 *     ?Release@?$merged_data@U_tip_SnapLauncherTest@@U1@@details@tip2@@AEAAKXZ @ 0x1805A06E8 (-Release@-$merged_data@U_tip_SnapLauncherTest@@U1@@details@tip2@@AEAAKXZ.c)
 */

volatile signed __int32 **__fastcall tip2::tip_test<tip2::details::merged_data<_tip_SnapLauncherTest,_tip_SnapLauncherTest>>::ensure_data(
        volatile signed __int32 **a1)
{
  LPVOID v2; // rax
  wil::details::in1diag3 *v3; // rcx
  __int64 v4; // rax
  volatile signed __int32 *v5; // rcx
  void *v7; // [rsp+30h] [rbp+8h] BYREF

  if ( !*a1 )
  {
    v2 = CoTaskMemAlloc(0x158uLL);
    if ( !v2 )
      wil::details::in1diag3::FailFastImmediate_Unexpected(v3);
    v4 = tip2::details::merged_data<_tip_SnapLauncherTest,_tip_SnapLauncherTest>::merged_data<_tip_SnapLauncherTest,_tip_SnapLauncherTest>((__int64)v2);
    v5 = *a1;
    v7 = 0LL;
    *a1 = (volatile signed __int32 *)v4;
    if ( v5 )
      tip2::details::merged_data<_tip_SnapLauncherTest,_tip_SnapLauncherTest>::Release(v5);
    wil::com_ptr_t<tip2::details::merged_data<_tip_SnapLauncherTest,_tip_SnapLauncherTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_SnapLauncherTest,_tip_SnapLauncherTest>,wil::err_returncode_policy>(&v7);
  }
  return a1;
}
