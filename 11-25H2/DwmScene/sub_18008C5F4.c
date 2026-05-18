/*
 * XREFs of sub_18008C5F4 @ 0x18008C5F4
 * Callers:
 *     sub_18008C8B4 @ 0x18008C8B4 (sub_18008C8B4.c)
 *     sub_18008CA14 @ 0x18008CA14 (sub_18008CA14.c)
 * Callees:
 *     sub_1800108F8 @ 0x1800108F8 (sub_1800108F8.c)
 *     sub_180011820 @ 0x180011820 (sub_180011820.c)
 *     sub_180012284 @ 0x180012284 (sub_180012284.c)
 *     sub_1800122C8 @ 0x1800122C8 (sub_1800122C8.c)
 *     sub_180012F40 @ 0x180012F40 (sub_180012F40.c)
 *     sub_180013178 @ 0x180013178 (sub_180013178.c)
 */

char *__fastcall sub_18008C5F4(__int64 *a1, __int64 a2, _QWORD *a3)
{
  __int64 v3; // rbp
  __int64 v6; // rax
  __int64 v8; // r14
  __int64 v9; // r15
  __int64 v10; // rcx
  _QWORD *v11; // rdi
  unsigned __int64 v12; // rcx
  char *v13; // rbp
  __int64 v14; // rdx
  _QWORD *v15; // r8
  __int64 v16; // rcx
  __int64 v18; // [rsp+50h] [rbp+8h] BYREF

  v3 = *a1;
  v6 = (a1[1] - *a1) >> 4;
  if ( v6 == 0xFFFFFFFFFFFFFFFLL )
    sub_180013178();
  v8 = v6 + 1;
  v18 = sub_180011820(a1, v6 + 1);
  v9 = v18;
  v11 = (_QWORD *)sub_1800108F8(v10, &v18);
  v12 = (a2 - v3) & 0xFFFFFFFFFFFFFFF0uLL;
  v13 = (char *)v11 + v12;
  sub_1800122C8(v12, (_QWORD *)((char *)v11 + v12), a3);
  v14 = a1[1];
  v15 = v11;
  v16 = *a1;
  if ( a2 != v14 )
  {
    sub_180012284(v16, a2, v11);
    v14 = a1[1];
    v15 = v13 + 16;
    v16 = a2;
  }
  sub_180012284(v16, v14, v15);
  sub_180012F40((__int64)a1, (__int64)v11, v8, v9);
  return v13;
}
