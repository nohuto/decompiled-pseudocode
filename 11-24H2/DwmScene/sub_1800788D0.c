/*
 * XREFs of sub_1800788D0 @ 0x1800788D0
 * Callers:
 *     sub_1800797BC @ 0x1800797BC (sub_1800797BC.c)
 *     sub_18007BC84 @ 0x18007BC84 (sub_18007BC84.c)
 * Callees:
 *     sub_180010234 @ 0x180010234 (sub_180010234.c)
 *     sub_1800786A8 @ 0x1800786A8 (sub_1800786A8.c)
 *     sub_180078718 @ 0x180078718 (sub_180078718.c)
 *     sub_180078C28 @ 0x180078C28 (sub_180078C28.c)
 *     sub_180078D64 @ 0x180078D64 (sub_180078D64.c)
 *     sub_18007AA10 @ 0x18007AA10 (sub_18007AA10.c)
 */

__int64 __fastcall sub_1800788D0(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbp
  unsigned __int64 v6; // rax
  unsigned __int64 v8; // r14
  unsigned __int64 v9; // r15
  __int64 v10; // rcx
  __int64 v11; // rdi
  unsigned __int64 v12; // rdx
  __int64 v13; // rbp
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // rcx
  __int64 result; // rax
  __int64 v18; // [rsp+50h] [rbp+8h] BYREF

  v3 = *a1;
  v6 = 0xCCCCCCCCCCCCCCCDuLL * ((a1[1] - *a1) >> 3);
  if ( v6 == 0x666666666666666LL )
    std::_Xlength_error("vector too long");
  v8 = v6 + 1;
  v18 = sub_18007AA10(a1, v6 + 1);
  v9 = v18;
  v11 = sub_1800786A8(v10, (unsigned __int64 *)&v18);
  v12 = (__int64)((unsigned __int128)((a2 - v3) * (__int128)0x6666666666666667LL) >> 64) >> 4;
  v13 = v11 + 40 * ((a2 - v3) / 40);
  sub_180078D64(5 * ((v12 >> 63) + v12), v13, a3);
  v14 = a1[1];
  v15 = v11;
  v16 = *a1;
  if ( a2 != v14 )
  {
    sub_180078C28(v16, a2, v11);
    v14 = a1[1];
    v15 = v13 + 40;
    v16 = a2;
  }
  sub_180078C28(v16, v14, v15);
  if ( *a1 )
  {
    sub_180078718(*a1, a1[1]);
    sub_180010234((void *)*a1, 8 * ((a1[2] - *a1) >> 3));
  }
  *a1 = v11;
  a1[1] = v11 + 40 * v8;
  result = v13;
  a1[2] = v11 + 40 * v9;
  return result;
}
