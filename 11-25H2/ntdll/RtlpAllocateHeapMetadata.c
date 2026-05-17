/*
 * XREFs of RtlpAllocateHeapMetadata @ 0x1800F1BE0
 * Callers:
 *     RtlpTlsHeapAlloc @ 0x1800097AC (RtlpTlsHeapAlloc.c)
 * Callees:
 *     RtlpHpMetadataAlloc @ 0x18004F990 (RtlpHpMetadataAlloc.c)
 */

unsigned __int64 __fastcall RtlpAllocateHeapMetadata(__int64 a1, unsigned __int64 a2)
{
  __int128 v3; // [rsp+20h] [rbp-18h] BYREF

  if ( *(_DWORD *)(a1 + 16) != -571548178 )
    return RtlAllocateHeap((char *)a1, 0, a2);
  v3 = *(_OWORD *)a1;
  return RtlpHpMetadataAlloc(a2, a2, 2, &v3);
}
