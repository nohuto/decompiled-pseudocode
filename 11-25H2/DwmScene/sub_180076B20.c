/*
 * XREFs of sub_180076B20 @ 0x180076B20
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B77C @ 0x18000B77C (sub_18000B77C.c)
 *     sub_18008DC9C @ 0x18008DC9C (sub_18008DC9C.c)
 */

_QWORD *__fastcall sub_180076B20(_QWORD *lpMem, char a2)
{
  *lpMem = &Spectre::Engine::UnlitShaderExtension::`vftable';
  sub_18008DC9C(lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000B77C(lpMem);
  return lpMem;
}
