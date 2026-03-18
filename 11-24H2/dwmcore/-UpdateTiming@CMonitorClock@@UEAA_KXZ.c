/*
 * XREFs of ?UpdateTiming@CMonitorClock@@UEAA_KXZ @ 0x180242DA0
 * Callers:
 *     ?ProcessComposition@CComposition@@QEAAXXZ @ 0x1800817A0 (-ProcessComposition@CComposition@@QEAAXXZ.c)
 * Callees:
 *     ?GetLastMonitorTime@CDDisplayRenderTarget@@UEAA_NPEAVMonitorTime@@0_N@Z @ 0x180104220 (-GetLastMonitorTime@CDDisplayRenderTarget@@UEAA_NPEAVMonitorTime@@0_N@Z.c)
 *     ?GetLastMonitorTime@CLegacyRenderTarget@@UEAA_NPEAVMonitorTime@@0_N@Z @ 0x180105C80 (-GetLastMonitorTime@CLegacyRenderTarget@@UEAA_NPEAVMonitorTime@@0_N@Z.c)
 *     ?UpdateParallelMode@CMonitorClock@@IEAAXXZ @ 0x1801D7C7C (-UpdateParallelMode@CMonitorClock@@IEAAXXZ.c)
 *     ?EnsureForwardTiming@CClockBase@@IEAAX_K@Z @ 0x18022FEE0 (-EnsureForwardTiming@CClockBase@@IEAAX_K@Z.c)
 *     ?GetCurrentTime@CClockBase@@IEBA_KXZ @ 0x180242EE4 (-GetCurrentTime@CClockBase@@IEBA_KXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

unsigned __int64 __fastcall CMonitorClock::UpdateTiming(CLegacyRenderTarget **this)
{
  struct MonitorTime *v2; // rdi
  unsigned __int64 CurrentTime; // rsi
  CLegacyRenderTarget *v4; // rcx
  __int64 v5; // r9
  bool (__fastcall *v6)(CDDisplayRenderTarget *, struct MonitorTime *, struct MonitorTime *, char); // rax
  bool LastMonitorTime; // al
  struct MonitorTime *v8; // rdx
  CMonitorClock *v9; // rcx
  LONGLONG v10; // rbp
  LARGE_INTEGER v11; // rcx
  CLegacyRenderTarget *v12; // rdi
  CLegacyRenderTarget *v13; // rdx
  LONGLONG v14; // r8
  _QWORD v16[2]; // [rsp+30h] [rbp-28h] BYREF
  int v17; // [rsp+40h] [rbp-18h]
  LARGE_INTEGER PerformanceCount; // [rsp+60h] [rbp+8h] BYREF

  v16[0] = 0LL;
  v2 = (struct MonitorTime *)(this + 11);
  v16[1] = 0LL;
  v17 = 0;
  CurrentTime = CClockBase::GetCurrentTime((CClockBase *)this);
  v4 = this[10];
  LOBYTE(v5) = 1;
  v6 = *(bool (__fastcall **)(CDDisplayRenderTarget *, struct MonitorTime *, struct MonitorTime *, char))(*(_QWORD *)v4 + 216LL);
  if ( v6 == CLegacyRenderTarget::GetLastMonitorTime )
  {
    LastMonitorTime = CLegacyRenderTarget::GetLastMonitorTime(v4, v2, (struct MonitorTime *)v16, 1);
  }
  else
  {
    v8 = (struct MonitorTime *)(this + 11);
    if ( v6 == CDDisplayRenderTarget::GetLastMonitorTime )
      LastMonitorTime = CDDisplayRenderTarget::GetLastMonitorTime(v4, v8, (struct MonitorTime *)v16, 1);
    else
      LastMonitorTime = v6(v4, v8, (struct MonitorTime *)v16, v5);
  }
  v9 = (CMonitorClock *)this;
  if ( LastMonitorTime )
  {
    this[3] = this[12];
    CMonitorClock::UpdateParallelMode((CMonitorClock *)this);
    v10 = *(_QWORD *)v2;
    v11.QuadPart = CurrentTime;
    v12 = this[12];
    PerformanceCount.QuadPart = CurrentTime;
    if ( !CurrentTime )
    {
      QueryPerformanceCounter(&PerformanceCount);
      v11 = PerformanceCount;
    }
    if ( (unsigned __int64)v12 + v10 < v11.QuadPart )
      v10 = v11.QuadPart - (v11.QuadPart - v10) % (unsigned __int64)v12;
    v13 = this[3];
    v9 = (CMonitorClock *)this;
    v14 = v10 + (_QWORD)v13 * ((*((_BYTE *)this + 72) != 0) + 1LL);
  }
  else
  {
    *(_QWORD *)v2 = 0LL;
    *((_DWORD *)this + 26) = 0;
    this[12] = 0LL;
    v13 = this[3];
    v14 = (LONGLONG)v13 + CurrentTime;
  }
  *((_QWORD *)v9 + 2) = v14;
  this[4] = (CLegacyRenderTarget *)(v14 + ((unsigned __int64)v13 >> 1));
  CClockBase::EnsureForwardTiming((CClockBase *)this, CurrentTime);
  return CurrentTime;
}
