/*
 * XREFs of RtlpGetExtraStuffPointer @ 0x180025F70
 * Callers:
 *     RtlDebugAllocateHeap @ 0x180025BE0 (RtlDebugAllocateHeap.c)
 *     RtlpAllocateHeap @ 0x180026310 (RtlpAllocateHeap.c)
 *     RtlpReAllocateHeap @ 0x18002A860 (RtlpReAllocateHeap.c)
 *     RtlDebugReAllocateHeap @ 0x18002B9EC (RtlDebugReAllocateHeap.c)
 *     RtlDebugFreeHeap @ 0x18009517C (RtlDebugFreeHeap.c)
 *     RtlpValidateHeapSegment @ 0x180095454 (RtlpValidateHeapSegment.c)
 *     RtlGetUserInfoHeap @ 0x180095DD0 (RtlGetUserInfoHeap.c)
 *     RtlSetUserValueHeap @ 0x1800962A0 (RtlSetUserValueHeap.c)
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
