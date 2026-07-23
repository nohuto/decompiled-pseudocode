/*
 * XREFs of RtlpHpSegLfhVsDecommit @ 0x1800DF710
 * Callers:
 *     RtlpHpVsSubsegmentCommitPages @ 0x180064D78 (RtlpHpVsSubsegmentCommitPages.c)
 * Callees:
 *     RtlpHpSegPageRangeCommit @ 0x18006C560 (RtlpHpSegPageRangeCommit.c)
 */

__int64 __fastcall RtlpHpSegLfhVsDecommit(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rbx
  __int64 v5; // r9
  char v6; // cl
  __int64 v7; // r10
  char v8; // di

  v3 = *(_QWORD *)a1;
  v5 = a2 & *(_QWORD *)a1;
  if ( (v5 ^ RtlpHpHeapGlobals ^ *(_QWORD *)(v5 + 0x10)) == a1 )
  {
    v6 = *(_BYTE *)(a1 + 8);
    v7 = -32LL * *(unsigned __int8 *)(v5 + 32 * ((unsigned __int64)(unsigned int)(a2 - v5) >> v6) + 26)
       + v5
       + 32 * ((unsigned __int64)(unsigned int)(a2 - v5) >> v6);
    v8 = *(_BYTE *)(v7 + 24);
    if ( (v8 & 3) != 3
      || v5
       + ((__int64)(-32LL * *(unsigned __int8 *)(v5 + 32 * ((unsigned __int64)(unsigned int)(a2 - v5) >> v6) + 26)
                  + 32 * ((unsigned __int64)(unsigned int)(a2 - v5) >> v6)) >> 5 << v6) != a2
      && (v8 & 0xCu) < 8 )
    {
      v7 = 0LL;
    }
  }
  else
  {
    v7 = 0LL;
  }
  return RtlpHpSegPageRangeCommit(
           a1,
           v7,
           ((_DWORD)a2
          - (unsigned int)((v7 - (v7 & v3)) >> 5 << *(_BYTE *)(a1 + 8))
          - ((unsigned int)v7 & (unsigned int)v3)) >> 12,
           -(a3 >> 12),
           0,
           0LL);
}
