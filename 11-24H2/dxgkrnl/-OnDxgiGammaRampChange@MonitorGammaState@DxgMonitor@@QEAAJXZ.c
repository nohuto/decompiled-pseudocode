/*
 * XREFs of ?OnDxgiGammaRampChange@MonitorGammaState@DxgMonitor@@QEAAJXZ @ 0x1402DF49C
 * Callers:
 *     ?MonitorNotifyDXGIGammaRampChange@@YAJPEAXI@Z @ 0x1402DFBB8 (-MonitorNotifyDXGIGammaRampChange@@YAJPEAXI@Z.c)
 * Callees:
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x14000BE00 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?Initialize@DXGK_GAMMA_RAMP@@QEAAJAEBU_D3DKMDT_GAMMA_RAMP@@@Z @ 0x1400221A0 (-Initialize@DXGK_GAMMA_RAMP@@QEAAJAEBU_D3DKMDT_GAMMA_RAMP@@@Z.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x14002D590 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??0MUTEX_LOCK@@QEAA@AEAVDXGFASTMUTEX@@@Z @ 0x14002FE7C (--0MUTEX_LOCK@@QEAA@AEAVDXGFASTMUTEX@@@Z.c)
 *     ??1MUTEX_LOCK@@QEAA@XZ @ 0x140034CD4 (--1MUTEX_LOCK@@QEAA@XZ.c)
 *     ?put@?$auto_rc@UDXGK_GAMMA_RAMP@@@@QEAAPEAPEAUDXGK_GAMMA_RAMP@@XZ @ 0x140054964 (-put@-$auto_rc@UDXGK_GAMMA_RAMP@@@@QEAAPEAPEAUDXGK_GAMMA_RAMP@@XZ.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 *     ?_CombineDXGIGammaRamp@MonitorGammaState@DxgMonitor@@AEBAJPEBUDXGK_GAMMA_RAMP@@PEAPEAU3@@Z @ 0x1402DEC30 (-_CombineDXGIGammaRamp@MonitorGammaState@DxgMonitor@@AEBAJPEBUDXGK_GAMMA_RAMP@@PEAPEAU3@@Z.c)
 *     ?_GetMostCapableColorSpaceTransform@MonitorGammaState@DxgMonitor@@AEBAJAEAW4_D3DDDI_GAMMARAMP_TYPE@@@Z @ 0x1402DF6AC (-_GetMostCapableColorSpaceTransform@MonitorGammaState@DxgMonitor@@AEBAJAEAW4_D3DDDI_GAMMARAMP_TY.c)
 */

__int64 __fastcall DxgMonitor::MonitorGammaState::OnDxgiGammaRampChange(DxgMonitor::MonitorGammaState *this)
{
  const struct DXGK_GAMMA_RAMP *v1; // rbx
  int MostCapableColorSpaceTransform; // eax
  int v4; // esi
  __int64 v5; // rax
  struct DXGK_GAMMA_RAMP **v6; // rax
  __int64 v7; // rax
  unsigned int v8; // edi
  ReferenceCounted *v10; // rcx
  enum _D3DDDI_GAMMARAMP_TYPE v11; // [rsp+58h] [rbp+28h] BYREF
  ReferenceCounted *v12; // [rsp+60h] [rbp+30h] BYREF
  char v13; // [rsp+68h] [rbp+38h] BYREF

  v11 = D3DDDI_GAMMARAMP_UNINITIALIZED;
  v1 = 0LL;
  v12 = 0LL;
  MostCapableColorSpaceTransform = DxgMonitor::MonitorGammaState::_GetMostCapableColorSpaceTransform(this, &v11);
  v4 = MostCapableColorSpaceTransform;
  if ( MostCapableColorSpaceTransform < 0 )
  {
    WdLogSingleEntry1(3LL, MostCapableColorSpaceTransform);
    v10 = v12;
    WdLogGlobalForLineNumber = 683;
    if ( v12 )
LABEL_18:
      ReferenceCounted::Release(v10);
    return (unsigned int)v4;
  }
  if ( !*((_QWORD *)this + 18) )
  {
LABEL_5:
    v6 = (struct DXGK_GAMMA_RAMP **)auto_rc<DXGK_GAMMA_RAMP>::put(&v12);
    v4 = DxgMonitor::MonitorGammaState::_CombineDXGIGammaRamp(this, v1, v6);
    if ( v4 >= 0 )
    {
      if ( !v12 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 718;
      }
      v7 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)this + 24LL))(*(_QWORD *)this);
      v8 = (*(__int64 (__fastcall **)(__int64, ReferenceCounted *))(*(_QWORD *)v7 + 96LL))(v7, v12);
      if ( v12 )
        ReferenceCounted::Release(v12);
      v12 = 0LL;
      if ( v1 )
        ReferenceCounted::Release(v1);
      return v8;
    }
    WdLogSingleEntry0(3LL);
    WdLogGlobalForLineNumber = 713;
    if ( v12 )
      ReferenceCounted::Release(v12);
    v12 = 0LL;
    if ( v1 )
    {
      v10 = v1;
      goto LABEL_18;
    }
    return (unsigned int)v4;
  }
  MUTEX_LOCK::MUTEX_LOCK((MUTEX_LOCK *)&v13, (DxgMonitor::MonitorGammaState *)((char *)this + 96));
  v5 = operator new(0x30uLL, 0x4D677844u, 256LL);
  v1 = (const struct DXGK_GAMMA_RAMP *)v5;
  if ( v5 )
  {
    *(_WORD *)(v5 + 40) = 0;
    *(_QWORD *)(v5 + 24) = 0LL;
    *(_QWORD *)(v5 + 32) = 0LL;
    *(_QWORD *)v5 = &rc_buffer<DispBroker::AlpcRequest<7>>::`vftable';
    *(_QWORD *)v5 = &DXGK_GAMMA_RAMP::`vftable';
    *(_DWORD *)(v5 + 8) = 1;
    *(_DWORD *)(v5 + 16) = 1;
    DXGK_GAMMA_RAMP::Initialize(
      (DXGK_GAMMA_RAMP *)v5,
      (const struct _D3DKMDT_GAMMA_RAMP *)(*((_QWORD *)this + 18) + 16LL));
    MUTEX_LOCK::~MUTEX_LOCK((MUTEX_LOCK *)&v13);
    goto LABEL_5;
  }
  WdLogSingleEntry0(6LL);
  WdLogGlobalForLineNumber = 699;
  MUTEX_LOCK::~MUTEX_LOCK((MUTEX_LOCK *)&v13);
  if ( v12 )
    ReferenceCounted::Release(v12);
  return 3221225495LL;
}
