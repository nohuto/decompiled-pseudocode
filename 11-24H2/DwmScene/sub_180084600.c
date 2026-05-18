/*
 * XREFs of sub_180084600 @ 0x180084600
 * Callers:
 *     sub_180083AF0 @ 0x180083AF0 (sub_180083AF0.c)
 * Callees:
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     sub_1800108FC @ 0x1800108FC (sub_1800108FC.c)
 *     sub_180011110 @ 0x180011110 (sub_180011110.c)
 *     sub_18001B610 @ 0x18001B610 (sub_18001B610.c)
 *     sub_1800269B8 @ 0x1800269B8 (sub_1800269B8.c)
 *     sub_180027D84 @ 0x180027D84 (sub_180027D84.c)
 *     sub_180078578 @ 0x180078578 (sub_180078578.c)
 */

char __fastcall sub_180084600(__int64 a1, char a2)
{
  __int64 v4; // rax
  __int64 *v5; // rsi
  __int64 v6; // rbx
  __int64 *v7; // rax
  __int64 v9; // [rsp+30h] [rbp-28h] BYREF
  __int64 v10; // [rsp+38h] [rbp-20h]

  v4 = sub_180078578(a1);
  sub_1800108FC(v4, &v9);
  v5 = (__int64 *)(a1 + 1912);
  sub_180011110((_QWORD *)(a1 + 1912), &v9);
  if ( v10 )
    sub_18001060C(v10);
  v6 = *v5;
  v7 = sub_18001B610(&v9, a1 + 24, (__int64)" ColorBuffer");
  sub_180027D84(v6, (__int64)v7);
  return sub_1800269B8(*v5, *(_DWORD *)(a1 + 1940), *(_DWORD *)(a1 + 1940), a2, 3, 0LL);
}
