/*
 * XREFs of DxgkGetAdapterVirtualTopologyEnabledNoLock @ 0x1403D1500
 * Callers:
 *     DpiMiracastQueryMiracastSupportForFDO @ 0x1403D135C (DpiMiracastQueryMiracastSupportForFDO.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
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
    WdLogGlobalForLineNumber = 1286;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"The selected adapter is render-only",
      1286LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
}
