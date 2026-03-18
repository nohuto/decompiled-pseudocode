/*
 * XREFs of ExpSetTimerObject @ 0x1403329C0
 * Callers:
 *     NtSetTimer @ 0x140332480 (NtSetTimer.c)
 *     NtSetTimerEx @ 0x140332710 (NtSetTimerEx.c)
 * Callees:
 *     KeRemoveQueueApc @ 0x140205700 (KeRemoveQueueApc.c)
 *     KiReleaseSpinLockInstrumented @ 0x14024E080 (KiReleaseSpinLockInstrumented.c)
 *     KxAcquireSpinLock @ 0x140254AE0 (KxAcquireSpinLock.c)
 *     KiAcquireSpinLockInstrumented @ 0x140254BA0 (KiAcquireSpinLockInstrumented.c)
 *     KxWaitForSpinLockAndAcquire @ 0x140254C70 (KxWaitForSpinLockAndAcquire.c)
 *     EtwTraceKernelEvent @ 0x140255180 (EtwTraceKernelEvent.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1402595C0 (KiLeaveCriticalRegionUnsafe.c)
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     KxReleaseSpinLock @ 0x140279CC0 (KxReleaseSpinLock.c)
 *     HvlNotifyLongSpinWait @ 0x140293260 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140293290 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     KiExitDispatcher @ 0x14031E7A0 (KiExitDispatcher.c)
 *     ObfDereferenceObjectWithTag @ 0x1403254A0 (ObfDereferenceObjectWithTag.c)
 *     PoDestroyReasonContext @ 0x140331BA4 (PoDestroyReasonContext.c)
 *     KeCancelTimer @ 0x140333B20 (KeCancelTimer.c)
 *     KiInsertTimerTable @ 0x140334E60 (KiInsertTimerTable.c)
 *     KiTimerWaitTest @ 0x140335E10 (KiTimerWaitTest.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     ObpPushStackInfo @ 0x1403407AC (ObpPushStackInfo.c)
 *     ObpDeferObjectDeletion @ 0x1403C485C (ObpDeferObjectDeletion.c)
 *     KiTraceSetTimer @ 0x140401CDC (KiTraceSetTimer.c)
 *     PsInsertVirtualizedTimer @ 0x14046374C (PsInsertVirtualizedTimer.c)
 *     KeRemoveQueueDpcEx @ 0x140464090 (KeRemoveQueueDpcEx.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     ExpCheckTestsigningEnabled @ 0x1406FB358 (ExpCheckTestsigningEnabled.c)
 *     ExpCheckWakeTimerAccess @ 0x140A96318 (ExpCheckWakeTimerAccess.c)
 */

