/*
 * XREFs of IopQueryInterfaceRecurseUp @ 0x14098215C
 * Callers:
 *     IoQueryInterface @ 0x14071E040 (IoQueryInterface.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14028AA60 (ExReleaseResourceLite.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     ExAcquireResourceSharedLite @ 0x140321360 (ExAcquireResourceSharedLite.c)
 *     IoGetDeviceAttachmentBaseRefWithTag @ 0x140355DE8 (IoGetDeviceAttachmentBaseRefWithTag.c)
 *     PnpQueryInterface @ 0x140982B38 (PnpQueryInterface.c)
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
