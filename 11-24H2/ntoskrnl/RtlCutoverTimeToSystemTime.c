/*
 * XREFs of RtlCutoverTimeToSystemTime @ 0x14077DA80
 * Callers:
 *     ExInitializeUtcTimeZoneBias @ 0x1407B5E1C (ExInitializeUtcTimeZoneBias.c)
 *     ExpRefreshTimeZoneInformation @ 0x1409DC59C (ExpRefreshTimeZoneInformation.c)
 * Callees:
 *     RtlTimeToTimeFields @ 0x1404260F0 (RtlTimeToTimeFields.c)
 *     RtlTimeFieldsToTime @ 0x1404266B0 (RtlTimeFieldsToTime.c)
 */

char __fastcall RtlCutoverTimeToSystemTime(PTIME_FIELDS TimeFields, PLARGE_INTEGER Time, PLARGE_INTEGER a3)
{
  __int16 Day; // r14
  __int16 Weekday; // r15
  __int16 Month; // cx
  __int16 v9; // bx
  __int16 Milliseconds; // ax
  __int16 v11; // r15
  __int16 v12; // si
  TIME_FIELDS v13; // [rsp+20h] [rbp-30h] BYREF
  TIME_FIELDS v14; // [rsp+30h] [rbp-20h] BYREF
  TIME_FIELDS TimeFieldsa; // [rsp+40h] [rbp-10h] BYREF
  LARGE_INTEGER Timea; // [rsp+80h] [rbp+30h] BYREF

  TimeFieldsa = 0LL;
  RtlTimeToTimeFields(a3, &TimeFieldsa);
  if ( TimeFields->Year )
  {
    if ( RtlTimeFieldsToTime(TimeFields, Time) )
      return 1;
  }
  else
  {
    Day = TimeFields->Day;
    v13.Day = 0;
    Timea.QuadPart = 0LL;
    v14 = 0LL;
    if ( Day <= 5 )
    {
      if ( Day )
      {
        Weekday = TimeFields->Weekday;
        Month = TimeFields->Month;
        v13.Year = TimeFieldsa.Year;
        v13.Hour = TimeFields->Hour;
        v9 = 1;
        v13.Minute = TimeFields->Minute;
        v13.Second = TimeFields->Second;
        Milliseconds = TimeFields->Milliseconds;
        v13.Month = Month;
        v13.Milliseconds = Milliseconds;
        v13.Day = 1;
        v13.Weekday = 0;
        if ( RtlTimeFieldsToTime(&v13, &Timea) )
        {
          RtlTimeToTimeFields(&Timea, &v14);
          if ( v14.Weekday <= Weekday )
          {
            if ( v14.Weekday < Weekday )
              v9 = Weekday - v14.Weekday + 1;
          }
          else
          {
            v9 = Weekday - v14.Weekday + 8;
          }
          v11 = v9;
          v12 = 1;
          if ( Day > 1 )
          {
            do
            {
              v9 += 7;
              v13.Day = v9;
              if ( !RtlTimeFieldsToTime(&v13, &Timea) )
                break;
              RtlTimeToTimeFields(&Timea, &v14);
              v11 = v14.Day;
              ++v12;
            }
            while ( v12 < Day );
          }
          v13.Day = v11;
          if ( RtlTimeFieldsToTime(&v13, &Timea) )
          {
            *Time = Timea;
            return 1;
          }
        }
      }
    }
  }
  return 0;
}
