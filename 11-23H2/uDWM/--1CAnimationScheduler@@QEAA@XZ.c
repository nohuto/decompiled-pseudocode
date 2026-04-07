/*
 * XREFs of ??1CAnimationScheduler@@QEAA@XZ @ 0x1800ABE88
 * Callers:
 *     ??1CDesktopManager@@EEAA@XZ @ 0x1800B36AC (--1CDesktopManager@@EEAA@XZ.c)
 * Callees:
 *     ?Release@CStoryboard@@QEAAKXZ @ 0x180014624 (-Release@CStoryboard@@QEAAKXZ.c)
 *     ?StopTrackingAllWindows@CWindowPropertyTracker@@QEAAXXZ @ 0x18002DAA4 (-StopTrackingAllWindows@CWindowPropertyTracker@@QEAAXXZ.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180050D7C (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CAnimationScheduler::~CAnimationScheduler(CAnimationScheduler *this)
{
  __int64 i; // rbx
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
  CWindowPropertyTracker::StopTrackingAllWindows((CAnimationScheduler *)((char *)this + 48));
  DynArrayImpl<0>::~DynArrayImpl<0>((_QWORD *)this + 6);
  DynArrayImpl<0>::~DynArrayImpl<0>((_QWORD *)this + 2);
}
