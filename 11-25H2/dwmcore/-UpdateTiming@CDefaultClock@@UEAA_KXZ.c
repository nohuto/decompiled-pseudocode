/*
 * XREFs of ?UpdateTiming@CDefaultClock@@UEAA_KXZ @ 0x180249AB0
 * Callers:
 *     <none>
 * Callees:
 *     ?EnsureForwardTiming@CClockBase@@IEAAX_K@Z @ 0x1801F6690 (-EnsureForwardTiming@CClockBase@@IEAAX_K@Z.c)
 *     ?GetCurrentTime@CClockBase@@IEBA_KXZ @ 0x180249D2C (-GetCurrentTime@CClockBase@@IEBA_KXZ.c)
 */

unsigned __int64 __fastcall CDefaultClock::UpdateTiming(CDefaultClock *this)
{
  unsigned __int64 CurrentTime; // rax
  unsigned __int64 v3; // r8
  unsigned __int64 v4; // rbx

  CurrentTime = CClockBase::GetCurrentTime(this);
  v3 = *((_QWORD *)this + 3);
  v4 = CurrentTime;
  *((_QWORD *)this + 2) = v3 + CurrentTime;
  *((_QWORD *)this + 4) = v3 + CurrentTime + (v3 >> 1);
  CClockBase::EnsureForwardTiming(this, CurrentTime);
  return v4;
}
