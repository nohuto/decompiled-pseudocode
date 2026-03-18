/*
 * XREFs of ?Acquire@DXGDEVICEACCESSLOCKSHARED@@QEAAXXZ @ 0x140031454
 * Callers:
 *     ??0DXGDEVICEACCESSLOCKSHARED@@QEAA@PEAVDXGDEVICE@@@Z @ 0x140031428 (--0DXGDEVICEACCESSLOCKSHARED@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     DxgkSignalSynchronizationObjectFromCpu @ 0x1402B97E0 (DxgkSignalSynchronizationObjectFromCpu.c)
 *     ?PreIndirectPresentReadAllocationInfo@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@IAEAUINDIRECT_RESOURCE_INFO@@@Z @ 0x1402F3D24 (-PreIndirectPresentReadAllocationInfo@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@IAEAUINDIRECT_RESOURCE_.c)
 *     DxgkUpdateGpuVirtualAddress @ 0x1402F7A50 (DxgkUpdateGpuVirtualAddress.c)
 *     DxgkQueryResourceInfo @ 0x14038A4D0 (DxgkQueryResourceInfo.c)
 *     DxgkQueryResourceInfoFromNtHandle @ 0x14038C890 (DxgkQueryResourceInfoFromNtHandle.c)
 * Callees:
 *     McTemplateK0q_EtwWriteTransfer @ 0x140012444 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ @ 0x1402A4850 (-TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ.c)
 *     ?EnableD3Requests@DXGADAPTER@@QEAAXXZ @ 0x1402C7874 (-EnableD3Requests@DXGADAPTER@@QEAAXXZ.c)
 */

void __fastcall DXGDEVICEACCESSLOCKSHARED::Acquire(DXGDEVICEACCESSLOCKSHARED *this)
{
  struct _KEVENT *v2; // rdi
  __int64 v3; // rdi
  __int64 v4; // rcx
  __int64 v5; // r8

  if ( *(_QWORD *)this )
  {
    v2 = *(struct _KEVENT **)(*(_QWORD *)this + 16LL);
    if ( !KeReadStateEvent(v2 + 4) )
      KeWaitForSingleObject(&v2[4], Executive, 0, 0, 0LL);
    v3 = *(_QWORD *)this;
    KeEnterCriticalRegion();
    if ( !ExAcquireResourceSharedLite(*(PERESOURCE *)(v3 + 136), 0) )
    {
      DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*(_QWORD *)(v3 + 16) + 16LL));
      if ( bTracingEnabled )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
          McTemplateK0q_EtwWriteTransfer(v4, (__int64)&EventBlockThread, v5, 40);
      }
      ExAcquireResourceSharedLite(*(PERESOURCE *)(v3 + 136), 1u);
      DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*(_QWORD *)(v3 + 16) + 16LL));
    }
    *((_BYTE *)this + 8) = 1;
  }
}
