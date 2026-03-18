/*
 * XREFs of ?DebouncedUnlock@VIDMM_RECYCLE_RANGE@@QEAAJAEA_N@Z @ 0x1400C5B58
 * Callers:
 *     ?Reset@VIDMM_RECYCLE_MULTIRANGE@@QEAAJW4VIDMM_PAGE_PRIORITY@@_N@Z @ 0x1400BF898 (-Reset@VIDMM_RECYCLE_MULTIRANGE@@QEAAJW4VIDMM_PAGE_PRIORITY@@_N@Z.c)
 *     ?ProcessDebounceList@VIDMM_RECYCLE_HEAP_MGR@@QEAAX_N0@Z @ 0x1400C58D0 (-ProcessDebounceList@VIDMM_RECYCLE_HEAP_MGR@@QEAAX_N0@Z.c)
 *     ?Rotate@VIDMM_RECYCLE_MULTIRANGE@@QEAAJPEAVVIDMM_GLOBAL@@W4_MM_ROTATE_DIRECTION@@PEAU_MDL@@_KP6AJ22PEAX@Z4TVIDMM_ROTATE_FLAGS@@@Z @ 0x1400F5C14 (-Rotate@VIDMM_RECYCLE_MULTIRANGE@@QEAAJPEAVVIDMM_GLOBAL@@W4_MM_ROTATE_DIRECTION@@PEAU_MDL@@_KP6A.c)
 * Callees:
 *     McTemplateK0q_EtwWriteTransfer @ 0x140008038 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x140036C28 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1400371E0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?CleanupFreeBlock@VIDMM_RECYCLE_BLOCK@@QEAA_NPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1400C5670 (-CleanupFreeBlock@VIDMM_RECYCLE_BLOCK@@QEAA_NPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?UnlockRange@VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW@@QEAAJ_K0@Z @ 0x1400C5DB0 (-UnlockRange@VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW@@QEAAJ_K0@Z.c)
 *     ?Transition@VIDMM_RECYCLE_RANGE@@QEAAXW4VIDMM_RECYCLE_RANGE_STATE@@@Z @ 0x1400C7364 (-Transition@VIDMM_RECYCLE_RANGE@@QEAAXW4VIDMM_RECYCLE_RANGE_STATE@@@Z.c)
 *     ?AddToDecommitDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1400C7454 (-AddToDecommitDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?CombineFreedScanFromRange@VIDMM_RECYCLE_BLOCK@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1400C8CDC (-CombineFreedScanFromRange@VIDMM_RECYCLE_BLOCK@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?ShiftTreeMembershipOnDebouncedStateChange@VIDMM_RECYCLE_HEAP@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1400C91E8 (-ShiftTreeMembershipOnDebouncedStateChange@VIDMM_RECYCLE_HEAP@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall VIDMM_RECYCLE_RANGE::DebouncedUnlock(VIDMM_RECYCLE_RANGE *this, bool *a2)
{
  __int64 v2; // r8
  int v4; // ecx
  int v6; // ecx
  int v7; // edi
  __int64 v8; // rdx
  __int64 v9; // r8
  int v10; // ecx
  int v12; // [rsp+30h] [rbp-20h] BYREF
  __int64 v13; // [rsp+38h] [rbp-18h]
  char v14; // [rsp+40h] [rbp-10h]

  v2 = *((int *)this + 16);
  v4 = *((_DWORD *)this + 16);
  *a2 = 0;
  v6 = v4 - 3;
  if ( v6 )
  {
    if ( v6 == 1 )
    {
      v12 = -1;
      v13 = 0LL;
      if ( (qword_140081010 & 2) != 0 )
      {
        v14 = 1;
        v12 = 8001;
        if ( (byte_140081242 & 1) != 0 )
          McTemplateK0q_EtwWriteTransfer();
      }
      else
      {
        v14 = 0;
      }
      DXGETWPROFILER_BASE::PushProfilerEntry();
      v7 = VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW::UnlockRange(
             (VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW *)(*((_QWORD *)this + 9) + 88LL),
             *((_QWORD *)this + 4),
             *((_QWORD *)this + 5));
      if ( v7 < 0 )
        goto LABEL_19;
      v9 = *((_QWORD *)this + 9);
      v10 = **(_DWORD **)(v9 + 32);
      if ( (unsigned int)(v10 - 3) <= 3 )
      {
LABEL_12:
        VIDMM_RECYCLE_HEAP::ShiftTreeMembershipOnDebouncedStateChange(*(VIDMM_RECYCLE_HEAP **)(v9 + 32), this);
        VIDMM_RECYCLE_RANGE::Transition(this, 0LL);
        VIDMM_RECYCLE_BLOCK::CombineFreedScanFromRange(*((VIDMM_RECYCLE_BLOCK **)this + 9), this);
        *a2 = VIDMM_RECYCLE_BLOCK::CleanupFreeBlock(*((VIDMM_RECYCLE_BLOCK **)this + 9), this);
        goto LABEL_13;
      }
    }
    else
    {
      g_DxgMmsBugcheckExportIndex = 1;
      WdLogSingleEntry5(0LL, 270LL, 52LL, 6LL, v2, 0LL);
      WdLogGlobalForLineNumber = 195;
    }
    if ( (unsigned int)(v10 - 9) > 1 )
    {
      VIDMM_RECYCLE_HEAP_MGR::AddToDecommitDebounce(*(VIDMM_RECYCLE_HEAP_MGR **)(*(_QWORD *)(v9 + 32) + 8LL), this);
      VIDMM_RECYCLE_HEAP::ShiftTreeMembershipOnDebouncedStateChange(
        *(VIDMM_RECYCLE_HEAP **)(*((_QWORD *)this + 9) + 32LL),
        this);
      v8 = 5LL;
      goto LABEL_6;
    }
    goto LABEL_12;
  }
  v12 = -1;
  v13 = 0LL;
  if ( (qword_140081010 & 2) != 0 )
  {
    v14 = 1;
    v12 = 8001;
    if ( (byte_140081242 & 1) != 0 )
      McTemplateK0q_EtwWriteTransfer();
  }
  else
  {
    v14 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry();
  v7 = VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW::UnlockRange(
         (VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW *)(*((_QWORD *)this + 9) + 88LL),
         *((_QWORD *)this + 4),
         *((_QWORD *)this + 5));
  if ( v7 >= 0 )
  {
    v8 = 1LL;
LABEL_6:
    VIDMM_RECYCLE_RANGE::Transition(this, v8);
LABEL_13:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v12);
    if ( v14 )
    {
      if ( (byte_140081242 & 1) != 0 )
        McTemplateK0q_EtwWriteTransfer();
    }
    return 0LL;
  }
LABEL_19:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v12);
  if ( v14 && (byte_140081242 & 1) != 0 )
    McTemplateK0q_EtwWriteTransfer();
  return (unsigned int)v7;
}
