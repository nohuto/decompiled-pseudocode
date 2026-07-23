/*
 * XREFs of ?SlotFree@?$RTL_BINARY_ARRAY@URTLP_FLS_CALLBACK_ENTRY@@$07$03@@SAXPEAU1@K@Z @ 0x180026D14
 * Callers:
 *     RtlpFlsFree @ 0x180026B34 (RtlpFlsFree.c)
 *     RtlpFlsAlloc @ 0x1800B0E88 (RtlpFlsAlloc.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RTL_BINARY_ARRAY<RTLP_FLS_CALLBACK_ENTRY,8,4>::SlotFree(__int64 a1, unsigned int a2)
{
  unsigned int v3; // ecx
  _DWORD *v4; // r10
  unsigned __int64 v5; // rcx
  __int64 result; // rax

  _BitScanReverse(&v3, a2);
  v4 = *(_DWORD **)(a1 + 8LL * (v3 - 4));
  --*v4;
  v5 = a2 ^ (unsigned __int64)(unsigned int)(1 << v3);
  result = 3 * v5;
  if ( *(_QWORD *)&v4[6 * v5 + 4] )
    NT_ASSERT("T::IsEmpty(&Chunk->Slots[SlotIndex])");
  return result;
}
