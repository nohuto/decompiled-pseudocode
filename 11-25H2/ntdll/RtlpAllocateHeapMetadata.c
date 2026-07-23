/*
 * XREFs of RtlpAllocateHeapMetadata @ 0x1800F1BE0
 * Callers:
 *     RtlpTlsHeapAlloc @ 0x1800097AC (RtlpTlsHeapAlloc.c)
 * Callees:
 *     RtlpHpMetadataAlloc @ 0x18004F990 (RtlpHpMetadataAlloc.c)
 */

PVOID __fastcall RtlpAllocateHeapMetadata(__int128 *a1, SIZE_T a2)
{
  __int128 v3; // [rsp+20h] [rbp-18h] BYREF

  if ( *((_DWORD *)a1 + 4) != -571548178 )
    return RtlAllocateHeap(a1, 0, a2);
  v3 = *a1;
  return (PVOID)RtlpHpMetadataAlloc(a2, a2, 2, &v3);
}
