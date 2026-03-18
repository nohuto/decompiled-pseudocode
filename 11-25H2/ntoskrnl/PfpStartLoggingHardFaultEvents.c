/*
 * XREFs of PfpStartLoggingHardFaultEvents @ 0x140B5ED84
 * Callers:
 *     PfPowerActionNotify @ 0x140B5C910 (PfPowerActionNotify.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402535A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeReleaseSpinLock @ 0x1402EA780 (KeReleaseSpinLock.c)
 *     KiSetTimerEx @ 0x1402ED730 (KiSetTimerEx.c)
 *     KeInitializeTimer @ 0x140454D20 (KeInitializeTimer.c)
 *     KeInitializeDpc @ 0x140454E30 (KeInitializeDpc.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
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
    v3 = KeAcquireSpinLockRaiseToDpc(&qword_140E66C28);
    *(_DWORD *)(v2 + 164) = ++dword_140E66C34;
    _InterlockedOr((_DWORD *)&xmmword_140F0DD48 + 1, 1u);
    KeReleaseSpinLock(&qword_140E66C28, v3);
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
