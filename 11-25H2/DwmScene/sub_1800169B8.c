/*
 * XREFs of sub_1800169B8 @ 0x1800169B8
 * Callers:
 *     sub_180015898 @ 0x180015898 (sub_180015898.c)
 *     sub_1800259A0 @ 0x1800259A0 (sub_1800259A0.c)
 *     sub_1800B617C @ 0x1800B617C (sub_1800B617C.c)
 *     sub_1800B6328 @ 0x1800B6328 (sub_1800B6328.c)
 *     sub_1800B64D4 @ 0x1800B64D4 (sub_1800B64D4.c)
 *     sub_1800B6680 @ 0x1800B6680 (sub_1800B6680.c)
 *     sub_1800B682C @ 0x1800B682C (sub_1800B682C.c)
 * Callees:
 *     sub_180010134 @ 0x180010134 (sub_180010134.c)
 *     sub_1800108F8 @ 0x1800108F8 (sub_1800108F8.c)
 *     sub_180010CC0 @ 0x180010CC0 (sub_180010CC0.c)
 *     sub_180012040 @ 0x180012040 (sub_180012040.c)
 *     sub_180012284 @ 0x180012284 (sub_180012284.c)
 */

char *__fastcall sub_1800169B8(__int64 *a1, __int64 a2, _QWORD *a3)
{
  __int64 v4; // r14
  __int64 v6; // rdi
  __int64 v7; // rcx
  unsigned __int64 v9; // rdi
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // r8
  _QWORD *v12; // rsi
  __int64 v13; // rcx
  __int64 v14; // rdx
  _QWORD *v15; // r8
  __int64 v16; // rcx
  __int64 v17; // rcx
  char *result; // rax
  __int64 v19; // [rsp+50h] [rbp+8h] BYREF

  v4 = a2 - *a1;
  v6 = (a1[1] - *a1) >> 4;
  v7 = 0xFFFFFFFFFFFFFFFLL;
  if ( v6 == 0xFFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector too long");
  v9 = v6 + 1;
  v10 = (a1[2] - *a1) >> 4;
  v11 = v10 >> 1;
  if ( v10 <= 0xFFFFFFFFFFFFFFFLL - (v10 >> 1) )
  {
    v7 = v11 + v10;
    if ( v11 + v10 < v9 )
      v7 = v9;
  }
  v19 = v7;
  v12 = (_QWORD *)sub_1800108F8(v7, &v19);
  sub_180010CC0(v13, (_QWORD *)((char *)v12 + (v4 & 0xFFFFFFFFFFFFFFF0uLL)), a3);
  v14 = a1[1];
  v15 = v12;
  v16 = *a1;
  if ( a2 != v14 )
  {
    sub_180012284(v16, a2, v12);
    v14 = a1[1];
    v15 = (_QWORD *)((char *)v12 + (v4 & 0xFFFFFFFFFFFFFFF0uLL) + 16);
    v16 = a2;
  }
  sub_180012284(v16, v14, v15);
  if ( *a1 )
  {
    sub_180012040(*a1, a1[1]);
    sub_180010134((void *)*a1, (a1[2] - *a1) & 0xFFFFFFFFFFFFFFF0uLL);
  }
  v17 = v19;
  result = (char *)v12 + (v4 & 0xFFFFFFFFFFFFFFF0uLL);
  *a1 = (__int64)v12;
  a1[1] = (__int64)&v12[2 * v9];
  a1[2] = (__int64)&v12[2 * v17];
  return result;
}
