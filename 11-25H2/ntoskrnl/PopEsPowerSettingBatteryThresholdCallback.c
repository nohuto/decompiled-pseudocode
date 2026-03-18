/*
 * XREFs of PopEsPowerSettingBatteryThresholdCallback @ 0x140AA5680
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x140204578 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140431E64 (PopAcquireRwLockExclusive.c)
 *     PopEsWorkItemSchedule @ 0x140A36FBC (PopEsWorkItemSchedule.c)
 */

__int64 __fastcall PopEsPowerSettingBatteryThresholdCallback(__int64 a1, int *a2, int a3)
{
  unsigned int v4; // ebx

  v4 = -1073741811;
  if ( a2 && a3 == 4 )
  {
    v4 = 0;
    PopAcquireRwLockExclusive((unsigned __int64 *)&PopEsLock);
    dword_140F0B750 = *a2;
    if ( (unsigned int)dword_140F0B750 > 0x64 )
      dword_140F0B750 = 100;
    PopReleaseRwLock(&PopEsLock);
    PopEsWorkItemSchedule(2);
  }
  return v4;
}
