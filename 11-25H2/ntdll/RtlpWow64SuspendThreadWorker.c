/*
 * XREFs of RtlpWow64SuspendThreadWorker @ 0x1801340F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpWow64SuspendThreadWorker(unsigned __int64 a1, __int64 a2)
{
  if ( !g_LdrpWow64SuspendLocalThread )
    return 3221225485LL;
  LOBYTE(a2) = a1 & 3;
  return g_LdrpWow64SuspendLocalThread(a1 & 0xFFFFFFFFFFFFFFFCuLL, a2);
}
