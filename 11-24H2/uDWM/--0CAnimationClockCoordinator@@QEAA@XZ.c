/*
 * XREFs of ??0CAnimationClockCoordinator@@QEAA@XZ @ 0x180085BD8
 * Callers:
 *     ?Initialize@CDesktopManager@@AEAAJPEAUIUnknown@@@Z @ 0x18007FA54 (-Initialize@CDesktopManager@@AEAAJPEAUIUnknown@@@Z.c)
 * Callees:
 *     ??0?$DynArrayImpl@$0A@@@IEAA@PEAXIII@Z @ 0x180026FB0 (--0-$DynArrayImpl@$0A@@@IEAA@PEAXIII@Z.c)
 */

CAnimationClockCoordinator *__fastcall CAnimationClockCoordinator::CAnimationClockCoordinator(
        CAnimationClockCoordinator *this)
{
  *(_QWORD *)this = &CAnimationClockCoordinator::`vftable';
  InitializeCriticalSection((LPCRITICAL_SECTION)((char *)this + 8));
  *((_QWORD *)this + 6) = 0LL;
  DynArrayImpl<0>::DynArrayImpl<0>((__int64)this + 56, 0LL, 0);
  return this;
}
