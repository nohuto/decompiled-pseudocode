/*
 * XREFs of PspSetJobLimitsProcessCallback @ 0x1408D7DD0
 * Callers:
 *     <none>
 * Callees:
 *     PspAddProcessToWorkingSetChangeList @ 0x140767938 (PspAddProcessToWorkingSetChangeList.c)
 *     PspApplyJobLimitsToProcess @ 0x1408D8CC0 (PspApplyJobLimitsToProcess.c)
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
