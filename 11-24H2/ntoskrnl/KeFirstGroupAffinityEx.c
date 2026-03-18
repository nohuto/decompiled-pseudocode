/*
 * XREFs of KeFirstGroupAffinityEx @ 0x14045A8C0
 * Callers:
 *     KeSetSystemGroupAffinityThread @ 0x140339650 (KeSetSystemGroupAffinityThread.c)
 *     HalpTimerStallExecutionProcessor @ 0x14033B670 (HalpTimerStallExecutionProcessor.c)
 *     KeSetSystemMultipleGroupAffinityThread @ 0x1404C6BDC (KeSetSystemMultipleGroupAffinityThread.c)
 *     PpmIdleInstallNewVetoList @ 0x1405CE7A0 (PpmIdleInstallNewVetoList.c)
 *     PpmIdleInitializeConcurrency @ 0x14074A0E0 (PpmIdleInitializeConcurrency.c)
 *     PpmRegisterPerfStates @ 0x14074FED4 (PpmRegisterPerfStates.c)
 *     NtSetInformationJobObject @ 0x140ACE760 (NtSetInformationJobObject.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeFirstGroupAffinityEx(__int64 a1, unsigned __int16 *a2)
{
  unsigned __int16 i; // ax

  for ( i = 0; i < *a2; ++i )
  {
    if ( *(_QWORD *)&a2[4 * i + 4] )
    {
      *(_OWORD *)a1 = 0LL;
      *(_WORD *)(a1 + 8) = i;
      *(_QWORD *)a1 = *(_QWORD *)&a2[4 * i + 4];
      return 0LL;
    }
  }
  return 3221226021LL;
}
