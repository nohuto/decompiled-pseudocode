/*
 * XREFs of ?_SetScalarMultiplier@MonitorGammaState@DxgMonitor@@AEAAJKPEAX@Z @ 0x140272C80
 * Callers:
 *     ?OnIoctl@MonitorGammaState@DxgMonitor@@QEAAJKKPEAXK0PEA_K@Z @ 0x14042D7C0 (-OnIoctl@MonitorGammaState@DxgMonitor@@QEAAJKKPEAXK0PEA_K@Z.c)
 * Callees:
 *     ??0MUTEX_LOCK@@QEAA@AEAVDXGFASTMUTEX@@@Z @ 0x14002F83C (--0MUTEX_LOCK@@QEAA@AEAVDXGFASTMUTEX@@@Z.c)
 *     ??1MUTEX_LOCK@@QEAA@XZ @ 0x140034DA0 (--1MUTEX_LOCK@@QEAA@XZ.c)
 *     ?reset@?$auto_rc@UDXGK_GAMMA_RAMP@@@@QEAAXPEAUDXGK_GAMMA_RAMP@@@Z @ 0x14004FC30 (-reset@-$auto_rc@UDXGK_GAMMA_RAMP@@@@QEAAXPEAUDXGK_GAMMA_RAMP@@@Z.c)
 *     ?put@?$auto_rc@UDXGK_GAMMA_RAMP@@@@QEAAPEAPEAUDXGK_GAMMA_RAMP@@XZ @ 0x140054D14 (-put@-$auto_rc@UDXGK_GAMMA_RAMP@@@@QEAAPEAPEAUDXGK_GAMMA_RAMP@@XZ.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 *     ?_CombineDXGIGammaRamp@MonitorGammaState@DxgMonitor@@AEBAJPEBUDXGK_GAMMA_RAMP@@PEAPEAU3@@Z @ 0x1402D8A30 (-_CombineDXGIGammaRamp@MonitorGammaState@DxgMonitor@@AEBAJPEBUDXGK_GAMMA_RAMP@@PEAPEAU3@@Z.c)
 */

__int64 __fastcall DxgMonitor::MonitorGammaState::_SetScalarMultiplier(
        DxgMonitor::MonitorGammaState *this,
        unsigned int a2,
        float *a3)
{
  unsigned int v6; // edi
  const struct DXGK_GAMMA_RAMP *v7; // rbx
  __int64 v8; // rcx
  int v9; // ebx
  ReferenceCounted *v10; // rdx
  struct DXGK_GAMMA_RAMP **v11; // rax
  __int64 v12; // rax
  ReferenceCounted *v13; // [rsp+20h] [rbp-20h] BYREF
  _BYTE v14[8]; // [rsp+28h] [rbp-18h] BYREF
  _BYTE v15[16]; // [rsp+30h] [rbp-10h] BYREF
  ReferenceCounted *v16; // [rsp+68h] [rbp+28h] BYREF

  if ( a2 < 4 )
    return 3221225507LL;
  v6 = 0;
  if ( !a3 )
    return 3221225485LL;
  if ( !*((_BYTE *)this + 80) )
    return 3221225659LL;
  if ( *((float *)this + 21) > *a3 || *a3 > *((float *)this + 22) )
    return 3221225485LL;
  MUTEX_LOCK::MUTEX_LOCK((MUTEX_LOCK *)v15, (DxgMonitor::MonitorGammaState *)((char *)this + 152));
  *((float *)this + 50) = *a3;
  MUTEX_LOCK::~MUTEX_LOCK((MUTEX_LOCK *)v15);
  v7 = 0LL;
  v16 = 0LL;
  v13 = 0LL;
  MUTEX_LOCK::MUTEX_LOCK((MUTEX_LOCK *)v14, (DxgMonitor::MonitorGammaState *)((char *)this + 96));
  v8 = *((_QWORD *)this + 18);
  if ( v8 )
  {
    if ( *(_DWORD *)(v8 + 16) != 4 )
    {
      WdLogSingleEntry0(3LL);
      WdLogGlobalForLineNumber = 207;
      MUTEX_LOCK::~MUTEX_LOCK((MUTEX_LOCK *)v14);
      v9 = -1073741811;
LABEL_15:
      auto_rc<DXGK_GAMMA_RAMP>::reset(&v16, 0LL);
      auto_rc<DXGK_GAMMA_RAMP>::reset(&v13, 0LL);
      return (unsigned int)v9;
    }
    *(_DWORD *)(*(_QWORD *)(v8 + 32) + 48LL) = *((_DWORD *)this + 50);
    v10 = (ReferenceCounted *)*((_QWORD *)this + 18);
    *((_QWORD *)this + 18) = 0LL;
    auto_rc<DXGK_GAMMA_RAMP>::reset(&v13, v10);
    v7 = v13;
  }
  MUTEX_LOCK::~MUTEX_LOCK((MUTEX_LOCK *)v14);
  if ( v7 )
  {
    v11 = (struct DXGK_GAMMA_RAMP **)auto_rc<DXGK_GAMMA_RAMP>::put(&v16);
    v9 = DxgMonitor::MonitorGammaState::_CombineDXGIGammaRamp(this, v7, v11);
    if ( v9 < 0 )
    {
      WdLogSingleEntry0(3LL);
      WdLogGlobalForLineNumber = 221;
      goto LABEL_15;
    }
    if ( !v16 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 224;
    }
    v12 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)this + 24LL))(*(_QWORD *)this);
    v6 = (*(__int64 (__fastcall **)(__int64, ReferenceCounted *))(*(_QWORD *)v12 + 96LL))(v12, v16);
  }
  auto_rc<DXGK_GAMMA_RAMP>::reset(&v16, 0LL);
  auto_rc<DXGK_GAMMA_RAMP>::reset(&v13, 0LL);
  return v6;
}
