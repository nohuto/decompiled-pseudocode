/*
 * XREFs of ?v_WndProc@CopilotHotkeyManager@@EEAA_JPEAUHWND__@@I_K_J@Z @ 0x1806381A0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800A5D64 (-_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _Smtx_lock_exclusive @ 0x1802D4CB0 (_Smtx_lock_exclusive.c)
 *     _Smtx_unlock_exclusive @ 0x1802D4CC0 (_Smtx_unlock_exclusive.c)
 *     ??$CopilotHotkey_Output_Debug_String@AEAY0CD@$$CBG@CopilotHotkeyManagerTelemetry@@SAXAEAY0CD@$$CBG@Z @ 0x18061CCC4 (--$CopilotHotkey_Output_Debug_String@AEAY0CD@$$CBG@CopilotHotkeyManagerTelemetry@@SAXAEAY0CD@$$C.c)
 *     ??$CopilotHotkey_Output_Debug_String@AEAY0CF@$$CBG@CopilotHotkeyManagerTelemetry@@SAXAEAY0CF@$$CBG@Z @ 0x18061CD50 (--$CopilotHotkey_Output_Debug_String@AEAY0CF@$$CBG@CopilotHotkeyManagerTelemetry@@SAXAEAY0CF@$$C.c)
 *     ??$CopilotHotkey_Output_Debug_String@AEAY0GJ@$$CBG@CopilotHotkeyManagerTelemetry@@SAXAEAY0GJ@$$CBG@Z @ 0x18061CF48 (--$CopilotHotkey_Output_Debug_String@AEAY0GJ@$$CBG@CopilotHotkeyManagerTelemetry@@SAXAEAY0GJ@$$C.c)
 *     ??$CopilotHotkey_Output_Debug_String@AEAY0N@$$CBG@CopilotHotkeyManagerTelemetry@@SAXAEAY0N@$$CBG@Z @ 0x18061CFD8 (--$CopilotHotkey_Output_Debug_String@AEAY0N@$$CBG@CopilotHotkeyManagerTelemetry@@SAXAEAY0N@$$CBG.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_CopilotHardwareKeyExtendedSignalsInvokedTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x180621FE8 (--1-$test_data_control@V-$merged_data@U_tip_CopilotHardwareKeyExtendedSignalsInvokedTest@@U1@@de.c)
 *     ??C?$tip_test@V?$merged_data@U_tip_CopilotHardwareKeyExtendedSignalsInvokedTest@@U1@@details@tip2@@@tip2@@QEAA?AV?$test_data_control@V?$merged_data@U_tip_CopilotHardwareKeyExtendedSignalsInvokedTest@@U1@@details@tip2@@@1@XZ @ 0x1806223A8 (--C-$tip_test@V-$merged_data@U_tip_CopilotHardwareKeyExtendedSignalsInvokedTest@@U1@@details@tip.c)
 *     ?CancelHoldAsync@CopilotHotkeyManager@@AEAA?AUfire_and_forget@winrt@@XZ @ 0x180622B8C (-CancelHoldAsync@CopilotHotkeyManager@@AEAA-AUfire_and_forget@winrt@@XZ.c)
 *     ?IsCopilotHWKeyPressed@CopilotHotkeyManager@@AEAA_NXZ @ 0x18062693C (-IsCopilotHWKeyPressed@CopilotHotkeyManager@@AEAA_NXZ.c)
 *     ?IsWinCHotKeyPressed@CopilotHotkeyManager@@AEAA_NXZ @ 0x180632758 (-IsWinCHotKeyPressed@CopilotHotkeyManager@@AEAA_NXZ.c)
 *     ?TrySendingCopilotHardwareKeyLongPressSignal@CopilotHotkeyManager@@AEAA?AUfire_and_forget@winrt@@_N@Z @ 0x180636580 (-TrySendingCopilotHardwareKeyLongPressSignal@CopilotHotkeyManager@@AEAA-AUfire_and_forget@winrt@.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_ID57755134@@@details@wil@@QEAA_NXZ @ 0x180636B14 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_ID57755134@@@details@wil@@QEAA_NX.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_ID57832725@@@details@wil@@QEAA_NXZ @ 0x180636B94 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_ID57832725@@@details@wil@@QEAA_NX.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_PenButtonSettingsModernization@@@details@wil@@QEAA_NXZ @ 0x180636CC4 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_PenButtonSettingsModernization@@@.c)
 */

