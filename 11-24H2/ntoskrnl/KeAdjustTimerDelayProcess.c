/*
 * XREFs of KeAdjustTimerDelayProcess @ 0x1405B57E8
 * Callers:
 *     PspSetProcessTimerDelayForKTimers @ 0x1405E3280 (PspSetProcessTimerDelayForKTimers.c)
 * Callees:
 *     KiExitDispatcher @ 0x1402C7330 (KiExitDispatcher.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140338DA0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiAcquireProcessLockExclusive @ 0x1403A2370 (KiAcquireProcessLockExclusive.c)
 *     KiAdjustThreadTimer @ 0x1405BFB6C (KiAdjustThreadTimer.c)
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
