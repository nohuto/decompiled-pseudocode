/*
 * XREFs of ExCompareExchangeCallBack @ 0x1402C9C50
 * Callers:
 *     IoRegisterPriorityCallback @ 0x140596B00 (IoRegisterPriorityCallback.c)
 *     IoUnregisterPriorityCallback @ 0x140596C90 (IoUnregisterPriorityCallback.c)
 *     KeDeregisterBoundCallback @ 0x1405B0720 (KeDeregisterBoundCallback.c)
 *     KeRegisterBoundCallback @ 0x1405B0B20 (KeRegisterBoundCallback.c)
 *     DbgkLkmdRegisterCallback @ 0x140707E70 (DbgkLkmdRegisterCallback.c)
 *     DbgkLkmdUnregisterCallback @ 0x140707F60 (DbgkLkmdUnregisterCallback.c)
 *     PoRegisterCoalescingCallback @ 0x140750DC0 (PoRegisterCoalescingCallback.c)
 *     PoUnregisterCoalescingCallback @ 0x140750EC0 (PoUnregisterCoalescingCallback.c)
 *     PsEstablishWin32Callouts @ 0x140774510 (PsEstablishWin32Callouts.c)
 *     PspSetCreateThreadNotifyRoutine @ 0x14077A318 (PspSetCreateThreadNotifyRoutine.c)
 *     PsSetLoadImageNotifyRoutineEx @ 0x140A897E0 (PsSetLoadImageNotifyRoutineEx.c)
 *     PsRemoveCreateThreadNotifyRoutine @ 0x140A8B940 (PsRemoveCreateThreadNotifyRoutine.c)
 *     PspSetCreateProcessNotifyRoutine @ 0x140A90080 (PspSetCreateProcessNotifyRoutine.c)
 *     PsRemoveLoadImageNotifyRoutine @ 0x140AAB560 (PsRemoveLoadImageNotifyRoutine.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14028F370 (ExAcquireSpinLockExclusive.c)
 *     ExpReleaseRundownProtection @ 0x1402C8140 (ExpReleaseRundownProtection.c)
 *     ExAcquireRundownProtectionEx @ 0x1402C9E60 (ExAcquireRundownProtectionEx.c)
 *     ExReleaseSpinLockExclusive @ 0x140379ED0 (ExReleaseSpinLockExclusive.c)
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
