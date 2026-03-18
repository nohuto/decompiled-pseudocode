/*
 * XREFs of ?GetDxgiGammaRamp@ADAPTER_DISPLAY@@QEAAJIPEAPEBUDXGK_GAMMA_RAMP@@@Z @ 0x1402D486C
 * Callers:
 *     ?GetDxgiGammaRamp@DXGMONITOR@@UEBAJPEAPEBUDXGK_GAMMA_RAMP@@@Z @ 0x1402D4840 (-GetDxgiGammaRamp@DXGMONITOR@@UEBAJPEAPEBUDXGK_GAMMA_RAMP@@@Z.c)
 * Callees:
 *     ?Initialize@DXGK_GAMMA_RAMP@@QEAAJW4_D3DDDI_GAMMARAMP_TYPE@@PEBX@Z @ 0x140012B90 (-Initialize@DXGK_GAMMA_RAMP@@QEAAJW4_D3DDDI_GAMMARAMP_TYPE@@PEBX@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x14001B3E0 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x14002CD80 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?IsCoreResourceSharedOwner@ADAPTER_DISPLAY@@QEBAEXZ @ 0x140031C38 (-IsCoreResourceSharedOwner@ADAPTER_DISPLAY@@QEBAEXZ.c)
 *     ColorSpaceTransformInitIdentityTransform @ 0x140096D00 (ColorSpaceTransformInitIdentityTransform.c)
 *     ?AdjustFullscreenGammaRamp@ADAPTER_DISPLAY@@QEAAJPEBUDXGK_GAMMA_RAMP@@PEAU2@PEAUDXGK_GAMMA_ADJUSTMENT@@@Z @ 0x140194A1C (-AdjustFullscreenGammaRamp@ADAPTER_DISPLAY@@QEAAJPEBUDXGK_GAMMA_RAMP@@PEAU2@PEAUDXGK_GAMMA_ADJUS.c)
 *     ?DmmGetSourceConnectedToTargetInClientVidPn@@YAJQEAXIPEAI@Z @ 0x1402D57C8 (-DmmGetSourceConnectedToTargetInClientVidPn@@YAJQEAXIPEAI@Z.c)
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
  __int64 v9; // r9
  __int64 v10; // rbp
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rbp
  __int64 v15; // rax
  struct DXGK_GAMMA_ADJUSTMENT *v16; // r14
  __int64 v18; // rsi
  __int64 v19; // rax
  int inited; // eax
  ADAPTER_DISPLAY *v21; // rcx
  __int64 v22; // [rsp+28h] [rbp-50h]
  unsigned int v23; // [rsp+80h] [rbp+8h] BYREF

  v4 = a2;
  if ( !ADAPTER_DISPLAY::IsCoreResourceSharedOwner(this) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 7876;
    DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"IsCoreResourceSharedOwner()", 7876LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( !a3 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 7877;
    DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"NULL != ppDxgiGammaRamp", 7877LL, 0LL, 0LL, 0LL, 0LL);
  }
  *a3 = 0LL;
  v6 = 0LL;
  v7 = (_DWORD *)*((_QWORD *)this + 2);
  if ( v7[612] )
  {
    v23 = 0;
    SourceConnectedToTargetInClientVidPn = DmmGetSourceConnectedToTargetInClientVidPn(v7, v4, &v23);
    if ( SourceConnectedToTargetInClientVidPn < 0 )
    {
      WdLogSingleEntry2(2LL, v4, *((_QWORD *)this + 2));
      v22 = *((_QWORD *)this + 2);
      WdLogGlobalForLineNumber = 7896;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        0xFFFFFFFFLL,
        L"Could not find SourceID for TargetId 0x%I64x on adapter 0x%I64x!",
        v4,
        v22,
        0LL,
        0LL,
        0LL);
      return (unsigned int)SourceConnectedToTargetInClientVidPn;
    }
    v10 = v23;
    if ( v23 == -1 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 7899;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        0xFFFFFFFFLL,
        L"VidPnSourceId != D3DDDI_ID_UNINITIALIZED",
        7899LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    v11 = *((_QWORD *)this + 16);
    v12 = v10;
    v13 = 3984 * v10;
    if ( *(_DWORD *)(3984 * v10 + v11 + 736) == 1 && (v14 = *(_QWORD *)(v13 + v11 + 744)) != 0 )
    {
      v15 = *(_QWORD *)(v13 + v11 + 744);
    }
    else
    {
      v14 = *(_QWORD *)(v13 + v11 + 728);
      v15 = v14;
      if ( !v14 )
      {
LABEL_15:
        *a3 = (const struct DXGK_GAMMA_RAMP *)v6;
        return (unsigned int)SourceConnectedToTargetInClientVidPn;
      }
    }
    v16 = *(struct DXGK_GAMMA_ADJUSTMENT **)(v14 + 8 * v12 + 1688);
    v6 = *(_QWORD *)(v15 + 8 * v12 + 1560);
    if ( !v16 )
    {
      if ( v6 )
        _InterlockedAdd((volatile signed __int32 *)(v6 + 8), 1u);
      goto LABEL_15;
    }
    v18 = *(_QWORD *)(v15 + 8 * v12 + 1560);
    if ( v6 && *(_DWORD *)(v6 + 16) == 1 )
      v18 = 0LL;
    v19 = operator new(0x30uLL, 0x4B677844u, 256LL, v9);
    v6 = v19;
    if ( !v19 )
    {
      WdLogSingleEntry1(6LL, v14);
      WdLogGlobalForLineNumber = 7934;
      DxgkLogInternalTriageEvent(
        0LL,
        262145,
        0xFFFFFFFFLL,
        L"Device 0x%I64x: Unable to allocate gamma ramp.",
        v14,
        0LL,
        0LL,
        0LL,
        0LL);
      return (unsigned int)-1073741801;
    }
    *(_WORD *)(v19 + 40) = 0;
    *(_QWORD *)v19 = &rc_buffer<DispBroker::AlpcRequest<7>>::`vftable';
    *(_QWORD *)v19 = &DXGK_GAMMA_RAMP::`vftable';
    *(_DWORD *)(v19 + 8) = 1;
    *(_DWORD *)(v19 + 16) = 1;
    *(_QWORD *)(v19 + 24) = 0LL;
    *(_QWORD *)(v19 + 32) = 0LL;
    if ( v18 )
    {
      inited = DXGK_GAMMA_RAMP::Initialize(
                 (DXGK_GAMMA_RAMP *)v19,
                 (enum _D3DDDI_GAMMARAMP_TYPE)*(_DWORD *)(v18 + 16),
                 *(const void **)(v18 + 32));
    }
    else
    {
      SourceConnectedToTargetInClientVidPn = DXGK_GAMMA_RAMP::Initialize(
                                               (DXGK_GAMMA_RAMP *)v19,
                                               D3DDDI_GAMMARAMP_RGB256x3x16,
                                               0LL);
      if ( SourceConnectedToTargetInClientVidPn < 0 )
        goto LABEL_32;
      inited = ColorSpaceTransformInitIdentityTransform((v6 + 16) & -(__int64)(v6 != 0));
    }
    SourceConnectedToTargetInClientVidPn = inited;
    if ( inited >= 0 )
    {
      SourceConnectedToTargetInClientVidPn = ADAPTER_DISPLAY::AdjustFullscreenGammaRamp(
                                               v21,
                                               (const struct DXGK_GAMMA_RAMP *)v18,
                                               (struct DXGK_GAMMA_RAMP *)v6,
                                               v16);
      if ( SourceConnectedToTargetInClientVidPn >= 0 )
        goto LABEL_15;
    }
LABEL_32:
    ReferenceCounted::Release((ReferenceCounted *)v6);
    return (unsigned int)SourceConnectedToTargetInClientVidPn;
  }
  return 0LL;
}
