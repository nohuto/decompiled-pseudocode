/*
 * XREFs of sub_1800CAE40 @ 0x1800CAE40
 * Callers:
 *     sub_1800CB8A0 @ 0x1800CB8A0 (sub_1800CB8A0.c)
 * Callees:
 *     sub_1800108F8 @ 0x1800108F8 (sub_1800108F8.c)
 *     sub_180012284 @ 0x180012284 (sub_180012284.c)
 *     sub_1800122C8 @ 0x1800122C8 (sub_1800122C8.c)
 *     sub_180012F40 @ 0x180012F40 (sub_180012F40.c)
 */

_QWORD *__fastcall sub_1800CAE40(__int64 *a1, __int64 a2, _QWORD *a3)
{
  __int64 v3; // rbx
  __int64 v4; // r14
  __int64 v6; // rax
  unsigned __int64 v9; // rbp
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  __int64 v12; // rax
  _QWORD *v13; // r14
  _QWORD *v14; // rsi
  __int64 v15; // rcx
  __int64 v16; // rdx
  _QWORD *v17; // r8
  __int64 v18; // rcx
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
      v3 = v6 + 1;
  }
  v20 = v3;
  v12 = sub_1800108F8(v10, &v20);
  v13 = (_QWORD *)(v12 + (v4 & 0xFFFFFFFFFFFFFFF0uLL));
  v14 = (_QWORD *)v12;
  sub_1800122C8(v15, v13, a3);
  v16 = a1[1];
  v17 = v14;
  v18 = *a1;
  if ( a2 != v16 )
  {
    sub_180012284(v18, a2, v14);
    v16 = a1[1];
    v17 = v13 + 2;
    v18 = a2;
  }
  sub_180012284(v18, v16, v17);
  sub_180012F40((__int64)a1, (__int64)v14, v9, v3);
  return v13;
}
