/*
 * XREFs of ExpSetTimerObject @ 0x1402BD850
 * Callers:
 *     NtSetTimer @ 0x1402BD310 (NtSetTimer.c)
 *     NtSetTimerEx @ 0x1402BD5A0 (NtSetTimerEx.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14022F250 (KxReleaseSpinLock.c)
 *     KiReleaseSpinLockInstrumented @ 0x14027E690 (KiReleaseSpinLockInstrumented.c)
 *     KxAcquireSpinLock @ 0x1402850F0 (KxAcquireSpinLock.c)
 *     KiAcquireSpinLockInstrumented @ 0x1402851B0 (KiAcquireSpinLockInstrumented.c)
 *     KxWaitForSpinLockAndAcquire @ 0x140285280 (KxWaitForSpinLockAndAcquire.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140289BD0 (KiLeaveCriticalRegionUnsafe.c)
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     PoDestroyReasonContext @ 0x1402BC528 (PoDestroyReasonContext.c)
 *     KeCancelTimer @ 0x1402BE1D0 (KeCancelTimer.c)
 *     KeSetCoalescableTimer @ 0x1402BE6B0 (KeSetCoalescableTimer.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     ObpPushStackInfo @ 0x14031FC8C (ObpPushStackInfo.c)
 *     KeRemoveQueueApc @ 0x14032CCE0 (KeRemoveQueueApc.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     ObpDeferObjectDeletion @ 0x1403B341C (ObpDeferObjectDeletion.c)
 *     PsInsertVirtualizedTimer @ 0x140459FA8 (PsInsertVirtualizedTimer.c)
 *     KeRemoveQueueDpcEx @ 0x14045A7C0 (KeRemoveQueueDpcEx.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     ExpCheckTestsigningEnabled @ 0x1406F8F98 (ExpCheckTestsigningEnabled.c)
 *     ExpCheckWakeTimerAccess @ 0x140A92B48 (ExpCheckWakeTimerAccess.c)
 */

