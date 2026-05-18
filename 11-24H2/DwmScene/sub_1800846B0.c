/*
 * XREFs of sub_1800846B0 @ 0x1800846B0
 * Callers:
 *     sub_180083AF0 @ 0x180083AF0 (sub_180083AF0.c)
 *     sub_180084000 @ 0x180084000 (sub_180084000.c)
 * Callees:
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     sub_180011110 @ 0x180011110 (sub_180011110.c)
 *     sub_18001B610 @ 0x18001B610 (sub_18001B610.c)
 *     sub_180023570 @ 0x180023570 (sub_180023570.c)
 *     sub_180027D84 @ 0x180027D84 (sub_180027D84.c)
 *     sub_180068F70 @ 0x180068F70 (sub_180068F70.c)
 *     sub_180078578 @ 0x180078578 (sub_180078578.c)
 */

__int64 __fastcall sub_1800846B0(__int64 a1)
{
  __int64 *v2; // rax
  __int64 *v3; // rax
  __int64 **v4; // rsi
  __int64 *v5; // rbx
  __int64 *v6; // rax
  __int64 v8; // [rsp+30h] [rbp-28h] BYREF
  __int64 v9; // [rsp+38h] [rbp-20h]

  v2 = (__int64 *)sub_180078578(a1);
  v3 = sub_180023570(v2, &v8);
  v4 = (__int64 **)(a1 + 1832);
  sub_180011110((_QWORD *)(a1 + 1832), v3);
  if ( v9 )
    sub_18001060C(v9);
  v5 = *v4;
  v6 = sub_18001B610(&v8, a1 + 24, (__int64)" DepthBuffer");
  sub_180027D84((__int64)v5, (__int64)v6);
  return sub_180068F70(*v4, *(_DWORD *)(a1 + 1940), *(_DWORD *)(a1 + 1940), 1u, 0, 0LL);
}
