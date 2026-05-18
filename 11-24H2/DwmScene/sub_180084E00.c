/*
 * XREFs of sub_180084E00 @ 0x180084E00
 * Callers:
 *     sub_1800866B4 @ 0x1800866B4 (sub_1800866B4.c)
 * Callees:
 *     memmove @ 0x18000CE55 (memmove.c)
 *     sub_1800109E8 @ 0x1800109E8 (sub_1800109E8.c)
 *     sub_180013278 @ 0x180013278 (sub_180013278.c)
 *     sub_180086E28 @ 0x180086E28 (sub_180086E28.c)
 *     sub_180086E60 @ 0x180086E60 (sub_180086E60.c)
 */

char *__fastcall sub_180084E00(_QWORD *a1, char *a2, char *a3)
{
  _BYTE *v3; // rbp
  __int64 v6; // rax
  __int64 v8; // r15
  __int64 v9; // rcx
  char *v10; // rdi
  char *v11; // r14
  void *v12; // rcx
  char *v13; // r8
  _BYTE *v14; // rdx
  size_t v15; // r8
  __int64 v17; // [rsp+50h] [rbp+8h] BYREF

  v3 = (_BYTE *)*a1;
  v6 = a1[1] - *a1;
  if ( v6 == 0x7FFFFFFFFFFFFFFFLL )
    sub_180013278();
  v8 = v6 + 1;
  v17 = sub_180086E28(a1, v6 + 1);
  v10 = (char *)sub_1800109E8(v9, (unsigned __int64 *)&v17);
  v11 = &a2[v10 - v3];
  *v11 = *a3;
  v12 = v10;
  v13 = (char *)a1[1];
  v14 = (_BYTE *)*a1;
  if ( a2 == v13 )
  {
    v15 = v13 - v14;
  }
  else
  {
    memmove(v10, v14, (size_t)&a2[-*a1]);
    v12 = v11 + 1;
    v15 = a1[1] - (_QWORD)a2;
    v14 = a2;
  }
  memmove(v12, v14, v15);
  sub_180086E60(a1, v10, v8, v17);
  return &a2[v10 - v3];
}
