/*
 * XREFs of sub_18008DC9C @ 0x18008DC9C
 * Callers:
 *     sub_180073EB0 @ 0x180073EB0 (sub_180073EB0.c)
 *     sub_180076B20 @ 0x180076B20 (sub_180076B20.c)
 *     sub_18008DDB0 @ 0x18008DDB0 (sub_18008DDB0.c)
 *     unknown_libname_50 @ 0x1800DA0B6 (unknown_libname_50.c)
 * Callees:
 *     sub_180010134 @ 0x180010134 (sub_180010134.c)
 *     sub_18002C478 @ 0x18002C478 (sub_18002C478.c)
 */

char __fastcall sub_18008DC9C(_QWORD *a1)
{
  __int64 v2; // rcx

  *a1 = &Spectre::Engine::BaseShaderExtension::`vftable';
  v2 = a1[16];
  if ( v2 )
  {
    sub_18002C478(v2, a1[17]);
    sub_180010134((void *)a1[16], (a1[18] - a1[16]) & 0xFFFFFFFFFFFFFFF0uLL);
    a1[16] = 0LL;
    a1[17] = 0LL;
    a1[18] = 0LL;
  }
  return sub_18005AD34(a1);
}
