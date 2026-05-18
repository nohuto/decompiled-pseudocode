/*
 * XREFs of sub_18005AE94 @ 0x18005AE94
 * Callers:
 *     sub_18005B0C0 @ 0x18005B0C0 (sub_18005B0C0.c)
 *     sub_180075AE0 @ 0x180075AE0 (sub_180075AE0.c)
 *     sub_1800765E0 @ 0x1800765E0 (sub_1800765E0.c)
 *     sub_180076970 @ 0x180076970 (sub_180076970.c)
 *     sub_180076F74 @ 0x180076F74 (sub_180076F74.c)
 *     sub_18008DDFC @ 0x18008DDFC (sub_18008DDFC.c)
 *     unknown_libname_57 @ 0x1800DA6D3 (unknown_libname_57.c)
 * Callees:
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     sub_180010644 @ 0x180010644 (sub_180010644.c)
 *     sub_180011B5C @ 0x180011B5C (sub_180011B5C.c)
 */

char __fastcall sub_18005AE94(_QWORD *a1)
{
  __int64 v2; // rcx
  char result; // al
  volatile signed __int32 *v4; // rcx

  *a1 = &Spectre::Engine::IShaderExtension::`vftable';
  sub_180011B5C((__int64)(a1 + 9));
  v2 = a1[8];
  if ( v2 )
    sub_18001060C(v2);
  result = sub_180011B5C((__int64)(a1 + 3));
  v4 = (volatile signed __int32 *)a1[2];
  if ( v4 )
    return sub_180010644(v4);
  return result;
}
