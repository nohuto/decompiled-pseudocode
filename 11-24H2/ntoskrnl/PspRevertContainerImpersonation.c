/*
 * XREFs of PspRevertContainerImpersonation @ 0x1402A2A90
 * Callers:
 *     NtRevertContainerImpersonation @ 0x1402A1A00 (NtRevertContainerImpersonation.c)
 *     IopProcessWorkItem @ 0x1402A2410 (IopProcessWorkItem.c)
 *     NtWaitForWorkViaWorkerFactory @ 0x1402A3010 (NtWaitForWorkViaWorkerFactory.c)
 *     PspExitThread @ 0x1408A7D90 (PspExitThread.c)
 * Callees:
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14020D580 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x14020D650 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     KiComputeThreadPriority @ 0x14024FA80 (KiComputeThreadPriority.c)
 *     KiSetPriorityThread @ 0x14024FBBC (KiSetPriorityThread.c)
 *     EtwWriteEx @ 0x140259680 (EtwWriteEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14025E408 (KiRemoveSystemWorkPriorityKick.c)
 *     HvlNotifyLongSpinWait @ 0x140293260 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140293290 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiAcquireThreadLockRaiseToDpc @ 0x1402A1A20 (KiAcquireThreadLockRaiseToDpc.c)
 *     EtwpLevelKeywordEnabled @ 0x1402A2030 (EtwpLevelKeywordEnabled.c)
 *     KiProcessDeferredReadyList @ 0x14031D3D0 (KiProcessDeferredReadyList.c)
 *     ObpPushStackInfo @ 0x1403407AC (ObpPushStackInfo.c)
 *     KiUpdateTotalCyclesCurrentThread @ 0x14034F060 (KiUpdateTotalCyclesCurrentThread.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140379F24 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     ObpDeferObjectDeletion @ 0x1403C485C (ObpDeferObjectDeletion.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 */

