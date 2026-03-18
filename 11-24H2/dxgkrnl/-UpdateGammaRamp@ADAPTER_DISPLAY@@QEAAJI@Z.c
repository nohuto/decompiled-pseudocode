/*
 * XREFs of ?UpdateGammaRamp@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x14028FB10
 * Callers:
 *     ?ReleasePendingVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAXXZ @ 0x14018A8D0 (-ReleasePendingVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAXXZ.c)
 *     ?ReleaseSharedVidPnSourceOwner@ADAPTER_DISPLAY@@AEAAEPEAVDXGDEVICE@@I@Z @ 0x14019A39C (-ReleaseSharedVidPnSourceOwner@ADAPTER_DISPLAY@@AEAAEPEAVDXGDEVICE@@I@Z.c)
 *     ?ReleaseVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAEPEAVDXGDEVICE@@@Z @ 0x14019A5A4 (-ReleaseVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAEPEAVDXGDEVICE@@@Z.c)
 *     ?ReleaseVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAEPEAVDXGDEVICE@@I@Z @ 0x14028F620 (-ReleaseVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAEPEAVDXGDEVICE@@I@Z.c)
 *     ?UpdateModeWithPrimary@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IPEAVDXGADAPTERALLOCATION@@@Z @ 0x14030B7B8 (-UpdateModeWithPrimary@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IPEAVDXGADAPTERALLOCATION@@@Z.c)
 *     ?ReleaseAllVidPnSourceOwners@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z @ 0x1403826AC (-ReleaseAllVidPnSourceOwners@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z.c)
 *     ?AcquireVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@PEBW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@PEBIIU_D3DKMT_VIDPNSOURCEOWNER_FLAGS@@@Z @ 0x140406F60 (-AcquireVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@PEBW4_D3DKMT_VIDPNSOURCEOWNER_TYPE.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x14000BE00 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?Initialize@DXGK_GAMMA_RAMP@@QEAAJW4_D3DDDI_GAMMARAMP_TYPE@@PEBX@Z @ 0x140022020 (-Initialize@DXGK_GAMMA_RAMP@@QEAAJW4_D3DDDI_GAMMARAMP_TYPE@@PEBX@Z.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x140029C50 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x14002D590 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?IsCoreResourceSharedOwner@ADAPTER_DISPLAY@@QEBAEXZ @ 0x140031B58 (-IsCoreResourceSharedOwner@ADAPTER_DISPLAY@@QEBAEXZ.c)
 *     ?IsFullWDDMAdapter@DXGADAPTER@@QEBAEXZ @ 0x140054D34 (-IsFullWDDMAdapter@DXGADAPTER@@QEBAEXZ.c)
 *     Feature_Servicing_VidSchSuspendFix__private_IsEnabledDeviceUsageNoInline @ 0x140067AEC (Feature_Servicing_VidSchSuspendFix__private_IsEnabledDeviceUsageNoInline.c)
 *     ColorSpaceTransformInitIdentityTransform @ 0x140098F7C (ColorSpaceTransformInitIdentityTransform.c)
 *     ?AdjustFullscreenGammaRamp@ADAPTER_DISPLAY@@QEAAJPEBUDXGK_GAMMA_RAMP@@PEAU2@PEAUDXGK_GAMMA_ADJUSTMENT@@@Z @ 0x140196D9C (-AdjustFullscreenGammaRamp@ADAPTER_DISPLAY@@QEAAJPEBUDXGK_GAMMA_RAMP@@PEAU2@PEAUDXGK_GAMMA_ADJUS.c)
 *     ?ResumeScheduler@ADAPTER_RENDER@@QEAAXEE@Z @ 0x1402C89C8 (-ResumeScheduler@ADAPTER_RENDER@@QEAAXEE@Z.c)
 *     ?SuspendScheduler@ADAPTER_RENDER@@QEAAJEE@Z @ 0x1402C8AD8 (-SuspendScheduler@ADAPTER_RENDER@@QEAAJEE@Z.c)
 *     ?MonitorNotifyDXGIGammaRampChange@@YAJPEAXI@Z @ 0x1402DFBB8 (-MonitorNotifyDXGIGammaRampChange@@YAJPEAXI@Z.c)
 *     ?DmmUpdateGammaRampOnVidPnSource@@YAJQEAXIPEBUDXGK_GAMMA_RAMP@@@Z @ 0x1403133EC (-DmmUpdateGammaRampOnVidPnSource@@YAJQEAXIPEBUDXGK_GAMMA_RAMP@@@Z.c)
 *     ?DmmEnumClientVidPnPathTargetsFromSource@@YAJQEAXI_KQEAI@Z @ 0x14031592C (-DmmEnumClientVidPnPathTargetsFromSource@@YAJQEAXI_KQEAI@Z.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::UpdateGammaRamp(void **this, unsigned int a2)
{
  __int64 v2; // r12
  unsigned int v4; // r15d
  _DWORD *v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rbp
  __int64 v9; // rdi
  struct DXGK_GAMMA_ADJUSTMENT *v10; // r14
  __int64 v11; // rbx
  __int64 v12; // rax
  int inited; // eax
  ADAPTER_DISPLAY *v14; // rcx
  char v15; // r14
  int IsEnabledDeviceUsageNoInline; // eax
  DXGADAPTER *v17; // rcx
  __int64 v18; // rcx
  int v19; // eax
  unsigned __int64 i; // r8
  PERESOURCE *v21; // rcx
  int v22; // eax
  ADAPTER_RENDER **v23; // rcx
  unsigned int v24; // [rsp+80h] [rbp+8h] BYREF

  v2 = a2;
  v4 = 1;
  if ( !ADAPTER_DISPLAY::IsCoreResourceSharedOwner((ADAPTER_DISPLAY *)this) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 7648;
    DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"IsCoreResourceSharedOwner()", 7648LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( !*((_DWORD *)this[2] + 612) )
    return 0LL;
  v6 = this[16];
  v7 = 1006 * v2;
  if ( v6[1006 * v2 + 184] == 1 && (v8 = *(_QWORD *)&v6[v7 + 186]) != 0 || (v8 = *(_QWORD *)&v6[v7 + 182], v9 = 0LL, v8) )
  {
    v10 = *(struct DXGK_GAMMA_ADJUSTMENT **)(v8 + 8 * v2 + 1704);
    v9 = *(_QWORD *)(v8 + 8 * v2 + 1576);
    if ( v10 )
    {
      v11 = *(_QWORD *)(v8 + 8 * v2 + 1576);
      if ( v9 && *(_DWORD *)(v9 + 16) == 1 )
        v11 = 0LL;
      v12 = operator new(0x30uLL, 0x4B677844u, 256LL);
      v9 = v12;
      if ( !v12 )
      {
        WdLogSingleEntry1(6LL, v8);
        WdLogGlobalForLineNumber = 7697;
        DxgkLogInternalTriageEvent(
          0LL,
          262145LL,
          0xFFFFFFFFLL,
          L"Device 0x%I64x: Unable to allocate gamma ramp.",
          v8,
          0LL,
          0LL,
          0LL,
          0LL);
        LODWORD(v8) = -1073741801;
        return (unsigned int)v8;
      }
      *(_WORD *)(v12 + 40) = 0;
      *(_QWORD *)v12 = &rc_buffer<DispBroker::AlpcRequest<7>>::`vftable';
      *(_QWORD *)v12 = &DXGK_GAMMA_RAMP::`vftable';
      *(_DWORD *)(v12 + 8) = 1;
      *(_DWORD *)(v12 + 16) = 1;
      *(_QWORD *)(v12 + 24) = 0LL;
      *(_QWORD *)(v12 + 32) = 0LL;
      if ( v11 )
      {
        inited = DXGK_GAMMA_RAMP::Initialize((DXGK_GAMMA_RAMP *)v12, *(_DWORD *)(v11 + 16), *(const void **)(v11 + 32));
      }
      else
      {
        LODWORD(v8) = DXGK_GAMMA_RAMP::Initialize((DXGK_GAMMA_RAMP *)v12, 2, 0LL);
        if ( (int)v8 < 0 )
        {
LABEL_52:
          ReferenceCounted::Release((ReferenceCounted *)v9);
          return (unsigned int)v8;
        }
        inited = ColorSpaceTransformInitIdentityTransform((v9 + 16) & -(__int64)(v9 != 0));
      }
      LODWORD(v8) = inited;
      if ( inited < 0 )
        goto LABEL_52;
      LODWORD(v8) = ADAPTER_DISPLAY::AdjustFullscreenGammaRamp(
                      v14,
                      (const struct DXGK_GAMMA_RAMP *)v11,
                      (struct DXGK_GAMMA_RAMP *)v9,
                      v10);
      if ( (int)v8 < 0 )
        goto LABEL_52;
    }
    else if ( v9 )
    {
      _InterlockedAdd((volatile signed __int32 *)(v9 + 8), 1u);
    }
  }
  v15 = 0;
  IsEnabledDeviceUsageNoInline = Feature_Servicing_VidSchSuspendFix__private_IsEnabledDeviceUsageNoInline();
  if ( *((_BYTE *)this + 291) )
  {
    v17 = (DXGADAPTER *)this[2];
    if ( IsEnabledDeviceUsageNoInline )
    {
      if ( DXGADAPTER::IsFullWDDMAdapter(v17) )
      {
        v19 = *(_DWORD *)(*(_QWORD *)(v18 + 3128) + 756LL);
        if ( !_bittest(&v19, v2) )
        {
          if ( !DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)v18) )
          {
            WdLogSingleEntry0(1LL);
            WdLogGlobalForLineNumber = 7766;
            DxgkLogInternalTriageEvent(
              0LL,
              262146LL,
              0xFFFFFFFFLL,
              L"IsCoreResourceExclusiveOwner()",
              7766LL,
              0LL,
              0LL,
              0LL,
              0LL);
          }
          LODWORD(v8) = ADAPTER_RENDER::SuspendScheduler(*((ADAPTER_RENDER **)this[2] + 391), 0, 0);
          if ( (int)v8 < 0 )
          {
            WdLogSingleEntry1(2LL, this);
            WdLogGlobalForLineNumber = 7774;
LABEL_31:
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000LL,
              0xFFFFFFFFLL,
              L"Failed to suspend scheduler for setting gammaramp in adapter 0x%I64x",
              (__int64)this,
              0LL,
              0LL,
              0LL,
              0LL);
            goto LABEL_51;
          }
          v15 = 1;
        }
      }
    }
    else if ( DXGADAPTER::IsFullWDDMAdapter(v17) )
    {
      if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(v21) )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 7785;
        DxgkLogInternalTriageEvent(
          0LL,
          262146LL,
          0xFFFFFFFFLL,
          L"IsCoreResourceExclusiveOwner()",
          7785LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      LODWORD(v8) = ADAPTER_RENDER::SuspendScheduler(*((ADAPTER_RENDER **)this[2] + 391), 0, 0);
      if ( (int)v8 < 0 )
      {
        WdLogSingleEntry1(2LL, this);
        WdLogGlobalForLineNumber = 7793;
        goto LABEL_31;
      }
    }
  }
  LODWORD(v8) = DmmUpdateGammaRampOnVidPnSource(this[2], v2, (const struct DXGK_GAMMA_RAMP *)v9);
  v24 = 0;
  for ( i = 0LL; (int)DmmEnumClientVidPnPathTargetsFromSource(this[2], v2, i, &v24) >= 0 && v24 != -1; i = v4++ )
  {
    v22 = MonitorNotifyDXGIGammaRampChange(this[2], v24);
    v8 = v22;
    if ( v22 < 0 )
    {
      WdLogSingleEntry1(2LL, v22);
      WdLogGlobalForLineNumber = 7823;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"Failed to DXGI gamma ramp, (Status == 0x%I64x)!",
        v8,
        0LL,
        0LL,
        0LL,
        0LL);
    }
  }
  if ( (unsigned int)Feature_Servicing_VidSchSuspendFix__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( !v15 )
      goto LABEL_51;
    v23 = (ADAPTER_RENDER **)this[2];
    goto LABEL_50;
  }
  if ( *((_BYTE *)this + 291) && DXGADAPTER::IsFullWDDMAdapter((DXGADAPTER *)this[2]) )
LABEL_50:
    ADAPTER_RENDER::ResumeScheduler(v23[391], 0, 0);
LABEL_51:
  if ( v9 )
    goto LABEL_52;
  return (unsigned int)v8;
}
