/*
 * XREFs of RtlpHpLfhThreadDataInitializeSet @ 0x1404F2F1C
 * Callers:
 *     ExAllocateHeapPool @ 0x140277790 (ExAllocateHeapPool.c)
 *     ExFreeHeapPool @ 0x140359950 (ExFreeHeapPool.c)
 *     RtlpHpFreeHeap @ 0x14035B220 (RtlpHpFreeHeap.c)
 *     RtlpHpLfhContextFree @ 0x14035BCF0 (RtlpHpLfhContextFree.c)
 *     RtlpHpLfhSlotAllocateSlow @ 0x14035EE00 (RtlpHpLfhSlotAllocateSlow.c)
 *     RtlpHpAllocateHeap @ 0x1403E93B0 (RtlpHpAllocateHeap.c)
 *     RtlpHpMetadataAlloc @ 0x140458A08 (RtlpHpMetadataAlloc.c)
 *     RtlpHpAllocateHeapSlow @ 0x1404D2B7C (RtlpHpAllocateHeapSlow.c)
 *     RtlpHpLfhBucketUpdateAffinityMapping @ 0x1404E7284 (RtlpHpLfhBucketUpdateAffinityMapping.c)
 *     RtlpHpLfhPrivateSlotListCompact @ 0x14060428C (RtlpHpLfhPrivateSlotListCompact.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 * Callees:
 *     RtlpHpEnvTlsSetValue @ 0x1404F2F94 (RtlpHpEnvTlsSetValue.c)
 */

__int64 __fastcall RtlpHpLfhThreadDataInitializeSet(__int64 a1)
{
  unsigned int v1; // eax
  unsigned int v2; // edx
  __int64 v4; // [rsp+30h] [rbp+8h]

  v1 = *(unsigned __int8 *)(a1 + 64);
  v2 = KeGetCurrentPrcb()->Number & 0x3F;
  if ( v2 >= v1 )
  {
    if ( v2 == v1 || (_BYTE)v1 == 1 )
      v2 = 0;
    else
      v2 = *(unsigned __int8 *)(v2 - v1 - 1 + *(_QWORD *)(a1 + 56));
  }
  HIDWORD(v4) = (unsigned __int8)v2;
  LOWORD(v4) = (((unsigned __int64)v2 << 8) + 1472) >> 6;
  WORD1(v4) = 3;
  RtlpHpEnvTlsSetValue(*(unsigned int *)(a1 + 76), v4);
  return v4;
}
