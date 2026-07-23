/*
 * XREFs of RtlLogStackTrace @ 0x1800FD810
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlLogStackTrace(int a1)
{
  if ( RtlpStackTraceDatabase )
    return RtlStdLogStackTrace((__int64)RtlpStackTraceDatabase, a1);
  else
    return 0LL;
}
