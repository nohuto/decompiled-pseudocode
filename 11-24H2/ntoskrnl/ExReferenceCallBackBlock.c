/*
 * XREFs of ExReferenceCallBackBlock @ 0x14022E890
 * Callers:
 *     IoBoostThreadIoPriority @ 0x14022E320 (IoBoostThreadIoPriority.c)
 *     PoIssueCoalescingNotification @ 0x14043DCBC (PoIssueCoalescingNotification.c)
 *     KiEnumerateCallback @ 0x1404CF370 (KiEnumerateCallback.c)
 *     IoUnregisterPriorityCallback @ 0x140593C70 (IoUnregisterPriorityCallback.c)
 *     KeDeregisterBoundCallback @ 0x1405AD690 (KeDeregisterBoundCallback.c)
 *     KiHandleBound @ 0x1405ADED0 (KiHandleBound.c)
 *     DbgkLkmdRegisterCallback @ 0x140705A30 (DbgkLkmdRegisterCallback.c)
 *     DbgkLkmdUnregisterCallback @ 0x140705B20 (DbgkLkmdUnregisterCallback.c)
 *     DbgkpLkmdFireCallbacks @ 0x140705BC8 (DbgkpLkmdFireCallbacks.c)
 *     PoUnregisterCoalescingCallback @ 0x14074F1E0 (PoUnregisterCoalescingCallback.c)
 *     KeUserModeCallback @ 0x1408BCB10 (KeUserModeCallback.c)
 *     PspCallProcessNotifyRoutines @ 0x1408F2F68 (PspCallProcessNotifyRoutines.c)
 *     ExCallCallBack @ 0x1408F47CC (ExCallCallBack.c)
 *     PspCallThreadNotifyRoutines @ 0x1408FCCC0 (PspCallThreadNotifyRoutines.c)
 *     PspInitializeThunkContext @ 0x140920BE8 (PspInitializeThunkContext.c)
 *     PsCallImageNotifyRoutines @ 0x140922440 (PsCallImageNotifyRoutines.c)
 *     NtFindAtom @ 0x14097DBB0 (NtFindAtom.c)
 *     PsInvokeWin32Callout @ 0x1409A1420 (PsInvokeWin32Callout.c)
 *     PsRemoveCreateThreadNotifyRoutine @ 0x140A87E30 (PsRemoveCreateThreadNotifyRoutine.c)
 *     PspSetCreateProcessNotifyRoutine @ 0x140A8C77C (PspSetCreateProcessNotifyRoutine.c)
 *     PsRemoveLoadImageNotifyRoutine @ 0x140AA6790 (PsRemoveLoadImageNotifyRoutine.c)
 * Callees:
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x140219638 (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x140219B50 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     ExAcquireRundownProtection_0 @ 0x14022E830 (ExAcquireRundownProtection_0.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x140241380 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     ExpReleaseRundownProtection @ 0x1402BA900 (ExpReleaseRundownProtection.c)
 *     ExAcquireRundownProtectionEx @ 0x14040EC70 (ExAcquireRundownProtectionEx.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 */

struct _EX_RUNDOWN_REF *__fastcall ExReferenceCallBackBlock(signed __int64 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  signed __int64 v5; // rbx
  signed __int64 v6; // rax
  signed __int64 v7; // rax
  unsigned __int8 CurrentIrql; // si
  struct _EX_RUNDOWN_REF *v9; // rbx
  signed __int32 v11; // eax
  signed __int32 v12; // ett
  signed __int64 v13; // rax
  signed __int64 v14; // rtt
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  _m_prefetchw(a1);
  v5 = *a1;
  if ( (*a1 & 0xF) != 0 )
  {
    do
    {
      v6 = _InterlockedCompareExchange64(a1, v5 - 1, v5);
      if ( v5 == v6 )
        break;
      v5 = v6;
    }
    while ( (v6 & 0xF) != 0 );
  }
  if ( !v5 )
    return 0LL;
  v7 = v5 & 0xF;
  if ( (v5 & 0xF) == 0 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2LL);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
    {
      _m_prefetchw(&ExpCallBackFlush);
      v11 = ExpCallBackFlush & 0x7FFFFFFF;
      while ( 1 )
      {
        v12 = v11;
        v11 = _InterlockedCompareExchange(&ExpCallBackFlush, v11 + 1, v11);
        if ( v12 == v11 )
          break;
        if ( v11 < 0 )
        {
          ExpWaitForSpinLockSharedAndAcquire(&ExpCallBackFlush, CurrentIrql, a3, a4);
          break;
        }
      }
    }
    else
    {
      ExpAcquireSpinLockSharedAtDpcLevelInstrumented(&ExpCallBackFlush, CurrentIrql);
    }
    v9 = (struct _EX_RUNDOWN_REF *)(*a1 & 0xFFFFFFFFFFFFFFF0uLL);
    if ( v9 && !ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(*a1 & 0xFFFFFFFFFFFFFFF0uLL)) )
      v9 = 0LL;
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
    if ( !v9 )
      return 0LL;
    return v9;
  }
  v9 = (struct _EX_RUNDOWN_REF *)(v5 & 0xFFFFFFFFFFFFFFF0uLL);
  if ( v7 != 1 || !ExAcquireRundownProtectionEx(v9, 0xFu) )
    return v9;
  _m_prefetchw(a1);
  v13 = *a1;
  while ( (v13 & 0xF) == 0 && v9 == (struct _EX_RUNDOWN_REF *)(v13 & 0xFFFFFFFFFFFFFFF0uLL) )
  {
    v14 = v13;
    v13 = _InterlockedCompareExchange64(a1, v13 + 15, v13);
    if ( v14 == v13 )
      return v9;
  }
  ExpReleaseRundownProtection(v9, 0xFu);
  return v9;
}
