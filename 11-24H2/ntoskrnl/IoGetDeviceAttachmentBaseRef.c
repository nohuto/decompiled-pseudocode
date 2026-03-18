/*
 * XREFs of IoGetDeviceAttachmentBaseRef @ 0x1402D4AC0
 * Callers:
 *     PipSetDevNodeStateFlags @ 0x1407246F8 (PipSetDevNodeStateFlags.c)
 *     PipSendQueryRemoveIrpAndCheckOpenHandles @ 0x14073A198 (PipSendQueryRemoveIrpAndCheckOpenHandles.c)
 *     PopRegisterTargetDeviceProtection @ 0x14074BC44 (PopRegisterTargetDeviceProtection.c)
 *     PopRegisterCoolingExtensionProtection @ 0x14074C4D4 (PopRegisterCoolingExtensionProtection.c)
 *     FsRtlAcquireFileExclusiveCommon @ 0x140942350 (FsRtlAcquireFileExclusiveCommon.c)
 *     FsRtlReleaseFile @ 0x140943180 (FsRtlReleaseFile.c)
 *     FsRtlAcquireFileForCcFlushEx @ 0x1409D1DE0 (FsRtlAcquireFileForCcFlushEx.c)
 *     FsRtlReleaseFileForCcFlush @ 0x1409D2090 (FsRtlReleaseFileForCcFlush.c)
 *     IoWMIDeviceObjectToInstanceName @ 0x140A70350 (IoWMIDeviceObjectToInstanceName.c)
 * Callees:
 *     IopGetDeviceAttachmentBase @ 0x1402D4B38 (IopGetDeviceAttachmentBase.c)
 *     KeAcquireQueuedSpinLock @ 0x1402D6AF0 (KeAcquireQueuedSpinLock.c)
 *     KxReleaseQueuedSpinLock @ 0x140321BB0 (KxReleaseQueuedSpinLock.c)
 *     ObfReferenceObjectWithTag @ 0x1403403E0 (ObfReferenceObjectWithTag.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 */

PDEVICE_OBJECT __stdcall IoGetDeviceAttachmentBaseRef(PDEVICE_OBJECT DeviceObject)
{
  unsigned __int64 v2; // rdi
  struct _DEVICE_OBJECT *DeviceAttachmentBase; // rbx
  __int64 v4; // rdx

  v2 = KeAcquireQueuedSpinLock(0xAuLL);
  DeviceAttachmentBase = (struct _DEVICE_OBJECT *)IopGetDeviceAttachmentBase(DeviceObject);
  ObfReferenceObjectWithTag(DeviceAttachmentBase, 0x746C6644u);
  KxReleaseQueuedSpinLock((char *)KeGetPcr()->NtTib.ArbitraryUserPointer + 160);
  if ( KiIrqlFlags )
  {
    LOBYTE(v4) = v2;
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v4);
  }
  __writecr8(v2);
  return DeviceAttachmentBase;
}
