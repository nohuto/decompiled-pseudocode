/*
 * XREFs of KiWaitForAllObjects @ 0x140205C00
 * Callers:
 *     KeWaitForMultipleObjects @ 0x14033D720 (KeWaitForMultipleObjects.c)
 * Callees:
 *     KiRcuCheckQuiescent @ 0x140206480 (KiRcuCheckQuiescent.c)
 *     KiCheckDueTimeExpired @ 0x1402065E0 (KiCheckDueTimeExpired.c)
 *     KiWaitSatisfyMutant @ 0x140206670 (KiWaitSatisfyMutant.c)
 *     KiReleaseThreadLockLowerIrql @ 0x1402067B0 (KiReleaseThreadLockLowerIrql.c)
 *     KiPerformWaitDeferredWork @ 0x14024F1A0 (KiPerformWaitDeferredWork.c)
 *     KiFastExitThreadWait @ 0x14024F840 (KiFastExitThreadWait.c)
 *     KeAbPostReleaseEx @ 0x14025CCE0 (KeAbPostReleaseEx.c)
 *     RtlRaiseStatus @ 0x140280B30 (RtlRaiseStatus.c)
 *     HvlNotifyLongSpinWait @ 0x140293260 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140293290 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiProcessDeferredReadyList @ 0x14031D3D0 (KiProcessDeferredReadyList.c)
 *     KiDeliverApc @ 0x14031D9B0 (KiDeliverApc.c)
 *     KiAcquireKobjectLockSafe @ 0x14031E740 (KiAcquireKobjectLockSafe.c)
 *     KeAbPreWait @ 0x14033E810 (KeAbPreWait.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     KiCommitThreadWait @ 0x140340C20 (KiCommitThreadWait.c)
 *     KiUnlockKobjectArray @ 0x14045911C (KiUnlockKobjectArray.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 */

