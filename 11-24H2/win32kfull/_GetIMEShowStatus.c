/*
 * XREFs of _GetIMEShowStatus @ 0x1401C78FC
 * Callers:
 *     xxxSystemParametersInfoWorker @ 0x14018F9C8 (xxxSystemParametersInfoWorker.c)
 *     NtUserGetIMEShowStatus @ 0x1401C78C0 (NtUserGetIMEShowStatus.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall GetIMEShowStatus(__int64 a1, __int64 a2)
{
  return *(_DWORD *)(W32GetUserSessionState(a1, a2) + 14304) != 0;
}
