/*
 * XREFs of ExUpdateSystemTimeFromCmos @ 0x140B581F0
 * Callers:
 *     ExpTimeRefreshWork @ 0x140B51190 (ExpTimeRefreshWork.c)
 *     PopTransitionSystemPowerStateEx @ 0x140B569AC (PopTransitionSystemPowerStateEx.c)
 *     KdpTimeSlipWork @ 0x140B68650 (KdpTimeSlipWork.c)
 * Callees:
 *     ExLocalTimeToSystemTime @ 0x1403104A0 (ExLocalTimeToSystemTime.c)
 *     HalQueryRealTimeClock @ 0x14042D740 (HalQueryRealTimeClock.c)
 *     RtlTimeFieldsToTime @ 0x14042E5E0 (RtlTimeFieldsToTime.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     ExpSetSystemTime @ 0x140B5DCB0 (ExpSetSystemTime.c)
 */

char __fastcall ExUpdateSystemTimeFromCmos(char a1, unsigned int a2)
{
  unsigned __int64 v3; // rbx
  unsigned __int64 v4; // rax
  int v5; // edx
  LARGE_INTEGER Time; // [rsp+30h] [rbp-30h] BYREF
  LARGE_INTEGER SystemTime; // [rsp+38h] [rbp-28h] BYREF
  __int64 v9; // [rsp+40h] [rbp-20h] BYREF
  _TIME_FIELDS TimeFields; // [rsp+48h] [rbp-18h] BYREF

  SystemTime.QuadPart = 0LL;
  Time.QuadPart = 0LL;
  TimeFields = 0LL;
  if ( !a2 )
    a2 = ExpMaxTimeSeperationBeforeCorrect;
  v3 = 10000000LL * a2;
  LOBYTE(v4) = HalQueryRealTimeClock((__int64)&TimeFields);
  if ( (_BYTE)v4 )
  {
    LOBYTE(v4) = RtlTimeFieldsToTime(&TimeFields, &Time);
    if ( (_BYTE)v4 )
    {
      if ( ExpRealTimeIsUniversal )
        SystemTime = Time;
      else
        ExLocalTimeToSystemTime(&Time, &SystemTime);
      v9 = MEMORY[0xFFFFF78000000014];
      if ( SystemTime.QuadPart <= MEMORY[0xFFFFF78000000014] )
        v4 = MEMORY[0xFFFFF78000000014] - SystemTime.QuadPart;
      else
        v4 = SystemTime.QuadPart - MEMORY[0xFFFFF78000000014];
      if ( v4 > v3 )
      {
        LOBYTE(v5) = a1;
        LOBYTE(v4) = ExpSetSystemTime(0, v5, 2, SystemTime.LowPart, (__int64)&v9);
      }
    }
  }
  return v4;
}
