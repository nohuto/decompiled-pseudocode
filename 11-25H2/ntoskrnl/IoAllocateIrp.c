/*
 * XREFs of IoAllocateIrp @ 0x14035B6A0
 * Callers:
 *     PopAllocateIrp @ 0x140359E20 (PopAllocateIrp.c)
 *     CcSetValidData @ 0x14035B530 (CcSetValidData.c)
 *     SmKmIssueVolumeIo @ 0x140601980 (SmKmIssueVolumeIo.c)
 *     IopEjectDevice @ 0x140727798 (IopEjectDevice.c)
 *     PpIrpAllocateDeviceUsageNotification @ 0x140727CF0 (PpIrpAllocateDeviceUsageNotification.c)
 *     PopAcquirePowerLimitInterface @ 0x14073EEF0 (PopAcquirePowerLimitInterface.c)
 *     PopAcquireCoolingInterface @ 0x14073FED0 (PopAcquireCoolingInterface.c)
 *     PopFxRegisterDeviceWorker @ 0x140742B20 (PopFxRegisterDeviceWorker.c)
 *     PopConnectToPolicyDevice @ 0x14074DE04 (PopConnectToPolicyDevice.c)
 *     SmKmIsVolumeIoPossible @ 0x14078A928 (SmKmIsVolumeIoPossible.c)
 *     IopFilterResourceRequirementsCall @ 0x14083168C (IopFilterResourceRequirementsCall.c)
 *     IopSynchronousCall @ 0x140834D44 (IopSynchronousCall.c)
 *     CmpGetVolumeClusterSize @ 0x1409105D0 (CmpGetVolumeClusterSize.c)
 *     WmipSendWmiIrp @ 0x1409B5630 (WmipSendWmiIrp.c)
 *     CmpFileFlushAndPurge @ 0x1409F83E8 (CmpFileFlushAndPurge.c)
 *     WmipSendWmiIrpToTraceDeviceList @ 0x140A121BC (WmipSendWmiIrpToTraceDeviceList.c)
 *     PnpAsynchronousCall @ 0x140A4B038 (PnpAsynchronousCall.c)
 *     WmipGetFilePDO @ 0x140A93244 (WmipGetFilePDO.c)
 *     WmipSetTraceNotify @ 0x140AA1848 (WmipSetTraceNotify.c)
 * Callees:
 *     IopAllocateIrpPrivate @ 0x140253800 (IopAllocateIrpPrivate.c)
 *     IopAllocateIrpWithExtension @ 0x14048ADBC (IopAllocateIrpWithExtension.c)
 *     IovAllocateIrp @ 0x140B99570 (IovAllocateIrp.c)
 */

PIRP __stdcall IoAllocateIrp(CCHAR StackSize, BOOLEAN ChargeQuota)
{
  void *retaddr; // [rsp+28h] [rbp+0h]

  if ( !IopDispatchAllocateIrp )
    return (PIRP)IopAllocateIrpPrivate(0LL, StackSize, ChargeQuota);
  if ( IopDispatchAllocateIrp == 2 || ViVerifyAllDrivers != 1 )
    return (PIRP)IopAllocateIrpWithExtension(StackSize, (unsigned __int8)StackSize, ChargeQuota);
  return (PIRP)IovAllocateIrp(0LL, (unsigned __int8)StackSize, ChargeQuota, retaddr);
}
