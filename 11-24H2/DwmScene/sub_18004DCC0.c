/*
 * XREFs of sub_18004DCC0 @ 0x18004DCC0
 * Callers:
 *     sub_18004E020 @ 0x18004E020 (sub_18004E020.c)
 * Callees:
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     sub_18001D5E0 @ 0x18001D5E0 (sub_18001D5E0.c)
 */

void **__fastcall sub_18004DCC0(_QWORD *a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rcx

  *a1 = &Spectre::Engine::LightProbe::`vftable';
  v2 = a1[65];
  if ( v2 )
    sub_18001060C(v2);
  sub_18001D5E0((__int64)(a1 + 59));
  v3 = a1[57];
  if ( v3 )
    sub_18001060C(v3);
  v4 = a1[55];
  if ( v4 )
    sub_18001060C(v4);
  return sub_180040504(a1);
}
