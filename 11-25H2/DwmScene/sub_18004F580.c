/*
 * XREFs of sub_18004F580 @ 0x18004F580
 * Callers:
 *     sub_18004FA30 @ 0x18004FA30 (sub_18004FA30.c)
 * Callees:
 *     sub_18000B77C @ 0x18000B77C (sub_18000B77C.c)
 *     sub_180050358 @ 0x180050358 (sub_180050358.c)
 */

_QWORD *__fastcall sub_18004F580(_QWORD *lpMem, char a2)
{
  *lpMem = &Spectre::Engine::SamplerGeneric::`vftable';
  sub_180050358();
  if ( (a2 & 1) != 0 )
    sub_18000B77C(lpMem);
  return lpMem;
}
