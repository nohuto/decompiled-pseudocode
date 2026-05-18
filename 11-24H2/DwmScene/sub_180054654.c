/*
 * XREFs of sub_180054654 @ 0x180054654
 * Callers:
 *     sub_180055840 @ 0x180055840 (sub_180055840.c)
 *     sub_1800D1720 @ 0x1800D1720 (sub_1800D1720.c)
 * Callees:
 *     sub_180013278 @ 0x180013278 (sub_180013278.c)
 *     sub_18001D7D8 @ 0x18001D7D8 (sub_18001D7D8.c)
 *     sub_18001DE9C @ 0x18001DE9C (sub_18001DE9C.c)
 *     sub_18001E4C0 @ 0x18001E4C0 (sub_18001E4C0.c)
 *     sub_18001E564 @ 0x18001E564 (sub_18001E564.c)
 *     sub_180023DA4 @ 0x180023DA4 (sub_180023DA4.c)
 */

unsigned __int64 __fastcall sub_180054654(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbp
  __int64 v6; // rax
  __int64 v8; // r14
  __int64 v9; // r15
  __int64 v10; // rcx
  __int64 v11; // rdi
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // rbp
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // rcx
  __int64 v18; // [rsp+50h] [rbp+8h] BYREF

  v3 = *a1;
  v6 = (a1[1] - *a1) >> 5;
  if ( v6 == 0x7FFFFFFFFFFFFFFLL )
    sub_180013278();
  v8 = v6 + 1;
  v18 = sub_18001E4C0(a1, v6 + 1);
  v9 = v18;
  v11 = sub_18001D7D8(v10, &v18);
  v12 = (a2 - v3) & 0xFFFFFFFFFFFFFFE0uLL;
  v13 = v12 + v11;
  sub_180023DA4(v12, v12 + v11, a3);
  v14 = a1[1];
  v15 = v11;
  v16 = *a1;
  if ( a2 != v14 )
  {
    sub_18001DE9C(v16, a2, v11);
    v14 = a1[1];
    v15 = v13 + 32;
    v16 = a2;
  }
  sub_18001DE9C(v16, v14, v15);
  sub_18001E564((__int64)a1, v11, v8, v9);
  return v13;
}
