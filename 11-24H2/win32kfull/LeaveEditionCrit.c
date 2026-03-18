/*
 * XREFs of LeaveEditionCrit @ 0x140186D40
 * Callers:
 *     NtUserMessageCall @ 0x140061360 (NtUserMessageCall.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall LeaveEditionCrit(__int64 a1)
{
  return UserSessionSwitchLeaveCrit(a1);
}
