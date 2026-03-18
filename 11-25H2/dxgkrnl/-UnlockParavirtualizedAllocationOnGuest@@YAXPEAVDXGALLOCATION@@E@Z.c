/*
 * XREFs of ?UnlockParavirtualizedAllocationOnGuest@@YAXPEAVDXGALLOCATION@@E@Z @ 0x1401AF8A8
 * Callers:
 *     DxgkUnlock2Internal @ 0x14028E6D0 (DxgkUnlock2Internal.c)
 *     ?DestroyCoreAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@PEAVDXGALLOCATION@@@Z @ 0x140339754 (-DestroyCoreAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@PEAVDXGALLOCATION@@@Z.c)
 *     ??1DXGALLOCATION@@QEAA@XZ @ 0x140387770 (--1DXGALLOCATION@@QEAA@XZ.c)
 *     ?VmBusSendUnlock2@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAU_D3DKMT_UNLOCK2@@E@Z @ 0x140401008 (-VmBusSendUnlock2@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAU_D3DKMT_UN.c)
 *     ?VmBusSendLock2@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAU_D3DKMT_LOCK2@@EII@Z @ 0x140401AA0 (-VmBusSendLock2@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAU_D3DKMT_LOCK.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140018F10 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ @ 0x140035DA0 (-DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 *     ?DeleteGpadl@DXG_GUEST_GLOBAL_VMBUS@@QEAAXI@Z @ 0x140215AC8 (-DeleteGpadl@DXG_GUEST_GLOBAL_VMBUS@@QEAAXI@Z.c)
 */

void __fastcall UnlockParavirtualizedAllocationOnGuest(struct DXGALLOCATION *a1, char a2)
{
  PMDL *v2; // rdi
  void *v4; // rcx
  bool v6; // zf
  struct DXGGLOBAL *Global; // rax
  char v8; // al
  const struct DXGK_VIRTUAL_MEMORY_INTERFACE *VirtualMemoryInterface; // rax
  ULONG_PTR v10; // [rsp+40h] [rbp+8h] BYREF

  v2 = (PMDL *)((char *)a1 + 104);
  v4 = (void *)*((_QWORD *)a1 + 13);
  if ( v4 )
  {
    v6 = (*((_DWORD *)a1 + 18) & 0x80000) == 0;
    v10 = *((unsigned int *)a1 + 30);
    if ( !v6 )
    {
      MmRotatePhysicalView(v4, &v10, 0LL, MmToRegularMemoryNoCopy, 0LL, 0LL);
      *((_DWORD *)a1 + 18) &= ~0x80000u;
    }
    if ( a2 )
    {
      if ( *((_DWORD *)a1 + 31) )
      {
        Global = DXGGLOBAL::GetGlobal();
        DXG_GUEST_GLOBAL_VMBUS::DeleteGpadl(*((DXG_GUEST_GLOBAL_VMBUS **)Global + 206), *((_DWORD *)a1 + 31));
        *((_DWORD *)a1 + 31) = 0;
      }
      v8 = *((_BYTE *)a1 + 128);
      if ( (v8 & 1) != 0 )
      {
        MmFreePagesFromMdl(*v2);
        ExFreePoolWithTag(*v2, 0);
      }
      else if ( (v8 & 2) != 0 )
      {
        if ( (*((_BYTE *)DXGGLOBAL::GetGlobal() + 1712) & 1) != 0 )
        {
          if ( (*((_BYTE *)a1 + 128) & 8) != 0 )
          {
            MmUnlockPages(*v2);
            *((_BYTE *)a1 + 128) &= ~8u;
          }
          IoFreeMdl(*v2);
        }
      }
      else
      {
        VirtualMemoryInterface = DxgkGetVirtualMemoryInterface();
        (*((void (__fastcall **)(__int64, PMDL *, ULONG_PTR *, __int64))VirtualMemoryInterface + 2))(
          -1LL,
          v2,
          &v10,
          0x8000LL);
        if ( *((_DWORD *)a1 + 24) )
          _InterlockedDecrement(&g_VgpuNumAllocationsUnderCpuAccess);
        _InterlockedDecrement(&g_VgpuNumAllocationsLocked);
        g_VgpuNumLockedBytes -= v10;
      }
      *v2 = 0LL;
    }
  }
}
