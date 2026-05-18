/*
 * XREFs of sub_18007FEF0 @ 0x18007FEF0
 * Callers:
 *     sub_18007FE30 @ 0x18007FE30 (sub_18007FE30.c)
 * Callees:
 *     sub_18000BB4C @ 0x18000BB4C (sub_18000BB4C.c)
 */

_QWORD *__fastcall sub_18007FEF0(_QWORD *a1, char a2)
{
  *a1 = &Spectre::Engine::ArrayBufferDesc::`vftable';
  if ( (a2 & 1) != 0 )
    sub_18000BB4C(a1);
  return a1;
}
