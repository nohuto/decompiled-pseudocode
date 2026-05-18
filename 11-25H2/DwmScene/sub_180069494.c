/*
 * XREFs of sub_180069494 @ 0x180069494
 * Callers:
 *     sub_180069CE8 @ 0x180069CE8 (sub_180069CE8.c)
 * Callees:
 *     sub_180010134 @ 0x180010134 (sub_180010134.c)
 *     sub_18006939C @ 0x18006939C (sub_18006939C.c)
 *     sub_18006945C @ 0x18006945C (sub_18006945C.c)
 *     sub_180069664 @ 0x180069664 (sub_180069664.c)
 *     sub_180069740 @ 0x180069740 (sub_180069740.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180069494(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rdi
  unsigned __int64 v6; // r15
  unsigned __int64 v7; // r14
  unsigned __int64 v8; // r15
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  __int64 v11; // rsi
  __int64 v12; // r13
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // r12
  __int64 v16; // rbp
  __int64 v17; // rdi
  __int64 v18; // rdi
  unsigned __int64 v20; // [rsp+80h] [rbp+8h] BYREF
  __int64 v21; // [rsp+88h] [rbp+10h]

  v21 = a2;
  v5 = (a2 - *a1) / 80;
  v6 = 0xCCCCCCCCCCCCCCCDuLL * ((a1[1] - *a1) >> 4);
  v7 = 0x333333333333333LL;
  if ( v6 == 0x333333333333333LL )
    std::_Xlength_error("vector too long");
  v8 = v6 + 1;
  v9 = 0xCCCCCCCCCCCCCCCDuLL * ((a1[2] - *a1) >> 4);
  v10 = v9 >> 1;
  if ( v9 <= 0x333333333333333LL - (v9 >> 1) )
  {
    v7 = v10 + v9;
    if ( v10 + v9 < v8 )
      v7 = v8;
  }
  v20 = v7;
  v11 = sub_18006939C(v9, &v20);
  v12 = v11 + 80 * v5;
  sub_180069740(v13, v12, a3);
  v15 = a1[1];
  v16 = *a1;
  v17 = v21;
  if ( v21 == v15 )
  {
    v18 = v11;
    while ( v16 != v15 )
    {
      sub_180069740(v14, v18, v16);
      v18 += 80LL;
      v16 += 80LL;
    }
    sub_18006945C(v18, v18);
  }
  else
  {
    sub_180069664(*a1, v21, v11, a1);
    sub_180069664(v17, a1[1], v12 + 80, a1);
  }
  if ( *a1 )
  {
    sub_18006945C(*a1, a1[1]);
    sub_180010134((void *)*a1, 16 * ((a1[2] - *a1) >> 4));
  }
  *a1 = v11;
  a1[1] = v11 + 80 * v8;
  a1[2] = v11 + 80 * v7;
  return v12;
}
