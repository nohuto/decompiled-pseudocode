/*
 * XREFs of PfpStartLoggingHardFaultEvents @ 0x140B6DE30
 * Callers:
 *     PfPowerActionNotify @ 0x140B6B9F8 (PfPowerActionNotify.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14024DD30 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140254B20 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiSetTimerEx @ 0x1403347A0 (KiSetTimerEx.c)
 *     KeInitializeTimer @ 0x140455420 (KeInitializeTimer.c)
 *     KeInitializeDpc @ 0x140455470 (KeInitializeDpc.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 */

__int64 PfpStartLoggingHardFaultEvents()
{
  __int64 Pool2; // rax
  unsigned int v1; // edi
  __int64 v2; // rsi
  KIRQL v3; // al

  Pool2 = ExAllocatePool2(0x40uLL);
  v1 = 0;
  v2 = Pool2;
  if ( Pool2 )
  {
    *(_DWORD *)(Pool2 + 160) = 0;
    v3 = KeAcquireSpinLockRaiseToDpc(&qword_140E66EE8);
    *(_DWORD *)(v2 + 164) = ++dword_140E66EF4;
    _InterlockedOr((_DWORD *)&xmmword_140F0E408 + 1, 1u);
    KeReleaseSpinLock(&qword_140E66EE8, v3);
    KeInitializeTimer((PKTIMER)(v2 + 64));
    KeInitializeDpc((PRKDPC)v2, (PKDEFERRED_ROUTINE)PfpPowerActionDpcRoutine, (PVOID)v2);
    KiSetTimerEx(v2 + 64, -200000000LL, 0, 0, v2);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v1;
}
