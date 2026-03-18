/*
 * XREFs of PspSetJobLimitsProcessCallback @ 0x1408E80D0
 * Callers:
 *     <none>
 * Callees:
 *     PspAddProcessToWorkingSetChangeList @ 0x1407773B8 (PspAddProcessToWorkingSetChangeList.c)
 *     PspApplyJobLimitsToProcess @ 0x1408E7EF8 (PspApplyJobLimitsToProcess.c)
 */

__int64 __fastcall PspSetJobLimitsProcessCallback(struct _KPROCESS *Object, __int64 a2)
{
  if ( (Object[1].DirectoryTableBase & 1) == 0 )
  {
    PspApplyJobLimitsToProcess(Object, *(_DWORD *)(a2 + 8));
    if ( (*(_DWORD *)(a2 + 8) & 1) == 0 && *(_QWORD *)a2 != Object[1].Padding[3] )
      PspAddProcessToWorkingSetChangeList(Object);
  }
  return 0LL;
}
