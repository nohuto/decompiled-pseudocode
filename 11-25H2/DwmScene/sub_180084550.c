/*
 * XREFs of sub_180084550 @ 0x180084550
 * Callers:
 *     sub_180083990 @ 0x180083990 (sub_180083990.c)
 *     sub_180083EA0 @ 0x180083EA0 (sub_180083EA0.c)
 * Callees:
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_180011010 @ 0x180011010 (sub_180011010.c)
 *     sub_18001B4B0 @ 0x18001B4B0 (sub_18001B4B0.c)
 *     sub_180023410 @ 0x180023410 (sub_180023410.c)
 *     sub_180027C24 @ 0x180027C24 (sub_180027C24.c)
 *     sub_180068E10 @ 0x180068E10 (sub_180068E10.c)
 *     sub_180078418 @ 0x180078418 (sub_180078418.c)
 */

__int64 __fastcall sub_180084550(__int64 a1)
{
  __int64 *v2; // rax
  __int64 *v3; // rax
  __int64 **v4; // rsi
  __int64 *v5; // rbx
  __int64 *v6; // rax
  __int64 v8; // [rsp+30h] [rbp-28h] BYREF
  __int64 v9; // [rsp+38h] [rbp-20h]

  v2 = (__int64 *)sub_180078418(a1);
  v3 = sub_180023410(v2, &v8);
  v4 = (__int64 **)(a1 + 1832);
  sub_180011010((_QWORD *)(a1 + 1832), v3);
  if ( v9 )
    sub_18001050C(v9);
  v5 = *v4;
  v6 = sub_18001B4B0(&v8, a1 + 24, (__int64)" DepthBuffer");
  sub_180027C24((__int64)v5, (__int64)v6);
  return sub_180068E10(*v4, *(_DWORD *)(a1 + 1940), *(_DWORD *)(a1 + 1940), 1u, 0, 0LL);
}
