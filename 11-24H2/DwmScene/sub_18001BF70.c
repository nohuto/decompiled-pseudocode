/*
 * XREFs of sub_18001BF70 @ 0x18001BF70
 * Callers:
 *     sub_18001B584 @ 0x18001B584 (sub_18001B584.c)
 * Callees:
 *     memcpy @ 0x18000CE31 (memcpy.c)
 *     memmove @ 0x18000CE55 (memmove.c)
 *     sub_180010A18 @ 0x180010A18 (sub_180010A18.c)
 *     sub_1800118EC @ 0x1800118EC (sub_1800118EC.c)
 *     sub_180011BA0 @ 0x180011BA0 (sub_180011BA0.c)
 *     sub_1800138F8 @ 0x1800138F8 (sub_1800138F8.c)
 */

__int64 __fastcall sub_18001BF70(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  size_t v6; // rsi
  unsigned __int64 v8; // r14
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // r12
  const void *v11; // rax
  size_t v12; // r8
  void *v13; // r9
  void *v14; // rcx
  void *v15; // rbx
  __int64 v16; // rcx
  char *v17; // rbx
  const void *v18; // rax
  const void *v19; // rax
  size_t v20; // r8
  unsigned __int64 v22; // [rsp+50h] [rbp+8h] BYREF

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
    *(_QWORD *)(a3 + 24) = 15LL;
    *(_BYTE *)a3 = 0;
    sub_1800138F8(a1);
    v11 = (const void *)sub_1800138F8(a4);
    v14 = v13;
LABEL_4:
    memcpy(v14, v11, v12);
    *(_QWORD *)(a1 + 16) = v10;
    return a1;
  }
  if ( v6 <= v9 - v8 )
  {
    *(_OWORD *)a1 = *(_OWORD *)a4;
    *(_OWORD *)(a1 + 16) = *(_OWORD *)(a4 + 16);
    *(_QWORD *)(a4 + 16) = 0LL;
    *(_QWORD *)(a4 + 24) = 15LL;
    *(_BYTE *)a4 = 0;
    v15 = *(void **)a1;
    memmove((void *)(*(_QWORD *)a1 + v6), *(const void **)a1, v8 + 1);
    v11 = (const void *)sub_1800138F8(a3);
    v14 = v15;
    v12 = v6;
    goto LABEL_4;
  }
  if ( 0x7FFFFFFFFFFFFFFFLL - v6 < v8 )
    sub_180011BA0();
  v22 = sub_1800118EC(v8 + v6, 0xFuLL, 0x7FFFFFFFFFFFFFFFuLL);
  v17 = (char *)sub_180010A18(v16, &v22);
  *(_QWORD *)(a1 + 24) = v22;
  *(_QWORD *)a1 = v17;
  *(_QWORD *)(a1 + 16) = v10;
  v18 = (const void *)sub_1800138F8(a3);
  memcpy(v17, v18, v6);
  v19 = (const void *)sub_1800138F8(a4);
  memcpy(&v17[v6], v19, v20);
  return a1;
}
