/*
 * XREFs of EtwTraceEndCallback @ 0x1400BA7B0
 * Callers:
 *     <none>
 * Callees:
 *     W32GetCurrentThreadNonPaged @ 0x1401A2438 (W32GetCurrentThreadNonPaged.c)
 */

__int64 *__fastcall EtwTraceEndCallback(__int64 a1)
{
  __int64 *result; // rax
  __int64 v2; // rcx

  result = (__int64 *)W32GetCurrentThreadNonPaged(a1);
  v2 = 0LL;
  if ( result )
    v2 = *result;
  --*(_BYTE *)(v2 + 1456);
  return result;
}