__int64 __fastcall KiWaitForAllObjects(
        unsigned int a1,
        volatile signed __int32 **a2,
        unsigned __int8 a3,
        char a4,
        char a5,
        __int64 a6,
        __int64 a7)
{
  char v9; // r12
  unsigned __int64 *v10; // rdx
  __int64 v11; // r8
  unsigned int v12; // ecx
  unsigned __int64 v13; // r9
  __int64 v14; // r10
  unsigned __int64 v15; // r11
  struct _KTHREAD *CurrentThread; // r15
  unsigned __int8 CurrentIrql; // si
  unsigned __int8 *p_WaitIrql; // r14
  __int64 v19; // rdx
  __int64 v20; // rcx
  unsigned __int64 v21; // rsi
  unsigned int v22; // edi
  unsigned int v23; // r13d
  int v24; // ebx
  volatile __int64 WaitStatus; // rdi
  int v26; // eax
  unsigned int v27; // edi
  unsigned __int64 v28; // r14
  struct _KPRCB *CurrentPrcb; // r12
  volatile signed __int32 *v30; // rsi
  volatile signed __int32 **v31; // rdi
  __int64 v32; // r14
  char v33; // r8
  volatile signed __int32 **v34; // rsi
  __int64 v35; // r9
  volatile signed __int32 **v36; // rdx
  __int64 v37; // rcx
  volatile signed __int32 *v38; // rax
  unsigned int v39; // ecx
  unsigned __int8 *v40; // rdx
  __int64 v41; // rdi
  unsigned __int8 *v42; // rsi
  __int64 v43; // rcx
  volatile signed __int32 *v44; // rcx
  volatile signed __int32 **v45; // rdx
  __int64 v46; // r8
  __int64 *v48; // r11
  volatile signed __int32 *v49; // rcx
  volatile signed __int32 **v50; // rdx
  __int64 v51; // r8
  volatile unsigned __int8 DpcRoutineActive; // r8
  struct _KTHREAD *v53; // rax
  unsigned int v55; // r14d
  __int64 v56; // rax
  unsigned int v57; // r8d
  __int64 *v58; // rax
  __int64 v59; // rcx
  __int64 **v60; // rdx
  __int64 v61; // rax
  volatile signed __int32 *v62; // rcx
  volatile signed __int32 **v63; // rdx
  __int64 v64; // r8
  unsigned __int64 v65; // rsi
  int v66; // r14d
  __int64 v67; // r8
  unsigned __int8 v68; // di
  __int64 v69; // r8
  unsigned __int64 v70; // rax
  char v71; // r12
  __int64 v72; // rax
  __int64 v73; // r14
  char v74; // cl
  __int64 v75; // rax
  unsigned __int64 v76; // rax
  _KLOCK_ENTRY *v77; // r13
  unsigned int v79; // [rsp+34h] [rbp-CCh]
  int v81; // [rsp+40h] [rbp-C0h]
  int v82[2]; // [rsp+40h] [rbp-C0h]
  volatile signed __int32 **v83; // [rsp+48h] [rbp-B8h]
  unsigned __int64 v84; // [rsp+50h] [rbp-B0h]
  unsigned __int8 *v85; // [rsp+58h] [rbp-A8h]
  __int64 v86; // [rsp+60h] [rbp-A0h]
  struct _KTHREAD *v88; // [rsp+80h] [rbp-80h]
  int v89; // [rsp+88h] [rbp-78h]
  volatile signed __int32 *v90; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v91[512]; // [rsp+98h] [rbp-68h] BYREF

  v83 = a2;
  v84 = 0LL;
  v9 = a4;
  memset_0(v91, 0, 0x1F8uLL);
  v12 = 1;
  v90 = *a2;
  if ( a1 > 1 )
  {
    v10 = (unsigned __int64 *)(a2 + 1);
    do
    {
      v13 = *v10;
      v11 = v12;
      do
      {
        v14 = (unsigned int)(v11 - 1);
        v15 = *(_QWORD *)&v91[8 * v14 - 8];
        if ( v15 <= v13 )
          break;
        v61 = (unsigned int)v11;
        v11 = (unsigned int)v14;
        *(_QWORD *)&v91[8 * v61 - 8] = v15;
      }
      while ( (_DWORD)v14 );
      ++v12;
      ++v10;
      *(_QWORD *)&v91[8 * (unsigned int)v11 - 8] = v13;
    }
    while ( v12 < a1 );
  }
  CurrentThread = KeGetCurrentThread();
  v88 = CurrentThread;
  v81 = 0;
  if ( _bittestandreset((signed __int32 *)&CurrentThread->116, 2u) )
  {
    p_WaitIrql = &CurrentThread->WaitIrql;
    v81 = (2 * _bittestandreset((signed __int32 *)&CurrentThread->116, 0x10u)) | 1;
  }
  else
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2LL, v11);
    p_WaitIrql = &CurrentThread->WaitIrql;
    CurrentThread->WaitIrql = CurrentIrql;
  }
  KiRcuCheckQuiescent(KeGetCurrentPrcb(), v10);
  if ( a6 )
  {
    if ( *(int *)(a6 + 4) < 0 )
    {
      v79 = 2;
      p_WaitIrql = &CurrentThread->WaitIrql;
      v84 = MEMORY[0xFFFFF78000000008] - MEMORY[0xFFFFF780000003B0] - (*(_QWORD *)a6 + CurrentThread->RelativeTimerBias);
      v9 = a4;
    }
    else
    {
      v84 = *(_QWORD *)a6;
      v79 = 1;
    }
  }
  else
  {
    v79 = 0;
  }
  v85 = p_WaitIrql;
  while ( 2 )
  {
    v21 = *p_WaitIrql;
    while ( 1 )
    {
      CurrentThread->MiscFlags &= ~0x10u;
      CurrentThread->WaitRegister.Flags = 0;
      CurrentThread->WaitMode = v9;
      if ( a5 )
        CurrentThread->MiscFlags |= 0x10u;
      v22 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
      {
        do
        {
          if ( (++v22 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v20) )
          {
            HvlNotifyLongSpinWait(v22);
          }
          else
          {
            _mm_pause();
          }
        }
        while ( CurrentThread->ThreadLock );
      }
      if ( !CurrentThread->ApcState.KernelApcPending || CurrentThread->SpecialApcDisable || (_BYTE)v21 )
        break;
      LOBYTE(v19) = 1;
      KiReleaseThreadLockLowerIrql(CurrentThread, v19);
      KiDeliverApc(0LL, 0LL, 0LL);
      v20 = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags )
        KiRaiseIrqlProcessIrqlFlags(v20, 2LL, v69);
      *p_WaitIrql = 0;
    }
    v23 = a1;
    v24 = v81;
    if ( a5 )
    {
      if ( CurrentThread->Alerted[v9] )
      {
        CurrentThread->Alerted[v9] = 0;
        LODWORD(WaitStatus) = 257;
      }
      else if ( !v9
             || (unsigned __int8 *)CurrentThread->ApcState.ApcListHead[1].Flink == &CurrentThread->ApcStateFill[16] )
      {
        if ( CurrentThread->Alerted[0] )
        {
          CurrentThread->Alerted[0] = 0;
          LODWORD(WaitStatus) = 257;
        }
        else
        {
          LODWORD(WaitStatus) = 0;
        }
      }
      else
      {
        CurrentThread->ApcState.UserApcPendingAll |= 2u;
        LODWORD(WaitStatus) = 192;
      }
      if ( (_DWORD)WaitStatus )
      {
LABEL_29:
        v26 = KiPerformWaitDeferredWork((ULONG_PTR)CurrentThread);
        CurrentThread->ThreadLock = 0LL;
        if ( v26 )
        {
          KiProcessDeferredReadyList(KeGetCurrentPrcb());
        }
        else
        {
          if ( KiIrqlFlags )
            KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), (unsigned __int8)v21);
          __writecr8(v21);
        }
        return (unsigned int)WaitStatus;
      }
    }
    else if ( (CurrentThread->ApcState.UserApcPendingAll & 2) != 0 && v9 )
    {
      LODWORD(WaitStatus) = 192;
      goto LABEL_29;
    }
    v27 = 0;
    CurrentThread->WaitBlockFill6[68] = 5;
    v28 = 0LL;
    CurrentThread->WaitReason = a3;
    CurrentThread->WaitBlock[2].SpareLong = MEMORY[0xFFFFF78000000320];
    CurrentThread->ThreadLock = 0LL;
    CurrentPrcb = KeGetCurrentPrcb();
    v30 = v90;
    KiAcquireKobjectLockSafe(v90);
    if ( a1 > 1 )
    {
      v31 = (volatile signed __int32 **)v91;
      v32 = a1 - 1;
      do
      {
        if ( *v31 != v30 )
        {
          v30 = *v31;
          KiAcquireKobjectLockSafe(*v31);
        }
        ++v31;
        --v32;
      }
      while ( v32 );
      v28 = 0LL;
      v27 = 0;
      goto LABEL_42;
    }
    if ( a1 )
    {
LABEL_42:
      v33 = 0;
      v34 = v83;
      v35 = a1;
      v36 = v83;
      v37 = a7 + 17;
      do
      {
        v38 = *v36;
        *(_BYTE *)(v37 - 1) = 0;
        *(_BYTE *)v37 = 4;
        *(_QWORD *)(v37 + 15) = v38;
        *(_WORD *)(v37 + 1) = 0;
        *(_QWORD *)(v37 + 7) = CurrentThread;
        v37 += 48LL;
        if ( (*(_BYTE *)*v36 & 0x7F) == 2 && ((*v36)[12] & 2) != 0 )
          v28 |= 1LL << v33;
        ++v33;
        ++v36;
        --v35;
      }
      while ( v35 );
      goto LABEL_45;
    }
    v34 = v83;
