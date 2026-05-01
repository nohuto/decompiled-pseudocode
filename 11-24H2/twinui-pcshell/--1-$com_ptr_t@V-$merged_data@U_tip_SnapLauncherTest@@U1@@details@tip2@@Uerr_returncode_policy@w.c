/*
 * XREFs of ??1?$com_ptr_t@V?$merged_data@U_tip_SnapLauncherTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18059CC30
 * Callers:
 *     ??$_Freenode@V?$allocator@U?$_List_node@U?$pair@$$CB_KV?$tip_test@V?$merged_data@U_tip_SnapLauncherTest@@U1@@details@tip2@@@tip2@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CB_KV?$tip_test@V?$merged_data@U_tip_SnapLauncherTest@@U1@@details@tip2@@@tip2@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CB_KV?$tip_test@V?$merged_data@U_tip_SnapLauncherTest@@U1@@details@tip2@@@tip2@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x18059AFC8 (--$_Freenode@V-$allocator@U-$_List_node@U-$pair@$$CB_KV-$tip_test@V-$merged_data@U_tip_SnapLaunc.c)
 *     ??1?$_List_node_emplace_op2@V?$allocator@U?$_List_node@U?$pair@$$CBHV?$tip_test@V?$merged_data@U_tip_SnapLauncherTest@@U1@@details@tip2@@@tip2@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x18059CB70 (--1-$_List_node_emplace_op2@V-$allocator@U-$_List_node@U-$pair@$$CBHV-$tip_test@V-$merged_data@U.c)
 *     ??1?$pair@_KV?$tip_test@V?$merged_data@U_tip_SnapLauncherTest@@U1@@details@tip2@@@tip2@@@std@@QEAA@XZ @ 0x18059CD68 (--1-$pair@_KV-$tip_test@V-$merged_data@U_tip_SnapLauncherTest@@U1@@details@tip2@@@tip2@@@std@@QE.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_SnapLauncherTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x18059CD78 (--1-$test_data_control@V-$merged_data@U_tip_SnapLauncherTest@@U1@@details@tip2@@@tip2@@QEAA@XZ.c)
 *     ??1?$tip_test@V?$merged_data@U_tip_SnapLauncherTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x18059CDB0 (--1-$tip_test@V-$merged_data@U_tip_SnapLauncherTest@@U1@@details@tip2@@@tip2@@QEAA@XZ.c)
 *     ?GetAndDeleteSnapIdForWindow@CShellSnapComponent@@UEAAJH_KPEAURect@Foundation@Windows@@@Z @ 0x18059E3A0 (-GetAndDeleteSnapIdForWindow@CShellSnapComponent@@UEAAJH_KPEAURect@Foundation@Windows@@@Z.c)
 *     ?StartSnapLaunch@CShellSnapComponent@@UEAAJHHE@Z @ 0x1805A13D0 (-StartSnapLaunch@CShellSnapComponent@@UEAAJHHE@Z.c)
 *     ?ensure_data@?$tip_test@V?$merged_data@U_tip_SnapLauncherTest@@U1@@details@tip2@@@tip2@@AEBAAEAV?$com_ptr_t@V?$merged_data@U_tip_SnapLauncherTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@XZ @ 0x1805A3C44 (-ensure_data@-$tip_test@V-$merged_data@U_tip_SnapLauncherTest@@U1@@details@tip2@@@tip2@@AEBAAEAV.c)
 * Callees:
 *     ?Release@?$merged_data@U_tip_SnapLauncherTest@@U1@@details@tip2@@AEAAKXZ @ 0x1805A06E8 (-Release@-$merged_data@U_tip_SnapLauncherTest@@U1@@details@tip2@@AEAAKXZ.c)
 */

__int64 __fastcall wil::com_ptr_t<tip2::details::merged_data<_tip_SnapLauncherTest,_tip_SnapLauncherTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_SnapLauncherTest,_tip_SnapLauncherTest>,wil::err_returncode_policy>(
        void **a1)
{
  void *v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return tip2::details::merged_data<_tip_SnapLauncherTest,_tip_SnapLauncherTest>::Release(v1);
  return result;
}
