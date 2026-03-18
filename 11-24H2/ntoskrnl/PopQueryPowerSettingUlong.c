/*
 * XREFs of PopQueryPowerSettingUlong @ 0x140AB4520
 * Callers:
 *     PopDeferDoze @ 0x140754EC8 (PopDeferDoze.c)
 *     PopCheckPowerSourceAfterRtcWakeTimerWorker @ 0x140B5F5B0 (PopCheckPowerSourceAfterRtcWakeTimerWorker.c)
 *     PopTransitionSystemPowerStateEx @ 0x140B667DC (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x14031E470 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14033E850 (ExAcquireFastMutex.c)
 *     PopFindPowerSettingConfiguration @ 0x1409BCCB0 (PopFindPowerSettingConfiguration.c)
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
