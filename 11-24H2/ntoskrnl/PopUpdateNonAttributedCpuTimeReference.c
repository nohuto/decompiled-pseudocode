/*
 * XREFs of PopUpdateNonAttributedCpuTimeReference @ 0x1403CA934
 * Callers:
 *     PpmUpdateIdleVeto @ 0x1403CA680 (PpmUpdateIdleVeto.c)
 *     PopFxPlatformStateAvailable @ 0x1403CAA54 (PopFxPlatformStateAvailable.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14024DD30 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140254B20 (KeAcquireSpinLockRaiseToDpc.c)
 *     PopDiagTraceNonAttributedCpuReferences @ 0x1403CBBC4 (PopDiagTraceNonAttributedCpuReferences.c)
 *     PopAccumulateNonDripsIdleCpuTime @ 0x140495C20 (PopAccumulateNonDripsIdleCpuTime.c)
 *     PopAccumulateNonActivatedCpuTime @ 0x140495D14 (PopAccumulateNonActivatedCpuTime.c)
 */

void __fastcall PopUpdateNonAttributedCpuTimeReference(char a1)
{
  __int64 v2; // rcx
  KIRQL v3; // di
  __int64 v4; // rcx

  v3 = KeAcquireSpinLockRaiseToDpc(&qword_140E27DC8);
  if ( a1 )
  {
    if ( ++dword_140E27DC4 == 1 )
    {
      PopAccumulateNonActivatedCpuTime(0LL, &unk_140E27C70, &qword_140E27C78);
      v4 = 0LL;
LABEL_6:
      PopAccumulateNonDripsIdleCpuTime(v4, &unk_140E27C80, &unk_140E27C88, &qword_140E27C90);
    }
  }
  else if ( !--dword_140E27DC4 )
  {
    LOBYTE(v2) = 1;
    PopAccumulateNonActivatedCpuTime(v2, &unk_140E27C70, &qword_140E27C78);
    LOBYTE(v4) = 1;
    goto LABEL_6;
  }
  PopDiagTraceNonAttributedCpuReferences((unsigned int)dword_140E27DC4);
  KeReleaseSpinLock(&qword_140E27DC8, v3);
}
