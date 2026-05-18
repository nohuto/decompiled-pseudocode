/*
 * XREFs of sub_1800304C8 @ 0x1800304C8
 * Callers:
 *     sub_180030C70 @ 0x180030C70 (sub_180030C70.c)
 * Callees:
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 */

void **__fastcall sub_1800304C8(_QWORD *a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  void **result; // rax

  v2 = a1[4];
  if ( v2 )
    sub_18001060C(v2);
  v3 = a1[2];
  if ( v3 )
    sub_18001060C(v3);
  result = &Spectre::Engine::SceneCustomData::`vftable';
  *a1 = &Spectre::Engine::SceneCustomData::`vftable';
  return result;
}
