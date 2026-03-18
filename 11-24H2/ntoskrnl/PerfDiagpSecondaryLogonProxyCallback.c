/*
 * XREFs of PerfDiagpSecondaryLogonProxyCallback @ 0x1407A0920
 * Callers:
 *     <none>
 * Callees:
 *     PerfDiagpRequestState @ 0x140A8F8CC (PerfDiagpRequestState.c)
 */

void __fastcall PerfDiagpSecondaryLogonProxyCallback(
        LPCGUID SourceId,
        __int64 ControlCode,
        __int64 Level,
        ULONGLONG MatchAnyKeyword)
{
  __int64 v4; // rcx

  if ( (_DWORD)ControlCode )
  {
    if ( (_BYTE)Level != 85 )
      return;
    v4 = 5LL;
  }
  else
  {
    v4 = 6LL;
  }
  PerfDiagpRequestState(v4, ControlCode, Level, MatchAnyKeyword);
}
