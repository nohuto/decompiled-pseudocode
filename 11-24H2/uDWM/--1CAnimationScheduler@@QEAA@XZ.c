/*
 * XREFs of ??1CAnimationScheduler@@QEAA@XZ @ 0x1800A8188
 * Callers:
 *     ??1CDesktopManager@@EEAA@XZ @ 0x1800B84E0 (--1CDesktopManager@@EEAA@XZ.c)
 * Callees:
 *     ?StopTrackingAllWindows@CWindowPropertyTracker@@QEAAXXZ @ 0x180043B1C (-StopTrackingAllWindows@CWindowPropertyTracker@@QEAAXXZ.c)
 *     ?Release@CStoryboard@@QEAAKXZ @ 0x18004721C (-Release@CStoryboard@@QEAAKXZ.c)
 *     ??1CWindowPropertyTracker@@QEAA@XZ @ 0x1800A8200 (--1CWindowPropertyTracker@@QEAA@XZ.c)
 */

void __fastcall CAnimationScheduler::~CAnimationScheduler(CAnimationScheduler *this)
{
  __int64 i; // rdi
  CStoryboard *v3; // rcx

  *(_QWORD *)this = &CAnimationScheduler::`vftable'{for `IAnimationListener'};
  *((_QWORD *)this + 1) = &CAnimationScheduler::`vftable'{for `IAnimationClockEventListener'};
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 10); i = (unsigned int)(i + 1) )
  {
    v3 = *(CStoryboard **)(*((_QWORD *)this + 2) + 8 * i);
    if ( v3 )
      CStoryboard::Release(v3);
  }
  CWindowPropertyTracker::StopTrackingAllWindows((CAnimationScheduler *)((char *)this + 48));
  CWindowPropertyTracker::~CWindowPropertyTracker((CAnimationScheduler *)((char *)this + 48));
  DynArrayImpl<0>::~DynArrayImpl<0>((void **)this + 2);
}
