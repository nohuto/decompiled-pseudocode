/*
 * XREFs of sub_18002397C @ 0x18002397C
 * Callers:
 *     sub_18002AF10 @ 0x18002AF10 (sub_18002AF10.c)
 * Callees:
 *     sub_180010234 @ 0x180010234 (sub_180010234.c)
 *     sub_180023918 @ 0x180023918 (sub_180023918.c)
 *     sub_180023944 @ 0x180023944 (sub_180023944.c)
 *     sub_180023D28 @ 0x180023D28 (sub_180023D28.c)
 *     sub_180023DB8 @ 0x180023DB8 (sub_180023DB8.c)
 */

unsigned __int64 __fastcall sub_18002397C(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r14
  __int64 v6; // rdi
  __int64 v7; // rcx
  unsigned __int64 v9; // rdi
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // r8
  __int64 v12; // rsi
  __int64 v13; // rcx
  __int64 v14; // rdx
  unsigned __int64 v15; // r8
  __int64 v16; // rcx
  __int64 v17; // rcx
  unsigned __int64 result; // rax
  __int64 v19; // [rsp+50h] [rbp+8h] BYREF

  v4 = a2 - *a1;
  v6 = (a1[1] - *a1) >> 6;
  v7 = 0x3FFFFFFFFFFFFFFLL;
  if ( v6 == 0x3FFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector too long");
  v9 = v6 + 1;
  v10 = (a1[2] - *a1) >> 6;
  v11 = v10 >> 1;
  if ( v10 <= 0x3FFFFFFFFFFFFFFLL - (v10 >> 1) )
  {
    v7 = v11 + v10;
    if ( v11 + v10 < v9 )
      v7 = v9;
  }
  v19 = v7;
  v12 = sub_180023918(v7, &v19);
  sub_180023DB8(v13, (v4 & 0xFFFFFFFFFFFFFFC0uLL) + v12, a3);
  v14 = a1[1];
  v15 = v12;
  v16 = *a1;
  if ( a2 != v14 )
  {
    sub_180023D28(v16, a2, v12);
    v14 = a1[1];
    v15 = (v4 & 0xFFFFFFFFFFFFFFC0uLL) + v12 + 64;
    v16 = a2;
  }
  sub_180023D28(v16, v14, v15);
  if ( *a1 )
  {
    sub_180023944(*a1, a1[1]);
    sub_180010234((void *)*a1, (a1[2] - *a1) & 0xFFFFFFFFFFFFFFC0uLL);
  }
  v17 = v19;
  result = (v4 & 0xFFFFFFFFFFFFFFC0uLL) + v12;
  *a1 = v12;
  a1[1] = v12 + (v9 << 6);
  a1[2] = v12 + (v17 << 6);
  return result;
}
