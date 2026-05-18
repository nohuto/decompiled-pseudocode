/*
 * XREFs of sub_18006A4B8 @ 0x18006A4B8
 * Callers:
 *     sub_18006A3F4 @ 0x18006A3F4 (sub_18006A3F4.c)
 *     sub_18006AE18 @ 0x18006AE18 (sub_18006AE18.c)
 *     sub_18006B38C @ 0x18006B38C (sub_18006B38C.c)
 *     sub_180087070 @ 0x180087070 (sub_180087070.c)
 *     sub_1800D2150 @ 0x1800D2150 (sub_1800D2150.c)
 * Callees:
 *     sub_1800108F8 @ 0x1800108F8 (sub_1800108F8.c)
 *     sub_180011820 @ 0x180011820 (sub_180011820.c)
 *     sub_180012284 @ 0x180012284 (sub_180012284.c)
 *     sub_1800122C8 @ 0x1800122C8 (sub_1800122C8.c)
 *     sub_180012F40 @ 0x180012F40 (sub_180012F40.c)
 */

char *__fastcall sub_18006A4B8(__int64 *a1, __int64 a2, _QWORD *a3)
{
  __int64 v3; // rbp
  __int64 v6; // rax
  __int64 v8; // r14
  __int64 v9; // rcx
  _QWORD *v10; // rdi
  unsigned __int64 v11; // rcx
  char *v12; // rbp
  __int64 v13; // rdx
  _QWORD *v14; // r8
  __int64 v15; // rcx
  __int64 v17; // [rsp+40h] [rbp+8h] BYREF

  v3 = *a1;
  v6 = (a1[1] - *a1) >> 4;
  if ( v6 == 0xFFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector too long");
  v8 = v6 + 1;
  v17 = sub_180011820(a1, v6 + 1);
  v10 = (_QWORD *)sub_1800108F8(v9, &v17);
  v11 = (a2 - v3) & 0xFFFFFFFFFFFFFFF0uLL;
  v12 = (char *)v10 + v11;
  sub_1800122C8(v11, (_QWORD *)((char *)v10 + v11), a3);
  v13 = a1[1];
  v14 = v10;
  v15 = *a1;
  if ( a2 != v13 )
  {
    sub_180012284(v15, a2, v10);
    v13 = a1[1];
    v14 = v12 + 16;
    v15 = a2;
  }
  sub_180012284(v15, v13, v14);
  sub_180012F40((__int64)a1, (__int64)v10, v8, v17);
  return v12;
}
