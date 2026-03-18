/*
 * XREFs of ??1CLockProcessByPid@@QEAA@XZ @ 0x14018902C
 * Callers:
 *     ?_AllowSetForegroundWindow@@YA?AW4AllowSetForegroundWindowResult@@KW4AllowSetForegroundWindowPolicy@@@Z @ 0x1400F5C38 (-_AllowSetForegroundWindow@@YA-AW4AllowSetForegroundWindowResult@@KW4AllowSetForegroundWindowPol.c)
 *     xxxConsoleControl @ 0x14015D510 (xxxConsoleControl.c)
 *     ?xxxUserNotifyConsoleApplication@@YAJPEAU_CONSOLE_PROCESS_INFO@@@Z @ 0x140188D44 (-xxxUserNotifyConsoleApplication@@YAJPEAU_CONSOLE_PROCESS_INFO@@@Z.c)
 *     GetConsoleDesktop @ 0x14019468C (GetConsoleDesktop.c)
 *     xxxWaitForInputIdle @ 0x1401F488C (xxxWaitForInputIdle.c)
 *     ?IsValid@CProcessAsPid@@QEBA_NXZ @ 0x14021ACC4 (-IsValid@CProcessAsPid@@QEBA_NXZ.c)
 *     ?GetProcessInfo@CProcessAsPid@@QEBAPEAUtagPROCESSINFO@@XZ @ 0x14021EC80 (-GetProcessInfo@CProcessAsPid@@QEBAPEAUtagPROCESSINFO@@XZ.c)
 *     NtUserCheckProcessForClipboardAccess @ 0x140240DA0 (NtUserCheckProcessForClipboardAccess.c)
 *     NtUserDwmValidateWindow @ 0x140241330 (NtUserDwmValidateWindow.c)
 *     NtUserSetActiveProcessForMonitor @ 0x140245820 (NtUserSetActiveProcessForMonitor.c)
 *     ?xxxUserNotifyProcessCreate@@YAJKW4_NotifyProcessCreateHints@@@Z @ 0x140287CFC (-xxxUserNotifyProcessCreate@@YAJKW4_NotifyProcessCreateHints@@@Z.c)
 *     ?_CheckAllowForeground2@CForegroundLaunch@@AEBA_NPEBUtagPROCESSINFO@@@Z @ 0x14028DBDC (-_CheckAllowForeground2@CForegroundLaunch@@AEBA_NPEBUtagPROCESSINFO@@@Z.c)
 *     ?GetWindowProcessHandleUnsafe@@YAPEAXPEAUtagWND@@PEBUtagTHREADINFO@@K@Z @ 0x140290CB8 (-GetWindowProcessHandleUnsafe@@YAPEAXPEAUtagWND@@PEBUtagTHREADINFO@@K@Z.c)
 *     NtUserGetDisplayAutoRotationPreferencesByProcessId @ 0x140295CB0 (NtUserGetDisplayAutoRotationPreferencesByProcessId.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?_Cleanup@CLockProcessByPid@@AEAAXXZ @ 0x1402765E4 (-_Cleanup@CLockProcessByPid@@AEAAXXZ.c)
 */

void __fastcall CLockProcessByPid::~CLockProcessByPid(CLockProcessByPid *this, __int64 a2)
{
  if ( *((_QWORD *)this + 3) )
  {
    if ( (*((_DWORD *)this + 5) & 8) != 0 )
      *((_QWORD *)PtiCurrent((__int64)this, a2) + 48) = *((_QWORD *)this + 6);
    CLockProcessByPid::_Cleanup(this);
  }
}
