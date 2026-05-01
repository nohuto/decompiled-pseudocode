/*
 * XREFs of ??C?$tip_test@V?$merged_data@U_tip_CopilotHardwareKeyExtendedSignalsInvokedTest@@U1@@details@tip2@@@tip2@@QEAA?AV?$test_data_control@V?$merged_data@U_tip_CopilotHardwareKeyExtendedSignalsInvokedTest@@U1@@details@tip2@@@1@XZ @ 0x1806223A8
 * Callers:
 *     CopilotHotkeyManager::CancelHoldAsync$_ResumeCoro$1 @ 0x1806228D0 (CopilotHotkeyManager--CancelHoldAsync$_ResumeCoro$1.c)
 *     ?ClearWalkieTalkieProperties@CopilotHotkeyManager@@AEAAXAEAUTargetAppExtensionDetails@@@Z @ 0x180622C54 (-ClearWalkieTalkieProperties@CopilotHotkeyManager@@AEAAXAEAUTargetAppExtensionDetails@@@Z.c)
 *     ?FindMessageWindow@CopilotHotkeyManager@@QEAA_NPEAUFastpathWindowProperty@@@Z @ 0x180623144 (-FindMessageWindow@CopilotHotkeyManager@@QEAA_NPEAUFastpathWindowProperty@@@Z.c)
 *     ?GetTargetAppExtensionDetails@CopilotHotkeyManager@@AEAA?AUTargetAppExtensionDetails@@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x180624D18 (-GetTargetAppExtensionDetails@CopilotHotkeyManager@@AEAA-AUTargetAppExtensionDetails@@V-$basic_s.c)
 *     CopilotHotkeyManager::MonitorForCopilotExtendedSignals$_ResumeCoro$1 @ 0x180633450 (CopilotHotkeyManager--MonitorForCopilotExtendedSignals$_ResumeCoro$1.c)
 *     ?OnHotkeyInvoke@CopilotHotkeyManager@@QEAAXW4IMMERSIVE_HOT_KEY_ID@@@Z @ 0x1806338CC (-OnHotkeyInvoke@CopilotHotkeyManager@@QEAAXW4IMMERSIVE_HOT_KEY_ID@@@Z.c)
 *     ?OnMessage@CopilotHotkeyManager@@UEAAJI_K_J@Z @ 0x180633A00 (-OnMessage@CopilotHotkeyManager@@UEAAJI_K_J@Z.c)
 *     ?RestoreForeground@CopilotHotkeyManager@@AEAAXXZ @ 0x180634760 (-RestoreForeground@CopilotHotkeyManager@@AEAAXXZ.c)
 *     ?SendPressAndHoldStopSignalIfNeeded@CopilotHotkeyManager@@AEAA_NXZ @ 0x180634C90 (-SendPressAndHoldStopSignalIfNeeded@CopilotHotkeyManager@@AEAA_NXZ.c)
 *     ?SendWindowMessageOnInvocation@CopilotHotkeyManager@@AEAA_NHAEAPEAUHWND__@@@Z @ 0x180634D90 (-SendWindowMessageOnInvocation@CopilotHotkeyManager@@AEAA_NHAEAPEAUHWND__@@@Z.c)
 *     ?ToggleAppViewState@CopilotHotkeyManager@@AEAA_NPEAUHWND__@@@Z @ 0x180635418 (-ToggleAppViewState@CopilotHotkeyManager@@AEAA_NPEAUHWND__@@@Z.c)
 *     CopilotHotkeyManager::TrySendingCopilotHardwareKeyLongPressSignal$_ResumeCoro$1 @ 0x1806359B0 (CopilotHotkeyManager--TrySendingCopilotHardwareKeyLongPressSignal$_ResumeCoro$1.c)
 *     ?UpdateTargetAppDetailsCacheIfNecessary@CopilotHotkeyManager@@AEAAXXZ @ 0x1806366E4 (-UpdateTargetAppDetailsCacheIfNecessary@CopilotHotkeyManager@@AEAAXXZ.c)
 *     ?subscribe_to_services@CopilotHotkeyManager@@UEAAXPEAUIServiceProvider@@@Z @ 0x180637B20 (-subscribe_to_services@CopilotHotkeyManager@@UEAAXPEAUIServiceProvider@@@Z.c)
 *     ?v_WndProc@CopilotHotkeyManager@@EEAA_JPEAUHWND__@@I_K_J@Z @ 0x1806381A0 (-v_WndProc@CopilotHotkeyManager@@EEAA_JPEAUHWND__@@I_K_J@Z.c)
 * Callees:
 *     ?begin_update@?$shared_data@$00$0A@$0A@@details@tip2@@AEAA_NXZ @ 0x18028B600 (-begin_update@-$shared_data@$00$0A@$0A@@details@tip2@@AEAA_NXZ.c)
 *     ?ensure_data@?$tip_test@V?$merged_data@U_tip_CopilotHardwareKeyExtendedSignalsInvokedTest@@U1@@details@tip2@@@tip2@@AEBAAEAV?$com_ptr_t@V?$merged_data@U_tip_CopilotHardwareKeyExtendedSignalsInvokedTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@XZ @ 0x180636E38 (-ensure_data@-$tip_test@V-$merged_data@U_tip_CopilotHardwareKeyExtendedSignalsInvokedTest@@U1@@d.c)
 */

__int64 *__fastcall tip2::tip_test<tip2::details::merged_data<_tip_CopilotHardwareKeyExtendedSignalsInvokedTest,_tip_CopilotHardwareKeyExtendedSignalsInvokedTest>>::operator->(
        __int64 a1,
        __int64 *a2)
{
  __int64 *v3; // rax
  __int64 v4; // rcx

  v3 = (__int64 *)tip2::tip_test<tip2::details::merged_data<_tip_CopilotHardwareKeyExtendedSignalsInvokedTest,_tip_CopilotHardwareKeyExtendedSignalsInvokedTest>>::ensure_data(a1);
  v4 = *v3;
  *a2 = *v3;
  if ( v4 )
    _InterlockedIncrement((volatile signed __int32 *)(v4 + 344));
  tip2::details::shared_data<1,0,0>::begin_update(*a2 + 8);
  return a2;
}
