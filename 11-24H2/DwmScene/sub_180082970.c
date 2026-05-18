/*
 * XREFs of sub_180082970 @ 0x180082970
 * Callers:
 *     sub_180083220 @ 0x180083220 (sub_180083220.c)
 *     sub_180092740 @ 0x180092740 (sub_180092740.c)
 * Callees:
 *     memmove @ 0x18000CE55 (memmove.c)
 *     sub_180013278 @ 0x180013278 (sub_180013278.c)
 *     sub_180016744 @ 0x180016744 (sub_180016744.c)
 *     sub_18006D6D4 @ 0x18006D6D4 (sub_18006D6D4.c)
 *     sub_18007AA58 @ 0x18007AA58 (sub_18007AA58.c)
 *     sub_18007B0CC @ 0x18007B0CC (sub_18007B0CC.c)
 */

_QWORD *__fastcall sub_180082970(_QWORD *a1, _BYTE *a2, _QWORD *a3)
{
  _BYTE *v3; // rbp
  __int64 v6; // rax
  __int64 v8; // r14
  __int64 v9; // r15
  __int64 v10; // rcx
  __int64 v11; // rdi
  __int64 v12; // rcx
  _QWORD *v13; // rbp
  void *v14; // rax
  _BYTE *v15; // r8
  void *v16; // rcx
  _BYTE *v17; // rdx
  size_t v18; // r8
  __int64 v20; // [rsp+50h] [rbp+8h] BYREF

  v3 = (_BYTE *)*a1;
  v6 = (__int64)(a1[1] - *a1) >> 3;
  if ( v6 == 0x1FFFFFFFFFFFFFFFLL )
    sub_180013278();
  v8 = v6 + 1;
  v20 = sub_18006D6D4(a1, v6 + 1);
  v9 = v20;
  v11 = sub_180016744(v10, &v20);
  v12 = (a2 - v3) >> 3;
  v13 = (_QWORD *)(v11 + 8 * v12);
  sub_18007B0CC(v12, v13, a3);
  v15 = (_BYTE *)a1[1];
  v16 = v14;
  v17 = (_BYTE *)*a1;
  if ( a2 == v15 )
  {
    v18 = v15 - v17;
  }
  else
  {
    memmove(v14, v17, (size_t)&a2[-*a1]);
    v16 = v13 + 1;
    v18 = a1[1] - (_QWORD)a2;
    v17 = a2;
  }
  memmove(v16, v17, v18);
  sub_18007AA58((__int64)a1, v11, v8, v9);
  return v13;
}
