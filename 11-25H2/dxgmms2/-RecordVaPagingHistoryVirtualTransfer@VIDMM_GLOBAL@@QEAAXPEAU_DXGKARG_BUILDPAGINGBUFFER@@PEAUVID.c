/*
 * XREFs of ?RecordVaPagingHistoryVirtualTransfer@VIDMM_GLOBAL@@QEAAXPEAU_DXGKARG_BUILDPAGINGBUFFER@@PEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x1400FFFC4
 * Callers:
 *     ?MemoryTransferUsingGpuVaWorker@VIDMM_GLOBAL@@QEAAXKPEAUVIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@1PEAU_MDL@@2131U_DXGK_TRANSFERFLAGS@@1@Z @ 0x1400A804C (-MemoryTransferUsingGpuVaWorker@VIDMM_GLOBAL@@QEAAXKPEAUVIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT.c)
 * Callees:
 *     ??2@YAPEAX_KPEAVDXGK_LOG@@II@Z @ 0x140034800 (--2@YAPEAX_KPEAVDXGK_LOG@@II@Z.c)
 *     ?Release@DXGAUTOPUSHLOCKFASTEXCLUSIVE@@QEAAXXZ @ 0x140035890 (-Release@DXGAUTOPUSHLOCKFASTEXCLUSIVE@@QEAAXXZ.c)
 *     Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline @ 0x14004CCF0 (Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline.c)
 *     ?AllocateVaPagingHistoryEntry@VIDMM_GLOBAL@@QEAAPEAXW4VIDMM_PAGING_HISTORY_ENTRY_TYPE@@_K@Z @ 0x140112778 (-AllocateVaPagingHistoryEntry@VIDMM_GLOBAL@@QEAAPEAXW4VIDMM_PAGING_HISTORY_ENTRY_TYPE@@_K@Z.c)
 */

void __fastcall VIDMM_GLOBAL::RecordVaPagingHistoryVirtualTransfer(
        VIDMM_GLOBAL *this,
        struct _DXGKARG_BUILDPAGINGBUFFER *a2,
        struct VIDMM_GLOBAL_ALLOC *a3)
{
  __int64 v3; // rbx
  char *v7; // rdi
  bool v8; // zf
  _OWORD *VaPagingHistoryEntry; // rax
  __int128 v10; // xmm1
  char *v11; // [rsp+20h] [rbp-18h] BYREF
  char v12; // [rsp+28h] [rbp-10h]

  v3 = 0LL;
  if ( VIDMM_GLOBAL::GpuVaPagingHistoryFreEnabled || *((_QWORD *)this + 5124) )
  {
    v7 = (char *)this + 41008;
    v11 = (char *)this + 41008;
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v7, 0LL);
    Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
    v8 = !VIDMM_GLOBAL::GpuVaPagingHistoryFreEnabled;
    *((_QWORD *)v7 + 1) = KeGetCurrentThread();
    v12 = 1;
    if ( v8 )
      VaPagingHistoryEntry = (_OWORD *)VIDMM_GLOBAL::AllocateVaPagingHistoryEntry(this, 7LL, 88LL);
    else
      VaPagingHistoryEntry = operator new(88, (VIDMM_GLOBAL *)((char *)this + 41032), 7u, 0);
    if ( VaPagingHistoryEntry )
    {
      *VaPagingHistoryEntry = *(_OWORD *)&a2->Transfer.hAllocation;
      VaPagingHistoryEntry[1] = *(_OWORD *)&a2->NotifyResidency.PhysicalAddress.SegmentOffset;
      VaPagingHistoryEntry[2] = *(_OWORD *)&a2->Reserved.Reserved[8];
      v10 = *(_OWORD *)&a2->Reserved.Reserved[12];
      *((_QWORD *)VaPagingHistoryEntry + 9) = a3;
      VaPagingHistoryEntry[3] = v10;
      if ( a3 )
        v3 = *(_QWORD *)(*((_QWORD *)a3 + 47) + 48LL);
      *((_QWORD *)VaPagingHistoryEntry + 10) = v3;
      *((_DWORD *)VaPagingHistoryEntry + 16) = *((_DWORD *)a3 + 6) & 0x3F;
    }
    DXGAUTOPUSHLOCKFASTEXCLUSIVE::Release((DXGAUTOPUSHLOCKFASTEXCLUSIVE *)&v11);
  }
}
