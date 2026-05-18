/*
 * XREFs of sub_180082A00 @ 0x180082A00
 * Callers:
 *     sub_1800833F8 @ 0x1800833F8 (sub_1800833F8.c)
 * Callees:
 *     memmove @ 0x18000CD6D (memmove.c)
 *     sub_180011FB4 @ 0x180011FB4 (sub_180011FB4.c)
 *     sub_180013178 @ 0x180013178 (sub_180013178.c)
 *     sub_180083314 @ 0x180083314 (sub_180083314.c)
 *     sub_18008334C @ 0x18008334C (sub_18008334C.c)
 */

char *__fastcall sub_180082A00(_QWORD *a1, _BYTE *a2, _WORD *a3)
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
  v6 = (__int64)(a1[1] - *a1) >> 1;
  if ( v6 == 0x7FFFFFFFFFFFFFFFLL )
    sub_180013178();
  v8 = v6 + 1;
  v17 = sub_180083314(a1, v6 + 1);
  v10 = (char *)sub_180011FB4(v9, &v17);
  v11 = &v10[2 * ((a2 - v3) >> 1)];
  *(_WORD *)v11 = *a3;
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
    v12 = v11 + 2;
    v15 = a1[1] - (_QWORD)a2;
    v14 = a2;
  }
  memmove(v12, v14, v15);
  sub_18008334C(a1, v10, v8, v17);
  return &v10[2 * ((a2 - v3) >> 1)];
}
