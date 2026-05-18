/*
 * XREFs of sub_180087910 @ 0x180087910
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B77C @ 0x18000B77C (sub_18000B77C.c)
 *     sub_180087850 @ 0x180087850 (sub_180087850.c)
 */

_QWORD *__fastcall sub_180087910(_QWORD *lpMem, __int64 a2)
{
  char v2; // bl

  v2 = a2;
  sub_180087850(lpMem, a2);
  if ( (v2 & 1) != 0 )
    sub_18000B77C(lpMem);
  return lpMem;
}
