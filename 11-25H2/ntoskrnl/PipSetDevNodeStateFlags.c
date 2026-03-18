/*
 * XREFs of PipSetDevNodeStateFlags @ 0x1407185F8
 * Callers:
 *     IopQueueDeviceResetEvent @ 0x140715594 (IopQueueDeviceResetEvent.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140309490 (ObfDereferenceObject.c)
 *     IoGetDeviceAttachmentBaseRef @ 0x14035AFE0 (IoGetDeviceAttachmentBaseRef.c)
 *     PpDevNodeLockTree @ 0x140A060F0 (PpDevNodeLockTree.c)
 *     PpDevNodeUnlockTree @ 0x140A0AA84 (PpDevNodeUnlockTree.c)
 */

__int64 __fastcall PipSetDevNodeStateFlags(PDEVICE_OBJECT DeviceObject)
{
  PDEVICE_OBJECT DeviceAttachmentBaseRef; // rax
  unsigned int v3; // ebx
  PDEVICE_OBJECT v4; // rdx
  _DWORD *DeviceNode; // rcx
  int v6; // eax

  PpDevNodeLockTree(1LL);
  DeviceAttachmentBaseRef = IoGetDeviceAttachmentBaseRef(DeviceObject);
  v3 = 0;
  v4 = DeviceAttachmentBaseRef;
  if ( DeviceAttachmentBaseRef )
  {
    DeviceNode = DeviceAttachmentBaseRef->DeviceObjectExtension->DeviceNode;
    if ( DeviceNode && (unsigned int)(DeviceNode[75] - 789) > 1 )
    {
      v6 = DeviceNode[176];
      if ( (v6 & 0x8000) != 0 )
        v3 = 255;
      else
        DeviceNode[176] = v6 | 0x8000;
    }
    else
    {
      v3 = -1073741738;
    }
    ObfDereferenceObject(v4);
  }
  else
  {
    v3 = -1073741808;
  }
  PpDevNodeUnlockTree(1LL);
  return v3;
}
