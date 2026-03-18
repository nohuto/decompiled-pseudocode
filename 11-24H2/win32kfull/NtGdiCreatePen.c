/*
 * XREFs of NtGdiCreatePen @ 0x1400E37B0
 * Callers:
 *     <none>
 * Callees:
 *     GreExtCreatePen @ 0x1400E38BC (GreExtCreatePen.c)
 */

__int64 __fastcall NtGdiCreatePen(unsigned int a1, int a2, int a3, __int64 a4)
{
  __int64 v4; // rbx

  v4 = 0LL;
  if ( a1 <= 4 || a1 - 5 <= 1 )
    return GreExtCreatePen(a1, a2, 0, a3, 0LL, 0LL, 0, 0LL, 0, 1, a4);
  EngSetLastError(0x57u);
  return v4;
}
