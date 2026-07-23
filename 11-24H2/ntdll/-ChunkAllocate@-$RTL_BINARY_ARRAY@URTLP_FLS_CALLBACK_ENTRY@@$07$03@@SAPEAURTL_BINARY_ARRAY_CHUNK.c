/*
 * XREFs of ?ChunkAllocate@?$RTL_BINARY_ARRAY@URTLP_FLS_CALLBACK_ENTRY@@$07$03@@SAPEAURTL_BINARY_ARRAY_CHUNK@1@PEAU1@K@Z @ 0x1800B103C
 * Callers:
 *     RtlpFlsAlloc @ 0x1800B0E88 (RtlpFlsAlloc.c)
 * Callees:
 *     RtlpFlsHeapAlloc @ 0x1800B13B8 (RtlpFlsHeapAlloc.c)
 */

_OWORD *__fastcall RTL_BINARY_ARRAY<RTLP_FLS_CALLBACK_ENTRY,8,4>::ChunkAllocate(__int64 a1, unsigned int a2)
{
  __int64 v3; // rdi
  unsigned int v4; // ebx
  _OWORD *v5; // rax
  _OWORD *v6; // r8
  _QWORD *v7; // rax
  __int64 v8; // rcx

  v3 = a2;
  v4 = 1 << (a2 + 4);
  v5 = (_OWORD *)RtlpFlsHeapAlloc(24 * v4 + 8);
  v6 = v5;
  if ( v5 )
  {
    *v5 = 0LL;
    v5[1] = 0LL;
    if ( v4 )
    {
      v7 = (_QWORD *)v5 + 3;
      v8 = v4;
      do
      {
        *(v7 - 2) = 0LL;
        *(v7 - 1) = 0LL;
        *v7 = 0LL;
        v7 += 3;
        --v8;
      }
      while ( v8 );
    }
    *(_QWORD *)(a1 + 8 * v3) = v6;
  }
  return v6;
}
