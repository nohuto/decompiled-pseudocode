/*
 * XREFs of RtlpHpSegLfhVsDecommit @ 0x140368600
 * Callers:
 *     RtlpHpVsSubsegmentCommitPages @ 0x1403682CC (RtlpHpVsSubsegmentCommitPages.c)
 * Callees:
 *     RtlpHpSegPageRangeCommit @ 0x14035F6F0 (RtlpHpSegPageRangeCommit.c)
 */

__int64 __fastcall RtlpHpSegLfhVsDecommit(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rdi
  __int64 v4; // r11
  __int64 v5; // r9
  char v6; // cl
  unsigned __int64 v7; // r10
  __int64 v8; // r10

  v3 = *(_QWORD *)a1;
  v4 = a1;
  v5 = a2 & *(_QWORD *)a1;
  if ( (v5 ^ RtlpHpHeapGlobals ^ *(_QWORD *)(v5 + 0x10)) == a1 )
  {
    v6 = *(_BYTE *)(a1 + 8);
    v7 = v5 + 32 * ((unsigned __int64)(unsigned int)(a2 - v5) >> v6);
    v8 = -32LL * *(unsigned __int8 *)(v7 + 26) + v7;
    if ( (*(_BYTE *)(v8 + 24) & 3) == 3 && (v5 + ((v8 - v5) >> 5 << v6) == a2 || (*(_BYTE *)(v8 + 24) & 0xCu) >= 8) )
    {
      a1 = v4;
      return RtlpHpSegPageRangeCommit(
               v4,
               v8,
               ((_DWORD)a2
              - (unsigned int)((v8 - (v8 & v3)) >> 5 << *(_BYTE *)(a1 + 8))
              - ((unsigned int)v8 & (unsigned int)v3)) >> 12,
               -(a3 >> 12),
               0,
               0LL);
    }
    a1 = v4;
  }
  v8 = 0LL;
  return RtlpHpSegPageRangeCommit(
           v4,
           v8,
           ((_DWORD)a2
          - (unsigned int)((v8 - (v8 & v3)) >> 5 << *(_BYTE *)(a1 + 8))
          - ((unsigned int)v8 & (unsigned int)v3)) >> 12,
           -(a3 >> 12),
           0,
           0LL);
}
