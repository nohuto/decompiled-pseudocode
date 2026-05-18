/*
 * XREFs of sub_1800695F4 @ 0x1800695F4
 * Callers:
 *     sub_180069E48 @ 0x180069E48 (sub_180069E48.c)
 * Callees:
 *     sub_180010234 @ 0x180010234 (sub_180010234.c)
 *     sub_1800694FC @ 0x1800694FC (sub_1800694FC.c)
 *     sub_1800695BC @ 0x1800695BC (sub_1800695BC.c)
 *     sub_1800697C4 @ 0x1800697C4 (sub_1800697C4.c)
 *     sub_1800698A0 @ 0x1800698A0 (sub_1800698A0.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800695F4(__int64 *a1, __int64 a2, __int64 a3)
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
  v11 = sub_1800694FC(v9, &v20);
  v12 = v11 + 80 * v5;
  sub_1800698A0(v13, v12, a3);
  v15 = a1[1];
  v16 = *a1;
  v17 = v21;
  if ( v21 == v15 )
  {
    v18 = v11;
    while ( v16 != v15 )
    {
      sub_1800698A0(v14, v18, v16);
      v18 += 80LL;
      v16 += 80LL;
    }
    sub_1800695BC(v18, v18);
  }
  else
  {
    sub_1800697C4(*a1, v21, v11, a1);
    sub_1800697C4(v17, a1[1], v12 + 80, a1);
  }
  if ( *a1 )
  {
    sub_1800695BC(*a1, a1[1]);
    sub_180010234((void *)*a1, 16 * ((a1[2] - *a1) >> 4));
  }
  *a1 = v11;
  a1[1] = v11 + 80 * v8;
  a1[2] = v11 + 80 * v7;
  return v12;
}