__int64 __fastcall PspRevertContainerImpersonation(
        ULONG_PTR BugCheckParameter1,
        __int64 a2,
        signed __int32 *SchedulerAssist)
{
  ULONG_PTR v3; // rdi
  signed __int32 v6; // eax
  signed __int32 v7; // ett
  unsigned __int8 v8; // bp
  unsigned int v9; // esi
  LONG i; // edx
  unsigned __int8 v11; // dl
  __int64 v12; // r8
  __int64 v13; // r9
  signed __int64 v14; // rax
  bool v15; // cc
  signed __int64 BugCheckParameter4; // rax
  ULONG_PTR v17; // r10
  char v18; // al
  unsigned __int8 CurrentIrql; // r14
  struct _KPRCB *CurrentPrcb; // rsi
  struct _KPRCB *v21; // rcx
  unsigned int v22; // ebp
  char v23; // al
  unsigned int v24; // edx
  unsigned int v25; // eax
  __int64 v26; // r9
  signed __int32 v27; // eax
  signed __int32 v28; // ett
  unsigned __int8 v29[4]; // [rsp+40h] [rbp-78h] BYREF
  int v30; // [rsp+44h] [rbp-74h] BYREF
  int v31; // [rsp+48h] [rbp-70h] BYREF
  __int64 v32; // [rsp+50h] [rbp-68h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+60h] [rbp-58h] BYREF
  int *v34; // [rsp+70h] [rbp-48h]
  __int64 v35; // [rsp+78h] [rbp-40h]
  void *retaddr; // [rsp+B8h] [rbp+0h]

  v3 = *(_QWORD *)(BugCheckParameter1 + 1616);
  if ( !v3 )
    return 3221225473LL;
  _m_prefetchw((const void *)(BugCheckParameter1 + 1440));
  v6 = *(_DWORD *)(BugCheckParameter1 + 1440);
  do
  {
    v7 = v6;
    v6 = _InterlockedCompareExchange((volatile signed __int32 *)(BugCheckParameter1 + 1440), v6 & 0xFEFFFFFF, v6);
  }
  while ( v7 != v6 );
  if ( (v6 & 0x1000000) != 0 && (*(_DWORD *)(BugCheckParameter1 + 120) & 0x200) != 0 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2LL);
    CurrentPrcb = KeGetCurrentPrcb();
    _disable();
    KiUpdateTotalCyclesCurrentThread(CurrentPrcb, BugCheckParameter1, 0LL);
    v21 = KeGetCurrentPrcb();
    SchedulerAssist = (signed __int32 *)v21->SchedulerAssist;
    if ( SchedulerAssist )
    {
      _m_prefetchw(SchedulerAssist);
      v27 = *SchedulerAssist;
      do
      {
        v28 = v27;
        v27 = _InterlockedCompareExchange(SchedulerAssist, v27 & 0xFFDFFFFF, v27);
      }
      while ( v28 != v27 );
      if ( (v27 & 0x200000) != 0 )
        KiRemoveSystemWorkPriorityKick((__int64)v21);
    }
    _enable();
    v22 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->PrcbLock, 0LL) )
    {
      do
      {
        if ( (++v22 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && KiCheckVpBackingLongSpinWaitHypercall() )
        {
          HvlNotifyLongSpinWait(v22);
        }
        else
        {
          _mm_pause();
        }
      }
      while ( CurrentPrcb->PrcbLock );
    }
    _interlockedbittestandreset((volatile signed __int32 *)BugCheckParameter1, 0x12u);
    *(_QWORD *)(BugCheckParameter1 + 104) = 0LL;
    _interlockedbittestandreset((volatile signed __int32 *)(BugCheckParameter1 + 120), 9u);
    _InterlockedAnd64((volatile signed __int64 *)&CurrentPrcb->PrcbLock, 0LL);
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    __writecr8(CurrentIrql);
  }
  v8 = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(v8, 2LL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
  {
    v9 = 0;
    if ( _interlockedbittestandset(&PspThreadWorkOnBehalfLock, 0x1Fu) )
      v9 = ExpWaitForSpinLockExclusiveAndAcquire(&PspThreadWorkOnBehalfLock, v8, (__int64)SchedulerAssist);
    for ( i = PspThreadWorkOnBehalfLock;
          (PspThreadWorkOnBehalfLock & 0xBFFFFFFF) != 0x80000000;
          i = PspThreadWorkOnBehalfLock )
    {
      if ( (i & 0x40000000) == 0 )
        _InterlockedOr(&PspThreadWorkOnBehalfLock, 0x40000000u);
      if ( (++v9 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && KiCheckVpBackingLongSpinWaitHypercall() )
      {
        HvlNotifyLongSpinWait(v9);
      }
      else
      {
        _mm_pause();
      }
    }
  }
  else
  {
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(&PspThreadWorkOnBehalfLock, v8);
  }
  *(_QWORD *)(BugCheckParameter1 + 1616) = 0LL;
  if ( (KeGetCurrentThread()->MiscFlags & 4) != 0 )
  {
    *(_DWORD *)(BugCheckParameter1 + 116) |= 0x10000u;
  }
  else
  {
    v29[0] = 0;
    v32 = 0LL;
    KiAcquireThreadLockRaiseToDpc(BugCheckParameter1, v29);
    v17 = *(char *)(BugCheckParameter1 + 795);
    *(_BYTE *)(BugCheckParameter1 + 795) = 32;
    v18 = *(_BYTE *)(v17 + BugCheckParameter1 + 824);
    if ( !v18 )
      KeBugCheckEx(0x157u, BugCheckParameter1, v17, 2uLL, 0LL);
    v23 = v18 - 1;
    *(_BYTE *)(v17 + BugCheckParameter1 + 824) = v23;
    if ( !v23 )
    {
      v24 = *(_DWORD *)(BugCheckParameter1 + 856) ^ (1 << v17);
      *(_DWORD *)(BugCheckParameter1 + 856) = v24;
      if ( v24 < 1 << v17 && *(char *)(BugCheckParameter1 + 195) <= 31 )
      {
        v25 = KiComputeThreadPriority(BugCheckParameter1, 0, 0);
        if ( (int)v25 < *(char *)(BugCheckParameter1 + 195) )
          KiSetPriorityThread((_KTHREAD *)BugCheckParameter1, (__int64)&v32, v25, v26);
      }
    }
    *(_QWORD *)(BugCheckParameter1 + 64) = 0LL;
    KiProcessDeferredReadyList(KeGetCurrentPrcb());
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
    PspThreadWorkOnBehalfLock = 0;
  else
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&PspThreadWorkOnBehalfLock, retaddr);
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v8);
  __writecr8(v8);
  if ( EtwpPsProvRegHandle
    && (EtwpLevelKeywordEnabled(*(_QWORD *)(EtwpPsProvRegHandle + 32) + 96LL, 4u, 0x8000000000002000uLL)
     || *(_WORD *)(v13 + 102) && EtwpLevelKeywordEnabled(*(_QWORD *)(v13 + 40) + 96LL, v11, v12)) )
  {
    v30 = *(_DWORD *)(v3 + 1296);
    *(_QWORD *)&UserData.Size = 4LL;
    UserData.Ptr = (ULONGLONG)&v30;
    v34 = &v31;
    v31 = 0;
    v35 = 4LL;
    EtwWriteEx(EtwpPsProvRegHandle, &ThreadWorkOnBehalfUpdate, 0LL, 1u, 0LL, 0LL, 2u, &UserData);
  }
  if ( ObpTraceFlags )
    ObpPushStackInfo(v3 - 48);
  v14 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v3 - 48), 0xFFFFFFFFFFFFFFFFuLL);
  v15 = v14 <= 1;
  BugCheckParameter4 = v14 - 1;
  if ( v15 )
  {
    if ( *(_QWORD *)(v3 - 40) )
      KeBugCheckEx(
        0x18u,
        ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(v3 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(v3 - 48) >> 8)],
        v3,
        3uLL,
        *(_QWORD *)(v3 - 40));
    if ( BugCheckParameter4 < 0 )
      KeBugCheckEx(0x18u, 0LL, v3, 4uLL, BugCheckParameter4);
    ObpDeferObjectDeletion(v3 - 48);
  }
  return 0LL;
}
