/*
 * XREFs of Feature_Servicing_HotKeyForegroundSwitchKbdFix__private_IsEnabledDeviceUsage @ 0x1C0139810
 * Callers:
 *     ?xxxReportHotKey@@YAXPEBUtagHOTKEY@@_NPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C0010910 (-xxxReportHotKey@@YAXPEBUtagHOTKEY@@_NPEAUtagINPUT_MESSAGE_SOURCE@@@Z.c)
 *     ?xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegroundBehaviors@@W4SetForegroundffects@@@Z @ 0x1C002E5BC (-xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegrou.c)
 *     ?xxxDoHotKeyStuff@@YA_NE_NKPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C0035DAC (-xxxDoHotKeyStuff@@YA_NE_NKPEAUtagINPUT_MESSAGE_SOURCE@@@Z.c)
 *     zzzReattachThreads @ 0x1C0038F98 (zzzReattachThreads.c)
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x1C00AC0AC (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 *     ?xxxReportHotKeyToShell@@YAXPEAUtagWND@@_J_KPEAUHWND__@@W4ReportHotKeyHint@@@Z @ 0x1C013A874 (-xxxReportHotKeyToShell@@YAXPEAUtagWND@@_J_KPEAUHWND__@@W4ReportHotKeyHint@@@Z.c)
 *     xxxNextWindow @ 0x1C01C9C54 (xxxNextWindow.c)
 * Callees:
 *     Feature_Servicing_HotKeyForegroundSwitchKbdFix__private_IsEnabledFallback @ 0x1C0139848 (Feature_Servicing_HotKeyForegroundSwitchKbdFix__private_IsEnabledFallback.c)
 */

__int64 Feature_Servicing_HotKeyForegroundSwitchKbdFix__private_IsEnabledDeviceUsage()
{
  if ( (Feature_Servicing_HotKeyForegroundSwitchKbdFix__private_featureState & 0x10) != 0 )
    return Feature_Servicing_HotKeyForegroundSwitchKbdFix__private_featureState & 1;
  else
    return Feature_Servicing_HotKeyForegroundSwitchKbdFix__private_IsEnabledFallback(
             (unsigned int)Feature_Servicing_HotKeyForegroundSwitchKbdFix__private_featureState,
             3LL);
}
