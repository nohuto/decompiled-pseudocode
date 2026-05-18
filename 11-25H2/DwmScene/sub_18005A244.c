/*
 * XREFs of sub_18005A244 @ 0x18005A244
 * Callers:
 *     sub_18005B47C @ 0x18005B47C (sub_18005B47C.c)
 * Callees:
 *     sub_1800108F8 @ 0x1800108F8 (sub_1800108F8.c)
 *     sub_180010CC0 @ 0x180010CC0 (sub_180010CC0.c)
 *     sub_180011820 @ 0x180011820 (sub_180011820.c)
 *     sub_18002E2AC @ 0x18002E2AC (sub_18002E2AC.c)
 *     sub_180036124 @ 0x180036124 (sub_180036124.c)
 */

char *__fastcall sub_18005A244(__int64 *a1, __int64 a2, _QWORD *a3)
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
  sub_180010CC0(v11, (_QWORD *)((char *)v10 + v11), a3);
  v13 = a1[1];
  v14 = v10;
  v15 = *a1;
  if ( a2 != v13 )
  {
    sub_18002E2AC(v15, a2, v10);
    v13 = a1[1];
    v14 = v12 + 16;
    v15 = a2;
  }
  sub_18002E2AC(v15, v13, v14);
  sub_180036124((__int64)a1, (__int64)v10, v8, v17);
  return v12;
}