LABEL_45:
    CurrentThread->WaitStatus = 0LL;
    v39 = 0;
    CurrentThread->AbWaitObject = 0LL;
    do
    {
      v40 = (unsigned __int8 *)v34[v39];
      if ( (*v40 & 0x7F) != 2 )
      {
        if ( *((int *)v40 + 1) <= 0 )
          break;
        goto LABEL_48;
      }
      DpcRoutineActive = CurrentPrcb->DpcRoutineActive;
      v53 = (struct _KTHREAD *)*((_QWORD *)v40 + 5);
      if ( CurrentThread == v53 && v40[2] == DpcRoutineActive && *((_DWORD *)v40 + 1) == 0x80000000 )
      {
        KiUnlockKobjectArray(&v90, a1);
        KiFastExitThreadWait(CurrentPrcb, (ULONG_PTR)CurrentThread);
        RtlRaiseStatus(3221225873LL);
      }
      if ( *((int *)v40 + 1) <= 0 && (CurrentThread != v53 || v40[2] != DpcRoutineActive) )
        break;
LABEL_48:
      ++v39;
    }
    while ( v39 < a1 );
    if ( v39 == a1 )
    {
      if ( a1 )
      {
        v41 = a1;
        do
        {
          v42 = (unsigned __int8 *)*v34;
          v43 = *v42;
          if ( (v43 & 7) == 1 )
          {
            *((_DWORD *)v42 + 1) = 0;
          }
          else
          {
            LOBYTE(v43) = v43 & 0x7F;
            if ( (_BYTE)v43 == 5 )
            {
              --*((_DWORD *)v42 + 1);
            }
            else if ( (_BYTE)v43 == 2 && (*((_DWORD *)v42 + 1))-- == 1 )
            {
              v55 = 0;
              while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
              {
                do
                {
                  if ( (++v55 & HvlLongSpinCountMask) == 0
                    && (HvlEnlightenments & 0x40) != 0
                    && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v43) )
                  {
                    HvlNotifyLongSpinWait(v55);
                  }
                  else
                  {
                    _mm_pause();
                  }
                }
                while ( CurrentThread->ThreadLock );
              }
              KiWaitSatisfyMutant(v42, CurrentThread, CurrentPrcb);
              CurrentThread->ThreadLock = 0LL;
              if ( (v42[48] & 2) != 0 )
              {
                v56 = KeAbPreAcquire(v42, 0LL, 1LL);
                if ( v56 )
                  *(_BYTE *)(v56 + 10) = 1;
              }
            }
          }
          v34 = ++v83;
          --v41;
        }
        while ( v41 );
        v23 = a1;
      }
      v44 = v90;
      _InterlockedAnd(v90, 0xFFFFFF7F);
      if ( v23 > 1 )
      {
        v45 = (volatile signed __int32 **)v91;
        v46 = v23 - 1;
        do
        {
          if ( *v45 != v44 )
          {
            v44 = *v45;
            _InterlockedAnd(*v45, 0xFFFFFF7F);
          }
          ++v45;
          --v46;
        }
        while ( v46 );
      }
      WaitStatus = CurrentThread->WaitStatus;
      CurrentThread->AbWaitObject = 0LL;
      KiFastExitThreadWait(CurrentPrcb, (ULONG_PTR)CurrentThread);
      return (unsigned int)WaitStatus;
    }
    if ( (unsigned int)KiCheckDueTimeExpired(CurrentThread, v79, v84) )
    {
      v49 = v90;
      _InterlockedAnd(v90, 0xFFFFFF7F);
      if ( a1 > 1 )
      {
        v50 = (volatile signed __int32 **)v91;
        v51 = a1 - 1;
        do
        {
          if ( *v50 != v49 )
          {
            v49 = *v50;
            _InterlockedAnd(*v50, 0xFFFFFF7F);
          }
          ++v50;
          --v51;
        }
        while ( v51 );
      }
      KiFastExitThreadWait(CurrentPrcb, (ULONG_PTR)CurrentThread);
      LODWORD(WaitStatus) = 258;
      return (unsigned int)WaitStatus;
    }
    v57 = 0;
    if ( a1 )
    {
      v58 = v48;
      do
      {
        v59 = v58[4] + 8;
        v60 = *(__int64 ***)(v58[4] + 16);
        if ( *v60 != (__int64 *)v59 )
          __fastfail(3u);
        *v58 = v59;
        ++v57;
        v58[1] = (__int64)v60;
        *v60 = v58;
        *(_QWORD *)(v59 + 8) = v58;
        v58 += 6;
      }
      while ( v57 < a1 );
    }
    v62 = v90;
    _InterlockedAnd(v90, 0xFFFFFF7F);
    if ( a1 > 1 )
    {
      v63 = (volatile signed __int32 **)v91;
      v64 = a1 - 1;
      do
      {
        if ( *v63 != v62 )
        {
          v62 = *v63;
          _InterlockedAnd(*v63, 0xFFFFFF7F);
        }
        ++v63;
        --v64;
      }
      while ( v64 );
    }
    CurrentThread->WaitBlockCount = a1;
    v65 = 0LL;
    if ( v28 )
    {
      do
      {
        _BitScanForward64(&v70, v28);
        v71 = v70;
        _bittestandreset64((__int64 *)&v28, (unsigned int)v70);
        *(_QWORD *)v82 = v28;
        v72 = KeAbPreAcquire(v83[v70], 0LL, 0LL);
        v73 = v72;
        if ( !v72 )
          break;
        v65 |= 1LL << v71;
        KeAbPreWait(v72);
        v74 = *(_BYTE *)(v73 + 8);
        v28 = *(_QWORD *)v82;
        v75 = v27++;
        v91[v75 + 504] = (2 * (v74 & 0x3F)) | 1;
      }
      while ( *(_QWORD *)v82 );
      CurrentThread = v88;
    }
    v66 = 0;
    v89 = KiCommitThreadWait((ULONG_PTR)CurrentThread, v24, 0LL);
    LODWORD(WaitStatus) = v89;
    v81 = 0;
    CurrentThread->AbWaitObject = 0LL;
    if ( v65 )
    {
      do
      {
        _BitScanForward64(&v76, v65);
        v65 &= ~(1LL << v76);
        v77 = &KeGetCurrentThread()->KernelAbEntries->Entries[(unsigned __int64)(unsigned __int8)v91[v66 + 504] >> 1];
        v86 = (unsigned int)v76;
        KeAbPreAcquire(v83[v86], v77, 0LL);
        if ( (v89 & 0xFFFFFF40) != 0 )
          KeAbPostReleaseEx((ULONG_PTR)v83[v86]);
        else
          v77->AcquiredByte = 1;
        ++v66;
      }
      while ( v65 );
      CurrentThread = v88;
      LODWORD(WaitStatus) = v89;
    }
    if ( (_DWORD)WaitStatus == 256 )
    {
      v68 = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags )
        KiRaiseIrqlProcessIrqlFlags(v68, 2LL, v67);
      p_WaitIrql = v85;
      v9 = a4;
      *v85 = v68;
      continue;
    }
    return (unsigned int)WaitStatus;
  }
}
