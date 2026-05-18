/*
 * XREFs of sub_1800879B0 @ 0x1800879B0
 * Callers:
 *     sub_180087A70 @ 0x180087A70 (sub_180087A70.c)
 * Callees:
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 */

void **__fastcall sub_1800879B0(_QWORD *a1, __int64 a2)
{
  __int64 v3; // rcx
  __int64 v4; // rcx

  *a1 = &Spectre::Engine::ViewerCamera::`vftable';
  v3 = a1[224];
  if ( v3 )
    sub_18001060C(v3);
  v4 = a1[222];
  if ( v4 )
    sub_18001060C(v4);
  return sub_180055328((__int64)a1, a2);
}
