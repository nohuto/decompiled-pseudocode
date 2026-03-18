/*
 * XREFs of DxgkExtractBundleObject @ 0x1401E2340
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     DxgkExtractBundleObjectInternal @ 0x1401E23C4 (DxgkExtractBundleObjectInternal.c)
 */

__int64 __fastcall DxgkExtractBundleObject(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx

  if ( (unsigned __int8)PsGetCurrentThreadPreviousMode() != 1 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2942;
    DxgkLogInternalTriageEvent(
      0LL,
      262146LL,
      0xFFFFFFFFLL,
      L"PsGetCurrentThreadPreviousMode() == UserMode",
      2942LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  LOBYTE(v2) = 1;
  LOBYTE(v3) = 1;
  return DxgkExtractBundleObjectInternal(v3, v2, 0LL, a1);
}
