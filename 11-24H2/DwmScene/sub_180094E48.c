/*
 * XREFs of sub_180094E48 @ 0x180094E48
 * Callers:
 *     sub_18009537C @ 0x18009537C (sub_18009537C.c)
 * Callees:
 *     memmove @ 0x18000CE55 (memmove.c)
 *     sub_180013278 @ 0x180013278 (sub_180013278.c)
 *     sub_180016764 @ 0x180016764 (sub_180016764.c)
 *     sub_18001E484 @ 0x18001E484 (sub_18001E484.c)
 *     sub_18001E4FC @ 0x18001E4FC (sub_18001E4FC.c)
 *     sub_180041F48 @ 0x180041F48 (sub_180041F48.c)
 */

char *__fastcall sub_180094E48(_QWORD *a1, _BYTE *a2, unsigned int *a3)
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
    sub_180013278();
  v8 = v6 + 1;
  v19 = sub_18001E484(a1, v6 + 1);
  v9 = v19;
  v11 = (char *)sub_180016764(v10, &v19);
  v12 = (a2 - v3) >> 2;
  v13 = &v11[4 * v12];
  sub_180041F48(v12, v13, a3);
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
  sub_18001E4FC((__int64)a1, (__int64)v11, v8, v9);
  return v13;
}
