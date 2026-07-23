/*
 * XREFs of RtlpInitializeAssemblyStorageMap @ 0x1800E26E4
 * Callers:
 *     RtlCreateActivationContext @ 0x1800E1EF0 (RtlCreateActivationContext.c)
 *     RtlpGetActivationContextDataStorageMapAndRosterHeader @ 0x1800E2350 (RtlpGetActivationContextDataStorageMapAndRosterHeader.c)
 * Callees:
 *     DbgPrintEx @ 0x18001A6F0 (DbgPrintEx.c)
 *     RtlAllocateHeap @ 0x180050340 (RtlAllocateHeap.c)
 *     memset$thunk$772440563353939046 @ 0x180174030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlpInitializeAssemblyStorageMap(int *a1, unsigned int a2, void *a3)
{
  unsigned int v3; // ebx
  unsigned __int64 v4; // rdi
  PVOID Heap; // rbp
  int v7; // r15d
  unsigned __int128 v9; // rax

  v3 = 0;
  v4 = a2;
  Heap = a3;
  v7 = 0;
  if ( a1 && a2 )
  {
    if ( !a3 )
    {
      v9 = a2 * (unsigned __int128)8uLL;
      if ( !is_mul_ok(v4, 8uLL) )
        return (unsigned int)-1073741675;
      Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, DWORD2(v9), 8 * v4);
      if ( !Heap )
        return (unsigned int)-1073741801;
      v7 = 1;
    }
    if ( (_DWORD)v4 )
      memset_thunk_772440563353939046(Heap, 0, 8LL * (unsigned int)v4);
    *a1 = v7;
    a1[1] = v4;
    *((_QWORD *)a1 + 1) = Heap;
  }
  else
  {
    DbgPrintEx(
      0x33u,
      0,
      "SXS: %s() bad parameters:\nSXS:    Map        : 0x%p\nSXS:    EntryCount : 0x%lx\n",
      "RtlpInitializeAssemblyStorageMap",
      a1,
      a2);
    return (unsigned int)-1073741811;
  }
  return v3;
}
