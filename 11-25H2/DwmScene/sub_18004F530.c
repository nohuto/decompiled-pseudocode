/*
 * XREFs of sub_18004F530 @ 0x18004F530
 * Callers:
 *     sub_18004FA10 @ 0x18004FA10 (sub_18004FA10.c)
 * Callees:
 *     sub_18000B77C @ 0x18000B77C (sub_18000B77C.c)
 *     sub_180081968 @ 0x180081968 (sub_180081968.c)
 */

_QWORD *__fastcall sub_18004F530(_QWORD *lpMem, char a2)
{
  *lpMem = &Spectre::Engine::RenderStateGeneric::`vftable';
  sub_180081968();
  if ( (a2 & 1) != 0 )
    sub_18000B77C(lpMem);
  return lpMem;
}
