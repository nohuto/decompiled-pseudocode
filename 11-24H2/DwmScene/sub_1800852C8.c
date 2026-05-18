/*
 * XREFs of sub_1800852C8 @ 0x1800852C8
 * Callers:
 *     sub_180085320 @ 0x180085320 (sub_180085320.c)
 * Callees:
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     sub_18001AA80 @ 0x18001AA80 (sub_18001AA80.c)
 */

void **__fastcall sub_1800852C8(_QWORD *a1)
{
  __int64 v2; // rcx

  *a1 = &Spectre::Engine::ColorTransform::`vftable';
  sub_18001AA80((__int64)(a1 + 14));
  v2 = a1[13];
  if ( v2 )
    sub_18001060C(v2);
  return sub_180040504(a1);
}
