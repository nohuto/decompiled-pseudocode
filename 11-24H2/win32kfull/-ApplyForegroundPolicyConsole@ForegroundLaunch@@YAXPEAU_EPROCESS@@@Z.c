/*
 * XREFs of ?ApplyForegroundPolicyConsole@ForegroundLaunch@@YAXPEAU_EPROCESS@@@Z @ 0x1401892C4
 * Callers:
 *     ?xxxUserNotifyConsoleApplication@@YAJPEAU_CONSOLE_PROCESS_INFO@@@Z @ 0x140188D44 (-xxxUserNotifyConsoleApplication@@YAJPEAU_CONSOLE_PROCESS_INFO@@@Z.c)
 * Callees:
 *     ?ApplyForegroundPolicyConsole@CForegroundLaunch@@QEAAXPEAUtagPROCESSINFO@@@Z @ 0x140189324 (-ApplyForegroundPolicyConsole@CForegroundLaunch@@QEAAXPEAUtagPROCESSINFO@@@Z.c)
 */

void __fastcall ForegroundLaunch::ApplyForegroundPolicyConsole(ForegroundLaunch *this, struct _EPROCESS *a2)
{
  CForegroundLaunch *v3; // rdi
  unsigned __int64 ProcessWin32Process; // rax

  v3 = *(CForegroundLaunch **)(W32GetUserSessionState(this, a2) + 18928);
  ProcessWin32Process = PsGetProcessWin32Process(this);
  if ( ProcessWin32Process )
    ProcessWin32Process &= -(__int64)(*(_QWORD *)ProcessWin32Process != 0LL);
  CForegroundLaunch::ApplyForegroundPolicyConsole(v3, (struct tagPROCESSINFO *)ProcessWin32Process);
}
