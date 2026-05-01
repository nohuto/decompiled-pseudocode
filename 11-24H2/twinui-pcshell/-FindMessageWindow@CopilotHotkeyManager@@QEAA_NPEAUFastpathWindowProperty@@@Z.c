/*
 * XREFs of ?FindMessageWindow@CopilotHotkeyManager@@QEAA_NPEAUFastpathWindowProperty@@@Z @ 0x180623144
 * Callers:
 *     ?SendWindowMessageOnInvocation@CopilotHotkeyManager@@AEAA_NHAEAPEAUHWND__@@@Z @ 0x180634D90 (-SendWindowMessageOnInvocation@CopilotHotkeyManager@@AEAA_NHAEAPEAUHWND__@@@Z.c)
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV01@@Z @ 0x1800BADF8 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@AEBV01@@Z.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_CopilotHardwareKeyExtendedSignalsInvokedTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x180621FE8 (--1-$test_data_control@V-$merged_data@U_tip_CopilotHardwareKeyExtendedSignalsInvokedTest@@U1@@de.c)
 *     ??C?$tip_test@V?$merged_data@U_tip_CopilotHardwareKeyExtendedSignalsInvokedTest@@U1@@details@tip2@@@tip2@@QEAA?AV?$test_data_control@V?$merged_data@U_tip_CopilotHardwareKeyExtendedSignalsInvokedTest@@U1@@details@tip2@@@1@XZ @ 0x1806223A8 (--C-$tip_test@V-$merged_data@U_tip_CopilotHardwareKeyExtendedSignalsInvokedTest@@U1@@details@tip.c)
 *     ?IsTargetAppWindow@CopilotHotkeyManager@@SA_NPEAUHWND__@@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x180632610 (-IsTargetAppWindow@CopilotHotkeyManager@@SA_NPEAUHWND__@@V-$basic_string@GU-$char_traits@G@std@@.c)
 */

bool __fastcall CopilotHotkeyManager::FindMessageWindow(CopilotHotkeyManager *this, struct FastpathWindowProperty *a2)
{
  HWND i; // rdx
  unsigned int PropW; // eax
  unsigned int v6; // esi
  __int64 v7; // rax
  bool result; // al
  HWND Window; // rax
  HWND v10; // rdi
  _BYTE v11[56]; // [rsp+20h] [rbp-38h] BYREF
  void *v12; // [rsp+68h] [rbp+10h] BYREF

  if ( a2 && *((_QWORD *)a2 + 2) )
  {
    for ( i = 0LL; ; i = v10 )
    {
      Window = FindWindowExW(HWND_MESSAGE, i, 0LL, 0LL);
      v10 = Window;
      if ( !Window )
        break;
      PropW = (unsigned int)GetPropW(Window, L"CopilotKeyProviderFastPathMessage");
      v6 = PropW;
      if ( PropW )
      {
        if ( PropW - 32769 > 0x3FFE )
        {
          *(_DWORD *)(*tip2::tip_test<tip2::details::merged_data<_tip_CopilotHardwareKeyExtendedSignalsInvokedTest,_tip_CopilotHardwareKeyExtendedSignalsInvokedTest>>::operator->(
                         (__int64)this + 568,
                         (__int64 *)&v12)
                    + 324) = PropW;
          tip2::test_data_control<tip2::details::merged_data<_tip_CopilotHardwareKeyExtendedSignalsInvokedTest,_tip_CopilotHardwareKeyExtendedSignalsInvokedTest>>::~test_data_control<tip2::details::merged_data<_tip_CopilotHardwareKeyExtendedSignalsInvokedTest,_tip_CopilotHardwareKeyExtendedSignalsInvokedTest>>(&v12);
        }
        else
        {
          v7 = std::wstring::wstring((__int64)v11, (__int64)a2);
          if ( (unsigned __int8)CopilotHotkeyManager::IsTargetAppWindow(v10, v7) )
          {
            *((_QWORD *)a2 + 5) = v10;
            result = 1;
            *((_DWORD *)a2 + 8) = v6;
            return result;
          }
        }
      }
    }
  }
  return 0;
}
