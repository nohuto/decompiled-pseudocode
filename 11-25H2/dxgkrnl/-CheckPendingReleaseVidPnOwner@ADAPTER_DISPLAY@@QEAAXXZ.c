/*
 * XREFs of ?CheckPendingReleaseVidPnOwner@ADAPTER_DISPLAY@@QEAAXXZ @ 0x140063178
 * Callers:
 *     _lambda_2f1d6853485b5d874e628a4c686a9f7b_::_lambda_invoker_cdecl_ @ 0x14006E820 (_lambda_2f1d6853485b5d874e628a4c686a9f7b_--_lambda_invoker_cdecl_.c)
 *     ?_IssueMonitorEvent@MONITOR_MGR@@UEAAJIW4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1403552A0 (-_IssueMonitorEvent@MONITOR_MGR@@UEAAJIW4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXGK_D.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 */

void __fastcall ADAPTER_DISPLAY::CheckPendingReleaseVidPnOwner(ADAPTER_DISPLAY *this)
{
  unsigned int i; // ebx

  for ( i = 0; i < *((_DWORD *)this + 24); ++i )
  {
    if ( *(_BYTE *)(3984LL * i + *((_QWORD *)this + 16) + 765) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 6301;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        0xFFFFFFFFLL,
        L"!m_pDisplaySource[VidPnSourceId].m_PendingReleaseVidPnOwner",
        6301LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
  }
}
