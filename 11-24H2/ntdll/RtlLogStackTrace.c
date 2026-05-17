/*
 * XREFs of RtlLogStackTrace @ 0x1800FB5E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlLogStackTrace(int a1)
{
  if ( RtlpStackTraceDatabase )
    return RtlStdLogStackTrace(RtlpStackTraceDatabase, a1);
  else
    return 0LL;
}
