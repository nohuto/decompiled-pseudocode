/*
 * XREFs of sub_18006B4B0 @ 0x18006B4B0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000BB4C @ 0x18000BB4C (sub_18000BB4C.c)
 *     sub_18006B2F0 @ 0x18006B2F0 (sub_18006B2F0.c)
 */

_QWORD *__fastcall sub_18006B4B0(_QWORD *lpMem, char a2)
{
  sub_18006B2F0(lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000BB4C(lpMem);
  return lpMem;
}
