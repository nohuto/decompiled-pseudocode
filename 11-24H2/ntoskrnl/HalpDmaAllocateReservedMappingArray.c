/*
 * XREFs of HalpDmaAllocateReservedMappingArray @ 0x140C12394
 * Callers:
 *     HalpDmaAllocateMappingResources @ 0x140C1219C (HalpDmaAllocateMappingResources.c)
 * Callees:
 *     RtlRaiseStatus @ 0x1402360C0 (RtlRaiseStatus.c)
 *     HalpMmAllocCtxAlloc @ 0x14027C378 (HalpMmAllocCtxAlloc.c)
 *     HalpMmAllocCtxFree @ 0x1402EA1C8 (HalpMmAllocCtxFree.c)
 *     RtlpInterlockedPushEntrySList @ 0x1406B4870 (RtlpInterlockedPushEntrySList.c)
 *     HalpDmaAllocateReservedMapping @ 0x140C12338 (HalpDmaAllocateReservedMapping.c)
 */

__int64 __fastcall HalpDmaAllocateReservedMappingArray(__int64 a1, unsigned int a2)
{
  __int64 v3; // rcx
  __int64 v4; // rdx
  unsigned int v5; // ebx
  __int64 v6; // rdi
  _SLIST_ENTRY *ReservedMapping; // rax
  __int64 v8; // rax

  if ( ((unsigned __int8)&stru_140E3EC80 & 0xF) != 0 )
    RtlRaiseStatus(-2147483646);
  qword_140E3EC90 = 0LL;
  stru_140E3EC80 = 0LL;
  qword_140E3ECB0 = HalpMmAllocCtxAlloc(a1, 8LL * (unsigned int)a1);
  v4 = qword_140E3ECB0;
  if ( qword_140E3ECB0 )
  {
    v5 = 0;
    if ( a2 )
    {
      v6 = 0LL;
      do
      {
        ReservedMapping = (_SLIST_ENTRY *)HalpDmaAllocateReservedMapping(v3);
        v4 = qword_140E3ECB0;
        *(_QWORD *)(v6 + qword_140E3ECB0) = ReservedMapping;
        if ( !ReservedMapping )
          break;
        RtlpInterlockedPushEntrySList(&stru_140E3EC80, ReservedMapping);
        v4 = qword_140E3ECB0;
        ++v5;
        v8 = *(_QWORD *)(v6 + qword_140E3ECB0);
        v6 += 8LL;
        *(_DWORD *)(v8 + 28) = 1;
      }
      while ( v5 < a2 );
      if ( v5 )
      {
        dword_140E3ECB8 = v5;
        return 0LL;
      }
    }
    HalpMmAllocCtxFree(v3, v4);
  }
  return 3221225626LL;
}
