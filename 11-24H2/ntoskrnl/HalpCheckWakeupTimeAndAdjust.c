/*
 * XREFs of HalpCheckWakeupTimeAndAdjust @ 0x14055A494
 * Callers:
 *     HaliAcpiSleep @ 0x1404D9F00 (HaliAcpiSleep.c)
 *     HaliAcpiSleepOld @ 0x140569940 (HaliAcpiSleepOld.c)
 * Callees:
 *     HalpAcpiPmRegisterWrite @ 0x14041C1F0 (HalpAcpiPmRegisterWrite.c)
 *     HalQueryRealTimeClock @ 0x140425810 (HalQueryRealTimeClock.c)
 *     HalpSetWakeAlarm @ 0x140425AC8 (HalpSetWakeAlarm.c)
 *     RtlpTimeToTimeFields @ 0x140426110 (RtlpTimeToTimeFields.c)
 *     RtlpTimeFieldsToTime @ 0x1404266C8 (RtlpTimeFieldsToTime.c)
 */

char HalpCheckWakeupTimeAndAdjust()
{
  char result; // al
  __int64 v1; // rcx
  __int128 v2; // [rsp+30h] [rbp-10h] BYREF
  __int16 v3; // [rsp+50h] [rbp+10h] BYREF
  __int64 v4; // [rsp+58h] [rbp+18h] BYREF
  unsigned __int64 v5; // [rsp+60h] [rbp+20h] BYREF

  v4 = 0LL;
  v5 = 0LL;
  result = HalpPlatformFlags;
  v2 = 0LL;
  if ( (HalpPlatformFlags & 4) != 0 )
  {
    if ( HIBYTE(HalpWakeupState) )
    {
      result = HalQueryRealTimeClock((__int64)&v2);
      if ( result )
      {
        RtlpTimeFieldsToTime((__int64)&v2, &v4);
        RtlpTimeFieldsToTime((__int64)&xmmword_140F8F3E2, (__int64 *)&v5);
        result = v4;
        if ( v5 <= v4 + 300000000 )
        {
          v4 += 300000000LL;
          RtlpTimeToTimeFields(&v4, &v2);
          xmmword_140F8F3E2 = v2;
          HalpSetWakeAlarm(v1, (unsigned __int8 *)&v2);
          result = 0;
          v3 = 1024;
          if ( PmRegisters[0] )
            result = HalpAcpiPmRegisterWrite(0, 0, (unsigned __int8 *)&v3, 2u, 0LL);
          if ( byte_140F8F110 )
            return HalpAcpiPmRegisterWrite(3, 0, (unsigned __int8 *)&v3, 2u, 0LL);
        }
      }
    }
  }
  return result;
}
