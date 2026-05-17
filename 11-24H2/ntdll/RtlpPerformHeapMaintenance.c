/*
 * XREFs of RtlpPerformHeapMaintenance @ 0x18009F8D0
 * Callers:
 *     RtlpAllocateHeap @ 0x18009D360 (RtlpAllocateHeap.c)
 * Callees:
 *     RtlpInitializeUCRIndex @ 0x1800A8D20 (RtlpInitializeUCRIndex.c)
 *     RtlpActivateLowFragmentationHeap @ 0x1800A8DCC (RtlpActivateLowFragmentationHeap.c)
 */

__int64 __fastcall RtlpPerformHeapMaintenance(__int64 a1)
{
  int v1; // eax
  __int64 result; // rax

  v1 = *(_DWORD *)(a1 + 120);
  if ( (v1 & 0x20000000) != 0 )
  {
    *(_DWORD *)(a1 + 120) = v1 & 0xDFFFFFFF;
    if ( (RtlpDisableHeapLookaside & 1) == 0 )
      RtlpActivateLowFragmentationHeap();
  }
  result = *(unsigned int *)(a1 + 120);
  if ( (result & 0x10000000) != 0 )
  {
    *(_DWORD *)(a1 + 120) = result & 0xEFFFFFFF;
    result = RtlpInitializeUCRIndex(a1);
    *(_DWORD *)(a1 + 120) &= ~0x10000000u;
  }
  return result;
}
