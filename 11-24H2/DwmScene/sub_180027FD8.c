/*
 * XREFs of sub_180027FD8 @ 0x180027FD8
 * Callers:
 *     sub_18002811C @ 0x18002811C (sub_18002811C.c)
 *     sub_1800281EC @ 0x1800281EC (sub_1800281EC.c)
 * Callees:
 *     memmove @ 0x18000CE55 (memmove.c)
 *     sub_180010234 @ 0x180010234 (sub_180010234.c)
 *     sub_1800109F8 @ 0x1800109F8 (sub_1800109F8.c)
 *     sub_180028108 @ 0x180028108 (sub_180028108.c)
 */

unsigned __int64 __fastcall sub_180027FD8(__int64 a1, char *a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v5; // r14
  __int64 v7; // rdi
  __int64 v8; // rcx
  unsigned __int64 v11; // rdi
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // r8
  __int64 v14; // rax
  unsigned __int64 v15; // r14
  char *v16; // rsi
  __int64 v17; // rcx
  char *v18; // r8
  void *v19; // rcx
  _BYTE *v20; // rdx
  size_t v21; // r8
  __int64 v22; // rcx
  unsigned __int64 result; // rax
  __int64 v24; // [rsp+50h] [rbp+8h] BYREF

  v5 = (unsigned __int64)&a2[-*(_QWORD *)a1];
  v7 = (__int64)(*(_QWORD *)(a1 + 8) - *(_QWORD *)a1) >> 4;
  v8 = 0xFFFFFFFFFFFFFFFLL;
  if ( v7 == 0xFFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector too long");
  v11 = v7 + 1;
  v12 = (__int64)(*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) >> 4;
  v13 = v12 >> 1;
  if ( v12 <= 0xFFFFFFFFFFFFFFFLL - (v12 >> 1) )
  {
    v8 = v13 + v12;
    if ( v13 + v12 < v11 )
      v8 = v11;
  }
  v24 = v8;
  v14 = sub_1800109F8(v8, &v24);
  v15 = v14 + (v5 & 0xFFFFFFFFFFFFFFF0uLL);
  v16 = (char *)v14;
  sub_180028108(v17, v15, a3, a4);
  v18 = *(char **)(a1 + 8);
  v19 = v16;
  v20 = *(_BYTE **)a1;
  if ( a2 == v18 )
  {
    v21 = v18 - v20;
  }
  else
  {
    memmove(v16, v20, (size_t)&a2[-*(_QWORD *)a1]);
    v19 = (void *)(v15 + 16);
    v21 = *(_QWORD *)(a1 + 8) - (_QWORD)a2;
    v20 = a2;
  }
  memmove(v19, v20, v21);
  if ( *(_QWORD *)a1 )
    sub_180010234(*(void **)a1, (*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) & 0xFFFFFFFFFFFFFFF0uLL);
  v22 = v24;
  result = v15;
  *(_QWORD *)a1 = v16;
  *(_QWORD *)(a1 + 8) = &v16[16 * v11];
  *(_QWORD *)(a1 + 16) = &v16[16 * v22];
  return result;
}
