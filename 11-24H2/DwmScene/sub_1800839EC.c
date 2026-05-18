/*
 * XREFs of sub_1800839EC @ 0x1800839EC
 * Callers:
 *     sub_180083A90 @ 0x180083A90 (sub_180083A90.c)
 * Callees:
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     sub_180011B5C @ 0x180011B5C (sub_180011B5C.c)
 */

void **__fastcall sub_1800839EC(_QWORD *a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rdx

  *a1 = &Spectre::Engine::ShadowMapCamera::`vftable';
  v2 = a1[240];
  if ( v2 )
    sub_18001060C(v2);
  v3 = a1[238];
  if ( v3 )
    sub_18001060C(v3);
  v4 = a1[236];
  if ( v4 )
    sub_18001060C(v4);
  sub_180011B5C((__int64)(a1 + 231));
  v5 = a1[230];
  if ( v5 )
    sub_18001060C(v5);
  v6 = a1[228];
  if ( v6 )
    sub_18001060C(v6);
  v7 = a1[226];
  if ( v7 )
    sub_18001060C(v7);
  sub_180011B5C((__int64)(a1 + 221));
  return sub_180055328((__int64)a1, v8);
}
