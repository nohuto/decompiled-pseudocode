/*
 * XREFs of KiOptimizeSpecCtrlSettingsWorker @ 0x1405BA330
 * Callers:
 *     <none>
 * Callees:
 *     KeWakeAddressAll @ 0x14028A700 (KeWakeAddressAll.c)
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KeGetPrcb @ 0x1403B0CC0 (KeGetPrcb.c)
 *     KiUpdateSpeculationControl @ 0x1403E3170 (KiUpdateSpeculationControl.c)
 *     KeExitRetpoline @ 0x14046112C (KeExitRetpoline.c)
 *     KiSetMicrocodeUpdateOptions @ 0x1404F700C (KiSetMicrocodeUpdateOptions.c)
 *     KiHaltOnAddress @ 0x1404F7BE4 (KiHaltOnAddress.c)
 *     KeCanUseHaltOnAddress @ 0x1404F81B0 (KeCanUseHaltOnAddress.c)
 *     KiSetVirtualMitigationControl @ 0x1404F8FAC (KiSetVirtualMitigationControl.c)
 *     HvlIsCoreSharingPossible @ 0x14057F018 (HvlIsCoreSharingPossible.c)
 *     HvlIsStibpPairingRecommended @ 0x14057F164 (HvlIsStibpPairingRecommended.c)
 *     Feature_DisableEarlyIbpbOptimizationOnAmd__private_IsEnabledDeviceUsageNoInline @ 0x1405B9508 (Feature_DisableEarlyIbpbOptimizationOnAmd__private_IsEnabledDeviceUsageNoInline.c)
 *     KiDetectAmdNonArchSsbdSupport @ 0x1405B98E0 (KiDetectAmdNonArchSsbdSupport.c)
 *     KiIsBranchConfusionMitigationDesired @ 0x1405BA020 (KiIsBranchConfusionMitigationDesired.c)
 *     KiIsBranchConfusionMitigationSupported @ 0x1405BA060 (KiIsBranchConfusionMitigationSupported.c)
 *     KiIsBranchConfusionPresent @ 0x1405BA08C (KiIsBranchConfusionPresent.c)
 *     KiIsSrsoMitigationDesired @ 0x1405BA1DC (KiIsSrsoMitigationDesired.c)
 *     KiIsTsaMitigationDesired @ 0x1405BA264 (KiIsTsaMitigationDesired.c)
 *     KiIsTsaMitigationSupported @ 0x1405BA280 (KiIsTsaMitigationSupported.c)
 */

