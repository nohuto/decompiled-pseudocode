/*
 * XREFs of ExpSetTimerObject @ 0x1402EB930
 * Callers:
 *     NtSetTimer @ 0x1402EB3F0 (NtSetTimer.c)
 *     NtSetTimerEx @ 0x1402EB680 (NtSetTimerEx.c)
 * Callees:
 *     KeRemoveQueueApc @ 0x140203580 (KeRemoveQueueApc.c)
 *     KxAcquireSpinLock @ 0x140253560 (KxAcquireSpinLock.c)
 *     KiAcquireSpinLockInstrumented @ 0x140253620 (KiAcquireSpinLockInstrumented.c)
 *     KxWaitForSpinLockAndAcquire @ 0x1402536F0 (KxWaitForSpinLockAndAcquire.c)
 *     EtwTraceKernelEvent @ 0x140254220 (EtwTraceKernelEvent.c)
 *     ObfDereferenceObjectWithTag @ 0x140257820 (ObfDereferenceObjectWithTag.c)
 *     KiExitDispatcher @ 0x140287260 (KiExitDispatcher.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x14029B9E0 (KiLeaveCriticalRegionUnsafe.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ObpPushStackInfo @ 0x14029C310 (ObpPushStackInfo.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402EAAD0 (KiReleaseSpinLockInstrumented.c)
 *     KeCancelTimer @ 0x1402ECAA0 (KeCancelTimer.c)
 *     KiInsertTimerTable @ 0x1402EDE10 (KiInsertTimerTable.c)
 *     KiTimerWaitTest @ 0x1402EEDC0 (KiTimerWaitTest.c)
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KxReleaseSpinLock @ 0x14034A6E0 (KxReleaseSpinLock.c)
 *     ObpDeferObjectDeletion @ 0x14036FDD8 (ObpDeferObjectDeletion.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 *     KiTraceSetTimer @ 0x1403F95AC (KiTraceSetTimer.c)
 *     PsInsertVirtualizedTimer @ 0x140464158 (PsInsertVirtualizedTimer.c)
 *     KeRemoveQueueDpcEx @ 0x140464AC0 (KeRemoveQueueDpcEx.c)
 *     PoDestroyReasonContext @ 0x1404E90C0 (PoDestroyReasonContext.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     ExpCheckTestsigningEnabled @ 0x1407AC054 (ExpCheckTestsigningEnabled.c)
 *     ExpCheckWakeTimerAccess @ 0x140A95FE8 (ExpCheckWakeTimerAccess.c)
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
  char v13; // si
  _KPROCESS *Process; // r13
  unsigned __int8 CurrentIrql; // al
  volatile signed __int32 *p_CpuPartitionList; // rcx
  int v17; // ebx
  ULONG_PTR ThreadLock; // rdx
  __int64 v19; // r9
  signed int v20; // r13d
  unsigned int v21; // r10d
  struct _KTHREAD *v22; // rbx
  volatile signed __int32 *p_StackLimit; // rcx
  _QWORD *v24; // rcx
  ULONG_PTR v25; // r11
  __int64 v26; // rbx
  volatile signed __int32 *v27; // r14
  __int64 v28; // r14
  __int64 v29; // rax
  unsigned __int64 v30; // rcx
  unsigned __int64 v31; // rcx
  volatile signed __int32 *v32; // rsi
  unsigned int v33; // r15d
  unsigned __int16 v34; // r8
  unsigned int v35; // r15d
  __int64 v36; // r11
  unsigned __int64 v37; // r9
  __int64 v38; // r10
  _QWORD *v39; // rcx
  _QWORD *v40; // rax
  char v41; // r15
  _KPROCESS *v42; // rcx
  char v43; // al
  __int16 v44; // dx
  char v45; // cl
  __int64 v46; // rdx
  __int64 v47; // rax
  __int64 v48; // rax
  void *v49; // rbx
  volatile signed __int64 *v50; // rcx
  volatile signed __int64 *v51; // rcx
  signed __int64 BugCheckParameter4; // rcx
  _BYTE *v53; // rdx
  __int64 v55; // rcx
  unsigned __int64 v56; // rax
  __int64 v57; // rax
  unsigned __int64 v58; // rcx
  unsigned __int64 v59; // rcx
  unsigned __int64 v60; // r8
  unsigned int v61; // ecx
  volatile signed __int32 *v62; // r13
  unsigned int v63; // r15d
  __int64 v64; // rcx
  unsigned int v65; // edx
  volatile signed __int32 *v66; // rcx
  unsigned int v67; // esi
  unsigned int v68; // r15d
  unsigned int v69; // esi
  unsigned int v70; // esi
  __int64 *v71; // rax
  __int64 *v72; // rbx
  _QWORD *v73; // rcx
  _QWORD *v74; // rax
  __int64 v75; // rdx
  __int64 v76; // r8
  __int64 v77; // r9
  char v78; // cl
  __int64 v79; // rsi
  __int64 v80; // r8
  _QWORD *v81; // rdx
  unsigned int v82; // ecx
  int v83; // eax
  _QWORD *v84; // rax
  __int64 v85; // rdx
  _QWORD *v86; // rcx
  unsigned int v87; // ebx
  __int64 v88; // rcx
  __int64 *v89; // rax
  __int64 *v90; // rsi
  unsigned __int8 v91; // si
  __int64 v92; // rbx
  int v93; // eax
  unsigned int v94; // eax
  char v95; // [rsp+30h] [rbp-F8h]
  char v96; // [rsp+31h] [rbp-F7h]
  char v98; // [rsp+33h] [rbp-F5h]
  unsigned int v99; // [rsp+34h] [rbp-F4h]
  unsigned int v100; // [rsp+38h] [rbp-F0h]
  unsigned int v101; // [rsp+3Ch] [rbp-ECh]
  unsigned int v102; // [rsp+40h] [rbp-E8h]
  unsigned int v103; // [rsp+44h] [rbp-E4h]
  unsigned int v104; // [rsp+48h] [rbp-E0h]
  unsigned int v105; // [rsp+4Ch] [rbp-DCh]
  unsigned int v106; // [rsp+50h] [rbp-D8h]
  signed int v107; // [rsp+54h] [rbp-D4h]
  __int64 v108; // [rsp+58h] [rbp-D0h]
  unsigned __int8 v109; // [rsp+60h] [rbp-C8h]
  __int64 v110; // [rsp+68h] [rbp-C0h]
  struct _KPRCB *CurrentPrcb; // [rsp+68h] [rbp-C0h]
  ULONG_PTR v112; // [rsp+70h] [rbp-B8h]
  volatile signed __int32 *Object; // [rsp+78h] [rbp-B0h]
  struct _KTHREAD *CurrentThread; // [rsp+80h] [rbp-A8h]
  int v115; // [rsp+88h] [rbp-A0h]
  unsigned __int64 v116; // [rsp+A0h] [rbp-88h]
  __int64 v117; // [rsp+A8h] [rbp-80h]
  ULONG_PTR v118; // [rsp+B0h] [rbp-78h] BYREF
  __int64 v119; // [rsp+B8h] [rbp-70h]
  _BYTE *v120; // [rsp+C0h] [rbp-68h]
  __int128 v121; // [rsp+C8h] [rbp-60h]
  __int64 v122; // [rsp+D8h] [rbp-50h]
  _QWORD v123[2]; // [rsp+E0h] [rbp-48h] BYREF
  __int64 retaddr; // [rsp+128h] [rbp+0h]

  v120 = a10;
  v13 = 0;
  v101 = 0;
  v96 = 0;
  CurrentThread = 0LL;
  if ( a6 )
  {
    if ( a7 )
    {
      if ( !(unsigned __int8)ExpCheckTestsigningEnabled() )
      {
        v87 = ExpCheckWakeTimerAccess((unsigned __int8)KeGetCurrentThread()->PreviousMode);
        v101 = v87;
        if ( v87 )
        {
          ObfDereferenceObjectWithTag((PVOID)BugCheckParameter2, 0x746C6644u);
          return v87;
        }
      }
    }
    if ( (int)qword_140F0B900 >= 2 || byte_140F0B8D3 )
    {
      v96 = 1;
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      v71 = KeAbPreAcquire((__int64)&ExpWakeTimerLock, 0LL);
      v72 = v71;
      if ( _interlockedbittestandset64((volatile signed __int32 *)&ExpWakeTimerLock, 0LL) )
        ExfAcquirePushLockExclusiveEx(&ExpWakeTimerLock, v71, (__int64)&ExpWakeTimerLock);
      if ( v72 )
        *((_BYTE *)v72 + 10) = 1;
    }
    else
    {
      v101 = 1073741861;
      a6 = 0LL;
    }
  }
  v112 = 0LL;
  Process = KeGetCurrentThread()->ApcState.Process;
  Object = &Process->Header.Lock;
  v95 = 0;
  CurrentIrql = KeGetCurrentIrql();
  v109 = CurrentIrql;
  __writecr8(2uLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql);
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
    v13 = 1;
    v95 = 1;
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
  if ( !v96 && *(_QWORD *)(BugCheckParameter2 + 256) )
  {
    KxReleaseSpinLock(BugCheckParameter2 + 64);
    if ( v13 )
      KxReleaseSpinLock(&Process[3].CpuPartitionList);
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v109);
    __writecr8(v109);
    v96 = 1;
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v89 = KeAbPreAcquire((__int64)&ExpWakeTimerLock, 0LL);
    v90 = v89;
    if ( _interlockedbittestandset64((volatile signed __int32 *)&ExpWakeTimerLock, 0LL) )
      ExfAcquirePushLockExclusiveEx(&ExpWakeTimerLock, v89, (__int64)&ExpWakeTimerLock);
    if ( v90 )
      *((_BYTE *)v90 + 10) = 1;
    v91 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(v91);
    v109 = v91;
    if ( v95 )
      KxAcquireSpinLock((PKSPIN_LOCK)&Process[3].CpuPartitionList);
    KxAcquireSpinLock((PKSPIN_LOCK)(BugCheckParameter2 + 64));
  }
  v17 = 0;
  if ( (*(_BYTE *)(BugCheckParameter2 + 304) & 1) != 0 )
  {
    v79 = *(_QWORD *)(BugCheckParameter2 + 80);
    KxAcquireSpinLock((PKSPIN_LOCK)(v79 + 1264));
    v80 = *(_QWORD *)(BugCheckParameter2 + 224);
    v81 = *(_QWORD **)(BugCheckParameter2 + 232);
    if ( *(_QWORD *)(v80 + 8) != BugCheckParameter2 + 224 || *v81 != BugCheckParameter2 + 224 )
      goto LABEL_21;
    *v81 = v80;
    *(_QWORD *)(v80 + 8) = v81;
    KxReleaseSpinLock(v79 + 1264);
    *(_BYTE *)(BugCheckParameter2 + 304) &= ~1u;
    if ( (*(_BYTE *)(BugCheckParameter2 + 304) & 2) != 0 && *(_BYTE *)(BugCheckParameter2 + 248)
      || KeCancelTimer((PKTIMER)BugCheckParameter2)
      || (unsigned __int8)KeRemoveQueueDpcEx(BugCheckParameter2 + 160, 0LL) )
    {
      v17 = 1;
    }
    if ( KeRemoveQueueApc(BugCheckParameter2 + 72) )
      ++v17;
  }
  else
  {
    KeCancelTimer((PKTIMER)BugCheckParameter2);
  }
  *(_BYTE *)(BugCheckParameter2 + 248) = 0;
  v20 = v17 + 1;
  v107 = v17 + 1;
  v98 = *(_BYTE *)(BugCheckParameter2 + 4);
  v21 = a8;
  *(_DWORD *)(BugCheckParameter2 + 240) = a8;
  *(_DWORD *)(BugCheckParameter2 + 244) = 0;
  *(_DWORD *)(BugCheckParameter2 + 320) = a9;
  if ( a4 )
  {
    v22 = KeGetCurrentThread();
    *(_BYTE *)(BugCheckParameter2 + 72) = 18;
    *(_BYTE *)(BugCheckParameter2 + 74) = 88;
    *(_BYTE *)(BugCheckParameter2 + 152) = v22->ApcStateIndex;
    *(_QWORD *)(BugCheckParameter2 + 80) = v22;
    *(_QWORD *)(BugCheckParameter2 + 104) = ExpTimerApcRoutine;
    *(_QWORD *)(BugCheckParameter2 + 112) = 0LL;
    *(_QWORD *)(BugCheckParameter2 + 120) = a4;
    *(_BYTE *)(BugCheckParameter2 + 153) = a2;
    *(_QWORD *)(BugCheckParameter2 + 128) = a5;
    *(_BYTE *)(BugCheckParameter2 + 154) = 0;
    *(_BYTE *)(BugCheckParameter2 + 73) = 0;
    p_StackLimit = (volatile signed __int32 *)&v22[1].StackLimit;
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
    {
      if ( _interlockedbittestandset64(p_StackLimit, 0LL) )
        KxWaitForSpinLockAndAcquire(p_StackLimit);
    }
    else
    {
      KiAcquireSpinLockInstrumented(p_StackLimit);
    }
    v24 = (_QWORD *)(BugCheckParameter2 + 224);
    ThreadLock = v22[1].ThreadLock;
    if ( *(struct _KTHREAD **)ThreadLock != (struct _KTHREAD *)&v22[1].StackBase )
      goto LABEL_21;
    *v24 = (char *)v22 + 1272;
    *(_QWORD *)(BugCheckParameter2 + 232) = ThreadLock;
    *(_QWORD *)ThreadLock = v24;
    v22[1].ThreadLock = (unsigned __int64)v24;
    *(_BYTE *)(BugCheckParameter2 + 304) |= 1u;
    if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
      _InterlockedAnd64((volatile signed __int64 *)&v22[1].StackLimit, 0LL);
    else
      KiReleaseSpinLockInstrumented((volatile signed __int64 *)&v22[1].StackLimit, retaddr);
    v25 = BugCheckParameter2 + 160;
    v112 = BugCheckParameter2 + 160;
    v107 = --v20;
    v21 = 0;
    a8 = 0;
  }
  else
  {
    v25 = 0LL;
  }
  LOBYTE(v19) = 0;
  v26 = *a3;
  v110 = *a3;
  v27 = Object;
  if ( v95 )
  {
    if ( !*(_QWORD *)(BugCheckParameter2 + 280) )
    {
      PsInsertVirtualizedTimer((PVOID)Object, BugCheckParameter2 + 280);
      v21 = a8;
      v25 = v112;
    }
    _InterlockedIncrement(Object + 446);
    if ( (Object[34] & 0x10) != 0 )
    {
      v55 = *((unsigned int *)Object + 17);
      if ( (_DWORD)v55 )
      {
        v26 = *a3;
        v56 = *a3;
        if ( *a3 >= 0 )
        {
          v92 = MEMORY[0xFFFFF78000000014];
          if ( v56 > MEMORY[0xFFFFF78000000014] )
            v92 = *a3;
          v26 = v55 + v92;
          if ( v26 < *a3 )
            v26 = *a3;
        }
        else
        {
          v57 = v56 - v55;
          if ( v57 <= v26 )
            v26 = v57;
        }
        HIDWORD(v110) = HIDWORD(v26);
        ThreadLock = (unsigned int)v55 / 0x2710;
        if ( v21 )
        {
          v93 = ThreadLock + v21;
          if ( (unsigned int)ThreadLock + v21 > v21 )
          {
            v21 += ThreadLock;
            a8 = v93;
            *(_DWORD *)(BugCheckParameter2 + 240) += ThreadLock;
LABEL_254:
            *(_DWORD *)(BugCheckParameter2 + 244) = ThreadLock;
            goto LABEL_35;
          }
        }
        v94 = *(_DWORD *)(BugCheckParameter2 + 240);
        if ( v94 && v94 + (unsigned int)ThreadLock > v94 )
        {
          *(_DWORD *)(BugCheckParameter2 + 240) = v94 + ThreadLock;
          goto LABEL_254;
        }
      }
    }
  }
LABEL_35:
  if ( (*(_BYTE *)(BugCheckParameter2 + 304) & 2) != 0 )
  {
    *(_QWORD *)(BugCheckParameter2 + 312) = v26;
    if ( v110 >= 0 )
    {
      *(_BYTE *)(BugCheckParameter2 + 248) = 1;
    }
    else
    {
      ThreadLock = BugCheckParameter2;
      v78 = 3;
      if ( !a6 )
        v78 = 2;
      *(_BYTE *)(BugCheckParameter2 + 248) = v78;
    }
    v48 = a6;
    goto LABEL_69;
  }
  v121 = 0LL;
  v122 = 0LL;
  if ( a9 )
  {
    v58 = 10000LL * a9;
    if ( v58 > 0xFC0000 )
    {
      v59 = v58 - 16515072;
      if ( v26 >= 0 )
      {
        v60 = v59 + v26;
        if ( (__int64)(v59 + v26) < v26 )
          v60 = 0x7FFFFFFFFFFFFFFFLL;
      }
      else
      {
        v60 = v26 - v59;
        if ( (__int64)(v26 - v59) > v26 )
          v60 = 0x8000000000000000uLL;
      }
      if ( v21 )
      {
        v82 = v21 + (int)v59 / 10000;
        v83 = -1;
        if ( v82 >= v21 )
          v83 = v82;
        a8 = v83;
      }
      LODWORD(v58) = 16515072;
      v26 = v60;
    }
    v61 = (unsigned int)v58 >> 18;
    if ( v61 > 0x3F )
      LOBYTE(v61) = 63;
    BYTE1(v121) = 4 * v61;
  }
  v28 = KiWaitNever ^ __ROR8__(BugCheckParameter2 ^ _byteswap_uint64(KiWaitAlways ^ v25), KiWaitNever);
  v29 = KeGetCurrentIrql();
  v119 = v29;
  __writecr8(2uLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags((unsigned __int8)v29);
  CurrentPrcb = KeGetCurrentPrcb();
  v118 = 0LL;
LABEL_40:
  v30 = 0x140000000uLL;
  while ( 1 )
  {
    v102 = 0;
    if ( _interlockedbittestandset((volatile signed __int32 *)BugCheckParameter2, 7u) )
    {
      do
      {
        v67 = v102 + 1;
        v102 = v67;
        if ( (v67 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v30) )
        {
          HvlNotifyLongSpinWait(v67);
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
      v41 = 0;
      goto LABEL_54;
    }
    v100 = *(unsigned __int8 *)(BugCheckParameter2 + 2);
    v108 = KiProcessorBlock[*(unsigned __int16 *)(BugCheckParameter2 + 56)] + 16640;
    v31 = (unsigned __int64)*(unsigned __int16 *)(BugCheckParameter2 + 58) << 8;
    v32 = (volatile signed __int32 *)(v108 + 32 * (v31 + *(unsigned __int8 *)(BugCheckParameter2 + 2) + 16LL));
    v103 = 0;
    while ( _interlockedbittestandset64(v32, 0LL) )
    {
      do
      {
        v33 = v103 + 1;
        v103 = v33;
        if ( (v33 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v31) )
        {
          HvlNotifyLongSpinWait(v33);
        }
        else
        {
          _mm_pause();
        }
      }
      while ( *(_QWORD *)v32 );
    }
    if ( *(char *)(BugCheckParameter2 + 3) >= 0 )
      break;
    _InterlockedAnd64((volatile signed __int64 *)v32, 0LL);
    if ( _InterlockedExchange64((volatile __int64 *)(v108 + 8LL * (*(_BYTE *)(BugCheckParameter2 + 3) & 0x3F)), 0LL) )
    {
      _InterlockedAnd((volatile signed __int32 *)BugCheckParameter2, 0xFFFFFFu);
      v41 = 1;
      goto LABEL_54;
    }
    _InterlockedAnd((volatile signed __int32 *)BugCheckParameter2, 0xFFFFFF7F);
    v99 = 0;
    v30 = 0x140000000uLL;
    if ( *(char *)(BugCheckParameter2 + 3) < 0 )
    {
      do
      {
        v70 = v99 + 1;
        v99 = v70;
        if ( (v70 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v30) )
        {
          HvlNotifyLongSpinWait(v70);
        }
        else
        {
          _mm_pause();
        }
      }
      while ( *(char *)(BugCheckParameter2 + 3) < 0 );
      goto LABEL_40;
    }
  }
  v34 = *(_WORD *)(BugCheckParameter2 + 58);
  v35 = v100;
  v36 = v108;
  v37 = v108 + 32 * (((unsigned __int64)v34 << 8) + v100 + 16LL);
  v116 = v37;
  v38 = v108 + 32 * (((v34 ^ 1LL) << 8) + v100 + 16LL);
  v117 = v38;
  v39 = *(_QWORD **)(BugCheckParameter2 + 32);
  v40 = *(_QWORD **)(BugCheckParameter2 + 40);
  if ( v39[1] != BugCheckParameter2 + 32 || *v40 != BugCheckParameter2 + 32 )
LABEL_21:
    __fastfail(3u);
  *v40 = v39;
  v39[1] = v40;
  if ( v40 != v39 )
    goto LABEL_53;
  *(_DWORD *)(v37 + 28) = -1;
  if ( !v34 )
  {
    v62 = (volatile signed __int32 *)(v108 + 32 * (v100 + 272LL));
    v104 = 0;
    while ( _interlockedbittestandset64(v62, 0LL) )
    {
      do
      {
        v63 = v104 + 1;
        v104 = v63;
        if ( (v63 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v39) )
        {
          HvlNotifyLongSpinWait(v63);
        }
        else
        {
          _mm_pause();
        }
      }
      while ( *(_QWORD *)v62 );
    }
    goto LABEL_114;
  }
  v62 = (volatile signed __int32 *)(v108 + 32 * (v100 + 16LL));
  if ( _interlockedbittestandset64(v62, 0LL) )
  {
    _mm_pause();
    v62 = 0LL;
  }
  if ( !v62 )
  {
    _InterlockedAnd64((volatile signed __int64 *)v32, 0LL);
    v62 = (volatile signed __int32 *)(v108 + 32 * (v100 + 16LL));
    v105 = 0;
    while ( _interlockedbittestandset64(v62, 0LL) )
    {
      do
      {
        v69 = v105 + 1;
        v105 = v69;
        if ( (v69 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v39) )
        {
          HvlNotifyLongSpinWait(v69);
        }
        else
        {
          _mm_pause();
        }
      }
      while ( *(_QWORD *)v62 );
    }
    v32 = (volatile signed __int32 *)(v108 + 32 * (v100 + 272LL));
    v106 = 0;
    while ( _interlockedbittestandset64(v32, 0LL) )
    {
      do
      {
        v68 = v106 + 1;
        v106 = v68;
        if ( (v68 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v39) )
        {
          HvlNotifyLongSpinWait(v68);
        }
        else
        {
          _mm_pause();
        }
      }
      while ( *(_QWORD *)v32 );
    }
LABEL_114:
    v35 = v100;
    v36 = v108;
    v38 = v117;
    v37 = v116;
  }
  if ( *(_DWORD *)(v37 + 28) == -1 && *(_DWORD *)(v38 + 28) == -1 )
  {
    v64 = qword_140FC7528[2 * *(unsigned __int8 *)(v36 - 16432)];
    if ( KiSerializeTimerExpiration )
    {
      v65 = v35 & 0x3F;
      v66 = (volatile signed __int32 *)(v64 + 8LL * (v35 >> 6));
    }
    else
    {
      v65 = *(unsigned __int8 *)(v36 - 16431);
      v66 = (volatile signed __int32 *)(((unsigned __int64)v35 << 6) + v64);
    }
    _interlockedbittestandreset64(v66, v65);
  }
  _InterlockedAnd64((volatile signed __int64 *)v62, 0LL);
  v20 = v107;
LABEL_53:
  _InterlockedAnd64((volatile signed __int64 *)v32, 0LL);
  _InterlockedAnd((volatile signed __int32 *)BugCheckParameter2, 0xBFFFFFFF);
  v41 = 1;
LABEL_54:
  if ( (DWORD2(PerfGlobalGroupMask) & 0x20000) != 0 && v41 )
  {
    v118 = BugCheckParameter2;
    v123[0] = &v118;
    v123[1] = 8LL;
    EtwTraceKernelEvent((int)v123, 1, 0x40020000u, 3925, 1538);
  }
  v44 = 0;
  if ( !KiGlobalTimerResolutionRequests )
  {
    if ( CurrentPrcb->NestingLevel
      || ((v42 = KeGetCurrentThread()->ApcState.Process, (v42[1].DirectoryTableBase & 0x100000000000LL) == 0)
       || (v42[3].ActiveGroupsMask.Masks[1] & 0x400000000000000LL) != 0
        ? (v43 = 0)
        : (v43 = 1),
          !v43) )
    {
      v44 = 1;
    }
  }
  *(_WORD *)(BugCheckParameter2 + 58) = v44;
  *(_QWORD *)(BugCheckParameter2 + 48) = v28;
  *(_DWORD *)(BugCheckParameter2 + 60) = a8;
  v115 = *(_DWORD *)BugCheckParameter2;
  v45 = BYTE1(v121);
  BYTE1(v115) = BYTE1(v121);
  if ( v26 >= 0 )
  {
    BYTE1(v115) = BYTE1(v121) | 1;
    v26 = MEMORY[0xFFFFF78000000014] - v26;
    if ( v26 >= 0 )
    {
      *(_DWORD *)BugCheckParameter2 = v115;
      *(_QWORD *)(BugCheckParameter2 + 24) = 0LL;
LABEL_106:
      KiTimerWaitTest(CurrentPrcb, BugCheckParameter2, 0LL);
      goto LABEL_67;
    }
    v45 = BYTE1(v121) | 1;
  }
  v46 = 0LL;
  if ( (v45 & 0xFC) != 0 )
    v46 = (unsigned __int8)(v45 & 0xFC) << 16;
  v47 = MEMORY[0xFFFFF78000000008] - v26;
  *(_QWORD *)(BugCheckParameter2 + 24) = MEMORY[0xFFFFF78000000008] - v26;
  HIBYTE(v115) |= 0x40u;
  BYTE2(v115) = (unsigned __int64)(v46 + v47) >> 18;
  *(_DWORD *)BugCheckParameter2 = v115;
  *(_DWORD *)(BugCheckParameter2 + 4) = 0;
  if ( !(unsigned __int8)KiInsertTimerTable((_DWORD)CurrentPrcb, BugCheckParameter2, v112, BYTE2(v115), 0LL) )
    goto LABEL_106;
  if ( (DWORD2(PerfGlobalGroupMask) & 0x20000) != 0 )
    KiTraceSetTimer(BugCheckParameter2, v112, 0LL);
  else
    _InterlockedAnd((volatile signed __int32 *)BugCheckParameter2, 0xFFFFFF7F);
LABEL_67:
  KiExitDispatcher(CurrentPrcb, 0LL, 1u, 0, v119);
  v48 = a6;
  v27 = Object;
  if ( a6 )
    _interlockedbittestandset((volatile signed __int32 *)BugCheckParameter2, 9u);
LABEL_69:
  v49 = *(void **)(BugCheckParameter2 + 256);
  *(_QWORD *)(BugCheckParameter2 + 256) = v48;
  *(_BYTE *)(BugCheckParameter2 + 304) ^= (*(_BYTE *)(BugCheckParameter2 + 304) ^ (4 * a7)) & 4;
  v50 = (volatile signed __int64 *)(BugCheckParameter2 + 64);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
    _InterlockedAnd64(v50, 0LL);
  else
    KiReleaseSpinLockInstrumented(v50, retaddr);
  if ( v95 )
  {
    v51 = (volatile signed __int64 *)(v27 + 450);
    if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
      _InterlockedAnd64(v51, 0LL);
    else
      KiReleaseSpinLockInstrumented(v51, retaddr);
  }
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v109);
  __writecr8(v109);
  if ( v96 )
  {
    if ( v49 )
    {
      if ( !a6 )
      {
        v84 = (_QWORD *)(BugCheckParameter2 + 264);
        v85 = *(_QWORD *)(BugCheckParameter2 + 264);
        v86 = *(_QWORD **)(BugCheckParameter2 + 272);
        if ( *(_QWORD *)(v85 + 8) != BugCheckParameter2 + 264 || (_QWORD *)*v86 != v84 )
          goto LABEL_21;
        *v86 = v85;
        *(_QWORD *)(v85 + 8) = v86;
        *v84 = 0LL;
      }
    }
    else if ( a6 )
    {
      v73 = (_QWORD *)(BugCheckParameter2 + 264);
      v74 = (_QWORD *)qword_140EFA318;
      if ( *(__int64 **)qword_140EFA318 != &ExpWakeTimerList )
        goto LABEL_21;
      *v73 = &ExpWakeTimerList;
      *(_QWORD *)(BugCheckParameter2 + 272) = v74;
      *v74 = v73;
      qword_140EFA318 = BugCheckParameter2 + 264;
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ExpWakeTimerLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(&ExpWakeTimerLock);
    KeAbPostRelease((ULONG_PTR)&ExpWakeTimerLock);
    KiLeaveCriticalRegionUnsafe((__int64)CurrentThread, v75, v76, v77);
    if ( v49 )
      PoDestroyReasonContext(v49);
  }
  if ( v20 )
  {
    if ( ObpTraceFlags )
      ObpPushStackInfo(BugCheckParameter2 - 48, 0, v20, 0x746C6644u);
    BugCheckParameter4 = _InterlockedExchangeAdd64((volatile signed __int64 *)(BugCheckParameter2 - 48), -v20) - v20;
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
      ObpDeferObjectDeletion(BugCheckParameter2 - 48, ThreadLock, 0LL, v19);
    }
  }
  v53 = v120;
  if ( v120 )
  {
    if ( a2 )
    {
      v88 = 0x7FFFFFFF0000LL;
      if ( (unsigned __int64)v120 < 0x7FFFFFFF0000LL )
        v88 = (__int64)v120;
      *(_BYTE *)v88 = *(_BYTE *)v88;
      *v53 = v98;
    }
    else
    {
      *v120 = v98;
    }
  }
  return v101;
}
