/*
 * XREFs of IopQueryInterfaceRecurseUp @ 0x1409C43A8
 * Callers:
 *     IoQueryInterface @ 0x1407204B0 (IoQueryInterface.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140257E40 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14025A450 (ExReleaseResourceLite.c)
 *     IoGetDeviceAttachmentBaseRefWithTag @ 0x1402D4B68 (IoGetDeviceAttachmentBaseRefWithTag.c)
 *     ObfDereferenceObjectWithTag @ 0x1403254A0 (ObfDereferenceObjectWithTag.c)
 *     ExAcquireResourceSharedLite @ 0x140341E80 (ExAcquireResourceSharedLite.c)
 *     PnpQueryInterface @ 0x1409C4D84 (PnpQueryInterface.c)
 */

__int64 __fastcall IopQueryInterfaceRecurseUp(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, void *a6)
{
  struct _KTHREAD *CurrentThread; // rax
  void *DeviceAttachmentBaseRefWithTag; // rax
  void *v9; // rsi
  __int64 v10; // rbx
  unsigned int Interface; // edi

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceSharedLite(&IopDeviceTreeLock, 1u);
  DeviceAttachmentBaseRefWithTag = IoGetDeviceAttachmentBaseRefWithTag(a1, 0x49706E50u);
  v9 = DeviceAttachmentBaseRefWithTag;
  if ( DeviceAttachmentBaseRefWithTag )
    v10 = *(_QWORD *)(*((_QWORD *)DeviceAttachmentBaseRefWithTag + 39) + 40LL);
  else
    v10 = 0LL;
  while ( (PVOID)v10 != IopRootDeviceNode )
  {
    if ( !v10 || *(_DWORD *)(v10 + 300) == 790 )
    {
      Interface = -1073741130;
      goto LABEL_11;
    }
    Interface = PnpQueryInterface(*(PVOID *)(v10 + 32), a5, a6);
    if ( Interface != -1073741637 )
      goto LABEL_11;
    v10 = *(_QWORD *)(v10 + 16);
  }
  Interface = -1073741637;
LABEL_11:
  ObfDereferenceObjectWithTag(v9, 0x49706E50u);
  ExReleaseResourceLite(&IopDeviceTreeLock);
  KeLeaveCriticalRegion();
  return Interface;
}
