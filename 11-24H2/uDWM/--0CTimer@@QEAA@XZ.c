/*
 * XREFs of ??0CTimer@@QEAA@XZ @ 0x180083BA8
 * Callers:
 *     ?_SetTimer@CAnimationClock@@AEAAJK@Z @ 0x1800337C0 (-_SetTimer@CAnimationClock@@AEAAJK@Z.c)
 * Callees:
 *     ??0CBaseObject@@QEAA@XZ @ 0x180026794 (--0CBaseObject@@QEAA@XZ.c)
 */

CTimer *__fastcall CTimer::CTimer(CTimer *this)
{
  CBaseObject::CBaseObject(this);
  *(_QWORD *)this = &CTimer::`vftable';
  InitializeCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_DWORD *)this + 18) = 0;
  return this;
}
