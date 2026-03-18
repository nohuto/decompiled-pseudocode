/*
 * XREFs of ?UpdateTiming@CMonitorClock@@UEAA_KXZ @ 0x180249B00
 * Callers:
 *     ?ProcessComposition@CComposition@@QEAAXXZ @ 0x1800E6E20 (-ProcessComposition@CComposition@@QEAAXXZ.c)
 * Callees:
 *     ?GetLastMonitorTime@CDDisplayRenderTarget@@UEAA_NPEAVMonitorTime@@0_N@Z @ 0x18013FE60 (-GetLastMonitorTime@CDDisplayRenderTarget@@UEAA_NPEAVMonitorTime@@0_N@Z.c)
 *     ?GetLastMonitorTime@CLegacyRenderTarget@@UEAA_NPEAVMonitorTime@@0_N@Z @ 0x1801418C0 (-GetLastMonitorTime@CLegacyRenderTarget@@UEAA_NPEAVMonitorTime@@0_N@Z.c)
 *     ?UpdateParallelMode@CMonitorClock@@IEAAXXZ @ 0x1801E3C40 (-UpdateParallelMode@CMonitorClock@@IEAAXXZ.c)
 *     ?GetCurrentTime@CClockBase@@IEBA_KXZ @ 0x180249D2C (-GetCurrentTime@CClockBase@@IEBA_KXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_AllowTimeTravel@@@details@wil@@QEAA_NXZ @ 0x180249DB0 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_AllowTimeTravel@@@details@wil@@QE.c)
 *     ModuleFailFastForHRESULT @ 0x18024A244 (ModuleFailFastForHRESULT.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

LARGE_INTEGER __fastcall CMonitorClock::UpdateTiming(CMonitorClock *this)
{
  LONGLONG *v2; // rsi
  LARGE_INTEGER v3; // rdi
  CLegacyRenderTarget *v4; // rcx
  __int64 v5; // r9
  bool (__fastcall *v6)(CDDisplayRenderTarget *, struct MonitorTime *, struct MonitorTime *, char); // rax
  bool LastMonitorTime; // al
  struct MonitorTime *v8; // rdx
  LONGLONG v9; // rbp
  LARGE_INTEGER v10; // rcx
  unsigned __int64 v11; // rsi
  unsigned __int64 v12; // rcx
  LONGLONG v13; // rdx
  char IsEnabled; // al
  LARGE_INTEGER v15; // r8
  unsigned __int64 v16; // rdx
  LARGE_INTEGER v17; // rcx
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  __int64 v21; // rax
  _QWORD v23[2]; // [rsp+30h] [rbp-28h] BYREF
  int v24; // [rsp+40h] [rbp-18h]
  void *retaddr; // [rsp+58h] [rbp+0h]
  LARGE_INTEGER PerformanceCount; // [rsp+60h] [rbp+8h] BYREF

  v23[0] = 0LL;
  v2 = (LONGLONG *)((char *)this + 88);
  v23[1] = 0LL;
  v24 = 0;
  v3.QuadPart = CClockBase::GetCurrentTime(this);
  v4 = (CLegacyRenderTarget *)*((_QWORD *)this + 10);
  LOBYTE(v5) = 1;
  v6 = *(bool (__fastcall **)(CDDisplayRenderTarget *, struct MonitorTime *, struct MonitorTime *, char))(*(_QWORD *)v4 + 216LL);
  if ( v6 == CLegacyRenderTarget::GetLastMonitorTime )
  {
    LastMonitorTime = CLegacyRenderTarget::GetLastMonitorTime(
                        v4,
                        (CMonitorClock *)((char *)this + 88),
                        (struct MonitorTime *)v23,
                        1);
  }
  else
  {
    v8 = (CMonitorClock *)((char *)this + 88);
    if ( v6 == CDDisplayRenderTarget::GetLastMonitorTime )
      LastMonitorTime = CDDisplayRenderTarget::GetLastMonitorTime(v4, v8, (struct MonitorTime *)v23, 1);
    else
      LastMonitorTime = v6(v4, v8, (struct MonitorTime *)v23, v5);
  }
  if ( LastMonitorTime )
  {
    *((_QWORD *)this + 3) = *((_QWORD *)this + 12);
    CMonitorClock::UpdateParallelMode(this);
    v9 = *v2;
    v10 = v3;
    v11 = *((_QWORD *)this + 12);
    PerformanceCount = v3;
    if ( !v3.QuadPart )
    {
      QueryPerformanceCounter(&PerformanceCount);
      v10 = PerformanceCount;
    }
    if ( v11 + v9 < v10.QuadPart )
      v9 = v10.QuadPart - (v10.QuadPart - v9) % v11;
    v12 = *((_QWORD *)this + 3);
    v13 = v9 + v12 * ((*((_BYTE *)this + 72) != 0) + 1LL);
  }
  else
  {
    *v2 = 0LL;
    *((_DWORD *)this + 26) = 0;
    *((_QWORD *)this + 12) = 0LL;
    v12 = *((_QWORD *)this + 3);
    v13 = v12 + v3.QuadPart;
  }
  *((_QWORD *)this + 2) = v13;
  *((_QWORD *)this + 4) = v13 + (v12 >> 1);
  IsEnabled = wil::details::FeatureImpl<__WilFeatureTraits_Feature_AllowTimeTravel>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_AllowTimeTravel>::GetImpl'::`2'::impl);
  v15 = *(LARGE_INTEGER *)((char *)this + 16);
  if ( IsEnabled )
  {
    if ( v15.QuadPart < (unsigned __int64)v3.QuadPart )
      ModuleFailFastForHRESULT(-2147023498, retaddr);
  }
  else if ( v15.QuadPart < (unsigned __int64)v3.QuadPart || v3.QuadPart < CClockBase::s_prevClockSetTime )
  {
    ModuleFailFastForHRESULT(-2003304438, retaddr);
  }
  if ( *(&CClockBase::s_prevClock + 1) )
  {
    v16 = *((_QWORD *)this + 3);
    v17.QuadPart = *(&CClockBase::s_prevClock + 1) < v16
                 ? v16 - *(&CClockBase::s_prevClock + 1)
                 : *(&CClockBase::s_prevClock + 1) - v16;
    if ( v17.QuadPart > (unsigned __int64)g_qpcFrequency.QuadPart )
      ModuleFailFastForHRESULT(-2003303168, retaddr);
  }
  if ( v15.QuadPart < CClockBase::s_prevClock )
  {
    if ( CClockBase::s_prevClock - v15.QuadPart >= (unsigned __int64)g_qpcFrequency.QuadPart )
      ModuleFailFastForHRESULT(-2003304293, retaddr);
    v21 = CClockBase::s_prevClock + (*((_QWORD *)this + 3) >> 1);
    *((_QWORD *)this + 2) = CClockBase::s_prevClock;
    *((_QWORD *)this + 4) = v21;
  }
  else
  {
    v18 = *((_OWORD *)this + 1);
    CClockBase::s_prevClockSetTime = v3.QuadPart;
    v19 = *((_OWORD *)this + 2);
    CClockBase::s_prevClock = v18;
    v20 = *((_OWORD *)this + 3);
    xmmword_180406DF0 = v19;
    *(_QWORD *)&v19 = *((_QWORD *)this + 8);
    xmmword_180406E00 = v20;
    qword_180406E10 = v19;
  }
  return v3;
}
