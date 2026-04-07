/*
 * XREFs of ?SetEventCallback@CAnimationClockCoordinator@@QEAAJPEAUIAnimationClockEventListener@@@Z @ 0x1800274E0
 * Callers:
 *     ?Initialize@CDesktopManager@@AEAAJPEAUIUnknown@@@Z @ 0x1800264FC (-Initialize@CDesktopManager@@AEAAJPEAUIUnknown@@@Z.c)
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18003CB74 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 */

__int64 __fastcall CAnimationClockCoordinator::SetEventCallback(
        CAnimationClockCoordinator *this,
        struct IAnimationClockEventListener *a2)
{
  unsigned int v4; // ebx
  char *v6; // [rsp+30h] [rbp+8h] BYREF

  v6 = (char *)this + 8;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 8));
  v4 = -2147019886;
  if ( !*((_QWORD *)this + 6) || !a2 )
  {
    *((_QWORD *)this + 6) = a2;
    v4 = 0;
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v6);
  return v4;
}
