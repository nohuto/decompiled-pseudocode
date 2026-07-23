/*
 * XREFs of RtlpPerformHeapMaintenance @ 0x180028880
 * Callers:
 *     RtlpAllocateHeap @ 0x180026310 (RtlpAllocateHeap.c)
 * Callees:
 *     RtlpInitializeUCRIndex @ 0x180037B60 (RtlpInitializeUCRIndex.c)
 *     RtlpActivateLowFragmentationHeap @ 0x180037C0C (RtlpActivateLowFragmentationHeap.c)
 */

__int64 __fastcall RtlpPerformHeapMaintenance(_DWORD *a1)
{
  int v1; // eax
  __int64 result; // rax

  v1 = a1[30];
  if ( (v1 & 0x20000000) != 0 )
  {
    a1[30] = v1 & 0xDFFFFFFF;
    if ( (RtlpDisableHeapLookaside & 1) == 0 )
      RtlpActivateLowFragmentationHeap(a1);
  }
  result = (unsigned int)a1[30];
  if ( (result & 0x10000000) != 0 )
  {
    a1[30] = result & 0xEFFFFFFF;
    result = RtlpInitializeUCRIndex(a1);
    a1[30] &= ~0x10000000u;
  }
  return result;
}
