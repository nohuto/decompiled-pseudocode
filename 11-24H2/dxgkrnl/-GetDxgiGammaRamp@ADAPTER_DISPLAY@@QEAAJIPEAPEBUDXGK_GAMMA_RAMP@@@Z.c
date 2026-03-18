/*
 * XREFs of ?GetDxgiGammaRamp@ADAPTER_DISPLAY@@QEAAJIPEAPEBUDXGK_GAMMA_RAMP@@@Z @ 0x14031476C
 * Callers:
 *     ?GetDxgiGammaRamp@DXGMONITOR@@UEBAJPEAPEBUDXGK_GAMMA_RAMP@@@Z @ 0x1403146A0 (-GetDxgiGammaRamp@DXGMONITOR@@UEBAJPEAPEBUDXGK_GAMMA_RAMP@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x14000BE00 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?Initialize@DXGK_GAMMA_RAMP@@QEAAJW4_D3DDDI_GAMMARAMP_TYPE@@PEBX@Z @ 0x140022020 (-Initialize@DXGK_GAMMA_RAMP@@QEAAJW4_D3DDDI_GAMMARAMP_TYPE@@PEBX@Z.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x14002D590 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?IsCoreResourceSharedOwner@ADAPTER_DISPLAY@@QEBAEXZ @ 0x140031B58 (-IsCoreResourceSharedOwner@ADAPTER_DISPLAY@@QEBAEXZ.c)
 *     ColorSpaceTransformInitIdentityTransform @ 0x140098F7C (ColorSpaceTransformInitIdentityTransform.c)
 *     ?AdjustFullscreenGammaRamp@ADAPTER_DISPLAY@@QEAAJPEBUDXGK_GAMMA_RAMP@@PEAU2@PEAUDXGK_GAMMA_ADJUSTMENT@@@Z @ 0x140196D9C (-AdjustFullscreenGammaRamp@ADAPTER_DISPLAY@@QEAAJPEBUDXGK_GAMMA_RAMP@@PEAU2@PEAUDXGK_GAMMA_ADJUS.c)
 *     ?DmmGetSourceConnectedToTargetInClientVidPn@@YAJQEAXIPEAI@Z @ 0x1403156CC (-DmmGetSourceConnectedToTargetInClientVidPn@@YAJQEAXIPEAI@Z.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::GetDxgiGammaRamp(
        ADAPTER_DISPLAY *this,
        unsigned int a2,
        const struct DXGK_GAMMA_RAMP **a3)
{
  __int64 v4; // rbp
  __int64 v6; // rbx
  _DWORD *v7; // rcx
  int SourceConnectedToTargetInClientVidPn; // edi
  __int64 v9; // rbp
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rax
  __int64 v13; // rbp
  __int64 v14; // rax
  struct DXGK_GAMMA_ADJUSTMENT *v15; // r14
  __int64 v17; // rsi
  __int64 v18; // rax
  int inited; // eax
  ADAPTER_DISPLAY *v20; // rcx
  __int64 v21; // [rsp+28h] [rbp-50h]
  unsigned int v22; // [rsp+80h] [rbp+8h] BYREF

  v4 = a2;
  if ( !ADAPTER_DISPLAY::IsCoreResourceSharedOwner(this) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 8021;
    DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"IsCoreResourceSharedOwner()", 8021LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( !a3 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 8022;
    DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"NULL != ppDxgiGammaRamp", 8022LL, 0LL, 0LL, 0LL, 0LL);
  }
  *a3 = 0LL;
  v6 = 0LL;
  v7 = (_DWORD *)*((_QWORD *)this + 2);
  if ( v7[612] )
  {
    v22 = 0;
    SourceConnectedToTargetInClientVidPn = DmmGetSourceConnectedToTargetInClientVidPn(v7, v4, &v22);
    if ( SourceConnectedToTargetInClientVidPn < 0 )
    {
      WdLogSingleEntry2(2LL, v4, *((_QWORD *)this + 2));
      v21 = *((_QWORD *)this + 2);
      WdLogGlobalForLineNumber = 8041;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"Could not find SourceID for TargetId 0x%I64x on adapter 0x%I64x!",
        v4,
        v21,
        0LL,
        0LL,
        0LL);
      return (unsigned int)SourceConnectedToTargetInClientVidPn;
    }
    v9 = v22;
    if ( v22 == -1 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 8044;
      DxgkLogInternalTriageEvent(
        0LL,
        262146LL,
        0xFFFFFFFFLL,
        L"VidPnSourceId != D3DDDI_ID_UNINITIALIZED",
        8044LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    v10 = *((_QWORD *)this + 16);
    v11 = v9;
    v12 = 4024 * v9;
    if ( *(_DWORD *)(4024 * v9 + v10 + 736) == 1 && (v13 = *(_QWORD *)(v12 + v10 + 744)) != 0 )
    {
      v14 = *(_QWORD *)(v12 + v10 + 744);
    }
    else
    {
      v13 = *(_QWORD *)(v12 + v10 + 728);
      v14 = v13;
      if ( !v13 )
      {
LABEL_15:
        *a3 = (const struct DXGK_GAMMA_RAMP *)v6;
        return (unsigned int)SourceConnectedToTargetInClientVidPn;
      }
    }
    v15 = *(struct DXGK_GAMMA_ADJUSTMENT **)(v13 + 8 * v11 + 1704);
    v6 = *(_QWORD *)(v14 + 8 * v11 + 1576);
    if ( !v15 )
    {
      if ( v6 )
        _InterlockedAdd((volatile signed __int32 *)(v6 + 8), 1u);
      goto LABEL_15;
    }
    v17 = *(_QWORD *)(v14 + 8 * v11 + 1576);
    if ( v6 && *(_DWORD *)(v6 + 16) == 1 )
      v17 = 0LL;
    v18 = operator new(0x30uLL, 0x4B677844u, 256LL);
    v6 = v18;
    if ( !v18 )
    {
      WdLogSingleEntry1(6LL, v13);
      WdLogGlobalForLineNumber = 8079;
      DxgkLogInternalTriageEvent(
        0LL,
        262145LL,
        0xFFFFFFFFLL,
        L"Device 0x%I64x: Unable to allocate gamma ramp.",
        v13,
        0LL,
        0LL,
        0LL,
        0LL);
      return (unsigned int)-1073741801;
    }
    *(_WORD *)(v18 + 40) = 0;
    *(_QWORD *)v18 = &rc_buffer<DispBroker::AlpcRequest<7>>::`vftable';
    *(_QWORD *)v18 = &DXGK_GAMMA_RAMP::`vftable';
    *(_DWORD *)(v18 + 8) = 1;
    *(_DWORD *)(v18 + 16) = 1;
    *(_QWORD *)(v18 + 24) = 0LL;
    *(_QWORD *)(v18 + 32) = 0LL;
    if ( v17 )
    {
      inited = DXGK_GAMMA_RAMP::Initialize((DXGK_GAMMA_RAMP *)v18, *(_DWORD *)(v17 + 16), *(const void **)(v17 + 32));
    }
    else
    {
      SourceConnectedToTargetInClientVidPn = DXGK_GAMMA_RAMP::Initialize((DXGK_GAMMA_RAMP *)v18, 2, 0LL);
      if ( SourceConnectedToTargetInClientVidPn < 0 )
        goto LABEL_32;
      inited = ColorSpaceTransformInitIdentityTransform((v6 + 16) & -(__int64)(v6 != 0));
    }
    SourceConnectedToTargetInClientVidPn = inited;
    if ( inited >= 0 )
    {
      SourceConnectedToTargetInClientVidPn = ADAPTER_DISPLAY::AdjustFullscreenGammaRamp(
                                               v20,
                                               (const struct DXGK_GAMMA_RAMP *)v17,
                                               (struct DXGK_GAMMA_RAMP *)v6,
                                               v15);
      if ( SourceConnectedToTargetInClientVidPn >= 0 )
        goto LABEL_15;
    }
LABEL_32:
    ReferenceCounted::Release((ReferenceCounted *)v6);
    return (unsigned int)SourceConnectedToTargetInClientVidPn;
  }
  return 0LL;
}