__int64 __fastcall ExpSetTimerObject(
        ULONG_PTR BugCheckParameter2,
        __int64 a2,
        LARGE_INTEGER *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        char a7,
        ULONG a8,
        ULONG TolerableDelay,
        _BYTE *a10)
{
  char v10; // r12
  int v12; // esi
  _KPROCESS *Process; // rbx
  char v14; // r13
  unsigned __int8 CurrentIrql; // r14
  volatile signed __int32 *p_CpuPartitionList; // rcx
  int v17; // r14d
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  ULONG_PTR v21; // rbx
  unsigned int v22; // r14d
  ULONG v23; // r13d
  ULONG v24; // r10d
  struct _KTHREAD *v25; // r14
  volatile signed __int32 *p_StackLimit; // rbx
  struct _KTHREAD *v27; // rcx
  struct _KTHREAD **ThreadLock; // rdx
  struct _KDPC *Dpc; // r11
  LARGE_INTEGER v30; // rbx
  volatile signed __int64 *v31; // rcx
  __int64 v32; // rax
  _QWORD *v33; // rbx
  volatile signed __int64 *v34; // rcx
  signed __int64 v35; // rcx
  __int64 v37; // rdx
  LARGE_INTEGER v38; // rax
  LARGE_INTEGER v39; // rax
  __int64 v40; // rax
  __int64 v41; // rbx
  _QWORD *v42; // rcx
  _QWORD *v43; // rax
  unsigned int v44; // r14d
  __int64 v45; // rbx
  __int64 v46; // r8
  _QWORD *v47; // rdx
  _QWORD *v48; // rax
  __int64 v49; // rdx
  _QWORD *v50; // rcx
  __int64 v51; // rcx
  __int64 v52; // rax
  __int64 v53; // r14
  unsigned __int8 v54; // r14
  LARGE_INTEGER v55; // rbx
  unsigned int v56; // edx
  unsigned int v57; // eax
  char v58; // [rsp+30h] [rbp-68h]
  char v59; // [rsp+31h] [rbp-67h]
  char v60; // [rsp+32h] [rbp-66h]
  unsigned int v61; // [rsp+34h] [rbp-64h]
  int v62; // [rsp+38h] [rbp-60h]
  LARGE_INTEGER v63; // [rsp+38h] [rbp-60h]
  volatile signed __int64 *Object; // [rsp+40h] [rbp-58h]
  unsigned __int8 v65; // [rsp+48h] [rbp-50h]
  struct _KTHREAD *CurrentThread; // [rsp+50h] [rbp-48h]
  struct _KDPC *v67; // [rsp+58h] [rbp-40h]
  __int64 retaddr; // [rsp+98h] [rbp+0h]
  char v69; // [rsp+A8h] [rbp+10h]

  v69 = a2;
  v10 = a2;
  v12 = 0;
  v61 = 0;
  v58 = 0;
  CurrentThread = 0LL;
  if ( a6 )
  {
    if ( a7 )
    {
      if ( !(unsigned __int8)ExpCheckTestsigningEnabled() )
      {
        v44 = ExpCheckWakeTimerAccess((unsigned __int8)KeGetCurrentThread()->PreviousMode);
        v61 = v44;
        if ( v44 )
        {
          ObfDereferenceObjectWithTag((PVOID)BugCheckParameter2, 0x746C6644u);
          return v44;
        }
      }
    }
    if ( (int)qword_140F0B6A0 >= 2 || byte_140F0B673 )
    {
      v58 = 1;
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      v40 = KeAbPreAcquire(&ExpWakeTimerLock, 0LL, 0LL);
      v41 = v40;
      if ( _interlockedbittestandset64((volatile signed __int32 *)&ExpWakeTimerLock, 0LL) )
        ExfAcquirePushLockExclusiveEx(&ExpWakeTimerLock, v40, &ExpWakeTimerLock);
      if ( v41 )
        *(_BYTE *)(v41 + 10) = 1;
    }
    else
    {
      v61 = 1073741861;
      a6 = 0LL;
    }
  }
  v67 = 0LL;
  Process = KeGetCurrentThread()->ApcState.Process;
  Object = (volatile signed __int64 *)&Process->Header.Lock;
  v14 = 0;
  v59 = 0;
  CurrentIrql = KeGetCurrentIrql();
  v65 = CurrentIrql;
  __writecr8(2uLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2LL);
  if ( v10 && (*(_DWORD *)&Process->0 & 0x10) != 0 )
  {
    p_CpuPartitionList = (volatile signed __int32 *)&Process[3].CpuPartitionList;
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
    {
      if ( _interlockedbittestandset64(p_CpuPartitionList, 0LL) )
        KxWaitForSpinLockAndAcquire(p_CpuPartitionList, a2, (__int64)a3, a4);
    }
    else
    {
      KiAcquireSpinLockInstrumented(p_CpuPartitionList);
    }
    v14 = 1;
    v59 = 1;
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
  {
    if ( _interlockedbittestandset64((volatile signed __int32 *)(BugCheckParameter2 + 64), 0LL) )
      KxWaitForSpinLockAndAcquire((volatile signed __int32 *)(BugCheckParameter2 + 64), a2, (__int64)a3, a4);
  }
  else
  {
    KiAcquireSpinLockInstrumented((volatile signed __int32 *)(BugCheckParameter2 + 64));
  }
  if ( !v58 && *(_QWORD *)(BugCheckParameter2 + 256) )
  {
    KxReleaseSpinLock((volatile signed __int64 *)(BugCheckParameter2 + 64));
    if ( v14 )
      KxReleaseSpinLock((volatile signed __int64 *)&Process[3].CpuPartitionList);
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    __writecr8(CurrentIrql);
    v58 = 1;
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v52 = KeAbPreAcquire(&ExpWakeTimerLock, 0LL, 0LL);
    v53 = v52;
    if ( _interlockedbittestandset64((volatile signed __int32 *)&ExpWakeTimerLock, 0LL) )
      ExfAcquirePushLockExclusiveEx(&ExpWakeTimerLock, v52, &ExpWakeTimerLock);
    if ( v53 )
      *(_BYTE *)(v53 + 10) = 1;
    v54 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(v54, 2LL);
    v65 = v54;
    if ( v14 )
      KxAcquireSpinLock((PKSPIN_LOCK)&Process[3].CpuPartitionList);
    KxAcquireSpinLock((PKSPIN_LOCK)(BugCheckParameter2 + 64));
  }
  v17 = 0;
  v62 = 0;
  if ( (*(_BYTE *)(BugCheckParameter2 + 304) & 1) != 0 )
  {
    v45 = *(_QWORD *)(BugCheckParameter2 + 80);
    KxAcquireSpinLock((PKSPIN_LOCK)(v45 + 1264));
    v46 = *(_QWORD *)(BugCheckParameter2 + 224);
    v47 = *(_QWORD **)(BugCheckParameter2 + 232);
    if ( *(_QWORD *)(v46 + 8) != BugCheckParameter2 + 224 || *v47 != BugCheckParameter2 + 224 )
      goto LABEL_21;
    *v47 = v46;
    *(_QWORD *)(v46 + 8) = v47;
    KxReleaseSpinLock((volatile signed __int64 *)(v45 + 1264));
    *(_BYTE *)(BugCheckParameter2 + 304) &= ~1u;
    if ( (*(_BYTE *)(BugCheckParameter2 + 304) & 2) != 0 && *(_BYTE *)(BugCheckParameter2 + 248)
      || KeCancelTimer((PKTIMER)BugCheckParameter2)
      || (unsigned __int8)KeRemoveQueueDpcEx(BugCheckParameter2 + 160, 0LL) )
    {
      v17 = 1;
      v62 = 1;
    }
    v21 = BugCheckParameter2 + 72;
    if ( (unsigned __int8)KeRemoveQueueApc(BugCheckParameter2 + 72) )
      v62 = ++v17;
  }
  else
  {
    KeCancelTimer((PKTIMER)BugCheckParameter2);
    v21 = BugCheckParameter2 + 72;
  }
  *(_BYTE *)(BugCheckParameter2 + 248) = 0;
  v22 = v17 + 1;
  v60 = *(_BYTE *)(BugCheckParameter2 + 4);
  v23 = a8;
  *(_DWORD *)(BugCheckParameter2 + 240) = a8;
  *(_DWORD *)(BugCheckParameter2 + 244) = 0;
  v24 = TolerableDelay;
  *(_DWORD *)(BugCheckParameter2 + 320) = TolerableDelay;
  if ( a4 )
  {
    v25 = KeGetCurrentThread();
    *(_BYTE *)v21 = 18;
    *(_BYTE *)(v21 + 2) = 88;
    *(_BYTE *)(v21 + 80) = v25->ApcStateIndex;
    *(_QWORD *)(v21 + 8) = v25;
    *(_QWORD *)(v21 + 32) = ExpTimerApcRoutine;
    *(_QWORD *)(v21 + 40) = 0LL;
    *(_QWORD *)(v21 + 48) = a4;
    *(_BYTE *)(v21 + 81) = v69;
    *(_QWORD *)(v21 + 56) = a5;
    *(_BYTE *)(v21 + 82) = 0;
    *(_BYTE *)(v21 + 1) = 0;
    p_StackLimit = (volatile signed __int32 *)&v25[1].StackLimit;
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
    {
      if ( _interlockedbittestandset64(p_StackLimit, 0LL) )
        KxWaitForSpinLockAndAcquire((volatile signed __int32 *)&v25[1].StackLimit, v18, v19, v20);
    }
    else
    {
      KiAcquireSpinLockInstrumented((volatile signed __int32 *)&v25[1].StackLimit);
    }
    v27 = (struct _KTHREAD *)(BugCheckParameter2 + 224);
    ThreadLock = (struct _KTHREAD **)v25[1].ThreadLock;
    if ( *ThreadLock != (struct _KTHREAD *)&v25[1].StackBase )
LABEL_21:
      __fastfail(3u);
    *(_QWORD *)&v27->Header.Lock = (char *)v25 + 1272;
    *(_QWORD *)(BugCheckParameter2 + 232) = ThreadLock;
    *ThreadLock = v27;
    v25[1].ThreadLock = (unsigned __int64)v27;
    *(_BYTE *)(BugCheckParameter2 + 304) |= 1u;
    if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
      _InterlockedAnd64((volatile signed __int64 *)p_StackLimit, 0LL);
    else
      KiReleaseSpinLockInstrumented((volatile signed __int64 *)&v25[1].StackLimit, retaddr);
    Dpc = (struct _KDPC *)(BugCheckParameter2 + 160);
    v67 = (struct _KDPC *)(BugCheckParameter2 + 160);
    v22 = v62;
    v23 = 0;
    v24 = TolerableDelay;
  }
  else
  {
    Dpc = 0LL;
  }
  v30 = *a3;
  v63 = *a3;
  v31 = Object;
  if ( v59 )
  {
    if ( !*(_QWORD *)(BugCheckParameter2 + 280) )
    {
      PsInsertVirtualizedTimer((PVOID)Object, BugCheckParameter2 + 280);
      v31 = Object;
      v24 = TolerableDelay;
      Dpc = v67;
    }
    _InterlockedIncrement((volatile signed __int32 *)v31 + 446);
    if ( (v31[17] & 0x10) != 0 )
    {
      v37 = *((unsigned int *)v31 + 17);
      if ( (_DWORD)v37 )
      {
        v30 = *a3;
        v38 = *a3;
        if ( a3->QuadPart >= 0 )
        {
          v55.QuadPart = MEMORY[0xFFFFF78000000014];
          if ( v38.QuadPart > MEMORY[0xFFFFF78000000014] )
            v55 = *a3;
          v30.QuadPart = v37 + v55.QuadPart;
          if ( v30.QuadPart < a3->QuadPart )
            v30 = *a3;
        }
        else
        {
          v39.QuadPart = v38.QuadPart - v37;
          if ( v39.QuadPart <= v30.QuadPart )
            v30 = v39;
        }
        v63.HighPart = v30.HighPart;
        v56 = (unsigned int)v37 / 0x2710;
        if ( v23 && v56 + v23 > v23 )
        {
          v23 += v56;
          *(_DWORD *)(BugCheckParameter2 + 240) += v56;
        }
        else
        {
          v57 = *(_DWORD *)(BugCheckParameter2 + 240);
          if ( !v57 || v57 + v56 <= v57 )
            goto LABEL_35;
          *(_DWORD *)(BugCheckParameter2 + 240) = v57 + v56;
        }
        *(_DWORD *)(BugCheckParameter2 + 244) = v56;
      }
    }
  }
LABEL_35:
  if ( (*(_BYTE *)(BugCheckParameter2 + 304) & 2) != 0 )
  {
    *(LARGE_INTEGER *)(BugCheckParameter2 + 312) = v30;
    if ( v63.HighPart >= 0 )
      *(_BYTE *)(BugCheckParameter2 + 248) = 1;
    else
      *(_BYTE *)(BugCheckParameter2 + 248) = (a6 != 0) + 2;
    v32 = a6;
  }
  else
  {
    KeSetCoalescableTimer((PKTIMER)BugCheckParameter2, v30, v23, v24, Dpc);
    v32 = a6;
    if ( a6 )
      _interlockedbittestandset((volatile signed __int32 *)BugCheckParameter2, 9u);
  }
  v33 = *(_QWORD **)(BugCheckParameter2 + 256);
  *(_QWORD *)(BugCheckParameter2 + 256) = v32;
  *(_BYTE *)(BugCheckParameter2 + 304) ^= (*(_BYTE *)(BugCheckParameter2 + 304) ^ (4 * a7)) & 4;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
    _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter2 + 64), 0LL);
  else
    KiReleaseSpinLockInstrumented((volatile signed __int64 *)(BugCheckParameter2 + 64), retaddr);
  if ( v59 )
  {
    v34 = Object + 225;
    if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
      _InterlockedAnd64(v34, 0LL);
    else
      KiReleaseSpinLockInstrumented(v34, retaddr);
  }
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v65);
  __writecr8(v65);
  if ( v58 )
  {
    if ( v33 )
    {
      if ( !a6 )
      {
        v48 = (_QWORD *)(BugCheckParameter2 + 264);
        v49 = *(_QWORD *)(BugCheckParameter2 + 264);
        v50 = *(_QWORD **)(BugCheckParameter2 + 272);
        if ( *(_QWORD *)(v49 + 8) != BugCheckParameter2 + 264 || (_QWORD *)*v50 != v48 )
          goto LABEL_21;
        *v50 = v49;
        *(_QWORD *)(v49 + 8) = v50;
        *v48 = 0LL;
      }
    }
    else if ( a6 )
    {
      v42 = (_QWORD *)(BugCheckParameter2 + 264);
      v43 = (_QWORD *)qword_140EFA978;
      if ( *(__int64 **)qword_140EFA978 != &ExpWakeTimerList )
        goto LABEL_21;
      *v42 = &ExpWakeTimerList;
      *(_QWORD *)(BugCheckParameter2 + 272) = v43;
      *v43 = v42;
      qword_140EFA978 = BugCheckParameter2 + 264;
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ExpWakeTimerLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&ExpWakeTimerLock);
    KeAbPostRelease((ULONG_PTR)&ExpWakeTimerLock);
    KiLeaveCriticalRegionUnsafe((__int64)CurrentThread);
    if ( v33 )
      PoDestroyReasonContext(v33);
  }
  if ( v22 )
  {
    LOBYTE(v12) = ObpTraceFlags != 0;
    if ( v12 )
      ObpPushStackInfo(BugCheckParameter2 - 48);
    v35 = _InterlockedExchangeAdd64((volatile signed __int64 *)(BugCheckParameter2 - 48), -v22) - v22;
    if ( v35 <= 0 )
    {
      if ( *(_QWORD *)(BugCheckParameter2 - 40) )
        KeBugCheckEx(
          0x18u,
          ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(BugCheckParameter2 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(BugCheckParameter2 - 48) >> 8)],
          BugCheckParameter2,
          6uLL,
          *(_QWORD *)(BugCheckParameter2 - 40));
      if ( v35 < 0 )
        KeBugCheckEx(0x18u, 0LL, BugCheckParameter2, 5uLL, v35);
      ObpDeferObjectDeletion(BugCheckParameter2 - 48);
    }
  }
  if ( a10 )
  {
    if ( v69 )
    {
      v51 = 0x7FFFFFFF0000LL;
      if ( (unsigned __int64)a10 < 0x7FFFFFFF0000LL )
        v51 = (__int64)a10;
      *(_BYTE *)v51 = *(_BYTE *)v51;
      *a10 = v60;
    }
    else
    {
      *a10 = v60;
    }
  }
  return v61;
}
