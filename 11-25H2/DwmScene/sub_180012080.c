/*
 * XREFs of sub_180012080 @ 0x180012080
 * Callers:
 *     sub_180013020 @ 0x180013020 (sub_180013020.c)
 *     sub_180075810 @ 0x180075810 (sub_180075810.c)
 * Callees:
 *     sub_1800108F8 @ 0x1800108F8 (sub_1800108F8.c)
 *     sub_180012284 @ 0x180012284 (sub_180012284.c)
 *     sub_1800122C8 @ 0x1800122C8 (sub_1800122C8.c)
 *     sub_180012F40 @ 0x180012F40 (sub_180012F40.c)
 *     sub_180013178 @ 0x180013178 (sub_180013178.c)
 */

unsigned __int64 __fastcall sub_180012080(__int64 *a1, __int64 a2, __int64 a3)
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
    sub_180013178();
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
  v12 = sub_1800108F8(v10, &v20);
  v13 = v12 + (v4 & 0xFFFFFFFFFFFFFFF0uLL);
  v14 = v12;
  sub_1800122C8(v15, v13, a3);
  v16 = a1[1];
  v17 = v14;
  v18 = *a1;
  if ( a2 != v16 )
  {
    sub_180012284(v18, a2, v14);
    v16 = a1[1];
    v17 = v13 + 16;
    v18 = a2;
  }
  sub_180012284(v18, v16, v17);
  sub_180012F40(a1, v14, v9, v3);
  return v13;
}
