/*
 * XREFs of EtwpAllocatePhysicalMemoryForTraceBuffers @ 0x1409CFA3C
 * Callers:
 *     EtwpAllocateTraceBufferPool @ 0x1409CF86C (EtwpAllocateTraceBufferPool.c)
 * Callees:
 *     EtwpAllocatePhysicalPages @ 0x1407A703C (EtwpAllocatePhysicalPages.c)
 *     EtwpFreePfnArray @ 0x1407A7F08 (EtwpFreePfnArray.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

__int64 __fastcall EtwpAllocatePhysicalMemoryForTraceBuffers(__int64 a1)
{
  unsigned __int64 v2; // rbp
  __int64 Pool2; // rax
  unsigned int v4; // ebx
  __int64 v5; // rsi
  __int64 v6; // rax

  v2 = (unsigned __int64)*(unsigned int *)(a1 + 4) >> 12;
  Pool2 = ExAllocatePool2(0x40uLL, 8 * v2 + 48, 0x74777445u);
  v4 = 0;
  *(_QWORD *)(a1 + 1592) = Pool2;
  if ( !Pool2
    || (v5 = v2 * *(unsigned int *)(a1 + 224),
        v6 = ExAllocatePool2(0x100uLL, 8 * v5 + 8, 0x74777445u),
        (*(_QWORD *)(a1 + 1600) = v6) == 0LL) )
  {
    v4 = -1073741801;
LABEL_6:
    EtwpFreePfnArray(a1);
    return v4;
  }
  **(_QWORD **)(a1 + 1600) = EtwpAllocatePhysicalPages((char *)(v6 + 8), v5);
  if ( **(_QWORD **)(a1 + 1600) != v5 )
  {
    v4 = -1073741670;
    goto LABEL_6;
  }
  return v4;
}
