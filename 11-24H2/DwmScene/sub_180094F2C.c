/*
 * XREFs of sub_180094F2C @ 0x180094F2C
 * Callers:
 *     sub_18009518C @ 0x18009518C (sub_18009518C.c)
 * Callees:
 *     sub_180010234 @ 0x180010234 (sub_180010234.c)
 *     sub_18002C59C @ 0x18002C59C (sub_18002C59C.c)
 *     sub_180078688 @ 0x180078688 (sub_180078688.c)
 *     sub_1800950A4 @ 0x1800950A4 (sub_1800950A4.c)
 *     sub_180095138 @ 0x180095138 (sub_180095138.c)
 *     sub_180095450 @ 0x180095450 (sub_180095450.c)
 */

__int64 __fastcall sub_180094F2C(__int64 *a1, __int64 a2, int a3, int a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rbp
  __int64 v10; // rax
  __int64 v12; // r14
  unsigned __int64 v13; // r15
  __int64 v14; // rcx
  __int64 v15; // rdi
  __int64 v16; // rbp
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // rcx
  __int64 result; // rax
  __int64 v21; // [rsp+60h] [rbp+8h] BYREF

  v6 = *a1;
  v10 = 0x6DB6DB6DB6DB6DB7LL * ((a1[1] - *a1) >> 3);
  if ( v10 == 0x492492492492492LL )
    std::_Xlength_error("vector too long");
  v12 = v10 + 1;
  v21 = sub_180095450(a1, v10 + 1);
  v13 = v21;
  v15 = sub_180078688(v14, (unsigned __int64 *)&v21);
  v16 = v15 + 56 * ((a2 - v6) / 56);
  sub_180095138(a6, v16, a3, a4, a5, a6);
  v17 = a1[1];
  v18 = v15;
  v19 = *a1;
  if ( a2 != v17 )
  {
    sub_1800950A4(v19, a2, v15);
    v17 = a1[1];
    v18 = v16 + 56;
    v19 = a2;
  }
  sub_1800950A4(v19, v17, v18);
  if ( *a1 )
  {
    sub_18002C59C(*a1, a1[1]);
    sub_180010234((void *)*a1, 8 * ((a1[2] - *a1) >> 3));
  }
  result = v16;
  *a1 = v15;
  a1[1] = v15 + 56 * v12;
  a1[2] = v15 + 56 * v13;
  return result;
}
