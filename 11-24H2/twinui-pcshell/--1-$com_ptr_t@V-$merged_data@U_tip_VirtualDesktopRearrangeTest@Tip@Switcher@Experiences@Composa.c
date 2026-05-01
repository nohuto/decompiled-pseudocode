/*
 * XREFs of ??1?$com_ptr_t@V?$merged_data@U_tip_VirtualDesktopRearrangeTest@Tip@Switcher@Experiences@ComposableShell@WindowsInternal@@U123456@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180493D90
 * Callers:
 *     ??$open_and_watch_errors@V?$tip_test@V?$merged_data@U_tip_VirtualDesktopRearrangeTest@Tip@Switcher@Experiences@ComposableShell@WindowsInternal@@U123456@@details@tip2@@@tip2@@@tip2@@YA?A_PXZ @ 0x180493660 (--$open_and_watch_errors@V-$tip_test@V-$merged_data@U_tip_VirtualDesktopRearrangeTest@Tip@Switch.c)
 *     ??1?$test_watcher@V?$merged_data@U_tip_VirtualDesktopRearrangeTest@Tip@Switcher@Experiences@ComposableShell@WindowsInternal@@U123456@@details@tip2@@@tip2@@QEAA@XZ @ 0x180493DE0 (--1-$test_watcher@V-$merged_data@U_tip_VirtualDesktopRearrangeTest@Tip@Switcher@Experiences@Comp.c)
 *     ?open_helper@?$tip_test@V?$merged_data@U_tip_VirtualDesktopRearrangeTest@Tip@Switcher@Experiences@ComposableShell@WindowsInternal@@U123456@@details@tip2@@@tip2@@AEAA_NPEAU_GUID@@@Z @ 0x1804962BC (-open_helper@-$tip_test@V-$merged_data@U_tip_VirtualDesktopRearrangeTest@Tip@Switcher@Experience.c)
 *     ?watch_errors@?$tip_test@V?$merged_data@U_tip_VirtualDesktopRearrangeTest@Tip@Switcher@Experiences@ComposableShell@WindowsInternal@@U123456@@details@tip2@@@tip2@@QEAA?AV?$test_watcher@V?$merged_data@U_tip_VirtualDesktopRearrangeTest@Tip@Switcher@Experiences@ComposableShell@WindowsInternal@@U123456@@details@tip2@@@2@XZ @ 0x180496400 (-watch_errors@-$tip_test@V-$merged_data@U_tip_VirtualDesktopRearrangeTest@Tip@Switcher@Experienc.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_VirtualDesktopRearrangeTest@Tip@Switcher@Experiences@ComposableShell@WindowsInternal@@U123456@@details@tip2@@@tip2@@QEAA@XZ @ 0x18054F1E8 (--1-$test_data_control@V-$merged_data@U_tip_VirtualDesktopRearrangeTest@Tip@Switcher@Experiences.c)
 * Callees:
 *     ?Release@?$merged_data@U_tip_VirtualDesktopRearrangeTest@Tip@Switcher@Experiences@ComposableShell@WindowsInternal@@U123456@@details@tip2@@AEAAKXZ @ 0x180495660 (-Release@-$merged_data@U_tip_VirtualDesktopRearrangeTest@Tip@Switcher@Experiences@ComposableShel.c)
 */

__int64 __fastcall wil::com_ptr_t<tip2::details::merged_data<WindowsInternal::ComposableShell::Experiences::Switcher::Tip::_tip_VirtualDesktopRearrangeTest,WindowsInternal::ComposableShell::Experiences::Switcher::Tip::_tip_VirtualDesktopRearrangeTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<WindowsInternal::ComposableShell::Experiences::Switcher::Tip::_tip_VirtualDesktopRearrangeTest,WindowsInternal::ComposableShell::Experiences::Switcher::Tip::_tip_VirtualDesktopRearrangeTest>,wil::err_returncode_policy>(
        void **a1)
{
  void *v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return tip2::details::merged_data<WindowsInternal::ComposableShell::Experiences::Switcher::Tip::_tip_VirtualDesktopRearrangeTest,WindowsInternal::ComposableShell::Experiences::Switcher::Tip::_tip_VirtualDesktopRearrangeTest>::Release(v1);
  return result;
}
