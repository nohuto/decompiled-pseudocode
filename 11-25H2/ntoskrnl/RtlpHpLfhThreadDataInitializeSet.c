/*
 * XREFs of RtlpHpLfhThreadDataInitializeSet @ 0x1404F2D18
 * Callers:
 *     ExAllocateHeapPool @ 0x1402DAB20 (ExAllocateHeapPool.c)
 *     RtlpHpFreeHeap @ 0x1402DE7F0 (RtlpHpFreeHeap.c)
 *     RtlpHpLfhContextFree @ 0x1402E04D0 (RtlpHpLfhContextFree.c)
 *     RtlpHpLfhBucketUpdateAffinityMapping @ 0x1403C870C (RtlpHpLfhBucketUpdateAffinityMapping.c)
 *     RtlpHpLfhSlotAllocateSlow @ 0x1403C89FC (RtlpHpLfhSlotAllocateSlow.c)
 *     RtlpHpAllocateHeap @ 0x1403C93A0 (RtlpHpAllocateHeap.c)
 *     RtlpHpAllocateHeapSlow @ 0x1403C9AF8 (RtlpHpAllocateHeapSlow.c)
 *     RtlpHpMetadataAlloc @ 0x1403CAF34 (RtlpHpMetadataAlloc.c)
 *     RtlpHpLfhPrivateSlotListCompact @ 0x1405FA90C (RtlpHpLfhPrivateSlotListCompact.c)
 * Callees:
 *     RtlpHpEnvTlsSetValue @ 0x1404F2D90 (RtlpHpEnvTlsSetValue.c)
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
