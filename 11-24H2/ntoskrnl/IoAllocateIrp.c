/*
 * XREFs of IoAllocateIrp @ 0x14025AD60
 * Callers:
 *     CcSetValidData @ 0x14025ABE4 (CcSetValidData.c)
 *     PopAllocateIrp @ 0x1403A8268 (PopAllocateIrp.c)
 *     SmKmIssueVolumeIo @ 0x14060BF6C (SmKmIssueVolumeIo.c)
 *     IopEjectDevice @ 0x140731964 (IopEjectDevice.c)
 *     PpIrpAllocateDeviceUsageNotification @ 0x140731EBC (PpIrpAllocateDeviceUsageNotification.c)
 *     PopAcquirePowerLimitInterface @ 0x1407492F0 (PopAcquirePowerLimitInterface.c)
 *     PopAcquireCoolingInterface @ 0x14074A2D0 (PopAcquireCoolingInterface.c)
 *     PopFxRegisterDeviceWorker @ 0x14074CF20 (PopFxRegisterDeviceWorker.c)
 *     PopConnectToPolicyDevice @ 0x140758ACC (PopConnectToPolicyDevice.c)
 *     SmKmIsVolumeIoPossible @ 0x140799E00 (SmKmIsVolumeIoPossible.c)
 *     IopSynchronousCall @ 0x1408B9564 (IopSynchronousCall.c)
 *     CmpGetVolumeClusterSize @ 0x140932C5C (CmpGetVolumeClusterSize.c)
 *     CmpFileFlushAndPurge @ 0x140969824 (CmpFileFlushAndPurge.c)
 *     IopFilterResourceRequirementsCall @ 0x1409794B8 (IopFilterResourceRequirementsCall.c)
 *     WmipSendWmiIrp @ 0x1409B2964 (WmipSendWmiIrp.c)
 *     WmipSendWmiIrpToTraceDeviceList @ 0x140A0F778 (WmipSendWmiIrpToTraceDeviceList.c)
 *     PnpAsynchronousCall @ 0x140A44414 (PnpAsynchronousCall.c)
 *     WmipGetFilePDO @ 0x140A93DA4 (WmipGetFilePDO.c)
 *     WmipSetTraceNotify @ 0x140AA1CE8 (WmipSetTraceNotify.c)
 * Callees:
 *     IopAllocateIrpWithExtension @ 0x14025E1EC (IopAllocateIrpWithExtension.c)
 *     IopAllocateIrpPrivate @ 0x140284420 (IopAllocateIrpPrivate.c)
 *     IovAllocateIrp @ 0x140BAB550 (IovAllocateIrp.c)
 */

PIRP __stdcall IoAllocateIrp(CCHAR StackSize, BOOLEAN ChargeQuota)
{
  void *retaddr; // [rsp+28h] [rbp+0h]

  if ( !IopDispatchAllocateIrp )
    return (PIRP)IopAllocateIrpPrivate(0LL, (unsigned __int8)StackSize, ChargeQuota);
  if ( IopDispatchAllocateIrp == 2 || ViVerifyAllDrivers != 1 )
    return (PIRP)IopAllocateIrpWithExtension(StackSize, (unsigned __int8)StackSize, ChargeQuota);
  return (PIRP)IovAllocateIrp(0LL, (unsigned __int8)StackSize, ChargeQuota, retaddr);
}
