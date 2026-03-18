/*
 * XREFs of EnsureArbitraryDpiMetricsForDpi @ 0x1402872EC
 * Callers:
 *     GetDpiMetricsForDpi @ 0x1402F16E0 (GetDpiMetricsForDpi.c)
 * Callees:
 *     ClearDpiMetrics @ 0x140287298 (ClearDpiMetrics.c)
 *     EnsureDpiMetricsForDpi @ 0x1402873CC (EnsureDpiMetricsForDpi.c)
 */

__int64 __fastcall EnsureArbitraryDpiMetricsForDpi(__int64 a1, __int64 a2)
{
  unsigned __int16 v2; // di
  __int64 UserSessionState; // rsi
  struct HLFONT__ **v4; // rbx
  __int16 v5; // ax

  v2 = a1;
  UserSessionState = W32GetUserSessionState(a1, a2);
  v4 = (struct HLFONT__ **)(UserSessionState + 66328);
  v5 = *(_WORD *)(UserSessionState + 66408);
  if ( v5 != v2 )
  {
    if ( v5 )
      ClearDpiMetrics(v4);
    EnsureDpiMetricsForDpi(v4, v2);
    *(_WORD *)(UserSessionState + 66408) = v2;
  }
  return UserSessionState + 66328;
}
