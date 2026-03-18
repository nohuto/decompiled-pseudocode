/*
 * XREFs of AMLIGetParent @ 0x1400160B8
 * Callers:
 *     PciConfigSpaceHandlerWorker @ 0x140014A50 (PciConfigSpaceHandlerWorker.c)
 *     GetPciAddressWorker @ 0x1400150D0 (GetPciAddressWorker.c)
 *     AMLIIterateParentNext @ 0x140016084 (AMLIIterateParentNext.c)
 *     GetOpRegionScope @ 0x14001612C (GetOpRegionScope.c)
 *     OSNotifyCreateOperationRegion @ 0x14001648C (OSNotifyCreateOperationRegion.c)
 *     OSNotifyCreateDevice @ 0x1400165E0 (OSNotifyCreateDevice.c)
 *     IsPciBusAsyncWorker @ 0x14001EA60 (IsPciBusAsyncWorker.c)
 *     ACPIDevicePowerProcessPhase2SystemSubPhase1 @ 0x140021FA0 (ACPIDevicePowerProcessPhase2SystemSubPhase1.c)
 *     InternalRawAccessOpRegionHandler @ 0x140023860 (InternalRawAccessOpRegionHandler.c)
 *     CmosConfigSpaceHandler @ 0x140028EA0 (CmosConfigSpaceHandler.c)
 *     ACPIRootIrpQueryPower @ 0x140029A30 (ACPIRootIrpQueryPower.c)
 *     OSNotifyDeviceCheck @ 0x140029BD4 (OSNotifyDeviceCheck.c)
 *     ACPIDevicePowerProcessPhase5SystemSubPhase4 @ 0x140031560 (ACPIDevicePowerProcessPhase5SystemSubPhase4.c)
 *     ACPIDevicePowerProcessPhase5SystemSubPhase3 @ 0x140034590 (ACPIDevicePowerProcessPhase5SystemSubPhase3.c)
 *     IsPciDeviceWorker @ 0x14004C840 (IsPciDeviceWorker.c)
 *     AcpiSetupNativeMethodContext @ 0x140054B44 (AcpiSetupNativeMethodContext.c)
 *     OSNotifyCreateProcessor @ 0x140063D1C (OSNotifyCreateProcessor.c)
 *     AcpiArblibAllocateArbiterInstance @ 0x14009ABC0 (AcpiArblibAllocateArbiterInstance.c)
 *     ACPIRootInitialize @ 0x1400A67CC (ACPIRootInitialize.c)
 * Callees:
 *     AMLIGetParentNoLock @ 0x140016104 (AMLIGetParentNoLock.c)
 */

__int64 __fastcall AMLIGetParent(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rbx
  KIRQL v4; // dl

  LOBYTE(v2) = ExAcquireSpinLockShared(&ACPINamespaceLock);
  v3 = AMLIGetParentNoLock(a1, v2);
  ExReleaseSpinLockShared(&ACPINamespaceLock, v4);
  return v3;
}