ULONG_PTR __fastcall KiOptimizeSpecCtrlSettingsWorker(volatile signed __int32 *Argument)
{
  struct _KPRCB *CurrentPrcb; // rbx
  __int64 v3; // rdx
  unsigned __int64 v4; // rax
  signed __int32 v5; // eax
  unsigned int v6; // edi
  int v7; // r15d
  char v8; // r12
  signed __int32 v9; // ecx
  unsigned int v10; // eax
  signed __int32 v11; // edx
  signed __int32 v12; // r8d
  int v13; // r14d
  __int16 v14; // cx
  unsigned __int16 v15; // ax
  unsigned int v16; // eax
  __int64 v18; // rdx
  __int64 v19; // rcx
  signed __int32 v20; // eax
  unsigned int v21; // edi
  int v22; // r15d
  char v23; // r12
  unsigned int v24; // eax
  int v25; // r8d
  __int32 v26; // r14d
  unsigned __int32 v27; // eax
  int v28; // r8d
  __int64 v29; // rdx
  unsigned __int64 CoreProcessorSet; // rdx
  char v31; // cl
  unsigned __int64 v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rcx
  unsigned __int64 v35; // rax
  unsigned __int64 v36; // rax
  unsigned __int64 v37; // rax
  unsigned __int64 v38; // rax
  signed __int32 v39; // eax
  unsigned int v40; // edi
  int v41; // r14d
  char v42; // r12
  signed __int32 v43; // ecx
  unsigned int v44; // eax
  signed __int32 v45; // edx
  signed __int32 v46; // r8d
  int v47; // r15d
  unsigned __int16 BpbKernelSpecCtrl; // ax
  __int32 v49; // [rsp+80h] [rbp+48h] BYREF
  __int32 v50; // [rsp+88h] [rbp+50h] BYREF
  volatile signed __int32 v51; // [rsp+90h] [rbp+58h] BYREF
  int v52; // [rsp+98h] [rbp+60h]

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
  if ( (KiSpeculationFeatures & 0x800000) != 0 )
  {
    if ( (KiSpeculationFeatures & 0x1000000) == 0 )
    {
      v4 = 0x4000000000000LL;
LABEL_36:
      _InterlockedOr64((volatile signed __int64 *)&KiSpeculationFeatures, v4);
      goto LABEL_37;
    }
    if ( (KiFeatureSettings & 0x8000000) != 0 )
    {
      v4 = 0x2000000000000LL;
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
    v49 = 0;
    v5 = _InterlockedDecrement(Argument);
    v6 = ~v5 & 0x80000000;
    if ( (v5 & 0x3FFFFFFF) != 0 )
    {
      v7 = 0;
      v8 = 0;
      while ( (*Argument & 0x80000000) != v6 )
      {
        if ( (++v7 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && KiCheckVpBackingLongSpinWaitHypercall() )
        {
          ++v8;
          if ( KeCanUseHaltOnAddress() && (KiVelocityFlags & 0x20000) != 0 && (v8 & 7) == 0 )
          {
            v9 = *Argument;
            v10 = *Argument & 0x80000000;
            v49 = *Argument;
            if ( v10 != v6 )
            {
              v11 = v9;
              v12 = v9;
              do
              {
                v13 = v9 | 0x40000000;
                v9 = _InterlockedCompareExchange(Argument, v9 | 0x40000000, v11);
                if ( v9 == v12 )
                {
                  v49 = v13;
                  do
                  {
                    KiHaltOnAddress(Argument, &v49, 4LL);
                    v9 = *Argument;
                  }
                  while ( *Argument == v13 );
                }
                v49 = v9;
                v11 = v9;
                v12 = v9;
              }
              while ( (v9 & 0x80000000) != v6 );
            }
          }
          else
          {
            HvlNotifyLongSpinWait();
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
      v49 = _InterlockedExchange(Argument, *((_DWORD *)Argument + 1) | v6);
      if ( (v49 & 0x40000000) != 0 )
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
          CurrentPrcb->BpbFeatures.AllFlags = CurrentPrcb->BpbFeatures.AllFlags & 0xCF | (16
                                                                                        * (BYTE12(KiSpeculationFeatures) & 3));
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
        if ( (unsigned int)Feature_DisableEarlyIbpbOptimizationOnAmd__private_IsEnabledDeviceUsageNoInline()
          && CurrentPrcb->CpuVendor == 1 )
        {
          _InterlockedOr64((volatile signed __int64 *)&KiSpeculationFeatures, 0x100000000000000uLL);
        }
        if ( Argument )
        {
          v50 = 0;
          v20 = _InterlockedDecrement(Argument);
          v21 = ~v20 & 0x80000000;
          if ( (v20 & 0x3FFFFFFF) != 0 )
          {
            v22 = 0;
            v23 = 0;
            while ( (*Argument & 0x80000000) != v21 )
            {
              if ( (++v22 & HvlLongSpinCountMask) == 0
                && (HvlEnlightenments & 0x40) != 0
                && KiCheckVpBackingLongSpinWaitHypercall() )
              {
                ++v23;
                if ( KeCanUseHaltOnAddress() && (KiVelocityFlags & 0x20000) != 0 && (v23 & 7) == 0 )
                {
                  v19 = *(unsigned int *)Argument;
                  v24 = *Argument & 0x80000000;
                  v50 = *Argument;
                  if ( v24 != v21 )
                  {
                    LODWORD(v18) = v19;
                    v25 = v19;
                    do
                    {
                      v26 = v19 | 0x40000000;
                      v27 = _InterlockedCompareExchange(Argument, v19 | 0x40000000, v18);
                      v19 = v27;
                      if ( v27 == v25 )
                      {
                        v50 = v26;
                        do
                        {
                          KiHaltOnAddress(Argument, &v50, 4LL);
                          v19 = *(unsigned int *)Argument;
                        }
                        while ( (_DWORD)v19 == v26 );
                      }
                      v50 = v19;
                      v18 = (unsigned int)v19;
                      v25 = v19;
                    }
                    while ( (v19 & 0x80000000) != v21 );
                  }
                }
                else
                {
                  HvlNotifyLongSpinWait();
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
            v50 = _InterlockedExchange(Argument, *((_DWORD *)Argument + 1) | v21);
            if ( (v50 & 0x40000000) != 0 )
              KeWakeAddressAll((unsigned __int64)Argument, v18);
          }
        }
        if ( (KiSpeculationFeatures & 0x20000000000LL) != 0 )
        {
          CurrentPrcb->BpbRetpolineState.AllFlags |= 4u;
          KeExitRetpoline(v19, v18);
        }
        if ( (KiSpeculationFeatures & 2) != 0
          && (KiSpeculationFeatures & 0x4000) == 0
          && !HvlHypervisorConnected
          && ((KiSpeculationFeatures & 0x10) != 0 || (KiSpeculationFeatures & 0x40) != 0) )
        {
          _InterlockedOr64((volatile signed __int64 *)&KiSpeculationFeatures, 0x200000000uLL);
          CurrentPrcb->BpbFeatures.AllFlags |= 1u;
        }
        v28 = 0;
        if ( (KiSpeculationFeatures & 2) != 0
          && (KiSpeculationFeatures & 0x40) != 0
          && (KiSpeculationFeatures & 0x10) != 0 )
        {
          v29 = 0x10000000000LL;
          if ( (KiSpeculationFeatures & 0x4000) != 0 || (KiSpeculationFeatures & 0x10000000000LL) != 0 )
            goto LABEL_151;
          CoreProcessorSet = CurrentPrcb->CoreProcessorSet;
          if ( (unsigned int)__popcnt(CoreProcessorSet) == 2
            && (!HvlHypervisorConnected
             || !HvlIsCoreSharingPossible()
             || (HvlpFlags & 2) != 0 && HvlIsStibpPairingRecommended()) )
          {
            v31 = CurrentPrcb->GroupIndex + 1;
            _BitScanForward64(&v32, __ROR8__(CoreProcessorSet, v31));
            v52 = v32;
            CurrentPrcb->PairPrcb = (_KPRCB *)KeGetPrcb(*((_DWORD *)qword_140F216A8
                                                        + 64 * CurrentPrcb->Group
                                                        + (((_BYTE)v32 + v31) & 0x3Fu)));
            v28 = 1;
            CurrentPrcb->PairRegister = 6;
          }
        }
        v29 = 0x10000000000LL;
LABEL_151:
        if ( (KiFeatureSettings & 0x20) != 0 && (KiSpeculationFeatures & 2) != 0 && (KiSpeculationFeatures & 0x40) != 0
          || (KiSpeculationFeatures & 2) != 0
          && (KiSpeculationFeatures & 0x40) != 0
          && !v28
          && (KiSpeculationFeatures & 0x10000000000LL) == 0
          && HvlHypervisorConnected
          && HvlIsCoreSharingPossible() )
        {
          _InterlockedOr64((volatile signed __int64 *)&KiSpeculationFeatures, 0x100000000uLL);
        }
        if ( (KiSpeculationFeatures & 2) != 0
          && (KiSpeculationFeatures & 0x40) != 0
          && (KiSpeculationFeatures & 0x4000) != 0
          && !v28
          && ((unsigned __int64)KiSpeculationFeatures & v29) == 0 )
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
            if ( KiIsBranchConfusionMitigationSupported(v34, &KiSpeculationFeatures) )
              goto LABEL_177;
            v35 = 0x200000000000LL;
          }
          else
          {
            v35 = 0x100000000000LL;
          }
          _InterlockedOr64((volatile signed __int64 *)&KiSpeculationFeatures, v35);
        }
LABEL_177:
        if ( (KiSpeculationFeatures & 0x8000000) == 0 )
          goto LABEL_184;
        if ( (unsigned int)KiIsTsaMitigationDesired() )
        {
          if ( KiIsTsaMitigationSupported((__int64)CurrentPrcb) )
          {
            CurrentPrcb->BpbFeatures.AllFlags |= 0x40u;
LABEL_184:
            if ( (KiSpeculationFeatures & 0x10000) == 0 )
              goto LABEL_193;
            if ( (KiFeatureSettings & 0x800000) != 0 )
            {
              if ( BYTE12(KiSpeculationFeatures) )
              {
                _InterlockedOr64((volatile signed __int64 *)&KiSpeculationFeatures, 0x80000000000000uLL);
                CurrentPrcb->BpbFeatures.AllFlags = CurrentPrcb->BpbFeatures.AllFlags & 0xCF | (16
                                                                                              * (BYTE12(KiSpeculationFeatures) & 3));
                goto LABEL_193;
              }
              if ( (KiSpeculationFeatures & 0x20000) != 0 )
              {
                _InterlockedOr64((volatile signed __int64 *)&KiSpeculationFeatures, 0x40000000000000uLL);
                CurrentPrcb->BpbKernelSpecCtrl |= 0x400u;
                CurrentPrcb->BpbRetpolineExitSpecCtrl |= 0x400u;
                CurrentPrcb->BpbUserSpecCtrl |= 0x400u;
                CurrentPrcb->BpbNmiSpecCtrl |= 0x400u;
                goto LABEL_193;
              }
              v37 = 0x20000000000000LL;
            }
            else
            {
              v37 = 0x10000000000000LL;
            }
            _InterlockedOr64((volatile signed __int64 *)&KiSpeculationFeatures, v37);
LABEL_193:
            if ( (KiSpeculationFeatures & 0x200000) != 0 )
            {
              if ( (KiSpeculationFeatures & 4) == 0 )
              {
                v38 = 0x1000000000000LL;
LABEL_198:
                _InterlockedOr64((volatile signed __int64 *)&KiSpeculationFeatures, v38);
                goto LABEL_199;
              }
              if ( !(unsigned int)KiIsSrsoMitigationDesired((__int64)CurrentPrcb, &KiSpeculationFeatures) )
              {
                v38 = 0x800000000000LL;
                goto LABEL_198;
              }
            }
LABEL_199:
            if ( Argument )
            {
              v39 = _InterlockedDecrement(Argument);
              v40 = ~v39 & 0x80000000;
              if ( (v39 & 0x3FFFFFFF) != 0 )
              {
                v41 = 0;
                v42 = 0;
                while ( (*Argument & 0x80000000) != v40 )
                {
                  if ( (++v41 & HvlLongSpinCountMask) == 0
                    && (HvlEnlightenments & 0x40) != 0
                    && KiCheckVpBackingLongSpinWaitHypercall() )
                  {
                    ++v42;
                    if ( KeCanUseHaltOnAddress() && (KiVelocityFlags & 0x20000) != 0 && (v42 & 7) == 0 )
                    {
                      v43 = *Argument;
                      v44 = *Argument & 0x80000000;
                      v51 = *Argument;
                      if ( v44 != v40 )
                      {
                        v45 = v43;
                        v46 = v43;
                        do
                        {
                          v47 = v43 | 0x40000000;
                          v43 = _InterlockedCompareExchange(Argument, v43 | 0x40000000, v45);
                          if ( v43 == v46 )
                          {
                            v51 = v47;
                            do
                            {
                              KiHaltOnAddress(Argument, &v51, 4LL);
                              v43 = *Argument;
                            }
                            while ( *Argument == v47 );
                          }
                          v51 = v43;
                          v45 = v43;
                          v46 = v43;
                        }
                        while ( (v43 & 0x80000000) != v40 );
                      }
                    }
                    else
                    {
                      HvlNotifyLongSpinWait();
                    }
                  }
                  else
                  {
                    _mm_pause();
                  }
                }
              }
              else if ( (_InterlockedExchange(Argument, *((_DWORD *)Argument + 1) | v40) & 0x40000000) != 0 )
              {
                KeWakeAddressAll((unsigned __int64)Argument, v33);
              }
            }
            KiUpdateSpeculationControl((__int64)KeGetCurrentThread()->ApcState.Process);
            goto LABEL_87;
          }
          v36 = 0x400000000000000LL;
        }
        else
        {
          v36 = 0x200000000000000LL;
        }
        _InterlockedOr64((volatile signed __int64 *)&KiSpeculationFeatures, v36);
        goto LABEL_184;
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
