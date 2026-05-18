/*
 * XREFs of sub_180087A70 @ 0x180087A70
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000BB4C @ 0x18000BB4C (sub_18000BB4C.c)
 *     sub_1800879B0 @ 0x1800879B0 (sub_1800879B0.c)
 */

_QWORD *__fastcall sub_180087A70(_QWORD *lpMem, __int64 a2)
{
  char v2; // bl

  v2 = a2;
  sub_1800879B0(lpMem, a2);
  if ( (v2 & 1) != 0 )
    sub_18000BB4C(lpMem);
  return lpMem;
}
