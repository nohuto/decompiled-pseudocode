/*
 * XREFs of CiSchedulerRemoveDeadline @ 0x140001730
 * Callers:
 *     CiSchedulerCancelTaskIndexYield @ 0x140001800 (CiSchedulerCancelTaskIndexYield.c)
 *     CiSchedulerThreadFunction @ 0x1400018F0 (CiSchedulerThreadFunction.c)
 *     CiSchedulerRemoveTaskIndex @ 0x140003D50 (CiSchedulerRemoveTaskIndex.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CiSchedulerRemoveDeadline(__int64 a1)
{
  bool v2; // zf
  __int64 result; // rax

  if ( *(_QWORD *)(a1 + 24) )
  {
    v2 = *(_BYTE *)(a1 + 36) == 0;
    *(_QWORD *)(a1 + 24) = 0LL;
    if ( !v2 )
      *(_BYTE *)(a1 + 36) = 0;
    result = RtlRbRemoveNode(&WPP_MAIN_CB.SectorSize, a1);
    if ( CiSchedulerTimerNode == a1 )
      CiSchedulerTimerNode = 2LL;
  }
  return result;
}
