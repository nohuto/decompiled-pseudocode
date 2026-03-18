/*
 * XREFs of ExReferenceCallBackBlock @ 0x140326780
 * Callers:
 *     IoBoostThreadIoPriority @ 0x140326240 (IoBoostThreadIoPriority.c)
 *     PoIssueCoalescingNotification @ 0x1404481D4 (PoIssueCoalescingNotification.c)
 *     KiEnumerateCallback @ 0x1404D6830 (KiEnumerateCallback.c)
 *     IoUnregisterPriorityCallback @ 0x1405935E0 (IoUnregisterPriorityCallback.c)
 *     KeDeregisterBoundCallback @ 0x1405ACD90 (KeDeregisterBoundCallback.c)
 *     KiHandleBound @ 0x1405AD5D0 (KiHandleBound.c)
 *     DbgkLkmdRegisterCallback @ 0x1406FBF90 (DbgkLkmdRegisterCallback.c)
 *     DbgkLkmdUnregisterCallback @ 0x1406FC080 (DbgkLkmdUnregisterCallback.c)
 *     DbgkpLkmdFireCallbacks @ 0x1406FC128 (DbgkpLkmdFireCallbacks.c)
 *     PoUnregisterCoalescingCallback @ 0x140744DF0 (PoUnregisterCoalescingCallback.c)
 *     PspCallThreadNotifyRoutines @ 0x1408F38C0 (PspCallThreadNotifyRoutines.c)
 *     PspInitializeThunkContext @ 0x14090A9A0 (PspInitializeThunkContext.c)
 *     PsCallImageNotifyRoutines @ 0x14090BC00 (PsCallImageNotifyRoutines.c)
 *     ExCallCallBack @ 0x14091E61C (ExCallCallBack.c)
 *     PspCallProcessNotifyRoutines @ 0x14091F098 (PspCallProcessNotifyRoutines.c)
 *     KeUserModeCallback @ 0x140938670 (KeUserModeCallback.c)
 *     NtFindAtom @ 0x1409527D0 (NtFindAtom.c)
 *     PsInvokeWin32Callout @ 0x140961150 (PsInvokeWin32Callout.c)
 *     PsRemoveCreateThreadNotifyRoutine @ 0x140A86CD0 (PsRemoveCreateThreadNotifyRoutine.c)
 *     PspSetCreateProcessNotifyRoutine @ 0x140A8B2EC (PspSetCreateProcessNotifyRoutine.c)
 *     PsRemoveLoadImageNotifyRoutine @ 0x140AA5FA0 (PsRemoveLoadImageNotifyRoutine.c)
 * Callees:
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x140212BC0 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x1402FD480 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x140323E4C (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 *     ExAcquireRundownProtection_0 @ 0x140326750 (ExAcquireRundownProtection_0.c)
 *     ExAcquireRundownProtectionEx @ 0x14036CEA0 (ExAcquireRundownProtectionEx.c)
 *     ExpReleaseRundownProtection @ 0x14036D760 (ExpReleaseRundownProtection.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 */

struct _EX_RUNDOWN_REF *__fastcall ExReferenceCallBackBlock(signed __int64 *a1)
{
  signed __int64 v2; // rbx
  signed __int64 v3; // rax
  signed __int64 v4; // rax
  unsigned __int8 CurrentIrql; // si
  signed __int32 v6; // eax
  signed __int32 v7; // ett
  struct _EX_RUNDOWN_REF *v8; // rbx
  signed __int64 v10; // rax
  signed __int64 v11; // rtt
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  _m_prefetchw(a1);
  v2 = *a1;
  if ( (*a1 & 0xF) != 0 )
  {
    do
    {
      v3 = _InterlockedCompareExchange64(a1, v2 - 1, v2);
      if ( v2 == v3 )
        break;
      v2 = v3;
    }
    while ( (v3 & 0xF) != 0 );
  }
  if ( !v2 )
    return 0LL;
  v4 = v2 & 0xF;
  if ( (v2 & 0xF) == 0 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
    {
      _m_prefetchw(&ExpCallBackFlush);
      v6 = ExpCallBackFlush & 0x7FFFFFFF;
      while ( 1 )
      {
        v7 = v6;
        v6 = _InterlockedCompareExchange(&ExpCallBackFlush, v6 + 1, v6);
        if ( v7 == v6 )
          break;
        if ( v6 < 0 )
        {
          ExpWaitForSpinLockSharedAndAcquire(&ExpCallBackFlush, CurrentIrql);
          break;
        }
      }
    }
    else
    {
      ExpAcquireSpinLockSharedAtDpcLevelInstrumented(&ExpCallBackFlush, CurrentIrql);
    }
    v8 = (struct _EX_RUNDOWN_REF *)(*a1 & 0xFFFFFFFFFFFFFFF0uLL);
    if ( v8 && !ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(*a1 & 0xFFFFFFFFFFFFFFF0uLL)) )
      v8 = 0LL;
    if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
    {
      _InterlockedAnd(&ExpCallBackFlush, 0xBFFFFFFF);
      _InterlockedDecrement(&ExpCallBackFlush);
    }
    else
    {
      ExpReleaseSpinLockSharedFromDpcLevelInstrumented(&ExpCallBackFlush, retaddr);
    }
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    __writecr8(CurrentIrql);
    if ( !v8 )
      return 0LL;
    return v8;
  }
  v8 = (struct _EX_RUNDOWN_REF *)(v2 & 0xFFFFFFFFFFFFFFF0uLL);
  if ( v4 != 1 || !ExAcquireRundownProtectionEx(v8, 0xFu) )
    return v8;
  _m_prefetchw(a1);
  v10 = *a1;
  while ( (v10 & 0xF) == 0 && v8 == (struct _EX_RUNDOWN_REF *)(v10 & 0xFFFFFFFFFFFFFFF0uLL) )
  {
    v11 = v10;
    v10 = _InterlockedCompareExchange64(a1, v10 + 15, v10);
    if ( v11 == v10 )
      return v8;
  }
  ExpReleaseRundownProtection(v8, 0xFu);
  return v8;
}
