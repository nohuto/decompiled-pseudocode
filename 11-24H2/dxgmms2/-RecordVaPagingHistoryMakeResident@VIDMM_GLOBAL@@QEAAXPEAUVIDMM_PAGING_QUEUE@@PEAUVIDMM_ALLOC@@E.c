/*
 * XREFs of ?RecordVaPagingHistoryMakeResident@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_PAGING_QUEUE@@PEAUVIDMM_ALLOC@@E_K@Z @ 0x1400F1150
 * Callers:
 *     ?CommitAllocationList@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_PAGING_QUEUE@@PEAPEAUVIDMM_ALLOC@@_KPEA_K@Z @ 0x1400EC038 (-CommitAllocationList@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_PAGING_QUEUE@@PEAPEAUVIDMM_ALLOC@@_KPEA_K@Z.c)
 * Callees:
 *     ??2@YAPEAX_KPEAVDXGK_LOG@@II@Z @ 0x140033150 (--2@YAPEAX_KPEAVDXGK_LOG@@II@Z.c)
 *     ?Release@DXGAUTOPUSHLOCKFASTEXCLUSIVE@@QEAAXXZ @ 0x140034280 (-Release@DXGAUTOPUSHLOCKFASTEXCLUSIVE@@QEAAXXZ.c)
 *     ?AllocateVaPagingHistoryEntry@VIDMM_GLOBAL@@QEAAPEAXW4VIDMM_PAGING_HISTORY_ENTRY_TYPE@@_K@Z @ 0x140111560 (-AllocateVaPagingHistoryEntry@VIDMM_GLOBAL@@QEAAPEAXW4VIDMM_PAGING_HISTORY_ENTRY_TYPE@@_K@Z.c)
 */

void __fastcall VIDMM_GLOBAL::RecordVaPagingHistoryMakeResident(
        VIDMM_GLOBAL *this,
        struct VIDMM_PAGING_QUEUE *a2,
        struct VIDMM_ALLOC *a3,
        char a4,
        unsigned __int64 a5)
{
  char *v9; // rbx
  bool v10; // zf
  _QWORD *VaPagingHistoryEntry; // rax
  _QWORD *v12; // rdx
  __int64 v13; // rax
  char *v14; // [rsp+20h] [rbp-18h] BYREF
  char v15; // [rsp+28h] [rbp-10h]

  if ( VIDMM_GLOBAL::GpuVaPagingHistoryFreEnabled || *((_QWORD *)this + 5124) )
  {
    v9 = (char *)this + 41008;
    v14 = (char *)this + 41008;
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v9, 0LL);
    v10 = !VIDMM_GLOBAL::GpuVaPagingHistoryFreEnabled;
    *((_QWORD *)v9 + 1) = KeGetCurrentThread();
    v15 = 1;
    if ( v10 )
      VaPagingHistoryEntry = (_QWORD *)VIDMM_GLOBAL::AllocateVaPagingHistoryEntry(this, 11LL, 48LL);
    else
      VaPagingHistoryEntry = operator new(48, (VIDMM_GLOBAL *)((char *)this + 41032), 0xBu, 0);
    v12 = VaPagingHistoryEntry;
    if ( VaPagingHistoryEntry )
    {
      *((_BYTE *)VaPagingHistoryEntry + 32) = a4;
      VaPagingHistoryEntry[1] = a2;
      VaPagingHistoryEntry[2] = a3;
      VaPagingHistoryEntry[5] = a5 & -(__int64)(a4 != 0);
      v13 = *((_QWORD *)a3 + 2);
      if ( v13 )
        v13 = *(_QWORD *)(v13 + 32);
      *v12 = 0LL;
      v12[3] = v13;
      if ( a2 )
        *v12 = **(_QWORD **)(*((_QWORD *)a2 + 12) + 8LL);
    }
    DXGAUTOPUSHLOCKFASTEXCLUSIVE::Release((DXGAUTOPUSHLOCKFASTEXCLUSIVE *)&v14);
  }
}
