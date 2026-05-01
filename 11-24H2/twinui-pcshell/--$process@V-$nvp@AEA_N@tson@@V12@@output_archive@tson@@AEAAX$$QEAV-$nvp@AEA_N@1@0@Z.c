/*
 * XREFs of ??$process@V?$nvp@AEA_N@tson@@V12@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@0@Z @ 0x1801DD5B8
 * Callers:
 *     ?serialize@?$merged_data@U_tip_ControlCenterDisabledTest@@U1@@details@tip2@@EEAAXAEAVoutput_archive@tson@@W4serialize_options@23@@Z @ 0x180377800 (-serialize@-$merged_data@U_tip_ControlCenterDisabledTest@@U1@@details@tip2@@EEAAXAEAVoutput_arch.c)
 *     ??$process@V?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@tson@@V12@V?$nvp@AEA_N@2@V32@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@0$$QEAV?$nvp@AEA_N@1@1@Z @ 0x1803B0D20 (--$process@V-$nvp@AEAV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@_ea_1803B0D20.c)
 *     ??$process@V?$nvp@AEAJ@tson@@V?$nvp@AEA_N@2@V32@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEAJ@1@$$QEAV?$nvp@AEA_N@1@1@Z @ 0x18048DA30 (--$process@V-$nvp@AEAJ@tson@@V-$nvp@AEA_N@2@V32@@output_archive@tson@@AEAAX$$QEAV-$nvp@AEAJ@1@$$.c)
 *     ?serialize@?$merged_data@U_tip_SnapLayoutProviderTest@@U1@@details@tip2@@EEAAXAEAVoutput_archive@tson@@W4serialize_options@23@@Z @ 0x1805B5760 (-serialize@-$merged_data@U_tip_SnapLayoutProviderTest@@U1@@details@tip2@@EEAAXAEAVoutput_archive.c)
 *     ??$?RV?$nvp@AEAU_tip_SetPhysicalDeviceAccessRegKeyTipTest@@@tson@@@output_archive@tson@@QEAAAEAV01@$$QEAV?$nvp@AEAU_tip_SetPhysicalDeviceAccessRegKeyTipTest@@@1@@Z @ 0x18063C304 (--$-RV-$nvp@AEAU_tip_SetPhysicalDeviceAccessRegKeyTipTest@@@tson@@@output_archive@tson@@QEAAAEAV.c)
 *     ?serialize@?$merged_data@U_tip_VirtualDesktopSwitcherShowReliabiltyTest@SwitcherTip@@U12@@details@tip2@@EEAAXAEAVoutput_archive@tson@@W4serialize_options@23@@Z @ 0x1806AE010 (-serialize@-$merged_data@U_tip_VirtualDesktopSwitcherShowReliabiltyTest@SwitcherTip@@U12@@detail.c)
 * Callees:
 *     ??$process@V?$nvp@AEA_N@tson@@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@@Z @ 0x1800DDE98 (--$process@V-$nvp@AEA_N@tson@@@output_archive@tson@@AEAAX$$QEAV-$nvp@AEA_N@1@@Z.c)
 */

char __fastcall tson::output_archive::process<tson::nvp<bool &>,tson::nvp<bool &>>(__int64 a1, __int64 a2, __int64 a3)
{
  tson::output_archive::process<tson::nvp<bool &>>(a1, a2);
  return tson::output_archive::process<tson::nvp<bool &>>(a1, a3);
}
