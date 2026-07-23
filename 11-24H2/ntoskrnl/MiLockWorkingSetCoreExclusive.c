/*
 * XREFs of MiLockWorkingSetCoreExclusive @ 0x140296038
 * Callers:
 *     MiLogPageAccess @ 0x140296B90 (MiLogPageAccess.c)
 *     MiSetVaAgeList @ 0x140304F30 (MiSetVaAgeList.c)
 *     MiDrainOldAccessBuffers @ 0x14045F56C (MiDrainOldAccessBuffers.c)
 *     MiDrainSystemAccessLog @ 0x140462A14 (MiDrainSystemAccessLog.c)
 *     MmQuerySystemWorkingSetInformation @ 0x14046A3B0 (MmQuerySystemWorkingSetInformation.c)
 *     MmAdjustWorkingSetSizeEx @ 0x14046C954 (MmAdjustWorkingSetSizeEx.c)
 *     MiCopyWorkingSetFields @ 0x14066AFB4 (MiCopyWorkingSetFields.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x1403368E0 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x1403369B0 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 */

char __fastcall MiLockWorkingSetCoreExclusive(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  volatile signed __int32 *v4; // rbx
  unsigned int v5; // eax
  unsigned int v6; // edi
  __int64 v7; // rdx
  unsigned __int64 v8; // rcx

  v4 = (volatile signed __int32 *)&unk_140E388C0;
  LOBYTE(v5) = *(_DWORD *)(a1 + 184) & 0xF;
  if ( (_BYTE)v5 != 1 )
    v4 = (volatile signed __int32 *)(a1 + 256);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || (LOBYTE(v5) = PopHibernateInProgress, PopHibernateInProgress) )
  {
    v6 = 0;
    if ( _interlockedbittestandset(v4, 0x1Fu) )
    {
      LOBYTE(a2) = -1;
      v5 = ExpWaitForSpinLockExclusiveAndAcquire(v4, a2);
      v6 = v5;
    }
    v7 = *(unsigned int *)v4;
    v8 = v7 & 0xFFFFFFFFBFFFFFFFuLL;
    if ( (v7 & 0xBFFFFFFF) != 0x80000000 )
    {
      do
      {
        if ( (v7 & 0x40000000) == 0 )
          _InterlockedOr(v4, 0x40000000u);
        if ( (++v6 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v8, v7, a3, a4) )
        {
          HvlNotifyLongSpinWait(v6);
        }
        else
        {
          _mm_pause();
        }
        v7 = *(unsigned int *)v4;
        v5 = *v4 & 0xBFFFFFFF;
      }
      while ( v5 != 0x80000000 );
    }
  }
  else
  {
    LOBYTE(a2) = -1;
    LOBYTE(v5) = ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v4, a2);
  }
  return v5;
}
