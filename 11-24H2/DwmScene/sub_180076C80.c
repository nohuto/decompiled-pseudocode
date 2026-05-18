/*
 * XREFs of sub_180076C80 @ 0x180076C80
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000BB4C @ 0x18000BB4C (sub_18000BB4C.c)
 *     sub_18008DDFC @ 0x18008DDFC (sub_18008DDFC.c)
 */

_QWORD *__fastcall sub_180076C80(_QWORD *lpMem, char a2)
{
  *lpMem = &Spectre::Engine::UnlitShaderExtension::`vftable';
  sub_18008DDFC(lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000BB4C(lpMem);
  return lpMem;
}
