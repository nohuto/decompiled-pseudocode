/*
 * XREFs of ?VidMmUnmapViewAsync@@YAXPEAU_EPROCESS@@PEAX1@Z @ 0x1400C12C0
 * Callers:
 *     ?UnmapViewOfAllocation@VIDMM_PROCESS_HEAP@@UEAAXPEAUVIDMM_HEAP_ALLOC@@@Z @ 0x1400A42A0 (-UnmapViewOfAllocation@VIDMM_PROCESS_HEAP@@UEAAXPEAUVIDMM_HEAP_ALLOC@@@Z.c)
 *     ?UnmapViewOfAllocationExternal@VIDMM_PROCESS_HEAP@@UEAAXPEAUVIDMM_HEAP_ALLOC@@PEAX@Z @ 0x1400A43F0 (-UnmapViewOfAllocationExternal@VIDMM_PROCESS_HEAP@@UEAAXPEAUVIDMM_HEAP_ALLOC@@PEAX@Z.c)
 *     ?UnmapExternal@VIDMM_RECYCLE_MULTIRANGE@@QEAAXPEAX@Z @ 0x1400BF538 (-UnmapExternal@VIDMM_RECYCLE_MULTIRANGE@@QEAAXPEAX@Z.c)
 *     ?Unmap@VIDMM_RECYCLE_MULTIRANGE@@QEAAXXZ @ 0x1400BFC24 (-Unmap@VIDMM_RECYCLE_MULTIRANGE@@QEAAXXZ.c)
 *     ?VidMmUnmapViewOfAllocation@@YAXPEAUVIDMM_LOCAL_ALLOC@@PEAX@Z @ 0x1400C4210 (-VidMmUnmapViewOfAllocation@@YAXPEAUVIDMM_LOCAL_ALLOC@@PEAX@Z.c)
 *     ?LockRange@VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW@@QEAAJPEBUVIDMM_GLOBAL_ALLOC@@W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@_K3@Z @ 0x1400C4B48 (-LockRange@VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW@@QEAAJPEBUVIDMM_GLOBAL_ALLOC@@W4_LOCK_OPERATION@@PEA.c)
 *     ?UnlockRange@VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW@@QEAAJ_K0@Z @ 0x1400C5DB0 (-UnlockRange@VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW@@QEAAJ_K0@Z.c)
 *     ?ZeroMultirangeMemory@VIDMM_RECYCLE_MULTIRANGE@@QEAAXXZ @ 0x1400CBBF8 (-ZeroMultirangeMemory@VIDMM_RECYCLE_MULTIRANGE@@QEAAXXZ.c)
 * Callees:
 *     McTemplateK0ppp_EtwWriteTransfer @ 0x14003D274 (McTemplateK0ppp_EtwWriteTransfer.c)
 *     memset @ 0x140056340 (memset.c)
 *     ?VidMmQueueAsyncOperation@@YAHPEAU_VIDMM_ASYNC_OPERATION@@@Z @ 0x1400C1444 (-VidMmQueueAsyncOperation@@YAHPEAU_VIDMM_ASYNC_OPERATION@@@Z.c)
 *     ?VidMmUnmapView@@YAXPEAU_EPROCESS@@PEAX@Z @ 0x1400CC6A8 (-VidMmUnmapView@@YAXPEAU_EPROCESS@@PEAX@Z.c)
 */

void __fastcall VidMmUnmapViewAsync(struct _EPROCESS *a1, PVOID Object, void *a3)
{
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rcx
  __int64 v9; // r8
  _QWORD v10[10]; // [rsp+30h] [rbp-58h] BYREF

  memset(v10, 0, 0x48uLL);
  if ( (byte_140081241 & 1) != 0 )
    McTemplateK0ppp_EtwWriteTransfer(v6, &BeginVidMmUnmapViewAsync, v7, a1, Object, a3);
  ObfReferenceObject(Object);
  v10[8] = 0LL;
  LODWORD(v10[4]) = 2;
  v10[5] = a1;
  v10[6] = Object;
  v10[7] = a3;
  if ( a1 )
    v10[8] = PsGetProcessDxgProcess(a1);
  if ( !(unsigned int)VidMmQueueAsyncOperation((struct _VIDMM_ASYNC_OPERATION *)v10) )
  {
    VidMmUnmapView(a1, a3);
    ObfDereferenceObject(Object);
    if ( (byte_140081241 & 1) != 0 )
      McTemplateK0ppp_EtwWriteTransfer(v8, &EndVidMmUnmapViewAsync, v9, a1, Object, a3);
  }
}
