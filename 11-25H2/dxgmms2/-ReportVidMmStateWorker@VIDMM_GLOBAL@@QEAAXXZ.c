/*
 * XREFs of ?ReportVidMmStateWorker@VIDMM_GLOBAL@@QEAAXXZ @ 0x1400C05B0
 * Callers:
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1400DE3C0 (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 * Callees:
 *     ?ReportProcessBudgets@VIDMM_GLOBAL@@QEAAXXZ @ 0x1400B17F0 (-ReportProcessBudgets@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?ReportSegmentState@VIDMM_SEGMENT@@QEAAXXZ @ 0x1400C1C80 (-ReportSegmentState@VIDMM_SEGMENT@@QEAAXXZ.c)
 *     VidMmReportDmaPoolState @ 0x1400F6D70 (VidMmReportDmaPoolState.c)
 *     ?ReportProcessStates@VIDMM_GLOBAL@@QEAAXXZ @ 0x1400F6F2C (-ReportProcessStates@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?ReportHeapManagerStates@VIDMM_RECYCLE_HEAP_MGR@@SAXXZ @ 0x1400FD404 (-ReportHeapManagerStates@VIDMM_RECYCLE_HEAP_MGR@@SAXXZ.c)
 *     ?ReportPagingProcessState@VIDMM_GLOBAL@@QEAAXXZ @ 0x140100C64 (-ReportPagingProcessState@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?ReportSegment@VIDMM_SEGMENT@@QEAAXXZ @ 0x14010E588 (-ReportSegment@VIDMM_SEGMENT@@QEAAXXZ.c)
 */

void __fastcall VIDMM_GLOBAL::ReportVidMmStateWorker(VIDMM_GLOBAL *this)
{
  unsigned __int16 v2; // di
  unsigned __int16 v3; // si
  __int64 v4; // rbp
  unsigned int v5; // ecx
  unsigned int i; // edi
  unsigned __int16 v7; // di
  unsigned __int16 v8; // si
  __int64 v9; // rbp

  v2 = 0;
  if ( *((_DWORD *)this + 1736) )
  {
    do
    {
      v3 = 0;
      v4 = *(_QWORD *)(*((_QWORD *)this + 5029) + 8LL * v2);
      if ( *(_DWORD *)(v4 + 64) )
      {
        do
          VIDMM_SEGMENT::ReportSegment(*(VIDMM_SEGMENT **)(*(_QWORD *)(v4 + 1648) + 8LL * v3++));
        while ( (unsigned int)v3 < *(_DWORD *)(v4 + 64) );
      }
      v5 = *((_DWORD *)this + 1736);
      ++v2;
    }
    while ( v2 < v5 );
    for ( i = 0; i < v5; ++i )
    {
      if ( *((_QWORD *)this + i + 143) )
        VidMmReportDmaPoolState(*((_QWORD *)this + i + 79));
      v5 = *((_DWORD *)this + 1736);
    }
    v7 = 0;
    if ( v5 )
    {
      do
      {
        v8 = 0;
        v9 = *(_QWORD *)(*((_QWORD *)this + 5029) + 8LL * v7);
        if ( *(_DWORD *)(v9 + 64) )
        {
          do
            VIDMM_SEGMENT::ReportSegmentState(*(VIDMM_SEGMENT **)(*(_QWORD *)(v9 + 1648) + 8LL * v8++));
          while ( (unsigned int)v8 < *(_DWORD *)(v9 + 64) );
        }
        ++v7;
      }
      while ( (unsigned int)v7 < *((_DWORD *)this + 1736) );
    }
  }
  if ( (*(_DWORD *)(*((_QWORD *)this + 3) + 444LL) & 1) != 0 )
    VIDMM_RECYCLE_HEAP_MGR::ReportHeapManagerStates();
  VIDMM_GLOBAL::ReportProcessStates(this);
  VIDMM_GLOBAL::ReportProcessBudgets((struct _KTHREAD **)this);
  VIDMM_GLOBAL::ReportPagingProcessState(this);
}
