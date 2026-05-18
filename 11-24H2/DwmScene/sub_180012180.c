/*
 * XREFs of sub_180012180 @ 0x180012180
 * Callers:
 *     sub_180013120 @ 0x180013120 (sub_180013120.c)
 *     sub_180075970 @ 0x180075970 (sub_180075970.c)
 * Callees:
 *     sub_1800109F8 @ 0x1800109F8 (sub_1800109F8.c)
 *     sub_180012384 @ 0x180012384 (sub_180012384.c)
 *     sub_1800123C8 @ 0x1800123C8 (sub_1800123C8.c)
 *     sub_180013040 @ 0x180013040 (sub_180013040.c)
 *     sub_180013278 @ 0x180013278 (sub_180013278.c)
 */

unsigned __int64 __fastcall sub_180012180(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  __int64 v4; // r14
  __int64 v6; // rax
  unsigned __int64 v9; // rbp
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  __int64 v12; // rax
  unsigned __int64 v13; // r14
  __int64 v14; // rsi
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // rcx
  __int64 v20; // [rsp+50h] [rbp+8h] BYREF

  v3 = 0xFFFFFFFFFFFFFFFLL;
  v4 = a2 - *a1;
  v6 = (a1[1] - *a1) >> 4;
  if ( v6 == 0xFFFFFFFFFFFFFFFLL )
    sub_180013278();
  v9 = v6 + 1;
  v10 = (a1[2] - *a1) >> 4;
  v11 = v10 >> 1;
  if ( v10 <= 0xFFFFFFFFFFFFFFFLL - (v10 >> 1) )
  {
    v3 = v11 + v10;
    if ( v11 + v10 < v9 )
      v3 = v6 + 1;
  }
  v20 = v3;
  v12 = sub_1800109F8(v10, &v20);
  v13 = v12 + (v4 & 0xFFFFFFFFFFFFFFF0uLL);
  v14 = v12;
  sub_1800123C8(v15, v13, a3);
  v16 = a1[1];
  v17 = v14;
  v18 = *a1;
  if ( a2 != v16 )
  {
    sub_180012384(v18, a2, v14);
    v16 = a1[1];
    v17 = v13 + 16;
    v18 = a2;
  }
  sub_180012384(v18, v16, v17);
  sub_180013040(a1, v14, v9, v3);
  return v13;
}
