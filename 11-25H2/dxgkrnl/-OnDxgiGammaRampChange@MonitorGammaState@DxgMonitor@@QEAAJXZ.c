/*
 * XREFs of ?OnDxgiGammaRampChange@MonitorGammaState@DxgMonitor@@QEAAJXZ @ 0x1402D87C0
 * Callers:
 *     ?MonitorNotifyDXGIGammaRampChange@@YAJPEAXI@Z @ 0x1402D78FC (-MonitorNotifyDXGIGammaRampChange@@YAJPEAXI@Z.c)
 * Callees:
 *     ?Initialize@DXGK_GAMMA_RAMP@@QEAAJAEBU_D3DKMDT_GAMMA_RAMP@@@Z @ 0x140012D10 (-Initialize@DXGK_GAMMA_RAMP@@QEAAJAEBU_D3DKMDT_GAMMA_RAMP@@@Z.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x14001B3E0 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x14002CD80 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??0MUTEX_LOCK@@QEAA@AEAVDXGFASTMUTEX@@@Z @ 0x14002F83C (--0MUTEX_LOCK@@QEAA@AEAVDXGFASTMUTEX@@@Z.c)
 *     ??1MUTEX_LOCK@@QEAA@XZ @ 0x140034DA0 (--1MUTEX_LOCK@@QEAA@XZ.c)
 *     ?put@?$auto_rc@UDXGK_GAMMA_RAMP@@@@QEAAPEAPEAUDXGK_GAMMA_RAMP@@XZ @ 0x140054D14 (-put@-$auto_rc@UDXGK_GAMMA_RAMP@@@@QEAAPEAPEAUDXGK_GAMMA_RAMP@@XZ.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 *     ?_GetMostCapableColorSpaceTransform@MonitorGammaState@DxgMonitor@@AEBAJAEAW4_D3DDDI_GAMMARAMP_TYPE@@@Z @ 0x1402D89D0 (-_GetMostCapableColorSpaceTransform@MonitorGammaState@DxgMonitor@@AEBAJAEAW4_D3DDDI_GAMMARAMP_TY.c)
 *     ?_CombineDXGIGammaRamp@MonitorGammaState@DxgMonitor@@AEBAJPEBUDXGK_GAMMA_RAMP@@PEAPEAU3@@Z @ 0x1402D8A30 (-_CombineDXGIGammaRamp@MonitorGammaState@DxgMonitor@@AEBAJPEBUDXGK_GAMMA_RAMP@@PEAPEAU3@@Z.c)
 */

__int64 __fastcall DxgMonitor::MonitorGammaState::OnDxgiGammaRampChange(DxgMonitor::MonitorGammaState *this)
{
  const struct DXGK_GAMMA_RAMP *v1; // rbx
  int MostCapableColorSpaceTransform; // eax
  int v4; // esi
  __int64 v5; // r9
  __int64 v6; // rax
  struct DXGK_GAMMA_RAMP **v7; // rax
  __int64 v8; // rax
  unsigned int v9; // edi
  ReferenceCounted *v11; // rcx
  enum _D3DDDI_GAMMARAMP_TYPE v12; // [rsp+58h] [rbp+28h] BYREF
  ReferenceCounted *v13; // [rsp+60h] [rbp+30h] BYREF
  char v14; // [rsp+68h] [rbp+38h] BYREF

  v12 = D3DDDI_GAMMARAMP_UNINITIALIZED;
  v1 = 0LL;
  v13 = 0LL;
  MostCapableColorSpaceTransform = DxgMonitor::MonitorGammaState::_GetMostCapableColorSpaceTransform(this, &v12);
  v4 = MostCapableColorSpaceTransform;
  if ( MostCapableColorSpaceTransform < 0 )
  {
    WdLogSingleEntry1(3LL, MostCapableColorSpaceTransform);
    v11 = v13;
    WdLogGlobalForLineNumber = 686;
    if ( v13 )
LABEL_18:
      ReferenceCounted::Release(v11);
    return (unsigned int)v4;
  }
  if ( !*((_QWORD *)this + 18) )
  {
LABEL_5:
    v7 = (struct DXGK_GAMMA_RAMP **)auto_rc<DXGK_GAMMA_RAMP>::put(&v13);
    v4 = DxgMonitor::MonitorGammaState::_CombineDXGIGammaRamp(this, v1, v7);
    if ( v4 >= 0 )
    {
      if ( !v13 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 721;
      }
      v8 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)this + 24LL))(*(_QWORD *)this);
      v9 = (*(__int64 (__fastcall **)(__int64, ReferenceCounted *))(*(_QWORD *)v8 + 96LL))(v8, v13);
      if ( v13 )
        ReferenceCounted::Release(v13);
      v13 = 0LL;
      if ( v1 )
        ReferenceCounted::Release(v1);
      return v9;
    }
    WdLogSingleEntry0(3LL);
    WdLogGlobalForLineNumber = 716;
    if ( v13 )
      ReferenceCounted::Release(v13);
    v13 = 0LL;
    if ( v1 )
    {
      v11 = v1;
      goto LABEL_18;
    }
    return (unsigned int)v4;
  }
  MUTEX_LOCK::MUTEX_LOCK((MUTEX_LOCK *)&v14, (DxgMonitor::MonitorGammaState *)((char *)this + 96));
  v6 = operator new(0x30uLL, 0x4D677844u, 256LL, v5);
  v1 = (const struct DXGK_GAMMA_RAMP *)v6;
  if ( v6 )
  {
    *(_WORD *)(v6 + 40) = 0;
    *(_QWORD *)(v6 + 24) = 0LL;
    *(_QWORD *)(v6 + 32) = 0LL;
    *(_QWORD *)v6 = &rc_buffer<DispBroker::AlpcRequest<7>>::`vftable';
    *(_QWORD *)v6 = &DXGK_GAMMA_RAMP::`vftable';
    *(_DWORD *)(v6 + 8) = 1;
    *(_DWORD *)(v6 + 16) = 1;
    DXGK_GAMMA_RAMP::Initialize(
      (DXGK_GAMMA_RAMP *)v6,
      (const struct _D3DKMDT_GAMMA_RAMP *)(*((_QWORD *)this + 18) + 16LL));
    MUTEX_LOCK::~MUTEX_LOCK((MUTEX_LOCK *)&v14);
    goto LABEL_5;
  }
  WdLogSingleEntry0(6LL);
  WdLogGlobalForLineNumber = 702;
  MUTEX_LOCK::~MUTEX_LOCK((MUTEX_LOCK *)&v14);
  if ( v13 )
    ReferenceCounted::Release(v13);
  return 3221225495LL;
}
