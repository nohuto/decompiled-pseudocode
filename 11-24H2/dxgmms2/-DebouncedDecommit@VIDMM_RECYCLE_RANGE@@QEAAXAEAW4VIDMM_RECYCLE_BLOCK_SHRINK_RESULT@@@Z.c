/*
 * XREFs of ?DebouncedDecommit@VIDMM_RECYCLE_RANGE@@QEAAXAEAW4VIDMM_RECYCLE_BLOCK_SHRINK_RESULT@@@Z @ 0x1400C7544
 * Callers:
 *     ?ProcessDebounceList@VIDMM_RECYCLE_HEAP_MGR@@QEAAX_N0@Z @ 0x1400C58D0 (-ProcessDebounceList@VIDMM_RECYCLE_HEAP_MGR@@QEAAX_N0@Z.c)
 *     ??1VIDMM_RECYCLE_HEAP_MGR@@UEAA@XZ @ 0x1400FD8B8 (--1VIDMM_RECYCLE_HEAP_MGR@@UEAA@XZ.c)
 * Callees:
 *     ?DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ @ 0x14003783C (-DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ.c)
 *     McTemplateK0qxxx_EtwWriteTransfer @ 0x14003C268 (McTemplateK0qxxx_EtwWriteTransfer.c)
 *     _guard_dispatch_icall @ 0x140055E60 (_guard_dispatch_icall.c)
 *     ?DebouncedDecommitZeroTransition@VIDMM_RECYCLE_RANGE@@QEAAXXZ @ 0x1400C6A8C (-DebouncedDecommitZeroTransition@VIDMM_RECYCLE_RANGE@@QEAAXXZ.c)
 *     ?ShrinkOnTailRangeFree@VIDMM_RECYCLE_BLOCK@@QEAA?AW4VIDMM_RECYCLE_BLOCK_SHRINK_RESULT@@PEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1400C6B0C (-ShrinkOnTailRangeFree@VIDMM_RECYCLE_BLOCK@@QEAA-AW4VIDMM_RECYCLE_BLOCK_SHRINK_RESULT@@PEAVVIDMM.c)
 *     ?Transition@VIDMM_RECYCLE_RANGE@@QEAAXW4VIDMM_RECYCLE_RANGE_STATE@@@Z @ 0x1400C7364 (-Transition@VIDMM_RECYCLE_RANGE@@QEAAXW4VIDMM_RECYCLE_RANGE_STATE@@@Z.c)
 *     ?CombineFreedScanFromRange@VIDMM_RECYCLE_BLOCK@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1400C8CDC (-CombineFreedScanFromRange@VIDMM_RECYCLE_BLOCK@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?ShiftTreeMembershipOnDebouncedStateChange@VIDMM_RECYCLE_HEAP@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1400C91E8 (-ShiftTreeMembershipOnDebouncedStateChange@VIDMM_RECYCLE_HEAP@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall VIDMM_RECYCLE_RANGE::DebouncedDecommit(
        VIDMM_RECYCLE_RANGE *this,
        enum VIDMM_RECYCLE_BLOCK_SHRINK_RESULT *a2)
{
  __int64 v4; // rdx
  __int64 v5; // r9
  __int64 v6; // rax
  int v7; // r8d
  const struct DXGK_VIRTUAL_MEMORY_INTERFACE *VirtualMemoryInterface; // rax
  __int64 v9; // r8
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // [rsp+50h] [rbp+8h] BYREF

  if ( g_IsInternalReleaseOrDbg )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this) + 24) = this;
    WdLogGlobalForLineNumber = 1540;
  }
  v4 = *((int *)this + 16);
  v5 = 5LL;
  if ( (_DWORD)v4 != 5 )
    goto LABEL_6;
  v6 = *((_QWORD *)this + 9);
  v13 = *((_QWORD *)this + 5) - *((_QWORD *)this + 4);
  v7 = **(_DWORD **)(v6 + 32);
  if ( (unsigned int)(v7 - 3) <= 3 || (unsigned int)(v7 - 9) <= 1 )
  {
    g_DxgMmsBugcheckExportIndex = 1;
    WdLogSingleEntry5(0LL, 270LL, 52LL, 4LL, v4, 0LL);
    WdLogGlobalForLineNumber = 195;
LABEL_6:
    g_DxgMmsBugcheckExportIndex = 1;
    WdLogSingleEntry5(0LL, 270LL, 52LL, v5, v4, 0LL);
    WdLogGlobalForLineNumber = 195;
  }
  VirtualMemoryInterface = DxgkGetVirtualMemoryInterface();
  (*((void (__fastcall **)(__int64, char *, __int64 *, __int64))VirtualMemoryInterface + 2))(
    -1LL,
    (char *)this + 32,
    &v13,
    0x4000LL);
  VIDMM_RECYCLE_HEAP::ShiftTreeMembershipOnDebouncedStateChange(
    *(VIDMM_RECYCLE_HEAP **)(*((_QWORD *)this + 9) + 32LL),
    this);
  if ( (byte_140081241 & 0x10) != 0 )
  {
    v10 = *((_QWORD *)this + 9);
    v11 = *(_QWORD *)(v10 + 32);
    if ( (unsigned int)(*(_DWORD *)v11 - 3) > 3 )
      v12 = *((_QWORD *)this + 4);
    else
      v12 = *(_QWORD *)(v10 + 56);
    McTemplateK0qxxx_EtwWriteTransfer(
      v12,
      &EventDestroyProcessAllocationDetails,
      v9,
      *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v11 + 8) + 8LL) + 8LL),
      (char)this,
      v13,
      v12);
  }
  VIDMM_RECYCLE_RANGE::Transition((__int64)this, 0);
  VIDMM_RECYCLE_RANGE::DebouncedDecommitZeroTransition(this);
  VIDMM_RECYCLE_BLOCK::CombineFreedScanFromRange(*((VIDMM_RECYCLE_BLOCK **)this + 9), this);
  *(_DWORD *)a2 = VIDMM_RECYCLE_BLOCK::ShrinkOnTailRangeFree(*((_QWORD **)this + 9), this);
}
