/*
 * XREFs of ?GetProcessInfo@CLockProcessByPid@@QEBAPEAUtagPROCESSINFO@@XZ @ 0x140232374
 * Callers:
 *     ?_AllowSetForegroundWindow@@YA?AW4AllowSetForegroundWindowResult@@KW4AllowSetForegroundWindowPolicy@@@Z @ 0x1400F5C38 (-_AllowSetForegroundWindow@@YA-AW4AllowSetForegroundWindowResult@@KW4AllowSetForegroundWindowPol.c)
 *     xxxConsoleControl @ 0x14015D510 (xxxConsoleControl.c)
 *     GetConsoleDesktop @ 0x14019468C (GetConsoleDesktop.c)
 *     xxxWaitForInputIdle @ 0x1401F488C (xxxWaitForInputIdle.c)
 *     NtUserCheckProcessForClipboardAccess @ 0x140240DA0 (NtUserCheckProcessForClipboardAccess.c)
 *     NtUserDwmValidateWindow @ 0x140241330 (NtUserDwmValidateWindow.c)
 *     NtUserSetActiveProcessForMonitor @ 0x140245820 (NtUserSetActiveProcessForMonitor.c)
 *     ?xxxUserNotifyProcessCreate@@YAJKW4_NotifyProcessCreateHints@@@Z @ 0x140287CFC (-xxxUserNotifyProcessCreate@@YAJKW4_NotifyProcessCreateHints@@@Z.c)
 *     NtUserGetDisplayAutoRotationPreferencesByProcessId @ 0x140295CB0 (NtUserGetDisplayAutoRotationPreferencesByProcessId.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall CLockProcessByPid::GetProcessInfo(CLockProcessByPid *this)
{
  __int64 v1; // rcx
  unsigned __int64 result; // rax

  v1 = *((_QWORD *)this + 3);
  if ( !v1 )
    return 0LL;
  result = PsGetProcessWin32Process(v1);
  if ( result )
    result &= -(__int64)(*(_QWORD *)result != 0LL);
  return result;
}
