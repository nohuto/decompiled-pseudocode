/*
 * XREFs of RtlpFlsHeapAlloc @ 0x18000A748
 * Callers:
 *     ?ChunkAllocate@?$RTL_BINARY_ARRAY@URTLP_FLS_CALLBACK_ENTRY@@$07$03@@SAPEAURTL_BINARY_ARRAY_CHUNK@1@PEAU1@K@Z @ 0x1800099AC (-ChunkAllocate@-$RTL_BINARY_ARRAY@URTLP_FLS_CALLBACK_ENTRY@@$07$03@@SAPEAURTL_BINARY_ARRAY_CHUNK.c)
 *     RtlFlsSetValue @ 0x18000A450 (RtlFlsSetValue.c)
 *     RtlpFlsSetValue @ 0x18000A5E0 (RtlpFlsSetValue.c)
 * Callees:
 *     RtlpHpMetadataAlloc @ 0x18004F990 (RtlpHpMetadataAlloc.c)
 */

PVOID __fastcall RtlpFlsHeapAlloc(unsigned int a1)
{
  SIZE_T v1; // r10
  _DWORD *ProcessHeap; // rcx
  __int128 v4; // [rsp+20h] [rbp-18h] BYREF

  v1 = a1;
  ProcessHeap = NtCurrentPeb()->ProcessHeap;
  if ( ProcessHeap[4] != -571548178 )
    return RtlAllocateHeap(ProcessHeap, 0, v1);
  v4 = *(_OWORD *)ProcessHeap;
  return (PVOID)((__int64 (__fastcall *)(_QWORD, _QWORD, __int64, __int128 *))RtlpHpMetadataAlloc)(
                  (unsigned int)v1,
                  (unsigned int)v1,
                  2LL,
                  &v4);
}
