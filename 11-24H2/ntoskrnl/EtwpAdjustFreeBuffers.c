/*
 * XREFs of EtwpAdjustFreeBuffers @ 0x1409D8EEC
 * Callers:
 *     EtwpLogger @ 0x1409D88E0 (EtwpLogger.c)
 * Callees:
 *     EtwpAllocateFreeBuffers @ 0x14024C2BC (EtwpAllocateFreeBuffers.c)
 *     EtwpQueryUsedProcessorCount @ 0x14024CFF4 (EtwpQueryUsedProcessorCount.c)
 */

__int64 __fastcall EtwpAdjustFreeBuffers(__int64 a1)
{
  unsigned int v1; // ebx
  unsigned int v2; // edx
  ULONG_PTR v3; // rcx
  unsigned int UsedProcessorCount; // edi

  v1 = 0;
  if ( (*(_DWORD *)(a1 + 12) & 0x40000) == 0 )
  {
    UsedProcessorCount = EtwpQueryUsedProcessorCount(a1, *(unsigned int *)(a1 + 228));
    if ( v2 < UsedProcessorCount
      && UsedProcessorCount - v2 != (unsigned int)EtwpAllocateFreeBuffers(v3, UsedProcessorCount - v2) )
    {
      return (unsigned int)-1073741801;
    }
  }
  return v1;
}
