/*
 * XREFs of sub_180087850 @ 0x180087850
 * Callers:
 *     sub_180087910 @ 0x180087910 (sub_180087910.c)
 * Callees:
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 */

void **__fastcall sub_180087850(_QWORD *a1, __int64 a2)
{
  __int64 v3; // rcx
  __int64 v4; // rcx

  *a1 = &Spectre::Engine::ViewerCamera::`vftable';
  v3 = a1[224];
  if ( v3 )
    sub_18001050C(v3);
  v4 = a1[222];
  if ( v4 )
    sub_18001050C(v4);
  return sub_1800551C8((__int64)a1, a2);
}
