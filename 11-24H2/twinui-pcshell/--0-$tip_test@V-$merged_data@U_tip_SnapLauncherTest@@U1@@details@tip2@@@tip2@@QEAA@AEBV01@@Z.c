/*
 * XREFs of ??0?$tip_test@V?$merged_data@U_tip_SnapLauncherTest@@U1@@details@tip2@@@tip2@@QEAA@AEBV01@@Z @ 0x18059C504
 * Callers:
 *     ?GetAndDeleteSnapIdForWindow@CShellSnapComponent@@UEAAJH_KPEAURect@Foundation@Windows@@@Z @ 0x18059E3A0 (-GetAndDeleteSnapIdForWindow@CShellSnapComponent@@UEAAJH_KPEAURect@Foundation@Windows@@@Z.c)
 *     ?StartSnapLaunch@CShellSnapComponent@@UEAAJHHE@Z @ 0x1805A13D0 (-StartSnapLaunch@CShellSnapComponent@@UEAAJHHE@Z.c)
 * Callees:
 *     ?ensure_data@?$tip_test@V?$merged_data@U_tip_SnapLauncherTest@@U1@@details@tip2@@@tip2@@AEBAAEAV?$com_ptr_t@V?$merged_data@U_tip_SnapLauncherTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@XZ @ 0x1805A3C44 (-ensure_data@-$tip_test@V-$merged_data@U_tip_SnapLauncherTest@@U1@@details@tip2@@@tip2@@AEBAAEAV.c)
 */

__int64 *__fastcall tip2::tip_test<tip2::details::merged_data<_tip_SnapLauncherTest,_tip_SnapLauncherTest>>::tip_test<tip2::details::merged_data<_tip_SnapLauncherTest,_tip_SnapLauncherTest>>(
        __int64 *a1,
        __int64 a2)
{
  __int64 *v3; // rax
  __int64 v4; // rdx

  v3 = (__int64 *)tip2::tip_test<tip2::details::merged_data<_tip_SnapLauncherTest,_tip_SnapLauncherTest>>::ensure_data(a2);
  v4 = *v3;
  *a1 = *v3;
  if ( v4 )
    _InterlockedIncrement((volatile signed __int32 *)(v4 + 336));
  return a1;
}
