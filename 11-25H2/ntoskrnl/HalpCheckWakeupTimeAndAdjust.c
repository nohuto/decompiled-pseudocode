/*
 * XREFs of HalpCheckWakeupTimeAndAdjust @ 0x140557B94
 * Callers:
 *     HaliAcpiSleep @ 0x14049B670 (HaliAcpiSleep.c)
 * Callees:
 *     HalpAcpiPmRegisterWrite @ 0x14041ED40 (HalpAcpiPmRegisterWrite.c)
 *     HalQueryRealTimeClock @ 0x14042D740 (HalQueryRealTimeClock.c)
 *     HalpSetWakeAlarm @ 0x14042D9F8 (HalpSetWakeAlarm.c)
 *     RtlpTimeToTimeFields @ 0x14042E040 (RtlpTimeToTimeFields.c)
 *     RtlpTimeFieldsToTime @ 0x14042E5F8 (RtlpTimeFieldsToTime.c)
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
        RtlpTimeFieldsToTime((__int64)&xmmword_140F8EC42, (__int64 *)&v5);
        result = v4;
        if ( v5 <= v4 + 300000000 )
        {
          v4 += 300000000LL;
          RtlpTimeToTimeFields(&v4, &v2);
          xmmword_140F8EC42 = v2;
          HalpSetWakeAlarm(v1, (unsigned __int8 *)&v2);
          result = 0;
          v3 = 1024;
          if ( PmRegisters[0] )
            result = HalpAcpiPmRegisterWrite(0, 0, (unsigned __int8 *)&v3, 2u, 0LL);
          if ( byte_140F8E970 )
            return HalpAcpiPmRegisterWrite(3, 0, (unsigned __int8 *)&v3, 2u, 0LL);
        }
      }
    }
  }
  return result;
}
