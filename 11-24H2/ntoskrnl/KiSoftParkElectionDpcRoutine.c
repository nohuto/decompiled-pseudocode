/*
 * XREFs of KiSoftParkElectionDpcRoutine @ 0x1402011F0
 * Callers:
 *     <none>
 * Callees:
 *     KiShouldSoftParkElectionBePerformed @ 0x1402013B0 (KiShouldSoftParkElectionBePerformed.c)
 *     KiSoftParkElectionUnparkProcessor @ 0x140201414 (KiSoftParkElectionUnparkProcessor.c)
 *     KiPerformSoftParkElection @ 0x140201694 (KiPerformSoftParkElection.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14020FA40 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140210170 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     HvlNotifyLongSpinWait @ 0x140293260 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140293290 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiProcessDeferredReadyList @ 0x14031D3D0 (KiProcessDeferredReadyList.c)
 *     KiFlushSoftwareInterruptBatch @ 0x14031FCD0 (KiFlushSoftwareInterruptBatch.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 */

void __fastcall KiSoftParkElectionDpcRoutine(__int64 a1, __int64 a2)
{
  struct _KPRCB *CurrentPrcb; // rsi
  __int64 v4; // r14
  __int64 v5; // rcx
  unsigned int v6; // edi
  unsigned __int64 v7; // rdi
  unsigned __int64 v8; // rcx

  CurrentPrcb = KeGetCurrentPrcb();
  v4 = *(_QWORD *)(KiProcessorBlock[*((unsigned int *)qword_140F21E78
                                    + 64 * (unsigned __int64)*(unsigned __int16 *)(a2 + 710)
                                    + *(unsigned __int8 *)(a2 + 705))]
                 + 192);
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v4 + 120));
  v6 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a2 + 768), 0LL) )
  {
    do
    {
      if ( (++v6 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v5) )
      {
        HvlNotifyLongSpinWait(v6);
      }
      else
      {
        _mm_pause();
      }
    }
    while ( *(_QWORD *)(a2 + 768) );
  }
  *(_BYTE *)(a2 + 788) = 0;
  if ( (unsigned __int8)KiShouldSoftParkElectionBePerformed(a2)
    && (v7 = KiPerformSoftParkElection(v4, a2),
        ++*(_QWORD *)(a2 + 776),
        *(_DWORD *)(a2 + 784) = 0,
        *(_QWORD *)(a2 + 792) = 0LL,
        *(_QWORD *)(a2 + 1760) = 0LL,
        memset_0((void *)(a2 + 864), 0, 0x380uLL),
        v7) )
  {
    _InterlockedAnd64((volatile signed __int64 *)(a2 + 768), 0LL);
    do
    {
      _BitScanForward64(&v8, v7);
      v7 &= ~(1LL << v8);
      KiSoftParkElectionUnparkProcessor(CurrentPrcb);
    }
    while ( v7 );
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v4 + 120));
    KiFlushSoftwareInterruptBatch(&CurrentPrcb->DeferredDispatchInterrupts);
    KiProcessDeferredReadyList(CurrentPrcb);
  }
  else
  {
    _InterlockedAnd64((volatile signed __int64 *)(a2 + 768), 0LL);
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v4 + 120));
  }
}
