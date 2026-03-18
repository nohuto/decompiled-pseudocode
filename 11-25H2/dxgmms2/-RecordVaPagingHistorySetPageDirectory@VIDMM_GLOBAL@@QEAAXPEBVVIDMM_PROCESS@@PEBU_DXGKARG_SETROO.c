/*
 * XREFs of ?RecordVaPagingHistorySetPageDirectory@VIDMM_GLOBAL@@QEAAXPEBVVIDMM_PROCESS@@PEBU_DXGKARG_SETROOTPAGETABLE@@PEBX@Z @ 0x1401036F4
 * Callers:
 *     ?VidMmRecordVaPagingHistorySetPageDirectory@@YAXPEAVVIDMM_GLOBAL@@PEBVVIDMM_PROCESS@@PEBU_DXGKARG_SETROOTPAGETABLE@@PEBX@Z @ 0x140043F04 (-VidMmRecordVaPagingHistorySetPageDirectory@@YAXPEAVVIDMM_GLOBAL@@PEBVVIDMM_PROCESS@@PEBU_DXGKAR.c)
 * Callees:
 *     ??2@YAPEAX_KPEAVDXGK_LOG@@II@Z @ 0x140034800 (--2@YAPEAX_KPEAVDXGK_LOG@@II@Z.c)
 *     ?Release@DXGAUTOPUSHLOCKFASTEXCLUSIVE@@QEAAXXZ @ 0x140035890 (-Release@DXGAUTOPUSHLOCKFASTEXCLUSIVE@@QEAAXXZ.c)
 *     Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline @ 0x14004CCF0 (Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline.c)
 *     ?AllocateVaPagingHistoryEntry@VIDMM_GLOBAL@@QEAAPEAXW4VIDMM_PAGING_HISTORY_ENTRY_TYPE@@_K@Z @ 0x140112778 (-AllocateVaPagingHistoryEntry@VIDMM_GLOBAL@@QEAAPEAXW4VIDMM_PAGING_HISTORY_ENTRY_TYPE@@_K@Z.c)
 */

void __fastcall VIDMM_GLOBAL::RecordVaPagingHistorySetPageDirectory(
        VIDMM_GLOBAL *this,
        const struct VIDMM_PROCESS *a2,
        const struct _DXGKARG_SETROOTPAGETABLE *a3,
        const void *a4)
{
  __int64 v4; // rbx
  char *v9; // rsi
  bool v10; // zf
  _QWORD *VaPagingHistoryEntry; // rax
  __int128 v12; // xmm1
  __int64 v13; // rcx
  char *v14; // [rsp+20h] [rbp-28h] BYREF
  char v15; // [rsp+28h] [rbp-20h]

  v4 = 0LL;
  if ( VIDMM_GLOBAL::GpuVaPagingHistoryFreEnabled || *((_QWORD *)this + 5124) )
  {
    v9 = (char *)this + 41008;
    v14 = (char *)this + 41008;
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v9, 0LL);
    Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
    v10 = !VIDMM_GLOBAL::GpuVaPagingHistoryFreEnabled;
    *((_QWORD *)v9 + 1) = KeGetCurrentThread();
    v15 = 1;
    if ( v10 )
      VaPagingHistoryEntry = (_QWORD *)VIDMM_GLOBAL::AllocateVaPagingHistoryEntry(this, 9LL, 56LL);
    else
      VaPagingHistoryEntry = operator new(56, (VIDMM_GLOBAL *)((char *)this + 41032), 9u, 0);
    if ( VaPagingHistoryEntry )
    {
      *(_OWORD *)VaPagingHistoryEntry = *(_OWORD *)&a3->hContext;
      v12 = *(_OWORD *)&a3->Address.SegmentOffset;
      VaPagingHistoryEntry[6] = a4;
      *((_OWORD *)VaPagingHistoryEntry + 1) = v12;
      if ( a2 )
        v13 = *(_QWORD *)a2;
      else
        v13 = 0LL;
      VaPagingHistoryEntry[4] = v13;
      if ( a2 )
        v4 = *((_QWORD *)a2 + 4);
      VaPagingHistoryEntry[5] = v4;
    }
    DXGAUTOPUSHLOCKFASTEXCLUSIVE::Release((DXGAUTOPUSHLOCKFASTEXCLUSIVE *)&v14);
  }
}
