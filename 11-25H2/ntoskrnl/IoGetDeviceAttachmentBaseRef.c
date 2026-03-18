/*
 * XREFs of IoGetDeviceAttachmentBaseRef @ 0x14035AFE0
 * Callers:
 *     PipSetDevNodeStateFlags @ 0x1407185F8 (PipSetDevNodeStateFlags.c)
 *     PipSendQueryRemoveIrpAndCheckOpenHandles @ 0x14072DF08 (PipSendQueryRemoveIrpAndCheckOpenHandles.c)
 *     PopRegisterTargetDeviceProtection @ 0x14073FB74 (PopRegisterTargetDeviceProtection.c)
 *     PopRegisterCoolingExtensionProtection @ 0x140740404 (PopRegisterCoolingExtensionProtection.c)
 *     FsRtlAcquireFileExclusiveCommon @ 0x14093DA50 (FsRtlAcquireFileExclusiveCommon.c)
 *     FsRtlReleaseFile @ 0x14093E880 (FsRtlReleaseFile.c)
 *     FsRtlAcquireFileForCcFlushEx @ 0x1409CEE20 (FsRtlAcquireFileForCcFlushEx.c)
 *     FsRtlReleaseFileForCcFlush @ 0x1409CF0D0 (FsRtlReleaseFileForCcFlush.c)
 *     IoWMIDeviceObjectToInstanceName @ 0x140A6E140 (IoWMIDeviceObjectToInstanceName.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14028A810 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     ObfReferenceObjectWithTag @ 0x14029B2A0 (ObfReferenceObjectWithTag.c)
 *     KeAcquireQueuedSpinLock @ 0x140301270 (KeAcquireQueuedSpinLock.c)
 *     IopGetDeviceAttachmentBase @ 0x14035B0D8 (IopGetDeviceAttachmentBase.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 */

PDEVICE_OBJECT __stdcall IoGetDeviceAttachmentBaseRef(PDEVICE_OBJECT DeviceObject)
{
  unsigned __int64 v2; // rdi
  struct _DEVICE_OBJECT *DeviceAttachmentBase; // rbx
  __int64 v4; // rdx

  v2 = KeAcquireQueuedSpinLock(0xAuLL);
  DeviceAttachmentBase = (struct _DEVICE_OBJECT *)IopGetDeviceAttachmentBase(DeviceObject);
  ObfReferenceObjectWithTag(DeviceAttachmentBase, 0x746C6644u);
  KeReleaseInStackQueuedSpinLockFromDpcLevel((PKLOCK_QUEUE_HANDLE)((char *)KeGetPcr()->NtTib.ArbitraryUserPointer + 160));
  if ( KiIrqlFlags )
  {
    LOBYTE(v4) = v2;
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v4);
  }
  __writecr8(v2);
  return DeviceAttachmentBase;
}
