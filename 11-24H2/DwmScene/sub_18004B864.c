/*
 * XREFs of sub_18004B864 @ 0x18004B864
 * Callers:
 *     sub_18004A6F8 @ 0x18004A6F8 (sub_18004A6F8.c)
 *     sub_18004A81C @ 0x18004A81C (sub_18004A81C.c)
 *     sub_18004B75C @ 0x18004B75C (sub_18004B75C.c)
 * Callees:
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 */

char __fastcall sub_18004B864(__int64 a1)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 40);
  if ( v2 )
    sub_18001060C(v2);
  return sub_180011B5C(a1);
}
