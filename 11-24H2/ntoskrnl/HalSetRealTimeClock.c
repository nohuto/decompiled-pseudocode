/*
 * XREFs of HalSetRealTimeClock @ 0x1404191C0
 * Callers:
 *     ExpRefreshSystemTime @ 0x1407B6CB4 (ExpRefreshSystemTime.c)
 *     NtSetSystemTime @ 0x1407B7040 (NtSetSystemTime.c)
 *     ExpSetSystemTime @ 0x140B6E630 (ExpSetSystemTime.c)
 *     GetBootSystemTime @ 0x140C0CA8C (GetBootSystemTime.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x140326710 (PsGetCurrentServerSiloGlobals.c)
 *     KeQueryPerformanceCounter @ 0x14036DEF0 (KeQueryPerformanceCounter.c)
 *     HalpWriteCmosTime @ 0x140419448 (HalpWriteCmosTime.c)
 *     RtlpTimeToTimeFields @ 0x140419FC0 (RtlpTimeToTimeFields.c)
 *     RtlpTimeFieldsToTime @ 0x14041A578 (RtlpTimeFieldsToTime.c)
 *     HalEfiSetTime @ 0x14054A014 (HalEfiSetTime.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     HalpSetAcpiRealTimeClock @ 0x1406F9E9C (HalpSetAcpiRealTimeClock.c)
 *     HalpUtcTimeToAcpiRealTime @ 0x140A7BD0C (HalpUtcTimeToAcpiRealTime.c)
 */

char __fastcall HalSetRealTimeClock(__int64 a1)
{
  char result; // al
  char *QuadPart; // rbx
  char v4; // di
  int v5; // esi
  int v6; // ecx
  int v7; // eax
  LARGE_INTEGER PerformanceCounter; // rax
  LARGE_INTEGER SystemTime; // [rsp+20h] [rbp-40h] BYREF
  char *v10; // [rsp+28h] [rbp-38h] BYREF
  __int128 v11; // [rsp+30h] [rbp-30h] BYREF
  __int128 InputBuffer; // [rsp+40h] [rbp-20h] BYREF

  SystemTime.QuadPart = 0LL;
  InputBuffer = 0LL;
  result = RtlpTimeFieldsToTime(a1, &SystemTime);
  if ( result )
  {
    if ( ExpRealTimeIsUniversal )
    {
      QuadPart = (char *)SystemTime.QuadPart;
    }
    else
    {
      QuadPart = (char *)PsGetCurrentServerSiloGlobals()[76].Blink[27].Blink + SystemTime.QuadPart;
      SystemTime.QuadPart = (LONGLONG)QuadPart;
    }
    if ( (HalpPlatformFlags & 4) != 0 )
    {
      HalpWriteCmosTime(a1);
      v4 = 1;
    }
    else
    {
      v4 = 0;
    }
    v5 = SystemPowerPhase;
    v6 = -1073741823;
    if ( KeGetCurrentIrql() >= 2u
      || SystemPowerPhase
      || (v6 = HalpUtcTimeToAcpiRealTime(&SystemTime, (PLARGE_INTEGER)&InputBuffer), v6 < 0)
      || (v6 = HalpSetAcpiRealTimeClock(&InputBuffer), v6 < 0) )
    {
      if ( v4 != 1 && HalFirmwareTypeEfi && v5 && (HalpPlatformFlags & 8) == 0 )
      {
        v7 = HalEfiSetTime(&SystemTime);
        QuadPart = (char *)SystemTime.QuadPart;
        v6 = v7;
      }
    }
    if ( v6 >= 0 )
      v4 = 1;
    v11 = 0LL;
    if ( SystemPowerPhase != 2 )
    {
      v10 = QuadPart;
      RtlpTimeToTimeFields(&v10, &v11);
      if ( (__int16)v11 > 1601 )
      {
        PerformanceCounter = KeQueryPerformanceCounter(0LL);
        v4 = 1;
        dword_140FC1660 = PerformanceCounter.HighPart;
        qword_140FC1658 = PerformanceCounter.QuadPart;
        dword_140FC1654 = SystemTime.HighPart;
        qword_140FC164C = (__int64)QuadPart;
        dword_140FC1648 = PerformanceCounter.HighPart;
        VrtcTime = PerformanceCounter.QuadPart;
        HalpVrtcTimeStale = 0;
      }
    }
    return v4;
  }
  return result;
}
