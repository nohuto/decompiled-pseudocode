/*
 * XREFs of PopQueryPowerSettingUlong @ 0x140AAF490
 * Callers:
 *     PopDeferDoze @ 0x1407531E8 (PopDeferDoze.c)
 *     PopCheckPowerSourceAfterRtcWakeTimerWorker @ 0x140B61630 (PopCheckPowerSourceAfterRtcWakeTimerWorker.c)
 *     PopTransitionSystemPowerStateEx @ 0x140B6891C (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x1402C7000 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14031DD30 (ExAcquireFastMutex.c)
 *     PopFindPowerSettingConfiguration @ 0x1409A3300 (PopFindPowerSettingConfiguration.c)
 */

char __fastcall PopQueryPowerSettingUlong(_QWORD *a1, _DWORD *a2, _DWORD *a3)
{
  char v6; // di
  PVOID *PowerSettingConfiguration; // rax
  PVOID *v8; // r9
  _DWORD *v9; // rax
  _DWORD *v10; // rax

  v6 = 0;
  ExAcquireFastMutex(&PopSettingLock);
  PowerSettingConfiguration = PopFindPowerSettingConfiguration(a1, -1);
  v8 = PowerSettingConfiguration;
  if ( PowerSettingConfiguration )
  {
    v9 = PowerSettingConfiguration[8];
    if ( v9 )
    {
      if ( v9[1] >= 4u )
      {
        *a2 = v9[3];
        v10 = v8[9];
        if ( v10 )
        {
          if ( v10[1] >= 4u )
          {
            v6 = 1;
            *a3 = v10[3];
          }
        }
      }
    }
  }
  KeReleaseGuardedMutex(&PopSettingLock);
  return v6;
}
