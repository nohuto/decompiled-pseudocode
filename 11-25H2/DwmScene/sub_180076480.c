/*
 * XREFs of sub_180076480 @ 0x180076480
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B77C @ 0x18000B77C (sub_18000B77C.c)
 *     sub_18005AD34 @ 0x18005AD34 (sub_18005AD34.c)
 */

_QWORD *__fastcall sub_180076480(_QWORD *lpMem, char a2)
{
  *lpMem = &Spectre::Engine::SymbolShaderExtension::`vftable';
  sub_18005AD34(lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000B77C(lpMem);
  return lpMem;
}
