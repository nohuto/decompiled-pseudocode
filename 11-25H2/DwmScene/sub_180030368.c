/*
 * XREFs of sub_180030368 @ 0x180030368
 * Callers:
 *     sub_180030B10 @ 0x180030B10 (sub_180030B10.c)
 * Callees:
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 */

void **__fastcall sub_180030368(_QWORD *a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  void **result; // rax

  v2 = a1[4];
  if ( v2 )
    sub_18001050C(v2);
  v3 = a1[2];
  if ( v3 )
    sub_18001050C(v3);
  result = &Spectre::Engine::SceneCustomData::`vftable';
  *a1 = &Spectre::Engine::SceneCustomData::`vftable';
  return result;
}
