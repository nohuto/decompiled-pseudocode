/*
 * XREFs of ?ReleaseVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAEPEAVDXGDEVICE@@@Z @ 0x140198118
 * Callers:
 *     ?StopDisplayDevices@ADAPTER_RENDER@@QEAAXW4DXGADAPTER_DEVICELISTTYPE@@PEAVDXGADAPTER@@E@Z @ 0x14019DA2C (-StopDisplayDevices@ADAPTER_RENDER@@QEAAXW4DXGADAPTER_DEVICELISTTYPE@@PEAVDXGADAPTER@@E@Z.c)
 *     ?DxgkReleaseVidPnSourceOwnerAndRestartCdds@@YAXPEAVDXGDEVICE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1401B7D90 (-DxgkReleaseVidPnSourceOwnerAndRestartCdds@@YAXPEAVDXGDEVICE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT.c)
 *     ?SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAGS@@PEBQEAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x140285A10 (-SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAG.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?IsCoreResourceExclusiveOwner@ADAPTER_RENDER@@QEBAEXZ @ 0x140026F40 (-IsCoreResourceExclusiveOwner@ADAPTER_RENDER@@QEBAEXZ.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1400294B0 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsEmulatedVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@@Z @ 0x140031AE0 (-IsEmulatedVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@@Z.c)
 *     ?IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@@Z @ 0x14003510C (-IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@@Z.c)
 *     ?UpdateGammaRamp@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1402D74E8 (-UpdateGammaRamp@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 *     ?RemoveVidPnOwnership@ADAPTER_DISPLAY@@QEAAXI@Z @ 0x1402D7E98 (-RemoveVidPnOwnership@ADAPTER_DISPLAY@@QEAAXI@Z.c)
 *     ?DisablePrimaryOnDevice@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@IE@Z @ 0x1402D83A4 (-DisablePrimaryOnDevice@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@IE@Z.c)
 *     ?IsVidPnSourcePrimaryValid@DXGDEVICE@@QEAAEI@Z @ 0x1402D8760 (-IsVidPnSourcePrimaryValid@DXGDEVICE@@QEAAEI@Z.c)
 */

char __fastcall ADAPTER_DISPLAY::ReleaseVidPnSourceOwner(PERESOURCE **this, struct DXGDEVICE *a2)
{
  char v4; // r14
  unsigned int i; // esi
  PERESOURCE *v6; // rdx
  unsigned int v7; // esi
  __int64 v8; // rbp
  PERESOURCE *v9; // rax

  if ( !ADAPTER_RENDER::IsCoreResourceExclusiveOwner(*((ADAPTER_RENDER **)a2 + 2)) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 3235;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      0xFFFFFFFFLL,
      L"pDevice->GetRenderCore()->IsCoreResourceExclusiveOwner()",
      3235LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(this[2]) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 3236;
    DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"IsCoreResourceExclusiveOwner()", 3236LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( !ADAPTER_DISPLAY::IsVidPnSourceOwner((ADAPTER_DISPLAY *)this, a2)
    && !ADAPTER_DISPLAY::IsEmulatedVidPnSourceOwner((ADAPTER_DISPLAY *)this, a2) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 3237;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      0xFFFFFFFFLL,
      L"IsVidPnSourceOwner(pDevice) || IsEmulatedVidPnSourceOwner(pDevice)",
      3237LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  WdLogSingleEntry1(4LL, a2);
  WdLogGlobalForLineNumber = 3239;
  v4 = 0;
  for ( i = 0; i < *((_DWORD *)this + 24); ++i )
  {
    v6 = (PERESOURCE *)*((_QWORD *)a2 + 235);
    if ( v6 == *(PERESOURCE **)(*((_QWORD *)a2 + 2) + 16LL) && a2 == (struct DXGDEVICE *)this[16][498 * i + 91] )
    {
      if ( this[2] != v6 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 3255;
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          0xFFFFFFFFLL,
          L"this->GetAdapter() == pDevice->GetDisplayAdapter(VidPnSourceId)",
          3255LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      if ( DXGDEVICE::IsVidPnSourcePrimaryValid(a2, i) )
      {
        v4 = 1;
        ADAPTER_DISPLAY::DisablePrimaryOnDevice((ADAPTER_DISPLAY *)this, a2, 0xFFFFFFFD, 0);
        break;
      }
    }
  }
  v7 = 0;
  if ( *((_DWORD *)this + 24) )
  {
    while ( 1 )
    {
      v8 = 498LL * v7;
      v9 = this[16];
      if ( a2 == (struct DXGDEVICE *)v9[v8 + 93] )
        break;
      if ( a2 == (struct DXGDEVICE *)v9[v8 + 91] )
      {
        if ( this[2] != *((PERESOURCE **)a2 + 235) )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 3288;
          DxgkLogInternalTriageEvent(
            0LL,
            262146,
            0xFFFFFFFFLL,
            L"this->GetAdapter() == pDevice->GetDisplayAdapter(VidPnSourceId)",
            3288LL,
            0LL,
            0LL,
            0LL,
            0LL);
        }
        ADAPTER_DISPLAY::RemoveVidPnOwnership((ADAPTER_DISPLAY *)this, v7);
        goto LABEL_26;
      }
LABEL_27:
      if ( ++v7 >= *((_DWORD *)this + 24) )
        return v4;
    }
    if ( this[2] != *((PERESOURCE **)a2 + 235) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 3281;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        0xFFFFFFFFLL,
        L"this->GetAdapter() == pDevice->GetDisplayAdapter(VidPnSourceId)",
        3281LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    this[16][v8 + 93] = 0LL;
LABEL_26:
    ADAPTER_DISPLAY::UpdateGammaRamp((ADAPTER_DISPLAY *)this, v7);
    goto LABEL_27;
  }
  return v4;
}
