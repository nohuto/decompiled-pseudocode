/*
 * XREFs of PspRevertContainerImpersonation @ 0x1402D21C0
 * Callers:
 *     IopProcessWorkItem @ 0x1402D1B40 (IopProcessWorkItem.c)
 *     NtWaitForWorkViaWorkerFactory @ 0x1402D2740 (NtWaitForWorkViaWorkerFactory.c)
 *     NtRevertContainerImpersonation @ 0x140454E00 (NtRevertContainerImpersonation.c)
 *     PspExitThread @ 0x1408FDFF0 (PspExitThread.c)
 * Callees:
 *     KiComputeThreadPriority @ 0x140280090 (KiComputeThreadPriority.c)
 *     KiSetPriorityThread @ 0x1402801CC (KiSetPriorityThread.c)
 *     EtwWriteEx @ 0x140289C90 (EtwWriteEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14028EA18 (KiRemoveSystemWorkPriorityKick.c)
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiProcessDeferredReadyList @ 0x1402C5F60 (KiProcessDeferredReadyList.c)
 *     KiAcquireThreadLockRaiseToDpc @ 0x1402D1150 (KiAcquireThreadLockRaiseToDpc.c)
 *     EtwpLevelKeywordEnabled @ 0x1402D1760 (EtwpLevelKeywordEnabled.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x1402E6E94 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     ObpPushStackInfo @ 0x14031FC8C (ObpPushStackInfo.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x1403368E0 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x1403369B0 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     KiUpdateTotalCyclesCurrentThread @ 0x14036D540 (KiUpdateTotalCyclesCurrentThread.c)
 *     ObpDeferObjectDeletion @ 0x1403B341C (ObpDeferObjectDeletion.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

__int64 __fastcall PspRevertContainerImpersonation(__int64 BugCheckParameter1)
{
  ULONG_PTR v1; // rdi
  signed __int32 v4; // eax
  signed __int32 v5; // ett
  unsigned __int8 v6; // bp
  unsigned int v7; // esi
  LONG i; // edx
  unsigned __int8 v9; // dl
  __int64 v10; // r8
  __int64 v11; // r9
  signed __int64 v12; // rax
  bool v13; // cc
  signed __int64 BugCheckParameter4; // rax
  ULONG_PTR v15; // r10
  char v16; // al
  unsigned __int8 CurrentIrql; // r14
  struct _KPRCB *CurrentPrcb; // rsi
  struct _KPRCB *v19; // rcx
  signed __int32 *SchedulerAssist; // r8
  unsigned int v21; // ebp
  char v22; // al
  unsigned int v23; // edx
  unsigned int v24; // eax
  __int64 v25; // r9
  signed __int32 v26; // eax
  signed __int32 v27; // ett
  unsigned __int8 v28[4]; // [rsp+40h] [rbp-78h] BYREF
  int v29; // [rsp+44h] [rbp-74h] BYREF
  int v30; // [rsp+48h] [rbp-70h] BYREF
  _QWORD *v31[2]; // [rsp+50h] [rbp-68h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+60h] [rbp-58h] BYREF
  int *v33; // [rsp+70h] [rbp-48h]
  __int64 v34; // [rsp+78h] [rbp-40h]
  void *retaddr; // [rsp+B8h] [rbp+0h]

  v1 = *(_QWORD *)(BugCheckParameter1 + 1616);
  if ( !v1 )
    return 3221225473LL;
  _m_prefetchw((const void *)(BugCheckParameter1 + 1440));
  v4 = *(_DWORD *)(BugCheckParameter1 + 1440);
  do
  {
    v5 = v4;
    v4 = _InterlockedCompareExchange((volatile signed __int32 *)(BugCheckParameter1 + 1440), v4 & 0xFEFFFFFF, v4);
  }
  while ( v5 != v4 );
  if ( (v4 & 0x1000000) != 0 && (*(_DWORD *)(BugCheckParameter1 + 120) & 0x200) != 0 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2LL);
    CurrentPrcb = KeGetCurrentPrcb();
    _disable();
    KiUpdateTotalCyclesCurrentThread(CurrentPrcb, BugCheckParameter1, 0LL);
    v19 = KeGetCurrentPrcb();
    SchedulerAssist = (signed __int32 *)v19->SchedulerAssist;
    if ( SchedulerAssist )
    {
      _m_prefetchw(SchedulerAssist);
      v26 = *SchedulerAssist;
      do
      {
        v27 = v26;
        v26 = _InterlockedCompareExchange(SchedulerAssist, v26 & 0xFFDFFFFF, v26);
      }
      while ( v27 != v26 );
      if ( (v26 & 0x200000) != 0 )
        KiRemoveSystemWorkPriorityKick((__int64)v19);
    }
    _enable();
    v21 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->PrcbLock, 0LL) )
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
  v6 = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(v6, 2LL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
  {
    v7 = 0;
    if ( _interlockedbittestandset(&PspThreadWorkOnBehalfLock, 0x1Fu) )
      v7 = ExpWaitForSpinLockExclusiveAndAcquire(&PspThreadWorkOnBehalfLock, v6);
    for ( i = PspThreadWorkOnBehalfLock;
          (PspThreadWorkOnBehalfLock & 0xBFFFFFFF) != 0x80000000;
          i = PspThreadWorkOnBehalfLock )
    {
      if ( (i & 0x40000000) == 0 )
        _InterlockedOr(&PspThreadWorkOnBehalfLock, 0x40000000u);
      if ( (++v7 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && KiCheckVpBackingLongSpinWaitHypercall() )
      {
        HvlNotifyLongSpinWait(v7);
      }
      else
      {
        _mm_pause();
      }
    }
  }
  else
  {
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(&PspThreadWorkOnBehalfLock, v6);
  }
  *(_QWORD *)(BugCheckParameter1 + 1616) = 0LL;
  if ( (KeGetCurrentThread()->MiscFlags & 4) != 0 )
  {
    *(_DWORD *)(BugCheckParameter1 + 116) |= 0x10000u;
  }
  else
  {
    v28[0] = 0;
    v31[0] = 0LL;
    KiAcquireThreadLockRaiseToDpc(BugCheckParameter1, v28);
    v15 = *(char *)(BugCheckParameter1 + 795);
    *(_BYTE *)(BugCheckParameter1 + 795) = 32;
    v16 = *(_BYTE *)(v15 + BugCheckParameter1 + 824);
    if ( !v16 )
      KeBugCheckEx(0x157u, BugCheckParameter1, v15, 2uLL, 0LL);
    v22 = v16 - 1;
    *(_BYTE *)(v15 + BugCheckParameter1 + 824) = v22;
    if ( !v22 )
    {
      v23 = *(_DWORD *)(BugCheckParameter1 + 856) ^ (1 << v15);
      *(_DWORD *)(BugCheckParameter1 + 856) = v23;
      if ( v23 < 1 << v15 && *(char *)(BugCheckParameter1 + 195) <= 31 )
      {
        v24 = KiComputeThreadPriority(BugCheckParameter1, 0, 0);
        if ( (int)v24 < *(char *)(BugCheckParameter1 + 195) )
          KiSetPriorityThread((_KTHREAD *)BugCheckParameter1, (__int64)v31, v24, v25);
      }
    }
    *(_QWORD *)(BugCheckParameter1 + 64) = 0LL;
    KiProcessDeferredReadyList(KeGetCurrentPrcb(), v31, v28[0]);
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
    PspThreadWorkOnBehalfLock = 0;
  else
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&PspThreadWorkOnBehalfLock, retaddr);
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v6);
  __writecr8(v6);
  if ( EtwpPsProvRegHandle
    && (EtwpLevelKeywordEnabled(*(_QWORD *)(EtwpPsProvRegHandle + 32) + 96LL, 4u, 0x8000000000002000uLL)
     || *(_WORD *)(v11 + 102) && EtwpLevelKeywordEnabled(*(_QWORD *)(v11 + 40) + 96LL, v9, v10)) )
  {
    v29 = *(_DWORD *)(v1 + 1296);
    *(_QWORD *)&UserData.Size = 4LL;
    UserData.Ptr = (ULONGLONG)&v29;
    v33 = &v30;
    v30 = 0;
    v34 = 4LL;
    EtwWriteEx(EtwpPsProvRegHandle, &ThreadWorkOnBehalfUpdate, 0LL, 1u, 0LL, 0LL, 2u, &UserData);
  }
  if ( ObpTraceFlags )
    ObpPushStackInfo(v1 - 48);
  v12 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v1 - 48), 0xFFFFFFFFFFFFFFFFuLL);
  v13 = v12 <= 1;
  BugCheckParameter4 = v12 - 1;
  if ( v13 )
  {
    if ( *(_QWORD *)(v1 - 40) )
      KeBugCheckEx(
        0x18u,
        ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(v1 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(v1 - 48) >> 8)],
        v1,
        3uLL,
        *(_QWORD *)(v1 - 40));
    if ( BugCheckParameter4 < 0 )
      KeBugCheckEx(0x18u, 0LL, v1, 4uLL, BugCheckParameter4);
    ObpDeferObjectDeletion(v1 - 48);
  }
  return 0LL;
}
