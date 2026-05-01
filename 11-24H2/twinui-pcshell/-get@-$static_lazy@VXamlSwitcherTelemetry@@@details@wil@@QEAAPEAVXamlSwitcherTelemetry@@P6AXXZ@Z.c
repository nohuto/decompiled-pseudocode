/*
 * XREFs of ?get@?$static_lazy@VXamlSwitcherTelemetry@@@details@wil@@QEAAPEAVXamlSwitcherTelemetry@@P6AXXZ@Z @ 0x18029B8E0
 * Callers:
 *     ?CreateFrameForMonitor@TaskViewHost@@AEAAJPEAUIImmersiveMonitor@@@Z @ 0x1801DD5E8 (-CreateFrameForMonitor@TaskViewHost@@AEAAJPEAUIImmersiveMonitor@@@Z.c)
 *     ??$WorkAreaUpdate@AEAMAEAMMMAEAN@XamlSwitcherTelemetry@@SAXAEAM0$$QEAM1AEAN@Z @ 0x1801F8EA8 (--$WorkAreaUpdate@AEAMAEAMMMAEAN@XamlSwitcherTelemetry@@SAXAEAM0$$QEAM1AEAN@Z.c)
 *     ?GetSnapAssistZOrder@XamlSnapAssistViewHost@@AEAAPEAUHWND__@@AEBURect@Foundation@Windows@winrt@@@Z @ 0x18029B7A4 (-GetSnapAssistZOrder@XamlSnapAssistViewHost@@AEAAPEAUHWND__@@AEBURect@Foundation@Windows@winrt@@.c)
 *     ?IsEnabled@XamlSwitcherTelemetry@@SA_NE_K@Z @ 0x18029B8A0 (-IsEnabled@XamlSwitcherTelemetry@@SA_NE_K@Z.c)
 *     ?ContextMenuInvoked@?QIXamlMultitaskingViewController@@XamlAllUpViewController@@UE$AAAXPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@5WindowsInternal@@@Z @ 0x1806B18F0 (-ContextMenuInvoked@-QIXamlMultitaskingViewController@@XamlAllUpViewController@@UE$AAAXPE$AAUISw.c)
 *     ??$DisplayMonitorInfoUpdate@MMAEBN@XamlSwitcherTelemetry@@SAX$$QEAM0AEBN@Z @ 0x1806B97EC (--$DisplayMonitorInfoUpdate@MMAEBN@XamlSwitcherTelemetry@@SAX$$QEAM0AEBN@Z.c)
 * Callees:
 *     ??1Completer@?$static_lazy@VXamlSwitcherTelemetry@@@details@wil@@QEAA@XZ @ 0x180232050 (--1Completer@-$static_lazy@VXamlSwitcherTelemetry@@@details@wil@@QEAA@XZ.c)
 *     atexit @ 0x1802D1A98 (atexit.c)
 */

__int64 *__fastcall wil::details::static_lazy<XamlSwitcherTelemetry>::get(__int64 a1, void (__cdecl *a2)())
{
  union _RTL_RUN_ONCE *v4; // [rsp+20h] [rbp-18h] BYREF
  int v5; // [rsp+28h] [rbp-10h]
  WINBOOL v6; // [rsp+40h] [rbp+8h] BYREF
  int v7; // [rsp+44h] [rbp+Ch]
  __int64 *v8; // [rsp+50h] [rbp+18h] BYREF

  v7 = HIDWORD(a1);
  v8 = 0LL;
  v6 = 0;
  if ( __std_init_once_begin_initialize(&`XamlSwitcherTelemetry::Instance'::`2'::wrapper, 0, &v6, (LPVOID *)&v8) && v6 )
  {
    qword_1808CCCD0 = 0LL;
    dword_1808CCCDC = 0;
    v8 = &qword_1808CCCC8;
    qword_1808CCCC8 = (__int64)&XamlSwitcherTelemetry::`vftable';
    v4 = &`XamlSwitcherTelemetry::Instance'::`2'::wrapper;
    byte_1808CCCD8 = 0;
    atexit(a2);
    v5 = 0;
    wil::details::static_lazy<XamlSwitcherTelemetry>::Completer::~Completer((__int64)&v4);
  }
  return v8;
}
