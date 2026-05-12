/*
 * XREFs of WPP_SF_q @ 0x140055B6C
 * Callers:
 *     RaidpBuildAdapterBusRelations @ 0x1400173D8 (RaidpBuildAdapterBusRelations.c)
 *     RaidBusEnumeratorGetLunListFromTarget @ 0x140018EB0 (RaidBusEnumeratorGetLunListFromTarget.c)
 *     RaidUnitPendingDpcRoutine @ 0x14002ED00 (RaidUnitPendingDpcRoutine.c)
 *     RaidUnitRequestTimeout @ 0x14002F338 (RaidUnitRequestTimeout.c)
 *     RaidQueryAcpiDsdSynchronous @ 0x140038588 (RaidQueryAcpiDsdSynchronous.c)
 *     RaDriverUnload @ 0x14003F3B0 (RaDriverUnload.c)
 *     StorPortExtendedFunction @ 0x140046040 (StorPortExtendedFunction.c)
 *     StorpRequestTimer @ 0x14004CEE0 (StorpRequestTimer.c)
 *     StorpFreeTimer @ 0x1400542FC (StorpFreeTimer.c)
 *     StorPortReady @ 0x1400561E0 (StorPortReady.c)
 *     AddNvmeIceInterfaceToList @ 0x140069104 (AddNvmeIceInterfaceToList.c)
 *     RaidAcquireNvmeIceKeyResources @ 0x1400697EC (RaidAcquireNvmeIceKeyResources.c)
 *     RaUnitAsyncNotificationWorkItemRoutine @ 0x140091580 (RaUnitAsyncNotificationWorkItemRoutine.c)
 *     RaUnitAttributeManagement @ 0x140091724 (RaUnitAttributeManagement.c)
 *     RaUnitClearUnresponsiveAttribute @ 0x140092624 (RaUnitClearUnresponsiveAttribute.c)
 *     RaUnitGetQOSIoctl @ 0x140093D3C (RaUnitGetQOSIoctl.c)
 *     RaUnitSetQOSIoctl @ 0x1400976F0 (RaUnitSetQOSIoctl.c)
 *     RaUnitSetUnresponsiveAttribute @ 0x140098540 (RaUnitSetUnresponsiveAttribute.c)
 *     RaUnitUnresponsiveAttributeMgmt @ 0x14009D7A0 (RaUnitUnresponsiveAttributeMgmt.c)
 *     RaidUnitGetDeviceParameters @ 0x1401BCAD4 (RaidUnitGetDeviceParameters.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401436D0 (_guard_dispatch_icall.c)
 */

__int64 WPP_SF_q(__int64 a1, unsigned __int16 a2, __int64 a3, ...)
{
  va_list va; // [rsp+68h] [rbp+20h] BYREF

  va_start(va, a3);
  return ((__int64 (__fastcall *)(__int64, __int64, __int64, _QWORD, __int64 *, __int64, _QWORD))pfnWppTraceMessage)(
           a1,
           43LL,
           a3,
           a2,
           (__int64 *)va,
           8LL,
           0LL);
}
