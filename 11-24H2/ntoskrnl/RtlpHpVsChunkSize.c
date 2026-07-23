/*
 * XREFs of RtlpHpVsChunkSize @ 0x1406048C4
 * Callers:
 *     RtlpSizeHeapInternal @ 0x1405EAED0 (RtlpSizeHeapInternal.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpHpVsChunkSize(__int64 a1, __int64 a2, __int64 a3, int *a4)
{
  __int64 v4; // r8
  char v5; // r10
  __int64 v6; // rcx
  unsigned __int16 v7; // dx
  int v8; // eax

  v4 = a2 - 16;
  v5 = *(_BYTE *)(a1 + 4) & 1;
  if ( v5 && (a2 & 0xFFF) == 0 )
    v4 = a2 - 32;
  if ( ((HIDWORD(v4) ^ HIDWORD(RtlpHpHeapGlobals) ^ HIDWORD(*(_QWORD *)v4)) & 0xFF0000) == 0 )
    return -1LL;
  v6 = 16 * (WORD1(RtlpHpHeapGlobals) ^ WORD1(v4) ^ *(unsigned __int16 *)(v4 + 2)) - 16;
  if ( v5 && ((v4 + 32) & 0xFFF) == 0 )
    v6 = 16 * (WORD1(RtlpHpHeapGlobals) ^ WORD1(v4) ^ *(unsigned __int16 *)(v4 + 2)) - 32;
  if ( (*(_DWORD *)(v4 + 8) & 0x100) != 0 )
  {
    v7 = *(_WORD *)(v6 + a2 - 2);
    if ( (v7 & 0x8000u) == 0 )
      v6 -= v7 & 0x1FFF;
    else
      --v6;
    v8 = (v7 >> 14) & 1;
  }
  else
  {
    v8 = 0;
  }
  if ( a4 )
    *a4 = v8;
  return v6;
}
