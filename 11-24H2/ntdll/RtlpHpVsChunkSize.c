/*
 * XREFs of RtlpHpVsChunkSize @ 0x18005DE50
 * Callers:
 *     RtlpHpReallocComputeSizes @ 0x18005DAE0 (RtlpHpReallocComputeSizes.c)
 *     RtlpHpVsSubsegmentWalk @ 0x18005E00C (RtlpHpVsSubsegmentWalk.c)
 *     RtlpHpSegReportPageRange @ 0x18011B4C0 (RtlpHpSegReportPageRange.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpHpVsChunkSize(__int64 a1, __int64 a2, __int64 a3, int *a4)
{
  __int64 v4; // r8
  char v5; // r10
  __int64 v6; // rcx
  __int64 result; // rax
  unsigned __int16 v8; // dx
  int v9; // ecx

  v4 = a2 - 16;
  v5 = *(_BYTE *)(a1 + 4) & 1;
  if ( v5 && (a2 & 0xFFF) == 0 )
    v4 = a2 - 32;
  if ( ((HIDWORD(v4) ^ HIDWORD(RtlpHpHeapGlobals) ^ HIDWORD(*(_QWORD *)v4)) & 0xFF0000) == 0 )
    return -1LL;
  v6 = 16 * (WORD1(RtlpHpHeapGlobals) ^ WORD1(v4) ^ *(unsigned __int16 *)(v4 + 2)) - 16;
  if ( v5 && ((v4 + 32) & 0xFFF) == 0 )
    v6 = 16 * (WORD1(RtlpHpHeapGlobals) ^ WORD1(v4) ^ *(unsigned __int16 *)(v4 + 2)) - 32;
  result = (unsigned int)v6;
  if ( (*(_DWORD *)(v4 + 8) & 0x100) != 0 )
  {
    v8 = *(_WORD *)(v6 + a2 - 2);
    if ( (v8 & 0x8000u) == 0 )
      result = (unsigned int)v6 - (unsigned __int64)(v8 & 0x1FFF);
    else
      result = (unsigned int)v6 - 1LL;
    v9 = (v8 >> 14) & 1;
  }
  else
  {
    v9 = 0;
  }
  if ( a4 )
    *a4 = v9;
  return result;
}
