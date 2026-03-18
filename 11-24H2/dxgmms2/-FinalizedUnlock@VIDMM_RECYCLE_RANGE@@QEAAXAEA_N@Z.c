/*
 * XREFs of ?FinalizedUnlock@VIDMM_RECYCLE_RANGE@@QEAAXAEA_N@Z @ 0x1400C4A1C
 * Callers:
 *     ??1VIDMM_RECYCLE_HEAP_MGR@@UEAA@XZ @ 0x1400FD8B8 (--1VIDMM_RECYCLE_HEAP_MGR@@UEAA@XZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x14001D2D0 (--3@YAXPEAX@Z.c)
 *     ?RemoveFromLockedRanges@VIDMM_MDL_RANGE@@QEAAXXZ @ 0x140039DCC (-RemoveFromLockedRanges@VIDMM_MDL_RANGE@@QEAAXXZ.c)
 *     ?Unlock@VIDMM_MDL_RANGE@@QEAAXXZ @ 0x1400C4B10 (-Unlock@VIDMM_MDL_RANGE@@QEAAXXZ.c)
 *     ?CleanupFreeBlock@VIDMM_RECYCLE_BLOCK@@QEAA_NPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1400C5670 (-CleanupFreeBlock@VIDMM_RECYCLE_BLOCK@@QEAA_NPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?Transition@VIDMM_RECYCLE_RANGE@@QEAAXW4VIDMM_RECYCLE_RANGE_STATE@@@Z @ 0x1400C7364 (-Transition@VIDMM_RECYCLE_RANGE@@QEAAXW4VIDMM_RECYCLE_RANGE_STATE@@@Z.c)
 *     ?AddToDecommitDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1400C7454 (-AddToDecommitDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?CombineFreedScanFromRange@VIDMM_RECYCLE_BLOCK@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1400C8CDC (-CombineFreedScanFromRange@VIDMM_RECYCLE_BLOCK@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?ShiftTreeMembershipOnDebouncedStateChange@VIDMM_RECYCLE_HEAP@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1400C91E8 (-ShiftTreeMembershipOnDebouncedStateChange@VIDMM_RECYCLE_HEAP@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 */

void __fastcall VIDMM_RECYCLE_RANGE::FinalizedUnlock(VIDMM_RECYCLE_RANGE *this, bool *a2)
{
  _QWORD **v3; // r14
  _QWORD *v5; // rdi
  VIDMM_MDL_RANGE *v6; // rsi
  __int64 v7; // r8
  int v8; // ecx

  v3 = (_QWORD **)(*((_QWORD *)this + 9) + 96LL);
  *a2 = 0;
  v5 = *v3;
  while ( v5 != v3 )
  {
    v6 = (VIDMM_MDL_RANGE *)(v5 - 3);
    VIDMM_MDL_RANGE::Unlock((VIDMM_MDL_RANGE *)(v5 - 3));
    v5 = (_QWORD *)*v5;
    VIDMM_MDL_RANGE::RemoveFromLockedRanges(v6);
    if ( v6 )
      operator delete(v6);
  }
  v7 = *((_QWORD *)this + 9);
  v8 = **(_DWORD **)(v7 + 32);
  if ( (unsigned int)(v8 - 3) <= 3 || (unsigned int)(v8 - 9) <= 1 )
  {
    VIDMM_RECYCLE_HEAP::ShiftTreeMembershipOnDebouncedStateChange(*(VIDMM_RECYCLE_HEAP **)(v7 + 32), this);
    VIDMM_RECYCLE_RANGE::Transition(this, 0LL);
    VIDMM_RECYCLE_BLOCK::CombineFreedScanFromRange(*((VIDMM_RECYCLE_BLOCK **)this + 9), this);
    *a2 = VIDMM_RECYCLE_BLOCK::CleanupFreeBlock(*((VIDMM_RECYCLE_BLOCK **)this + 9), this);
  }
  else
  {
    VIDMM_RECYCLE_HEAP_MGR::AddToDecommitDebounce(*(VIDMM_RECYCLE_HEAP_MGR **)(*(_QWORD *)(v7 + 32) + 8LL), this);
    VIDMM_RECYCLE_HEAP::ShiftTreeMembershipOnDebouncedStateChange(
      *(VIDMM_RECYCLE_HEAP **)(*((_QWORD *)this + 9) + 32LL),
      this);
    VIDMM_RECYCLE_RANGE::Transition(this, 5LL);
  }
}
