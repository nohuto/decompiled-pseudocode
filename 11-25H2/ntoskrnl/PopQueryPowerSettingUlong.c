/*
 * XREFs of PopQueryPowerSettingUlong @ 0x140AAF530
 * Callers:
 *     PopDeferDoze @ 0x140748DF8 (PopDeferDoze.c)
 *     PopCheckPowerSourceAfterRtcWakeTimerWorker @ 0x140B4F470 (PopCheckPowerSourceAfterRtcWakeTimerWorker.c)
 *     PopTransitionSystemPowerStateEx @ 0x140B569AC (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140286F40 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14029C580 (ExAcquireFastMutex.c)
 *     PopFindPowerSettingConfiguration @ 0x140964F00 (PopFindPowerSettingConfiguration.c)
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
