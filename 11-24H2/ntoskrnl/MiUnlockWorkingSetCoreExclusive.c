/*
 * XREFs of MiUnlockWorkingSetCoreExclusive @ 0x140296808
 * Callers:
 *     MiLogPageAccess @ 0x140296B90 (MiLogPageAccess.c)
 *     MiSetVaAgeList @ 0x140304F30 (MiSetVaAgeList.c)
 *     MiDrainOldAccessBuffers @ 0x14045F56C (MiDrainOldAccessBuffers.c)
 *     MiDrainSystemAccessLog @ 0x140462A14 (MiDrainSystemAccessLog.c)
 *     MmQuerySystemWorkingSetInformation @ 0x14046A3B0 (MmQuerySystemWorkingSetInformation.c)
 *     MmAdjustWorkingSetSizeEx @ 0x14046C954 (MmAdjustWorkingSetSizeEx.c)
 *     MiCopyWorkingSetFields @ 0x14066AFB4 (MiCopyWorkingSetFields.c)
 * Callees:
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x1402E6E94 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

char __fastcall MiUnlockWorkingSetCoreExclusive(__int64 a1)
{
  char result; // al
  _DWORD *v2; // rcx
  void *retaddr; // [rsp+28h] [rbp+0h]

  result = *(_DWORD *)(a1 + 184) & 0xF;
  if ( result == 1 )
    v2 = &unk_140E388C0;
  else
    v2 = (_DWORD *)(a1 + 256);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    result = PopHibernateInProgress;
    if ( !PopHibernateInProgress )
      return ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v2, retaddr);
  }
  *v2 = 0;
  return result;
}
