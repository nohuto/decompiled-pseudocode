/*
 * XREFs of ?RecordVaPagingHistoryMapGpuVa@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@PEAUVIDMM_MAPPED_VA_RANGE@@PEAUVIDMM_PAGING_QUEUE@@_K@Z @ 0x1400F6730
 * Callers:
 *     ?VidMmMapGpuVirtualAddressInternal@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_PAGING_QUEUE@@PEAUVIDMM_MULTI_ALLOC@@PEAUD3DDDI_MAPGPUVIRTUALADDRESS@@_N@Z @ 0x1400EFA34 (-VidMmMapGpuVirtualAddressInternal@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_PAGING_QUEUE@@PEAUVIDMM_MULTI_AL.c)
 * Callees:
 *     ??2@YAPEAX_KPEAVDXGK_LOG@@II@Z @ 0x140034800 (--2@YAPEAX_KPEAVDXGK_LOG@@II@Z.c)
 *     ?Release@DXGAUTOPUSHLOCKFASTEXCLUSIVE@@QEAAXXZ @ 0x140035890 (-Release@DXGAUTOPUSHLOCKFASTEXCLUSIVE@@QEAAXXZ.c)
 *     Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline @ 0x14004CCF0 (Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline.c)
 *     ?AllocateVaPagingHistoryEntry@VIDMM_GLOBAL@@QEAAPEAXW4VIDMM_PAGING_HISTORY_ENTRY_TYPE@@_K@Z @ 0x140112778 (-AllocateVaPagingHistoryEntry@VIDMM_GLOBAL@@QEAAPEAXW4VIDMM_PAGING_HISTORY_ENTRY_TYPE@@_K@Z.c)
 */

void __fastcall VIDMM_GLOBAL::RecordVaPagingHistoryMapGpuVa(
        VIDMM_GLOBAL *this,
        struct VIDMM_PROCESS *a2,
        struct VIDMM_MAPPED_VA_RANGE *a3,
        struct VIDMM_PAGING_QUEUE *a4,
        unsigned __int64 a5)
{
  char *v9; // rbx
  bool v10; // zf
  _QWORD *VaPagingHistoryEntry; // rax
  _QWORD *v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rax
  char *v15; // [rsp+20h] [rbp-18h] BYREF
  char v16; // [rsp+28h] [rbp-10h]

  if ( VIDMM_GLOBAL::GpuVaPagingHistoryFreEnabled || *((_QWORD *)this + 5124) )
  {
    v9 = (char *)this + 41008;
    v15 = (char *)this + 41008;
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v9, 0LL);
    Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
    v10 = !VIDMM_GLOBAL::GpuVaPagingHistoryFreEnabled;
    *((_QWORD *)v9 + 1) = KeGetCurrentThread();
    v16 = 1;
    if ( v10 )
      VaPagingHistoryEntry = (_QWORD *)VIDMM_GLOBAL::AllocateVaPagingHistoryEntry(this, 14LL, 80LL);
    else
      VaPagingHistoryEntry = operator new(80, (VIDMM_GLOBAL *)((char *)this + 41032), 0xEu, 0);
    v12 = VaPagingHistoryEntry;
    if ( VaPagingHistoryEntry )
    {
      *VaPagingHistoryEntry = *(_QWORD *)a2;
      VaPagingHistoryEntry[1] = *((_QWORD *)a2 + 4);
      VaPagingHistoryEntry[3] = a5;
      VaPagingHistoryEntry[2] = a4;
      VaPagingHistoryEntry[4] = *((_QWORD *)a3 + 13);
      VaPagingHistoryEntry[5] = *((_QWORD *)a3 + 14);
      VaPagingHistoryEntry[6] = *((_QWORD *)a3 + 8);
      *((_DWORD *)VaPagingHistoryEntry + 14) = *((_DWORD *)a3 + 18) & 0xF;
      v13 = *((_QWORD *)a3 + 10);
      v12[9] = 0LL;
      v12[8] = v13;
      if ( (*((_DWORD *)a3 + 18) & 0xF) == 1 )
      {
        v14 = *(_QWORD *)(*((_QWORD *)a3 + 8) + 16LL);
        if ( v14 )
          v12[9] = *(_QWORD *)(v14 + 32);
      }
    }
    DXGAUTOPUSHLOCKFASTEXCLUSIVE::Release((DXGAUTOPUSHLOCKFASTEXCLUSIVE *)&v15);
  }
}
