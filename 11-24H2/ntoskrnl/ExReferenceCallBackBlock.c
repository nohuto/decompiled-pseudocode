/*
 * XREFs of ExReferenceCallBackBlock @ 0x140279300
 * Callers:
 *     IoBoostThreadIoPriority @ 0x140278D90 (IoBoostThreadIoPriority.c)
 *     PoIssueCoalescingNotification @ 0x140445910 (PoIssueCoalescingNotification.c)
 *     KiEnumerateCallback @ 0x1404D5F20 (KiEnumerateCallback.c)
 *     IoUnregisterPriorityCallback @ 0x140596C90 (IoUnregisterPriorityCallback.c)
 *     KeDeregisterBoundCallback @ 0x1405B0720 (KeDeregisterBoundCallback.c)
 *     KiHandleBound @ 0x1405B0F60 (KiHandleBound.c)
 *     DbgkLkmdRegisterCallback @ 0x140707E70 (DbgkLkmdRegisterCallback.c)
 *     DbgkLkmdUnregisterCallback @ 0x140707F60 (DbgkLkmdUnregisterCallback.c)
 *     DbgkpLkmdFireCallbacks @ 0x140708008 (DbgkpLkmdFireCallbacks.c)
 *     PoUnregisterCoalescingCallback @ 0x140750EC0 (PoUnregisterCoalescingCallback.c)
 *     PspCallThreadNotifyRoutines @ 0x1408A66B0 (PspCallThreadNotifyRoutines.c)
 *     KeUserModeCallback @ 0x1408BF150 (KeUserModeCallback.c)
 *     PspInitializeThunkContext @ 0x1408FE308 (PspInitializeThunkContext.c)
 *     PsCallImageNotifyRoutines @ 0x1408FFB60 (PsCallImageNotifyRoutines.c)
 *     ExCallCallBack @ 0x1409358AC (ExCallCallBack.c)
 *     PspCallProcessNotifyRoutines @ 0x140938898 (PspCallProcessNotifyRoutines.c)
 *     NtFindAtom @ 0x140992B70 (NtFindAtom.c)
 *     PsInvokeWin32Callout @ 0x1409BADD0 (PsInvokeWin32Callout.c)
 *     PsRemoveCreateThreadNotifyRoutine @ 0x140A8B940 (PsRemoveCreateThreadNotifyRoutine.c)
 *     PspSetCreateProcessNotifyRoutine @ 0x140A90080 (PspSetCreateProcessNotifyRoutine.c)
 *     PsRemoveLoadImageNotifyRoutine @ 0x140AAB560 (PsRemoveLoadImageNotifyRoutine.c)
 * Callees:
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x1402465FC (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 *     ExAcquireRundownProtection @ 0x1402792A0 (ExAcquireRundownProtection.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x1402C4AD0 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     ExpReleaseRundownProtection @ 0x1402C8140 (ExpReleaseRundownProtection.c)
 *     ExAcquireRundownProtectionEx @ 0x1402C9E60 (ExAcquireRundownProtectionEx.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x1402DFAA0 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 */

struct _EX_RUNDOWN_REF *__fastcall ExReferenceCallBackBlock(signed __int64 *a1)
{
  signed __int64 v2; // rbx
  signed __int64 v3; // rax
  signed __int64 v4; // rax
  unsigned __int8 CurrentIrql; // si
  struct _EX_RUNDOWN_REF *v6; // rbx
  signed __int32 v8; // eax
  signed __int32 v9; // ett
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
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2LL);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
    {
      _m_prefetchw(&ExpCallBackFlush);
      v8 = ExpCallBackFlush & 0x7FFFFFFF;
      while ( 1 )
      {
        v9 = v8;
        v8 = _InterlockedCompareExchange(&ExpCallBackFlush, v8 + 1, v8);
        if ( v9 == v8 )
          break;
        if ( v8 < 0 )
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
    v6 = (struct _EX_RUNDOWN_REF *)(*a1 & 0xFFFFFFFFFFFFFFF0uLL);
    if ( v6 && !ExAcquireRundownProtection((PEX_RUNDOWN_REF)(*a1 & 0xFFFFFFFFFFFFFFF0uLL)) )
      v6 = 0LL;
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
    if ( !v6 )
      return 0LL;
    return v6;
  }
  v6 = (struct _EX_RUNDOWN_REF *)(v2 & 0xFFFFFFFFFFFFFFF0uLL);
  if ( v4 != 1 || !ExAcquireRundownProtectionEx(v6, 0xFu) )
    return v6;
  _m_prefetchw(a1);
  v10 = *a1;
  while ( (v10 & 0xF) == 0 && v6 == (struct _EX_RUNDOWN_REF *)(v10 & 0xFFFFFFFFFFFFFFF0uLL) )
  {
    v11 = v10;
    v10 = _InterlockedCompareExchange64(a1, v10 + 15, v10);
    if ( v11 == v10 )
      return v6;
  }
  ExpReleaseRundownProtection(v6, 0xFu);
  return v6;
}
