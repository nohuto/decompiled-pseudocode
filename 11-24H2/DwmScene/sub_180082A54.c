/*
 * XREFs of sub_180082A54 @ 0x180082A54
 * Callers:
 *     sub_180083220 @ 0x180083220 (sub_180083220.c)
 * Callees:
 *     memmove @ 0x18000CE55 (memmove.c)
 *     sub_180013278 @ 0x180013278 (sub_180013278.c)
 *     sub_18007AC94 @ 0x18007AC94 (sub_18007AC94.c)
 *     sub_18007CA44 @ 0x18007CA44 (sub_18007CA44.c)
 *     sub_18007CA8C @ 0x18007CA8C (sub_18007CA8C.c)
 *     sub_180082C90 @ 0x180082C90 (sub_180082C90.c)
 */

char *__fastcall sub_180082A54(_QWORD *a1, _BYTE *a2, __int64 a3)
{
  _BYTE *v3; // rbp
  unsigned __int64 v7; // rax
  __int64 v8; // r14
  __int64 v9; // r15
  __int64 v10; // rcx
  char *v11; // rsi
  unsigned __int64 v12; // rdx
  char *v13; // rbp
  _BYTE *v14; // r8
  void *v15; // rcx
  _BYTE *v16; // rdx
  size_t v17; // r8
  unsigned __int64 v19; // [rsp+50h] [rbp+8h] BYREF

  v3 = (_BYTE *)*a1;
  v7 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(a1[1] - *a1) >> 2);
  if ( v7 == 0x1555555555555555LL )
    sub_180013278();
  v8 = v7 + 1;
  v19 = sub_18007CA44(a1, v7 + 1);
  v9 = v19;
  v11 = (char *)sub_18007AC94(v10, &v19);
  v12 = (__int64)((unsigned __int128)((a2 - v3) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64) >> 1;
  v13 = &v11[12 * ((a2 - v3) / 12)];
  sub_180082C90(3 * ((v12 >> 63) + v12), v13, a3);
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
    v15 = v13 + 12;
    v17 = a1[1] - (_QWORD)a2;
    v16 = a2;
  }
  memmove(v15, v16, v17);
  sub_18007CA8C((__int64)a1, (__int64)v11, v8, v9);
  return v13;
}
