/*
 * XREFs of PerfDiagpShutdownProxyCallback @ 0x140791580
 * Callers:
 *     <none>
 * Callees:
 *     PerfDiagpRequestState @ 0x140A8A8AC (PerfDiagpRequestState.c)
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
