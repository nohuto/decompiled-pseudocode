/*
 * XREFs of PfpStartLoggingHardFaultEvents @ 0x140B6F6D0
 * Callers:
 *     PfPowerActionNotify @ 0x140B6CE28 (PfPowerActionNotify.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14027E340 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140285130 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiSetTimerEx @ 0x140316810 (KiSetTimerEx.c)
 *     KeInitializeTimer @ 0x14044A0E0 (KeInitializeTimer.c)
 *     KeInitializeDpc @ 0x14044A220 (KeInitializeDpc.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

__int64 PfpStartLoggingHardFaultEvents()
{
  __int64 Pool2; // rax
  unsigned int v1; // edi
  __int64 v2; // rsi
  KIRQL v3; // al

  Pool2 = ExAllocatePool2(0x40uLL, 0xA8uLL, 0x44506650u);
  v1 = 0;
  v2 = Pool2;
  if ( Pool2 )
  {
    *(_DWORD *)(Pool2 + 160) = 0;
    v3 = KeAcquireSpinLockRaiseToDpc(&qword_140E67038);
    *(_DWORD *)(v2 + 164) = ++dword_140E67044;
    _InterlockedOr((_DWORD *)&xmmword_140F0E6E8 + 1, 1u);
    KeReleaseSpinLock(&qword_140E67038, v3);
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
