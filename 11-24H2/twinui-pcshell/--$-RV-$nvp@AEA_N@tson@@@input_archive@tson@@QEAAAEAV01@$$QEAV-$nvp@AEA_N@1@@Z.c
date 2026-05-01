/*
 * XREFs of ??$?RV?$nvp@AEA_N@tson@@@input_archive@tson@@QEAAAEAV01@$$QEAV?$nvp@AEA_N@1@@Z @ 0x180329C38
 * Callers:
 *     ?load_nothrow@tson@@YAXAEAVinput_archive@1@AEAUtest_flag@tip2@@@Z @ 0x180336F94 (-load_nothrow@tson@@YAXAEAVinput_archive@1@AEAUtest_flag@tip2@@@Z.c)
 *     ?deserialize@?$merged_data@U_tip_ToastOcclusionWindowShiftedTest@@U1@@details@tip2@@EEAAXAEAVinput_archive@tson@@@Z @ 0x180387010 (-deserialize@-$merged_data@U_tip_ToastOcclusionWindowShiftedTest@@U1@@details@tip2@@EEAAXAEAVinp.c)
 *     ??$serialize@Vinput_archive@tson@@@test_data_dynamic@tip2@@QEAAXAEAVinput_archive@tson@@@Z @ 0x1803B4320 (--$serialize@Vinput_archive@tson@@@test_data_dynamic@tip2@@QEAAXAEAVinput_archive@tson@@@Z.c)
 *     ?deserialize@?$merged_data@U_tip_CreateXamlApplicationTest_WASDK@XamlExplorerHostTipTests@@U12@@details@tip2@@EEAAXAEAVinput_archive@tson@@@Z @ 0x18044FF90 (-deserialize@-$merged_data@U_tip_CreateXamlApplicationTest_WASDK@XamlExplorerHostTipTests@@U12@@.c)
 *     ?deserialize@?$merged_data@U_tip_SnapLauncherTest@@U1@@details@tip2@@EEAAXAEAVinput_archive@tson@@@Z @ 0x1805A3BD0 (-deserialize@-$merged_data@U_tip_SnapLauncherTest@@U1@@details@tip2@@EEAAXAEAVinput_archive@tson.c)
 *     ??$load_nothrow@W4DashboardInvokeType@Dashboard@Shell@UI@WindowsUdk@winrt@@@tson@@YAXAEAVinput_archive@0@AEAV?$optional@W4DashboardInvokeType@Dashboard@Shell@UI@WindowsUdk@winrt@@@std@@@Z @ 0x1805C4C68 (--$load_nothrow@W4DashboardInvokeType@Dashboard@Shell@UI@WindowsUdk@winrt@@@tson@@YAXAEAVinput_a.c)
 *     ?deserialize@?$merged_data@U_tip_EduDefaultThemeApplied@@U1@@details@tip2@@EEAAXAEAVinput_archive@tson@@@Z @ 0x180606830 (-deserialize@-$merged_data@U_tip_EduDefaultThemeApplied@@U1@@details@tip2@@EEAAXAEAVinput_archiv.c)
 *     ?deserialize@?$merged_data@U_tip_EduThemeInstalled@@U1@@details@tip2@@EEAAXAEAVinput_archive@tson@@@Z @ 0x1806068B0 (-deserialize@-$merged_data@U_tip_EduThemeInstalled@@U1@@details@tip2@@EEAAXAEAVinput_archive@tso.c)
 *     ?deserialize@?$merged_data@U_tip_ConsolidatedCopilotHardwareKeyMdmPolicyTest@@U1@@details@tip2@@EEAAXAEAVinput_archive@tson@@@Z @ 0x180636D00 (-deserialize@-$merged_data@U_tip_ConsolidatedCopilotHardwareKeyMdmPolicyTest@@U1@@details@tip2@@.c)
 * Callees:
 *     ?search@input_archive@tson@@AEAA_NXZ @ 0x180183250 (-search@input_archive@tson@@AEAA_NXZ.c)
 *     ?consume_expected_marker@input_archive@tson@@AEAA_NW4archive_marker@details@2@J@Z @ 0x180183364 (-consume_expected_marker@input_archive@tson@@AEAA_NW4archive_marker@details@2@J@Z.c)
 */

__int64 *__fastcall tson::input_archive::operator()<tson::nvp<bool &>>(__int64 *a1, __int64 a2)
{
  char v2; // r8
  bool *v4; // rdi
  __int64 v5; // rdx
  char *v6; // rax
  char v7; // cl
  bool v8; // al

  v2 = *(_BYTE *)(a2 + 8);
  a1[2] = *(_QWORD *)a2;
  *((_BYTE *)a1 + 24) = v2;
  v4 = *(bool **)(a2 + 16);
  if ( !tson::input_archive::search((tson::input_archive *)a1) )
  {
    v8 = 0;
    goto LABEL_6;
  }
  tson::input_archive::consume_expected_marker(a1, 10, -2147023267);
  v5 = *a1;
  v6 = *(char **)(*a1 + 8);
  if ( (unsigned __int64)v6 < *(_QWORD *)(*a1 + 16) )
  {
    v7 = *v6;
    *(_QWORD *)(v5 + 8) = v6 + 1;
    v8 = v7 != 0;
LABEL_6:
    *v4 = v8;
    return a1;
  }
  *(_BYTE *)(v5 + 24) = 1;
  return a1;
}
