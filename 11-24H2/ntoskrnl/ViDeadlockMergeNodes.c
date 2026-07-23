/*
 * XREFs of ViDeadlockMergeNodes @ 0x140B9B944
 * Callers:
 *     ViDeadlockCheckDuplicatesAmongChildren @ 0x140B9B048 (ViDeadlockCheckDuplicatesAmongChildren.c)
 *     ViDeadlockCheckDuplicatesAmongRoots @ 0x140B9B0C8 (ViDeadlockCheckDuplicatesAmongRoots.c)
 * Callees:
 *     ViDeadlockUpdateChildrenCount @ 0x140B9C2A4 (ViDeadlockUpdateChildrenCount.c)
 */

__int64 __fastcall ViDeadlockMergeNodes(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 v3; // rax
  _QWORD *v5; // r9
  int v6; // edx
  _QWORD *v7; // rdi
  _QWORD *v8; // r11
  __int64 v9; // rax
  _QWORD *v10; // r14
  _QWORD *v11; // rbx
  _QWORD *v12; // rcx
  __int64 v13; // r10
  _QWORD *v14; // rcx
  __int64 v15; // rdx
  _QWORD *v16; // rcx
  __int64 v17; // rdx
  _QWORD *v18; // rcx
  __int64 result; // rax

  v3 = *(_QWORD *)(a2 + 64);
  v5 = (_QWORD *)a2;
  if ( v3 )
  {
    *(_QWORD *)(a1 + 64) = v3;
    *(_OWORD *)(a1 + 80) = *(_OWORD *)(a2 + 80);
    *(_OWORD *)(a1 + 96) = *(_OWORD *)(a2 + 96);
    *(_OWORD *)(a1 + 112) = *(_OWORD *)(a2 + 112);
    *(_OWORD *)(a1 + 128) = *(_OWORD *)(a2 + 128);
    *(_OWORD *)(a1 + 144) = *(_OWORD *)(a2 + 144);
    *(_OWORD *)(a1 + 160) = *(_OWORD *)(a2 + 160);
    *(_OWORD *)(a1 + 176) = *(_OWORD *)(a2 + 176);
    *(_OWORD *)(a1 + 192) = *(_OWORD *)(a2 + 192);
  }
  v6 = *(_DWORD *)(a2 + 72);
  if ( (v6 & 1) != 0 )
    *(_DWORD *)(a1 + 72) ^= ((unsigned __int8)v6 ^ (unsigned __int8)*(_DWORD *)(a1 + 72)) & 1;
  v7 = v5 + 1;
  v8 = (_QWORD *)v5[1];
  while ( v8 != v7 )
  {
    v9 = *v8;
    v10 = v8 - 3;
    v11 = v8;
    if ( *(_QWORD **)(*v8 + 8LL) != v8 )
      goto LABEL_18;
    v12 = (_QWORD *)v8[1];
    if ( (_QWORD *)*v12 != v8 )
      goto LABEL_18;
    *v12 = v9;
    *(_QWORD *)(v9 + 8) = v12;
    ViDeadlockUpdateChildrenCount(v5, (unsigned int)~*((_DWORD *)v10 + 19));
    *v10 = v13;
    v14 = *(_QWORD **)(v13 + 16);
    if ( *v14 != v13 + 8 )
      goto LABEL_18;
    v11[1] = v14;
    *v11 = v13 + 8;
    *v14 = v11;
    *(_QWORD *)(v13 + 16) = v11;
    ViDeadlockUpdateChildrenCount(v13, (unsigned int)(*((_DWORD *)v10 + 19) + 1));
  }
  if ( *v5 )
  {
    v15 = v5[3];
    if ( *(_QWORD **)(v15 + 8) != v5 + 3 || (v16 = (_QWORD *)v5[4], (_QWORD *)*v16 != v5 + 3) )
LABEL_18:
      __fastfail(3u);
    *v16 = v15;
    *(_QWORD *)(v15 + 8) = v16;
    ViDeadlockUpdateChildrenCount(*v5, 0xFFFFFFFFLL);
  }
  --*(_WORD *)(v5[7] + 4LL);
  v17 = v5[5];
  if ( *(_QWORD **)(v17 + 8) != v5 + 5 )
    goto LABEL_18;
  v18 = (_QWORD *)v5[6];
  if ( (_QWORD *)*v18 != v5 + 5 )
    goto LABEL_18;
  result = *a3;
  *v18 = v17;
  *(_QWORD *)(v17 + 8) = v18;
  *a3 = (__int64)v5;
  *v5 = result;
  return result;
}
