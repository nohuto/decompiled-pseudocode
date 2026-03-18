/*
 * XREFs of RtlpHpLfhThreadDataInitializeSet @ 0x1404F561C
 * Callers:
 *     ExAllocateHeapPool @ 0x1402ACDB0 (ExAllocateHeapPool.c)
 *     ExFreeHeapPool @ 0x1402B0E50 (ExFreeHeapPool.c)
 *     RtlpHpFreeHeap @ 0x1402B2660 (RtlpHpFreeHeap.c)
 *     RtlpHpLfhContextFree @ 0x1402B3130 (RtlpHpLfhContextFree.c)
 *     RtlpHpLfhSlotAllocateSlow @ 0x1402B6D78 (RtlpHpLfhSlotAllocateSlow.c)
 *     RtlpHpLfhBucketUpdateAffinityMapping @ 0x1402B7624 (RtlpHpLfhBucketUpdateAffinityMapping.c)
 *     RtlpHpAllocateHeap @ 0x1402B7A40 (RtlpHpAllocateHeap.c)
 *     RtlpHpAllocateHeapSlow @ 0x1402B819C (RtlpHpAllocateHeapSlow.c)
 *     RtlpHpMetadataAlloc @ 0x140420674 (RtlpHpMetadataAlloc.c)
 *     RtlpHpLfhPrivateSlotListCompact @ 0x140606C4C (RtlpHpLfhPrivateSlotListCompact.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 * Callees:
 *     RtlpHpEnvTlsSetValue @ 0x1404F5694 (RtlpHpEnvTlsSetValue.c)
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
