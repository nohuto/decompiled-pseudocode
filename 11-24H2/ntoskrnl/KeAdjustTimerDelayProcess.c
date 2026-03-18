/*
 * XREFs of KeAdjustTimerDelayProcess @ 0x1405B8208
 * Callers:
 *     PspSetProcessTimerDelayForKTimers @ 0x1405E5CE0 (PspSetProcessTimerDelayForKTimers.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14020FA40 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiExitDispatcher @ 0x14031E7A0 (KiExitDispatcher.c)
 *     KiAcquireProcessLockExclusive @ 0x1403B3B60 (KiAcquireProcessLockExclusive.c)
 *     KiAdjustThreadTimer @ 0x1405C259C (KiAdjustThreadTimer.c)
 */

void __fastcall KeAdjustTimerDelayProcess(__int64 a1, __int64 a2, unsigned int a3)
{
  struct _KPRCB *CurrentPrcb; // r14
  _QWORD *i; // rbx
  char v8; // [rsp+60h] [rbp+18h] BYREF

  CurrentPrcb = KeGetCurrentPrcb();
  v8 = 0;
  KiAcquireProcessLockExclusive(a1, (unsigned __int8 *)&v8);
  for ( i = *(_QWORD **)(a1 + 48); i != (_QWORD *)(a1 + 48); i = (_QWORD *)*i )
    KiAdjustThreadTimer(i - 95, CurrentPrcb, a2, a3);
  *(_DWORD *)(a1 + 68) = a3;
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 64));
  KiExitDispatcher((unsigned __int64)CurrentPrcb, 0LL, 1u, 0, v8);
}
