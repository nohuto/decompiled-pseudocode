/*
 * XREFs of sub_180085168 @ 0x180085168
 * Callers:
 *     sub_1800851C0 @ 0x1800851C0 (sub_1800851C0.c)
 * Callees:
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_18001A9C0 @ 0x18001A9C0 (sub_18001A9C0.c)
 */

void **__fastcall sub_180085168(_QWORD *a1)
{
  __int64 v2; // rcx

  *a1 = &Spectre::Engine::ColorTransform::`vftable';
  sub_18001A9C0((__int64)(a1 + 14));
  v2 = a1[13];
  if ( v2 )
    sub_18001050C(v2);
  return sub_1800403A4(a1);
}
