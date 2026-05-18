/*
 * XREFs of sub_1800CB250 @ 0x1800CB250
 * Callers:
 *     sub_1800CB8C0 @ 0x1800CB8C0 (sub_1800CB8C0.c)
 *     sub_1800E233E @ 0x1800E233E (sub_1800E233E.c)
 * Callees:
 *     sub_18000E954 @ 0x18000E954 (sub_18000E954.c)
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 */

__int64 __fastcall sub_1800CB250(__int64 *a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx

  v2 = a1[5];
  if ( v2 )
    sub_18001060C(v2);
  v3 = a1[3];
  if ( v3 )
    sub_18001060C(v3);
  sub_18000E954(a1 + 1);
  return sub_18000E954(a1);
}
