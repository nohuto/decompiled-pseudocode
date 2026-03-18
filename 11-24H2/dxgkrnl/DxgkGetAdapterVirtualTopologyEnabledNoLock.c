/*
 * XREFs of DxgkGetAdapterVirtualTopologyEnabledNoLock @ 0x1403C5080
 * Callers:
 *     DpiMiracastQueryMiracastSupportForFDO @ 0x1403C4EDC (DpiMiracastQueryMiracastSupportForFDO.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 */

__int64 __fastcall DxgkGetAdapterVirtualTopologyEnabledNoLock(__int64 a1, _DWORD *a2)
{
  __int64 v2; // rax

  v2 = *(_QWORD *)(a1 + 3120);
  if ( v2 )
  {
    *a2 = *(unsigned __int8 *)(v2 + 290);
    return 0LL;
  }
  else
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 1288;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"The selected adapter is render-only",
      1288LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
}
