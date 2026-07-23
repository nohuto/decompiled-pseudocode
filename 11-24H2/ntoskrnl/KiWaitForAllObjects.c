/*
 * XREFs of KiWaitForAllObjects @ 0x14032D1E0
 * Callers:
 *     KeWaitForMultipleObjects @ 0x14031CC00 (KeWaitForMultipleObjects.c)
 * Callees:
 *     RtlRaiseStatus @ 0x1402360C0 (RtlRaiseStatus.c)
 *     KiPerformWaitDeferredWork @ 0x14027F7B0 (KiPerformWaitDeferredWork.c)
 *     KiFastExitThreadWait @ 0x14027FE50 (KiFastExitThreadWait.c)
 *     KeAbPostReleaseEx @ 0x14028D2F0 (KeAbPostReleaseEx.c)
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiProcessDeferredReadyList @ 0x1402C5F60 (KiProcessDeferredReadyList.c)
 *     KiDeliverApc @ 0x1402C6540 (KiDeliverApc.c)
 *     KiAcquireKobjectLockSafe @ 0x1402C72D0 (KiAcquireKobjectLockSafe.c)
 *     KeAbPreWait @ 0x14031DCF0 (KeAbPreWait.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KiCommitThreadWait @ 0x140320100 (KiCommitThreadWait.c)
 *     KiRcuCheckQuiescent @ 0x14032DA60 (KiRcuCheckQuiescent.c)
 *     KiCheckDueTimeExpired @ 0x14032DBC0 (KiCheckDueTimeExpired.c)
 *     KiWaitSatisfyMutant @ 0x14032DC50 (KiWaitSatisfyMutant.c)
 *     KiReleaseThreadLockLowerIrql @ 0x14032DD90 (KiReleaseThreadLockLowerIrql.c)
 *     KiUnlockKobjectArray @ 0x14044E1CC (KiUnlockKobjectArray.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
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
  unsigned int v10; // ecx
  unsigned __int64 *v11; // rdx
  unsigned __int64 v12; // r9
  unsigned int v13; // r8d
  __int64 v14; // r10
  unsigned __int64 v15; // r11
  struct _KTHREAD *CurrentThread; // r15
  unsigned __int8 CurrentIrql; // si
  unsigned __int8 *p_WaitIrql; // r14
  __int64 v19; // r8
  unsigned __int64 v20; // rsi
  unsigned int v21; // edi
  unsigned int v22; // r13d
  unsigned int v23; // ebx
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
  __int64 *v35; // rsi
  __int64 *v36; // rdx
  __int64 v37; // rcx
  _BYTE *v38; // rax
  unsigned int v39; // ecx
  __int64 v40; // rdx
  __int64 v41; // rdi
  __int64 v42; // rsi
  char v43; // cl
  volatile signed __int32 *v44; // rcx
  volatile signed __int32 **v45; // rdx
  __int64 v46; // r8
  __int64 v48; // r9
  __int64 *v49; // r11
  volatile signed __int32 *v50; // rcx
  volatile signed __int32 **v51; // rdx
  __int64 v52; // r8
  volatile unsigned __int8 DpcRoutineActive; // r8
  struct _KTHREAD *v54; // rax
  unsigned int v56; // r14d
  _QWORD *v57; // rax
  unsigned int v58; // r8d
  __int64 *v59; // rax
  __int64 v60; // rcx
  __int64 **v61; // rdx
  __int64 v62; // rax
  volatile signed __int32 *v63; // rcx
  volatile signed __int32 **v64; // rdx
  __int64 v65; // r8
  unsigned __int64 v66; // rsi
  int v67; // r14d
  bool v68; // r12
  unsigned __int8 v69; // di
  __int64 v70; // rcx
  __int64 v71; // r9
  unsigned __int64 v72; // rax
  char v73; // r12
  char *v74; // rax
  __int64 v75; // rdx
  __int64 v76; // r8
  __int64 v77; // r9
  char *v78; // r14
  char v79; // cl
  __int64 v80; // rax
  unsigned __int64 v81; // rax
  __int64 v82; // rcx
  _KLOCK_ENTRY *v83; // r13
  unsigned int v85; // [rsp+34h] [rbp-CCh]
  unsigned int v87; // [rsp+40h] [rbp-C0h]
  int v88[2]; // [rsp+40h] [rbp-C0h]
  __int64 *v89; // [rsp+48h] [rbp-B8h]
  __int64 v90; // [rsp+50h] [rbp-B0h]
  unsigned __int8 *v91; // [rsp+58h] [rbp-A8h]
  _QWORD *v92; // [rsp+60h] [rbp-A0h] BYREF
  int v93; // [rsp+68h] [rbp-98h]
  int v94; // [rsp+6Ch] [rbp-94h]
  int v95; // [rsp+70h] [rbp-90h]
  __int64 v96; // [rsp+78h] [rbp-88h]
  struct _KTHREAD *v97; // [rsp+80h] [rbp-80h]
  __int64 v98; // [rsp+88h] [rbp-78h]
  volatile signed __int32 *v99; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v100[512]; // [rsp+98h] [rbp-68h] BYREF

  v93 = a3;
  v89 = (__int64 *)a2;
  v96 = a7;
  v90 = 0LL;
  v9 = a4;
  memset_0(v100, 0, 0x1F8uLL);
  v10 = 1;
  v99 = *a2;
  if ( a1 > 1 )
  {
    v11 = (unsigned __int64 *)(a2 + 1);
    do
    {
      v12 = *v11;
      v13 = v10;
      do
      {
        v14 = v13 - 1;
        v15 = *(_QWORD *)&v100[8 * v14 - 8];
        if ( v15 <= v12 )
          break;
        v62 = v13--;
        *(_QWORD *)&v100[8 * v62 - 8] = v15;
      }
      while ( (_DWORD)v14 );
      ++v10;
      ++v11;
      *(_QWORD *)&v100[8 * v13 - 8] = v12;
    }
    while ( v10 < a1 );
  }
  CurrentThread = KeGetCurrentThread();
  v97 = CurrentThread;
  v87 = 0;
  if ( _bittestandreset((signed __int32 *)&CurrentThread->116, 2u) )
  {
    p_WaitIrql = &CurrentThread->WaitIrql;
    v87 = (2 * _bittestandreset((signed __int32 *)&CurrentThread->116, 0x10u)) | 1;
  }
  else
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2LL);
    p_WaitIrql = &CurrentThread->WaitIrql;
    CurrentThread->WaitIrql = CurrentIrql;
  }
  KiRcuCheckQuiescent(KeGetCurrentPrcb());
  if ( a6 )
  {
    if ( *(int *)(a6 + 4) < 0 )
    {
      v85 = 2;
      p_WaitIrql = &CurrentThread->WaitIrql;
      v90 = MEMORY[0xFFFFF78000000008] - MEMORY[0xFFFFF780000003B0] - (*(_QWORD *)a6 + CurrentThread->RelativeTimerBias);
      v9 = a4;
    }
    else
    {
      v90 = *(_QWORD *)a6;
      v85 = 1;
    }
  }
  else
  {
    v85 = 0;
  }
  v91 = p_WaitIrql;
  while ( 2 )
  {
    v92 = 0LL;
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
            && KiCheckVpBackingLongSpinWaitHypercall() )
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
      KiReleaseThreadLockLowerIrql(CurrentThread);
      KiDeliverApc(0, 0LL, 0LL);
      v70 = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags )
        KiRaiseIrqlProcessIrqlFlags(v70, 2LL);
      *p_WaitIrql = 0;
    }
    v22 = a1;
    v23 = v87;
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
        LOBYTE(v19) = 1;
        v25 = KiPerformWaitDeferredWork((ULONG_PTR)CurrentThread, v87, v19, (__int64)&v92);
        CurrentThread->ThreadLock = 0LL;
        if ( v25 )
        {
          KiProcessDeferredReadyList(KeGetCurrentPrcb(), &v92, v20);
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
    v26 = v93;
    v27 = 0;
    CurrentThread->WaitBlockFill6[68] = 5;
    v28 = 0LL;
    CurrentThread->WaitReason = v26;
    CurrentThread->WaitBlock[2].SpareLong = MEMORY[0xFFFFF78000000320];
    CurrentThread->ThreadLock = 0LL;
    CurrentPrcb = KeGetCurrentPrcb();
    v30 = v99;
    KiAcquireKobjectLockSafe(v99);
    if ( a1 > 1 )
    {
      v32 = (volatile signed __int32 **)v100;
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
      v35 = v89;
      v31 = a1;
      v36 = v89;
      v37 = v96 + 17;
      do
      {
        v38 = (_BYTE *)*v36;
        *(_BYTE *)(v37 - 1) = 0;
        *(_BYTE *)v37 = 4;
        *(_QWORD *)(v37 + 15) = v38;
        *(_WORD *)(v37 + 1) = 0;
        *(_QWORD *)(v37 + 7) = CurrentThread;
        v37 += 48LL;
        if ( (*(_BYTE *)*v36 & 0x7F) == 2 && (*(_BYTE *)(*v36 + 48) & 2) != 0 )
          v28 |= 1LL << v34;
        ++v34;
        ++v36;
        --v31;
      }
      while ( v31 );
      goto LABEL_45;
    }
    v35 = v89;
LABEL_45:
    CurrentThread->WaitStatus = 0LL;
    v39 = 0;
    CurrentThread->AbWaitObject = 0LL;
    do
    {
      v40 = v35[v39];
      if ( (*(_BYTE *)v40 & 0x7F) != 2 )
      {
        if ( *(int *)(v40 + 4) <= 0 )
          break;
        goto LABEL_48;
      }
      DpcRoutineActive = CurrentPrcb->DpcRoutineActive;
      v54 = *(struct _KTHREAD **)(v40 + 40);
      if ( CurrentThread == v54 && *(_BYTE *)(v40 + 2) == DpcRoutineActive && *(_DWORD *)(v40 + 4) == 0x80000000 )
      {
        KiUnlockKobjectArray(&v99, a1);
        KiFastExitThreadWait(CurrentPrcb, (ULONG_PTR)CurrentThread, v87, v71);
        RtlRaiseStatus(-1073741423);
      }
      if ( *(int *)(v40 + 4) <= 0 && (CurrentThread != v54 || *(_BYTE *)(v40 + 2) != DpcRoutineActive) )
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
          v42 = *v35;
          if ( (*(_BYTE *)v42 & 7) == 1 )
          {
            *(_DWORD *)(v42 + 4) = 0;
          }
          else
          {
            v43 = *(_BYTE *)v42 & 0x7F;
            if ( v43 == 5 )
            {
              --*(_DWORD *)(v42 + 4);
            }
            else if ( v43 == 2 && (*(_DWORD *)(v42 + 4))-- == 1 )
            {
              v56 = 0;
              while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
              {
                do
                {
                  if ( (++v56 & HvlLongSpinCountMask) == 0
                    && (HvlEnlightenments & 0x40) != 0
                    && KiCheckVpBackingLongSpinWaitHypercall() )
                  {
                    HvlNotifyLongSpinWait(v56);
                  }
                  else
                  {
                    _mm_pause();
                  }
                }
                while ( CurrentThread->ThreadLock );
              }
              KiWaitSatisfyMutant(v42, CurrentThread);
              CurrentThread->ThreadLock = 0LL;
              if ( (*(_BYTE *)(v42 + 48) & 2) != 0 )
              {
                v57 = KeAbPreAcquire(v42, 0LL);
                if ( v57 )
                  *((_BYTE *)v57 + 10) = 1;
              }
            }
          }
          v35 = ++v89;
          --v41;
        }
        while ( v41 );
        v22 = a1;
      }
      v44 = v99;
      _InterlockedAnd(v99, 0xFFFFFF7F);
      if ( v22 > 1 )
      {
        v45 = (volatile signed __int32 **)v100;
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
      KiFastExitThreadWait(CurrentPrcb, (ULONG_PTR)CurrentThread, v87, v31);
      return (unsigned int)WaitStatus;
    }
    if ( (unsigned int)KiCheckDueTimeExpired(CurrentThread, v85, v90) )
    {
      v50 = v99;
      _InterlockedAnd(v99, 0xFFFFFF7F);
      if ( a1 > 1 )
      {
        v51 = (volatile signed __int32 **)v100;
        v52 = a1 - 1;
        do
        {
          if ( *v51 != v50 )
          {
            v50 = *v51;
            _InterlockedAnd(*v51, 0xFFFFFF7F);
          }
          ++v51;
          --v52;
        }
        while ( v52 );
      }
      KiFastExitThreadWait(CurrentPrcb, (ULONG_PTR)CurrentThread, v87, v48);
      LODWORD(WaitStatus) = 258;
      return (unsigned int)WaitStatus;
    }
    v58 = 0;
    if ( a1 )
    {
      v59 = v49;
      do
      {
        v60 = v59[4] + 8;
        v61 = *(__int64 ***)(v59[4] + 16);
        if ( *v61 != (__int64 *)v60 )
          __fastfail(3u);
        *v59 = v60;
        ++v58;
        v59[1] = (__int64)v61;
        *v61 = v59;
        *(_QWORD *)(v60 + 8) = v59;
        v59 += 6;
      }
      while ( v58 < a1 );
    }
    v63 = v99;
    _InterlockedAnd(v99, 0xFFFFFF7F);
    if ( a1 > 1 )
    {
      v64 = (volatile signed __int32 **)v100;
      v65 = a1 - 1;
      do
      {
        if ( *v64 != v63 )
        {
          v63 = *v64;
          _InterlockedAnd(*v64, 0xFFFFFF7F);
        }
        ++v64;
        --v65;
      }
      while ( v65 );
    }
    CurrentThread->WaitBlockCount = a1;
    v66 = 0LL;
    if ( v28 )
    {
      do
      {
        _BitScanForward64(&v72, v28);
        v73 = v72;
        _bittestandreset64((__int64 *)&v28, (unsigned int)v72);
        v94 = v72;
        *(_QWORD *)v88 = v28;
        v74 = (char *)KeAbPreAcquire(v89[v72], 0LL);
        v78 = v74;
        if ( !v74 )
          break;
        v66 |= 1LL << v73;
        KeAbPreWait(v74, v75, v76, v77);
        v79 = v78[8];
        v28 = *(_QWORD *)v88;
        v80 = v27++;
        v100[v80 + 504] = (2 * (v79 & 0x3F)) | 1;
      }
      while ( *(_QWORD *)v88 );
      CurrentThread = v97;
      v49 = (__int64 *)v96;
    }
    v67 = 0;
    v98 = KiCommitThreadWait((ULONG_PTR)CurrentThread, v49, v85, v90, v23, 0LL);
    LODWORD(WaitStatus) = v98;
    v87 = 0;
    v68 = (v98 & 0xFFFFFF40) == 0;
    CurrentThread->AbWaitObject = 0LL;
    if ( v66 )
    {
      do
      {
        _BitScanForward64(&v81, v66);
        v95 = v81;
        v66 &= ~(1LL << v81);
        v82 = v89[(unsigned int)v81];
        v83 = &KeGetCurrentThread()->KernelAbEntries->Entries[(unsigned __int64)(unsigned __int8)v100[v67 + 504] >> 1];
        v92 = (_QWORD *)(8LL * (unsigned int)v81);
        KeAbPreAcquire(v82, (__int64)v83);
        if ( v68 )
          v83->AcquiredByte = 1;
        else
          KeAbPostReleaseEx(*(_QWORD *)((char *)v92 + (_QWORD)v89), (ULONG_PTR)v83);
        ++v67;
      }
      while ( v66 );
      CurrentThread = v97;
      LODWORD(WaitStatus) = v98;
    }
    if ( (_DWORD)WaitStatus == 256 )
    {
      v69 = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags )
        KiRaiseIrqlProcessIrqlFlags(v69, 2LL);
      p_WaitIrql = v91;
      v9 = a4;
      *v91 = v69;
      continue;
    }
    return (unsigned int)WaitStatus;
  }
}
