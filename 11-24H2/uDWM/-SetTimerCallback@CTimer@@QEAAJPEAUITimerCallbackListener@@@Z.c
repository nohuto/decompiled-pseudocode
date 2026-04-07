/*
 * XREFs of ?SetTimerCallback@CTimer@@QEAAJPEAUITimerCallbackListener@@@Z @ 0x18007E394
 * Callers:
 *     ?_SetTimer@CAnimationClock@@AEAAJK@Z @ 0x1800337C0 (-_SetTimer@CAnimationClock@@AEAAJK@Z.c)
 *     ??1CAnimationClock@@UEAA@XZ @ 0x180070188 (--1CAnimationClock@@UEAA@XZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CTimer::SetTimerCallback(CTimer *this, struct ITimerCallbackListener *a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbx
  unsigned int v5; // edi

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 16);
  v5 = -2147019886;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
  if ( !*((_QWORD *)this + 8) || !a2 )
  {
    *((_QWORD *)this + 8) = a2;
    v5 = 0;
  }
  if ( v2 )
    LeaveCriticalSection(v2);
  return v5;
}
