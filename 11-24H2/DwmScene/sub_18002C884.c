/*
 * XREFs of sub_18002C884 @ 0x18002C884
 * Callers:
 *     sub_180031270 @ 0x180031270 (sub_180031270.c)
 * Callees:
 *     sub_180010234 @ 0x180010234 (sub_180010234.c)
 *     sub_1800109F8 @ 0x1800109F8 (sub_1800109F8.c)
 *     sub_180012140 @ 0x180012140 (sub_180012140.c)
 *     sub_180012384 @ 0x180012384 (sub_180012384.c)
 *     sub_1800123C8 @ 0x1800123C8 (sub_1800123C8.c)
 */

_QWORD *__fastcall sub_18002C884(__int64 *a1, __int64 a2, _QWORD *a3)
{
  __int64 v3; // rbx
  __int64 v4; // r14
  __int64 v6; // rsi
  unsigned __int64 v9; // rsi
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  __int64 v12; // rax
  _QWORD *v13; // r14
  _QWORD *v14; // rbp
  __int64 v15; // rcx
  __int64 v16; // rdx
  _QWORD *v17; // r8
  __int64 v18; // rcx
  _QWORD *result; // rax
  __int64 v20; // [rsp+50h] [rbp+8h] BYREF

  v3 = 0xFFFFFFFFFFFFFFFLL;
  v4 = a2 - *a1;
  v6 = (a1[1] - *a1) >> 4;
  if ( v6 == 0xFFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector too long");
  v9 = v6 + 1;
  v10 = (a1[2] - *a1) >> 4;
  v11 = v10 >> 1;
  if ( v10 <= 0xFFFFFFFFFFFFFFFLL - (v10 >> 1) )
  {
    v3 = v11 + v10;
    if ( v11 + v10 < v9 )
      v3 = v9;
  }
  v20 = v3;
  v12 = sub_1800109F8(v10, &v20);
  v13 = (_QWORD *)(v12 + (v4 & 0xFFFFFFFFFFFFFFF0uLL));
  v14 = (_QWORD *)v12;
  sub_1800123C8(v15, v13, a3);
  v16 = a1[1];
  v17 = v14;
  v18 = *a1;
  if ( a2 != v16 )
  {
    sub_180012384(v18, a2, v14);
    v16 = a1[1];
    v17 = v13 + 2;
    v18 = a2;
  }
  sub_180012384(v18, v16, v17);
  if ( *a1 )
  {
    sub_180012140(*a1, a1[1]);
    sub_180010234((void *)*a1, (a1[2] - *a1) & 0xFFFFFFFFFFFFFFF0uLL);
  }
  *a1 = (__int64)v14;
  result = v13;
  a1[1] = (__int64)&v14[2 * v9];
  a1[2] = (__int64)&v14[2 * v3];
  return result;
}
