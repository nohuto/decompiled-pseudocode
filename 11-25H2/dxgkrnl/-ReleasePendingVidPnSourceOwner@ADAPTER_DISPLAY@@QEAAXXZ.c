/*
 * XREFs of ?ReleasePendingVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAXXZ @ 0x1401885C0
 * Callers:
 *     _lambda_2f1d6853485b5d874e628a4c686a9f7b_::_lambda_invoker_cdecl_ @ 0x14006E820 (_lambda_2f1d6853485b5d874e628a4c686a9f7b_--_lambda_invoker_cdecl_.c)
 *     ?_IssueMonitorEvent@MONITOR_MGR@@UEAAJIW4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1403552A0 (-_IssueMonitorEvent@MONITOR_MGR@@UEAAJIW4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXGK_D.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1400294B0 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAPEAVDXGDEVICE@@I@Z @ 0x140051FDC (-GetVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAPEAVDXGDEVICE@@I@Z.c)
 *     ?UpdateGammaRamp@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1402D74E8 (-UpdateGammaRamp@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 *     ?RemoveVidPnOwnership@ADAPTER_DISPLAY@@QEAAXI@Z @ 0x1402D7E98 (-RemoveVidPnOwnership@ADAPTER_DISPLAY@@QEAAXI@Z.c)
 *     ?DisablePrimaryOnDevice@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@IE@Z @ 0x1402D83A4 (-DisablePrimaryOnDevice@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@IE@Z.c)
 */

void __fastcall ADAPTER_DISPLAY::ReleasePendingVidPnSourceOwner(PERESOURCE **this)
{
  unsigned int i; // edi
  __int64 v3; // rcx
  PERESOURCE *v4; // rax
  struct DXGDEVICE *VidPnSourceOwner; // rax
  PERESOURCE v6; // rcx
  int v7; // ecx

  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(this[2]) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 3474;
    DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"IsCoreResourceExclusiveOwner()", 3474LL, 0LL, 0LL, 0LL, 0LL);
  }
  for ( i = 0; i < *((_DWORD *)this + 24); ++i )
  {
    v3 = 498LL * i;
    v4 = this[16];
    if ( BYTE5(v4[v3 + 95]) )
    {
      BYTE5(v4[v3 + 95]) = 0;
      VidPnSourceOwner = ADAPTER_DISPLAY::GetVidPnSourceOwner((ADAPTER_DISPLAY *)this, i);
      if ( VidPnSourceOwner )
      {
        v6 = this[2][391];
        if ( v6 )
        {
          v7 = *(_DWORD *)(&v6[7].26 + 1);
          ADAPTER_DISPLAY::DisablePrimaryOnDevice((ADAPTER_DISPLAY *)this, VidPnSourceOwner, i, _bittest(&v7, i));
        }
        ADAPTER_DISPLAY::RemoveVidPnOwnership((ADAPTER_DISPLAY *)this, i);
        ADAPTER_DISPLAY::UpdateGammaRamp((ADAPTER_DISPLAY *)this, i);
      }
    }
  }
}
