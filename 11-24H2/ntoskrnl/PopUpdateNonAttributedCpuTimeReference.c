/*
 * XREFs of PopUpdateNonAttributedCpuTimeReference @ 0x1403A5504
 * Callers:
 *     PpmUpdateIdleVeto @ 0x1403A5250 (PpmUpdateIdleVeto.c)
 *     PopFxPlatformStateAvailable @ 0x1403A5E38 (PopFxPlatformStateAvailable.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14027E340 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140285130 (KeAcquireSpinLockRaiseToDpc.c)
 *     PopAccumulateNonDripsIdleCpuTime @ 0x1404904E0 (PopAccumulateNonDripsIdleCpuTime.c)
 *     PopAccumulateNonActivatedCpuTime @ 0x1404905D4 (PopAccumulateNonActivatedCpuTime.c)
 *     PopDiagTraceNonAttributedCpuReferences @ 0x1404AFBA4 (PopDiagTraceNonAttributedCpuReferences.c)
 */

void __fastcall PopUpdateNonAttributedCpuTimeReference(char a1)
{
  __int64 v2; // rcx
  KIRQL v3; // di
  __int64 v4; // rcx

  v3 = KeAcquireSpinLockRaiseToDpc(&qword_140E27F08);
  if ( a1 )
  {
    if ( ++dword_140E27F04 == 1 )
    {
      PopAccumulateNonActivatedCpuTime(0LL, &unk_140E27DB0, &qword_140E27DB8);
      v4 = 0LL;
LABEL_6:
      PopAccumulateNonDripsIdleCpuTime(v4, &unk_140E27DC0, &unk_140E27DC8, &qword_140E27DD0);
    }
  }
  else if ( !--dword_140E27F04 )
  {
    LOBYTE(v2) = 1;
    PopAccumulateNonActivatedCpuTime(v2, &unk_140E27DB0, &qword_140E27DB8);
    LOBYTE(v4) = 1;
    goto LABEL_6;
  }
  PopDiagTraceNonAttributedCpuReferences((unsigned int)dword_140E27F04);
  KeReleaseSpinLock(&qword_140E27F08, v3);
}
