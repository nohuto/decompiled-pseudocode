/*
 * XREFs of RtlpHpSegLfhVsCommit @ 0x1402B92D0
 * Callers:
 *     RtlpHpLfhSubsegmentCreate @ 0x1402B52CC (RtlpHpLfhSubsegmentCreate.c)
 *     RtlpHpLfhSubsegmentCommitBlock @ 0x1402B9010 (RtlpHpLfhSubsegmentCommitBlock.c)
 *     RtlpHpVsChunkSplit @ 0x1402BF1C0 (RtlpHpVsChunkSplit.c)
 *     RtlpHpVsSubsegmentCreate @ 0x1402C03D4 (RtlpHpVsSubsegmentCreate.c)
 *     RtlpHpVsSubsegmentCommitPages @ 0x1402C08BC (RtlpHpVsSubsegmentCommitPages.c)
 *     RtlpHpLfhSubsegmentReformatAsSingle @ 0x140459378 (RtlpHpLfhSubsegmentReformatAsSingle.c)
 * Callees:
 *     RtlpHpSegPageRangeCommit @ 0x1402C1C30 (RtlpHpSegPageRangeCommit.c)
 */

__int64 __fastcall RtlpHpSegLfhVsCommit(__int64 *a1, __int64 a2, unsigned int a3, _DWORD *a4)
{
  __int64 v4; // rsi
  __int64 *v6; // rbx
  __int64 v7; // r11
  char v8; // cl
  unsigned __int64 v9; // r10
  unsigned __int64 v10; // r10
  __int64 result; // rax
  int v12; // [rsp+50h] [rbp+18h] BYREF

  v12 = 0;
  v4 = *a1;
  v6 = a1;
  v7 = a2 & *a1;
  if ( (__int64 *)(v7 ^ RtlpHpHeapGlobals ^ *(_QWORD *)(v7 + 0x10)) != a1 )
    goto LABEL_6;
  v8 = *((_BYTE *)a1 + 8);
  v9 = v7 + 32 * ((unsigned __int64)(unsigned int)(a2 - v7) >> v8);
  v10 = -32LL * *(unsigned __int8 *)(v9 + 26) + v9;
  if ( (*(_BYTE *)(v10 + 24) & 3) != 3
    || v7 + ((__int64)(v10 - v7) >> 5 << v8) != a2 && (*(_BYTE *)(v10 + 24) & 0xCu) < 8 )
  {
    a1 = v6;
LABEL_6:
    v10 = 0LL;
    goto LABEL_7;
  }
  a1 = v6;
LABEL_7:
  result = RtlpHpSegPageRangeCommit(
             (_DWORD)v6,
             v10,
             ((_DWORD)a2
            - (unsigned int)((__int64)(v10 - (v10 & v4)) >> 5 << *((_BYTE *)a1 + 8))
            - ((unsigned int)v10 & (unsigned int)v4)) >> 12,
             a3 >> 12,
             0,
             (__int64)&v12);
  if ( (int)result >= 0 )
  {
    if ( a4 )
      *a4 = v12 << 12;
  }
  return result;
}
