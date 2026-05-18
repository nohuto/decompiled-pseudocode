/*
 * XREFs of sub_180040E9C @ 0x180040E9C
 * Callers:
 *     sub_1800411F0 @ 0x1800411F0 (sub_1800411F0.c)
 * Callees:
 *     sub_180010544 @ 0x180010544 (sub_180010544.c)
 */

void **__fastcall sub_180040E9C(_QWORD *a1)
{
  volatile signed __int32 *v2; // rcx
  void **result; // rax

  v2 = (volatile signed __int32 *)a1[2];
  if ( v2 )
    sub_180010544(v2);
  result = &Spectre::Engine::ResourceLoadedFnc::`vftable';
  *a1 = &Spectre::Engine::ResourceLoadedFnc::`vftable';
  return result;
}
