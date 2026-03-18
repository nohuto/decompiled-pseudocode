/*
 * XREFs of ?DebouncedDecommit@VIDMM_RECYCLE_RANGE@@QEAAXAEAW4VIDMM_RECYCLE_BLOCK_SHRINK_RESULT@@@Z @ 0x1400C73F4
 * Callers:
 *     ??1VIDMM_RECYCLE_HEAP_MGR@@UEAA@XZ @ 0x1400C4010 (--1VIDMM_RECYCLE_HEAP_MGR@@UEAA@XZ.c)
 *     ?CurationThread@VIDMM_RECYCLE_HEAP_MGR@@QEAAXXZ @ 0x1400C53F0 (-CurationThread@VIDMM_RECYCLE_HEAP_MGR@@QEAAXXZ.c)
 *     ?ProcessDebounceList@VIDMM_RECYCLE_HEAP_MGR@@QEAAX_N0@Z @ 0x1400C5784 (-ProcessDebounceList@VIDMM_RECYCLE_HEAP_MGR@@QEAAX_N0@Z.c)
 * Callees:
 *     McTemplateK0qxxx_EtwWriteTransfer @ 0x140016220 (McTemplateK0qxxx_EtwWriteTransfer.c)
 *     ?DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ @ 0x140038DE0 (-DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ.c)
 *     _guard_dispatch_icall @ 0x1400562A0 (_guard_dispatch_icall.c)
 *     ?DebouncedDecommitZeroTransition@VIDMM_RECYCLE_RANGE@@QEAAXXZ @ 0x1400C693C (-DebouncedDecommitZeroTransition@VIDMM_RECYCLE_RANGE@@QEAAXXZ.c)
 *     ?ShrinkOnTailRangeFree@VIDMM_RECYCLE_BLOCK@@QEAA?AW4VIDMM_RECYCLE_BLOCK_SHRINK_RESULT@@PEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1400C69BC (-ShrinkOnTailRangeFree@VIDMM_RECYCLE_BLOCK@@QEAA-AW4VIDMM_RECYCLE_BLOCK_SHRINK_RESULT@@PEAVVIDMM.c)
 *     ?Transition@VIDMM_RECYCLE_RANGE@@QEAAXW4VIDMM_RECYCLE_RANGE_STATE@@@Z @ 0x1400C7214 (-Transition@VIDMM_RECYCLE_RANGE@@QEAAXW4VIDMM_RECYCLE_RANGE_STATE@@@Z.c)
 *     ?CombineFreedScanFromRange@VIDMM_RECYCLE_BLOCK@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1400C8C2C (-CombineFreedScanFromRange@VIDMM_RECYCLE_BLOCK@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?ShiftTreeMembershipOnDebouncedStateChange@VIDMM_RECYCLE_HEAP@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1400C9138 (-ShiftTreeMembershipOnDebouncedStateChange@VIDMM_RECYCLE_HEAP@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall VIDMM_RECYCLE_RANGE::DebouncedDecommit(
        VIDMM_RECYCLE_BLOCK **this,
        enum VIDMM_RECYCLE_BLOCK_SHRINK_RESULT *a2)
{
  __int64 v4; // rdx
  __int64 v5; // r9
  VIDMM_RECYCLE_BLOCK *v6; // rax
  int v7; // r8d
  const struct DXGK_VIRTUAL_MEMORY_INTERFACE *VirtualMemoryInterface; // rax
  signed __int64 v9; // [rsp+50h] [rbp+8h] BYREF

  if ( g_IsInternalReleaseOrDbg )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this) + 24) = this;
    WdLogGlobalForLineNumber = 1540;
  }
  v4 = *((int *)this + 16);
  v5 = 5LL;
  if ( (_DWORD)v4 != 5 )
    goto LABEL_6;
  v6 = this[9];
  v9 = this[5] - this[4];
  v7 = **((_DWORD **)v6 + 4);
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
  (*((void (__fastcall **)(__int64, char *, signed __int64 *, __int64))VirtualMemoryInterface + 2))(
    -1LL,
    (char *)this + 32,
    &v9,
    0x4000LL);
  VIDMM_RECYCLE_HEAP::ShiftTreeMembershipOnDebouncedStateChange(
    *((VIDMM_RECYCLE_HEAP **)this[9] + 4),
    (struct VIDMM_RECYCLE_RANGE *)this);
  if ( (byte_140081241 & 0x10) != 0 )
    McTemplateK0qxxx_EtwWriteTransfer();
  VIDMM_RECYCLE_RANGE::Transition((__int64)this, 0);
  VIDMM_RECYCLE_RANGE::DebouncedDecommitZeroTransition((VIDMM_RECYCLE_RANGE *)this);
  VIDMM_RECYCLE_BLOCK::CombineFreedScanFromRange(this[9], (struct VIDMM_RECYCLE_RANGE *)this);
  *(_DWORD *)a2 = VIDMM_RECYCLE_BLOCK::ShrinkOnTailRangeFree(this[9], (struct VIDMM_RECYCLE_RANGE *)this);
}
