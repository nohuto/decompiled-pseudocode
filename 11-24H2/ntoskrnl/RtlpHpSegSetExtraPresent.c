/*
 * XREFs of RtlpHpSegSetExtraPresent @ 0x140603798
 * Callers:
 *     RtlpHpExtrasSetPresent @ 0x140602064 (RtlpHpExtrasSetPresent.c)
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall RtlpHpSegSetExtraPresent(__int64 a1, __int64 a2)
{
  __int64 v2; // r9
  char v5; // cl
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // rdx
  unsigned __int8 result; // al
  __int64 v9; // rdx
  char v10; // r9
  unsigned int v11; // ecx

  v2 = *(_QWORD *)a1 & a2;
  if ( (v2 ^ RtlpHpHeapGlobals ^ *(_QWORD *)(v2 + 0x10)) != a1
    || (v5 = *(_BYTE *)(a1 + 8),
        v6 = v2 + 32 * ((unsigned __int64)(unsigned int)(a2 - v2) >> v5),
        v7 = -32LL * *(unsigned __int8 *)(v6 + 26) + v6,
        (*(_BYTE *)(v7 + 24) & 3) != 3)
    || v2 + ((__int64)(v7 - v2) >> 5 << v5) != a2 && (*(_BYTE *)(v7 + 24) & 0xCu) < 8 )
  {
    v7 = 0LL;
  }
  result = *(_BYTE *)(v7 + 24) & 0xC;
  if ( result < 8u )
  {
    *(_WORD *)(v7 + 8) |= 1u;
  }
  else if ( result == 8 )
  {
    MEMORY[0] |= 0x4000u;
  }
  else
  {
    v9 = a2 - 16;
    v10 = *(_BYTE *)(*(_QWORD *)(a1 + 32) + 4LL) & 1;
    if ( v10 && (a2 & 0xFFF) == 0 )
      v9 = a2 - 32;
    v11 = 16 * (WORD1(RtlpHpHeapGlobals) ^ WORD1(v9) ^ *(unsigned __int16 *)(v9 + 2)) - 16;
    if ( v10 )
    {
      if ( ((v9 + 32) & 0xFFF) == 0 )
        v11 = 16 * (WORD1(RtlpHpHeapGlobals) ^ WORD1(v9) ^ *(unsigned __int16 *)(v9 + 2)) - 32;
    }
    result = v11;
    *(_WORD *)(v11 + a2 - 2) |= 0x4000u;
  }
  return result;
}
