/*
 * XREFs of HalpDmaReleaseBufferMappings @ 0x14045A854
 * Callers:
 *     HalpDmaZeroMapBuffers @ 0x14054F91C (HalpDmaZeroMapBuffers.c)
 * Callees:
 *     MmUnmapLockedPages @ 0x14028D9C0 (MmUnmapLockedPages.c)
 *     KxReleaseQueuedSpinLock @ 0x140321BB0 (KxReleaseQueuedSpinLock.c)
 *     MmUnmapReservedMapping @ 0x14040F6F0 (MmUnmapReservedMapping.c)
 *     RtlpInterlockedPushEntrySList @ 0x1406B38D0 (RtlpInterlockedPushEntrySList.c)
 */

void __fastcall HalpDmaReleaseBufferMappings(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  __int64 v4; // rsi
  void *v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rdx
  __int64 v10; // rcx

  v4 = a3;
  if ( *(_QWORD *)a4 )
  {
    v7 = *(void **)(a4 + 8);
    if ( *(_BYTE *)(a4 + 48) )
    {
      MmUnmapReservedMapping(v7, 0x446C6148u, *(PMDL *)a4);
      if ( !byte_140E3EB38 )
      {
        KxReleaseQueuedSpinLock((volatile signed __int64 **)(a4 + 24), v8);
        v9 = *(_QWORD *)(a4 + 16);
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v9 + 24), 0xFFFFFFFF) == 1
          && !_InterlockedCompareExchange((volatile signed __int32 *)(v9 + 28), 1, 0) )
        {
          RtlpInterlockedPushEntrySList(&stru_140E3EB40, (PSLIST_ENTRY)v9);
        }
      }
    }
    else
    {
      MmUnmapLockedPages(v7, *(PMDL *)a4);
    }
    if ( (_DWORD)v4 )
    {
      v10 = v4;
      do
      {
        if ( (*(_BYTE *)(a2 + 48) & 0x10) != 0 )
          *(_QWORD *)(a2 + 48) = *(_DWORD *)(a2 + 48) & 0xFEF;
        a2 = *(_QWORD *)(a2 + 8);
        --v10;
      }
      while ( v10 );
    }
  }
}
