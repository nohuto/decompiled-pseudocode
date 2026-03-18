/*
 * XREFs of LockProcessByClientId @ 0x1400A4000
 * Callers:
 *     GetConsoleDesktop @ 0x14019468C (GetConsoleDesktop.c)
 *     ProcessInfoFromPID @ 0x1401E7DC8 (ProcessInfoFromPID.c)
 *     xxxWaitForInputIdle @ 0x1401F488C (xxxWaitForInputIdle.c)
 *     NtUserCheckProcessForClipboardAccess @ 0x140240DA0 (NtUserCheckProcessForClipboardAccess.c)
 *     NtUserDwmValidateWindow @ 0x140241330 (NtUserDwmValidateWindow.c)
 *     NtUserSetActiveProcessForMonitor @ 0x140245820 (NtUserSetActiveProcessForMonitor.c)
 *     xxxActivateDebugger @ 0x140256810 (xxxActivateDebugger.c)
 *     NtUserGetDisplayAutoRotationPreferencesByProcessId @ 0x140295CB0 (NtUserGetDisplayAutoRotationPreferencesByProcessId.c)
 * Callees:
 *     W32GetCurrentWin32kSessionId @ 0x1400A428C (W32GetCurrentWin32kSessionId.c)
 */

__int64 __fastcall LockProcessByClientId(void *a1, PEPROCESS *a2)
{
  NTSTATUS v3; // esi
  int ProcessSessionId; // ebx

  *a2 = 0LL;
  v3 = PsLookupProcessByProcessId(a1, a2);
  if ( v3 < 0 )
    return (unsigned int)v3;
  ProcessSessionId = PsGetProcessSessionId(*a2);
  if ( ProcessSessionId == (unsigned int)W32GetCurrentWin32kSessionId() )
    return (unsigned int)v3;
  ObfDereferenceObject(*a2);
  *a2 = 0LL;
  return 3221225473LL;
}
