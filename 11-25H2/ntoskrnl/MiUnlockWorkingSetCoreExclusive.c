/*
 * XREFs of MiUnlockWorkingSetCoreExclusive @ 0x14037F48C
 * Callers:
 *     MiSetVaAgeList @ 0x140249BE0 (MiSetVaAgeList.c)
 *     MiLogPageAccess @ 0x1403806A0 (MiLogPageAccess.c)
 *     MmQuerySystemWorkingSetInformation @ 0x1403C22D8 (MmQuerySystemWorkingSetInformation.c)
 *     MiDrainOldAccessBuffers @ 0x1403C37E8 (MiDrainOldAccessBuffers.c)
 *     MiDrainSystemAccessLog @ 0x1403C3E1C (MiDrainSystemAccessLog.c)
 *     MmAdjustWorkingSetSizeEx @ 0x1403C5254 (MmAdjustWorkingSetSizeEx.c)
 *     MiCopyWorkingSetFields @ 0x14065E2C4 (MiCopyWorkingSetFields.c)
 * Callees:
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x1403A2D94 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

char __fastcall MiUnlockWorkingSetCoreExclusive(__int64 a1)
{
  char result; // al
  _DWORD *v2; // rcx
  void *retaddr; // [rsp+28h] [rbp+0h]

  result = *(_DWORD *)(a1 + 184) & 0xF;
  if ( result == 1 )
    v2 = &unk_140E38540;
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
