/*
 * XREFs of PopGetPowerSettingValue @ 0x14049172C
 * Callers:
 *     PopCaptureSleepStudyStatistics @ 0x14032DC2C (PopCaptureSleepStudyStatistics.c)
 *     PopScanIdleList @ 0x1404EAE90 (PopScanIdleList.c)
 *     PopBatteryUpdateAlarms @ 0x1409B7D30 (PopBatteryUpdateAlarms.c)
 *     PopEsInStandbyEvaluate @ 0x140A3B940 (PopEsInStandbyEvaluate.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x14031E470 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14033E850 (ExAcquireFastMutex.c)
 *     memmove @ 0x1406BFC40 (memmove.c)
 *     PopFindPowerSettingConfiguration @ 0x1409BCCB0 (PopFindPowerSettingConfiguration.c)
 */

__int64 __fastcall PopGetPowerSettingValue(
        __int64 a1,
        __int64 a2,
        signed int a3,
        void *a4,
        unsigned int a5,
        unsigned int *a6)
{
  __int64 PowerSettingConfiguration; // rax
  unsigned int v10; // ebx
  __int64 v11; // rdx
  unsigned int v12; // edx

  ExAcquireFastMutex(&PopSettingLock);
  if ( (unsigned int)a3 > 1 )
    a3 = dword_140F0BA4C;
  PowerSettingConfiguration = PopFindPowerSettingConfiguration(a1, 0xFFFFFFFFLL);
  v10 = 0;
  if ( PowerSettingConfiguration && (v11 = *(_QWORD *)(PowerSettingConfiguration + 8LL * a3 + 64)) != 0 )
  {
    v12 = *(_DWORD *)(v11 + 4);
    *a6 = v12;
    if ( a5 < v12 )
      v10 = -1073741306;
    else
      memmove(a4, (const void *)(*(_QWORD *)(PowerSettingConfiguration + 8LL * a3 + 64) + 12LL), v12);
  }
  else
  {
    v10 = -1073741811;
  }
  KeReleaseGuardedMutex(&PopSettingLock);
  return v10;
}