__int64 __fastcall ExpSetTimerObject(
        ULONG_PTR BugCheckParameter2,
        char a2,
        __int64 *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        char a7,
        unsigned int a8,
        unsigned int a9,
        _BYTE *a10)
{
  char v13; // r12
  char v14; // si
  _KPROCESS *Process; // r13
  unsigned __int8 CurrentIrql; // al
  volatile signed __int32 *p_CpuPartitionList; // rcx
  int v18; // ebx
  int v19; // r13d
  unsigned int v20; // r10d
  struct _KTHREAD *v21; // rbx
  volatile signed __int32 *p_StackLimit; // rcx
  struct _KTHREAD *v23; // rcx
  struct _KTHREAD **ThreadLock; // rdx
  ULONG_PTR v25; // r11
  __int64 v26; // rbx
  __int64 v27; // r14
  __int64 v28; // rax
  volatile signed __int32 *v29; // rsi
  unsigned int v30; // r15d
  unsigned __int16 v31; // r8
  __int64 v32; // r11
  unsigned __int64 v33; // r9
  __int64 v34; // r10
  _QWORD *v35; // rcx
  _QWORD *v36; // rax
  char v37; // r15
  _KPROCESS *v38; // rcx
  char v39; // al
  __int16 v40; // dx
  char v41; // cl
  __int64 v42; // rdx
  __int64 v43; // rax
  __int64 v44; // rax
  _QWORD *v45; // rbx
  volatile signed __int64 *v46; // rcx
  volatile signed __int64 *v47; // rcx
  signed __int64 BugCheckParameter4; // rcx
  _BYTE *v49; // rdx
  __int64 v51; // rcx
  unsigned __int64 v52; // rax
  __int64 v53; // rax
  unsigned __int64 v54; // rcx
  unsigned __int64 v55; // rcx
  unsigned __int64 v56; // r8
  unsigned int v57; // ecx
  volatile signed __int32 *v58; // r12
  unsigned int v59; // r15d
  volatile signed __int32 *v60; // r15
  __int64 v61; // rcx
  unsigned int v62; // esi
  volatile signed __int32 *v63; // rax
  unsigned int v64; // esi
  unsigned int v65; // esi
  __int64 v66; // rax
  __int64 v67; // rbx
  _QWORD *v68; // rcx
  _QWORD *v69; // rax
  __int64 v70; // rdx
  __int64 v71; // r8
  __int64 v72; // r9
  unsigned int v73; // ebx
  char v74; // cl
  __int64 v75; // rsi
  __int64 v76; // r8
  _QWORD *v77; // rdx
  unsigned int v78; // ecx
  int v79; // eax
  _QWORD *v80; // rax
  __int64 v81; // rdx
  _QWORD *v82; // rcx
  __int64 v83; // rcx
  __int64 v84; // rax
  __int64 v85; // rsi
  unsigned __int8 v86; // si
  __int64 v87; // rbx
  unsigned int v88; // edx
  int v89; // eax
  unsigned int v90; // eax
  char v91; // [rsp+30h] [rbp-F8h]
  char v92; // [rsp+31h] [rbp-F7h]
  char v94; // [rsp+33h] [rbp-F5h]
  unsigned int v95; // [rsp+34h] [rbp-F4h]
  unsigned int v96; // [rsp+38h] [rbp-F0h]
  unsigned int v97; // [rsp+3Ch] [rbp-ECh]
  unsigned int v98; // [rsp+40h] [rbp-E8h]
  unsigned int v99; // [rsp+44h] [rbp-E4h]
  unsigned int v100; // [rsp+48h] [rbp-E0h]
  unsigned int v101; // [rsp+4Ch] [rbp-DCh]
  unsigned int v102; // [rsp+50h] [rbp-D8h]
  __int64 v103; // [rsp+58h] [rbp-D0h]
  unsigned __int8 v104; // [rsp+60h] [rbp-C8h]
  struct _KPRCB *v105; // [rsp+68h] [rbp-C0h]
  struct _KPRCB *CurrentPrcb; // [rsp+68h] [rbp-C0h]
  ULONG_PTR v107; // [rsp+70h] [rbp-B8h]
  struct _KTHREAD *CurrentThread; // [rsp+78h] [rbp-B0h]
  int v109; // [rsp+80h] [rbp-A8h]
  unsigned __int64 v110; // [rsp+98h] [rbp-90h]
  __int64 v111; // [rsp+A0h] [rbp-88h]
  ULONG_PTR v112; // [rsp+A8h] [rbp-80h] BYREF
  PVOID Object; // [rsp+B0h] [rbp-78h]
  volatile signed __int32 *v114; // [rsp+B8h] [rbp-70h]
  __int64 v115; // [rsp+C0h] [rbp-68h]
  _BYTE *v116; // [rsp+C8h] [rbp-60h]
  __int128 v117; // [rsp+D0h] [rbp-58h]
  __int64 v118; // [rsp+E0h] [rbp-48h]
  _QWORD v119[2]; // [rsp+E8h] [rbp-40h] BYREF
  __int64 retaddr; // [rsp+128h] [rbp+0h]

  v116 = a10;
  v13 = a7;
  v14 = 0;
  v98 = 0;
  v92 = 0;
  CurrentThread = 0LL;
  if ( a6 )
  {
    if ( a7 )
    {
      if ( !(unsigned __int8)ExpCheckTestsigningEnabled() )
      {
        v73 = ExpCheckWakeTimerAccess((unsigned __int8)KeGetCurrentThread()->PreviousMode);
        v98 = v73;
        if ( v73 )
        {
          ObfDereferenceObjectWithTag((PVOID)BugCheckParameter2, 0x746C6644u);
          return v73;
        }
      }
    }
    if ( (int)qword_140F0BB80 >= 2 || byte_140F0BB53 )
    {
      v92 = 1;
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      v66 = KeAbPreAcquire(&ExpWakeTimerLock, 0LL, 0LL);
      v67 = v66;
      if ( _interlockedbittestandset64((volatile signed __int32 *)&ExpWakeTimerLock, 0LL) )
        ExfAcquirePushLockExclusiveEx(&ExpWakeTimerLock, v66, &ExpWakeTimerLock);
      if ( v67 )
        *(_BYTE *)(v67 + 10) = 1;
    }
    else
    {
      v98 = 1073741861;
      a6 = 0LL;
    }
  }
  v107 = 0LL;
  Process = KeGetCurrentThread()->ApcState.Process;
  Object = Process;
  v91 = 0;
  CurrentIrql = KeGetCurrentIrql();
  v104 = CurrentIrql;
  __writecr8(2uLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2LL);
  if ( a2 && (*(_DWORD *)&Process->0 & 0x10) != 0 )
  {
    p_CpuPartitionList = (volatile signed __int32 *)&Process[3].CpuPartitionList;
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
    {
      if ( _interlockedbittestandset64(p_CpuPartitionList, 0LL) )
        KxWaitForSpinLockAndAcquire(p_CpuPartitionList);
    }
    else
    {
      KiAcquireSpinLockInstrumented(p_CpuPartitionList);
    }
    v14 = 1;
    v91 = 1;
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
  {
    if ( _interlockedbittestandset64((volatile signed __int32 *)(BugCheckParameter2 + 64), 0LL) )
      KxWaitForSpinLockAndAcquire((volatile signed __int32 *)(BugCheckParameter2 + 64));
  }
  else
  {
    KiAcquireSpinLockInstrumented((volatile signed __int32 *)(BugCheckParameter2 + 64));
  }
  if ( !v92 && *(_QWORD *)(BugCheckParameter2 + 256) )
  {
    KxReleaseSpinLock((volatile signed __int64 *)(BugCheckParameter2 + 64));
    if ( v14 )
      KxReleaseSpinLock((volatile signed __int64 *)&Process[3].CpuPartitionList);
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v104);
    __writecr8(v104);
    v92 = 1;
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v84 = KeAbPreAcquire(&ExpWakeTimerLock, 0LL, 0LL);
    v85 = v84;
    if ( _interlockedbittestandset64((volatile signed __int32 *)&ExpWakeTimerLock, 0LL) )
      ExfAcquirePushLockExclusiveEx(&ExpWakeTimerLock, v84, &ExpWakeTimerLock);
    if ( v85 )
      *(_BYTE *)(v85 + 10) = 1;
    v86 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(v86, 2LL);
    v104 = v86;
    if ( v91 )
      KxAcquireSpinLock((PKSPIN_LOCK)&Process[3].CpuPartitionList);
    KxAcquireSpinLock((PKSPIN_LOCK)(BugCheckParameter2 + 64));
  }
  v18 = 0;
  if ( (*(_BYTE *)(BugCheckParameter2 + 304) & 1) != 0 )
  {
    v75 = *(_QWORD *)(BugCheckParameter2 + 80);
    KxAcquireSpinLock((PKSPIN_LOCK)(v75 + 1264));
    v76 = *(_QWORD *)(BugCheckParameter2 + 224);
    v77 = *(_QWORD **)(BugCheckParameter2 + 232);
    if ( *(_QWORD *)(v76 + 8) != BugCheckParameter2 + 224 || *v77 != BugCheckParameter2 + 224 )
      goto LABEL_21;
    *v77 = v76;
    *(_QWORD *)(v76 + 8) = v77;
    KxReleaseSpinLock((volatile signed __int64 *)(v75 + 1264));
    *(_BYTE *)(BugCheckParameter2 + 304) &= ~1u;
    if ( (*(_BYTE *)(BugCheckParameter2 + 304) & 2) != 0 && *(_BYTE *)(BugCheckParameter2 + 248)
      || KeCancelTimer((PKTIMER)BugCheckParameter2)
      || (unsigned __int8)KeRemoveQueueDpcEx(BugCheckParameter2 + 160, 0LL) )
    {
      v18 = 1;
    }
    if ( KeRemoveQueueApc(BugCheckParameter2 + 72) )
      ++v18;
  }
  else
  {
    KeCancelTimer((PKTIMER)BugCheckParameter2);
  }
  *(_BYTE *)(BugCheckParameter2 + 248) = 0;
  v19 = v18 + 1;
  v94 = *(_BYTE *)(BugCheckParameter2 + 4);
  v20 = a8;
  *(_DWORD *)(BugCheckParameter2 + 240) = a8;
  *(_DWORD *)(BugCheckParameter2 + 244) = 0;
  *(_DWORD *)(BugCheckParameter2 + 320) = a9;
  if ( a4 )
  {
    v21 = KeGetCurrentThread();
    *(_BYTE *)(BugCheckParameter2 + 72) = 18;
    *(_BYTE *)(BugCheckParameter2 + 74) = 88;
    *(_BYTE *)(BugCheckParameter2 + 152) = v21->ApcStateIndex;
    *(_QWORD *)(BugCheckParameter2 + 80) = v21;
    *(_QWORD *)(BugCheckParameter2 + 104) = ExpTimerApcRoutine;
    *(_QWORD *)(BugCheckParameter2 + 112) = 0LL;
    *(_QWORD *)(BugCheckParameter2 + 120) = a4;
    *(_BYTE *)(BugCheckParameter2 + 153) = a2;
    *(_QWORD *)(BugCheckParameter2 + 128) = a5;
    *(_BYTE *)(BugCheckParameter2 + 154) = 0;
    *(_BYTE *)(BugCheckParameter2 + 73) = 0;
    p_StackLimit = (volatile signed __int32 *)&v21[1].StackLimit;
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
    {
      if ( _interlockedbittestandset64(p_StackLimit, 0LL) )
        KxWaitForSpinLockAndAcquire(p_StackLimit);
    }
    else
    {
      KiAcquireSpinLockInstrumented(p_StackLimit);
    }
    v23 = (struct _KTHREAD *)(BugCheckParameter2 + 224);
    ThreadLock = (struct _KTHREAD **)v21[1].ThreadLock;
    if ( *ThreadLock != (struct _KTHREAD *)&v21[1].StackBase )
      goto LABEL_21;
    *(_QWORD *)&v23->Header.Lock = (char *)v21 + 1272;
    *(_QWORD *)(BugCheckParameter2 + 232) = ThreadLock;
    *ThreadLock = v23;
    v21[1].ThreadLock = (unsigned __int64)v23;
    *(_BYTE *)(BugCheckParameter2 + 304) |= 1u;
    if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
      _InterlockedAnd64((volatile signed __int64 *)&v21[1].StackLimit, 0LL);
    else
      KiReleaseSpinLockInstrumented((volatile signed __int64 *)&v21[1].StackLimit, retaddr);
    v25 = BugCheckParameter2 + 160;
    v107 = BugCheckParameter2 + 160;
    --v19;
    v20 = 0;
    a8 = 0;
  }
  else
  {
    v25 = 0LL;
  }
  v26 = *a3;
  v105 = (struct _KPRCB *)*a3;
  if ( v91 )
  {
    if ( !*(_QWORD *)(BugCheckParameter2 + 280) )
    {
      PsInsertVirtualizedTimer(Object, BugCheckParameter2 + 280);
      v20 = a8;
      v25 = v107;
    }
    _InterlockedIncrement((volatile signed __int32 *)Object + 446);
    if ( (*((_DWORD *)Object + 34) & 0x10) != 0 )
    {
      v51 = *((unsigned int *)Object + 17);
      if ( (_DWORD)v51 )
      {
        v26 = *a3;
        v52 = *a3;
        if ( *a3 >= 0 )
        {
          v87 = MEMORY[0xFFFFF78000000014];
          if ( v52 > MEMORY[0xFFFFF78000000014] )
            v87 = *a3;
          v26 = v51 + v87;
          if ( v26 < *a3 )
            v26 = *a3;
        }
        else
        {
          v53 = v52 - v51;
          if ( v53 <= v26 )
            v26 = v53;
        }
        HIDWORD(v105) = HIDWORD(v26);
        v88 = (unsigned int)v51 / 0x2710;
        if ( v20 )
        {
          v89 = v88 + v20;
          if ( v88 + v20 > v20 )
          {
            v20 += v88;
            a8 = v89;
            *(_DWORD *)(BugCheckParameter2 + 240) += v88;
LABEL_253:
            *(_DWORD *)(BugCheckParameter2 + 244) = v88;
            goto LABEL_35;
          }
        }
        v90 = *(_DWORD *)(BugCheckParameter2 + 240);
        if ( v90 && v90 + v88 > v90 )
        {
          *(_DWORD *)(BugCheckParameter2 + 240) = v90 + v88;
          goto LABEL_253;
        }
      }
    }
  }
LABEL_35:
  if ( (*(_BYTE *)(BugCheckParameter2 + 304) & 2) != 0 )
  {
    *(_QWORD *)(BugCheckParameter2 + 312) = v26;
    if ( SHIDWORD(v105) >= 0 )
    {
      *(_BYTE *)(BugCheckParameter2 + 248) = 1;
    }
    else
    {
      v74 = 3;
      if ( !a6 )
        v74 = 2;
      *(_BYTE *)(BugCheckParameter2 + 248) = v74;
    }
    v44 = a6;
    goto LABEL_68;
  }
  v117 = 0LL;
  v118 = 0LL;
  if ( a9 )
  {
    v54 = 10000LL * a9;
    if ( v54 > 0xFC0000 )
    {
      v55 = v54 - 16515072;
      if ( v26 >= 0 )
      {
        v56 = v55 + v26;
        if ( (__int64)(v55 + v26) < v26 )
          v56 = 0x7FFFFFFFFFFFFFFFLL;
      }
      else
      {
        v56 = v26 - v55;
        if ( (__int64)(v26 - v55) > v26 )
          v56 = 0x8000000000000000uLL;
      }
      if ( v20 )
      {
        v78 = v20 + (int)v55 / 10000;
        v79 = -1;
        if ( v78 >= v20 )
          v79 = v78;
        a8 = v79;
      }
      LODWORD(v54) = 16515072;
      v26 = v56;
    }
    v57 = (unsigned int)v54 >> 18;
    if ( v57 > 0x3F )
      LOBYTE(v57) = 63;
    BYTE1(v117) = 4 * v57;
  }
  v27 = KiWaitNever ^ __ROR8__(BugCheckParameter2 ^ _byteswap_uint64(KiWaitAlways ^ v25), KiWaitNever);
  v28 = KeGetCurrentIrql();
  v115 = v28;
  __writecr8(2uLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags((unsigned __int8)v28, 2LL);
  CurrentPrcb = KeGetCurrentPrcb();
  v112 = 0LL;
  while ( 1 )
  {
    v99 = 0;
    if ( _interlockedbittestandset((volatile signed __int32 *)BugCheckParameter2, 7u) )
    {
      do
      {
        v62 = v99 + 1;
        v99 = v62;
        if ( (v62 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && KiCheckVpBackingLongSpinWaitHypercall() )
        {
          HvlNotifyLongSpinWait(v62);
        }
        else
        {
          _mm_pause();
        }
      }
      while ( (*(_DWORD *)BugCheckParameter2 & 0x80u) != 0
           || _interlockedbittestandset((volatile signed __int32 *)BugCheckParameter2, 7u) );
    }
    if ( (*(_BYTE *)(BugCheckParameter2 + 3) & 0xC0) == 0 )
    {
      v37 = 0;
      goto LABEL_53;
    }
    v95 = *(unsigned __int8 *)(BugCheckParameter2 + 2);
    v103 = KiProcessorBlock[*(unsigned __int16 *)(BugCheckParameter2 + 56)] + 16640;
    v29 = (volatile signed __int32 *)(v103
                                    + 32
                                    * (((unsigned __int64)*(unsigned __int16 *)(BugCheckParameter2 + 58) << 8)
                                     + *(unsigned __int8 *)(BugCheckParameter2 + 2)
                                     + 16LL));
    v100 = 0;
    while ( _interlockedbittestandset64(v29, 0LL) )
    {
      do
      {
        v30 = v100 + 1;
        v100 = v30;
        if ( (v30 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && KiCheckVpBackingLongSpinWaitHypercall() )
        {
          HvlNotifyLongSpinWait(v30);
        }
        else
        {
          _mm_pause();
        }
      }
      while ( *(_QWORD *)v29 );
    }
    if ( *(char *)(BugCheckParameter2 + 3) >= 0 )
      break;
    _InterlockedAnd64((volatile signed __int64 *)v29, 0LL);
    if ( _InterlockedExchange64((volatile __int64 *)(v103 + 8LL * (*(_BYTE *)(BugCheckParameter2 + 3) & 0x3F)), 0LL) )
    {
      _InterlockedAnd((volatile signed __int32 *)BugCheckParameter2, 0xFFFFFFu);
      v37 = 1;
      goto LABEL_53;
    }
    _InterlockedAnd((volatile signed __int32 *)BugCheckParameter2, 0xFFFFFF7F);
    v96 = 0;
    while ( *(char *)(BugCheckParameter2 + 3) < 0 )
    {
      v65 = v96 + 1;
      v96 = v65;
      if ( (v65 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && KiCheckVpBackingLongSpinWaitHypercall() )
      {
        HvlNotifyLongSpinWait(v65);
      }
      else
      {
        _mm_pause();
      }
    }
  }
  v31 = *(_WORD *)(BugCheckParameter2 + 58);
  v32 = v103;
  v33 = v103 + 32 * (((unsigned __int64)v31 << 8) + v95 + 16LL);
  v110 = v33;
  v34 = v103 + 32 * (((v31 ^ 1LL) << 8) + v95 + 16LL);
  v111 = v34;
  v35 = *(_QWORD **)(BugCheckParameter2 + 32);
  v36 = *(_QWORD **)(BugCheckParameter2 + 40);
  if ( v35[1] != BugCheckParameter2 + 32 || *v36 != BugCheckParameter2 + 32 )
LABEL_21:
    __fastfail(3u);
  *v36 = v35;
  v35[1] = v36;
  if ( v36 != v35 )
    goto LABEL_52;
  *(_DWORD *)(v33 + 28) = -1;
  if ( !v31 )
  {
    v58 = (volatile signed __int32 *)(v103 + 32 * (v95 + 272LL));
    v114 = v58;
    v101 = 0;
    while ( _interlockedbittestandset64(v58, 0LL) )
    {
      do
      {
        v59 = v101 + 1;
        v101 = v59;
        if ( (v59 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && KiCheckVpBackingLongSpinWaitHypercall() )
        {
          HvlNotifyLongSpinWait(v59);
        }
        else
        {
          _mm_pause();
        }
      }
      while ( *(_QWORD *)v58 );
    }
    v13 = a7;
    v60 = v114;
    goto LABEL_114;
  }
  v60 = (volatile signed __int32 *)(v103 + 32 * (v95 + 16LL));
  v63 = v60;
  if ( _interlockedbittestandset64(v60, 0LL) )
  {
    _mm_pause();
    v60 = 0LL;
  }
  if ( !v60 )
  {
    _InterlockedAnd64((volatile signed __int64 *)v29, 0LL);
    v60 = v63;
    v102 = 0;
    while ( _interlockedbittestandset64(v60, 0LL) )
    {
      do
      {
        v64 = v102 + 1;
        v102 = v64;
        if ( (v64 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && KiCheckVpBackingLongSpinWaitHypercall() )
        {
          HvlNotifyLongSpinWait(v64);
        }
        else
        {
          _mm_pause();
        }
      }
      while ( *(_QWORD *)v60 );
    }
    v29 = (volatile signed __int32 *)(v103 + 32 * (v95 + 272LL));
    v97 = 0;
    while ( _interlockedbittestandset64(v29, 0LL) )
    {
      do
      {
        if ( (++v97 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && KiCheckVpBackingLongSpinWaitHypercall() )
        {
          HvlNotifyLongSpinWait(v97);
        }
        else
        {
          _mm_pause();
        }
      }
      while ( *(_QWORD *)v29 );
    }
LABEL_114:
    v32 = v103;
    v34 = v111;
    v33 = v110;
  }
  if ( *(_DWORD *)(v33 + 28) == -1 && *(_DWORD *)(v34 + 28) == -1 )
  {
    v61 = qword_140FC7508[2 * *(unsigned __int8 *)(v32 - 16432)];
    if ( KiSerializeTimerExpiration )
    {
      _interlockedbittestandreset64((volatile signed __int32 *)(v61 + 8LL * (v95 >> 6)), v95 & 0x3F);
      goto LABEL_119;
    }
    _interlockedbittestandreset64(
      (volatile signed __int32 *)(((unsigned __int64)v95 << 6) + v61),
      *(unsigned __int8 *)(v32 - 16431));
    _InterlockedAnd64((volatile signed __int64 *)v60, 0LL);
  }
  else
  {
LABEL_119:
    _InterlockedAnd64((volatile signed __int64 *)v60, 0LL);
  }
LABEL_52:
  _InterlockedAnd64((volatile signed __int64 *)v29, 0LL);
  _InterlockedAnd((volatile signed __int32 *)BugCheckParameter2, 0xBFFFFFFF);
  v37 = 1;
LABEL_53:
  if ( (DWORD2(PerfGlobalGroupMask) & 0x20000) != 0 && v37 )
  {
    v112 = BugCheckParameter2;
    v119[0] = &v112;
    v119[1] = 8LL;
    EtwTraceKernelEvent((int)v119, 1, 0x40020000u, 3925, 1538);
  }
  v40 = 0;
  if ( !KiGlobalTimerResolutionRequests )
  {
    if ( CurrentPrcb->NestingLevel
      || ((v38 = KeGetCurrentThread()->ApcState.Process, (v38[1].DirectoryTableBase & 0x100000000000LL) == 0)
       || (v38[3].ActiveGroupsMask.Masks[1] & 0x400000000000000LL) != 0
        ? (v39 = 0)
        : (v39 = 1),
          !v39) )
    {
      v40 = 1;
    }
  }
  *(_WORD *)(BugCheckParameter2 + 58) = v40;
  *(_QWORD *)(BugCheckParameter2 + 48) = v27;
  *(_DWORD *)(BugCheckParameter2 + 60) = a8;
  v109 = *(_DWORD *)BugCheckParameter2;
  v41 = BYTE1(v117);
  BYTE1(v109) = BYTE1(v117);
  if ( v26 >= 0 )
  {
    BYTE1(v109) = BYTE1(v117) | 1;
    v26 = MEMORY[0xFFFFF78000000014] - v26;
    if ( v26 >= 0 )
    {
      *(_DWORD *)BugCheckParameter2 = v109;
      *(_QWORD *)(BugCheckParameter2 + 24) = 0LL;
LABEL_105:
      KiTimerWaitTest(CurrentPrcb, BugCheckParameter2, 0LL);
      goto LABEL_66;
    }
    v41 = BYTE1(v117) | 1;
  }
  v42 = 0LL;
  if ( (v41 & 0xFC) != 0 )
    v42 = (unsigned __int8)(v41 & 0xFC) << 16;
  v43 = MEMORY[0xFFFFF78000000008] - v26;
  *(_QWORD *)(BugCheckParameter2 + 24) = MEMORY[0xFFFFF78000000008] - v26;
  HIBYTE(v109) |= 0x40u;
  BYTE2(v109) = (unsigned __int64)(v42 + v43) >> 18;
  *(_DWORD *)BugCheckParameter2 = v109;
  *(_DWORD *)(BugCheckParameter2 + 4) = 0;
  if ( !(unsigned __int8)KiInsertTimerTable((_DWORD)CurrentPrcb, BugCheckParameter2, v107, BYTE2(v109), 0LL) )
    goto LABEL_105;
  if ( (DWORD2(PerfGlobalGroupMask) & 0x20000) != 0 )
    KiTraceSetTimer(BugCheckParameter2, v107, 0LL);
  else
    _InterlockedAnd((volatile signed __int32 *)BugCheckParameter2, 0xFFFFFF7F);
LABEL_66:
  KiExitDispatcher((unsigned __int64)CurrentPrcb, 0LL, 1u, 0, v115);
  v44 = a6;
  if ( a6 )
    _interlockedbittestandset((volatile signed __int32 *)BugCheckParameter2, 9u);
LABEL_68:
  v45 = *(_QWORD **)(BugCheckParameter2 + 256);
  *(_QWORD *)(BugCheckParameter2 + 256) = v44;
  *(_BYTE *)(BugCheckParameter2 + 304) ^= (*(_BYTE *)(BugCheckParameter2 + 304) ^ (4 * v13)) & 4;
  v46 = (volatile signed __int64 *)(BugCheckParameter2 + 64);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
    _InterlockedAnd64(v46, 0LL);
  else
    KiReleaseSpinLockInstrumented(v46, retaddr);
  if ( v91 )
  {
    v47 = (volatile signed __int64 *)((char *)Object + 1800);
    if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
      _InterlockedAnd64(v47, 0LL);
    else
      KiReleaseSpinLockInstrumented(v47, retaddr);
  }
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v104);
  __writecr8(v104);
  if ( v92 )
  {
    if ( v45 )
    {
      if ( !a6 )
      {
        v80 = (_QWORD *)(BugCheckParameter2 + 264);
        v81 = *(_QWORD *)(BugCheckParameter2 + 264);
        v82 = *(_QWORD **)(BugCheckParameter2 + 272);
        if ( *(_QWORD *)(v81 + 8) != BugCheckParameter2 + 264 || (_QWORD *)*v82 != v80 )
          goto LABEL_21;
        *v82 = v81;
        *(_QWORD *)(v81 + 8) = v82;
        *v80 = 0LL;
      }
    }
    else if ( a6 )
    {
      v68 = (_QWORD *)(BugCheckParameter2 + 264);
      v69 = (_QWORD *)qword_140EFA658;
      if ( *(__int64 **)qword_140EFA658 != &ExpWakeTimerList )
        goto LABEL_21;
      *v68 = &ExpWakeTimerList;
      *(_QWORD *)(BugCheckParameter2 + 272) = v69;
      *v69 = v68;
      qword_140EFA658 = BugCheckParameter2 + 264;
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ExpWakeTimerLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&ExpWakeTimerLock);
    KeAbPostRelease((ULONG_PTR)&ExpWakeTimerLock);
    KiLeaveCriticalRegionUnsafe((__int64)CurrentThread, v70, v71, v72);
    if ( v45 )
      PoDestroyReasonContext(v45);
  }
  if ( v19 )
  {
    if ( ObpTraceFlags )
      ObpPushStackInfo(BugCheckParameter2 - 48);
    BugCheckParameter4 = _InterlockedExchangeAdd64((volatile signed __int64 *)(BugCheckParameter2 - 48), -v19) - v19;
    if ( BugCheckParameter4 <= 0 )
    {
      if ( *(_QWORD *)(BugCheckParameter2 - 40) )
        KeBugCheckEx(
          0x18u,
          ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(BugCheckParameter2 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(BugCheckParameter2 - 48) >> 8)],
          BugCheckParameter2,
          6uLL,
          *(_QWORD *)(BugCheckParameter2 - 40));
      if ( BugCheckParameter4 < 0 )
        KeBugCheckEx(0x18u, 0LL, BugCheckParameter2, 5uLL, BugCheckParameter4);
      ObpDeferObjectDeletion(BugCheckParameter2 - 48);
    }
  }
  v49 = v116;
  if ( v116 )
  {
    if ( a2 )
    {
      v83 = 0x7FFFFFFF0000LL;
      if ( (unsigned __int64)v116 < 0x7FFFFFFF0000LL )
        v83 = (__int64)v116;
      *(_BYTE *)v83 = *(_BYTE *)v83;
      *v49 = v94;
    }
    else
    {
      *v116 = v94;
    }
  }
  return v98;
}
