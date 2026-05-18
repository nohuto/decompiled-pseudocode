/*
 * XREFs of sub_180040FFC @ 0x180040FFC
 * Callers:
 *     sub_180041350 @ 0x180041350 (sub_180041350.c)
 * Callees:
 *     sub_180010644 @ 0x180010644 (sub_180010644.c)
 */

void **__fastcall sub_180040FFC(_QWORD *a1)
{
  volatile signed __int32 *v2; // rcx
  void **result; // rax

  v2 = (volatile signed __int32 *)a1[2];
  if ( v2 )
    sub_180010644(v2);
  result = &Spectre::Engine::ResourceLoadedFnc::`vftable';
  *a1 = &Spectre::Engine::ResourceLoadedFnc::`vftable';
  return result;
}
