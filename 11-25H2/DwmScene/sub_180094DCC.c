/*
 * XREFs of sub_180094DCC @ 0x180094DCC
 * Callers:
 *     sub_18009502C @ 0x18009502C (sub_18009502C.c)
 * Callees:
 *     sub_180010134 @ 0x180010134 (sub_180010134.c)
 *     sub_18002C43C @ 0x18002C43C (sub_18002C43C.c)
 *     sub_180078528 @ 0x180078528 (sub_180078528.c)
 *     sub_180094F44 @ 0x180094F44 (sub_180094F44.c)
 *     sub_180094FD8 @ 0x180094FD8 (sub_180094FD8.c)
 *     sub_1800952F0 @ 0x1800952F0 (sub_1800952F0.c)
 */

__int64 __fastcall sub_180094DCC(__int64 *a1, __int64 a2, int a3, int a4, __int64 a5, __int64 a6)
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
  v21 = sub_1800952F0(a1, v10 + 1);
  v13 = v21;
  v15 = sub_180078528(v14, (unsigned __int64 *)&v21);
  v16 = v15 + 56 * ((a2 - v6) / 56);
  sub_180094FD8(a6, v16, a3, a4, a5, a6);
  v17 = a1[1];
  v18 = v15;
  v19 = *a1;
  if ( a2 != v17 )
  {
    sub_180094F44(v19, a2, v15);
    v17 = a1[1];
    v18 = v16 + 56;
    v19 = a2;
  }
  sub_180094F44(v19, v17, v18);
  if ( *a1 )
  {
    sub_18002C43C(*a1, a1[1]);
    sub_180010134((void *)*a1, 8 * ((a1[2] - *a1) >> 3));
  }
  result = v16;
  *a1 = v15;
  a1[1] = v15 + 56 * v12;
  a1[2] = v15 + 56 * v13;
  return result;
}
