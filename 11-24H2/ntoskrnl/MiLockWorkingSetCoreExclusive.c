/*
 * XREFs of MiLockWorkingSetCoreExclusive @ 0x140379CE4
 * Callers:
 *     MiSetVaAgeList @ 0x140230FB0 (MiSetVaAgeList.c)
 *     MiLogPageAccess @ 0x140286F90 (MiLogPageAccess.c)
 *     MiDrainOldAccessBuffers @ 0x1403799CC (MiDrainOldAccessBuffers.c)
 *     MmAdjustWorkingSetSizeEx @ 0x1403CD164 (MmAdjustWorkingSetSizeEx.c)
 *     MiDrainSystemAccessLog @ 0x140469AF0 (MiDrainSystemAccessLog.c)
 *     MmQuerySystemWorkingSetInformation @ 0x14046FF88 (MmQuerySystemWorkingSetInformation.c)
 *     MiCopyWorkingSetFields @ 0x140669DE4 (MiCopyWorkingSetFields.c)
 * Callees:
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14020D580 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x14020D650 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     HvlNotifyLongSpinWait @ 0x140293260 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140293290 (KiCheckVpBackingLongSpinWaitHypercall.c)
 */

void __fastcall MiLockWorkingSetCoreExclusive(__int64 a1, __int64 a2, __int64 a3)
{
  int *v3; // rbx
  unsigned int v4; // edi
  int i; // edx

  v3 = (int *)&unk_140E38780;
  if ( (*(_DWORD *)(a1 + 184) & 0xF) != 1 )
    v3 = (int *)(a1 + 256);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
  {
    v4 = 0;
    if ( _interlockedbittestandset(v3, 0x1Fu) )
      v4 = ExpWaitForSpinLockExclusiveAndAcquire(v3, 0xFFu, a3);
    for ( i = *v3; (*v3 & 0xBFFFFFFF) != 0x80000000; i = *v3 )
    {
      if ( (i & 0x40000000) == 0 )
        _InterlockedOr(v3, 0x40000000u);
      if ( (++v4 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && KiCheckVpBackingLongSpinWaitHypercall() )
      {
        HvlNotifyLongSpinWait(v4);
      }
      else
      {
        _mm_pause();
      }
    }
  }
  else
  {
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v3, 0xFFu);
  }
}
