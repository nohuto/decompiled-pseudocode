/*
 * XREFs of KiOptimizeSpecCtrlSettingsWorker @ 0x1405BB7A0
 * Callers:
 *     <none>
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KeGetPrcb @ 0x1402B0A10 (KeGetPrcb.c)
 *     KeWakeAddressAll @ 0x1402CA630 (KeWakeAddressAll.c)
 *     KiUpdateSpeculationControl @ 0x1403DEE10 (KiUpdateSpeculationControl.c)
 *     KeExitRetpoline @ 0x14045517C (KeExitRetpoline.c)
 *     KiSetMicrocodeUpdateOptions @ 0x1404F70F0 (KiSetMicrocodeUpdateOptions.c)
 *     KiHaltOnAddress @ 0x1404F7B98 (KiHaltOnAddress.c)
 *     KeCanUseHaltOnAddress @ 0x1404F7F60 (KeCanUseHaltOnAddress.c)
 *     KiSetVirtualMitigationControl @ 0x1404F8F7C (KiSetVirtualMitigationControl.c)
 *     HvlIsCoreSharingPossible @ 0x14057FB48 (HvlIsCoreSharingPossible.c)
 *     HvlIsStibpPairingRecommended @ 0x14057FC94 (HvlIsStibpPairingRecommended.c)
 *     KiDetectAmdNonArchSsbdSupport @ 0x1405BAD5C (KiDetectAmdNonArchSsbdSupport.c)
 *     KiIsBranchConfusionMitigationDesired @ 0x1405BB49C (KiIsBranchConfusionMitigationDesired.c)
 *     KiIsBranchConfusionMitigationSupported @ 0x1405BB4DC (KiIsBranchConfusionMitigationSupported.c)
 *     KiIsBranchConfusionPresent @ 0x1405BB508 (KiIsBranchConfusionPresent.c)
 *     KiIsSrsoMitigationDesired @ 0x1405BB658 (KiIsSrsoMitigationDesired.c)
 *     KiIsTsaMitigationDesired @ 0x1405BB6E0 (KiIsTsaMitigationDesired.c)
 *     KiIsTsaMitigationSupported @ 0x1405BB6FC (KiIsTsaMitigationSupported.c)
 */

