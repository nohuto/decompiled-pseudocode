/*
 * XREFs of HalpDmaAllocateReservedMapping @ 0x140C12338
 * Callers:
 *     HalpDmaAllocateMappingResources @ 0x140C1219C (HalpDmaAllocateMappingResources.c)
 *     HalpDmaAllocateReservedMappingArray @ 0x140C12394 (HalpDmaAllocateReservedMappingArray.c)
 * Callees:
 *     HalpMmAllocCtxAlloc @ 0x14027C378 (HalpMmAllocCtxAlloc.c)
 *     HalpMmAllocCtxFree @ 0x1402EA1C8 (HalpMmAllocCtxFree.c)
 *     MmAllocateMappingAddress @ 0x140A531D0 (MmAllocateMappingAddress.c)
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
