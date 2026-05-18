/*
 * XREFs of sub_180076FB0 @ 0x180076FB0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000BB4C @ 0x18000BB4C (sub_18000BB4C.c)
 *     sub_180076F74 @ 0x180076F74 (sub_180076F74.c)
 */

_QWORD *__fastcall sub_180076FB0(_QWORD *lpMem, __int64 a2)
{
  char v2; // bl

  v2 = a2;
  sub_180076F74(lpMem, a2);
  if ( (v2 & 1) != 0 )
    sub_18000BB4C(lpMem);
  return lpMem;
}
