/*
 * XREFs of EtwpAllocateTraceBuffer @ 0x14040FF9C
 * Callers:
 *     EtwpAllocateFreeBuffers @ 0x14024C2BC (EtwpAllocateFreeBuffers.c)
 *     EtwpPreserveLogger @ 0x1407AFA4C (EtwpPreserveLogger.c)
 * Callees:
 *     MmMapLockedPagesSpecifyCache @ 0x14028F9F0 (MmMapLockedPagesSpecifyCache.c)
 *     MiFreePagesFromMdl @ 0x1403A2330 (MiFreePagesFromMdl.c)
 *     EtwpAllocatePartitionMemory @ 0x140410058 (EtwpAllocatePartitionMemory.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     memmove @ 0x1406BFC40 (memmove.c)
 *     EtwpAllocatePhysicalPages @ 0x1407A6EFC (EtwpAllocatePhysicalPages.c)
 *     EtwpMdlInit @ 0x1407A8DA0 (EtwpMdlInit.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 */

PVOID __fastcall EtwpAllocateTraceBuffer(ULONG_PTR BugCheckParameter2, unsigned int a2)
{
  _QWORD *v3; // rcx
  ULONG_PTR v4; // rcx
  PVOID result; // rax
  ULONG_PTR *v6; // rcx
  struct _MDL *v7; // rsi
  ULONG_PTR v8; // rbp
  ULONG_PTR v9; // rax
  unsigned int PhysicalPages; // r9d
  int v11; // r8d
  int v12; // r9d
  unsigned int BugCheckParameter4; // [rsp+20h] [rbp-18h]

  v3 = (_QWORD *)(BugCheckParameter2 + 1584);
  if ( *v3 )
    return (PVOID)EtwpAllocatePartitionMemory(v3, a2);
  if ( (*(_DWORD *)(BugCheckParameter2 + 816) & 0x20000000) != 0 )
  {
    v6 = *(ULONG_PTR **)(BugCheckParameter2 + 1600);
    v7 = *(struct _MDL **)(BugCheckParameter2 + 1592);
    v8 = *(_DWORD *)(BugCheckParameter2 + 4) >> 12;
    if ( v6 )
    {
      v9 = *v6;
      if ( *v6 < v8 )
        KeBugCheckEx(0x11Du, 0x100uLL, BugCheckParameter2, v9, *(_DWORD *)(BugCheckParameter2 + 4) >> 12);
      memmove(&v7[1], &v6[v9 - v8 + 1], 8 * v8);
      PhysicalPages = v8;
      **(_QWORD **)(BugCheckParameter2 + 1600) -= v8;
    }
    else
    {
      PhysicalPages = EtwpAllocatePhysicalPages(&v7[1]);
    }
    EtwpMdlInit(*(_QWORD *)(BugCheckParameter2 + 1592), PhysicalPages, 0LL);
    if ( v12 != (_DWORD)v8
      || (result = MmMapLockedPagesSpecifyCache(v7, 0, MmCached, 0LL, v11 & BugCheckParameter4, 0x40000020u)) == 0LL )
    {
      while ( 1 )
        MiFreePagesFromMdl((ULONG_PTR)v7, 0, 0, 0);
    }
  }
  else
  {
    v4 = 258LL;
    if ( *(_DWORD *)(BugCheckParameter2 + 300) != 1 )
      v4 = 66LL;
    return (PVOID)ExAllocatePool2(v4);
  }
  return result;
}
