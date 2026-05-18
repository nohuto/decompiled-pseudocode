/*
 * XREFs of sub_180074060 @ 0x180074060
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000BB4C @ 0x18000BB4C (sub_18000BB4C.c)
 *     sub_180074010 @ 0x180074010 (sub_180074010.c)
 */

_QWORD *__fastcall sub_180074060(_QWORD *lpMem, __int64 a2)
{
  char v2; // bl

  v2 = a2;
  sub_180074010(lpMem, a2);
  if ( (v2 & 1) != 0 )
    sub_18000BB4C(lpMem);
  return lpMem;
}
