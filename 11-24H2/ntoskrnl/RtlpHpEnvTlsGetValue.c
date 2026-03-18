/*
 * XREFs of RtlpHpEnvTlsGetValue @ 0x140420C10
 * Callers:
 *     RtlpHpAllocateHeapSlow @ 0x1402B819C (RtlpHpAllocateHeapSlow.c)
 *     RtlpHpMetadataAlloc @ 0x140420674 (RtlpHpMetadataAlloc.c)
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
