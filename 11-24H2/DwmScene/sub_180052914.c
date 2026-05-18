/*
 * XREFs of sub_180052914 @ 0x180052914
 * Callers:
 *     sub_180053308 @ 0x180053308 (sub_180053308.c)
 * Callees:
 *     sub_180010234 @ 0x180010234 (sub_180010234.c)
 *     sub_1800109F8 @ 0x1800109F8 (sub_1800109F8.c)
 *     sub_180010BA8 @ 0x180010BA8 (sub_180010BA8.c)
 *     sub_180010D7C @ 0x180010D7C (sub_180010D7C.c)
 *     sub_180010DC0 @ 0x180010DC0 (sub_180010DC0.c)
 */

unsigned __int64 __fastcall sub_180052914(__int64 *a1, __int64 a2, _QWORD *a3)
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
  __int64 v15; // r8
  __int64 v16; // rcx
  __int64 v17; // rcx
  unsigned __int64 result; // rax
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
  v12 = sub_1800109F8(v7, &v19);
  sub_180010DC0(v13, (_QWORD *)((v4 & 0xFFFFFFFFFFFFFFF0uLL) + v12), a3);
  v14 = a1[1];
  v15 = v12;
  v16 = *a1;
  if ( a2 != v14 )
  {
    sub_180010D7C(v16, a2, v12);
    v14 = a1[1];
    v15 = (v4 & 0xFFFFFFFFFFFFFFF0uLL) + v12 + 16;
    v16 = a2;
  }
  sub_180010D7C(v16, v14, v15);
  if ( *a1 )
  {
    sub_180010BA8(*a1, a1[1]);
    sub_180010234((void *)*a1, (a1[2] - *a1) & 0xFFFFFFFFFFFFFFF0uLL);
  }
  v17 = v19;
  result = (v4 & 0xFFFFFFFFFFFFFFF0uLL) + v12;
  *a1 = v12;
  a1[1] = v12 + 16 * v9;
  a1[2] = v12 + 16 * v17;
  return result;
}
