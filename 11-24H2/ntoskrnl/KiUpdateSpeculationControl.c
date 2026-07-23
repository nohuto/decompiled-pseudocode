/*
 * XREFs of KiUpdateSpeculationControl @ 0x1403DEE10
 * Callers:
 *     KiOptimizeSpecCtrlSettingsWorker @ 0x1405BB7A0 (KiOptimizeSpecCtrlSettingsWorker.c)
 *     SwapContext @ 0x1406B3AE0 (SwapContext.c)
 * Callees:
 *     KiRemoveSystemWorkPriorityKick @ 0x14028EA18 (KiRemoveSystemWorkPriorityKick.c)
 *     KiIpiSendRequest @ 0x1402A24D0 (KiIpiSendRequest.c)
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiUpdateSpecCtrlEnhancedIBRS @ 0x1403DFA00 (KiUpdateSpecCtrlEnhancedIBRS.c)
 *     KiUpdateStibpPairing @ 0x1403DFC10 (KiUpdateStibpPairing.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     KiFlushCurrentRsb @ 0x1406C0840 (KiFlushCurrentRsb.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int16 __fastcall KiUpdateSpeculationControl(__int64 a1)
{
  _KPRCB *v1; // rax
  struct _KPRCB *CurrentPrcb; // rsi
  __int64 v4; // r12
  unsigned __int16 BpbCurrentSpecCtrl; // dx
  char v6; // r13
  __int64 v7; // r9
  unsigned int v8; // ebx
  __int16 v9; // r10
  _WORD *p_BpbKernelSpecCtrl; // r14
  unsigned __int16 *p_BpbRetpolineExitSpecCtrl; // rax
  __int16 v12; // r8
  __int64 v13; // r8
  unsigned __int64 TrappedSecurityDomain; // r11
  char v15; // r10
  unsigned __int16 v16; // dx
  BOOL v17; // r9d
  unsigned __int16 v18; // cx
  unsigned __int16 v19; // dx
  __int64 v20; // r8
  unsigned __int16 v21; // di
  int updated; // r14d
  unsigned __int16 v23; // r9
  struct _KPRCB *v24; // rcx
  _DWORD *SchedulerAssist; // r8
  struct _KPRCB *v26; // rcx
  _DWORD *v27; // r8
  signed __int16 PairRegister; // ax
  signed __int16 v29; // tt
  unsigned __int8 CurrentIrql; // r14
  _KPRCB *PairPrcb; // rdi
  unsigned int v32; // r8d
  __int64 v33; // rcx
  __int64 *v34; // rdx
  __int64 v35; // rcx
  int v36; // ett
  _KPRCB_BPB_STATE v37; // ax
  bool v38; // zf
  unsigned __int16 v39; // cx
  bool v40; // cf
  int v41; // ett
  __int16 v42; // ax
  _KPRCB_BPB_STATE v43; // ax
  _KPRCB_BPB_STATE v44; // ax
  _KPRCB_BPB_STATE v45; // ax
  unsigned __int16 BpbRetpolineExitSpecCtrl; // ax
  bool v48; // [rsp+30h] [rbp-D0h]
  unsigned __int16 v49; // [rsp+32h] [rbp-CEh]
  _WORD *v50; // [rsp+38h] [rbp-C8h]
  int v51; // [rsp+44h] [rbp-BCh]
  int v52; // [rsp+48h] [rbp-B8h]
  __int64 v53; // [rsp+50h] [rbp-B0h]
  unsigned __int64 v54; // [rsp+68h] [rbp-98h]
  __int128 v55; // [rsp+70h] [rbp-90h] BYREF
  __int64 v56; // [rsp+80h] [rbp-80h]
  __int64 (__fastcall *v57)(); // [rsp+88h] [rbp-78h]
  __int64 v58; // [rsp+90h] [rbp-70h] BYREF
  _QWORD v59[33]; // [rsp+98h] [rbp-68h] BYREF

  LOWORD(v1) = 0;
  CurrentPrcb = KeGetCurrentPrcb();
  v53 = KiSpeculationFeatures;
  if ( (KiSpeculationFeatures & 0x1000000000LL) == 0 )
    return (__int16)v1;
  _disable();
  CurrentPrcb->BpbState.AllFlags &= 0xFF01u;
  v4 = *(_QWORD *)(a1 + 1888);
  v51 = *(_DWORD *)(a1 + 1532) & 0x400000;
  if ( !v51 )
    v4 = 1LL;
  if ( (KiSpeculationFeatures & 0x8000000000000LL) != 0 )
  {
    if ( v4 )
      CurrentPrcb->BpbState.AllFlags |= 0x200u;
    else
      CurrentPrcb->BpbState.AllFlags &= ~0x200u;
  }
  if ( (v53 & 1) == 0 )
  {
    BpbCurrentSpecCtrl = CurrentPrcb->BpbCurrentSpecCtrl;
    v6 = 0;
    v49 = BpbCurrentSpecCtrl;
    v48 = 0;
    v7 = v53 & 0x20000000000LL;
    if ( (v53 & 0x20000000000LL) != 0 && (CurrentPrcb->BpbRetpolineState.AllFlags & 3) == 1 )
    {
      BpbCurrentSpecCtrl = CurrentPrcb->BpbTrappedRetpolineExitSpecCtrl;
      v6 = 1;
      v49 = BpbCurrentSpecCtrl;
      v48 = (CurrentPrcb->PrcbPad12a[1] & 0x100000) != 0;
    }
    v8 = 0;
    if ( (v53 & 0x4000000000LL) != 0 && KiSsbdMsr == 72 )
    {
      v9 = 4;
      v49 = BpbCurrentSpecCtrl | 4;
    }
    else
    {
      v9 = 0;
    }
    p_BpbKernelSpecCtrl = &CurrentPrcb->BpbKernelSpecCtrl;
    p_BpbRetpolineExitSpecCtrl = &CurrentPrcb->BpbRetpolineExitSpecCtrl;
    v50 = &CurrentPrcb->BpbRetpolineExitSpecCtrl;
    v12 = v9;
    CurrentPrcb->BpbKernelSpecCtrl = v9;
    CurrentPrcb->BpbUserSpecCtrl = v9;
    CurrentPrcb->BpbRetpolineExitSpecCtrl = v9;
    if ( (v53 & 0x2000) != 0 )
    {
      *p_BpbKernelSpecCtrl = v9 | 0x80;
      v9 |= 0x80u;
      v12 = v9;
      p_BpbRetpolineExitSpecCtrl = &CurrentPrcb->BpbRetpolineExitSpecCtrl;
      *v50 = v9;
    }
    if ( (v53 & 0x80000000000LL) != 0 )
    {
      v9 |= 2u;
      v12 |= 2u;
      *p_BpbKernelSpecCtrl = v9;
      *p_BpbRetpolineExitSpecCtrl = v12;
    }
    if ( (v53 & 0x40000000000000LL) != 0 )
    {
      *p_BpbKernelSpecCtrl = v9 | 0x400;
      *p_BpbRetpolineExitSpecCtrl = v12 | 0x400;
    }
    v13 = v53;
    TrappedSecurityDomain = CurrentPrcb->TrappedSecurityDomain;
    v52 = *(_DWORD *)(a1 + 1532) & 0x800000;
    v15 = v53;
    v54 = TrappedSecurityDomain;
    if ( (v53 & 0x2000000000LL) != 0 )
    {
      if ( !v4 )
        goto LABEL_17;
      goto LABEL_54;
    }
    if ( !v4 )
    {
      if ( (v53 & 2) != 0 )
      {
        if ( (v53 & 0x40) != 0 )
        {
          *p_BpbRetpolineExitSpecCtrl |= 2u;
          if ( !v7 )
            *p_BpbKernelSpecCtrl |= 2u;
        }
        else if ( (v53 & 0x10) != 0 )
        {
          *p_BpbRetpolineExitSpecCtrl |= 1u;
          if ( !v7 )
            *p_BpbKernelSpecCtrl |= 1u;
        }
      }
      goto LABEL_17;
    }
    if ( (v53 & 0x300000008000LL) == 0x8000 || (v53 & 0x1800000200000LL) == 0x200000 )
    {
      v43.AllFlags = CurrentPrcb->BpbState.AllFlags | 8;
      CurrentPrcb->BpbState = v43;
      if ( (v53 & 8) == 0 )
        CurrentPrcb->BpbState.AllFlags = v43.AllFlags | 2;
      if ( (v53 & 2) != 0 )
      {
        if ( (v53 & 0x40) != 0 )
        {
          *v50 |= 2u;
          if ( !v7 )
            *p_BpbKernelSpecCtrl |= 2u;
        }
        else if ( (v53 & 0x10) != 0 )
        {
          *v50 |= 1u;
          if ( !v7 )
            *p_BpbKernelSpecCtrl |= 1u;
        }
      }
      goto LABEL_52;
    }
    if ( (v53 & 0x10) != 0 )
    {
      *v50 |= 1u;
      if ( !v7 )
        *p_BpbKernelSpecCtrl |= 1u;
      if ( (v53 & 0x20) == 0 )
        CurrentPrcb->BpbState.AllFlags |= 2u;
LABEL_52:
      if ( (CurrentPrcb->BpbFeatures.AllFlags & 0x30) != 0 )
        CurrentPrcb->BpbState.AllFlags |= 0x80u;
LABEL_54:
      if ( (v53 & 0x8000000000LL) != 0 )
      {
        CurrentPrcb->BpbRetpolineExitSpecCtrl |= 4u;
        CurrentPrcb->BpbTrappedRetpolineExitSpecCtrl |= 4u;
        CurrentPrcb->BpbKernelSpecCtrl |= 4u;
        v16 = v49 | 4;
        goto LABEL_18;
      }
LABEL_17:
      v16 = v49;
      CurrentPrcb->BpbTrappedRetpolineExitSpecCtrl &= ~4u;
LABEL_18:
      if ( (v53 & 0x42) == 0x42 && ((v53 & 0x100000000LL) != 0 || (*(_DWORD *)(a1 + 1872) & 0x40000000) != 0) )
      {
        CurrentPrcb->BpbUserSpecCtrl |= 2u;
        v17 = 0;
        if ( (v53 & 0x20000000000LL) != 0 && (PEPROCESS)a1 != PsInitialSystemProcess )
          CurrentPrcb->BpbKernelSpecCtrl |= 2u;
      }
      else
      {
        v17 = 0;
      }
      if ( (v53 & 0x80000000000LL) != 0 )
        CurrentPrcb->BpbUserSpecCtrl |= 2u;
      if ( (v53 & 0x8000000000LL) != 0 && (*(_DWORD *)(a1 + 1876) & 0x2000) != 0 )
        CurrentPrcb->BpbUserSpecCtrl |= 4u;
      if ( (v53 & 0x40000000000000LL) != 0 )
        CurrentPrcb->BpbUserSpecCtrl |= 0x400u;
      if ( TrappedSecurityDomain && TrappedSecurityDomain != v4 && TrappedSecurityDomain != *(_QWORD *)(a1 + 1896) )
      {
        if ( (v16 & 1) != 0 )
        {
          if ( (v53 & 0x100000000000000LL) == 0 )
          {
            if ( (v53 & 2) != 0 )
            {
              v13 = v53;
              if ( (CurrentPrcb->PairRegister & 4) != 0 )
              {
                v15 = v53;
              }
              else if ( (v53 & 0x20000000000LL) == 0 || (CurrentPrcb->BpbRetpolineState.AllFlags & 1) != 0 )
              {
                v15 = v53;
                if ( (v53 & 0x40) != 0 )
                  v16 = v16 & 4 | 2;
              }
              else
              {
                v16 &= 4u;
                v15 = v53;
              }
            }
            else
            {
              v16 &= 4u;
            }
          }
          if ( (v16 & 1) == 0 )
          {
            LOBYTE(v17) = 1;
            v6 = 1;
            goto LABEL_27;
          }
          v37.AllFlags = CurrentPrcb->BpbState.AllFlags | 4;
          v38 = (v15 & 8) == 0;
LABEL_106:
          v17 = v48;
          CurrentPrcb->BpbState = v37;
          if ( v38 )
            CurrentPrcb->BpbState.AllFlags = v37.AllFlags | 0x20;
LABEL_27:
          v18 = v16 | 0x80;
          if ( (v13 & 0x2000) == 0 )
            v18 = v16;
          v19 = v18 | 2;
          if ( (v13 & 0x80000000000LL) == 0 )
            v19 = v18;
          v20 = v13 & 0x40000000000000LL;
          v21 = v19 | 0x400;
          if ( !v20 )
            v21 = v19;
          if ( v17 )
          {
            __writemsr(0x49u, 1uLL);
            if ( (v15 & 8) == 0 )
            {
              KiFlushCurrentRsb(73, 0, v20, v17);
              TrappedSecurityDomain = v54;
            }
            v42 = CurrentPrcb->BpbState.AllFlags & 0xFFFB;
            CurrentPrcb->TrappedSecurityDomain = 0LL;
            CurrentPrcb->BpbTrappedRetpolineExitSpecCtrl = v21;
            CurrentPrcb->BpbState.AllFlags = v42 & 0xFFDF;
            CurrentPrcb->BpbTrappedBpbState.AllFlags &= 0xFFAFu;
          }
          LOWORD(v1) = CurrentPrcb->PairRegister;
          updated = 0;
          v23 = v21;
          if ( ((unsigned __int8)v1 & 4) == 0 )
          {
LABEL_35:
            if ( v23 != CurrentPrcb->BpbCurrentSpecCtrl )
            {
              LOWORD(v1) = v23;
              CurrentPrcb->BpbCurrentSpecCtrl = v23;
              __writemsr(0x48u, v23);
            }
            if ( v6 )
              CurrentPrcb->BpbRetpolineState.AllFlags |= 2u;
            _mm_lfence();
            v24 = KeGetCurrentPrcb();
            SchedulerAssist = v24->SchedulerAssist;
            if ( SchedulerAssist )
            {
              _m_prefetchw(SchedulerAssist);
              LODWORD(v1) = *SchedulerAssist;
              do
              {
                v36 = (int)v1;
                LODWORD(v1) = _InterlockedCompareExchange(
                                SchedulerAssist,
                                (unsigned int)v1 & 0xFFDFFFFF,
                                (signed __int32)v1);
              }
              while ( v36 != (_DWORD)v1 );
              if ( ((unsigned int)v1 & 0x200000) != 0 )
                LOWORD(v1) = KiRemoveSystemWorkPriorityKick((__int64)v24);
            }
            _enable();
            if ( !updated )
              return (__int16)v1;
            memset_0(v59, 0, 0x100uLL);
            CurrentIrql = KeGetCurrentIrql();
            __writecr8(0xCuLL);
            if ( KiIrqlFlags )
              KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 12LL);
            PairPrcb = CurrentPrcb->PairPrcb;
            v58 = 2097153LL;
            memset_0(v59, 0, 0x100uLL);
            v32 = *((_DWORD *)KiGlobalState + PairPrcb->Number) & 0x3F;
            v33 = *((_DWORD *)KiGlobalState + PairPrcb->Number) >> 6;
            if ( (_DWORD)v33 )
            {
              if ( WORD1(v58) <= (unsigned int)v33 )
                goto LABEL_76;
              LOWORD(v58) = v33 + 1;
            }
            v34 = &v59[v33];
            v35 = *v34;
            _bittestandset64(&v35, v32);
            *v34 = v35;
LABEL_76:
            v57 = KiSynchronizeStibpPairingTarget;
            v56 = 0LL;
            v55 = 0LL;
            KiIpiSendRequest((__int64)KeGetCurrentPrcb(), 0, (char *)&v58, &v55, 5LL);
            while ( CurrentPrcb->PacketBarrier )
            {
              if ( (++v8 & HvlLongSpinCountMask) == 0
                && (HvlEnlightenments & 0x40) != 0
                && KiCheckVpBackingLongSpinWaitHypercall() )
              {
                HvlNotifyLongSpinWait(v8);
              }
              else
              {
                _mm_pause();
              }
            }
            if ( KiIrqlFlags )
              KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
            LOWORD(v1) = CurrentIrql;
            __writecr8(CurrentIrql);
            return (__int16)v1;
          }
          v1 = CurrentPrcb->PairPrcb;
          if ( TrappedSecurityDomain == v4 )
          {
            LOWORD(v1) = v1->PairRegister;
            if ( ((unsigned __int8)v1 & 1) != 0 )
            {
              CurrentPrcb->BpbUserSpecCtrl &= ~2u;
              if ( (v53 & 0x20000000000LL) != 0 )
                CurrentPrcb->BpbKernelSpecCtrl &= ~2u;
            }
            else
            {
              CurrentPrcb->BpbUserSpecCtrl |= 2u;
              if ( (v53 & 0x20000000000LL) != 0 )
                CurrentPrcb->BpbKernelSpecCtrl |= 2u;
            }
          }
          else
          {
            _InterlockedOr16(&CurrentPrcb->PairRegister, 2u);
          }
          if ( v4 )
          {
            if ( !v52 )
              goto LABEL_35;
            _m_prefetchw(&CurrentPrcb->PrcbPad12a[2]);
            PairRegister = CurrentPrcb->PairRegister;
            do
            {
              v29 = PairRegister;
              PairRegister = _InterlockedCompareExchange16(
                               &CurrentPrcb->PairRegister,
                               PairRegister | 0x100,
                               PairRegister);
            }
            while ( v29 != PairRegister );
            updated = PairRegister & 1;
            if ( (KiSpeculationFeatures & 0x20000000000LL) != 0 )
            {
              BpbRetpolineExitSpecCtrl = CurrentPrcb->BpbRetpolineExitSpecCtrl;
              if ( (BpbRetpolineExitSpecCtrl & 3) == 0 )
                CurrentPrcb->BpbRetpolineExitSpecCtrl = BpbRetpolineExitSpecCtrl | 2;
              LOWORD(v1) = CurrentPrcb->BpbTrappedRetpolineExitSpecCtrl;
              if ( ((unsigned __int8)v1 & 3) == 0 )
              {
                LOWORD(v1) = (unsigned __int16)v1 | 2;
                CurrentPrcb->BpbTrappedRetpolineExitSpecCtrl = (unsigned __int16)v1;
              }
              if ( (CurrentPrcb->BpbRetpolineState.AllFlags & 1) == 0 || (v21 & 3) != 0 )
                goto LABEL_113;
            }
            else
            {
              LOWORD(v1) = CurrentPrcb->BpbKernelSpecCtrl;
              if ( ((unsigned __int8)v1 & 3) == 0 )
              {
                LOWORD(v1) = (unsigned __int16)v1 | 2;
                CurrentPrcb->BpbKernelSpecCtrl = (unsigned __int16)v1;
              }
              if ( (v21 & 3) != 0 )
                goto LABEL_113;
            }
            v23 = v21 | 2;
          }
          else
          {
            updated = KiUpdateStibpPairing(a1, 256LL, 0x20000000000LL, v21);
            v39 = CurrentPrcb->BpbRetpolineExitSpecCtrl;
            CurrentPrcb->BpbTrappedRetpolineExitSpecCtrl ^= ((unsigned __int8)v39 ^ (unsigned __int8)CurrentPrcb->BpbTrappedRetpolineExitSpecCtrl) & 3;
            if ( (v53 & 0x20000000000LL) != 0 && (CurrentPrcb->BpbRetpolineState.AllFlags & 1) != 0 )
              v40 = (v39 & 3) != 0;
            else
              v40 = (CurrentPrcb->PrcbPad12a[3] & 3) != 0;
            v6 = 1;
            LOWORD(v1) = v40 ? 2 : 0;
            v23 = (unsigned __int16)v1 | v21 & 0xFFFC;
            if ( v51 )
              goto LABEL_35;
          }
LABEL_113:
          _InterlockedOr16(&CurrentPrcb->PairRegister, 2u);
          goto LABEL_35;
        }
        if ( (v53 & 0x2000000000LL) != 0
          || (v53 & 0x10) != 0
          || (v53 & 0x20000000000LL) != 0 && (CurrentPrcb->BpbRetpolineState.AllFlags & 2) == 0 )
        {
          v37.AllFlags = CurrentPrcb->BpbState.AllFlags | 4;
          v38 = (v53 & 8) == 0;
          goto LABEL_106;
        }
      }
      v17 = v48;
      goto LABEL_27;
    }
    if ( (v53 & 0x42) == 0x42 )
    {
      *v50 |= 2u;
      if ( v7 )
      {
LABEL_144:
        v44.AllFlags = CurrentPrcb->BpbState.AllFlags | 0x10;
        CurrentPrcb->BpbState = v44;
        if ( (v53 & 0x20) != 0 )
        {
          if ( (v53 & 8) == 0 )
            CurrentPrcb->BpbState.AllFlags = v44.AllFlags | 0x40;
        }
        else
        {
          CurrentPrcb->BpbState.AllFlags = v44.AllFlags | 2;
        }
        goto LABEL_52;
      }
      *p_BpbKernelSpecCtrl |= 2u;
    }
    else if ( v7 )
    {
      goto LABEL_144;
    }
    v45.AllFlags = CurrentPrcb->BpbState.AllFlags | 8;
    CurrentPrcb->BpbState = v45;
    if ( (v53 & 8) == 0 )
      CurrentPrcb->BpbState.AllFlags = v45.AllFlags | 2;
    goto LABEL_52;
  }
  LOWORD(v1) = KiUpdateSpecCtrlEnhancedIBRS(CurrentPrcb, a1);
  v26 = KeGetCurrentPrcb();
  v27 = v26->SchedulerAssist;
  if ( v27 )
  {
    _m_prefetchw(v27);
    LODWORD(v1) = *v27;
    do
    {
      v41 = (int)v1;
      LODWORD(v1) = _InterlockedCompareExchange(v27, (unsigned int)v1 & 0xFFDFFFFF, (signed __int32)v1);
    }
    while ( v41 != (_DWORD)v1 );
    if ( ((unsigned int)v1 & 0x200000) != 0 )
      LOWORD(v1) = KiRemoveSystemWorkPriorityKick((__int64)v26);
  }
  _enable();
  return (__int16)v1;
}
