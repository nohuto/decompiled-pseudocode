/*
 * XREFs of KiUpdateStibpPairing @ 0x1403DFC10
 * Callers:
 *     KiUpdateSpeculationControl @ 0x1403DEE10 (KiUpdateSpeculationControl.c)
 *     KePrepareToDispatchVirtualProcessor @ 0x14043CDE0 (KePrepareToDispatchVirtualProcessor.c)
 *     KiCopyCounters @ 0x1405BC880 (KiCopyCounters.c)
 *     NtContinueEx @ 0x1406AB390 (NtContinueEx.c)
 *     NtRaiseException @ 0x1406AB820 (NtRaiseException.c)
 *     KiRestoreSetContextState @ 0x1406ABF60 (KiRestoreSetContextState.c)
 *     KxStartUserThread @ 0x1406AD110 (KxStartUserThread.c)
 *     KiChainedDispatch @ 0x1406AD740 (KiChainedDispatch.c)
 *     KiInterruptDispatch @ 0x1406ADDF0 (KiInterruptDispatch.c)
 *     KiInterruptDispatchNoLock @ 0x1406AE1D0 (KiInterruptDispatchNoLock.c)
 *     KiInterruptDispatchNoLockNoEtw @ 0x1406AE5B0 (KiInterruptDispatchNoLockNoEtw.c)
 *     KiInterruptDispatchNoEOI @ 0x1406AE990 (KiInterruptDispatchNoEOI.c)
 *     KiSpuriousDispatchNoEOI @ 0x1406AED60 (KiSpuriousDispatchNoEOI.c)
 *     KxIsrLinkage @ 0x1406AF940 (KxIsrLinkage.c)
 *     KiApcInterrupt @ 0x1406B00E0 (KiApcInterrupt.c)
 *     KiHvInterruptDispatch @ 0x1406B1A10 (KiHvInterruptDispatch.c)
 *     KiVmbusInterruptDispatch @ 0x1406B1E00 (KiVmbusInterruptDispatch.c)
 *     KiSwInterrupt @ 0x1406B2330 (KiSwInterrupt.c)
 *     KiDpcInterrupt @ 0x1406B2A80 (KiDpcInterrupt.c)
 *     KiIpiInterrupt @ 0x1406B31E0 (KiIpiInterrupt.c)
 *     NtCallEnclave @ 0x1406B4E60 (NtCallEnclave.c)
 *     KiBoundFault @ 0x1406B8340 (KiBoundFault.c)
 *     KiInvalidOpcodeFault @ 0x1406B8A40 (KiInvalidOpcodeFault.c)
 *     KiPageFault @ 0x1406BAA40 (KiPageFault.c)
 *     KxMcheckAlternateReturn @ 0x1406BC100 (KxMcheckAlternateReturn.c)
 *     KiVirtualizationException @ 0x1406BCC00 (KiVirtualizationException.c)
 *     KiControlProtectionFault @ 0x1406BD340 (KiControlProtectionFault.c)
 *     KiSystemCall64 @ 0x1406BED40 (KiSystemCall64.c)
 *     KiExceptionDispatch @ 0x1406BFC00 (KiExceptionDispatch.c)
 *     KiFastFailDispatch @ 0x1406C0140 (KiFastFailDispatch.c)
 * Callees:
 *     KiFlushCurrentRsb @ 0x1406C0840 (KiFlushCurrentRsb.c)
 */

