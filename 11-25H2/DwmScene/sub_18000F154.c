/*
 * XREFs of sub_18000F154 @ 0x18000F154
 * Callers:
 *     sub_18000F51C @ 0x18000F51C (sub_18000F51C.c)
 * Callees:
 *     memset @ 0x18000C088 (memset.c)
 *     sub_18000D2EC @ 0x18000D2EC (sub_18000D2EC.c)
 *     sub_18000D360 @ 0x18000D360 (sub_18000D360.c)
 *     sub_18000EE08 @ 0x18000EE08 (sub_18000EE08.c)
 *     sub_18000F054 @ 0x18000F054 (sub_18000F054.c)
 *     sub_18000F080 @ 0x18000F080 (sub_18000F080.c)
 */

int __fastcall sub_18000F154(__int64 a1, __int64 a2, int a3)
{
  _QWORD *v3; // r14
  int v4; // eax
  __int64 v7; // rax
  __int64 v8; // rbp
  __int64 v9; // rbp
  __int64 v10; // rax
  SIZE_T v11; // rbp
  SIZE_T *v12; // rdi
  __int64 v13; // r14
  void *v14; // rbx
  HANDLE ProcessHeap; // rax
  __int64 v16; // rcx
  __int64 v17; // rbx
  __int64 v18; // rax
  __int64 v19; // rax
  void *v20; // rax

  *(_DWORD *)(a1 + 4) = a3;
  v3 = (_QWORD *)(a1 + 56);
  v4 = *(_DWORD *)(a2 + 8);
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_DWORD *)(a1 + 8) = v4;
  *(_WORD *)(a1 + 24) = *(_WORD *)(a2 + 64);
  LOBYTE(v4) = *(_BYTE *)a2;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_BYTE *)(a1 + 26) = v4;
  *(_QWORD *)(a1 + 40) = *(_QWORD *)(a2 + 136);
  v7 = *(_QWORD *)(a2 + 144);
  *(_QWORD *)(a1 + 56) = 0LL;
  *(_QWORD *)(a1 + 48) = v7;
  v8 = sub_18000F080(*(_QWORD *)(a2 + 24));
  v9 = sub_18000F054(*(_QWORD *)(a2 + 56)) + v8;
  v10 = sub_18000F054(*(_QWORD *)(a2 + 128));
  v11 = v10 + v9;
  v12 = (SIZE_T *)(a1 + 72);
  if ( !*(_QWORD *)(a1 + 64) || *v12 < v11 )
  {
    v10 = (__int64)sub_18000EE08(8u, v11);
    v13 = v10;
    if ( v10 )
    {
      v14 = *(void **)(a1 + 64);
      ProcessHeap = GetProcessHeap();
      LODWORD(v10) = HeapFree(ProcessHeap, 0, v14);
      *(_QWORD *)(a1 + 64) = v13;
      *v12 = v11;
    }
    v3 = (_QWORD *)(a1 + 56);
  }
  v16 = *(_QWORD *)(a1 + 64);
  if ( v16 )
  {
    v17 = v16 + *v12;
    v18 = sub_18000D2EC(v16, v17, *(_BYTE **)(a2 + 56), (_QWORD *)(a1 + 16));
    v19 = sub_18000D2EC(v18, v17, *(_BYTE **)(a2 + 128), (_QWORD *)(a1 + 32));
    v20 = (void *)sub_18000D360(v19, v17, *(_WORD **)(a2 + 24), v3);
    LODWORD(v10) = (unsigned int)memset(v20, 0, v17 - (_QWORD)v20);
  }
  return v10;
}
