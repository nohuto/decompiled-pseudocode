/*
 * XREFs of WPP_SF_d @ 0x140055B28
 * Callers:
 *     RaidUnitProcessSetDevicePowerIrp @ 0x140007B60 (RaidUnitProcessSetDevicePowerIrp.c)
 *     RaidStallDeviceQueue @ 0x1400131FC (RaidStallDeviceQueue.c)
 *     RaidBusEnumeratorVisitUnit @ 0x140017A7C (RaidBusEnumeratorVisitUnit.c)
 *     RaidBusEnumeratorGetLunListFromTarget @ 0x140018EB0 (RaidBusEnumeratorGetLunListFromTarget.c)
 *     RaidLunQueueWaitForQuiescence @ 0x140026A9C (RaidLunQueueWaitForQuiescence.c)
 *     RaidAdapterHack @ 0x140039D6C (RaidAdapterHack.c)
 *     StorPortExtendedFunction @ 0x140046040 (StorPortExtendedFunction.c)
 *     RaidAdapterMapUsermodeNvmeDoorbellAddress @ 0x14005C28C (RaidAdapterMapUsermodeNvmeDoorbellAddress.c)
 *     AddNvmeIceInterfaceToList @ 0x140069104 (AddNvmeIceInterfaceToList.c)
 *     StorPortAdapterPoFxWaitWakeCompletion @ 0x140079EE0 (StorPortAdapterPoFxWaitWakeCompletion.c)
 *     RaUnitScsiGetDumpPointersIoctl @ 0x14009634C (RaUnitScsiGetDumpPointersIoctl.c)
 *     TcglibAssignNamespaceLocking @ 0x14013B9FC (TcglibAssignNamespaceLocking.c)
 *     TcglibConfigureLockingSpEx @ 0x14013BC78 (TcglibConfigureLockingSpEx.c)
 *     TcglibDeassignNamespaceLocking @ 0x14013BE18 (TcglibDeassignNamespaceLocking.c)
 *     TcglibEraseBand @ 0x14013BFF8 (TcglibEraseBand.c)
 *     TcglibGetBandMetadata @ 0x14013C10C (TcglibGetBandMetadata.c)
 *     TcglibRevertLockingSpEx @ 0x14013C434 (TcglibRevertLockingSpEx.c)
 *     TcglibSetAdmin1Pin @ 0x14013C5B4 (TcglibSetAdmin1Pin.c)
 *     TcglibSetBand @ 0x14013C6EC (TcglibSetBand.c)
 *     TcglibSetBandLocationEx @ 0x14013C8E8 (TcglibSetBandLocationEx.c)
 *     TcglibSetBandMetadata @ 0x14013CACC (TcglibSetBandMetadata.c)
 *     TcglibSetBandPin @ 0x14013CC20 (TcglibSetBandPin.c)
 *     ParseAssignNamespace @ 0x14013D4F0 (ParseAssignNamespace.c)
 *     ParseBandMetadata @ 0x14013D640 (ParseBandMetadata.c)
 *     TcglibpGetCapabilities @ 0x14013FB04 (TcglibpGetCapabilities.c)
 *     ParseSyncSessionData @ 0x140140DC0 (ParseSyncSessionData.c)
 *     ParseTPerProperties @ 0x140140F20 (ParseTPerProperties.c)
 *     TcglibpCloseSession @ 0x14014155C (TcglibpCloseSession.c)
 *     ParseNamedData @ 0x1401420F4 (ParseNamedData.c)
 *     ParseTcgPayloadStatus @ 0x1401423AC (ParseTcgPayloadStatus.c)
 *     ParseTcgTransactionStatus @ 0x1401425D8 (ParseTcgTransactionStatus.c)
 *     ParseToken @ 0x1401426CC (ParseToken.c)
 *     ParseTokenData @ 0x1401429AC (ParseTokenData.c)
 *     StorpRegisterShim @ 0x14018CD54 (StorpRegisterShim.c)
 *     StorpUnregisterShim @ 0x14018CE5C (StorpUnregisterShim.c)
 *     RaWmiDispatchIrp @ 0x1401B9E0C (RaWmiDispatchIrp.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401436D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall WPP_SF_d(__int64 a1, unsigned __int16 a2, __int64 a3, int a4)
{
  int v5; // [rsp+68h] [rbp+20h] BYREF

  v5 = a4;
  return ((__int64 (__fastcall *)(__int64, __int64, __int64, _QWORD, int *, __int64, _QWORD))pfnWppTraceMessage)(
           a1,
           43LL,
           a3,
           a2,
           &v5,
           4LL,
           0LL);
}
