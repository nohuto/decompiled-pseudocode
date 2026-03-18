/*
 * XREFs of RtlpHpEnvTlsGetValue @ 0x1403CB4AC
 * Callers:
 *     RtlpHpAllocateHeapSlow @ 0x1403C9AF8 (RtlpHpAllocateHeapSlow.c)
 *     RtlpHpMetadataAlloc @ 0x1403CAF34 (RtlpHpMetadataAlloc.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpHpEnvTlsGetValue(unsigned int a1)
{
  unsigned int v1; // edx
  unsigned __int64 v2; // rax
  unsigned int v3; // ecx

  v1 = (a1 >> 13) & 0x3FFFF;
  v2 = (unsigned __int64)a1 >> 4;
  _BitScanReverse(&v3, v1);
  return *(_QWORD *)(*(_QWORD *)(*((_QWORD *)KeGetCurrentPrcb()->ExSaPageArray + v3 - 2) + 8LL * (v1 ^ (1 << v3)) + 8)
                   + 8 * (v2 & 0x1FF));
}
