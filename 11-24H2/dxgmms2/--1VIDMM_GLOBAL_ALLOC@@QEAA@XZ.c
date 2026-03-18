/*
 * XREFs of ??1VIDMM_GLOBAL_ALLOC@@QEAA@XZ @ 0x1400F5BA4
 * Callers:
 *     ??_GVIDMM_GLOBAL_ALLOC@@QEAAPEAXI@Z @ 0x140038698 (--_GVIDMM_GLOBAL_ALLOC@@QEAAPEAXI@Z.c)
 * Callees:
 *     ??1DXGFASTMUTEX@@QEAA@XZ @ 0x140045FD0 (--1DXGFASTMUTEX@@QEAA@XZ.c)
 *     ?UncommitParavirtualizedAllocationOnHost@@YAXPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x140096620 (-UncommitParavirtualizedAllocationOnHost@@YAXPEAUVIDMM_GLOBAL_ALLOC@@@Z.c)
 *     UnlockParavirtualizedAllocationOnHost @ 0x14009666C (UnlockParavirtualizedAllocationOnHost.c)
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
  else if ( (v1 & 0x10000) != 0 && *((_DWORD *)this + 112) )
  {
    ExFreePoolWithTag(*((PVOID *)this + 55), 0);
    *((_DWORD *)this + 112) = 0;
    *((_QWORD *)this + 55) = 0LL;
  }
  DXGFASTMUTEX::~DXGFASTMUTEX((VIDMM_GLOBAL_ALLOC *)((char *)this + 136));
}
