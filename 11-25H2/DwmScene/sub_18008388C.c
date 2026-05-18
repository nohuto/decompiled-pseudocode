/*
 * XREFs of sub_18008388C @ 0x18008388C
 * Callers:
 *     sub_180083930 @ 0x180083930 (sub_180083930.c)
 * Callees:
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_180011A5C @ 0x180011A5C (sub_180011A5C.c)
 */

void **__fastcall sub_18008388C(_QWORD *a1)
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
    sub_18001050C(v2);
  v3 = a1[238];
  if ( v3 )
    sub_18001050C(v3);
  v4 = a1[236];
  if ( v4 )
    sub_18001050C(v4);
  sub_180011A5C((__int64)(a1 + 231));
  v5 = a1[230];
  if ( v5 )
    sub_18001050C(v5);
  v6 = a1[228];
  if ( v6 )
    sub_18001050C(v6);
  v7 = a1[226];
  if ( v7 )
    sub_18001050C(v7);
  sub_180011A5C((__int64)(a1 + 221));
  return sub_1800551C8((__int64)a1, v8);
}
