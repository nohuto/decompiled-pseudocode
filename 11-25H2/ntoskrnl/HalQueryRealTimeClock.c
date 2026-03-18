/*
 * XREFs of HalQueryRealTimeClock @ 0x14042D740
 * Callers:
 *     HalpCheckWakeupTimeAndAdjust @ 0x140557B94 (HalpCheckWakeupTimeAndAdjust.c)
 *     ExpRefreshSystemTime @ 0x1407A73C4 (ExpRefreshSystemTime.c)
 *     NtSetSystemTime @ 0x1407A7750 (NtSetSystemTime.c)
 *     ExUpdateSystemTimeFromCmos @ 0x140B581F0 (ExUpdateSystemTimeFromCmos.c)
 *     HaliSetWakeAlarm @ 0x140B5E690 (HaliSetWakeAlarm.c)
 *     GetBootSystemTime @ 0x140BF9A8C (GetBootSystemTime.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x14030F050 (PsGetCurrentServerSiloGlobals.c)
 *     HalpReadCmosTime @ 0x14042DBA4 (HalpReadCmosTime.c)
 *     HalpSetVirtualRtc @ 0x14042DE60 (HalpSetVirtualRtc.c)
 *     RtlpTimeToTimeFields @ 0x14042E040 (RtlpTimeToTimeFields.c)
 *     RtlpTimeFieldsToTime @ 0x14042E5F8 (RtlpTimeFieldsToTime.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 *     HalpQueryVirtualRtc @ 0x1405484B0 (HalpQueryVirtualRtc.c)
 *     HalEfiGetTime @ 0x140549C4C (HalEfiGetTime.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     HalpAcpiRealTimeToUtcTime @ 0x1406F0E08 (HalpAcpiRealTimeToUtcTime.c)
 *     HalpQueryAcpiRealTimeClock @ 0x140A7DD74 (HalpQueryAcpiRealTimeClock.c)
 */

char __fastcall HalQueryRealTimeClock(__int64 a1)
{
  char v2; // si
  __int64 v3; // rcx
  char v4; // bl
  struct _LIST_ENTRY *CurrentServerSiloGlobals; // rax
  __int64 v6; // rdx
  int v8; // ebx
  int AcpiRealTimeClock; // eax
  unsigned __int8 CurrentIrql; // di
  __int64 v11; // rdx
  int Time; // ebx
  _BYTE v13[8]; // [rsp+20h] [rbp-40h] BYREF
  __int64 v14; // [rsp+28h] [rbp-38h] BYREF
  __int128 v15; // [rsp+30h] [rbp-30h] BYREF
  LARGE_INTEGER Timeout[2]; // [rsp+40h] [rbp-20h] BYREF

  v14 = 0LL;
  v13[0] = 0;
  v2 = 0;
  *(_OWORD *)&Timeout[0].LowPart = 0LL;
  v15 = 0LL;
  HalpSetVirtualRtc(0LL);
  if ( (HalpPlatformFlags & 4) != 0 )
  {
    HalpReadCmosTime(&v15);
    v4 = 1;
    if ( (unsigned __int8)RtlpTimeFieldsToTime(&v15, &v14) )
    {
      if ( !ExpRealTimeIsUniversal )
        v14 += (__int64)PsGetCurrentServerSiloGlobals()[76].Blink[27].Blink;
      goto LABEL_5;
    }
  }
  v8 = SystemPowerPhase;
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
    else if ( (int)HalpAcpiRealTimeToUtcTime(Timeout, &v14) >= 0 )
    {
LABEL_15:
      v4 = 1;
LABEL_5:
      if ( MEMORY[0xFFFFF78000000014] > v14 + 864000000000LL )
      {
        v14 = MEMORY[0xFFFFF78000000014];
        _InterlockedOr(&HalpTimerRtcErrorCode, 1u);
      }
      if ( !ExpRealTimeIsUniversal )
      {
        CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
        v14 = v6 - (unsigned __int64)CurrentServerSiloGlobals[76].Blink[27].Blink;
      }
      RtlpTimeToTimeFields(&v14, a1);
      return v4;
    }
  }
  if ( HalFirmwareTypeEfi && v8 && (HalpPlatformFlags & 8) == 0 )
  {
    if ( KeGetCurrentIrql() >= 2u )
    {
      Time = HalEfiGetTime(&v14);
    }
    else
    {
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags )
      {
        LOBYTE(v3) = CurrentIrql;
        KiRaiseIrqlProcessIrqlFlags(v3);
      }
      Time = HalEfiGetTime(&v14);
      if ( KiIrqlFlags )
      {
        LOBYTE(v11) = CurrentIrql;
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v11);
      }
      __writecr8(CurrentIrql);
    }
    if ( Time >= 0 )
      goto LABEL_15;
    if ( Time != -1073741822 )
      _InterlockedOr(&HalpTimerRtcErrorCode, 4u);
  }
  v4 = HalpQueryVirtualRtc(&v14, v13);
  if ( v4 )
  {
    if ( !v13[0] )
      _InterlockedOr(&HalpTimerRtcErrorCode, 8u);
    goto LABEL_5;
  }
  if ( !v2 )
    _InterlockedOr(&HalpTimerRtcErrorCode, 0x10u);
  return v4;
}
