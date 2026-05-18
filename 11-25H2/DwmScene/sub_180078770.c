/*
 * XREFs of sub_180078770 @ 0x180078770
 * Callers:
 *     sub_18007965C @ 0x18007965C (sub_18007965C.c)
 *     sub_18007BB24 @ 0x18007BB24 (sub_18007BB24.c)
 * Callees:
 *     sub_180010134 @ 0x180010134 (sub_180010134.c)
 *     sub_180078548 @ 0x180078548 (sub_180078548.c)
 *     sub_1800785B8 @ 0x1800785B8 (sub_1800785B8.c)
 *     sub_180078AC8 @ 0x180078AC8 (sub_180078AC8.c)
 *     sub_180078C04 @ 0x180078C04 (sub_180078C04.c)
 *     sub_18007A8B0 @ 0x18007A8B0 (sub_18007A8B0.c)
 */

__int64 __fastcall sub_180078770(__int64 *a1, __int64 a2, __int64 a3)
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
  v18 = sub_18007A8B0(a1, v6 + 1);
  v9 = v18;
  v11 = sub_180078548(v10, (unsigned __int64 *)&v18);
  v12 = (__int64)((unsigned __int128)((a2 - v3) * (__int128)0x6666666666666667LL) >> 64) >> 4;
  v13 = v11 + 40 * ((a2 - v3) / 40);
  sub_180078C04(5 * ((v12 >> 63) + v12), v13, a3);
  v14 = a1[1];
  v15 = v11;
  v16 = *a1;
  if ( a2 != v14 )
  {
    sub_180078AC8(v16, a2, v11);
    v14 = a1[1];
    v15 = v13 + 40;
    v16 = a2;
  }
  sub_180078AC8(v16, v14, v15);
  if ( *a1 )
  {
    sub_1800785B8(*a1, a1[1]);
    sub_180010134((void *)*a1, 8 * ((a1[2] - *a1) >> 3));
  }
  *a1 = v11;
  a1[1] = v11 + 40 * v8;
  result = v13;
  a1[2] = v11 + 40 * v9;
  return result;
}
