/*
 * XREFs of MiFlushZeroPageHeatBatch @ 0x14046B9E4
 * Callers:
 *     MiZeroThreadContextPrepareToWait @ 0x14020EEC4 (MiZeroThreadContextPrepareToWait.c)
 *     MiBackgroundZeroLocalPages @ 0x14020F1F0 (MiBackgroundZeroLocalPages.c)
 * Callees:
 *     MiSetZeroPageThreadPriority @ 0x14020EE0C (MiSetZeroPageThreadPriority.c)
 *     MiIssuePageHeatList @ 0x14044059C (MiIssuePageHeatList.c)
 */

__int64 __fastcall MiFlushZeroPageHeatBatch(__int64 a1)
{
  __int64 result; // rax
  unsigned int v3; // ebx

  result = *(_QWORD *)(a1 + 672);
  if ( result )
  {
    if ( *(_DWORD *)(result + 4) )
    {
      v3 = MiSetZeroPageThreadPriority(a1, 1LL, 0);
      MiIssuePageHeatList(*(_QWORD *)(a1 + 672));
      return MiSetZeroPageThreadPriority(a1, v3, 0);
    }
  }
  return result;
}
