/*
 * XREFs of ?GamingAccessibilityNexusChordPressed@?QIXamlMultitaskingViewController@@XamlAllUpViewController@@UE$AAAXPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x1806B26F0
 * Callers:
 *     ?GamingAccessibilityNexusChordPressed@?QIXamlMultitaskingViewController@@XamlAllUpViewController@@WBA@E$AAAXPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x1806B27C0 (-GamingAccessibilityNexusChordPressed@-QIXamlMultitaskingViewController@@XamlAllUpV_ea_1806B27C0.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18001D0F0 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x180029D9C (-GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?TryGetApplicationViewForItem@AppViewDataSourceHelpers@@YA?AV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x18007D1B8 (-TryGetApplicationViewForItem@AppViewDataSourceHelpers@@YA-AV-$com_ptr_t@UIApplicationView@@Uerr.c)
 *     ?SHRegGetDWORD@@YAJPEAUHKEY__@@PEB_W1PEAK@Z @ 0x1806A0BA8 (-SHRegGetDWORD@@YAJPEAUHKEY__@@PEB_W1PEAK@Z.c)
 *     EnumerateAndIssueToXInputDevice @ 0x1806C9D98 (EnumerateAndIssueToXInputDevice.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall _GamingAccessibilityNexusChordPressed__QIXamlMultitaskingViewController__XamlAllUpViewController__UE_AAAXPE_AAUISwitchItem_Multitasking_ComposableShell_Internal_Windows___Z(
        HKEY a1,
        const wchar_t *a2,
        const wchar_t *a3)
{
  LSTATUS DWORD; // eax
  struct IApplicationView *v6; // rdx
  HWND WindowForView; // rax
  int v8; // eax
  ApplicationViewHelpers *v9[3]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  unsigned int v11; // [rsp+50h] [rbp+18h] BYREF
  DWORD dwProcessId; // [rsp+58h] [rbp+20h] BYREF

  v11 = 0;
  DWORD = SHRegGetDWORD(a1, a2, a3, &v11);
  if ( DWORD >= 0 )
  {
    if ( v11 )
    {
      if ( !*((_BYTE *)a1 + 224) )
        *((_BYTE *)a1 + 224) = 1;
      AppViewDataSourceHelpers::TryGetApplicationViewForItem(v9, (__int64)a2);
      if ( v9[0] )
      {
        WindowForView = (HWND)ApplicationViewHelpers::GetWindowForView(
                                (__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64 *))v9[0],
                                v6);
        dwProcessId = 0;
        GetWindowThreadProcessId(WindowForView, &dwProcessId);
        v8 = EnumerateAndIssueToXInputDevice(dwProcessId);
        if ( v8 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x94,
            (int)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlallupviewcontroller.cpp",
            (const char *)(unsigned int)v8);
      }
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)v9);
    }
  }
  else
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x80,
      (int)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlallupviewcontroller.cpp",
      (const char *)(unsigned int)DWORD);
  }
}
