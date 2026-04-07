/*
 * XREFs of ?SetEventCallback@CAnimationClock@@QEAAJPEAUIAnimationClockEventListener@@@Z @ 0x180013308
 * Callers:
 *     ?OnCreateAnimationClock@CAnimationClockCoordinator@@QEAAJU_GUID@@K@Z @ 0x180013164 (-OnCreateAnimationClock@CAnimationClockCoordinator@@QEAAJU_GUID@@K@Z.c)
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18003CB74 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 */

__int64 __fastcall CAnimationClock::SetEventCallback(CAnimationClock *this, struct IAnimationClockEventListener *a2)
{
  unsigned int v4; // ebx
  char *v6; // [rsp+30h] [rbp+8h] BYREF

  v6 = (char *)this + 24;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 24));
  v4 = -2147019873;
  if ( !*((_QWORD *)this + 9) || !a2 )
  {
    *((_QWORD *)this + 9) = a2;
    v4 = 0;
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v6);
  return v4;
}
