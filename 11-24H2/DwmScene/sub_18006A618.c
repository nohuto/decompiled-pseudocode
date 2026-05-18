/*
 * XREFs of sub_18006A618 @ 0x18006A618
 * Callers:
 *     sub_18006A554 @ 0x18006A554 (sub_18006A554.c)
 *     sub_18006AF78 @ 0x18006AF78 (sub_18006AF78.c)
 *     sub_18006B4EC @ 0x18006B4EC (sub_18006B4EC.c)
 *     sub_1800871D0 @ 0x1800871D0 (sub_1800871D0.c)
 *     sub_1800D22B0 @ 0x1800D22B0 (sub_1800D22B0.c)
 * Callees:
 *     sub_1800109F8 @ 0x1800109F8 (sub_1800109F8.c)
 *     sub_180011920 @ 0x180011920 (sub_180011920.c)
 *     sub_180012384 @ 0x180012384 (sub_180012384.c)
 *     sub_1800123C8 @ 0x1800123C8 (sub_1800123C8.c)
 *     sub_180013040 @ 0x180013040 (sub_180013040.c)
 */

char *__fastcall sub_18006A618(__int64 *a1, __int64 a2, _QWORD *a3)
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
  v17 = sub_180011920(a1, v6 + 1);
  v10 = (_QWORD *)sub_1800109F8(v9, &v17);
  v11 = (a2 - v3) & 0xFFFFFFFFFFFFFFF0uLL;
  v12 = (char *)v10 + v11;
  sub_1800123C8(v11, (_QWORD *)((char *)v10 + v11), a3);
  v13 = a1[1];
  v14 = v10;
  v15 = *a1;
  if ( a2 != v13 )
  {
    sub_180012384(v15, a2, v10);
    v13 = a1[1];
    v14 = v12 + 16;
    v15 = a2;
  }
  sub_180012384(v15, v13, v14);
  sub_180013040((__int64)a1, (__int64)v10, v8, v17);
  return v12;
}
