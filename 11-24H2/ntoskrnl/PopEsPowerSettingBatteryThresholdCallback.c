/*
 * XREFs of PopEsPowerSettingBatteryThresholdCallback @ 0x140AAAC70
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x1403B5EC8 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x1404283D4 (PopAcquireRwLockExclusive.c)
 *     PopEsWorkItemSchedule @ 0x140A3BCA4 (PopEsWorkItemSchedule.c)
 */

__int64 __fastcall PopEsPowerSettingBatteryThresholdCallback(__int64 a1, int *a2, int a3)
{
  unsigned int v4; // ebx

  v4 = -1073741811;
  if ( a2 && a3 == 4 )
  {
    v4 = 0;
    PopAcquireRwLockExclusive(&PopEsLock);
    dword_140F0BA90 = *a2;
    if ( (unsigned int)dword_140F0BA90 > 0x64 )
      dword_140F0BA90 = 100;
    PopReleaseRwLock((signed __int64 *)&PopEsLock);
    PopEsWorkItemSchedule(2);
  }
  return v4;
}
