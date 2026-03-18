/*
 * XREFs of KiSynchronizeUserIsolationDomainExit @ 0x14041B1F0
 * Callers:
 *     KyStartUserThread @ 0x1406ABE10 (KyStartUserThread.c)
 *     KxIsrLinkage @ 0x1406AE9A0 (KxIsrLinkage.c)
 *     KiApcInterrupt @ 0x1406AF140 (KiApcInterrupt.c)
 *     KiHvInterrupt @ 0x1406AF940 (KiHvInterrupt.c)
 *     KiVmbusInterrupt0 @ 0x1406AFCB0 (KiVmbusInterrupt0.c)
 *     KiVmbusInterrupt1 @ 0x1406B0020 (KiVmbusInterrupt1.c)
 *     KiVmbusInterrupt2 @ 0x1406B0390 (KiVmbusInterrupt2.c)
 *     KiVmbusInterrupt3 @ 0x1406B0700 (KiVmbusInterrupt3.c)
 *     KiSwInterrupt @ 0x1406B1390 (KiSwInterrupt.c)
 *     KiDpcInterrupt @ 0x1406B1AE0 (KiDpcInterrupt.c)
 *     KiIpiInterrupt @ 0x1406B2240 (KiIpiInterrupt.c)
 *     KiDivideErrorFault @ 0x1406B5E00 (KiDivideErrorFault.c)
 *     KxDebugTrapOrFault @ 0x1406B6340 (KxDebugTrapOrFault.c)
 *     KiBreakpointTrap @ 0x1406B6D40 (KiBreakpointTrap.c)
 *     KiOverflowTrap @ 0x1406B70C0 (KiOverflowTrap.c)
 *     KiBoundFault @ 0x1406B7440 (KiBoundFault.c)
 *     KiInvalidOpcodeFault @ 0x1406B7B40 (KiInvalidOpcodeFault.c)
 *     KiNpxNotAvailableFault @ 0x1406B8200 (KiNpxNotAvailableFault.c)
 *     KiDoubleFaultAbort @ 0x1406B85C0 (KiDoubleFaultAbort.c)
 *     KiNpxSegmentOverrunAbort @ 0x1406B8940 (KiNpxSegmentOverrunAbort.c)
 *     KiInvalidTssFault @ 0x1406B8CC0 (KiInvalidTssFault.c)
 *     KiSegmentNotPresentFault @ 0x1406B9040 (KiSegmentNotPresentFault.c)
 *     KiStackFault @ 0x1406B9440 (KiStackFault.c)
 *     KiGeneralProtectionFault @ 0x1406B97C0 (KiGeneralProtectionFault.c)
 *     KiPageFault @ 0x1406B9B40 (KiPageFault.c)
 *     KiFloatingErrorFault @ 0x1406BA340 (KiFloatingErrorFault.c)
 *     KiAlignmentFault @ 0x1406BA740 (KiAlignmentFault.c)
 *     KxMcheckAlternateReturn @ 0x1406BB200 (KxMcheckAlternateReturn.c)
 *     KiXmmException @ 0x1406BB900 (KiXmmException.c)
 *     KiVirtualizationException @ 0x1406BBD00 (KiVirtualizationException.c)
 *     KiControlProtectionFault @ 0x1406BC440 (KiControlProtectionFault.c)
 *     KiRaiseSecurityCheckFailure @ 0x1406BCBC0 (KiRaiseSecurityCheckFailure.c)
 *     KiRaiseAssertion @ 0x1406BCF40 (KiRaiseAssertion.c)
 *     KiDebugServiceTrap @ 0x1406BD2C0 (KiDebugServiceTrap.c)
 *     KiSystemCall32 @ 0x1406BD900 (KiSystemCall32.c)
 *     KiSystemCall64 @ 0x1406BDE40 (KiSystemCall64.c)
 *     KiSystemCall32Shadow @ 0x140BBCE40 (KiSystemCall32Shadow.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x1403F9C60 (KeYieldProcessorEx.c)
 *     KiSendSoftwareInterrupt @ 0x14041B640 (KiSendSoftwareInterrupt.c)
 */

struct _KPRCB *KiSynchronizeUserIsolationDomainExit()
{
  struct _KPRCB *result; // rax
  __int64 CoreControlBlockIndex; // rdi
  _KCORE_CONTROL_BLOCK_SHADOW *CoreControlBlockShadow; // rbx
  unsigned int v3; // esi
  __int64 v4; // rdx
  int v5; // ecx
  unsigned int v6; // [rsp+30h] [rbp+8h] BYREF

  result = KeGetCurrentPrcb();
  CoreControlBlockIndex = result->CoreControlBlockIndex;
  CoreControlBlockShadow = result->CoreControlBlock->CoreControlBlockShadow;
  if ( CoreControlBlockShadow->CurrentIsolationDomain )
  {
    v3 = 0;
    if ( CoreControlBlockShadow->TotalProcessors == 1 )
    {
      CoreControlBlockShadow->CurrentIsolationDomain = 0LL;
    }
    else
    {
      v6 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)CoreControlBlockShadow, 0LL) )
      {
        do
          KeYieldProcessorEx(&v6);
        while ( CoreControlBlockShadow->Lock );
      }
      if ( CoreControlBlockShadow->NextIsolationDomain == 1 )
        CoreControlBlockShadow->NextIsolationDomain = 0LL;
      v4 = (unsigned __int8)(CoreControlBlockShadow->NewDomainProcessors + 1);
      result = (struct _KPRCB *)CoreControlBlockShadow->TotalProcessors;
      v5 = v4 + CoreControlBlockShadow->IdleProcessors;
      CoreControlBlockShadow->NewDomainProcessors = v4;
      if ( (_DWORD)result == v5 )
      {
        CoreControlBlockShadow->CurrentIsolationDomain = 0LL;
        CoreControlBlockShadow->NewDomainProcessors = 0;
        CoreControlBlockShadow->NextIsolationDomain = 1LL;
        _InterlockedAnd64((volatile signed __int64 *)CoreControlBlockShadow, 0LL);
      }
      else
      {
        CoreControlBlockShadow->ProcessorStates[CoreControlBlockIndex].AllState = 2;
        _InterlockedAnd64((volatile signed __int64 *)CoreControlBlockShadow, 0LL);
        if ( CoreControlBlockShadow->TotalProcessors )
        {
          do
          {
            if ( (CoreControlBlockShadow->ProcessorStates[v3].AllState & 3) == 0 )
            {
              LOBYTE(v4) = 1;
              KiSendSoftwareInterrupt(LODWORD(CoreControlBlockShadow->InterruptTargets[v3]), v4);
            }
            ++v3;
          }
          while ( v3 < CoreControlBlockShadow->TotalProcessors );
        }
        for ( result = (struct _KPRCB *)CoreControlBlockShadow->CurrentIsolationDomain;
              result;
              result = (struct _KPRCB *)CoreControlBlockShadow->CurrentIsolationDomain )
        {
          _mm_pause();
        }
        CoreControlBlockShadow->ProcessorStates[CoreControlBlockIndex].AllState = 0;
      }
    }
  }
  return result;
}
