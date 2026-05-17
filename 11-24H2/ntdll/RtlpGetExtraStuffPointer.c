/*
 * XREFs of RtlpGetExtraStuffPointer @ 0x18009CFC0
 * Callers:
 *     RtlDebugFreeHeap @ 0x18004178C (RtlDebugFreeHeap.c)
 *     RtlpValidateHeapSegment @ 0x180041A64 (RtlpValidateHeapSegment.c)
 *     RtlGetUserInfoHeap @ 0x1800423E0 (RtlGetUserInfoHeap.c)
 *     RtlSetUserValueHeap @ 0x18009BF90 (RtlSetUserValueHeap.c)
 *     RtlDebugAllocateHeap @ 0x18009CC30 (RtlDebugAllocateHeap.c)
 *     RtlpAllocateHeap @ 0x18009D360 (RtlpAllocateHeap.c)
 *     RtlpReAllocateHeap @ 0x1800A18B0 (RtlpReAllocateHeap.c)
 *     RtlDebugReAllocateHeap @ 0x1800A2A3C (RtlDebugReAllocateHeap.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpGetExtraStuffPointer(__int64 a1)
{
  if ( *(_BYTE *)(a1 + 15) == 4 )
    return a1 - 32;
  else
    return a1 + 16LL * *(unsigned __int16 *)(a1 + 8) - 16;
}
