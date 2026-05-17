/*
 * XREFs of RtlReleaseStackTrace @ 0x18010AB00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlReleaseStackTrace(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  __int64 result; // rax

  if ( RtlpStackTraceDatabase )
    return RtlStdReleaseStackTrace(RtlpStackTraceDatabase, a1, a3);
  return result;
}
