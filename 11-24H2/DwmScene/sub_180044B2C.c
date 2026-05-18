/*
 * XREFs of sub_180044B2C @ 0x180044B2C
 * Callers:
 *     sub_1800465B4 @ 0x1800465B4 (sub_1800465B4.c)
 * Callees:
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     sub_180011110 @ 0x180011110 (sub_180011110.c)
 *     sub_180027DD0 @ 0x180027DD0 (sub_180027DD0.c)
 *     sub_180044630 @ 0x180044630 (sub_180044630.c)
 *     sub_180045ACC @ 0x180045ACC (sub_180045ACC.c)
 */

__int64 __fastcall sub_180044B2C(__int64 *a1, int a2, int a3, int a4, int a5, __int64 a6)
{
  __int64 *v10; // rax
  int v11; // eax
  int v12; // r10d
  __int64 v14; // [rsp+30h] [rbp-18h] BYREF
  __int64 v15; // [rsp+38h] [rbp-10h]

  if ( !*a1 )
  {
    v10 = sub_180044630(a6, &v14);
    sub_180011110(a1, v10);
    if ( v15 )
      sub_18001060C(v15);
    sub_180027DD0(*a1, 8, 0);
  }
  v11 = sub_180045ACC(12LL);
  return sub_18007F934(*a1, a2, a3, a4 * v11, a5, v12);
}
