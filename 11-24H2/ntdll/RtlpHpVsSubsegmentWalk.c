/*
 * XREFs of RtlpHpVsSubsegmentWalk @ 0x18005E00C
 * Callers:
 *     RtlpHpSegWalk @ 0x18002B478 (RtlpHpSegWalk.c)
 * Callees:
 *     RtlpHpVsChunkSize @ 0x18005DE50 (RtlpHpVsChunkSize.c)
 */

__int64 __fastcall RtlpHpVsSubsegmentWalk(__int64 a1, __int64 a2, __int64 a3, __int64 *a4, _DWORD *a5, int *a6)
{
  __int64 v7; // rbx
  unsigned __int64 v8; // rbx
  unsigned __int64 v9; // rdx
  __int64 v10; // rdi
  __int64 v11; // rax
  int v12; // ecx

  if ( a3 == a2 )
  {
    v8 = a2 + 48;
  }
  else
  {
    v7 = a3 - 16;
    if ( (*(_BYTE *)(a1 + 4) & 1) != 0 && (a3 & 0xFFF) == 0 )
      v7 = a3 - 32;
    v8 = 16 * (WORD1(RtlpHpHeapGlobals) ^ *(unsigned __int16 *)(v7 + 2) ^ ((unsigned __int64)(unsigned int)v7 >> 16))
       + v7;
  }
  v9 = a2 + 16 * (*(unsigned __int16 *)(a2 + 32) + 3LL);
  while ( 1 )
  {
    if ( v8 >= v9 )
      return 0LL;
    if ( ((HIDWORD(*(_QWORD *)v8) ^ HIDWORD(v8) ^ HIDWORD(RtlpHpHeapGlobals)) & 0xFF0000) != 0
      && (*(_DWORD *)(v8 + 8) & 0x200) == 0 )
    {
      break;
    }
    v8 += 16 * (WORD1(RtlpHpHeapGlobals) ^ *(unsigned __int16 *)(v8 + 2) ^ ((unsigned __int64)(unsigned int)v8 >> 16));
  }
  v10 = v8 + 16;
  if ( (*(_BYTE *)(a1 + 4) & 1) != 0 && ((v8 + 32) & 0xFFF) == 0 )
    v10 = v8 + 32;
  v11 = RtlpHpVsChunkSize(a1, v10, a3, a6);
  v12 = *(unsigned __int16 *)(v8 + 2);
  *a4 = v11;
  *a5 = 16 * (WORD1(RtlpHpHeapGlobals) ^ WORD1(v8) ^ v12) - *(_DWORD *)a4 - 16;
  return v10;
}
