/*
 * XREFs of ExpRefreshSystemTime @ 0x1407A73C4
 * Callers:
 *     CmpFinishSystemHivesLoad @ 0x1407BAA30 (CmpFinishSystemHivesLoad.c)
 *     CmCompleteRegistryInitialization @ 0x1407BF9FC (CmCompleteRegistryInitialization.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x14030F050 (PsGetCurrentServerSiloGlobals.c)
 *     ExSystemTimeToLocalTime @ 0x14030F0D0 (ExSystemTimeToLocalTime.c)
 *     ExLocalTimeToSystemTime @ 0x1403104A0 (ExLocalTimeToSystemTime.c)
 *     KeSetSystemTime @ 0x140417A68 (KeSetSystemTime.c)
 *     HalSetRealTimeClock @ 0x14042D240 (HalSetRealTimeClock.c)
 *     HalQueryRealTimeClock @ 0x14042D740 (HalQueryRealTimeClock.c)
 *     RtlTimeToTimeFields @ 0x14042E020 (RtlTimeToTimeFields.c)
 *     RtlTimeFieldsToTime @ 0x14042E5E0 (RtlTimeFieldsToTime.c)
 *     PoNotifySystemTimeSet @ 0x1404CA36C (PoNotifySystemTimeSet.c)
 *     ExpRefreshTimeZoneInformation @ 0x140993940 (ExpRefreshTimeZoneInformation.c)
 *     ExAcquireTimeRefreshLockExclusive @ 0x1409CCD20 (ExAcquireTimeRefreshLockExclusive.c)
 *     ExReleaseTimeRefreshLockExclusive @ 0x1409CCD84 (ExReleaseTimeRefreshLockExclusive.c)
 */

__int64 ExpRefreshSystemTime()
{
  struct _LIST_ENTRY *Blink; // rbx
  unsigned __int8 v1; // di
  int Flink_high; // esi
  LARGE_INTEGER v3; // rax
  int v5; // [rsp+28h] [rbp-28h]
  _TIME_FIELDS TimeFields; // [rsp+40h] [rbp-10h] BYREF
  LARGE_INTEGER Time; // [rsp+70h] [rbp+20h] BYREF
  LARGE_INTEGER SystemTime; // [rsp+78h] [rbp+28h] BYREF
  LARGE_INTEGER v9; // [rsp+80h] [rbp+30h] BYREF

  SystemTime.QuadPart = 0LL;
  v9.QuadPart = 0LL;
  Time.QuadPart = 0LL;
  TimeFields = 0LL;
  Blink = PsGetCurrentServerSiloGlobals()[76].Blink;
  ExAcquireTimeRefreshLockExclusive();
  v1 = ExpSystemIsInCmosMode;
  if ( HalQueryRealTimeClock((__int64)&TimeFields) )
  {
    if ( RtlTimeFieldsToTime(&TimeFields, &Time) )
    {
      Flink_high = HIDWORD(Blink[27].Flink);
      if ( (unsigned __int8)ExpRefreshTimeZoneInformation(0LL) )
      {
        if ( Flink_high != HIDWORD(Blink[27].Flink) )
        {
          v3.QuadPart = MEMORY[0xFFFFF78000000014];
          SystemTime.QuadPart = MEMORY[0xFFFFF78000000014];
          if ( !ExpRealTimeIsUniversal )
          {
            if ( v1 )
            {
              ExLocalTimeToSystemTime(&Time, &v9);
              KeSetSystemTime((__int64)&v9, (__int64)&SystemTime, 0);
              goto LABEL_9;
            }
            ExSystemTimeToLocalTime(&SystemTime, &Time);
            RtlTimeToTimeFields(&Time, &TimeFields);
            HalSetRealTimeClock((__int64)&TimeFields);
            v3 = SystemTime;
          }
          v9 = v3;
LABEL_9:
          PoNotifySystemTimeSet((__int64 *)&v9, (__int64 *)&SystemTime, 3, (int)&Time, HIDWORD(Blink[27].Flink), v5, v1);
        }
      }
    }
  }
  return ExReleaseTimeRefreshLockExclusive();
}
