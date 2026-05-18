/*
 * XREFs of sub_18000D860 @ 0x18000D860
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000BB4C @ 0x18000BB4C (sub_18000BB4C.c)
 *     sub_18000D7D0 @ 0x18000D7D0 (sub_18000D7D0.c)
 */

_QWORD *__fastcall sub_18000D860(_QWORD *lpMem, char a2)
{
  sub_18000D7D0(lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000BB4C(lpMem);
  return lpMem;
}
