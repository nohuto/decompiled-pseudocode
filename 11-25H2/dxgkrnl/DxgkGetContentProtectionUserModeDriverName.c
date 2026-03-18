/*
 * XREFs of DxgkGetContentProtectionUserModeDriverName @ 0x1403D1580
 * Callers:
 *     DpiMiracastQueryMiracastSupportForFDO @ 0x1403D135C (DpiMiracastQueryMiracastSupportForFDO.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 */

__int64 __fastcall DxgkGetContentProtectionUserModeDriverName(__int64 a1)
{
  __int64 v1; // rax

  v1 = *(_QWORD *)(a1 + 3128);
  if ( v1 )
    return v1 + 640;
  WdLogSingleEntry0(2LL);
  WdLogGlobalForLineNumber = 1309;
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    0xFFFFFFFFLL,
    L"The selected adapter is display only adapter",
    1309LL,
    0LL,
    0LL,
    0LL,
    0LL);
  return 0LL;
}
