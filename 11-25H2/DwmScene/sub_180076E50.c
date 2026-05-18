/*
 * XREFs of sub_180076E50 @ 0x180076E50
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B77C @ 0x18000B77C (sub_18000B77C.c)
 *     sub_180076E14 @ 0x180076E14 (sub_180076E14.c)
 */

_QWORD *__fastcall sub_180076E50(_QWORD *lpMem, __int64 a2)
{
  char v2; // bl

  v2 = a2;
  sub_180076E14(lpMem, a2);
  if ( (v2 & 1) != 0 )
    sub_18000B77C(lpMem);
  return lpMem;
}
