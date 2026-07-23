/*
 * XREFs of KiSoftParkElectionDpcRoutine @ 0x1403298E0
 * Callers:
 *     <none>
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiProcessDeferredReadyList @ 0x1402C5F60 (KiProcessDeferredReadyList.c)
 *     KiFlushSoftwareInterruptBatch @ 0x1402C8860 (KiFlushSoftwareInterruptBatch.c)
 *     KiShouldSoftParkElectionBePerformed @ 0x140329AA0 (KiShouldSoftParkElectionBePerformed.c)
 *     KiSoftParkElectionUnparkProcessor @ 0x140329B04 (KiSoftParkElectionUnparkProcessor.c)
 *     KiPerformSoftParkElection @ 0x140329D84 (KiPerformSoftParkElection.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140338DA0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403394D0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

void __fastcall KiSoftParkElectionDpcRoutine(__int64 a1, __int64 a2)
{
  struct _KPRCB *CurrentPrcb; // rsi
  __int64 v4; // r14
  unsigned int v5; // edi
  unsigned __int64 v6; // rdi
  unsigned __int64 v7; // rcx
  _QWORD *v8; // [rsp+20h] [rbp-28h] BYREF

  v8 = 0LL;
  CurrentPrcb = KeGetCurrentPrcb();
  v4 = *(_QWORD *)(KiProcessorBlock[*((unsigned int *)qword_140F22998
                                    + 64 * (unsigned __int64)*(unsigned __int16 *)(a2 + 710)
                                    + *(unsigned __int8 *)(a2 + 705))]
                 + 192);
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v4 + 120));
  v5 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a2 + 768), 0LL) )
  {
    do
    {
      if ( (++v5 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && KiCheckVpBackingLongSpinWaitHypercall() )
      {
        HvlNotifyLongSpinWait(v5);
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
    && (v6 = KiPerformSoftParkElection(v4, a2),
        ++*(_QWORD *)(a2 + 776),
        *(_DWORD *)(a2 + 784) = 0,
        *(_QWORD *)(a2 + 792) = 0LL,
        *(_QWORD *)(a2 + 1760) = 0LL,
        memset_0((void *)(a2 + 864), 0, 0x380uLL),
        v6) )
  {
    _InterlockedAnd64((volatile signed __int64 *)(a2 + 768), 0LL);
    do
    {
      _BitScanForward64(&v7, v6);
      v6 &= ~(1LL << v7);
      KiSoftParkElectionUnparkProcessor(CurrentPrcb);
    }
    while ( v6 );
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v4 + 120));
    KiFlushSoftwareInterruptBatch((char *)&CurrentPrcb->DeferredDispatchInterrupts);
    KiProcessDeferredReadyList(CurrentPrcb, &v8, 2u);
  }
  else
  {
    _InterlockedAnd64((volatile signed __int64 *)(a2 + 768), 0LL);
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v4 + 120));
  }
}
