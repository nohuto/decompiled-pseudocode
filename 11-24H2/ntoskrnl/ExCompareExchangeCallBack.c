/*
 * XREFs of ExCompareExchangeCallBack @ 0x14040EA64
 * Callers:
 *     IoRegisterPriorityCallback @ 0x140593AE0 (IoRegisterPriorityCallback.c)
 *     IoUnregisterPriorityCallback @ 0x140593C70 (IoUnregisterPriorityCallback.c)
 *     KeDeregisterBoundCallback @ 0x1405AD690 (KeDeregisterBoundCallback.c)
 *     KeRegisterBoundCallback @ 0x1405ADA90 (KeRegisterBoundCallback.c)
 *     DbgkLkmdRegisterCallback @ 0x140705A30 (DbgkLkmdRegisterCallback.c)
 *     DbgkLkmdUnregisterCallback @ 0x140705B20 (DbgkLkmdUnregisterCallback.c)
 *     PoRegisterCoalescingCallback @ 0x14074F0E0 (PoRegisterCoalescingCallback.c)
 *     PoUnregisterCoalescingCallback @ 0x14074F1E0 (PoUnregisterCoalescingCallback.c)
 *     PsEstablishWin32Callouts @ 0x140774730 (PsEstablishWin32Callouts.c)
 *     PspSetCreateThreadNotifyRoutine @ 0x14077A418 (PspSetCreateThreadNotifyRoutine.c)
 *     PsSetLoadImageNotifyRoutineEx @ 0x140A85BE0 (PsSetLoadImageNotifyRoutineEx.c)
 *     PsRemoveCreateThreadNotifyRoutine @ 0x140A87E30 (PsRemoveCreateThreadNotifyRoutine.c)
 *     PspSetCreateProcessNotifyRoutine @ 0x140A8C77C (PspSetCreateProcessNotifyRoutine.c)
 *     PsRemoveLoadImageNotifyRoutine @ 0x140AA6790 (PsRemoveLoadImageNotifyRoutine.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14029EF70 (ExAcquireSpinLockExclusive.c)
 *     ExpReleaseRundownProtection @ 0x1402BA900 (ExpReleaseRundownProtection.c)
 *     ExReleaseSpinLockExclusive @ 0x1402E6E40 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireRundownProtectionEx @ 0x14040EC70 (ExAcquireRundownProtectionEx.c)
 */

char __fastcall ExCompareExchangeCallBack(signed __int64 *a1, struct _EX_RUNDOWN_REF *a2, __int64 a3)
{
  signed __int64 i; // rbx
  signed __int64 v8; // rcx
  signed __int64 v9; // rax
  struct _EX_RUNDOWN_REF *v10; // rsi
  KIRQL v11; // al

  if ( a2 && !ExAcquireRundownProtectionEx(a2, 0x10u) )
    return 0;
  _m_prefetchw(a1);
  for ( i = *a1; (a3 ^ (unsigned __int64)i) <= 0xF; i = v9 )
  {
    v8 = (unsigned __int64)a2 | 0xF;
    if ( !a2 )
      v8 = 0LL;
    v9 = _InterlockedCompareExchange64(a1, v8, i);
    if ( i == v9 )
      break;
  }
  v10 = (struct _EX_RUNDOWN_REF *)(i & 0xFFFFFFFFFFFFFFF0uLL);
  if ( (i & 0xFFFFFFFFFFFFFFF0uLL) != a3 )
  {
    if ( a2 )
      ExpReleaseRundownProtection(a2, 0x10u);
    return 0;
  }
  if ( v10 )
  {
    v11 = ExAcquireSpinLockExclusive(&ExpCallBackFlush);
    ExReleaseSpinLockExclusive(&ExpCallBackFlush, v11);
    ExpReleaseRundownProtection(v10, (i & 0xF) + 1);
  }
  return 1;
}