__int64 __fastcall KiUpdateStibpPairing(_KPROCESS *Process, int a2, __int64 a3, int a4)
{
  struct _KPRCB *CurrentPrcb; // rbx
  unsigned int v5; // edi
  int v6; // r12d
  int v7; // ebp
  int v8; // esi
  int v9; // r11d
  __int64 v10; // r15
  _KPRCB *PairPrcb; // r14
  int v12; // eax
  int v13; // r13d
  int v14; // esi
  _KPRCB_BPB_STATE v15; // ax
  signed __int16 PairRegister; // ax
  signed __int16 v17; // tt
  signed __int16 v18; // r10
  __int64 TrappedSecurityDomain; // rax
  int v20; // r9d
  signed __int16 v21; // ax
  volatile signed __int16 *p_PairRegister; // rdx
  unsigned __int16 BpbKernelSpecCtrl; // dx
  signed __int16 v25; // dx
  __int16 v26; // cx
  signed __int16 v27; // cx
  signed __int16 v28; // tt
  signed __int16 v29; // ax
  signed __int16 v30; // tt
  signed __int16 v31; // ax
  volatile signed __int16 v32; // tt
  int v33; // [rsp+50h] [rbp+8h]

  CurrentPrcb = KeGetCurrentPrcb();
  v5 = 0;
  v6 = 0;
  v7 = 1;
  if ( !Process )
  {
    v7 = 0;
    Process = KeGetCurrentThread()->Process;
  }
  v8 = HIDWORD(Process[3].ActiveGroupsMask.Masks[1]);
  v9 = 0;
  v10 = *(_QWORD *)&Process[4].ProcessLock;
  PairPrcb = CurrentPrcb->PairPrcb;
  v12 = v8 & 0x400000;
  v33 = 0;
  v13 = v8 & 0x800000;
  v14 = v8 & 0xC00000;
  if ( v7 )
  {
    if ( v12 && CurrentPrcb->TrappedSecurityDomain )
    {
      __writemsr(0x49u, 1uLL);
      if ( (KiSpeculationFeatures & 8) == 0 )
      {
        KiFlushCurrentRsb(73, 0, 1, a4);
        CurrentPrcb->BpbState.AllFlags &= ~0x20u;
        CurrentPrcb->BpbTrappedBpbState.AllFlags &= ~0x40u;
      }
      CurrentPrcb->BpbState.AllFlags &= ~4u;
      _InterlockedOr16(&PairPrcb->PairRegister, 0x20u);
      CurrentPrcb->TrappedSecurityDomain = v10;
      CurrentPrcb->BpbRetpolineState.AllFlags |= 2u;
      v6 = 1;
      CurrentPrcb->BpbTrappedBpbState.AllFlags &= ~0x10u;
      v9 = 1;
      v33 = 1;
    }
  }
  else
  {
    if ( v10 != CurrentPrcb->TrappedSecurityDomain )
    {
      _InterlockedOr16(&PairPrcb->PairRegister, 0x20u);
      CurrentPrcb->TrappedSecurityDomain = v10;
      v6 = 1;
      CurrentPrcb->BpbState.AllFlags |= 4u;
      if ( (KiSpeculationFeatures & 8) == 0 )
        CurrentPrcb->BpbState.AllFlags |= 0x20u;
    }
    v15.0 = ($D0BDAFF3B03FD62472FDEF8CE1200EC8)CurrentPrcb->BpbState;
    if ( (*(_BYTE *)&v15.0 & 4) != 0 )
    {
      a2 = 0;
      LODWORD(Process) = 73;
      __writemsr(0x49u, 1uLL);
      CurrentPrcb->BpbState.AllFlags &= ~4u;
      v15.0 = ($D0BDAFF3B03FD62472FDEF8CE1200EC8)CurrentPrcb->BpbState;
    }
    if ( (*(_BYTE *)&v15.0 & 0x20) != 0 )
    {
      KiFlushCurrentRsb((_DWORD)Process, a2, 1, a4);
      v9 = 0;
      CurrentPrcb->BpbState.AllFlags &= ~0x20u;
    }
  }
  if ( v14 == 0x400000 )
  {
    _m_prefetchw(&CurrentPrcb->PrcbPad12a[2]);
    PairRegister = CurrentPrcb->PairRegister;
    if ( v7 )
    {
      do
      {
        v28 = PairRegister;
        PairRegister = _InterlockedCompareExchange16(&CurrentPrcb->PairRegister, PairRegister & 0xFEFD, PairRegister);
      }
      while ( v28 != PairRegister );
    }
    else
    {
      do
      {
        v17 = PairRegister;
        PairRegister = _InterlockedCompareExchange16(&CurrentPrcb->PairRegister, PairRegister & 0xFEFD, PairRegister);
      }
      while ( v17 != PairRegister );
    }
    LOBYTE(v18) = PairRegister;
  }
  else
  {
    if ( v13 )
    {
      v18 = CurrentPrcb->PairRegister;
    }
    else
    {
      do
      {
        v31 = CurrentPrcb->PairRegister;
        v18 = v31 & 0xFEFD | 2;
      }
      while ( v31 != _InterlockedCompareExchange16(&CurrentPrcb->PairRegister, v18, v31) );
    }
    v10 = 2LL;
  }
  TrappedSecurityDomain = PairPrcb->TrappedSecurityDomain;
  v20 = 0;
  if ( !TrappedSecurityDomain && (v18 & 0x10) != 0 )
  {
    TrappedSecurityDomain = 1LL;
    _InterlockedOr16(&CurrentPrcb->PairRegister, 2u);
  }
  if ( v10 == TrappedSecurityDomain || (v18 & 8) != 0 )
  {
    do
    {
      v25 = PairPrcb->PairRegister;
      v26 = 17;
      if ( !v10 )
        v26 = 1;
      v27 = PairPrcb->PairRegister & 0xFFEF | v26;
      if ( (v18 & 1) == 0 )
        v27 |= 2u;
    }
    while ( (v27 & 0x100) == 0 && v27 != v25 && v25 != _InterlockedCompareExchange16(&PairPrcb->PairRegister, v27, v25) );
    v9 = v33;
    if ( (v25 & 0x100) != 0 )
    {
      TrappedSecurityDomain = 1LL;
    }
    else
    {
      TrappedSecurityDomain = PairPrcb->TrappedSecurityDomain;
      if ( !TrappedSecurityDomain && (v18 & 0x10) != 0 )
      {
        TrappedSecurityDomain = 1LL;
        _InterlockedOr16(&CurrentPrcb->PairRegister, 2u);
      }
    }
  }
  if ( TrappedSecurityDomain != v10 && (v18 & 8) == 0 || v13 || TrappedSecurityDomain == 1 )
  {
    do
      v21 = PairPrcb->PairRegister;
    while ( (((unsigned __int8)v21 | (unsigned __int8)v18) & 1) != 0
         && v21 != _InterlockedCompareExchange16(&PairPrcb->PairRegister, v21 & 0xFFEC | 2, v21) );
    CurrentPrcb->BpbUserSpecCtrl |= 2u;
    if ( (KiSpeculationFeatures & 0x20000000000LL) != 0 )
      CurrentPrcb->BpbKernelSpecCtrl |= 2u;
  }
  else
  {
    CurrentPrcb->BpbUserSpecCtrl &= ~2u;
    if ( (KiSpeculationFeatures & 0x20000000000LL) != 0 )
      CurrentPrcb->BpbKernelSpecCtrl &= ~2u;
    v20 = 1;
  }
  p_PairRegister = &PairPrcb->PairRegister;
  if ( v6 )
  {
    do
      v32 = *p_PairRegister;
    while ( v32 != _InterlockedCompareExchange16(p_PairRegister, *p_PairRegister & 0xFFDD | 2, *p_PairRegister) );
  }
  if ( !v20 )
  {
    if ( v13 )
    {
      _m_prefetchw(&CurrentPrcb->PrcbPad12a[2]);
      v29 = CurrentPrcb->PairRegister;
      do
      {
        v30 = v29;
        v29 = _InterlockedCompareExchange16(&CurrentPrcb->PairRegister, v29 | 0x100, v29);
      }
      while ( v30 != v29 );
      if ( (v29 & 1) != 0 && v7 )
        v5 = 1;
    }
  }
  BpbKernelSpecCtrl = CurrentPrcb->BpbKernelSpecCtrl;
  if ( (KiSpeculationFeatures & 0x20000000000LL) != 0 )
    BpbKernelSpecCtrl = CurrentPrcb->BpbRetpolineExitSpecCtrl;
  if ( !v10 )
  {
    if ( (v18 & 0x10) == 0 )
    {
      BpbKernelSpecCtrl &= 0xFFFCu;
      CurrentPrcb->BpbRetpolineExitSpecCtrl = BpbKernelSpecCtrl;
      if ( (KiSpeculationFeatures & 0x20000000000LL) != 0 )
        CurrentPrcb->BpbKernelSpecCtrl &= ~2u;
      else
        CurrentPrcb->BpbKernelSpecCtrl = BpbKernelSpecCtrl;
      CurrentPrcb->BpbUserSpecCtrl &= ~2u;
      goto LABEL_42;
    }
    BpbKernelSpecCtrl = BpbKernelSpecCtrl & 0xFFFC | 2;
    goto LABEL_75;
  }
  if ( (BpbKernelSpecCtrl & 3) == 0 )
  {
    BpbKernelSpecCtrl = BpbKernelSpecCtrl & 0xFFFC | 1;
    CurrentPrcb->BpbRetpolineExitSpecCtrl = BpbKernelSpecCtrl;
    if ( (KiSpeculationFeatures & 0x20000000000LL) == 0 )
LABEL_75:
      CurrentPrcb->BpbKernelSpecCtrl = BpbKernelSpecCtrl;
  }
LABEL_42:
  if ( v9 )
  {
    CurrentPrcb->BpbTrappedRetpolineExitSpecCtrl = BpbKernelSpecCtrl;
    CurrentPrcb->BpbTrappedBpbState.AllFlags &= ~0x10u;
  }
  return v5;
}
