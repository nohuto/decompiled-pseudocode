/*
 * XREFs of MiUnlockWorkingSetCoreExclusive @ 0x140379DAC
 * Callers:
 *     MiSetVaAgeList @ 0x140230FB0 (MiSetVaAgeList.c)
 *     MiLogPageAccess @ 0x140286F90 (MiLogPageAccess.c)
 *     MiDrainOldAccessBuffers @ 0x1403799CC (MiDrainOldAccessBuffers.c)
 *     MmAdjustWorkingSetSizeEx @ 0x1403CD164 (MmAdjustWorkingSetSizeEx.c)
 *     MiDrainSystemAccessLog @ 0x140469AF0 (MiDrainSystemAccessLog.c)
 *     MmQuerySystemWorkingSetInformation @ 0x14046FF88 (MmQuerySystemWorkingSetInformation.c)
 *     MiCopyWorkingSetFields @ 0x140669DE4 (MiCopyWorkingSetFields.c)
 * Callees:
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140379F24 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

char __fastcall MiUnlockWorkingSetCoreExclusive(__int64 a1)
{
  char result; // al
  _DWORD *v2; // rcx
  void *retaddr; // [rsp+28h] [rbp+0h]

  result = *(_DWORD *)(a1 + 184) & 0xF;
  if ( result == 1 )
    v2 = &unk_140E38780;
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
