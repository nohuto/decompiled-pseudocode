/*
 * XREFs of PerfDiagpShutdownProxyCallback @ 0x1407A0950
 * Callers:
 *     <none>
 * Callees:
 *     PerfDiagpRequestState @ 0x140A8F8CC (PerfDiagpRequestState.c)
 */

void __fastcall PerfDiagpShutdownProxyCallback(
        LPCGUID SourceId,
        __int64 ControlCode,
        __int64 Level,
        ULONGLONG MatchAnyKeyword)
{
  if ( (_DWORD)ControlCode )
  {
    if ( (_BYTE)Level == 85 )
      PerfDiagpRequestState(7LL, ControlCode, Level, MatchAnyKeyword);
  }
}
