/*
 * XREFs of ?GetDriverIgnoreCCDDatabase@ADAPTER_DISPLAY@@QEBAHXZ @ 0x140058248
 * Callers:
 *     ?IsCcdDatabaseIgnored@MONITOR_MGR@@UEBA_NXZ @ 0x140273070 (-IsCcdDatabaseIgnored@MONITOR_MGR@@UEBA_NXZ.c)
 *     ?CreateMonitorSetId@DpiPersistence@@YAJAEBU_LUID@@IPEAU_UNICODE_STRING@@PEA_N@Z @ 0x14033CEB0 (-CreateMonitorSetId@DpiPersistence@@YAJAEBU_LUID@@IPEAU_UNICODE_STRING@@PEA_N@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::GetDriverIgnoreCCDDatabase(ADAPTER_DISPLAY *this)
{
  if ( !*(_QWORD *)(*((_QWORD *)this + 2) + 3120LL) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 7083;
    DxgkLogInternalTriageEvent(
      0LL,
      262146LL,
      0xFFFFFFFFLL,
      L"GetAdapter()->IsDisplayAdapter()",
      7083LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  return *((unsigned int *)this + 115);
}
