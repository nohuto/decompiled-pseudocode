/*
 * XREFs of ?UpdateGammaRamp@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1402D74E8
 * Callers:
 *     ?ReleasePendingVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAXXZ @ 0x1401885C0 (-ReleasePendingVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAXXZ.c)
 *     ?ReleaseSharedVidPnSourceOwner@ADAPTER_DISPLAY@@AEAAEPEAVDXGDEVICE@@I@Z @ 0x140197F10 (-ReleaseSharedVidPnSourceOwner@ADAPTER_DISPLAY@@AEAAEPEAVDXGDEVICE@@I@Z.c)
 *     ?ReleaseVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAEPEAVDXGDEVICE@@@Z @ 0x140198118 (-ReleaseVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAEPEAVDXGDEVICE@@@Z.c)
 *     ?ReleaseVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAEPEAVDXGDEVICE@@I@Z @ 0x1402D7C08 (-ReleaseVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAEPEAVDXGDEVICE@@I@Z.c)
 *     ?UpdateModeWithPrimary@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IPEAVDXGADAPTERALLOCATION@@@Z @ 0x140329108 (-UpdateModeWithPrimary@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IPEAVDXGADAPTERALLOCATION@@@Z.c)
 *     ?ReleaseAllVidPnSourceOwners@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z @ 0x140396DE0 (-ReleaseAllVidPnSourceOwners@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z.c)
 *     ?AcquireVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@PEBW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@PEBIIU_D3DKMT_VIDPNSOURCEOWNER_FLAGS@@@Z @ 0x14040E0D4 (-AcquireVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@PEBW4_D3DKMT_VIDPNSOURCEOWNER_TYPE.c)
 * Callees:
 *     ?Initialize@DXGK_GAMMA_RAMP@@QEAAJW4_D3DDDI_GAMMARAMP_TYPE@@PEBX@Z @ 0x140012B90 (-Initialize@DXGK_GAMMA_RAMP@@QEAAJW4_D3DDDI_GAMMARAMP_TYPE@@PEBX@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x14001B3E0 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1400294B0 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x14002CD80 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?IsCoreResourceSharedOwner@ADAPTER_DISPLAY@@QEBAEXZ @ 0x140031C38 (-IsCoreResourceSharedOwner@ADAPTER_DISPLAY@@QEBAEXZ.c)
 *     ?IsFullWDDMAdapter@DXGADAPTER@@QEBAEXZ @ 0x140055474 (-IsFullWDDMAdapter@DXGADAPTER@@QEBAEXZ.c)
 *     ColorSpaceTransformInitIdentityTransform @ 0x140096D00 (ColorSpaceTransformInitIdentityTransform.c)
 *     ?AdjustFullscreenGammaRamp@ADAPTER_DISPLAY@@QEAAJPEBUDXGK_GAMMA_RAMP@@PEAU2@PEAUDXGK_GAMMA_ADJUSTMENT@@@Z @ 0x140194A1C (-AdjustFullscreenGammaRamp@ADAPTER_DISPLAY@@QEAAJPEBUDXGK_GAMMA_RAMP@@PEAU2@PEAUDXGK_GAMMA_ADJUS.c)
 *     ?ResumeScheduler@ADAPTER_RENDER@@QEAAXEE@Z @ 0x1402BB188 (-ResumeScheduler@ADAPTER_RENDER@@QEAAXEE@Z.c)
 *     ?SuspendScheduler@ADAPTER_RENDER@@QEAAJEE@Z @ 0x1402BB298 (-SuspendScheduler@ADAPTER_RENDER@@QEAAJEE@Z.c)
 *     ?DmmEnumClientVidPnPathTargetsFromSource@@YAJQEAXI_KQEAI@Z @ 0x1402D5A28 (-DmmEnumClientVidPnPathTargetsFromSource@@YAJQEAXI_KQEAI@Z.c)
 *     ?DmmUpdateGammaRampOnVidPnSource@@YAJQEAXIPEBUDXGK_GAMMA_RAMP@@@Z @ 0x1402D6EB0 (-DmmUpdateGammaRampOnVidPnSource@@YAJQEAXIPEBUDXGK_GAMMA_RAMP@@@Z.c)
 *     ?MonitorNotifyDXGIGammaRampChange@@YAJPEAXI@Z @ 0x1402D78FC (-MonitorNotifyDXGIGammaRampChange@@YAJPEAXI@Z.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::UpdateGammaRamp(DXGADAPTER **this, unsigned int a2)
{
  __int64 v2; // r15
  __int64 v4; // r9
  DXGADAPTER *v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rbp
  __int64 v8; // rdi
  __int64 v9; // r8
  unsigned int v10; // r14d
  int v11; // eax
  struct DXGK_GAMMA_ADJUSTMENT *v13; // r14
  __int64 v14; // rcx
  __int64 v15; // rbx
  __int64 v16; // rax
  int inited; // eax
  ADAPTER_DISPLAY *v18; // rcx
  PERESOURCE *v19; // rcx
  unsigned int v20; // [rsp+80h] [rbp+8h] BYREF

  v2 = a2;
  if ( !ADAPTER_DISPLAY::IsCoreResourceSharedOwner((ADAPTER_DISPLAY *)this) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 7541;
    DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"IsCoreResourceSharedOwner()", 7541LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( *((_DWORD *)this[2] + 612) )
  {
    v5 = this[16];
    v6 = 3984 * v2;
    if ( *((_DWORD *)v5 + 996 * v2 + 184) != 1 || (v7 = *(_QWORD *)((char *)v5 + v6 + 744)) == 0 )
    {
      v7 = *(_QWORD *)((char *)v5 + v6 + 728);
      v8 = 0LL;
      if ( !v7 )
        goto LABEL_6;
    }
    v13 = *(struct DXGK_GAMMA_ADJUSTMENT **)(v7 + 8 * v2 + 1688);
    v8 = *(_QWORD *)(v7 + 8 * v2 + 1560);
    if ( !v13 )
    {
      if ( v8 )
        _InterlockedAdd((volatile signed __int32 *)(v8 + 8), 1u);
LABEL_6:
      if ( !*((_BYTE *)this + 291) || !DXGADAPTER::IsFullWDDMAdapter(this[2]) )
        goto LABEL_7;
      if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(v19) )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 7654;
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          0xFFFFFFFFLL,
          L"IsCoreResourceExclusiveOwner()",
          7654LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      LODWORD(v7) = ADAPTER_RENDER::SuspendScheduler(*((DXGADAPTER ***)this[2] + 391), 0, 0LL);
      if ( (int)v7 < 0 )
      {
        WdLogSingleEntry1(2LL, this);
        WdLogGlobalForLineNumber = 7662;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          0xFFFFFFFFLL,
          L"Failed to suspend scheduler for setting gammaramp in adapter 0x%I64x",
          (__int64)this,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      else
      {
LABEL_7:
        LODWORD(v7) = DmmUpdateGammaRampOnVidPnSource(this[2], v2, (const struct DXGK_GAMMA_RAMP *)v8);
        v20 = 0;
        v9 = 0LL;
        v10 = 1;
        while ( (int)DmmEnumClientVidPnPathTargetsFromSource(this[2], v2, v9, &v20) >= 0 && v20 != -1 )
        {
          v11 = MonitorNotifyDXGIGammaRampChange(this[2], v20);
          v7 = v11;
          if ( v11 < 0 )
          {
            WdLogSingleEntry1(2LL, v11);
            WdLogGlobalForLineNumber = 7691;
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              0xFFFFFFFFLL,
              L"Failed to DXGI gamma ramp, (Status == 0x%I64x)!",
              v7,
              0LL,
              0LL,
              0LL,
              0LL);
          }
          v9 = v10++;
        }
        if ( *((_BYTE *)this + 291) && DXGADAPTER::IsFullWDDMAdapter(this[2]) )
          ADAPTER_RENDER::ResumeScheduler(*(ADAPTER_RENDER **)(v14 + 3128), 0, 0);
      }
      if ( !v8 )
        return (unsigned int)v7;
      goto LABEL_40;
    }
    v15 = *(_QWORD *)(v7 + 8 * v2 + 1560);
    if ( v8 && *(_DWORD *)(v8 + 16) == 1 )
      v15 = 0LL;
    v16 = operator new(0x30uLL, 0x4B677844u, 256LL, v4);
    v8 = v16;
    if ( !v16 )
    {
      WdLogSingleEntry1(6LL, v7);
      WdLogGlobalForLineNumber = 7590;
      DxgkLogInternalTriageEvent(
        0LL,
        262145,
        0xFFFFFFFFLL,
        L"Device 0x%I64x: Unable to allocate gamma ramp.",
        v7,
        0LL,
        0LL,
        0LL,
        0LL);
      LODWORD(v7) = -1073741801;
      return (unsigned int)v7;
    }
    *(_WORD *)(v16 + 40) = 0;
    *(_QWORD *)v16 = &rc_buffer<DispBroker::AlpcRequest<7>>::`vftable';
    *(_QWORD *)v16 = &DXGK_GAMMA_RAMP::`vftable';
    *(_DWORD *)(v16 + 8) = 1;
    *(_DWORD *)(v16 + 16) = 1;
    *(_QWORD *)(v16 + 24) = 0LL;
    *(_QWORD *)(v16 + 32) = 0LL;
    if ( v15 )
    {
      inited = DXGK_GAMMA_RAMP::Initialize(
                 (DXGK_GAMMA_RAMP *)v16,
                 (enum _D3DDDI_GAMMARAMP_TYPE)*(_DWORD *)(v15 + 16),
                 *(const void **)(v15 + 32));
    }
    else
    {
      LODWORD(v7) = DXGK_GAMMA_RAMP::Initialize((DXGK_GAMMA_RAMP *)v16, D3DDDI_GAMMARAMP_RGB256x3x16, 0LL);
      if ( (int)v7 < 0 )
        goto LABEL_40;
      inited = ColorSpaceTransformInitIdentityTransform(v8 + 16);
    }
    LODWORD(v7) = inited;
    if ( inited >= 0 )
    {
      LODWORD(v7) = ADAPTER_DISPLAY::AdjustFullscreenGammaRamp(
                      v18,
                      (const struct DXGK_GAMMA_RAMP *)v15,
                      (struct DXGK_GAMMA_RAMP *)v8,
                      v13);
      if ( (int)v7 >= 0 )
        goto LABEL_6;
    }
LABEL_40:
    ReferenceCounted::Release((ReferenceCounted *)v8);
    return (unsigned int)v7;
  }
  return 0LL;
}
