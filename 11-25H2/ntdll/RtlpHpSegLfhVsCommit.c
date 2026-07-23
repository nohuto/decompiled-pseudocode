/*
 * XREFs of RtlpHpSegLfhVsCommit @ 0x180009F80
 * Callers:
 *     RtlpHpVsSubsegmentCommitPages @ 0x18000ADD8 (RtlpHpVsSubsegmentCommitPages.c)
 *     RtlpHpLfhSubsegmentReformatAsSingle @ 0x1800333AC (RtlpHpLfhSubsegmentReformatAsSingle.c)
 * Callees:
 *     RtlpHpSegPageRangeCommit @ 0x1800125C0 (RtlpHpSegPageRangeCommit.c)
 */

__int64 __fastcall RtlpHpSegLfhVsCommit(int a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  __int64 result; // rax
  int v6; // [rsp+50h] [rbp+18h] BYREF

  v6 = 0;
  result = RtlpHpSegPageRangeCommit(a1, 0, (__int64)&v6);
  if ( (int)result >= 0 )
  {
    if ( a4 )
      *a4 = v6 << 12;
  }
  return result;
}
