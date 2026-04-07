/*
 * XREFs of ??0CAnimationClock@@QEAA@XZ @ 0x180059364
 * Callers:
 *     ?Create@CAnimationClockFactory@@SAJU_GUID@@PEAPEAVCAnimationClock@@@Z @ 0x180058F64 (-Create@CAnimationClockFactory@@SAJU_GUID@@PEAPEAVCAnimationClock@@@Z.c)
 * Callees:
 *     ??0CBaseObject@@QEAA@XZ @ 0x180026794 (--0CBaseObject@@QEAA@XZ.c)
 */

CAnimationClock *__fastcall CAnimationClock::CAnimationClock(CAnimationClock *this)
{
  CAnimationClock *result; // rax

  CBaseObject::CBaseObject(this);
  *(_QWORD *)this = &CAnimationClock::`vftable'{for `CBaseObject'};
  *((_QWORD *)this + 2) = &CAnimationClock::`vftable'{for `ITimerCallbackListener'};
  InitializeCriticalSection((LPCRITICAL_SECTION)((char *)this + 24));
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_DWORD *)this + 20) = 0;
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  *((_DWORD *)this + 34) = -1;
  *(_QWORD *)((char *)this + 140) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  result = this;
  *(GUID *)((char *)this + 120) = GUID_NULL;
  return result;
}
