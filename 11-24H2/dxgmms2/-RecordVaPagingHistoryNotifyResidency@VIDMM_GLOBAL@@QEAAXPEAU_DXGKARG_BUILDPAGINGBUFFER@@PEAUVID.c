/*
 * XREFs of ?RecordVaPagingHistoryNotifyResidency@VIDMM_GLOBAL@@QEAAXPEAU_DXGKARG_BUILDPAGINGBUFFER@@PEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x1400B06EC
 * Callers:
 *     ?NotifyResidency@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@EG_K@Z @ 0x1400B0558 (-NotifyResidency@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@EG_K@Z.c)
 * Callees:
 *     ??2@YAPEAX_KPEAVDXGK_LOG@@II@Z @ 0x140033150 (--2@YAPEAX_KPEAVDXGK_LOG@@II@Z.c)
 *     ?Release@DXGAUTOPUSHLOCKFASTEXCLUSIVE@@QEAAXXZ @ 0x140034280 (-Release@DXGAUTOPUSHLOCKFASTEXCLUSIVE@@QEAAXXZ.c)
 *     ?AllocateVaPagingHistoryEntry@VIDMM_GLOBAL@@QEAAPEAXW4VIDMM_PAGING_HISTORY_ENTRY_TYPE@@_K@Z @ 0x140111560 (-AllocateVaPagingHistoryEntry@VIDMM_GLOBAL@@QEAAPEAXW4VIDMM_PAGING_HISTORY_ENTRY_TYPE@@_K@Z.c)
 */

void __fastcall VIDMM_GLOBAL::RecordVaPagingHistoryNotifyResidency(
        VIDMM_GLOBAL *this,
        struct _DXGKARG_BUILDPAGINGBUFFER *a2,
        struct VIDMM_GLOBAL_ALLOC *a3)
{
  char *v6; // rbx
  bool v7; // zf
  _QWORD *VaPagingHistoryEntry; // rax
  __int128 v9; // xmm1
  char *v10; // [rsp+20h] [rbp-18h] BYREF
  char v11; // [rsp+28h] [rbp-10h]

  if ( VIDMM_GLOBAL::GpuVaPagingHistoryFreEnabled || *((_QWORD *)this + 5124) )
  {
    v6 = (char *)this + 41008;
    v10 = (char *)this + 41008;
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v6, 0LL);
    v7 = !VIDMM_GLOBAL::GpuVaPagingHistoryFreEnabled;
    *((_QWORD *)v6 + 1) = KeGetCurrentThread();
    v11 = 1;
    if ( v7 )
      VaPagingHistoryEntry = (_QWORD *)VIDMM_GLOBAL::AllocateVaPagingHistoryEntry(this, 10LL, 56LL);
    else
      VaPagingHistoryEntry = operator new(56, (VIDMM_GLOBAL *)((char *)this + 41032), 0xAu, 0);
    if ( VaPagingHistoryEntry )
    {
      *(_OWORD *)VaPagingHistoryEntry = *(_OWORD *)&a2->Transfer.hAllocation;
      v9 = *(_OWORD *)&a2->NotifyResidency.PhysicalAddress.SegmentOffset;
      VaPagingHistoryEntry[5] = a3;
      *((_OWORD *)VaPagingHistoryEntry + 1) = v9;
      *((_DWORD *)VaPagingHistoryEntry + 8) = *((_DWORD *)a3 + 6) & 0x3F;
      VaPagingHistoryEntry[6] = *(_QWORD *)(*((_QWORD *)a3 + 49) + 48LL);
    }
    DXGAUTOPUSHLOCKFASTEXCLUSIVE::Release((DXGAUTOPUSHLOCKFASTEXCLUSIVE *)&v10);
  }
}
