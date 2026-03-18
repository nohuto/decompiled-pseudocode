/*
 * XREFs of ??1VIDMM_GLOBAL_ALLOC@@QEAA@XZ @ 0x1400F8510
 * Callers:
 *     ??_GVIDMM_GLOBAL_ALLOC@@QEAAPEAXI@Z @ 0x140039A08 (--_GVIDMM_GLOBAL_ALLOC@@QEAAPEAXI@Z.c)
 * Callees:
 *     ??1DXGFASTMUTEX@@QEAA@XZ @ 0x140047D90 (--1DXGFASTMUTEX@@QEAA@XZ.c)
 *     ?UncommitParavirtualizedAllocationOnHost@@YAXPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x1400964F0 (-UncommitParavirtualizedAllocationOnHost@@YAXPEAUVIDMM_GLOBAL_ALLOC@@@Z.c)
 *     UnlockParavirtualizedAllocationOnHost @ 0x14009653C (UnlockParavirtualizedAllocationOnHost.c)
 */

void __fastcall VIDMM_GLOBAL_ALLOC::~VIDMM_GLOBAL_ALLOC(VIDMM_GLOBAL_ALLOC *this)
{
  int v1; // eax

  v1 = *((_DWORD *)this + 7);
  if ( (v1 & 0x4000) != 0 )
  {
    UnlockParavirtualizedAllocationOnHost((__int64)this);
    UncommitParavirtualizedAllocationOnHost(this);
  }
  else if ( (v1 & 0x10000) != 0 && *((_DWORD *)this + 108) )
  {
    ExFreePoolWithTag(*((PVOID *)this + 53), 0);
    *((_DWORD *)this + 108) = 0;
    *((_QWORD *)this + 53) = 0LL;
  }
  DXGFASTMUTEX::~DXGFASTMUTEX((VIDMM_GLOBAL_ALLOC *)((char *)this + 136));
}
