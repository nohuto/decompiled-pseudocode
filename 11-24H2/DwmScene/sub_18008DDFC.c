/*
 * XREFs of sub_18008DDFC @ 0x18008DDFC
 * Callers:
 *     sub_180074010 @ 0x180074010 (sub_180074010.c)
 *     sub_180076C80 @ 0x180076C80 (sub_180076C80.c)
 *     sub_18008DF10 @ 0x18008DF10 (sub_18008DF10.c)
 *     unknown_libname_50 @ 0x1800DA216 (unknown_libname_50.c)
 * Callees:
 *     sub_180010234 @ 0x180010234 (sub_180010234.c)
 *     sub_18002C5D8 @ 0x18002C5D8 (sub_18002C5D8.c)
 */

char __fastcall sub_18008DDFC(_QWORD *a1)
{
  __int64 v2; // rcx

  *a1 = &Spectre::Engine::BaseShaderExtension::`vftable';
  v2 = a1[16];
  if ( v2 )
  {
    sub_18002C5D8(v2, a1[17]);
    sub_180010234((void *)a1[16], (a1[18] - a1[16]) & 0xFFFFFFFFFFFFFFF0uLL);
    a1[16] = 0LL;
    a1[17] = 0LL;
    a1[18] = 0LL;
  }
  return sub_18005AE94(a1);
}
