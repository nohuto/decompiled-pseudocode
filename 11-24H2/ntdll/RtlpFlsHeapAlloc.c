/*
 * XREFs of RtlpFlsHeapAlloc @ 0x1800B9618
 * Callers:
 *     ?ChunkAllocate@?$RTL_BINARY_ARRAY@URTLP_FLS_CALLBACK_ENTRY@@$07$03@@SAPEAURTL_BINARY_ARRAY_CHUNK@1@PEAU1@K@Z @ 0x1800B929C (-ChunkAllocate@-$RTL_BINARY_ARRAY@URTLP_FLS_CALLBACK_ENTRY@@$07$03@@SAPEAURTL_BINARY_ARRAY_CHUNK.c)
 *     RtlFlsSetValue @ 0x1800B9320 (RtlFlsSetValue.c)
 *     RtlpFlsSetValue @ 0x1800B94B0 (RtlpFlsSetValue.c)
 * Callees:
 *     RtlpHpMetadataAlloc @ 0x180010830 (RtlpHpMetadataAlloc.c)
 */

__int64 __fastcall RtlpFlsHeapAlloc(unsigned int a1)
{
  unsigned __int64 v1; // r10
  _DWORD *ProcessHeap; // rcx
  __int128 v4; // [rsp+20h] [rbp-18h] BYREF

  v1 = a1;
  ProcessHeap = NtCurrentPeb()->ProcessHeap;
  if ( ProcessHeap[4] != -571548178 )
    return RtlAllocateHeap((__int64)ProcessHeap, 0, v1);
  v4 = *(_OWORD *)ProcessHeap;
  return RtlpHpMetadataAlloc((unsigned int)v1, (unsigned int)v1, 2, &v4);
}
