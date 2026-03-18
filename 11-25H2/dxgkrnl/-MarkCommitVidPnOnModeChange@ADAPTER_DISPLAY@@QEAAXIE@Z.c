/*
 * XREFs of ?MarkCommitVidPnOnModeChange@ADAPTER_DISPLAY@@QEAAXIE@Z @ 0x1400293A8
 * Callers:
 *     ?OnMonitorConnectionChanged@ADAPTER_DISPLAY@@QEAAXII@Z @ 0x140197690 (-OnMonitorConnectionChanged@ADAPTER_DISPLAY@@QEAAXII@Z.c)
 *     ?DmmResetModeState@@YAJQEAXK@Z @ 0x1402BC8D0 (-DmmResetModeState@@YAJQEAXK@Z.c)
 *     ?SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@EPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x14030CF78 (-SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_.c)
 *     ?SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z @ 0x1403137F8 (-SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z.c)
 *     ?DxgkCddDisable@@YAJIII@Z @ 0x140412150 (-DxgkCddDisable@@YAJIII@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1400294B0 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 */

void __fastcall ADAPTER_DISPLAY::MarkCommitVidPnOnModeChange(DXGADAPTER **this, unsigned int a2, char a3)
{
  __int64 v4; // rdi

  v4 = a2;
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(this[2]) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 5855;
    DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"IsCoreResourceExclusiveOwner()", 5855LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( (unsigned int)v4 >= *((_DWORD *)this + 24) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 5856;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      0xFFFFFFFFLL,
      L"VidPnSourceId < m_NumVidPnSources",
      5856LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  *((_BYTE *)this[16] + 3984 * v4 + 763) = a3;
}
