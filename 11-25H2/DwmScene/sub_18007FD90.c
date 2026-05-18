/*
 * XREFs of sub_18007FD90 @ 0x18007FD90
 * Callers:
 *     sub_18007FCD0 @ 0x18007FCD0 (sub_18007FCD0.c)
 * Callees:
 *     sub_18000B77C @ 0x18000B77C (sub_18000B77C.c)
 */

_QWORD *__fastcall sub_18007FD90(_QWORD *a1, char a2)
{
  *a1 = &Spectre::Engine::ArrayBufferDesc::`vftable';
  if ( (a2 & 1) != 0 )
    sub_18000B77C(a1);
  return a1;
}
