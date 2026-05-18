/*
 * XREFs of sub_18007D008 @ 0x18007D008
 * Callers:
 *     sub_18005B398 @ 0x18005B398 (sub_18005B398.c)
 * Callees:
 *     memmove @ 0x18000CD6D (memmove.c)
 *     sub_180010134 @ 0x180010134 (sub_180010134.c)
 *     sub_1800108F8 @ 0x1800108F8 (sub_1800108F8.c)
 *     sub_18007D17C @ 0x18007D17C (sub_18007D17C.c)
 */

unsigned __int64 __fastcall sub_18007D008(__int64 a1, char *a2, __int64 a3)
{
  unsigned __int64 v4; // r14
  __int64 v6; // rdi
  __int64 v7; // rcx
  unsigned __int64 v9; // rdi
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // r8
  __int64 v12; // rsi
  __int64 v13; // rcx
  void *v14; // rax
  char *v15; // r8
  void *v16; // rcx
  _BYTE *v17; // rdx
  size_t v18; // r8
  __int64 v19; // rcx
  unsigned __int64 result; // rax
  __int64 v21; // [rsp+50h] [rbp+8h] BYREF

  v4 = (unsigned __int64)&a2[-*(_QWORD *)a1];
  v6 = (__int64)(*(_QWORD *)(a1 + 8) - *(_QWORD *)a1) >> 4;
  v7 = 0xFFFFFFFFFFFFFFFLL;
  if ( v6 == 0xFFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector too long");
  v9 = v6 + 1;
  v10 = (__int64)(*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) >> 4;
  v11 = v10 >> 1;
  if ( v10 <= 0xFFFFFFFFFFFFFFFLL - (v10 >> 1) )
  {
    v7 = v11 + v10;
    if ( v11 + v10 < v9 )
      v7 = v9;
  }
  v21 = v7;
  v12 = sub_1800108F8(v7, &v21);
  v14 = (void *)sub_18007D17C(v13, (v4 & 0xFFFFFFFFFFFFFFF0uLL) + v12, a3);
  v15 = *(char **)(a1 + 8);
  v16 = v14;
  v17 = *(_BYTE **)a1;
  if ( a2 == v15 )
  {
    v18 = v15 - v17;
  }
  else
  {
    memmove(v14, v17, (size_t)&a2[-*(_QWORD *)a1]);
    v16 = (void *)((v4 & 0xFFFFFFFFFFFFFFF0uLL) + v12 + 16);
    v18 = *(_QWORD *)(a1 + 8) - (_QWORD)a2;
    v17 = a2;
  }
  memmove(v16, v17, v18);
  if ( *(_QWORD *)a1 )
    sub_180010134(*(void **)a1, (*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) & 0xFFFFFFFFFFFFFFF0uLL);
  v19 = v21;
  result = (v4 & 0xFFFFFFFFFFFFFFF0uLL) + v12;
  *(_QWORD *)a1 = v12;
  *(_QWORD *)(a1 + 8) = v12 + 16 * v9;
  *(_QWORD *)(a1 + 16) = v12 + 16 * v19;
  return result;
}
