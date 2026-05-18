/*
 * XREFs of sub_1800CCD2C @ 0x1800CCD2C
 * Callers:
 *     sub_1800CCFE0 @ 0x1800CCFE0 (sub_1800CCFE0.c)
 * Callees:
 *     memmove @ 0x18000CD6D (memmove.c)
 *     sub_180016664 @ 0x180016664 (sub_180016664.c)
 *     sub_18001E324 @ 0x18001E324 (sub_18001E324.c)
 *     sub_18001E39C @ 0x18001E39C (sub_18001E39C.c)
 */

char *__fastcall sub_1800CCD2C(_QWORD *a1, _BYTE *a2, _DWORD *a3)
{
  _BYTE *v3; // rbp
  __int64 v6; // rax
  __int64 v8; // r15
  __int64 v9; // rcx
  char *v10; // rdi
  char *v11; // r14
  void *v12; // rcx
  _BYTE *v13; // r8
  _BYTE *v14; // rdx
  size_t v15; // r8
  __int64 v17; // [rsp+50h] [rbp+8h] BYREF

  v3 = (_BYTE *)*a1;
  v6 = (__int64)(a1[1] - *a1) >> 2;
  if ( v6 == 0x3FFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector too long");
  v8 = v6 + 1;
  v17 = sub_18001E324(a1, v6 + 1);
  v10 = (char *)sub_180016664(v9, &v17);
  v11 = &v10[4 * ((a2 - v3) >> 2)];
  *(_DWORD *)v11 = *a3;
  v12 = v10;
  v13 = (_BYTE *)a1[1];
  v14 = (_BYTE *)*a1;
  if ( a2 == v13 )
  {
    v15 = v13 - v14;
  }
  else
  {
    memmove(v10, v14, (size_t)&a2[-*a1]);
    v12 = v11 + 4;
    v15 = a1[1] - (_QWORD)a2;
    v14 = a2;
  }
  memmove(v12, v14, v15);
  sub_18001E39C((__int64)a1, (__int64)v10, v8, v17);
  return &v10[4 * ((a2 - v3) >> 2)];
}
