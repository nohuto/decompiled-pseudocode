/*
 * XREFs of KiWaitForAllObjects @ 0x14027DDF0
 * Callers:
 *     KeWaitForMultipleObjects @ 0x14027C240 (KeWaitForMultipleObjects.c)
 * Callees:
 *     KiReleaseThreadLockLowerIrql @ 0x140204FF0 (KiReleaseThreadLockLowerIrql.c)
 *     RtlRaiseStatus @ 0x14025AB10 (RtlRaiseStatus.c)
 *     KeAbPostReleaseEx @ 0x14027D430 (KeAbPostReleaseEx.c)
 *     KiRcuCheckQuiescent @ 0x14027DA00 (KiRcuCheckQuiescent.c)
 *     KiWaitSatisfyMutant @ 0x140280980 (KiWaitSatisfyMutant.c)
 *     KiProcessDeferredReadyList @ 0x140285EA0 (KiProcessDeferredReadyList.c)
 *     KiDeliverApc @ 0x140286490 (KiDeliverApc.c)
 *     KiAcquireKobjectLockSafe @ 0x140287200 (KiAcquireKobjectLockSafe.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KeAbPreWait @ 0x14029D460 (KeAbPreWait.c)
 *     KiCommitThreadWait @ 0x14029DDA0 (KiCommitThreadWait.c)
 *     KiPerformWaitDeferredWork @ 0x1402E6090 (KiPerformWaitDeferredWork.c)
 *     KiFastExitThreadWait @ 0x1402E7020 (KiFastExitThreadWait.c)
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiCheckDueTimeExpired @ 0x140419E50 (KiCheckDueTimeExpired.c)
 *     KiUnlockKobjectArray @ 0x14045868C (KiUnlockKobjectArray.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

__int64 __fastcall KiWaitForAllObjects(
        unsigned int a1,
        volatile signed __int32 **a2,
        int a3,
        char a4,
        char a5,
        __int64 a6,
        __int64 a7)
{
  char v9; // r12
  unsigned __int64 *v10; // rdx
  unsigned __int64 v11; // r8
  unsigned int v12; // ecx
  unsigned __int64 v13; // r9
  __int64 v14; // r10
  unsigned __int64 v15; // r11
  struct _KTHREAD *CurrentThread; // r15
  unsigned __int8 CurrentIrql; // si
  unsigned __int8 *p_WaitIrql; // r14
  __int64 v19; // rcx
  unsigned __int64 v20; // rsi
  unsigned int v21; // edi
  unsigned int v22; // r13d
  int v23; // ebx
  volatile __int64 WaitStatus; // rdi
  int v25; // eax
  unsigned __int8 v26; // al
  unsigned int v27; // edi
  unsigned __int64 v28; // r14
  struct _KPRCB *CurrentPrcb; // r12
  volatile signed __int32 *v30; // rsi
  __int64 v31; // r9
  volatile signed __int32 **v32; // rdi
  __int64 v33; // r14
  char v34; // r8
  volatile signed __int32 **v35; // rsi
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
  volatile signed __int32 *v61; // rcx
  volatile signed __int32 **v62; // rdx
  __int64 v63; // r8
  unsigned __int64 v64; // rsi
  int v65; // r14d
  bool v66; // r12
  unsigned __int8 v67; // di
  __int64 v68; // rax
  unsigned __int64 v69; // rax
  char v70; // r12
  __int64 v71; // rax
  __int64 v72; // r14
  char v73; // cl
  __int64 v74; // rax
  unsigned __int64 v75; // rax
  volatile signed __int32 *v76; // rcx
  _KLOCK_ENTRY *v77; // r13
  unsigned int v79; // [rsp+34h] [rbp-CCh]
  int v81; // [rsp+40h] [rbp-C0h]
  unsigned __int64 v82; // [rsp+40h] [rbp-C0h]
  volatile signed __int32 **v83; // [rsp+48h] [rbp-B8h]
  unsigned __int64 v84; // [rsp+50h] [rbp-B0h]
  unsigned __int8 *v85; // [rsp+58h] [rbp-A8h]
  __int64 v86; // [rsp+60h] [rbp-A0h] BYREF
  int v87; // [rsp+68h] [rbp-98h]
  int v88; // [rsp+6Ch] [rbp-94h]
  int v89; // [rsp+70h] [rbp-90h]
  __int64 v90; // [rsp+78h] [rbp-88h]
  struct _KTHREAD *v91; // [rsp+80h] [rbp-80h]
  __int64 v92; // [rsp+88h] [rbp-78h]
  volatile signed __int32 *v93; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v94[512]; // [rsp+98h] [rbp-68h] BYREF

  v87 = a3;
  v83 = a2;
  v90 = a7;
  v84 = 0LL;
  v9 = a4;
  memset_0(v94, 0, 0x1F8uLL);
  v12 = 1;
  v93 = *a2;
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
        v15 = *(_QWORD *)&v94[8 * v14 - 8];
        if ( v15 <= v13 )
          break;
        v68 = (unsigned int)v11;
        v11 = (unsigned int)v14;
        *(_QWORD *)&v94[8 * v68 - 8] = v15;
      }
      while ( (_DWORD)v14 );
      ++v12;
      ++v10;
      *(_QWORD *)&v94[8 * (unsigned int)v11 - 8] = v13;
    }
    while ( v12 < a1 );
  }
  CurrentThread = KeGetCurrentThread();
  v91 = CurrentThread;
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
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql);
    p_WaitIrql = &CurrentThread->WaitIrql;
    CurrentThread->WaitIrql = CurrentIrql;
  }
  KiRcuCheckQuiescent(KeGetCurrentPrcb(), (__int64)v10, v11);
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
    v86 = 0LL;
    v20 = *p_WaitIrql;
    while ( 1 )
    {
      CurrentThread->MiscFlags &= ~0x10u;
      CurrentThread->WaitRegister.Flags = 0;
      CurrentThread->WaitMode = v9;
      if ( a5 )
        CurrentThread->MiscFlags |= 0x10u;
      v21 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
      {
        do
        {
          if ( (++v21 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v19) )
          {
            HvlNotifyLongSpinWait(v21);
          }
          else
          {
            _mm_pause();
          }
        }
        while ( CurrentThread->ThreadLock );
      }
      if ( !CurrentThread->ApcState.KernelApcPending || CurrentThread->SpecialApcDisable || (_BYTE)v20 )
        break;
      KiReleaseThreadLockLowerIrql((__int64)CurrentThread, 1u);
      KiDeliverApc(0LL, 0LL, 0LL);
      v19 = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags )
        KiRaiseIrqlProcessIrqlFlags(v19);
      *p_WaitIrql = 0;
    }
    v22 = a1;
    v23 = v81;
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
        v25 = KiPerformWaitDeferredWork((ULONG_PTR)CurrentThread);
        CurrentThread->ThreadLock = 0LL;
        if ( v25 )
        {
          KiProcessDeferredReadyList(KeGetCurrentPrcb(), &v86, (unsigned __int8)v20);
        }
        else
        {
          if ( KiIrqlFlags )
            KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), (unsigned __int8)v20);
          __writecr8(v20);
        }
        return (unsigned int)WaitStatus;
      }
    }
    else if ( (CurrentThread->ApcState.UserApcPendingAll & 2) != 0 && v9 )
    {
      LODWORD(WaitStatus) = 192;
      goto LABEL_29;
    }
    v26 = v87;
    v27 = 0;
    CurrentThread->WaitBlockFill6[68] = 5;
    v28 = 0LL;
    CurrentThread->WaitReason = v26;
    CurrentThread->WaitBlock[2].SpareLong = MEMORY[0xFFFFF78000000320];
    CurrentThread->ThreadLock = 0LL;
    CurrentPrcb = KeGetCurrentPrcb();
    v30 = v93;
    KiAcquireKobjectLockSafe(v93);
    if ( a1 > 1 )
    {
      v32 = (volatile signed __int32 **)v94;
      v33 = a1 - 1;
      do
      {
        if ( *v32 != v30 )
        {
          v30 = *v32;
          KiAcquireKobjectLockSafe(*v32);
        }
        ++v32;
        --v33;
      }
      while ( v33 );
      v28 = 0LL;
      v27 = 0;
      goto LABEL_42;
    }
    if ( a1 )
    {
LABEL_42:
      v34 = 0;
      v35 = v83;
      v31 = a1;
      v36 = v83;
      v37 = v90 + 17;
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
          v28 |= 1LL << v34;
        ++v34;
        ++v36;
        --v31;
      }
      while ( v31 );
      goto LABEL_45;
    }
    v35 = v83;
LABEL_45:
    CurrentThread->WaitStatus = 0LL;
    v39 = 0;
    CurrentThread->AbWaitObject = 0LL;
    do
    {
      v40 = (unsigned __int8 *)v35[v39];
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
        KiUnlockKobjectArray(&v93, a1);
        KiFastExitThreadWait(CurrentPrcb, (ULONG_PTR)CurrentThread);
        RtlRaiseStatus(-1073741423);
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
          v42 = (unsigned __int8 *)*v35;
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
              KiWaitSatisfyMutant(v42, CurrentThread, CurrentPrcb, v31);
              CurrentThread->ThreadLock = 0LL;
              if ( (v42[48] & 2) != 0 )
              {
                v56 = KeAbPreAcquire(v42, 0LL, 1LL);
                if ( v56 )
                  *(_BYTE *)(v56 + 10) = 1;
              }
            }
          }
          v35 = ++v83;
          --v41;
        }
        while ( v41 );
        v22 = a1;
      }
      v44 = v93;
      _InterlockedAnd(v93, 0xFFFFFF7F);
      if ( v22 > 1 )
      {
        v45 = (volatile signed __int32 **)v94;
        v46 = v22 - 1;
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
      v49 = v93;
      _InterlockedAnd(v93, 0xFFFFFF7F);
      if ( a1 > 1 )
      {
        v50 = (volatile signed __int32 **)v94;
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
    v61 = v93;
    _InterlockedAnd(v93, 0xFFFFFF7F);
    if ( a1 > 1 )
    {
      v62 = (volatile signed __int32 **)v94;
      v63 = a1 - 1;
      do
      {
        if ( *v62 != v61 )
        {
          v61 = *v62;
          _InterlockedAnd(*v62, 0xFFFFFF7F);
        }
        ++v62;
        --v63;
      }
      while ( v63 );
    }
    CurrentThread->WaitBlockCount = a1;
    v64 = 0LL;
    if ( v28 )
    {
      do
      {
        _BitScanForward64(&v69, v28);
        v70 = v69;
        _bittestandreset64((__int64 *)&v28, (unsigned int)v69);
        v88 = v69;
        v82 = v28;
        v71 = KeAbPreAcquire(v83[v69], 0LL, 0LL);
        v72 = v71;
        if ( !v71 )
          break;
        v64 |= 1LL << v70;
        KeAbPreWait(v71);
        v73 = *(_BYTE *)(v72 + 8);
        v28 = v82;
        v74 = v27++;
        v94[v74 + 504] = (2 * (v73 & 0x3F)) | 1;
      }
      while ( v82 );
      CurrentThread = v91;
    }
    v65 = 0;
    v92 = KiCommitThreadWait((ULONG_PTR)CurrentThread, v23, 0LL);
    LODWORD(WaitStatus) = v92;
    v81 = 0;
    v66 = (v92 & 0xFFFFFF40) == 0;
    CurrentThread->AbWaitObject = 0LL;
    if ( v64 )
    {
      do
      {
        _BitScanForward64(&v75, v64);
        v89 = v75;
        v64 &= ~(1LL << v75);
        v76 = v83[(unsigned int)v75];
        v77 = &KeGetCurrentThread()->KernelAbEntries->Entries[(unsigned __int64)(unsigned __int8)v94[v65 + 504] >> 1];
        v86 = 8LL * (unsigned int)v75;
        KeAbPreAcquire(v76, v77, 0LL);
        if ( v66 )
          v77->AcquiredByte = 1;
        else
          KeAbPostReleaseEx(*(ULONG_PTR *)((char *)v83 + v86), (ULONG_PTR)v77);
        ++v65;
      }
      while ( v64 );
      CurrentThread = v91;
      LODWORD(WaitStatus) = v92;
    }
    if ( (_DWORD)WaitStatus == 256 )
    {
      v67 = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags )
        KiRaiseIrqlProcessIrqlFlags(v67);
      p_WaitIrql = v85;
      v9 = a4;
      *v85 = v67;
      continue;
    }
    return (unsigned int)WaitStatus;
  }
}
