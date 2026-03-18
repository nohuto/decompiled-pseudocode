/*
 * XREFs of ?_CombineDXGIGammaRamp@MonitorGammaState@DxgMonitor@@AEBAJPEBUDXGK_GAMMA_RAMP@@PEAPEAU3@@Z @ 0x1402D8A30
 * Callers:
 *     ?_SetScalarMultiplier@MonitorGammaState@DxgMonitor@@AEAAJKPEAX@Z @ 0x140272C80 (-_SetScalarMultiplier@MonitorGammaState@DxgMonitor@@AEAAJKPEAX@Z.c)
 *     ?OnDxgiGammaRampChange@MonitorGammaState@DxgMonitor@@QEAAJXZ @ 0x1402D87C0 (-OnDxgiGammaRampChange@MonitorGammaState@DxgMonitor@@QEAAJXZ.c)
 *     ?_SetColorSpaceTransform@MonitorGammaState@DxgMonitor@@AEAAJKPEAX@Z @ 0x14042D880 (-_SetColorSpaceTransform@MonitorGammaState@DxgMonitor@@AEAAJKPEAX@Z.c)
 * Callees:
 *     ?Initialize@DXGK_GAMMA_RAMP@@QEAAJW4_D3DDDI_GAMMARAMP_TYPE@@PEBX@Z @ 0x140012B90 (-Initialize@DXGK_GAMMA_RAMP@@QEAAJW4_D3DDDI_GAMMARAMP_TYPE@@PEBX@Z.c)
 *     ?Initialize@DXGK_GAMMA_RAMP@@QEAAJAEBU_D3DKMDT_GAMMA_RAMP@@@Z @ 0x140012D10 (-Initialize@DXGK_GAMMA_RAMP@@QEAAJAEBU_D3DKMDT_GAMMA_RAMP@@@Z.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x14001B3E0 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x14002CD80 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ColorSpaceTransformConvert @ 0x14003B180 (ColorSpaceTransformConvert.c)
 *     ColorSpaceTransformCombine @ 0x140043CA4 (ColorSpaceTransformCombine.c)
 *     ?reset@?$auto_rc@UDXGK_GAMMA_RAMP@@@@QEAAXPEAUDXGK_GAMMA_RAMP@@@Z @ 0x14004FC30 (-reset@-$auto_rc@UDXGK_GAMMA_RAMP@@@@QEAAXPEAUDXGK_GAMMA_RAMP@@@Z.c)
 *     ?put@?$auto_rc@$$CBUDXGK_GAMMA_RAMP@@@@QEAAPEAPEBUDXGK_GAMMA_RAMP@@XZ @ 0x140051E08 (-put@-$auto_rc@$$CBUDXGK_GAMMA_RAMP@@@@QEAAPEAPEBUDXGK_GAMMA_RAMP@@XZ.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
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
  __int64 v10; // r9
  int v11; // edi
  __int64 v12; // rax
  __int64 v13; // r14
  __int64 v14; // rcx
  __int64 v15; // rax
  int v16; // ecx
  enum _D3DDDI_GAMMARAMP_TYPE v17; // eax
  ReferenceCounted *v18; // rcx
  char v19; // dl
  const void **v20; // rdi
  int v22; // r15d
  ReferenceCounted *v23; // [rsp+60h] [rbp+40h] BYREF
  ReferenceCounted *v24; // [rsp+70h] [rbp+50h] BYREF

  if ( !a3 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 353;
  }
  *a3 = 0LL;
  v6 = (__int64 (__fastcall ***)(_QWORD, _QWORD *))*((_QWORD *)this + 1);
  v23 = 0LL;
  v7 = **v6;
  v8 = auto_rc<DXGK_GAMMA_RAMP const>::put(&v23);
  v9 = v7(v6, v8);
  v11 = v9;
  if ( v9 < 0 )
  {
    WdLogSingleEntry1(3LL, v9);
    v18 = v23;
    WdLogGlobalForLineNumber = 364;
LABEL_15:
    if ( !v18 )
      return (unsigned int)v11;
LABEL_30:
    ReferenceCounted::Release(v18);
    return (unsigned int)v11;
  }
  v12 = operator new(0x30uLL, 0x4D677844u, 256LL, v10);
  v13 = v12;
  if ( v12 )
  {
    *(_WORD *)(v12 + 40) = 0;
    *(_QWORD *)v12 = &rc_buffer<DispBroker::AlpcRequest<7>>::`vftable';
    *(_DWORD *)(v12 + 8) = 1;
    *(_QWORD *)v12 = &DXGK_GAMMA_RAMP::`vftable';
    *(_DWORD *)(v12 + 16) = 1;
    *(_QWORD *)(v12 + 24) = 0LL;
    *(_QWORD *)(v12 + 32) = 0LL;
    v14 = *(_QWORD *)this;
    v24 = (ReferenceCounted *)v12;
    v15 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v14 + 32LL))(v14);
    v16 = *(_DWORD *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v15 + 24LL))(v15) + 48);
    if ( (v16 & 4) != 0 )
    {
      v17 = D3DDDI_GAMMARAMP_MATRIX_3x4;
    }
    else
    {
      if ( (v16 & 1) == 0 )
      {
        WdLogSingleEntry0(2LL);
        WdLogGlobalForLineNumber = 380;
        if ( v23 )
          ReferenceCounted::Release(v23);
        v11 = -1073741637;
        goto LABEL_29;
      }
      v17 = D3DDDI_GAMMARAMP_RGB256x3x16;
    }
    v18 = v23;
    if ( (unsigned int)v17 < D3DDDI_GAMMARAMP_MATRIX_3x4 || !v23 || (v19 = 1, *((_DWORD *)v23 + 4) != 3) )
      v19 = 0;
    if ( !a2 )
    {
      v11 = 0;
      if ( !v23 )
        goto LABEL_14;
      if ( v19 )
      {
        v11 = DXGK_GAMMA_RAMP::Initialize((DXGK_GAMMA_RAMP *)v13, v17, 0LL);
        if ( v11 >= 0 )
        {
          v11 = ColorSpaceTransformConvert(
                  (const struct _D3DKMDT_GAMMA_RAMP *)(((unsigned __int64)v23 + 16) & -(__int64)(v23 != 0LL)),
                  (struct _D3DKMDT_GAMMA_RAMP *)(v13 + 16));
          if ( v11 >= 0 )
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
        v11 = DXGK_GAMMA_RAMP::Initialize(
                (DXGK_GAMMA_RAMP *)v13,
                (const struct _D3DKMDT_GAMMA_RAMP *)((char *)v23 + 16));
        if ( v11 >= 0 )
          goto LABEL_13;
        WdLogSingleEntry0(3LL);
        WdLogGlobalForLineNumber = 419;
      }
LABEL_36:
      if ( v23 )
        ReferenceCounted::Release(v23);
      v23 = 0LL;
      auto_rc<DXGK_GAMMA_RAMP>::reset(&v24, 0LL);
      return (unsigned int)v11;
    }
    v20 = (const void **)((char *)a2 + 16);
    if ( !v23 )
    {
      v11 = DXGK_GAMMA_RAMP::Initialize((DXGK_GAMMA_RAMP *)v13, (const struct _D3DKMDT_GAMMA_RAMP *)((char *)a2 + 16));
      if ( v11 >= 0 )
      {
LABEL_13:
        v18 = v23;
LABEL_14:
        *a3 = (struct DXGK_GAMMA_RAMP *)v13;
        goto LABEL_15;
      }
      WdLogSingleEntry0(3LL);
      WdLogGlobalForLineNumber = 465;
      if ( v23 )
        ReferenceCounted::Release(v23);
LABEL_29:
      v23 = 0LL;
      v18 = (ReferenceCounted *)v13;
      goto LABEL_30;
    }
    if ( (unsigned int)(*(_DWORD *)v20 - 4) > 1 )
    {
      v11 = DXGK_GAMMA_RAMP::Initialize((DXGK_GAMMA_RAMP *)v13, (const struct _D3DKMDT_GAMMA_RAMP *)((char *)v23 + 16));
      if ( v11 >= 0 )
        goto LABEL_13;
      WdLogSingleEntry0(3LL);
      WdLogGlobalForLineNumber = 453;
      goto LABEL_36;
    }
    v22 = DXGK_GAMMA_RAMP::Initialize((DXGK_GAMMA_RAMP *)v13, (const struct _D3DKMDT_GAMMA_RAMP *)((char *)a2 + 16));
    if ( v22 >= 0 )
    {
      v11 = ColorSpaceTransformCombine(v20, (int *)v23 + 4, v13 + 16);
      if ( v11 >= 0 )
        goto LABEL_13;
      WdLogSingleEntry0(3LL);
      WdLogGlobalForLineNumber = 441;
      goto LABEL_36;
    }
    WdLogSingleEntry0(3LL);
    WdLogGlobalForLineNumber = 433;
    if ( v23 )
      ReferenceCounted::Release(v23);
    v23 = 0LL;
    auto_rc<DXGK_GAMMA_RAMP>::reset(&v24, 0LL);
    return (unsigned int)v22;
  }
  else
  {
    v24 = 0LL;
    WdLogSingleEntry0(6LL);
    WdLogGlobalForLineNumber = 372;
    if ( v23 )
      ReferenceCounted::Release(v23);
    return 3221225495LL;
  }
}
