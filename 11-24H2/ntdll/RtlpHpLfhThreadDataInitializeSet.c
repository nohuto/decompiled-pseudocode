/*
 * XREFs of RtlpHpLfhThreadDataInitializeSet @ 0x1800646A0
 * Callers:
 *     RtlpHpMetadataAlloc @ 0x18003D230 (RtlpHpMetadataAlloc.c)
 *     RtlAllocateHeap @ 0x18003DC60 (RtlAllocateHeap.c)
 *     RtlpHpTagFreeHeap @ 0x180053EC0 (RtlpHpTagFreeHeap.c)
 *     RtlpHpFreeHeap @ 0x180057A20 (RtlpHpFreeHeap.c)
 *     RtlpHpSegReAlloc @ 0x18005CF10 (RtlpHpSegReAlloc.c)
 *     RtlpHpLfhSlotAllocateSlow @ 0x180061270 (RtlpHpLfhSlotAllocateSlow.c)
 *     RtlpHpLfhContextFree @ 0x180065110 (RtlpHpLfhContextFree.c)
 *     RtlpHpTagAllocateHeap @ 0x180083CE0 (RtlpHpTagAllocateHeap.c)
 *     RtlpHpReallocMove @ 0x18009EFF0 (RtlpHpReallocMove.c)
 *     RtlpHpAllocateHeapSlow @ 0x18009FA50 (RtlpHpAllocateHeapSlow.c)
 *     RtlpHpLfhPrivateSlotListCompact @ 0x1800E4020 (RtlpHpLfhPrivateSlotListCompact.c)
 *     RtlpHpLfhBucketUpdateAffinityMapping @ 0x180117A60 (RtlpHpLfhBucketUpdateAffinityMapping.c)
 * Callees:
 *     RtlpHpEnvTlsSetValue @ 0x18006471C (RtlpHpEnvTlsSetValue.c)
 *     RtlpHpGetCurrentProcessorNumber @ 0x180064794 (RtlpHpGetCurrentProcessorNumber.c)
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