LRESULT __fastcall CopilotHotkeyManager::v_WndProc(
        CopilotHotkeyManager *this,
        HWND a2,
        UINT a3,
        WPARAM a4,
        LPARAM lParam)
{
  const WCHAR *v9; // rcx
  char v10; // si
  const char *v11; // r9
  const WCHAR *v12; // rcx
  CopilotHotkeyManager *v14; // rcx
  CopilotHotkeyManager *v15; // rcx
  _DWORD *v16; // rsi
  char v17; // bp
  const WCHAR *v18; // rcx
  char v19; // si
  CopilotHotkeyManager *v20; // rcx
  void *v21[3]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  char v23; // [rsp+50h] [rbp+18h] BYREF

  if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_PenButtonSettingsModernization>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_PenButtonSettingsModernization>::GetImpl'::`2'::impl) )
    *((_QWORD *)this + 66) = GetMessageTime();
  if ( a3 == 8 )
  {
    CopilotHotkeyManagerTelemetry::CopilotHotkey_Output_Debug_String<unsigned short const (&)[13]>(v9);
    goto LABEL_34;
  }
  if ( a3 == 257 )
  {
    if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_ID57755134>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_ID57755134>::GetImpl'::`2'::impl) )
    {
      v16 = (_DWORD *)((char *)this + 472);
      if ( (CopilotHotkeyManager::IsCopilotHWKeyPressed(v14) || *v16 != 112)
        && (CopilotHotkeyManager::IsWinCHotKeyPressed(v15) || *v16 != 111) )
      {
        return 0LL;
      }
      v17 = 1;
      Smtx_lock_exclusive((_Smtx_t *)this + 8);
      if ( !*((_BYTE *)this + 75) )
      {
        v17 = 0;
        *((_BYTE *)this + 75) = 1;
      }
      Smtx_unlock_exclusive((_Smtx_t *)this + 8);
      if ( v17 )
        return 0LL;
      if ( *v16 != 112 )
      {
        if ( *v16 == 111 )
          CopilotHotkeyManagerTelemetry::CopilotHotkey_Output_Debug_String<unsigned short const (&)[35]>(L"WM_KEYUP && !IsWinCHotKeyPressed()");
        goto LABEL_34;
      }
    }
    else
    {
      v19 = 1;
      Smtx_lock_exclusive((_Smtx_t *)this + 8);
      if ( !*((_BYTE *)this + 75) && !CopilotHotkeyManager::IsCopilotHWKeyPressed(v20) )
      {
        v19 = *((_BYTE *)this + 75);
        *((_BYTE *)this + 75) = 1;
      }
      Smtx_unlock_exclusive((_Smtx_t *)this + 8);
      if ( v19 )
        return 0LL;
    }
    CopilotHotkeyManagerTelemetry::CopilotHotkey_Output_Debug_String<unsigned short const (&)[37]>(v18);
LABEL_34:
    CopilotHotkeyManager::CancelHoldAsync((__int64)this - 104, &v23);
    return 0LL;
  }
  if ( a3 != 275 || a4 != 200 )
    return DefWindowProcW(a2, a3, a4, lParam);
  v10 = 0;
  Smtx_lock_exclusive((_Smtx_t *)this + 8);
  *((_BYTE *)this + 72) = 1;
  if ( !KillTimer(a2, 0xC8uLL) )
    wil::details::in1diag3::_Log_GetLastError(
      retaddr,
      (void *)0x99A,
      (int)"pcshell\\twinui\\copilothotkeymanager\\lib\\copilothotkeymanager.cpp",
      v11);
  if ( !*((_BYTE *)this + 73) )
  {
    *((_BYTE *)this + 73) = 1;
    v10 = 1;
    *(_BYTE *)(*tip2::tip_test<tip2::details::merged_data<_tip_CopilotHardwareKeyExtendedSignalsInvokedTest,_tip_CopilotHardwareKeyExtendedSignalsInvokedTest>>::operator->(
                  (__int64)this + 464,
                  (__int64 *)v21)
             + 277) = 1;
    tip2::test_data_control<tip2::details::merged_data<_tip_CopilotHardwareKeyExtendedSignalsInvokedTest,_tip_CopilotHardwareKeyExtendedSignalsInvokedTest>>::~test_data_control<tip2::details::merged_data<_tip_CopilotHardwareKeyExtendedSignalsInvokedTest,_tip_CopilotHardwareKeyExtendedSignalsInvokedTest>>(v21);
  }
  Smtx_unlock_exclusive((_Smtx_t *)this + 8);
  if ( v10 )
  {
    CopilotHotkeyManagerTelemetry::CopilotHotkey_Output_Debug_String<unsigned short const (&)[105]>(v12);
    if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_ID57832725>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_ID57832725>::GetImpl'::`2'::impl) )
      *((_DWORD *)this + 131) = 2;
    CopilotHotkeyManager::TrySendingCopilotHardwareKeyLongPressSignal((__int64)this - 104, &v23, *((_BYTE *)this + 73));
    *(_BYTE *)(*tip2::tip_test<tip2::details::merged_data<_tip_CopilotHardwareKeyExtendedSignalsInvokedTest,_tip_CopilotHardwareKeyExtendedSignalsInvokedTest>>::operator->(
                  (__int64)this + 464,
                  (__int64 *)v21)
             + 278) = 1;
    tip2::test_data_control<tip2::details::merged_data<_tip_CopilotHardwareKeyExtendedSignalsInvokedTest,_tip_CopilotHardwareKeyExtendedSignalsInvokedTest>>::~test_data_control<tip2::details::merged_data<_tip_CopilotHardwareKeyExtendedSignalsInvokedTest,_tip_CopilotHardwareKeyExtendedSignalsInvokedTest>>(v21);
  }
  return 0LL;
}
