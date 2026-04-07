/*
 * XREFs of ??0CAnimationClockCoordinator@@QEAA@XZ @ 0x180027058
 * Callers:
 *     ?Initialize@CDesktopManager@@AEAAJPEAUIUnknown@@@Z @ 0x1800264FC (-Initialize@CDesktopManager@@AEAAJPEAUIUnknown@@@Z.c)
 * Callees:
 *     <none>
 */

CAnimationClockCoordinator *__fastcall CAnimationClockCoordinator::CAnimationClockCoordinator(
        CAnimationClockCoordinator *this)
{
  *(_QWORD *)this = &CAnimationClockCoordinator::`vftable';
  InitializeCriticalSection((LPCRITICAL_SECTION)((char *)this + 8));
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_DWORD *)this + 20) = 0;
  return this;
}
