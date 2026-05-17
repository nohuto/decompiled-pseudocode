/*
 * XREFs of RtlpInsertAssemblyStorageMapEntry @ 0x1800E3344
 * Callers:
 *     RtlpResolveAssemblyStorageMapEntry @ 0x1800E2898 (RtlpResolveAssemblyStorageMapEntry.c)
 * Callees:
 *     DbgPrintEx @ 0x18001A6F0 (DbgPrintEx.c)
 *     RtlAllocateHeap @ 0x180050340 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180080DD0 (RtlFreeHeap.c)
 *     memmove @ 0x180168980 (memmove.c)
 */

__int64 __fastcall RtlpInsertAssemblyStorageMapEntry(__int64 a1, unsigned int a2, const void **a3, _QWORD *a4)
{
  unsigned int v4; // ebx
  __int64 v5; // r14
  __int64 v9; // r8
  __int64 Heap; // rax
  signed __int64 v11; // rsi
  __int64 v12; // r9
  const void *v14; // rcx
  int v15; // eax

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
          Heap = RtlAllocateHeap((char *)NtCurrentPeb()->ProcessHeap, 0, v9 + 34);
          v11 = Heap;
          if ( Heap )
          {
            *(_DWORD *)Heap = 0;
            *(_WORD *)(Heap + 8) = *(_WORD *)a3;
            *(_QWORD *)(Heap + 16) = Heap + 32;
            *(_WORD *)(Heap + 10) = *(_WORD *)a3 + 2;
            memmove((void *)(Heap + 32), a3[1], *(unsigned __int16 *)a3);
            *(_WORD *)(*(_QWORD *)(v11 + 16) + 2 * ((unsigned __int64)*(unsigned __int16 *)(v11 + 8) >> 1)) = 0;
            *(_QWORD *)(v11 + 24) = *a4;
            if ( !_InterlockedCompareExchange64((volatile signed __int64 *)(*(_QWORD *)(a1 + 8) + 8 * v5), v11, 0LL) )
            {
              v11 = 0LL;
              *a4 = 0LL;
            }
            if ( v11 )
              RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v11, v12);
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
    v14 = a3[1];
    v15 = *(unsigned __int16 *)a3;
    goto LABEL_17;
  }
  v14 = 0LL;
  v15 = 0;
LABEL_17:
  if ( a1 )
    v4 = *(_DWORD *)(a1 + 4);
  DbgPrintEx(
    51,
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
    v15,
    v14,
    a4);
  return (unsigned int)-1073741811;
}
