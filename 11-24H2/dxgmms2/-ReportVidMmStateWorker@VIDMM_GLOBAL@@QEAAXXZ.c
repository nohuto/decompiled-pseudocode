/*
 * XREFs of ?ReportVidMmStateWorker@VIDMM_GLOBAL@@QEAAXXZ @ 0x1400C0F10
 * Callers:
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1400E2548 (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 * Callees:
 *     ?ReportProcessBudgets@VIDMM_GLOBAL@@QEAAXXZ @ 0x1400B97D8 (-ReportProcessBudgets@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?ReportHeapManagerStates@VIDMM_RECYCLE_HEAP_MGR@@SAXXZ @ 0x1400BF5D4 (-ReportHeapManagerStates@VIDMM_RECYCLE_HEAP_MGR@@SAXXZ.c)
 *     ?ReportPagingProcessState@VIDMM_GLOBAL@@QEAAXXZ @ 0x1400BF784 (-ReportPagingProcessState@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?ReportSegment@VIDMM_SEGMENT@@QEAAXXZ @ 0x1400BFF94 (-ReportSegment@VIDMM_SEGMENT@@QEAAXXZ.c)
 *     ?ReportSegmentState@VIDMM_SEGMENT@@QEAAXXZ @ 0x1400C25E0 (-ReportSegmentState@VIDMM_SEGMENT@@QEAAXXZ.c)
 *     VidMmReportDmaPoolState @ 0x1400F43B0 (VidMmReportDmaPoolState.c)
 *     ?ReportProcessStates@VIDMM_GLOBAL@@QEAAXXZ @ 0x1400F458C (-ReportProcessStates@VIDMM_GLOBAL@@QEAAXXZ.c)
 */

void __fastcall VIDMM_GLOBAL::ReportVidMmStateWorker(VIDMM_GLOBAL *this, __int64 a2, __int64 a3)
{
  unsigned __int16 v4; // di
  unsigned __int16 v5; // si
  __int64 v6; // rbp
  unsigned int v7; // ecx
  unsigned int i; // edi
  unsigned __int16 v9; // di
  unsigned __int16 v10; // si
  __int64 v11; // rbp

  v4 = 0;
  if ( *((_DWORD *)this + 1736) )
  {
    do
    {
      v5 = 0;
      v6 = *(_QWORD *)(*((_QWORD *)this + 5029) + 8LL * v4);
      if ( *(_DWORD *)(v6 + 64) )
      {
        do
          VIDMM_SEGMENT::ReportSegment(*(VIDMM_SEGMENT **)(*(_QWORD *)(v6 + 1648) + 8LL * v5++), a2, a3);
        while ( (unsigned int)v5 < *(_DWORD *)(v6 + 64) );
      }
      v7 = *((_DWORD *)this + 1736);
      ++v4;
    }
    while ( v4 < v7 );
    for ( i = 0; i < v7; ++i )
    {
      if ( *((_QWORD *)this + i + 143) )
        VidMmReportDmaPoolState(*((_QWORD *)this + i + 79));
      v7 = *((_DWORD *)this + 1736);
    }
    v9 = 0;
    if ( v7 )
    {
      do
      {
        v10 = 0;
        v11 = *(_QWORD *)(*((_QWORD *)this + 5029) + 8LL * v9);
        if ( *(_DWORD *)(v11 + 64) )
        {
          do
            VIDMM_SEGMENT::ReportSegmentState(*(VIDMM_SEGMENT **)(*(_QWORD *)(v11 + 1648) + 8LL * v10++));
          while ( (unsigned int)v10 < *(_DWORD *)(v11 + 64) );
        }
        ++v9;
      }
      while ( (unsigned int)v9 < *((_DWORD *)this + 1736) );
    }
  }
  if ( (*(_DWORD *)(*((_QWORD *)this + 3) + 444LL) & 1) != 0 )
    VIDMM_RECYCLE_HEAP_MGR::ReportHeapManagerStates();
  VIDMM_GLOBAL::ReportProcessStates(this);
  VIDMM_GLOBAL::ReportProcessBudgets((struct _KTHREAD **)this);
  VIDMM_GLOBAL::ReportPagingProcessState(this);
}
