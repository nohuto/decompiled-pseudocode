/*
 * XREFs of LdrpRecordModuleDependency @ 0x1800D5E00
 * Callers:
 *     LdrpInitializeNtdllDataTableEntry @ 0x1800EF5B0 (LdrpInitializeNtdllDataTableEntry.c)
 * Callees:
 *     RtlAllocateHeap @ 0x18003DC60 (RtlAllocateHeap.c)
 */

_DWORD *__fastcall LdrpRecordModuleDependency(__int64 a1, __int64 a2, _DWORD *a3, _DWORD *a4)
{
  __int64 v4; // rbx
  __int64 v6; // rdi
  int v7; // ecx
  _DWORD *result; // rax
  _QWORD *v9; // rcx
  _QWORD *v10; // rax
  _QWORD *v11; // rcx
  _QWORD *v12; // rcx
  _QWORD *v13; // rdx
  int v14; // ecx
  _DWORD *Heap; // rax

  v4 = *(_QWORD *)(a2 + 152);
  v6 = *(_QWORD *)(a1 + 152);
  if ( v6 == v4
    || *(_DWORD *)(v4 + 56) == 9 && (*(_DWORD *)(v4 + 24) == -1 || (*(_BYTE *)(*(_QWORD *)v4 - 56LL) & 0x20) != 0) )
  {
LABEL_5:
    v7 = *(_DWORD *)(v4 + 24);
    if ( (unsigned int)(v7 - 2) <= 0xFFFFFFFC )
      *(_DWORD *)(v4 + 24) = v7 - 1;
    return a3;
  }
  v9 = *(_QWORD **)(v6 + 40);
  if ( v9 )
  {
    v10 = *(_QWORD **)(v6 + 40);
    do
    {
      v10 = (_QWORD *)*v10;
      if ( v10[1] == v4 )
        goto LABEL_5;
    }
    while ( v10 != v9 );
  }
  if ( !a3 )
  {
    Heap = RtlAllocateHeap(LdrpHeap, NtdllBaseTag + 2359296, 0x20uLL);
    a3 = Heap;
    if ( !Heap )
    {
      result = 0LL;
      *a4 = -1073741801;
      return result;
    }
    Heap[6] |= 1u;
  }
  v11 = *(_QWORD **)(v6 + 40);
  if ( v11 )
  {
    *(_QWORD *)a3 = *v11;
    *v11 = a3;
  }
  else
  {
    *(_QWORD *)a3 = a3;
  }
  *(_QWORD *)(v6 + 40) = a3;
  v12 = a3 + 4;
  *((_QWORD *)a3 + 1) = v4;
  v13 = *(_QWORD **)(v4 + 48);
  if ( v13 )
  {
    *v12 = *v13;
    *v13 = v12;
  }
  else
  {
    *v12 = v12;
  }
  *(_QWORD *)(v4 + 48) = v12;
  v14 = a3[6];
  *((_QWORD *)a3 + 3) = v6;
  if ( (v14 & 1) != 0 )
    a3[6] = v6 ^ ((unsigned __int8)v14 ^ (unsigned __int8)v6) & 1;
  return 0LL;
}
