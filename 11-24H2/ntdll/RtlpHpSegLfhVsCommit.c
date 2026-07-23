/*
 * XREFs of RtlpHpSegLfhVsCommit @ 0x1800DB380
 * Callers:
 *     RtlpHpVsSubsegmentCommitPages @ 0x180064D78 (RtlpHpVsSubsegmentCommitPages.c)
 *     RtlpHpLfhSubsegmentReformatAsSingle @ 0x1800DB0C4 (RtlpHpLfhSubsegmentReformatAsSingle.c)
 * Callees:
 *     RtlpHpSegPageRangeCommit @ 0x18006C560 (RtlpHpSegPageRangeCommit.c)
 */

__int64 __fastcall RtlpHpSegLfhVsCommit(__int64 a1, __int64 a2, unsigned int a3, _DWORD *a4)
{
  __int64 v4; // rdi
  __int64 v5; // r10
  __int64 v6; // r10
  char v11; // cl
  unsigned __int64 v12; // rdx
  __int64 v13; // rdx
  char v14; // r9
  __int64 result; // rax
  int v16; // [rsp+50h] [rbp+18h] BYREF

  v4 = *(_QWORD *)a1;
  v5 = *(_QWORD *)a1;
  v16 = 0;
  v6 = a2 & v5;
  if ( (v6 ^ RtlpHpHeapGlobals ^ *(_QWORD *)(v6 + 16)) != a1
    || (v11 = *(_BYTE *)(a1 + 8),
        v12 = v6 + 32 * ((unsigned __int64)(unsigned int)(a2 - v6) >> v11),
        v13 = -32LL * *(unsigned __int8 *)(v12 + 26) + v12,
        v14 = *(_BYTE *)(v13 + 24),
        (v14 & 3) != 3)
    || v6 + ((v13 - v6) >> 5 << v11) != a2 && (v14 & 0xCu) < 8 )
  {
    v13 = 0LL;
  }
  result = RtlpHpSegPageRangeCommit(
             a1,
             v13,
             ((_DWORD)a2
            - (unsigned int)((v13 - (v13 & v4)) >> 5 << *(_BYTE *)(a1 + 8))
            - ((unsigned int)v13 & (unsigned int)v4)) >> 12,
             a3 >> 12,
             0,
             &v16);
  if ( (int)result >= 0 )
  {
    if ( a4 )
      *a4 = v16 << 12;
  }
  return result;
}