ULONG_PTR __fastcall KiOptimizeSpecCtrlSettingsWorker(volatile signed __int32 *Argument)
{
  struct _KPRCB *CurrentPrcb; // rbx
  __int64 v3; // rdx
  __int64 v4; // rcx
  unsigned __int64 v5; // rax
  signed __int32 v6; // eax
  unsigned int v7; // edi
  unsigned int v8; // r15d
  char v9; // r12
  unsigned int v10; // eax
  int v11; // r8d
  __int32 v12; // r14d
  unsigned __int32 v13; // eax
  __int16 v14; // cx
  unsigned __int16 v15; // ax
  unsigned int v16; // eax
  signed __int32 v18; // eax
  unsigned int v19; // edi
  unsigned int v20; // r15d
  char v21; // r12
  unsigned int v22; // eax
  int v23; // r8d
  __int32 v24; // r14d
  unsigned __int32 v25; // eax
  int v26; // r8d
  __int64 v27; // rdx
  unsigned __int64 CoreProcessorSet; // rdx
  char v29; // cl
  unsigned __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rcx
  unsigned __int64 v33; // rax
  unsigned __int64 v34; // rax
  unsigned __int64 v35; // rax
  unsigned __int64 v36; // rax
  signed __int32 v37; // eax
  unsigned int v38; // edi
  unsigned int v39; // r14d
  char v40; // r12
  signed __int32 v41; // ecx
  unsigned int v42; // eax
  signed __int32 v43; // edx
  signed __int32 v44; // r8d
  int v45; // r15d
  unsigned __int16 BpbKernelSpecCtrl; // ax
  __int32 v47; // [rsp+80h] [rbp+48h] BYREF
  __int32 v48; // [rsp+88h] [rbp+50h] BYREF
  volatile signed __int32 v49; // [rsp+90h] [rbp+58h] BYREF
  int v50; // [rsp+98h] [rbp+60h]

  CurrentPrcb = KeGetCurrentPrcb();
  if ( ((CurrentPrcb->CoreProcessorSet - 1) & CurrentPrcb->CoreProcessorSet) != 0 )
    _InterlockedOr64((volatile signed __int64 *)&KiSpeculationFeatures, 2uLL);
  if ( HvlHypervisorConnected && HvlIsCoreSharingPossible() )
    _InterlockedOr64((volatile signed __int64 *)&KiSpeculationFeatures, 2uLL);
  if ( (KiFeatureSettings & 0x80u) != 0 )
    _InterlockedOr64((volatile signed __int64 *)&KiSpeculationFeatures, 0x10000000000uLL);
  if ( CurrentPrcb->CpuVendor == 1 )
    KiDetectAmdNonArchSsbdSupport((__int64)CurrentPrcb, (__int64 *)&KiSpeculationFeatures);
  if ( (KiSpeculationFeatures & 0x80) != 0 && (KiSpeculationFeatures & 0x100) == 0 )
  {
    if ( (KiFeatureSettings & 8) != 0 )
      goto LABEL_16;
    if ( (KiFeatureSettings & 0x10) == 0 )
      goto LABEL_17;
    if ( KiSsbdMsr != 72 )
LABEL_16:
      _InterlockedOr64((volatile signed __int64 *)&KiSpeculationFeatures, 0x4000000000uLL);
    else
      _InterlockedOr64((volatile signed __int64 *)&KiSpeculationFeatures, 0x8000000000uLL);
  }
LABEL_17:
  v3 = 4LL;
  if ( (KiSpeculationFeatures & 4) == 0 )
    _InterlockedOr64((volatile signed __int64 *)&KiSpeculationFeatures, 0x800000000uLL);
  if ( (KiFeatureSettings & 4) != 0 )
  {
    _InterlockedOr64((volatile signed __int64 *)&KiSpeculationFeatures, 0x400000000uLL);
  }
  else if ( (KiFeatureSettings & 1) != 0 )
  {
    _InterlockedOr64((volatile signed __int64 *)&KiSpeculationFeatures, 0x400000000uLL);
    if ( HvlHypervisorConnected )
    {
      if ( (HvlpFlags & 2) != 0 && HvlIsCoreSharingPossible() && (KiSpeculationFeatures & 0x40) != 0 )
      {
        CurrentPrcb->BpbKernelSpecCtrl = 2;
        CurrentPrcb->BpbUserSpecCtrl = 2;
        CurrentPrcb->BpbRetpolineExitSpecCtrl = 2;
      }
    }
  }
  if ( (KiFeatureSettings & 0x2000000) != 0 )
    _InterlockedOr64((volatile signed __int64 *)&KiSpeculationFeatures, 0x400000000000uLL);
  v4 = 0x8000000000000LL;
  if ( (KiSpeculationFeatures & 0x800000) != 0 )
  {
    if ( (KiSpeculationFeatures & 0x1000000) == 0 )
    {
      v5 = 0x4000000000000LL;
LABEL_36:
      _InterlockedOr64((volatile signed __int64 *)&KiSpeculationFeatures, v5);
      goto LABEL_37;
    }
    if ( (KiFeatureSettings & 0x8000000) != 0 )
    {
      v5 = 0x2000000000000LL;
      goto LABEL_36;
    }
    if ( !KiKvaShadow )
      _InterlockedOr64((volatile signed __int64 *)&KiSpeculationFeatures, 0x8000000000000uLL);
  }
LABEL_37:
  if ( (KiSpeculationFeatures & 0x8000000000000LL) != 0 )
  {
    CurrentPrcb->BpbState.AllFlags |= 0x200u;
    CurrentPrcb->VerwSelector = 24;
  }
  if ( Argument )
  {
    v47 = 0;
    v6 = _InterlockedDecrement(Argument);
    v7 = ~v6 & 0x80000000;
    if ( (v6 & 0x3FFFFFFF) != 0 )
    {
      v8 = 0;
      v9 = 0;
      while ( (*Argument & 0x80000000) != v7 )
      {
        if ( (++v8 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && KiCheckVpBackingLongSpinWaitHypercall() )
        {
          ++v9;
          if ( KeCanUseHaltOnAddress() && (KiVelocityFlags & 0x20000) != 0 && (v9 & 7) == 0 )
          {
            v4 = *(unsigned int *)Argument;
            v10 = *Argument & 0x80000000;
            v47 = *Argument;
            if ( v10 != v7 )
            {
              LODWORD(v3) = v4;
              v11 = v4;
              do
              {
                v12 = v4 | 0x40000000;
                v13 = _InterlockedCompareExchange(Argument, v4 | 0x40000000, v3);
                v4 = v13;
                if ( v13 == v11 )
                {
                  v47 = v12;
                  do
                  {
                    KiHaltOnAddress(Argument, &v47, 4LL);
                    v4 = *(unsigned int *)Argument;
                  }
                  while ( (_DWORD)v4 == v12 );
                }
                v47 = v4;
                v3 = (unsigned int)v4;
                v11 = v4;
              }
              while ( (v4 & 0x80000000) != v7 );
            }
          }
          else
          {
            HvlNotifyLongSpinWait(v8);
          }
        }
        else
        {
          _mm_pause();
        }
      }
    }
    else
    {
      v47 = _InterlockedExchange(Argument, *((_DWORD *)Argument + 1) | v7);
      if ( (v47 & 0x40000000) != 0 )
        KeWakeAddressAll((unsigned __int64)Argument, v3);
    }
  }
  if ( (KiSpeculationFeatures & 0x400000000LL) != 0 || (KiSpeculationFeatures & 0x800000000LL) != 0 )
  {
    if ( (KiSpeculationFeatures & 0x8000000000LL) != 0 )
    {
      _InterlockedOr64((volatile signed __int64 *)&KiSpeculationFeatures, 0x4000000000uLL);
      _InterlockedAnd64((volatile signed __int64 *)&KiSpeculationFeatures, 0xFFFFFF7FFFFFFFFFuLL);
    }
    if ( (KiSpeculationFeatures & 0x4000000000LL) != 0 )
    {
      BpbKernelSpecCtrl = CurrentPrcb->BpbKernelSpecCtrl;
      if ( KiSsbdMsr == 72 )
        BpbKernelSpecCtrl |= 4u;
      CurrentPrcb->BpbKernelSpecCtrl = BpbKernelSpecCtrl;
      CurrentPrcb->BpbUserSpecCtrl = BpbKernelSpecCtrl;
    }
  }
  else
  {
    _InterlockedOr64((volatile signed __int64 *)&KiSpeculationFeatures, 0x1000000000uLL);
    CurrentPrcb->BpbFeatures.AllFlags |= 2u;
    if ( (KiSpeculationFeatures & 1) == 0 )
      goto LABEL_106;
    v14 = 1;
    if ( (KiSpeculationFeatures & 0x4000) != 0 )
      v14 = 3;
    CurrentPrcb->BpbKernelSpecCtrl = v14;
    CurrentPrcb->BpbUserSpecCtrl = v14;
    CurrentPrcb->BpbRetpolineExitSpecCtrl = v14;
    v4 = 0x4000000000LL;
    if ( (KiSpeculationFeatures & 0x4000000000LL) != 0 || (KiSpeculationFeatures & 0x8000000000LL) != 0 )
    {
      v15 = CurrentPrcb->BpbKernelSpecCtrl;
      if ( KiSsbdMsr == 72 )
        v15 |= 4u;
      CurrentPrcb->BpbKernelSpecCtrl = v15;
      CurrentPrcb->BpbUserSpecCtrl = v15;
      CurrentPrcb->BpbRetpolineExitSpecCtrl = v15;
    }
    CurrentPrcb->BpbNmiSpecCtrl = 1;
    if ( ((KiSpeculationFeatures & 0x4000000000LL) != 0 || (KiSpeculationFeatures & 0x8000000000LL) != 0)
      && KiSsbdMsr == 72 )
    {
      CurrentPrcb->BpbNmiSpecCtrl |= 4u;
    }
    if ( (KiSpeculationFeatures & 0x4000) != 0 )
      CurrentPrcb->BpbNmiSpecCtrl |= 2u;
    if ( (KiSpeculationFeatures & 0x2000) != 0 )
      CurrentPrcb->BpbNmiSpecCtrl |= 0x80u;
    if ( (KiSpeculationFeatures & 0x10000) != 0 )
    {
      if ( (KiFeatureSettings & 0x800000) != 0 )
      {
        if ( BYTE12(KiSpeculationFeatures) )
        {
          _InterlockedOr64((volatile signed __int64 *)&KiSpeculationFeatures, 0x80000000000000uLL);
          LOBYTE(v4) = CurrentPrcb->BpbFeatures.AllFlags & 0xCF | (16 * (BYTE12(KiSpeculationFeatures) & 3));
          CurrentPrcb->BpbFeatures.AllFlags = v4;
        }
        else if ( (KiSpeculationFeatures & 0x20000) != 0 )
        {
          _InterlockedOr64((volatile signed __int64 *)&KiSpeculationFeatures, 0x40000000000000uLL);
          CurrentPrcb->BpbKernelSpecCtrl |= 0x400u;
          CurrentPrcb->BpbRetpolineExitSpecCtrl |= 0x400u;
          CurrentPrcb->BpbUserSpecCtrl |= 0x400u;
          CurrentPrcb->BpbNmiSpecCtrl |= 0x400u;
        }
        else
        {
          _InterlockedOr64((volatile signed __int64 *)&KiSpeculationFeatures, 0x20000000000000uLL);
        }
      }
      else
      {
        _InterlockedOr64((volatile signed __int64 *)&KiSpeculationFeatures, 0x10000000000000uLL);
      }
    }
    if ( (KiSpeculationFeatures & 0x8000000000LL) != 0 )
    {
LABEL_106:
      if ( (KiSpeculationFeatures & 0x10) != 0 )
      {
        CurrentPrcb->BpbNmiSpecCtrl = 1;
      }
      else if ( (KiSpeculationFeatures & 0x40) != 0 && (KiSpeculationFeatures & 2) != 0 )
      {
        CurrentPrcb->BpbNmiSpecCtrl = 2;
      }
      if ( (KiSpeculationFeatures & 0x4000) != 0 )
        CurrentPrcb->BpbNmiSpecCtrl |= 2u;
      if ( (KiSpeculationFeatures & 0x2000) != 0 )
        CurrentPrcb->BpbNmiSpecCtrl |= 0x80u;
      if ( ((KiSpeculationFeatures & 0x4000000000LL) != 0 || (KiSpeculationFeatures & 0x8000000000LL) != 0)
        && KiSsbdMsr == 72 )
      {
        CurrentPrcb->BpbNmiSpecCtrl |= 4u;
      }
      if ( (KiSpeculationFeatures & 1) == 0 )
      {
        if ( CurrentPrcb->CpuVendor == 1 )
          _InterlockedOr64((volatile signed __int64 *)&KiSpeculationFeatures, 0x100000000000000uLL);
        if ( Argument )
        {
          v48 = 0;
          v18 = _InterlockedDecrement(Argument);
          v19 = ~v18 & 0x80000000;
          if ( (v18 & 0x3FFFFFFF) != 0 )
          {
            v20 = 0;
            v21 = 0;
            while ( (*Argument & 0x80000000) != v19 )
            {
              if ( (++v20 & HvlLongSpinCountMask) == 0
                && (HvlEnlightenments & 0x40) != 0
                && KiCheckVpBackingLongSpinWaitHypercall() )
              {
                ++v21;
                if ( KeCanUseHaltOnAddress() && (KiVelocityFlags & 0x20000) != 0 && (v21 & 7) == 0 )
                {
                  v4 = *(unsigned int *)Argument;
                  v22 = *Argument & 0x80000000;
                  v48 = *Argument;
                  if ( v22 != v19 )
                  {
                    LODWORD(v3) = v4;
                    v23 = v4;
                    do
                    {
                      v24 = v4 | 0x40000000;
                      v25 = _InterlockedCompareExchange(Argument, v4 | 0x40000000, v3);
                      v4 = v25;
                      if ( v25 == v23 )
                      {
                        v48 = v24;
                        do
                        {
                          KiHaltOnAddress(Argument, &v48, 4LL);
                          v4 = *(unsigned int *)Argument;
                        }
                        while ( (_DWORD)v4 == v24 );
                      }
                      v48 = v4;
                      v3 = (unsigned int)v4;
                      v23 = v4;
                    }
                    while ( (v4 & 0x80000000) != v19 );
                  }
                }
                else
                {
                  HvlNotifyLongSpinWait(v20);
                }
              }
              else
              {
                _mm_pause();
              }
            }
          }
          else
          {
            v48 = _InterlockedExchange(Argument, *((_DWORD *)Argument + 1) | v19);
            if ( (v48 & 0x40000000) != 0 )
              KeWakeAddressAll((unsigned __int64)Argument, v3);
          }
        }
        if ( (KiSpeculationFeatures & 0x20000000000LL) != 0 )
        {
          CurrentPrcb->BpbRetpolineState.AllFlags |= 4u;
          KeExitRetpoline(v4, v3);
        }
        if ( (KiSpeculationFeatures & 2) != 0
          && (KiSpeculationFeatures & 0x4000) == 0
          && !HvlHypervisorConnected
          && ((KiSpeculationFeatures & 0x10) != 0 || (KiSpeculationFeatures & 0x40) != 0) )
        {
          _InterlockedOr64((volatile signed __int64 *)&KiSpeculationFeatures, 0x200000000uLL);
          CurrentPrcb->BpbFeatures.AllFlags |= 1u;
        }
        v26 = 0;
        if ( (KiSpeculationFeatures & 2) != 0
          && (KiSpeculationFeatures & 0x40) != 0
          && (KiSpeculationFeatures & 0x10) != 0 )
        {
          v27 = 0x10000000000LL;
          if ( (KiSpeculationFeatures & 0x4000) != 0 || (KiSpeculationFeatures & 0x10000000000LL) != 0 )
            goto LABEL_150;
          CoreProcessorSet = CurrentPrcb->CoreProcessorSet;
          if ( (unsigned int)__popcnt(CoreProcessorSet) == 2
            && (!HvlHypervisorConnected
             || !HvlIsCoreSharingPossible()
             || (HvlpFlags & 2) != 0 && HvlIsStibpPairingRecommended()) )
          {
            v29 = CurrentPrcb->GroupIndex + 1;
            _BitScanForward64(&v30, __ROR8__(CoreProcessorSet, v29));
            v50 = v30;
            CurrentPrcb->PairPrcb = (_KPRCB *)KeGetPrcb(*((_DWORD *)qword_140F22998
                                                        + 64 * CurrentPrcb->Group
                                                        + (((_BYTE)v30 + v29) & 0x3Fu)));
            v26 = 1;
            CurrentPrcb->PairRegister = 6;
          }
        }
        v27 = 0x10000000000LL;
LABEL_150:
        if ( (KiFeatureSettings & 0x20) != 0 && (KiSpeculationFeatures & 2) != 0 && (KiSpeculationFeatures & 0x40) != 0
          || (KiSpeculationFeatures & 2) != 0
          && (KiSpeculationFeatures & 0x40) != 0
          && !v26
          && (KiSpeculationFeatures & 0x10000000000LL) == 0
          && HvlHypervisorConnected
          && HvlIsCoreSharingPossible() )
        {
          _InterlockedOr64((volatile signed __int64 *)&KiSpeculationFeatures, 0x100000000uLL);
        }
        if ( (KiSpeculationFeatures & 2) != 0
          && (KiSpeculationFeatures & 0x40) != 0
          && (KiSpeculationFeatures & 0x4000) != 0
          && !v26
          && ((unsigned __int64)KiSpeculationFeatures & v27) == 0 )
        {
          _InterlockedOr64((volatile signed __int64 *)&KiSpeculationFeatures, 0x80000000000uLL);
        }
        if ( CurrentPrcb->CpuVendor == 1 && (KiSpeculationFeatures & 0x10) == 0 && (KiFeatureSettings & 0x40) == 0 )
        {
          _InterlockedOr64((volatile signed __int64 *)&KiSpeculationFeatures, 0x2000000000uLL);
          goto LABEL_87;
        }
        if ( (unsigned int)KiIsBranchConfusionPresent((__int64)CurrentPrcb) )
        {
          _InterlockedOr64((volatile signed __int64 *)&KiSpeculationFeatures, 0x8000uLL);
          if ( (unsigned int)KiIsBranchConfusionMitigationDesired((__int64)CurrentPrcb, &KiSpeculationFeatures) )
          {
            if ( KiIsBranchConfusionMitigationSupported(v32, &KiSpeculationFeatures) )
              goto LABEL_176;
            v33 = 0x200000000000LL;
          }
          else
          {
            v33 = 0x100000000000LL;
          }
          _InterlockedOr64((volatile signed __int64 *)&KiSpeculationFeatures, v33);
        }
LABEL_176:
        if ( (KiSpeculationFeatures & 0x8000000) == 0 )
          goto LABEL_183;
        if ( (unsigned int)KiIsTsaMitigationDesired() )
        {
          if ( KiIsTsaMitigationSupported((__int64)CurrentPrcb) )
          {
            CurrentPrcb->BpbFeatures.AllFlags |= 0x40u;
LABEL_183:
            if ( (KiSpeculationFeatures & 0x10000) == 0 )
              goto LABEL_192;
            if ( (KiFeatureSettings & 0x800000) != 0 )
            {
              if ( BYTE12(KiSpeculationFeatures) )
              {
                _InterlockedOr64((volatile signed __int64 *)&KiSpeculationFeatures, 0x80000000000000uLL);
                CurrentPrcb->BpbFeatures.AllFlags = CurrentPrcb->BpbFeatures.AllFlags & 0xCF | (16
                                                                                              * (BYTE12(KiSpeculationFeatures) & 3));
                goto LABEL_192;
              }
              if ( (KiSpeculationFeatures & 0x20000) != 0 )
              {
                _InterlockedOr64((volatile signed __int64 *)&KiSpeculationFeatures, 0x40000000000000uLL);
                CurrentPrcb->BpbKernelSpecCtrl |= 0x400u;
                CurrentPrcb->BpbRetpolineExitSpecCtrl |= 0x400u;
                CurrentPrcb->BpbUserSpecCtrl |= 0x400u;
                CurrentPrcb->BpbNmiSpecCtrl |= 0x400u;
                goto LABEL_192;
              }
              v35 = 0x20000000000000LL;
            }
            else
            {
              v35 = 0x10000000000000LL;
            }
            _InterlockedOr64((volatile signed __int64 *)&KiSpeculationFeatures, v35);
LABEL_192:
            if ( (KiSpeculationFeatures & 0x200000) != 0 )
            {
              if ( (KiSpeculationFeatures & 4) == 0 )
              {
                v36 = 0x1000000000000LL;
LABEL_197:
                _InterlockedOr64((volatile signed __int64 *)&KiSpeculationFeatures, v36);
                goto LABEL_198;
              }
              if ( !(unsigned int)KiIsSrsoMitigationDesired((__int64)CurrentPrcb, &KiSpeculationFeatures) )
              {
                v36 = 0x800000000000LL;
                goto LABEL_197;
              }
            }
LABEL_198:
            if ( Argument )
            {
              v37 = _InterlockedDecrement(Argument);
              v38 = ~v37 & 0x80000000;
              if ( (v37 & 0x3FFFFFFF) != 0 )
              {
                v39 = 0;
                v40 = 0;
                while ( (*Argument & 0x80000000) != v38 )
                {
                  if ( (++v39 & HvlLongSpinCountMask) == 0
                    && (HvlEnlightenments & 0x40) != 0
                    && KiCheckVpBackingLongSpinWaitHypercall() )
                  {
                    ++v40;
                    if ( KeCanUseHaltOnAddress() && (KiVelocityFlags & 0x20000) != 0 && (v40 & 7) == 0 )
                    {
                      v41 = *Argument;
                      v42 = *Argument & 0x80000000;
                      v49 = *Argument;
                      if ( v42 != v38 )
                      {
                        v43 = v41;
                        v44 = v41;
                        do
                        {
                          v45 = v41 | 0x40000000;
                          v41 = _InterlockedCompareExchange(Argument, v41 | 0x40000000, v43);
                          if ( v41 == v44 )
                          {
                            v49 = v45;
                            do
                            {
                              KiHaltOnAddress(Argument, &v49, 4LL);
                              v41 = *Argument;
                            }
                            while ( *Argument == v45 );
                          }
                          v49 = v41;
                          v43 = v41;
                          v44 = v41;
                        }
                        while ( (v41 & 0x80000000) != v38 );
                      }
                    }
                    else
                    {
                      HvlNotifyLongSpinWait(v39);
                    }
                  }
                  else
                  {
                    _mm_pause();
                  }
                }
              }
              else if ( (_InterlockedExchange(Argument, *((_DWORD *)Argument + 1) | v38) & 0x40000000) != 0 )
              {
                KeWakeAddressAll((unsigned __int64)Argument, v31);
              }
            }
            KiUpdateSpeculationControl((__int64)KeGetCurrentThread()->ApcState.Process);
            goto LABEL_87;
          }
          v34 = 0x400000000000000LL;
        }
        else
        {
          v34 = 0x200000000000000LL;
        }
        _InterlockedOr64((volatile signed __int64 *)&KiSpeculationFeatures, v34);
        goto LABEL_183;
      }
    }
  }
LABEL_87:
  v16 = CurrentPrcb->BpbKernelSpecCtrl;
  CurrentPrcb->BpbCurrentSpecCtrl = v16;
  if ( (_WORD)v16 )
    __writemsr(0x48u, v16);
  if ( (KiSpeculationFeatures & 0x4000000000LL) != 0 && KiSsbdMsr != 72 )
    __writemsr(KiSsbdMsr, KiSsbdBit | __readmsr(KiSsbdMsr));
  KiSetMicrocodeUpdateOptions();
  KiSetVirtualMitigationControl((__int64)CurrentPrcb);
  return 0LL;
}
