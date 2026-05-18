/*
 * XREFs of sub_180094CE8 @ 0x180094CE8
 * Callers:
 *     sub_18009521C @ 0x18009521C (sub_18009521C.c)
 * Callees:
 *     memmove @ 0x18000CD6D (memmove.c)
 *     sub_180013178 @ 0x180013178 (sub_180013178.c)
 *     sub_180016664 @ 0x180016664 (sub_180016664.c)
 *     sub_18001E324 @ 0x18001E324 (sub_18001E324.c)
 *     sub_18001E39C @ 0x18001E39C (sub_18001E39C.c)
 *     sub_180041DE8 @ 0x180041DE8 (sub_180041DE8.c)
 */

char *__fastcall sub_180094CE8(_QWORD *a1, _BYTE *a2, unsigned int *a3)
{
  _BYTE *v3; // rbp
  __int64 v6; // rax
  __int64 v8; // r14
  __int64 v9; // r15
  __int64 v10; // rcx
  char *v11; // rdi
  __int64 v12; // rcx
  char *v13; // rbp
  _BYTE *v14; // r8
  void *v15; // rcx
  _BYTE *v16; // rdx
  size_t v17; // r8
  __int64 v19; // [rsp+50h] [rbp+8h] BYREF

  v3 = (_BYTE *)*a1;
  v6 = (__int64)(a1[1] - *a1) >> 2;
  if ( v6 == 0x3FFFFFFFFFFFFFFFLL )
    sub_180013178();
  v8 = v6 + 1;
  v19 = sub_18001E324(a1, v6 + 1);
  v9 = v19;
  v11 = (char *)sub_180016664(v10, &v19);
  v12 = (a2 - v3) >> 2;
  v13 = &v11[4 * v12];
  sub_180041DE8(v12, v13, a3);
  v14 = (_BYTE *)a1[1];
  v15 = v11;
  v16 = (_BYTE *)*a1;
  if ( a2 == v14 )
  {
    v17 = v14 - v16;
  }
  else
  {
    memmove(v11, v16, (size_t)&a2[-*a1]);
    v15 = v13 + 4;
    v17 = a1[1] - (_QWORD)a2;
    v16 = a2;
  }
  memmove(v15, v16, v17);
  sub_18001E39C((__int64)a1, (__int64)v11, v8, v9);
  return v13;
}
