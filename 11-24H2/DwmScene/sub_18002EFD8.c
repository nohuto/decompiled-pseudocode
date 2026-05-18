/*
 * XREFs of sub_18002EFD8 @ 0x18002EFD8
 * Callers:
 *     sub_18002BAC0 @ 0x18002BAC0 (sub_18002BAC0.c)
 * Callees:
 *     memcpy @ 0x18000CE31 (memcpy.c)
 *     memmove @ 0x18000CE55 (memmove.c)
 *     sub_180011BA0 @ 0x180011BA0 (sub_180011BA0.c)
 *     sub_1800120D4 @ 0x1800120D4 (sub_1800120D4.c)
 *     sub_18001300C @ 0x18001300C (sub_18001300C.c)
 *     sub_1800131AC @ 0x1800131AC (sub_1800131AC.c)
 */

__int64 __fastcall sub_18002EFD8(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v6; // rbx
  unsigned __int64 v8; // r14
  unsigned __int64 v9; // rcx
  __int64 v10; // r12
  const void *v11; // rax
  size_t v12; // r8
  void *v13; // r9
  void *v14; // rcx
  __int64 v15; // rbx
  void *v16; // rdi
  __int64 v17; // rcx
  char *v18; // rdi
  size_t v19; // rbx
  const void *v20; // rax
  const void *v21; // rax
  size_t v22; // r8
  unsigned __int64 v24; // [rsp+50h] [rbp+8h] BYREF

  *(_OWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  v6 = *(_QWORD *)(a3 + 16);
  v8 = *(_QWORD *)(a4 + 16);
  v9 = *(_QWORD *)(a4 + 24);
  v10 = v8 + v6;
  if ( v8 <= *(_QWORD *)(a3 + 24) - v6 && v9 <= *(_QWORD *)(a3 + 24) )
  {
    *(_OWORD *)a1 = *(_OWORD *)a3;
    *(_OWORD *)(a1 + 16) = *(_OWORD *)(a3 + 16);
    *(_QWORD *)(a3 + 16) = 0LL;
    *(_QWORD *)(a3 + 24) = 7LL;
    *(_WORD *)a3 = 0;
    sub_1800131AC(a1);
    v11 = (const void *)sub_1800131AC(a4);
    v14 = v13;
LABEL_4:
    memcpy(v14, v11, v12);
    *(_QWORD *)(a1 + 16) = v10;
    return a1;
  }
  if ( v6 <= v9 - v8 )
  {
    v15 = 2 * v6;
    *(_OWORD *)a1 = *(_OWORD *)a4;
    *(_OWORD *)(a1 + 16) = *(_OWORD *)(a4 + 16);
    *(_QWORD *)(a4 + 16) = 0LL;
    *(_QWORD *)(a4 + 24) = 7LL;
    *(_WORD *)a4 = 0;
    v16 = *(void **)a1;
    memmove((void *)(v15 + *(_QWORD *)a1), *(const void **)a1, 2 * v8 + 2);
    v11 = (const void *)sub_1800131AC(a3);
    v14 = v16;
    v12 = v15;
    goto LABEL_4;
  }
  if ( 0x7FFFFFFFFFFFFFFELL - v6 < v8 )
    sub_180011BA0();
  v24 = sub_18001300C(v8 + v6, 7uLL, 0x7FFFFFFFFFFFFFFEuLL);
  v18 = (char *)sub_1800120D4(v17, &v24);
  *(_QWORD *)(a1 + 24) = v24;
  v19 = 2 * v6;
  *(_QWORD *)a1 = v18;
  *(_QWORD *)(a1 + 16) = v10;
  v20 = (const void *)sub_1800131AC(a3);
  memcpy(v18, v20, v19);
  v21 = (const void *)sub_1800131AC(a4);
  memcpy(&v18[v19], v21, v22);
  return a1;
}
