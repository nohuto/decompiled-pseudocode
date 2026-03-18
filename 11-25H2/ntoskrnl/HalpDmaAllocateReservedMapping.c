/*
 * XREFs of HalpDmaAllocateReservedMapping @ 0x140BFF338
 * Callers:
 *     HalpDmaAllocateMappingResources @ 0x140BFF19C (HalpDmaAllocateMappingResources.c)
 *     HalpDmaAllocateReservedMappingArray @ 0x140BFF394 (HalpDmaAllocateReservedMappingArray.c)
 * Callees:
 *     HalpMmAllocCtxFree @ 0x140337DCC (HalpMmAllocCtxFree.c)
 *     HalpMmAllocCtxAlloc @ 0x140338EDC (HalpMmAllocCtxAlloc.c)
 *     MmAllocateMappingAddress @ 0x140A58930 (MmAllocateMappingAddress.c)
 */

__int64 __fastcall HalpDmaAllocateReservedMapping(__int64 a1)
{
  __int64 v1; // rbx
  __int64 result; // rax
  PVOID MappingAddress; // rax
  __int64 v4; // rcx

  v1 = HalpMmAllocCtxAlloc(a1, 48LL);
  if ( !v1 )
    return 0LL;
  MappingAddress = MmAllocateMappingAddress(0x200000uLL, 0x446C6148u);
  *(_QWORD *)(v1 + 16) = MappingAddress;
  if ( !MappingAddress )
  {
    HalpMmAllocCtxFree(v4, v1);
    return 0LL;
  }
  *(_DWORD *)(v1 + 24) = 0;
  result = v1;
  *(_DWORD *)(v1 + 28) = 0;
  *(_QWORD *)(v1 + 32) = 0LL;
  return result;
}
