/*
 * XREFs of sub_180026644 @ 0x180026644
 * Callers:
 *     sub_18002633C @ 0x18002633C (sub_18002633C.c)
 *     sub_18002DD04 @ 0x18002DD04 (sub_18002DD04.c)
 *     sub_18002DDF4 @ 0x18002DDF4 (sub_18002DDF4.c)
 *     sub_18004A874 @ 0x18004A874 (sub_18004A874.c)
 *     sub_1800502A0 @ 0x1800502A0 (sub_1800502A0.c)
 *     sub_18005DE90 @ 0x18005DE90 (sub_18005DE90.c)
 * Callees:
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 */

__int64 __fastcall sub_180026644(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx

  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
  {
    v3 = *(_QWORD *)(v2 + 48);
    if ( v3 )
      sub_18001060C(v3);
  }
  return sub_1800265C0(a1);
}
