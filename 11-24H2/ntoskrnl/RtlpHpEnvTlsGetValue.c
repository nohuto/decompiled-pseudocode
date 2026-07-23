/*
 * XREFs of RtlpHpEnvTlsGetValue @ 0x14035F690
 * Callers:
 *     RtlpHpLfhSlotAllocateSlow @ 0x14035EE00 (RtlpHpLfhSlotAllocateSlow.c)
 *     RtlpHpMetadataAlloc @ 0x140458A08 (RtlpHpMetadataAlloc.c)
 *     RtlpHpAllocateHeapSlow @ 0x1404D2B7C (RtlpHpAllocateHeapSlow.c)
 *     RtlpHpLfhBucketUpdateAffinityMapping @ 0x1404E7284 (RtlpHpLfhBucketUpdateAffinityMapping.c)
 *     RtlpHpLfhPrivateSlotListCompact @ 0x14060428C (RtlpHpLfhPrivateSlotListCompact.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpHpEnvTlsGetValue(unsigned int a1)
{
  unsigned int v1; // eax
  unsigned __int64 v2; // r9
  unsigned int v3; // ecx

  v1 = (a1 >> 13) & 0x3FFFF;
  v2 = (unsigned __int64)a1 >> 4;
  _BitScanReverse(&v3, v1);
  return *(_QWORD *)(*(_QWORD *)(*((_QWORD *)KeGetCurrentPrcb()->ExSaPageArray + v3 - 2) + 8LL * (v1 ^ (1 << v3)) + 8)
                   + 8 * (v2 & 0x1FF));
}
