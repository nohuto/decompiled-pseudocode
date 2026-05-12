/*
 * XREFs of WPP_SF_DDD @ 0x140067D0C
 * Callers:
 *     RaidAdapterPauseUnit @ 0x14000125C (RaidAdapterPauseUnit.c)
 *     RaidAdapterResumeUnit @ 0x14000189C (RaidAdapterResumeUnit.c)
 *     RaidPnPPassToMiniPort @ 0x140010ED8 (RaidPnPPassToMiniPort.c)
 *     StorPortPauseDevice @ 0x140014A50 (StorPortPauseDevice.c)
 *     StorPortResumeDevice @ 0x140014F00 (StorPortResumeDevice.c)
 *     RaidBusEnumeratorVisitUnit @ 0x140017A7C (RaidBusEnumeratorVisitUnit.c)
 *     RaidUnitRequestTimeout @ 0x14002F338 (RaidUnitRequestTimeout.c)
 *     StorPortExtendedFunction @ 0x140046040 (StorPortExtendedFunction.c)
 *     RaidAdapterDeviceBusy @ 0x140059C04 (RaidAdapterDeviceBusy.c)
 *     RaidAdapterDeviceReady @ 0x140059CF8 (RaidAdapterDeviceReady.c)
 *     StorPortCompleteRequest @ 0x140073760 (StorPortCompleteRequest.c)
 *     StorPortDeviceReady @ 0x140073920 (StorPortDeviceReady.c)
 *     ParseLockingObjectInfo @ 0x14013D7F0 (ParseLockingObjectInfo.c)
 *     ParseGetTableColumnData @ 0x14013EA80 (ParseGetTableColumnData.c)
 *     RaWmiPassToMiniPort @ 0x1401B73F4 (RaWmiPassToMiniPort.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401436D0 (_guard_dispatch_icall.c)
 */

__int64 WPP_SF_DDD(__int64 a1, unsigned __int16 a2, __int64 a3, int a4, ...)
{
  int v5; // [rsp+88h] [rbp+20h] BYREF
  __int64 v6; // [rsp+90h] [rbp+28h] BYREF
  va_list va; // [rsp+90h] [rbp+28h]
  va_list va1; // [rsp+98h] [rbp+30h] BYREF

  va_start(va1, a4);
  va_start(va, a4);
  v6 = va_arg(va1, _QWORD);
  v5 = a4;
  return ((__int64 (__fastcall *)(__int64, __int64, __int64, _QWORD, int *, __int64, __int64 *, __int64, char *, __int64, _QWORD))pfnWppTraceMessage)(
           a1,
           43LL,
           a3,
           a2,
           &v5,
           4LL,
           (__int64 *)va,
           4LL,
           va1,
           4LL,
           0LL);
}
