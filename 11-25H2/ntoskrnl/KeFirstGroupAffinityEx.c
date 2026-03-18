/*
 * XREFs of KeFirstGroupAffinityEx @ 0x14045ADB0
 * Callers:
 *     KeSetSystemGroupAffinityThread @ 0x1402783E0 (KeSetSystemGroupAffinityThread.c)
 *     HalpTimerStallExecutionProcessor @ 0x14027A3C0 (HalpTimerStallExecutionProcessor.c)
 *     KeSetSystemMultipleGroupAffinityThread @ 0x1404C641C (KeSetSystemMultipleGroupAffinityThread.c)
 *     PpmIdleInstallNewVetoList @ 0x1405CA0F0 (PpmIdleInstallNewVetoList.c)
 *     PpmIdleInitializeConcurrency @ 0x14073E060 (PpmIdleInitializeConcurrency.c)
 *     PpmRegisterPerfStates @ 0x140743E04 (PpmRegisterPerfStates.c)
 *     NtSetInformationJobObject @ 0x140AC4C00 (NtSetInformationJobObject.c)
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
