/*
 * XREFs of NtSetSystemTime @ 0x1407A7750
 * Callers:
 *     ExpSetTimeZoneInformation @ 0x1407A63A4 (ExpSetTimeZoneInformation.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x14030F050 (PsGetCurrentServerSiloGlobals.c)
 *     ExSystemTimeToLocalTime @ 0x14030F0D0 (ExSystemTimeToLocalTime.c)
 *     ExLocalTimeToSystemTime @ 0x1403104A0 (ExLocalTimeToSystemTime.c)
 *     PsIsCurrentThreadInServerSilo @ 0x140311890 (PsIsCurrentThreadInServerSilo.c)
 *     KeSetSystemTime @ 0x140417A68 (KeSetSystemTime.c)
 *     HalSetRealTimeClock @ 0x14042D240 (HalSetRealTimeClock.c)
 *     HalQueryRealTimeClock @ 0x14042D740 (HalQueryRealTimeClock.c)
 *     RtlTimeToTimeFields @ 0x14042E020 (RtlTimeToTimeFields.c)
 *     RtlTimeFieldsToTime @ 0x14042E5E0 (RtlTimeFieldsToTime.c)
 *     PoNotifySystemTimeSet @ 0x1404CA36C (PoNotifySystemTimeSet.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     SeAuditSystemTimeChange @ 0x140781C1C (SeAuditSystemTimeChange.c)
 *     SeSinglePrivilegeCheck @ 0x140858330 (SeSinglePrivilegeCheck.c)
 *     ExRaiseDatatypeMisalignment @ 0x14085AF60 (ExRaiseDatatypeMisalignment.c)
 *     ExpRefreshTimeZoneInformation @ 0x140993940 (ExpRefreshTimeZoneInformation.c)
 *     ExAcquireTimeRefreshLockExclusive @ 0x1409CCD20 (ExAcquireTimeRefreshLockExclusive.c)
 *     ExReleaseTimeRefreshLockExclusive @ 0x1409CCD84 (ExReleaseTimeRefreshLockExclusive.c)
 *     RtlCapabilityCheck @ 0x140A09AE0 (RtlCapabilityCheck.c)
 *     RtlIsMultiSessionSku @ 0x140A09E70 (RtlIsMultiSessionSku.c)
 *     ExpSetSystemTime @ 0x140B5DCB0 (ExpSetSystemTime.c)
 */

NTSTATUS __cdecl NtSetSystemTime(PLARGE_INTEGER SystemTime, PLARGE_INTEGER PreviousTime)
{
  struct _LIST_ENTRY *CurrentServerSiloGlobals; // rsi
  KPROCESSOR_MODE PreviousMode; // si
  __int64 v7; // rcx
  LONGLONG QuadPart; // rax
  int v9; // ecx
  NTSTATUS v10; // ebx
  unsigned __int8 v11; // di
  LARGE_INTEGER v12; // rax
  int v13; // [rsp+28h] [rbp-70h]
  BOOLEAN HasCapability[8]; // [rsp+40h] [rbp-58h] BYREF
  LARGE_INTEGER SystemTimea; // [rsp+48h] [rbp-50h] BYREF
  LARGE_INTEGER v16; // [rsp+50h] [rbp-48h] BYREF
  LARGE_INTEGER Time; // [rsp+58h] [rbp-40h] BYREF
  UNICODE_STRING CapabilityName; // [rsp+60h] [rbp-38h] BYREF
  _TIME_FIELDS TimeFields; // [rsp+70h] [rbp-28h] BYREF

  SystemTimea.QuadPart = 0LL;
  v16.QuadPart = 0LL;
  Time.QuadPart = 0LL;
  TimeFields = 0LL;
  HasCapability[0] = 0;
  *(_QWORD *)&CapabilityName.Length = 2228256LL;
  CapabilityName.Buffer = L"systemManagement";
  CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
  if ( SystemTime )
  {
    PreviousMode = KeGetCurrentThread()->PreviousMode;
    if ( !SeSinglePrivilegeCheck(SeSystemtimePrivilege, PreviousMode)
      && (RtlIsMultiSessionSku() || RtlCapabilityCheck(0LL, &CapabilityName, HasCapability) < 0 || !HasCapability[0])
      || PsIsCurrentThreadInServerSilo() )
    {
      return -1073741727;
    }
    if ( !PreviousMode )
    {
      QuadPart = SystemTime->QuadPart;
      v16 = *SystemTime;
      goto LABEL_18;
    }
    if ( ((unsigned __int8)SystemTime & 3) == 0 )
    {
      v7 = 0x7FFFFFFF0000LL;
      if ( !PreviousTime )
      {
LABEL_15:
        QuadPart = SystemTime->QuadPart;
        v16 = *SystemTime;
LABEL_18:
        if ( HIDWORD(QuadPart) > 0x20000000 )
          return -1073741811;
        ExAcquireTimeRefreshLockExclusive();
        LOBYTE(v9) = 1;
        ExpSetSystemTime(v9, 0, 1, v16.LowPart, (__int64)&SystemTimea);
        SeAuditSystemTimeChange(SystemTimea.QuadPart, v16.QuadPart);
        ExReleaseTimeRefreshLockExclusive();
        if ( PreviousTime )
          *PreviousTime = SystemTimea;
        return 0;
      }
      if ( ((unsigned __int8)PreviousTime & 3) == 0 )
      {
        if ( (unsigned __int64)PreviousTime < 0x7FFFFFFF0000LL )
          v7 = (__int64)PreviousTime;
        *(_BYTE *)v7 = *(_BYTE *)v7;
        *(_BYTE *)(v7 + 7) = *(_BYTE *)(v7 + 7);
        goto LABEL_15;
      }
    }
    ExRaiseDatatypeMisalignment();
  }
  if ( PsIsCurrentThreadInServerSilo() )
  {
    ExAcquireTimeRefreshLockExclusive();
    ExpRefreshTimeZoneInformation(0LL);
    ExReleaseTimeRefreshLockExclusive();
    return 0;
  }
  v10 = -1073741811;
  ExAcquireTimeRefreshLockExclusive();
  v11 = ExpSystemIsInCmosMode;
  if ( HalQueryRealTimeClock((__int64)&TimeFields)
    && RtlTimeFieldsToTime(&TimeFields, &Time)
    && (unsigned __int8)ExpRefreshTimeZoneInformation(0LL) )
  {
    v12.QuadPart = MEMORY[0xFFFFF78000000014];
    SystemTimea.QuadPart = MEMORY[0xFFFFF78000000014];
    if ( !ExpRealTimeIsUniversal )
    {
      if ( v11 )
      {
        ExLocalTimeToSystemTime(&Time, &v16);
        KeSetSystemTime((__int64)&v16, (__int64)&SystemTimea, 0);
        goto LABEL_30;
      }
      ExSystemTimeToLocalTime(&SystemTimea, &Time);
      RtlTimeToTimeFields(&Time, &TimeFields);
      HalSetRealTimeClock((__int64)&TimeFields);
      v12 = SystemTimea;
    }
    v16 = v12;
LABEL_30:
    PoNotifySystemTimeSet(
      (__int64 *)&v16,
      (__int64 *)&SystemTimea,
      3,
      (int)&Time,
      HIDWORD(CurrentServerSiloGlobals[76].Blink[27].Flink),
      v13,
      v11);
    v10 = 0;
  }
  ExReleaseTimeRefreshLockExclusive();
  return v10;
}
