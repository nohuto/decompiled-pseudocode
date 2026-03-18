/*
 * XREFs of PspRevertContainerImpersonation @ 0x140308400
 * Callers:
 *     IopProcessWorkItem @ 0x140306B80 (IopProcessWorkItem.c)
 *     NtWaitForWorkViaWorkerFactory @ 0x140307190 (NtWaitForWorkViaWorkerFactory.c)
 *     NtRevertContainerImpersonation @ 0x140462420 (NtRevertContainerImpersonation.c)
 *     PspExitThread @ 0x1408F49D0 (PspExitThread.c)
 * Callees:
 *     KiAcquireThreadLockRaiseToDpc @ 0x140204DB0 (KiAcquireThreadLockRaiseToDpc.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x1402120E0 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x1402121B0 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     EtwWriteEx @ 0x140256C60 (EtwWriteEx.c)
 *     EtwpLevelKeywordEnabled @ 0x1402576B0 (EtwpLevelKeywordEnabled.c)
 *     KiProcessDeferredReadyList @ 0x140285EA0 (KiProcessDeferredReadyList.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14028BBC0 (KiRemoveSystemWorkPriorityKick.c)
 *     ObpPushStackInfo @ 0x14029C310 (ObpPushStackInfo.c)
 *     KiComputeThreadPriority @ 0x1402E7250 (KiComputeThreadPriority.c)
 *     KiSetPriorityThread @ 0x1402E7840 (KiSetPriorityThread.c)
 *     KiUpdateTotalCyclesCurrentThread @ 0x14031AFA0 (KiUpdateTotalCyclesCurrentThread.c)
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     ObpDeferObjectDeletion @ 0x14036FDD8 (ObpDeferObjectDeletion.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x1403A2D94 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
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
  __int64 v10; // rdx
  __int64 v11; // rcx
  REGHANDLE v12; // r9
  signed __int64 v13; // rax
  bool v14; // cc
  signed __int64 BugCheckParameter4; // rax
  ULONG_PTR v16; // r10
  char v17; // al
  unsigned __int8 CurrentIrql; // r14
  struct _KPRCB *CurrentPrcb; // rsi
  struct _KPRCB *v20; // rcx
  unsigned int v21; // ebp
  char v22; // al
  unsigned int v23; // edx
  int v24; // eax
  signed __int32 v25; // eax
  signed __int32 v26; // ett
  unsigned __int8 v27[4]; // [rsp+40h] [rbp-78h] BYREF
  int v28; // [rsp+44h] [rbp-74h] BYREF
  int v29; // [rsp+48h] [rbp-70h] BYREF
  _QWORD *v30[2]; // [rsp+50h] [rbp-68h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+60h] [rbp-58h] BYREF
  int *v32; // [rsp+70h] [rbp-48h]
  __int64 v33; // [rsp+78h] [rbp-40h]
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
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql);
    CurrentPrcb = KeGetCurrentPrcb();
    _disable();
    KiUpdateTotalCyclesCurrentThread(CurrentPrcb, BugCheckParameter1, 0LL);
    v20 = KeGetCurrentPrcb();
    SchedulerAssist = (signed __int32 *)v20->SchedulerAssist;
    if ( SchedulerAssist )
    {
      _m_prefetchw(SchedulerAssist);
      v25 = *SchedulerAssist;
      do
      {
        v26 = v25;
        v25 = _InterlockedCompareExchange(SchedulerAssist, v25 & 0xFFDFFFFF, v25);
      }
      while ( v26 != v25 );
      if ( (v25 & 0x200000) != 0 )
        KiRemoveSystemWorkPriorityKick((__int64)v20);
    }
    _enable();
    v21 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->PrcbLock, 0LL) )
    {
      do
      {
        if ( (++v21 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v20) )
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
  v8 = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(v8);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
  {
    v9 = 0;
    if ( _interlockedbittestandset(&PspThreadWorkOnBehalfLock, 0x1Fu) )
      v9 = ExpWaitForSpinLockExclusiveAndAcquire(&PspThreadWorkOnBehalfLock, v8);
    v10 = (unsigned int)PspThreadWorkOnBehalfLock;
    v11 = (unsigned int)PspThreadWorkOnBehalfLock;
    for ( LODWORD(v11) = PspThreadWorkOnBehalfLock & 0xBFFFFFFF;
          (PspThreadWorkOnBehalfLock & 0xBFFFFFFF) != 0x80000000;
          v10 = (unsigned int)PspThreadWorkOnBehalfLock )
    {
      if ( (v10 & 0x40000000) == 0 )
        _InterlockedOr(&PspThreadWorkOnBehalfLock, 0x40000000u);
      if ( (++v9 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v11) )
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
    v27[0] = 0;
    v30[0] = 0LL;
    KiAcquireThreadLockRaiseToDpc(BugCheckParameter1, v27);
    v16 = *(char *)(BugCheckParameter1 + 795);
    *(_BYTE *)(BugCheckParameter1 + 795) = 32;
    v17 = *(_BYTE *)(v16 + BugCheckParameter1 + 824);
    if ( !v17 )
      KeBugCheckEx(0x157u, BugCheckParameter1, v16, 2uLL, 0LL);
    v22 = v17 - 1;
    *(_BYTE *)(v16 + BugCheckParameter1 + 824) = v22;
    if ( !v22 )
    {
      v23 = *(_DWORD *)(BugCheckParameter1 + 856) ^ (1 << v16);
      *(_DWORD *)(BugCheckParameter1 + 856) = v23;
      if ( v23 < 1 << v16 && *(char *)(BugCheckParameter1 + 195) <= 31 )
      {
        v24 = KiComputeThreadPriority(BugCheckParameter1, 0);
        if ( v24 < *(char *)(BugCheckParameter1 + 195) )
          KiSetPriorityThread((_BYTE *)BugCheckParameter1, (__int64)v30, v24);
      }
    }
    *(_QWORD *)(BugCheckParameter1 + 64) = 0LL;
    KiProcessDeferredReadyList(KeGetCurrentPrcb(), v30, v27[0]);
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
    PspThreadWorkOnBehalfLock = 0;
  else
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&PspThreadWorkOnBehalfLock, retaddr);
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v8);
  __writecr8(v8);
  v12 = EtwpPsProvRegHandle;
  if ( EtwpPsProvRegHandle
    && (EtwpLevelKeywordEnabled(*(_QWORD *)(EtwpPsProvRegHandle + 32) + 96LL, 4u, 0x8000000000002000uLL)
     || *(_BYTE *)(v12 + 101) && EtwpLevelKeywordEnabled(*(_QWORD *)(v12 + 40) + 96LL, v10, (__int64)SchedulerAssist)) )
  {
    v28 = *(_DWORD *)(v3 + 1296);
    *(_QWORD *)&UserData.Size = 4LL;
    UserData.Ptr = (ULONGLONG)&v28;
    v32 = &v29;
    v29 = 0;
    v33 = 4LL;
    EtwWriteEx(EtwpPsProvRegHandle, &ThreadWorkOnBehalfUpdate, 0LL, 1u, 0LL, 0LL, 2u, &UserData);
  }
  if ( ObpTraceFlags )
    ObpPushStackInfo(v3 - 48, 0, 1u, 0x746E6F43u);
  v13 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v3 - 48), 0xFFFFFFFFFFFFFFFFuLL);
  v14 = v13 <= 1;
  BugCheckParameter4 = v13 - 1;
  if ( v14 )
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
    ObpDeferObjectDeletion(v3 - 48, v10, SchedulerAssist, v12);
  }
  return 0LL;
}
