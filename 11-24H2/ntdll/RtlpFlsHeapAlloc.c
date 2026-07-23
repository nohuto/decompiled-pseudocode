/*
 * XREFs of RtlpFlsHeapAlloc @ 0x1800B13B8
 * Callers:
 *     ?ChunkAllocate@?$RTL_BINARY_ARRAY@URTLP_FLS_CALLBACK_ENTRY@@$07$03@@SAPEAURTL_BINARY_ARRAY_CHUNK@1@PEAU1@K@Z @ 0x1800B103C (-ChunkAllocate@-$RTL_BINARY_ARRAY@URTLP_FLS_CALLBACK_ENTRY@@$07$03@@SAPEAURTL_BINARY_ARRAY_CHUNK.c)
 *     RtlFlsSetValue @ 0x1800B10C0 (RtlFlsSetValue.c)
 *     RtlpFlsSetValue @ 0x1800B1250 (RtlpFlsSetValue.c)
 * Callees:
 *     RtlpHpMetadataAlloc @ 0x18003D230 (RtlpHpMetadataAlloc.c)
 */

PVOID __fastcall RtlpFlsHeapAlloc(unsigned int a1)
{
  SIZE_T v1; // r10
  __int128 *ProcessHeap; // rcx
  __int128 v4; // [rsp+20h] [rbp-18h] BYREF

  v1 = a1;
  ProcessHeap = (__int128 *)NtCurrentPeb()->ProcessHeap;
  if ( *((_DWORD *)ProcessHeap + 4) != -571548178 )
    return RtlAllocateHeap(ProcessHeap, 0, v1);
  v4 = *ProcessHeap;
  return (PVOID)RtlpHpMetadataAlloc((unsigned int)v1, (unsigned int)v1, 2, &v4);
}
