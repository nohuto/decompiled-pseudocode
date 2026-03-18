/*
 * XREFs of HalPutScatterGatherListV3 @ 0x14033419C
 * Callers:
 *     HalPutScatterGatherList @ 0x1403342E0 (HalPutScatterGatherList.c)
 * Callees:
 *     IoFreeMdl @ 0x1402D5960 (IoFreeMdl.c)
 *     MmUnmapLockedPages @ 0x1403285B0 (MmUnmapLockedPages.c)
 *     HalpDmaStartWcb @ 0x140331B6C (HalpDmaStartWcb.c)
 *     IoFreeMapRegistersV3 @ 0x140331F10 (IoFreeMapRegistersV3.c)
 *     HalpContinueProcessingWaitQueue @ 0x140331FDC (HalpContinueProcessingWaitQueue.c)
 *     HalFlushAdapterBuffersEx @ 0x140332110 (HalFlushAdapterBuffersEx.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

void __fastcall HalPutScatterGatherListV3(__int64 a1, __int64 a2, char a3)
{
  __int64 v3; // rbx
  __int64 v5; // rbp
  char v6; // r15
  __int64 *v7; // rsi
  struct _MDL *v8; // rdi
  struct _MDL *Next; // r14

  v3 = *(_QWORD *)(a2 + 8);
  v5 = a1;
  if ( (*(_DWORD *)v3 & 2) != 0 )
  {
    v6 = 1;
    v7 = (__int64 *)(v3 + 24);
    if ( *(_QWORD *)(v3 + 24) )
    {
      while ( !HalpDmaStartWcb(a1, (_QWORD *)(v3 + 48), 1) )
      {
        _mm_pause();
        a1 = v5;
      }
    }
  }
  else
  {
    v6 = 0;
    v7 = (__int64 *)(v3 + 24);
  }
  HalFlushAdapterBuffersEx(
    v5,
    *(_QWORD *)(v3 + 8),
    *v7,
    *(_QWORD *)(v3 + 32) - *(unsigned int *)(*(_QWORD *)(v3 + 8) + 44LL) - *(_QWORD *)(*(_QWORD *)(v3 + 8) + 32LL),
    *(_DWORD *)(v3 + 40),
    a3);
  IoFreeMapRegistersV3(v5, *v7, *(_DWORD *)(v3 + 44));
  v8 = *(struct _MDL **)(v3 + 16);
  if ( v8 )
  {
    do
    {
      Next = v8->Next;
      if ( (v8->MdlFlags & 1) != 0 )
        MmUnmapLockedPages(v8->MappedSystemVa, v8);
      IoFreeMdl(v8);
      v8 = Next;
    }
    while ( Next );
  }
  if ( v6 && *v7 )
    HalpContinueProcessingWaitQueue(v5);
  if ( (*(_DWORD *)v3 & 1) == 0 )
    ExFreePoolWithTag(*(PVOID *)(v3 + 160), 0);
}
