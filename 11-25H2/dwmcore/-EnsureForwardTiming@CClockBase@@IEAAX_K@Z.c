/*
 * XREFs of ?EnsureForwardTiming@CClockBase@@IEAAX_K@Z @ 0x1801F6690
 * Callers:
 *     ?UpdateTiming@CDefaultClock@@UEAA_KXZ @ 0x180249AB0 (-UpdateTiming@CDefaultClock@@UEAA_KXZ.c)
 * Callees:
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_AllowTimeTravel@@@details@wil@@QEAA_NXZ @ 0x180249DB0 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_AllowTimeTravel@@@details@wil@@QE.c)
 *     ModuleFailFastForHRESULT @ 0x18024A244 (ModuleFailFastForHRESULT.c)
 */

void __fastcall CClockBase::EnsureForwardTiming(CClockBase *this, unsigned __int64 a2)
{
  char IsEnabled; // al
  unsigned __int64 v5; // r8
  unsigned __int64 v6; // rdx
  LARGE_INTEGER v7; // rcx
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int64 v11; // rax
  void *retaddr; // [rsp+28h] [rbp+0h]

  IsEnabled = wil::details::FeatureImpl<__WilFeatureTraits_Feature_AllowTimeTravel>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_AllowTimeTravel>::GetImpl'::`2'::impl);
  v5 = *((_QWORD *)this + 2);
  if ( IsEnabled )
  {
    if ( v5 < a2 )
      ModuleFailFastForHRESULT(-2147023498, retaddr);
  }
  else if ( v5 < a2 || a2 < CClockBase::s_prevClockSetTime )
  {
    ModuleFailFastForHRESULT(-2003304438, retaddr);
  }
  if ( *(&CClockBase::s_prevClock + 1) )
  {
    v6 = *((_QWORD *)this + 3);
    v7.QuadPart = *(&CClockBase::s_prevClock + 1) < v6
                ? v6 - *(&CClockBase::s_prevClock + 1)
                : *(&CClockBase::s_prevClock + 1) - v6;
    if ( v7.QuadPart > (unsigned __int64)g_qpcFrequency.QuadPart )
      ModuleFailFastForHRESULT(-2003303168, retaddr);
  }
  if ( v5 < CClockBase::s_prevClock )
  {
    if ( CClockBase::s_prevClock - v5 >= g_qpcFrequency.QuadPart )
      ModuleFailFastForHRESULT(-2003304293, retaddr);
    v11 = CClockBase::s_prevClock + (*((_QWORD *)this + 3) >> 1);
    *((_QWORD *)this + 2) = CClockBase::s_prevClock;
    *((_QWORD *)this + 4) = v11;
  }
  else
  {
    v8 = *((_OWORD *)this + 1);
    CClockBase::s_prevClockSetTime = a2;
    v9 = *((_OWORD *)this + 2);
    CClockBase::s_prevClock = v8;
    v10 = *((_OWORD *)this + 3);
    xmmword_180406DF0 = v9;
    *(_QWORD *)&v9 = *((_QWORD *)this + 8);
    xmmword_180406E00 = v10;
    qword_180406E10 = v9;
  }
}
