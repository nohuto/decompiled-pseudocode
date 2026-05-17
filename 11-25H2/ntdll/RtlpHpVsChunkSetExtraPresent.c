/*
 * XREFs of RtlpHpVsChunkSetExtraPresent @ 0x18002D6B8
 * Callers:
 *     RtlpHpReallocMove @ 0x18002C3C0 (RtlpHpReallocMove.c)
 *     RtlpHpAllocateHeapSlow @ 0x18002F040 (RtlpHpAllocateHeapSlow.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpHpVsChunkSetExtraPresent(__int64 a1, __int64 a2)
{
  __int64 v2; // r8
  char v3; // r9
  unsigned int v4; // ecx
  __int64 result; // rax

  v2 = a2 - 16;
  v3 = *(_BYTE *)(a1 + 4) & 1;
  if ( v3 && (a2 & 0xFFF) == 0 )
    v2 = a2 - 32;
  v4 = 16 * (WORD1(RtlpHpHeapGlobals) ^ WORD1(v2) ^ *(unsigned __int16 *)(v2 + 2)) - 16;
  if ( v3 && ((v2 + 32) & 0xFFF) == 0 )
    v4 = 16 * (WORD1(RtlpHpHeapGlobals) ^ WORD1(v2) ^ *(unsigned __int16 *)(v2 + 2)) - 32;
  result = v4;
  *(_WORD *)(v4 + a2 - 2) |= 0x4000u;
  return result;
}
