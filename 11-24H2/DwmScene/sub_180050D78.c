/*
 * XREFs of sub_180050D78 @ 0x180050D78
 * Callers:
 *     sub_180051F34 @ 0x180051F34 (sub_180051F34.c)
 * Callees:
 *     memmove @ 0x18000CE55 (memmove.c)
 *     sub_180013278 @ 0x180013278 (sub_180013278.c)
 *     sub_18001D7D8 @ 0x18001D7D8 (sub_18001D7D8.c)
 *     sub_18001E4C0 @ 0x18001E4C0 (sub_18001E4C0.c)
 *     sub_180050EA4 @ 0x180050EA4 (sub_180050EA4.c)
 *     sub_1800527A8 @ 0x1800527A8 (sub_1800527A8.c)
 */

char *__fastcall sub_180050D78(_QWORD *a1, _BYTE *a2, int a3, int a4, __int64 a5, __int64 a6, __int64 a7, __int64 a8)
{
  _BYTE *v8; // rbp
  __int64 v11; // rax
  __int64 v14; // r14
  __int64 v15; // r15
  __int64 v16; // rcx
  char *v17; // rsi
  char *v18; // rbp
  _BYTE *v19; // r8
  void *v20; // rcx
  _BYTE *v21; // rdx
  size_t v22; // r8
  __int64 v24; // [rsp+70h] [rbp+8h] BYREF

  v8 = (_BYTE *)*a1;
  v11 = (__int64)(a1[1] - *a1) >> 5;
  if ( v11 == 0x7FFFFFFFFFFFFFFLL )
    sub_180013278();
  v14 = v11 + 1;
  v24 = sub_18001E4C0(a1, v11 + 1);
  v15 = v24;
  v17 = (char *)sub_18001D7D8(v16, &v24);
  v18 = &v17[(a2 - v8) & 0xFFFFFFFFFFFFFFE0uLL];
  sub_180050EA4(a5, (_DWORD)v18, a3, a4, a5, a6, a7, a8);
  v19 = (_BYTE *)a1[1];
  v20 = v17;
  v21 = (_BYTE *)*a1;
  if ( a2 == v19 )
  {
    v22 = v19 - v21;
  }
  else
  {
    memmove(v17, v21, (size_t)&a2[-*a1]);
    v20 = v18 + 32;
    v22 = a1[1] - (_QWORD)a2;
    v21 = a2;
  }
  memmove(v20, v21, v22);
  sub_1800527A8(a1, v17, v14, v15);
  return v18;
}
