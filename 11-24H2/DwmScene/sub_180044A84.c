/*
 * XREFs of sub_180044A84 @ 0x180044A84
 * Callers:
 *     sub_18004639C @ 0x18004639C (sub_18004639C.c)
 *     sub_180046734 @ 0x180046734 (sub_180046734.c)
 * Callees:
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     sub_180011110 @ 0x180011110 (sub_180011110.c)
 *     sub_180027DD0 @ 0x180027DD0 (sub_180027DD0.c)
 *     sub_180044650 @ 0x180044650 (sub_180044650.c)
 *     sub_180045ACC @ 0x180045ACC (sub_180045ACC.c)
 */

__int64 __fastcall sub_180044A84(__int64 *a1, int a2, int a3, int a4, int a5, __int64 a6, __int64 a7)
{
  __int64 *v11; // rax
  int v12; // eax
  int v13; // r10d
  __int64 v15; // [rsp+30h] [rbp-18h] BYREF
  __int64 v16; // [rsp+38h] [rbp-10h]

  if ( !*a1 )
  {
    v11 = (__int64 *)sub_180044650(a6, (__int64)&v15, a7);
    sub_180011110(a1, v11);
    if ( v16 )
      sub_18001060C(v16);
    sub_180027DD0(*a1, 8, 0);
  }
  v12 = sub_180045ACC(17LL);
  return sub_18007F934(*a1, a2, a3, a4 * v12, a5, v13);
}
