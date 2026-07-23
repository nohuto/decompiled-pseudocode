/*
 * XREFs of PspSetJobLimitsProcessCallback @ 0x1408D7870
 * Callers:
 *     <none>
 * Callees:
 *     PspAddProcessToWorkingSetChangeList @ 0x1407775D8 (PspAddProcessToWorkingSetChangeList.c)
 *     PspApplyJobLimitsToProcess @ 0x1408D873C (PspApplyJobLimitsToProcess.c)
 */

__int64 __fastcall PspSetJobLimitsProcessCallback(struct _KPROCESS *Object, __int64 a2)
{
  if ( (Object[1].DirectoryTableBase & 1) == 0 )
  {
    PspApplyJobLimitsToProcess(Object);
    if ( (*(_DWORD *)(a2 + 8) & 1) == 0 && *(_QWORD *)a2 != Object[1].Padding[3] )
      PspAddProcessToWorkingSetChangeList(Object);
  }
  return 0LL;
}
