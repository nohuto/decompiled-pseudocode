/*
 * XREFs of RtlpHpLfhThreadDataInitializeSet @ 0x18000A350
 * Callers:
 *     RtlpHpLfhContextFree @ 0x18000B170 (RtlpHpLfhContextFree.c)
 *     RtlpHpReallocMove @ 0x18002C3C0 (RtlpHpReallocMove.c)
 *     RtlpHpTagAllocateHeap @ 0x18002E060 (RtlpHpTagAllocateHeap.c)
 *     RtlpHpAllocateHeapSlow @ 0x18002F040 (RtlpHpAllocateHeapSlow.c)
 *     RtlpHpLfhBucketUpdateAffinityMapping @ 0x18002FEB0 (RtlpHpLfhBucketUpdateAffinityMapping.c)
 *     RtlpHpLfhSlotAllocateSlow @ 0x180030120 (RtlpHpLfhSlotAllocateSlow.c)
 *     RtlpHpLfhPrivateSlotListCompact @ 0x180033990 (RtlpHpLfhPrivateSlotListCompact.c)
 *     RtlpHpMetadataAlloc @ 0x18004F990 (RtlpHpMetadataAlloc.c)
 *     RtlAllocateHeap @ 0x180050340 (RtlAllocateHeap.c)
 *     RtlpHpFreeHeap @ 0x180053AF0 (RtlpHpFreeHeap.c)
 *     RtlpHpTagFreeHeap @ 0x1800818A0 (RtlpHpTagFreeHeap.c)
 * Callees:
 *     RtlpHpEnvTlsSetValue @ 0x18000A3CC (RtlpHpEnvTlsSetValue.c)
 *     RtlpHpGetCurrentProcessorNumber @ 0x18000A840 (RtlpHpGetCurrentProcessorNumber.c)
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
