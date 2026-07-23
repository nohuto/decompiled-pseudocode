/*
 * XREFs of RtlpInsertAssemblyStorageMapEntry @ 0x180003E84
 * Callers:
 *     RtlpResolveAssemblyStorageMapEntry @ 0x1800033D8 (RtlpResolveAssemblyStorageMapEntry.c)
 * Callees:
 *     RtlAllocateHeap @ 0x18003DC60 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x1800533F0 (RtlFreeHeap.c)
 *     DbgPrintEx @ 0x180074670 (DbgPrintEx.c)
 *     memmove @ 0x1801657C0 (memmove.c)
 */

__int64 __fastcall RtlpInsertAssemblyStorageMapEntry(__int64 a1, unsigned int a2, const void **a3, _QWORD *a4)
{
  unsigned int v4; // ebx
  __int64 v5; // r14
  __int64 v9; // r8
  _WORD *Heap; // rax
  signed __int64 v11; // rsi
  const void *v13; // rcx
  int v14; // eax

  v4 = 0;
  v5 = a2;
  if ( a1 && a2 && a2 <= *(_DWORD *)(a1 + 4) )
  {
    if ( a3 )
    {
      if ( *(_WORD *)a3 >= 2u && a3[1] && a4 )
      {
        v9 = *(unsigned __int16 *)a3;
        if ( (unsigned __int64)(v9 + 2) > 0xFFFE )
        {
          return (unsigned int)-1073741562;
        }
        else
        {
          Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, v9 + 34);
          v11 = (signed __int64)Heap;
          if ( Heap )
          {
            *(_DWORD *)Heap = 0;
            Heap[4] = *(_WORD *)a3;
            *((_QWORD *)Heap + 2) = Heap + 16;
            Heap[5] = *(_WORD *)a3 + 2;
            memmove(Heap + 16, a3[1], *(unsigned __int16 *)a3);
            *(_WORD *)(*(_QWORD *)(v11 + 16) + 2 * ((unsigned __int64)*(unsigned __int16 *)(v11 + 8) >> 1)) = 0;
            *(_QWORD *)(v11 + 24) = *a4;
            if ( !_InterlockedCompareExchange64((volatile signed __int64 *)(*(_QWORD *)(a1 + 8) + 8 * v5), v11, 0LL) )
            {
              v11 = 0LL;
              *a4 = 0LL;
            }
            if ( v11 )
              RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, (PVOID)v11);
          }
          else
          {
            return (unsigned int)-1073741801;
          }
        }
        return v4;
      }
      goto LABEL_20;
    }
  }
  else if ( a3 )
  {
LABEL_20:
    v13 = a3[1];
    v14 = *(unsigned __int16 *)a3;
    goto LABEL_17;
  }
  v13 = 0LL;
  v14 = 0;
LABEL_17:
  if ( a1 )
    v4 = *(_DWORD *)(a1 + 4);
  DbgPrintEx(
    0x33u,
    0,
    "SXS: %s() bad parameters\n"
    "SXS:  Map                    : %p\n"
    "SXS:  AssemblyRosterIndex    : 0x%lx\n"
    "SXS:  Map->AssemblyCount     : 0x%lx\n"
    "SXS:  StorageLocation        : %p\n"
    "SXS:  StorageLocation->Length: 0x%x\n"
    "SXS:  StorageLocation->Buffer: %p\n"
    "SXS:  OpenDirectoryHandle    : %p\n",
    "RtlpInsertAssemblyStorageMapEntry",
    (const void *)a1,
    a2,
    v4,
    a3,
    v14,
    v13,
    a4);
  return (unsigned int)-1073741811;
}
