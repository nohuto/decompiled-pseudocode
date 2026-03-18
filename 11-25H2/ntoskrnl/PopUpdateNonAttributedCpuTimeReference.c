/*
 * XREFs of PopUpdateNonAttributedCpuTimeReference @ 0x14026A140
 * Callers:
 *     PpmUpdateIdleVeto @ 0x14026A350 (PpmUpdateIdleVeto.c)
 *     PopFxPlatformStateAvailable @ 0x140355F24 (PopFxPlatformStateAvailable.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402535A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     PopDiagTraceNonAttributedCpuReferences @ 0x140268E30 (PopDiagTraceNonAttributedCpuReferences.c)
 *     KeReleaseSpinLock @ 0x1402EA780 (KeReleaseSpinLock.c)
 *     PopAccumulateNonDripsIdleCpuTime @ 0x140493398 (PopAccumulateNonDripsIdleCpuTime.c)
 *     PopAccumulateNonActivatedCpuTime @ 0x140493488 (PopAccumulateNonActivatedCpuTime.c)
 */

void __fastcall PopUpdateNonAttributedCpuTimeReference(char a1)
{
  __int64 v2; // rcx
  KIRQL v3; // di
  __int64 v4; // rcx

  v3 = KeAcquireSpinLockRaiseToDpc(&qword_140E27B88);
  if ( a1 )
  {
    if ( ++dword_140E27B84 == 1 )
    {
      PopAccumulateNonActivatedCpuTime(0LL, &unk_140E27A30, &qword_140E27A38);
      v4 = 0LL;
LABEL_6:
      PopAccumulateNonDripsIdleCpuTime(v4, &unk_140E27A40, &unk_140E27A48, &qword_140E27A50);
    }
  }
  else if ( !--dword_140E27B84 )
  {
    LOBYTE(v2) = 1;
    PopAccumulateNonActivatedCpuTime(v2, &unk_140E27A30, &qword_140E27A38);
    LOBYTE(v4) = 1;
    goto LABEL_6;
  }
  PopDiagTraceNonAttributedCpuReferences(dword_140E27B84);
  KeReleaseSpinLock(&qword_140E27B88, v3);
}
