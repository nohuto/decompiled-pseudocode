/*
 * XREFs of ?CheckPendingReleaseVidPnOwner@ADAPTER_DISPLAY@@QEAAXXZ @ 0x140063A68
 * Callers:
 *     _lambda_2f1d6853485b5d874e628a4c686a9f7b_::_lambda_invoker_cdecl_ @ 0x14006F2B0 (_lambda_2f1d6853485b5d874e628a4c686a9f7b_--_lambda_invoker_cdecl_.c)
 *     ?_IssueMonitorEvent@MONITOR_MGR@@UEAAJIW4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14028DD10 (-_IssueMonitorEvent@MONITOR_MGR@@UEAAJIW4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXGK_D.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 */

void __fastcall ADAPTER_DISPLAY::CheckPendingReleaseVidPnOwner(ADAPTER_DISPLAY *this)
{
  unsigned int i; // ebx

  for ( i = 0; i < *((_DWORD *)this + 24); ++i )
  {
    if ( *(_BYTE *)(4024LL * i + *((_QWORD *)this + 16) + 765) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 6324;
      DxgkLogInternalTriageEvent(
        0LL,
        262146LL,
        0xFFFFFFFFLL,
        L"!m_pDisplaySource[VidPnSourceId].m_PendingReleaseVidPnOwner",
        6324LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
  }
}
