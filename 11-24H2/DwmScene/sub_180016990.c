/*
 * XREFs of sub_180016990 @ 0x180016990
 * Callers:
 *     sub_1800181E0 @ 0x1800181E0 (sub_1800181E0.c)
 *     sub_18006A2DC @ 0x18006A2DC (sub_18006A2DC.c)
 *     sub_18008AF00 @ 0x18008AF00 (sub_18008AF00.c)
 * Callees:
 *     memmove @ 0x18000CE55 (memmove.c)
 *     sub_180010234 @ 0x180010234 (sub_180010234.c)
 *     sub_180016744 @ 0x180016744 (sub_180016744.c)
 */

char *__fastcall sub_180016990(__int64 a1, _BYTE *a2, _QWORD *a3)
{
  __int64 v4; // rax
  __int64 v6; // rsi
  __int64 v7; // rcx
  __int64 v8; // rax
  unsigned __int64 v10; // rbp
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // r8
  char *v13; // rdi
  char *v14; // rsi
  void *v15; // rcx
  _BYTE *v16; // r8
  _BYTE *v17; // rdx
  size_t v18; // r8
  char *result; // rax
  __int64 v20; // [rsp+40h] [rbp+8h] BYREF

  v4 = *(_QWORD *)(a1 + 8) - *(_QWORD *)a1;
  v6 = (__int64)&a2[-*(_QWORD *)a1] >> 3;
  v7 = 0x1FFFFFFFFFFFFFFFLL;
  v8 = v4 >> 3;
  if ( v8 == 0x1FFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector too long");
  v10 = v8 + 1;
  v11 = (__int64)(*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) >> 3;
  v12 = v11 >> 1;
  if ( v11 <= 0x1FFFFFFFFFFFFFFFLL - (v11 >> 1) )
  {
    v7 = v12 + v11;
    if ( v12 + v11 < v10 )
      v7 = v8 + 1;
  }
  v20 = v7;
  v13 = (char *)sub_180016744(v7, &v20);
  v14 = &v13[8 * v6];
  *(_QWORD *)v14 = *a3;
  v15 = v13;
  v16 = *(_BYTE **)(a1 + 8);
  v17 = *(_BYTE **)a1;
  if ( a2 == v16 )
  {
    v18 = v16 - v17;
  }
  else
  {
    memmove(v13, v17, (size_t)&a2[-*(_QWORD *)a1]);
    v15 = v14 + 8;
    v18 = *(_QWORD *)(a1 + 8) - (_QWORD)a2;
    v17 = a2;
  }
  memmove(v15, v17, v18);
  if ( *(_QWORD *)a1 )
    sub_180010234(*(void **)a1, (*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) & 0xFFFFFFFFFFFFFFF8uLL);
  *(_QWORD *)a1 = v13;
  result = v14;
  *(_QWORD *)(a1 + 8) = &v13[8 * v10];
  *(_QWORD *)(a1 + 16) = &v13[8 * v20];
  return result;
}
