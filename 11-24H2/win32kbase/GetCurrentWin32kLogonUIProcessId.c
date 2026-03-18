/*
 * XREFs of GetCurrentWin32kLogonUIProcessId @ 0x1401A9830
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall GetCurrentWin32kLogonUIProcessId(__int64 a1)
{
  return *(_QWORD *)(W32GetUserSessionState(a1) + 63592);
}
