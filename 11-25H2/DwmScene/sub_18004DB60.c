/*
 * XREFs of sub_18004DB60 @ 0x18004DB60
 * Callers:
 *     sub_18004DEC0 @ 0x18004DEC0 (sub_18004DEC0.c)
 * Callees:
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_18001D480 @ 0x18001D480 (sub_18001D480.c)
 */

void **__fastcall sub_18004DB60(_QWORD *a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rcx

  *a1 = &Spectre::Engine::LightProbe::`vftable';
  v2 = a1[65];
  if ( v2 )
    sub_18001050C(v2);
  sub_18001D480((__int64)(a1 + 59));
  v3 = a1[57];
  if ( v3 )
    sub_18001050C(v3);
  v4 = a1[55];
  if ( v4 )
    sub_18001050C(v4);
  return sub_1800403A4(a1);
}
