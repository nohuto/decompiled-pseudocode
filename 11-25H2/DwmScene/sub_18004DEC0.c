/*
 * XREFs of sub_18004DEC0 @ 0x18004DEC0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B77C @ 0x18000B77C (sub_18000B77C.c)
 *     sub_18004DB60 @ 0x18004DB60 (sub_18004DB60.c)
 */

_QWORD *__fastcall sub_18004DEC0(_QWORD *lpMem, char a2)
{
  sub_18004DB60(lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000B77C(lpMem);
  return lpMem;
}
