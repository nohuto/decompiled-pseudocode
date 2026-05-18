/*
 * XREFs of sub_1800844A0 @ 0x1800844A0
 * Callers:
 *     sub_180083990 @ 0x180083990 (sub_180083990.c)
 * Callees:
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_1800107FC @ 0x1800107FC (sub_1800107FC.c)
 *     sub_180011010 @ 0x180011010 (sub_180011010.c)
 *     sub_18001B4B0 @ 0x18001B4B0 (sub_18001B4B0.c)
 *     sub_180026858 @ 0x180026858 (sub_180026858.c)
 *     sub_180027C24 @ 0x180027C24 (sub_180027C24.c)
 *     sub_180078418 @ 0x180078418 (sub_180078418.c)
 */

char __fastcall sub_1800844A0(__int64 a1, char a2)
{
  __int64 v4; // rax
  __int64 *v5; // rsi
  __int64 v6; // rbx
  __int64 *v7; // rax
  __int64 v9; // [rsp+30h] [rbp-28h] BYREF
  __int64 v10; // [rsp+38h] [rbp-20h]

  v4 = sub_180078418(a1);
  sub_1800107FC(v4, &v9);
  v5 = (__int64 *)(a1 + 1912);
  sub_180011010((_QWORD *)(a1 + 1912), &v9);
  if ( v10 )
    sub_18001050C(v10);
  v6 = *v5;
  v7 = sub_18001B4B0(&v9, a1 + 24, (__int64)" ColorBuffer");
  sub_180027C24(v6, (__int64)v7);
  return sub_180026858(*v5, *(_DWORD *)(a1 + 1940), *(_DWORD *)(a1 + 1940), a2, 3, 0LL);
}
