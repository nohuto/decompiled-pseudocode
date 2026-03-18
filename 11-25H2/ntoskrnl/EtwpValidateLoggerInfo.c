/*
 * XREFs of EtwpValidateLoggerInfo @ 0x140896ED4
 * Callers:
 *     EtwpTransitionToRealtime @ 0x140643468 (EtwpTransitionToRealtime.c)
 *     EtwpIncrementTraceFile @ 0x14079B570 (EtwpIncrementTraceFile.c)
 *     EtwpStopTrace @ 0x140892F28 (EtwpStopTrace.c)
 *     EtwpUpdateTrace @ 0x140893BB4 (EtwpUpdateTrace.c)
 *     EtwpFlushTrace @ 0x140894628 (EtwpFlushTrace.c)
 *     EtwpQueryTrace @ 0x140895150 (EtwpQueryTrace.c)
 *     NtTraceControl @ 0x140895400 (NtTraceControl.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall EtwpValidateLoggerInfo(_DWORD *a1)
{
  if ( !a1 )
    return 3221225485LL;
  if ( *a1 < 0xB0u )
    return 3221225990LL;
  return (a1[11] & 0x20000) == 0 ? 0xC000000D : 0;
}
