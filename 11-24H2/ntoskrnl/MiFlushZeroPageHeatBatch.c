/*
 * XREFs of MiFlushZeroPageHeatBatch @ 0x140469FF0
 * Callers:
 *     MiZeroThreadContextPrepareToWait @ 0x14020A440 (MiZeroThreadContextPrepareToWait.c)
 *     MiBackgroundZeroLocalPages @ 0x14020A480 (MiBackgroundZeroLocalPages.c)
 * Callees:
 *     MiSetZeroPageThreadPriority @ 0x14020A388 (MiSetZeroPageThreadPriority.c)
 *     MiIssuePageHeatList @ 0x14043F9FC (MiIssuePageHeatList.c)
 */

__int64 __fastcall MiFlushZeroPageHeatBatch(__int64 a1)
{
  __int64 result; // rax
  unsigned int v3; // ebx
  unsigned __int64 v4; // rdx

  result = *(_QWORD *)(a1 + 672);
  if ( result )
  {
    if ( *(_DWORD *)(result + 4) )
    {
      v3 = MiSetZeroPageThreadPriority(a1, 1LL, 0LL);
      MiIssuePageHeatList(*(_DWORD **)(a1 + 672), v4);
      return MiSetZeroPageThreadPriority(a1, v3, 0LL);
    }
  }
  return result;
}
