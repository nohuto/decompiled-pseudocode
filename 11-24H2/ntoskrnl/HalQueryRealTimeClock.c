/*
 * XREFs of HalQueryRealTimeClock @ 0x1404196C0
 * Callers:
 *     HalpCheckWakeupTimeAndAdjust @ 0x1405580C4 (HalpCheckWakeupTimeAndAdjust.c)
 *     ExpRefreshSystemTime @ 0x1407B6CB4 (ExpRefreshSystemTime.c)
 *     NtSetSystemTime @ 0x1407B7040 (NtSetSystemTime.c)
 *     ExUpdateSystemTimeFromCmos @ 0x140B6A160 (ExUpdateSystemTimeFromCmos.c)
 *     HaliSetWakeAlarm @ 0x140B6EFE0 (HaliSetWakeAlarm.c)
 *     GetBootSystemTime @ 0x140C0CA8C (GetBootSystemTime.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x140326710 (PsGetCurrentServerSiloGlobals.c)
 *     HalpReadCmosTime @ 0x140419B24 (HalpReadCmosTime.c)
 *     HalpSetVirtualRtc @ 0x140419DE0 (HalpSetVirtualRtc.c)
 *     RtlpTimeToTimeFields @ 0x140419FC0 (RtlpTimeToTimeFields.c)
 *     RtlpTimeFieldsToTime @ 0x14041A578 (RtlpTimeFieldsToTime.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     HalpQueryVirtualRtc @ 0x140548660 (HalpQueryVirtualRtc.c)
 *     HalEfiGetTime @ 0x140549DFC (HalEfiGetTime.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     HalpAcpiRealTimeToUtcTime @ 0x1406FA838 (HalpAcpiRealTimeToUtcTime.c)
 *     HalpQueryAcpiRealTimeClock @ 0x140A7BE54 (HalpQueryAcpiRealTimeClock.c)
 */

char __fastcall HalQueryRealTimeClock(__int64 a1)
{
  char v2; // si
  __int64 v3; // rdx
  __int64 v4; // rcx
  char v5; // bl
  struct _LIST_ENTRY *CurrentServerSiloGlobals; // rax
  __int64 v7; // rdx
  int v9; // ebx
  int AcpiRealTimeClock; // eax
  unsigned __int8 CurrentIrql; // di
  __int64 v12; // rdx
  int Time; // ebx
  _BYTE v14[8]; // [rsp+20h] [rbp-40h] BYREF
  __int64 v15; // [rsp+28h] [rbp-38h] BYREF
  __int128 v16; // [rsp+30h] [rbp-30h] BYREF
  LARGE_INTEGER Timeout[2]; // [rsp+40h] [rbp-20h] BYREF

  v15 = 0LL;
  v14[0] = 0;
  v2 = 0;
  *(_OWORD *)&Timeout[0].LowPart = 0LL;
  v16 = 0LL;
  HalpSetVirtualRtc(0LL);
  if ( (HalpPlatformFlags & 4) != 0 )
  {
    HalpReadCmosTime(&v16);
    v5 = 1;
    if ( (unsigned __int8)RtlpTimeFieldsToTime(&v16, &v15) )
    {
      if ( !ExpRealTimeIsUniversal )
        v15 += (__int64)PsGetCurrentServerSiloGlobals()[76].Blink[27].Blink;
      goto LABEL_5;
    }
  }
  v9 = SystemPowerPhase;
  if ( KeGetCurrentIrql() < 2u && !SystemPowerPhase )
  {
    AcpiRealTimeClock = HalpQueryAcpiRealTimeClock(Timeout);
    if ( AcpiRealTimeClock < 0 )
    {
      if ( AcpiRealTimeClock == -1073740651 )
      {
        v2 = 1;
      }
      else if ( AcpiRealTimeClock != -1073741822 )
      {
        _InterlockedOr(&HalpTimerRtcErrorCode, 2u);
      }
    }
    else if ( (int)HalpAcpiRealTimeToUtcTime(Timeout, &v15) >= 0 )
    {
LABEL_15:
      v5 = 1;
LABEL_5:
      if ( MEMORY[0xFFFFF78000000014] > v15 + 864000000000LL )
      {
        v15 = MEMORY[0xFFFFF78000000014];
        _InterlockedOr(&HalpTimerRtcErrorCode, 1u);
      }
      if ( !ExpRealTimeIsUniversal )
      {
        CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
        v15 = v7 - (unsigned __int64)CurrentServerSiloGlobals[76].Blink[27].Blink;
      }
      RtlpTimeToTimeFields(&v15, a1);
      return v5;
    }
  }
  if ( HalFirmwareTypeEfi && v9 && (HalpPlatformFlags & 8) == 0 )
  {
    if ( KeGetCurrentIrql() >= 2u )
    {
      Time = HalEfiGetTime(&v15);
    }
    else
    {
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags )
      {
        LOBYTE(v3) = 2;
        LOBYTE(v4) = CurrentIrql;
        KiRaiseIrqlProcessIrqlFlags(v4, v3);
      }
      Time = HalEfiGetTime(&v15);
      if ( KiIrqlFlags )
      {
        LOBYTE(v12) = CurrentIrql;
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v12);
      }
      __writecr8(CurrentIrql);
    }
    if ( Time >= 0 )
      goto LABEL_15;
    if ( Time != -1073741822 )
      _InterlockedOr(&HalpTimerRtcErrorCode, 4u);
  }
  v5 = HalpQueryVirtualRtc(&v15, v14);
  if ( v5 )
  {
    if ( !v14[0] )
      _InterlockedOr(&HalpTimerRtcErrorCode, 8u);
    goto LABEL_5;
  }
  if ( !v2 )
    _InterlockedOr(&HalpTimerRtcErrorCode, 0x10u);
  return v5;
}
