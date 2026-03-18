/*
 * XREFs of ExCompareExchangeCallBack @ 0x14036CC90
 * Callers:
 *     IoRegisterPriorityCallback @ 0x140593450 (IoRegisterPriorityCallback.c)
 *     IoUnregisterPriorityCallback @ 0x1405935E0 (IoUnregisterPriorityCallback.c)
 *     KeDeregisterBoundCallback @ 0x1405ACD90 (KeDeregisterBoundCallback.c)
 *     KeRegisterBoundCallback @ 0x1405AD190 (KeRegisterBoundCallback.c)
 *     DbgkLkmdRegisterCallback @ 0x1406FBF90 (DbgkLkmdRegisterCallback.c)
 *     DbgkLkmdUnregisterCallback @ 0x1406FC080 (DbgkLkmdUnregisterCallback.c)
 *     PoRegisterCoalescingCallback @ 0x140744CF0 (PoRegisterCoalescingCallback.c)
 *     PoUnregisterCoalescingCallback @ 0x140744DF0 (PoUnregisterCoalescingCallback.c)
 *     PsEstablishWin32Callouts @ 0x140764B40 (PsEstablishWin32Callouts.c)
 *     PspSetCreateThreadNotifyRoutine @ 0x14076A668 (PspSetCreateThreadNotifyRoutine.c)
 *     PsSetLoadImageNotifyRoutineEx @ 0x140A849F0 (PsSetLoadImageNotifyRoutineEx.c)
 *     PsRemoveCreateThreadNotifyRoutine @ 0x140A86CD0 (PsRemoveCreateThreadNotifyRoutine.c)
 *     PspSetCreateProcessNotifyRoutine @ 0x140A8B2EC (PspSetCreateProcessNotifyRoutine.c)
 *     PsRemoveLoadImageNotifyRoutine @ 0x140AA5FA0 (PsRemoveLoadImageNotifyRoutine.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x1402BEA90 (ExAcquireSpinLockExclusive.c)
 *     ExAcquireRundownProtectionEx @ 0x14036CEA0 (ExAcquireRundownProtectionEx.c)
 *     ExpReleaseRundownProtection @ 0x14036D760 (ExpReleaseRundownProtection.c)
 *     ExReleaseSpinLockExclusive @ 0x1403A2D40 (ExReleaseSpinLockExclusive.c)
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
