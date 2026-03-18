/*
 * XREFs of KiSynchronizeUserIsolationDomainExit @ 0x140429DB0
 * Callers:
 *     KyStartUserThread @ 0x1406A0B40 (KyStartUserThread.c)
 *     KxIsrLinkage @ 0x1406A36D0 (KxIsrLinkage.c)
 *     KiApcInterrupt @ 0x1406A3E70 (KiApcInterrupt.c)
 *     KiHvInterrupt @ 0x1406A4670 (KiHvInterrupt.c)
 *     KiVmbusInterrupt0 @ 0x1406A49E0 (KiVmbusInterrupt0.c)
 *     KiVmbusInterrupt1 @ 0x1406A4D50 (KiVmbusInterrupt1.c)
 *     KiVmbusInterrupt2 @ 0x1406A50C0 (KiVmbusInterrupt2.c)
 *     KiVmbusInterrupt3 @ 0x1406A5430 (KiVmbusInterrupt3.c)
 *     KiSwInterrupt @ 0x1406A60C0 (KiSwInterrupt.c)
 *     KiDpcInterrupt @ 0x1406A6810 (KiDpcInterrupt.c)
 *     KiIpiInterrupt @ 0x1406A6F70 (KiIpiInterrupt.c)
 *     KiDivideErrorFault @ 0x1406AAB00 (KiDivideErrorFault.c)
 *     KxDebugTrapOrFault @ 0x1406AB040 (KxDebugTrapOrFault.c)
 *     KiBreakpointTrap @ 0x1406ABA40 (KiBreakpointTrap.c)
 *     KiOverflowTrap @ 0x1406ABDC0 (KiOverflowTrap.c)
 *     KiBoundFault @ 0x1406AC140 (KiBoundFault.c)
 *     KiInvalidOpcodeFault @ 0x1406AC840 (KiInvalidOpcodeFault.c)
 *     KiNpxNotAvailableFault @ 0x1406ACF00 (KiNpxNotAvailableFault.c)
 *     KiDoubleFaultAbort @ 0x1406AD2C0 (KiDoubleFaultAbort.c)
 *     KiNpxSegmentOverrunAbort @ 0x1406AD640 (KiNpxSegmentOverrunAbort.c)
 *     KiInvalidTssFault @ 0x1406AD9C0 (KiInvalidTssFault.c)
 *     KiSegmentNotPresentFault @ 0x1406ADD40 (KiSegmentNotPresentFault.c)
 *     KiStackFault @ 0x1406AE140 (KiStackFault.c)
 *     KiGeneralProtectionFault @ 0x1406AE4C0 (KiGeneralProtectionFault.c)
 *     KiPageFault @ 0x1406AE840 (KiPageFault.c)
 *     KiFloatingErrorFault @ 0x1406AF040 (KiFloatingErrorFault.c)
 *     KiAlignmentFault @ 0x1406AF440 (KiAlignmentFault.c)
 *     KxMcheckAlternateReturn @ 0x1406AFF00 (KxMcheckAlternateReturn.c)
 *     KiXmmException @ 0x1406B0600 (KiXmmException.c)
 *     KiVirtualizationException @ 0x1406B0A00 (KiVirtualizationException.c)
 *     KiControlProtectionFault @ 0x1406B1140 (KiControlProtectionFault.c)
 *     KiRaiseSecurityCheckFailure @ 0x1406B18C0 (KiRaiseSecurityCheckFailure.c)
 *     KiRaiseAssertion @ 0x1406B1C40 (KiRaiseAssertion.c)
 *     KiDebugServiceTrap @ 0x1406B1FC0 (KiDebugServiceTrap.c)
 *     KiSystemCall32 @ 0x1406B2600 (KiSystemCall32.c)
 *     KiSystemCall64 @ 0x1406B2B40 (KiSystemCall64.c)
 *     KiSystemCall32Shadow @ 0x140BABE40 (KiSystemCall32Shadow.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x1403F49C0 (KeYieldProcessorEx.c)
 *     KiSendSoftwareInterrupt @ 0x14041E140 (KiSendSoftwareInterrupt.c)
 */

struct _KPRCB *KiSynchronizeUserIsolationDomainExit()
{
  struct _KPRCB *result; // rax
  __int64 CoreControlBlockIndex; // rdi
  _KCORE_CONTROL_BLOCK_SHADOW *CoreControlBlockShadow; // rbx
  unsigned int v3; // esi
  int v4; // edx
  int v5; // ecx
  int v6; // [rsp+30h] [rbp+8h] BYREF

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
              KiSendSoftwareInterrupt(CoreControlBlockShadow->InterruptTargets[v3], 1);
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
