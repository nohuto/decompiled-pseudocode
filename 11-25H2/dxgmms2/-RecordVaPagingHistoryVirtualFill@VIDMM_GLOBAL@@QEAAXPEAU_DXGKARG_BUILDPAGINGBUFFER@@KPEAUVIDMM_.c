/*
 * XREFs of ?RecordVaPagingHistoryVirtualFill@VIDMM_GLOBAL@@QEAAXPEAU_DXGKARG_BUILDPAGINGBUFFER@@KPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x1400BEE28
 * Callers:
 *     ?FillAllocationUsingGpuVa@VIDMM_GLOBAL@@QEAAXKPEAUVIDMM_GLOBAL_ALLOC@@_KIPEAVVIDMM_SEGMENT@@PEAT_LARGE_INTEGER@@@Z @ 0x1400BD424 (-FillAllocationUsingGpuVa@VIDMM_GLOBAL@@QEAAXKPEAUVIDMM_GLOBAL_ALLOC@@_KIPEAVVIDMM_SEGMENT@@PEAT.c)
 * Callees:
 *     ??2@YAPEAX_KPEAVDXGK_LOG@@II@Z @ 0x140034800 (--2@YAPEAX_KPEAVDXGK_LOG@@II@Z.c)
 *     ?Release@DXGAUTOPUSHLOCKFASTEXCLUSIVE@@QEAAXXZ @ 0x140035890 (-Release@DXGAUTOPUSHLOCKFASTEXCLUSIVE@@QEAAXXZ.c)
 *     Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline @ 0x14004CCF0 (Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline.c)
 *     ?AllocateVaPagingHistoryEntry@VIDMM_GLOBAL@@QEAAPEAXW4VIDMM_PAGING_HISTORY_ENTRY_TYPE@@_K@Z @ 0x140112778 (-AllocateVaPagingHistoryEntry@VIDMM_GLOBAL@@QEAAPEAXW4VIDMM_PAGING_HISTORY_ENTRY_TYPE@@_K@Z.c)
 */

void __fastcall VIDMM_GLOBAL::RecordVaPagingHistoryVirtualFill(
        VIDMM_GLOBAL *this,
        struct _DXGKARG_BUILDPAGINGBUFFER *a2,
        int a3,
        struct VIDMM_GLOBAL_ALLOC *a4)
{
  __int64 v4; // rbx
  char *v9; // rdi
  bool v10; // zf
  _OWORD *VaPagingHistoryEntry; // rax
  char *v12; // [rsp+20h] [rbp-28h] BYREF
  char v13; // [rsp+28h] [rbp-20h]

  v4 = 0LL;
  if ( VIDMM_GLOBAL::GpuVaPagingHistoryFreEnabled || *((_QWORD *)this + 5124) )
  {
    v9 = (char *)this + 41008;
    v12 = (char *)this + 41008;
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v9, 0LL);
    Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
    v10 = !VIDMM_GLOBAL::GpuVaPagingHistoryFreEnabled;
    *((_QWORD *)v9 + 1) = KeGetCurrentThread();
    v13 = 1;
    if ( v10 )
      VaPagingHistoryEntry = (_OWORD *)VIDMM_GLOBAL::AllocateVaPagingHistoryEntry(this, 6LL, 64LL);
    else
      VaPagingHistoryEntry = operator new(64, (VIDMM_GLOBAL *)((char *)this + 41032), 6u, 0);
    if ( VaPagingHistoryEntry )
    {
      *VaPagingHistoryEntry = *(_OWORD *)&a2->Transfer.hAllocation;
      VaPagingHistoryEntry[1] = *(_OWORD *)&a2->NotifyResidency.PhysicalAddress.SegmentOffset;
      *((_QWORD *)VaPagingHistoryEntry + 4) = a2->Transfer.Source.SegmentAddress.QuadPart;
      *((_DWORD *)VaPagingHistoryEntry + 10) = a3;
      *((_QWORD *)VaPagingHistoryEntry + 6) = a4;
      if ( a4 )
        v4 = *(_QWORD *)(*((_QWORD *)a4 + 47) + 48LL);
      *((_QWORD *)VaPagingHistoryEntry + 7) = v4;
    }
    DXGAUTOPUSHLOCKFASTEXCLUSIVE::Release((DXGAUTOPUSHLOCKFASTEXCLUSIVE *)&v12);
  }
}
