/*
 * XREFs of IoAllocateIrp @ 0x1403724A0
 * Callers:
 *     CcSetValidData @ 0x140372324 (CcSetValidData.c)
 *     PopAllocateIrp @ 0x1403775F8 (PopAllocateIrp.c)
 *     SmKmIssueVolumeIo @ 0x14060D9AC (SmKmIssueVolumeIo.c)
 *     IopEjectDevice @ 0x140733A30 (IopEjectDevice.c)
 *     PpIrpAllocateDeviceUsageNotification @ 0x140733F88 (PpIrpAllocateDeviceUsageNotification.c)
 *     PopAcquirePowerLimitInterface @ 0x14074AFC0 (PopAcquirePowerLimitInterface.c)
 *     PopAcquireCoolingInterface @ 0x14074BFA0 (PopAcquireCoolingInterface.c)
 *     PopFxRegisterDeviceWorker @ 0x14074EBF0 (PopFxRegisterDeviceWorker.c)
 *     PopConnectToPolicyDevice @ 0x14075A3DC (PopConnectToPolicyDevice.c)
 *     SmKmIsVolumeIoPossible @ 0x140799CF0 (SmKmIsVolumeIoPossible.c)
 *     IopSynchronousCall @ 0x1408BBC08 (IopSynchronousCall.c)
 *     CmpGetVolumeClusterSize @ 0x140930B1C (CmpGetVolumeClusterSize.c)
 *     CmpFileFlushAndPurge @ 0x140981014 (CmpFileFlushAndPurge.c)
 *     IopFilterResourceRequirementsCall @ 0x14098E480 (IopFilterResourceRequirementsCall.c)
 *     WmipSendWmiIrp @ 0x1409CD990 (WmipSendWmiIrp.c)
 *     WmipSendWmiIrpToTraceDeviceList @ 0x140A16598 (WmipSendWmiIrpToTraceDeviceList.c)
 *     PnpAsynchronousCall @ 0x140A4D884 (PnpAsynchronousCall.c)
 *     WmipGetFilePDO @ 0x140A97574 (WmipGetFilePDO.c)
 *     WmipSetTraceNotify @ 0x140AA6BEC (WmipSetTraceNotify.c)
 * Callees:
 *     IopAllocateIrpPrivate @ 0x140253E10 (IopAllocateIrpPrivate.c)
 *     IopAllocateIrpWithExtension @ 0x14037592C (IopAllocateIrpWithExtension.c)
 *     IovAllocateIrp @ 0x140BA9550 (IovAllocateIrp.c)
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
