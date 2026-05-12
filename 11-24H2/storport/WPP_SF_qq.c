/*
 * XREFs of WPP_SF_qq @ 0x140067E84
 * Callers:
 *     RaUnitScsiIrp @ 0x140002710 (RaUnitScsiIrp.c)
 *     RaDriverScsiIrp @ 0x1400038A0 (RaDriverScsiIrp.c)
 *     RaidUnitSetPowerIrp @ 0x1400063C0 (RaidUnitSetPowerIrp.c)
 *     RaDriverPowerIrp @ 0x140006C80 (RaDriverPowerIrp.c)
 *     RaidAdapterSetDevicePowerIrp @ 0x1400073D4 (RaidAdapterSetDevicePowerIrp.c)
 *     RaidAdapterPowerDownDevice @ 0x1400075B0 (RaidAdapterPowerDownDevice.c)
 *     RaidUnitSetDevicePowerIrp @ 0x1400079E8 (RaidUnitSetDevicePowerIrp.c)
 *     RaidUnitProcessSetDevicePowerIrp @ 0x140007B60 (RaidUnitProcessSetDevicePowerIrp.c)
 *     RaidAdapterQuerySystemPowerIrp @ 0x140008728 (RaidAdapterQuerySystemPowerIrp.c)
 *     RaidAdapterPowerUpDevice @ 0x140008C1C (RaidAdapterPowerUpDevice.c)
 *     RaidAdapterSetSystemPowerIrp @ 0x1400099D8 (RaidAdapterSetSystemPowerIrp.c)
 *     RaDriverIoIrp @ 0x14000A140 (RaDriverIoIrp.c)
 *     RaidAdapterIoIrp @ 0x14000A4C8 (RaidAdapterIoIrp.c)
 *     StorpInitializeWorkItem @ 0x14000E63C (StorpInitializeWorkItem.c)
 *     RaidAdapterPowerUpDeviceCompletion @ 0x14000F240 (RaidAdapterPowerUpDeviceCompletion.c)
 *     RaidAdapterQueryDeviceRelationsIrp @ 0x140016D40 (RaidAdapterQueryDeviceRelationsIrp.c)
 *     RaDriverDeviceControlIrp @ 0x14002B290 (RaDriverDeviceControlIrp.c)
 *     RaidAdapterPowerDownDeviceCompletion @ 0x140033D70 (RaidAdapterPowerDownDeviceCompletion.c)
 *     RaidAdapterQueryDevicePowerCompletionRoutine @ 0x140033EB0 (RaidAdapterQueryDevicePowerCompletionRoutine.c)
 *     RaidAdapterSetDevicePowerCompletionRoutine @ 0x1400342E0 (RaidAdapterSetDevicePowerCompletionRoutine.c)
 *     RaidAdapterSetSystemPowerCompletion @ 0x140034720 (RaidAdapterSetSystemPowerCompletion.c)
 *     RaidAdapterQuerySystemPowerCompletionRoutine @ 0x1400348E0 (RaidAdapterQuerySystemPowerCompletionRoutine.c)
 *     RaidAdapterDevicePowerstopAdapter @ 0x140034B54 (RaidAdapterDevicePowerstopAdapter.c)
 *     RaidSyncAcpiEvalMethod @ 0x1400397F0 (RaidSyncAcpiEvalMethod.c)
 *     RaidUnitQueryPowerIrp @ 0x14003EDCC (RaidUnitQueryPowerIrp.c)
 *     RaDriverAddDevice @ 0x140045960 (RaDriverAddDevice.c)
 *     StorPortExtendedFunction @ 0x140046040 (StorPortExtendedFunction.c)
 *     RaUnitScsiFreeDumpPointersIoctl @ 0x1400525C0 (RaUnitScsiFreeDumpPointersIoctl.c)
 *     StorpFreeWorkItem @ 0x140053CE0 (StorpFreeWorkItem.c)
 *     StorpFreeTimer @ 0x1400542FC (StorpFreeTimer.c)
 *     RaidAdapterStartDevice @ 0x140061808 (RaidAdapterStartDevice.c)
 *     RaDriverFlushIrp @ 0x14006B260 (RaDriverFlushIrp.c)
 *     RaDriverShutdownIrp @ 0x14006B9D0 (RaDriverShutdownIrp.c)
 *     RaidUnitSetDevicePowerCompletionRoutine @ 0x1400790A0 (RaidUnitSetDevicePowerCompletionRoutine.c)
 *     RaUnitGetContiguousPhysicalAddressIoctl @ 0x140093884 (RaUnitGetContiguousPhysicalAddressIoctl.c)
 *     RaUnitRemoveDeviceIrp @ 0x140095E34 (RaUnitRemoveDeviceIrp.c)
 *     RaUnitScsiGetDumpPointersIoctl @ 0x14009634C (RaUnitScsiGetDumpPointersIoctl.c)
 *     ParseTcgMethodData @ 0x1401421FC (ParseTcgMethodData.c)
 *     RaidAdapterDiagnosticIoctl @ 0x14018169C (RaidAdapterDiagnosticIoctl.c)
 *     RaidAdapterGetMiniportDumpInfo @ 0x140182524 (RaidAdapterGetMiniportDumpInfo.c)
 *     RaidAdapterScsiIrp @ 0x140182C78 (RaidAdapterScsiIrp.c)
 *     RaDriverCreateIrp @ 0x1401B4FA0 (RaDriverCreateIrp.c)
 *     RaDriverCloseIrp @ 0x1401B50B0 (RaDriverCloseIrp.c)
 *     RaUnitStorageDataSetManagementIoctl @ 0x1401B63D0 (RaUnitStorageDataSetManagementIoctl.c)
 *     RaDriverSystemControlIrp @ 0x1401B9D10 (RaDriverSystemControlIrp.c)
 *     RaidAdapterFreeMiniportDumpInfo @ 0x1401BA844 (RaidAdapterFreeMiniportDumpInfo.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401436D0 (_guard_dispatch_icall.c)
 */

__int64 WPP_SF_qq(__int64 a1, unsigned __int16 a2, __int64 a3, ...)
{
  __int64 v4; // [rsp+78h] [rbp+20h] BYREF
  va_list va; // [rsp+78h] [rbp+20h]
  va_list va1; // [rsp+80h] [rbp+28h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v4 = va_arg(va1, _QWORD);
  return ((__int64 (__fastcall *)(__int64, __int64, __int64, _QWORD, __int64 *, __int64, char *, __int64, _QWORD))pfnWppTraceMessage)(
           a1,
           43LL,
           a3,
           a2,
           (__int64 *)va,
           8LL,
           va1,
           8LL,
           0LL);
}
