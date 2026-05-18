/*
 * XREFs of sub_18005AD34 @ 0x18005AD34
 * Callers:
 *     sub_18005AF60 @ 0x18005AF60 (sub_18005AF60.c)
 *     sub_180075980 @ 0x180075980 (sub_180075980.c)
 *     sub_180076480 @ 0x180076480 (sub_180076480.c)
 *     sub_180076810 @ 0x180076810 (sub_180076810.c)
 *     sub_180076E14 @ 0x180076E14 (sub_180076E14.c)
 *     sub_18008DC9C @ 0x18008DC9C (sub_18008DC9C.c)
 *     unknown_libname_57 @ 0x1800DA573 (unknown_libname_57.c)
 * Callees:
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_180010544 @ 0x180010544 (sub_180010544.c)
 *     sub_180011A5C @ 0x180011A5C (sub_180011A5C.c)
 */

char __fastcall sub_18005AD34(_QWORD *a1)
{
  __int64 v2; // rcx
  char result; // al
  volatile signed __int32 *v4; // rcx

  *a1 = &Spectre::Engine::IShaderExtension::`vftable';
  sub_180011A5C((__int64)(a1 + 9));
  v2 = a1[8];
  if ( v2 )
    sub_18001050C(v2);
  result = sub_180011A5C((__int64)(a1 + 3));
  v4 = (volatile signed __int32 *)a1[2];
  if ( v4 )
    return sub_180010544(v4);
  return result;
}
