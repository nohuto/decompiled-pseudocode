/*
 * XREFs of IopGetDevicePDO @ 0x14035AF78
 * Callers:
 *     IoAllowExecution @ 0x14035AF38 (IoAllowExecution.c)
 *     IoRevokeHandlesForProcess @ 0x140593A48 (IoRevokeHandlesForProcess.c)
 *     IoRegisterContainerNotification @ 0x140709230 (IoRegisterContainerNotification.c)
 *     IopGetNumaNodeInformation @ 0x14070BA98 (IopGetNumaNodeInformation.c)
 *     IopParseDevice @ 0x14085F1F0 (IopParseDevice.c)
 *     IopGetSetSecurityObject @ 0x14086F330 (IopGetSetSecurityObject.c)
 * Callees:
 *     KeReleaseQueuedSpinLock @ 0x14028B980 (KeReleaseQueuedSpinLock.c)
 *     ObfReferenceObjectWithTag @ 0x14029B2A0 (ObfReferenceObjectWithTag.c)
 *     KeAcquireQueuedSpinLock @ 0x140301270 (KeAcquireQueuedSpinLock.c)
 *     IopGetDeviceAttachmentBase @ 0x14035B0D8 (IopGetDeviceAttachmentBase.c)
 */

_DWORD *__fastcall IopGetDevicePDO(__int64 a1)
{
  KIRQL v2; // di
  _DWORD *DeviceAttachmentBase; // rax
  _DWORD *v4; // rbx

  v2 = KeAcquireQueuedSpinLock(0xAuLL);
  DeviceAttachmentBase = (_DWORD *)IopGetDeviceAttachmentBase(a1);
  v4 = DeviceAttachmentBase;
  if ( (DeviceAttachmentBase[12] & 0x1000) != 0 )
    ObfReferenceObjectWithTag(DeviceAttachmentBase, 0x746C6644u);
  else
    v4 = 0LL;
  KeReleaseQueuedSpinLock(0xAuLL, v2);
  return v4;
}
