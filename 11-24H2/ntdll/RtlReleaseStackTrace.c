/*
 * XREFs of RtlReleaseStackTrace @ 0x180105670
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall RtlReleaseStackTrace(__int64 a1)
{
  if ( RtlpStackTraceDatabase )
    RtlStdReleaseStackTrace((__int64)RtlpStackTraceDatabase, a1);
}
