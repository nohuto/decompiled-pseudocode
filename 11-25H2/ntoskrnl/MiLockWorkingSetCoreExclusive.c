/*
 * XREFs of MiLockWorkingSetCoreExclusive @ 0x1403C3B04
 * Callers:
 *     MiSetVaAgeList @ 0x140249BE0 (MiSetVaAgeList.c)
 *     MiLogPageAccess @ 0x1403806A0 (MiLogPageAccess.c)
 *     MmQuerySystemWorkingSetInformation @ 0x1403C22D8 (MmQuerySystemWorkingSetInformation.c)
 *     MiDrainOldAccessBuffers @ 0x1403C37E8 (MiDrainOldAccessBuffers.c)
 *     MiDrainSystemAccessLog @ 0x1403C3E1C (MiDrainSystemAccessLog.c)
 *     MmAdjustWorkingSetSizeEx @ 0x1403C5254 (MmAdjustWorkingSetSizeEx.c)
 *     MiCopyWorkingSetFields @ 0x14065E2C4 (MiCopyWorkingSetFields.c)
 * Callees:
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x1402120E0 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x1402121B0 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 */

void __fastcall MiLockWorkingSetCoreExclusive(__int64 a1)
{
  int *v1; // rbx
  int v2; // edi
  int i; // edx

  v1 = (int *)&unk_140E38540;
  if ( (*(_DWORD *)(a1 + 184) & 0xF) != 1 )
    v1 = (int *)(a1 + 256);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
  {
    v2 = 0;
    if ( _interlockedbittestandset(v1, 0x1Fu) )
      v2 = ExpWaitForSpinLockExclusiveAndAcquire(v1, 0xFFu);
    for ( i = *v1; (*v1 & 0xBFFFFFFF) != 0x80000000; i = *v1 )
    {
      if ( (i & 0x40000000) == 0 )
        _InterlockedOr(v1, 0x40000000u);
      if ( (++v2 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && KiCheckVpBackingLongSpinWaitHypercall() )
      {
        HvlNotifyLongSpinWait();
      }
      else
      {
        _mm_pause();
      }
    }
  }
  else
  {
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v1, 0xFFu);
  }
}
