/*
 * XREFs of ExpSetSystemTime @ 0x140B6CD90
 * Callers:
 *     NtSetSystemTime @ 0x1407B6BF0 (NtSetSystemTime.c)
 *     ExUpdateSystemTimeFromCmos @ 0x140B68020 (ExUpdateSystemTimeFromCmos.c)
 * Callees:
 *     ExSystemTimeToLocalTime @ 0x140347CE0 (ExSystemTimeToLocalTime.c)
 *     PsGetCurrentServerSiloGlobals @ 0x140347D10 (PsGetCurrentServerSiloGlobals.c)
 *     HalSetRealTimeClock @ 0x140425310 (HalSetRealTimeClock.c)
 *     RtlTimeToTimeFields @ 0x1404260F0 (RtlTimeToTimeFields.c)
 *     KeSetSystemTime @ 0x1404B3F6C (KeSetSystemTime.c)
 *     PoNotifySystemTimeSet @ 0x1404CA740 (PoNotifySystemTimeSet.c)
 *     ExpRefreshTimeZoneInformation @ 0x1409DC59C (ExpRefreshTimeZoneInformation.c)
 */

__int64 ExpSetSystemTime(char a1, char a2, int a3, ...)
{
  struct _LIST_ENTRY *CurrentServerSiloGlobals; // r14
  int v8; // [rsp+28h] [rbp-38h]
  LARGE_INTEGER LocalTime; // [rsp+40h] [rbp-20h] BYREF
  TIME_FIELDS TimeFields; // [rsp+48h] [rbp-18h] BYREF
  LARGE_INTEGER SystemTime; // [rsp+98h] [rbp+38h] BYREF
  va_list SystemTimea; // [rsp+98h] [rbp+38h]
  __int64 *v13; // [rsp+A0h] [rbp+40h]
  va_list va1; // [rsp+A8h] [rbp+48h] BYREF

  va_start(va1, a3);
  va_start(SystemTimea, a3);
  SystemTime.QuadPart = va_arg(va1, _QWORD);
  v13 = va_arg(va1, __int64 *);
  LocalTime.QuadPart = 0LL;
  TimeFields = 0LL;
  CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
  if ( ExpRealTimeIsUniversal )
    LocalTime = SystemTime;
  else
    ExSystemTimeToLocalTime((PLARGE_INTEGER)SystemTimea, &LocalTime);
  KeSetSystemTime((__int64)SystemTimea, (__int64)v13, a2 != 0 ? 3 : 0);
  if ( a1 )
  {
    ExpRefreshTimeZoneInformation(0);
    if ( !ExpSystemIsInCmosMode )
    {
      if ( ExpRealTimeIsUniversal )
        LocalTime = SystemTime;
      else
        ExSystemTimeToLocalTime((PLARGE_INTEGER)SystemTimea, &LocalTime);
      RtlTimeToTimeFields(&LocalTime, &TimeFields);
      HalSetRealTimeClock((__int64)&TimeFields);
    }
  }
  return PoNotifySystemTimeSet(
           (__int64 *)SystemTimea,
           v13,
           a3,
           (int)&LocalTime,
           HIDWORD(CurrentServerSiloGlobals[76].Blink[27].Flink),
           v8,
           ExpSystemIsInCmosMode);
}
