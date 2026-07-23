/*
 * XREFs of RtlCutoverTimeToSystemTime @ 0x14076E824
 * Callers:
 *     ExInitializeUtcTimeZoneBias @ 0x1407A697C (ExInitializeUtcTimeZoneBias.c)
 *     ExpRefreshTimeZoneInformation @ 0x140993940 (ExpRefreshTimeZoneInformation.c)
 * Callees:
 *     RtlTimeToTimeFields @ 0x14042E020 (RtlTimeToTimeFields.c)
 *     RtlTimeFieldsToTime @ 0x14042E5E0 (RtlTimeFieldsToTime.c)
 */

BOOLEAN __cdecl RtlCutoverTimeToSystemTime(
        PTIME_FIELDS CutoverTime,
        PLARGE_INTEGER SystemTime,
        PLARGE_INTEGER CurrentSystemTime,
        BOOLEAN ThisYear)
{
  __int16 Day; // r14
  __int16 Weekday; // r15
  __int16 Month; // cx
  __int16 v10; // bx
  __int16 Milliseconds; // ax
  __int16 v12; // r15
  __int16 v13; // si
  _TIME_FIELDS v14; // [rsp+20h] [rbp-30h] BYREF
  _TIME_FIELDS v15; // [rsp+30h] [rbp-20h] BYREF
  _TIME_FIELDS TimeFields; // [rsp+40h] [rbp-10h] BYREF
  LARGE_INTEGER Time; // [rsp+80h] [rbp+30h] BYREF

  TimeFields = 0LL;
  RtlTimeToTimeFields(CurrentSystemTime, &TimeFields);
  if ( CutoverTime->Year )
  {
    if ( RtlTimeFieldsToTime(CutoverTime, SystemTime) )
      return 1;
  }
  else
  {
    Day = CutoverTime->Day;
    v14.Day = 0;
    Time.QuadPart = 0LL;
    v15 = 0LL;
    if ( Day <= 5 )
    {
      if ( Day )
      {
        Weekday = CutoverTime->Weekday;
        Month = CutoverTime->Month;
        v14.Year = TimeFields.Year;
        v14.Hour = CutoverTime->Hour;
        v10 = 1;
        v14.Minute = CutoverTime->Minute;
        v14.Second = CutoverTime->Second;
        Milliseconds = CutoverTime->Milliseconds;
        v14.Month = Month;
        v14.Milliseconds = Milliseconds;
        v14.Day = 1;
        v14.Weekday = 0;
        if ( RtlTimeFieldsToTime(&v14, &Time) )
        {
          RtlTimeToTimeFields(&Time, &v15);
          if ( v15.Weekday <= Weekday )
          {
            if ( v15.Weekday < Weekday )
              v10 = Weekday - v15.Weekday + 1;
          }
          else
          {
            v10 = Weekday - v15.Weekday + 8;
          }
          v12 = v10;
          v13 = 1;
          if ( Day > 1 )
          {
            do
            {
              v10 += 7;
              v14.Day = v10;
              if ( !RtlTimeFieldsToTime(&v14, &Time) )
                break;
              RtlTimeToTimeFields(&Time, &v15);
              v12 = v15.Day;
              ++v13;
            }
            while ( v13 < Day );
          }
          v14.Day = v12;
          if ( RtlTimeFieldsToTime(&v14, &Time) )
          {
            *SystemTime = Time;
            return 1;
          }
        }
      }
    }
  }
  return 0;
}
