/*
 * XREFs of ?_CombineDXGIGammaRamp@MonitorGammaState@DxgMonitor@@AEBAJPEBUDXGK_GAMMA_RAMP@@PEAPEAU3@@Z @ 0x1402DEC30
 * Callers:
 *     ?_SetScalarMultiplier@MonitorGammaState@DxgMonitor@@AEAAJKPEAX@Z @ 0x140279E78 (-_SetScalarMultiplier@MonitorGammaState@DxgMonitor@@AEAAJKPEAX@Z.c)
 *     ?OnDxgiGammaRampChange@MonitorGammaState@DxgMonitor@@QEAAJXZ @ 0x1402DF49C (-OnDxgiGammaRampChange@MonitorGammaState@DxgMonitor@@QEAAJXZ.c)
 *     ?_SetColorSpaceTransform@MonitorGammaState@DxgMonitor@@AEAAJKPEAX@Z @ 0x14042F770 (-_SetColorSpaceTransform@MonitorGammaState@DxgMonitor@@AEAAJKPEAX@Z.c)
 * Callees:
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x14000BE00 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?Initialize@DXGK_GAMMA_RAMP@@QEAAJW4_D3DDDI_GAMMARAMP_TYPE@@PEBX@Z @ 0x140022020 (-Initialize@DXGK_GAMMA_RAMP@@QEAAJW4_D3DDDI_GAMMARAMP_TYPE@@PEBX@Z.c)
 *     ?Initialize@DXGK_GAMMA_RAMP@@QEAAJAEBU_D3DKMDT_GAMMA_RAMP@@@Z @ 0x1400221A0 (-Initialize@DXGK_GAMMA_RAMP@@QEAAJAEBU_D3DKMDT_GAMMA_RAMP@@@Z.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x14002D590 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ColorSpaceTransformConvert @ 0x140039740 (ColorSpaceTransformConvert.c)
 *     ColorSpaceTransformCombine @ 0x140043914 (ColorSpaceTransformCombine.c)
 *     ?reset@?$auto_rc@UDXGK_GAMMA_RAMP@@@@QEAAXPEAUDXGK_GAMMA_RAMP@@@Z @ 0x14004F6B0 (-reset@-$auto_rc@UDXGK_GAMMA_RAMP@@@@QEAAXPEAUDXGK_GAMMA_RAMP@@@Z.c)
 *     ?put@?$auto_rc@$$CBUDXGK_GAMMA_RAMP@@@@QEAAPEAPEBUDXGK_GAMMA_RAMP@@XZ @ 0x140051858 (-put@-$auto_rc@$$CBUDXGK_GAMMA_RAMP@@@@QEAAPEAPEBUDXGK_GAMMA_RAMP@@XZ.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DxgMonitor::MonitorGammaState::_CombineDXGIGammaRamp(
        DxgMonitor::MonitorGammaState *this,
        const struct DXGK_GAMMA_RAMP *a2,
        struct DXGK_GAMMA_RAMP **a3)
{
  __int64 (__fastcall ***v6)(_QWORD, _QWORD *); // rsi
  __int64 (__fastcall *v7)(_QWORD, _QWORD *); // rdi
  _QWORD *v8; // rax
  int v9; // eax
  int v10; // edi
  __int64 v11; // rax
  __int64 v12; // r14
  __int64 v13; // rcx
  __int64 v14; // rax
  int v15; // ecx
  unsigned __int32 v16; // eax
  ReferenceCounted *v17; // rcx
  char v18; // dl
  const void **v19; // rdi
  int v21; // r15d
  ReferenceCounted *v22; // [rsp+60h] [rbp+40h] BYREF
  ReferenceCounted *v23; // [rsp+70h] [rbp+50h] BYREF

  if ( !a3 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 353;
  }
  *a3 = 0LL;
  v6 = (__int64 (__fastcall ***)(_QWORD, _QWORD *))*((_QWORD *)this + 1);
  v22 = 0LL;
  v7 = **v6;
  v8 = auto_rc<DXGK_GAMMA_RAMP const>::put(&v22);
  v9 = v7(v6, v8);
  v10 = v9;
  if ( v9 < 0 )
  {
    WdLogSingleEntry1(3LL, v9);
    v17 = v22;
    WdLogGlobalForLineNumber = 364;
LABEL_15:
    if ( !v17 )
      return (unsigned int)v10;
LABEL_30:
    ReferenceCounted::Release(v17);
    return (unsigned int)v10;
  }
  v11 = operator new(0x30uLL, 0x4D677844u, 256LL);
  v12 = v11;
  if ( v11 )
  {
    *(_WORD *)(v11 + 40) = 0;
    *(_QWORD *)v11 = &rc_buffer<DispBroker::AlpcRequest<7>>::`vftable';
    *(_DWORD *)(v11 + 8) = 1;
    *(_QWORD *)v11 = &DXGK_GAMMA_RAMP::`vftable';
    *(_DWORD *)(v11 + 16) = 1;
    *(_QWORD *)(v11 + 24) = 0LL;
    *(_QWORD *)(v11 + 32) = 0LL;
    v13 = *(_QWORD *)this;
    v23 = (ReferenceCounted *)v11;
    v14 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v13 + 32LL))(v13);
    v15 = *(_DWORD *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v14 + 24LL))(v14) + 48);
    if ( (v15 & 4) != 0 )
    {
      v16 = 4;
    }
    else
    {
      if ( (v15 & 1) == 0 )
      {
        WdLogSingleEntry0(2LL);
        WdLogGlobalForLineNumber = 380;
        if ( v22 )
          ReferenceCounted::Release(v22);
        v10 = -1073741637;
        goto LABEL_29;
      }
      v16 = 2;
    }
    v17 = v22;
    if ( v16 < 4 || !v22 || (v18 = 1, *((_DWORD *)v22 + 4) != 3) )
      v18 = 0;
    if ( !a2 )
    {
      v10 = 0;
      if ( !v22 )
        goto LABEL_14;
      if ( v18 )
      {
        v10 = DXGK_GAMMA_RAMP::Initialize((DXGK_GAMMA_RAMP *)v12, v16, 0LL);
        if ( v10 >= 0 )
        {
          v10 = ColorSpaceTransformConvert(
                  (const struct _D3DKMDT_GAMMA_RAMP *)(((unsigned __int64)v22 + 16) & -(__int64)(v22 != 0LL)),
                  (struct _D3DKMDT_GAMMA_RAMP *)(v12 + 16));
          if ( v10 >= 0 )
            goto LABEL_13;
          WdLogSingleEntry0(3LL);
          WdLogGlobalForLineNumber = 409;
        }
        else
        {
          WdLogSingleEntry0(3LL);
          WdLogGlobalForLineNumber = 403;
        }
      }
      else
      {
        v10 = DXGK_GAMMA_RAMP::Initialize(
                (DXGK_GAMMA_RAMP *)v12,
                (const struct _D3DKMDT_GAMMA_RAMP *)((char *)v22 + 16));
        if ( v10 >= 0 )
          goto LABEL_13;
        WdLogSingleEntry0(3LL);
        WdLogGlobalForLineNumber = 419;
      }
LABEL_36:
      if ( v22 )
        ReferenceCounted::Release(v22);
      v22 = 0LL;
      auto_rc<DXGK_GAMMA_RAMP>::reset(&v23, 0LL);
      return (unsigned int)v10;
    }
    v19 = (const void **)((char *)a2 + 16);
    if ( !v22 )
    {
      v10 = DXGK_GAMMA_RAMP::Initialize((DXGK_GAMMA_RAMP *)v12, (const struct _D3DKMDT_GAMMA_RAMP *)((char *)a2 + 16));
      if ( v10 >= 0 )
      {
LABEL_13:
        v17 = v22;
LABEL_14:
        *a3 = (struct DXGK_GAMMA_RAMP *)v12;
        goto LABEL_15;
      }
      WdLogSingleEntry0(3LL);
      WdLogGlobalForLineNumber = 465;
      if ( v22 )
        ReferenceCounted::Release(v22);
LABEL_29:
      v22 = 0LL;
      v17 = (ReferenceCounted *)v12;
      goto LABEL_30;
    }
    if ( (unsigned int)(*(_DWORD *)v19 - 4) > 1 )
    {
      v10 = DXGK_GAMMA_RAMP::Initialize((DXGK_GAMMA_RAMP *)v12, (const struct _D3DKMDT_GAMMA_RAMP *)((char *)v22 + 16));
      if ( v10 >= 0 )
        goto LABEL_13;
      WdLogSingleEntry0(3LL);
      WdLogGlobalForLineNumber = 453;
      goto LABEL_36;
    }
    v21 = DXGK_GAMMA_RAMP::Initialize((DXGK_GAMMA_RAMP *)v12, (const struct _D3DKMDT_GAMMA_RAMP *)((char *)a2 + 16));
    if ( v21 >= 0 )
    {
      v10 = ColorSpaceTransformCombine(v19, (int *)v22 + 4, v12 + 16);
      if ( v10 >= 0 )
        goto LABEL_13;
      WdLogSingleEntry0(3LL);
      WdLogGlobalForLineNumber = 441;
      goto LABEL_36;
    }
    WdLogSingleEntry0(3LL);
    WdLogGlobalForLineNumber = 433;
    if ( v22 )
      ReferenceCounted::Release(v22);
    v22 = 0LL;
    auto_rc<DXGK_GAMMA_RAMP>::reset(&v23, 0LL);
    return (unsigned int)v21;
  }
  else
  {
    v23 = 0LL;
    WdLogSingleEntry0(6LL);
    WdLogGlobalForLineNumber = 372;
    if ( v22 )
      ReferenceCounted::Release(v22);
    return 3221225495LL;
  }
}
