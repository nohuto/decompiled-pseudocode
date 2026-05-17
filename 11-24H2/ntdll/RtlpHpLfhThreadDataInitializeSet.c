/*
 * XREFs of RtlpHpLfhThreadDataInitializeSet @ 0x18004EAC0
 * Callers:
 *     RtlpHpMetadataAlloc @ 0x180010830 (RtlpHpMetadataAlloc.c)
 *     RtlAllocateHeap @ 0x180011260 (RtlAllocateHeap.c)
 *     RtlpHpTagFreeHeap @ 0x1800274C0 (RtlpHpTagFreeHeap.c)
 *     RtlpHpFreeHeap @ 0x18002B020 (RtlpHpFreeHeap.c)
 *     RtlpHpLfhSlotAllocateSlow @ 0x18004B690 (RtlpHpLfhSlotAllocateSlow.c)
 *     RtlpHpLfhContextFree @ 0x18004F530 (RtlpHpLfhContextFree.c)
 *     RtlpHpReallocMove @ 0x180094540 (RtlpHpReallocMove.c)
 *     RtlpHpTagAllocateHeap @ 0x180094EF0 (RtlpHpTagAllocateHeap.c)
 *     RtlpHpSegReAlloc @ 0x1800A3160 (RtlpHpSegReAlloc.c)
 *     RtlpHpAllocateHeapSlow @ 0x1800ACEF0 (RtlpHpAllocateHeapSlow.c)
 *     RtlpHpLfhPrivateSlotListCompact @ 0x1800E8930 (RtlpHpLfhPrivateSlotListCompact.c)
 *     RtlpHpLfhBucketUpdateAffinityMapping @ 0x180119830 (RtlpHpLfhBucketUpdateAffinityMapping.c)
 * Callees:
 *     RtlpHpEnvTlsSetValue @ 0x18004EB3C (RtlpHpEnvTlsSetValue.c)
 *     RtlpHpGetCurrentProcessorNumber @ 0x18004EBB4 (RtlpHpGetCurrentProcessorNumber.c)
 */

__int64 __fastcall RtlpHpLfhThreadDataInitializeSet(__int64 a1)
{
  char CurrentProcessorNumber; // dl
  unsigned int v3; // eax
  unsigned int v4; // edx
  __int64 v6; // [rsp+30h] [rbp+8h]

  CurrentProcessorNumber = RtlpHpGetCurrentProcessorNumber();
  v3 = *(unsigned __int8 *)(a1 + 64);
  v4 = CurrentProcessorNumber & 0x3F;
  if ( v4 >= v3 )
  {
    if ( v4 == v3 || (_BYTE)v3 == 1 )
      v4 = 0;
    else
      v4 = *(unsigned __int8 *)(v4 - v3 - 1 + *(_QWORD *)(a1 + 56));
  }
  HIDWORD(v6) = (unsigned __int8)v4;
  LOWORD(v6) = (((unsigned __int64)v4 << 8) + 1472) >> 6;
  WORD1(v6) = 3;
  RtlpHpEnvTlsSetValue(*(unsigned int *)(a1 + 76), v6);
  return v6;
}
