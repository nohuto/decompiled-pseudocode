/*
 * XREFs of ?EnsureForwardTiming@CClockBase@@IEAAX_K@Z @ 0x18022FEE0
 * Callers:
 *     ?UpdateTiming@CDefaultClock@@UEAA_KXZ @ 0x180242D50 (-UpdateTiming@CDefaultClock@@UEAA_KXZ.c)
 *     ?UpdateTiming@CMonitorClock@@UEAA_KXZ @ 0x180242DA0 (-UpdateTiming@CMonitorClock@@UEAA_KXZ.c)
 * Callees:
 *     ModuleFailFastForHRESULT @ 0x18024634C (ModuleFailFastForHRESULT.c)
 */

void __fastcall CClockBase::EnsureForwardTiming(CClockBase *this, unsigned __int64 a2)
{
  unsigned __int64 v4; // rdx
  LARGE_INTEGER v5; // rcx
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  __int64 v9; // rax
  void *retaddr; // [rsp+28h] [rbp+0h]

  if ( *((_QWORD *)this + 2) < a2 )
    ModuleFailFastForHRESULT(-2147023498, retaddr);
  if ( *(&CClockBase::s_prevClock + 1) )
  {
    v4 = *((_QWORD *)this + 3);
    v5.QuadPart = *(&CClockBase::s_prevClock + 1) < v4
                ? v4 - *(&CClockBase::s_prevClock + 1)
                : *(&CClockBase::s_prevClock + 1) - v4;
    if ( v5.QuadPart > (unsigned __int64)g_qpcFrequency.QuadPart )
      ModuleFailFastForHRESULT(-2003303168, retaddr);
  }
  if ( *((_QWORD *)this + 2) < CClockBase::s_prevClock )
  {
    if ( CClockBase::s_prevClock - *((_QWORD *)this + 2) >= g_qpcFrequency.QuadPart )
      ModuleFailFastForHRESULT(-2003304293, retaddr);
    v9 = CClockBase::s_prevClock + (*((_QWORD *)this + 3) >> 1);
    *((_QWORD *)this + 2) = CClockBase::s_prevClock;
    *((_QWORD *)this + 4) = v9;
  }
  else
  {
    v6 = *((_OWORD *)this + 1);
    CClockBase::s_prevClockSetTime = a2;
    v7 = *((_OWORD *)this + 2);
    CClockBase::s_prevClock = v6;
    v8 = *((_OWORD *)this + 3);
    xmmword_1803FADC8 = v7;
    *(_QWORD *)&v7 = *((_QWORD *)this + 8);
    xmmword_1803FADD8 = v8;
    qword_1803FADE8 = v7;
  }
}
