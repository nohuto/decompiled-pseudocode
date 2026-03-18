/*
 * XREFs of HalpDmaAllocateReservedMappingArray @ 0x140C10394
 * Callers:
 *     HalpDmaAllocateMappingResources @ 0x140C1019C (HalpDmaAllocateMappingResources.c)
 * Callees:
 *     HalpMmAllocCtxAlloc @ 0x14024BD68 (HalpMmAllocCtxAlloc.c)
 *     RtlRaiseStatus @ 0x140280B30 (RtlRaiseStatus.c)
 *     HalpMmAllocCtxFree @ 0x14037CBAC (HalpMmAllocCtxFree.c)
 *     RtlpInterlockedPushEntrySList @ 0x1406B38D0 (RtlpInterlockedPushEntrySList.c)
 *     HalpDmaAllocateReservedMapping @ 0x140C10338 (HalpDmaAllocateReservedMapping.c)
 */

__int64 __fastcall HalpDmaAllocateReservedMappingArray(__int64 a1, unsigned int a2)
{
  __int64 v3; // rcx
  __int64 v4; // rdx
  unsigned int v5; // ebx
  __int64 v6; // rdi
  struct _SLIST_ENTRY *ReservedMapping; // rax
  __int64 v8; // rax

  if ( ((unsigned __int8)&stru_140E3EB40 & 0xF) != 0 )
    RtlRaiseStatus(-2147483646);
  qword_140E3EB50 = 0LL;
  stru_140E3EB40 = 0LL;
  qword_140E3EB70 = HalpMmAllocCtxAlloc(a1, 8LL * (unsigned int)a1);
  v4 = qword_140E3EB70;
  if ( qword_140E3EB70 )
  {
    v5 = 0;
    if ( a2 )
    {
      v6 = 0LL;
      do
      {
        ReservedMapping = (struct _SLIST_ENTRY *)HalpDmaAllocateReservedMapping(v3);
        v4 = qword_140E3EB70;
        *(_QWORD *)(v6 + qword_140E3EB70) = ReservedMapping;
        if ( !ReservedMapping )
          break;
        RtlpInterlockedPushEntrySList(&stru_140E3EB40, ReservedMapping);
        v4 = qword_140E3EB70;
        ++v5;
        v8 = *(_QWORD *)(v6 + qword_140E3EB70);
        v6 += 8LL;
        *(_DWORD *)(v8 + 28) = 1;
      }
      while ( v5 < a2 );
      if ( v5 )
      {
        dword_140E3EB78 = v5;
        return 0LL;
      }
    }
    HalpMmAllocCtxFree(v3, v4);
  }
  return 3221225626LL;
}
