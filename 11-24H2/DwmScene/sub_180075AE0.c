/*
 * XREFs of sub_180075AE0 @ 0x180075AE0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000BB4C @ 0x18000BB4C (sub_18000BB4C.c)
 *     sub_18005AE94 @ 0x18005AE94 (sub_18005AE94.c)
 */

_QWORD *__fastcall sub_180075AE0(_QWORD *lpMem, char a2)
{
  *lpMem = &Spectre::Engine::ImageProcessingShaderExtension::`vftable';
  sub_18005AE94(lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000BB4C(lpMem);
  return lpMem;
}
