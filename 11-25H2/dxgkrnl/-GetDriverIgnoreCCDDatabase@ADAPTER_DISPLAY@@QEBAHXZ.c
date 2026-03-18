/*
 * XREFs of ?GetDriverIgnoreCCDDatabase@ADAPTER_DISPLAY@@QEBAHXZ @ 0x1400587C8
 * Callers:
 *     ?IsCcdDatabaseIgnored@MONITOR_MGR@@UEBA_NXZ @ 0x14026C110 (-IsCcdDatabaseIgnored@MONITOR_MGR@@UEBA_NXZ.c)
 *     ?CreateMonitorSetId@DpiPersistence@@YAJAEBU_LUID@@IPEAU_UNICODE_STRING@@PEA_N@Z @ 0x1403687B0 (-CreateMonitorSetId@DpiPersistence@@YAJAEBU_LUID@@IPEAU_UNICODE_STRING@@PEA_N@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::GetDriverIgnoreCCDDatabase(ADAPTER_DISPLAY *this)
{
  if ( !*(_QWORD *)(*((_QWORD *)this + 2) + 3120LL) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 7060;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      0xFFFFFFFFLL,
      L"GetAdapter()->IsDisplayAdapter()",
      7060LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  return *((unsigned int *)this + 113);
}
