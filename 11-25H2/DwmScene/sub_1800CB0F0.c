/*
 * XREFs of sub_1800CB0F0 @ 0x1800CB0F0
 * Callers:
 *     sub_1800CB760 @ 0x1800CB760 (sub_1800CB760.c)
 *     sub_1800E21DE @ 0x1800E21DE (sub_1800E21DE.c)
 * Callees:
 *     sub_18000E854 @ 0x18000E854 (sub_18000E854.c)
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 */

__int64 __fastcall sub_1800CB0F0(__int64 *a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx

  v2 = a1[5];
  if ( v2 )
    sub_18001050C(v2);
  v3 = a1[3];
  if ( v3 )
    sub_18001050C(v3);
  sub_18000E854(a1 + 1);
  return sub_18000E854(a1);
}
