/*
 * XREFs of _GetIMEShowStatus @ 0x1C008998C
 * Callers:
 *     NtUserGetIMEShowStatus @ 0x1C0089950 (NtUserGetIMEShowStatus.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall GetIMEShowStatus(__int64 a1)
{
  return *(_DWORD *)(SGDGetUserSessionState(a1) + 13960) != 0;
}
