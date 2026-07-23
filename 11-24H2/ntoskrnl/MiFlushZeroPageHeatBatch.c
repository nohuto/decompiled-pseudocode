/*
 * XREFs of MiFlushZeroPageHeatBatch @ 0x140462F20
 * Callers:
 *     MiZeroThreadContextPrepareToWait @ 0x140331A20 (MiZeroThreadContextPrepareToWait.c)
 *     MiBackgroundZeroLocalPages @ 0x140332260 (MiBackgroundZeroLocalPages.c)
 * Callees:
 *     MiSetZeroPageThreadPriority @ 0x140331968 (MiSetZeroPageThreadPriority.c)
 *     MiIssuePageHeatList @ 0x140435CBC (MiIssuePageHeatList.c)
 */

__int64 __fastcall MiFlushZeroPageHeatBatch(__int64 a1)
{
  __int64 result; // rax
  int v3; // ebx

  result = *(_QWORD *)(a1 + 672);
  if ( result )
  {
    if ( *(_DWORD *)(result + 4) )
    {
      v3 = MiSetZeroPageThreadPriority(a1, 1, 0);
      MiIssuePageHeatList(*(_QWORD *)(a1 + 672));
      return MiSetZeroPageThreadPriority(a1, v3, 0);
    }
  }
  return result;
}
