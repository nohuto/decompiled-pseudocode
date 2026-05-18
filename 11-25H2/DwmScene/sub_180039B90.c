/*
 * XREFs of sub_180039B90 @ 0x180039B90
 * Callers:
 *     sub_180039C3C @ 0x180039C3C (sub_180039C3C.c)
 *     sub_1800614FC @ 0x1800614FC (sub_1800614FC.c)
 * Callees:
 *     unknown_libname_81 @ 0x180011CB0 (unknown_libname_81.c)
 *     sub_18003BCDC @ 0x18003BCDC (sub_18003BCDC.c)
 */

_QWORD *__fastcall sub_180039B90(__int64 a1, _QWORD *a2)
{
  _QWORD *v4; // rdx

  sub_18003BCDC(a1);
  v4 = *(_QWORD **)(a1 + 32);
  if ( v4 == *(_QWORD **)(a1 + 40) )
  {
    *a2 = 0LL;
    a2[1] = 0LL;
  }
  else
  {
    unknown_libname_81(a2, v4);
  }
  return a2;
}
