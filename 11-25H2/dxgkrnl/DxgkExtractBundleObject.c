/*
 * XREFs of DxgkExtractBundleObject @ 0x1401DD170
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     DxgkExtractBundleObjectInternal @ 0x1401DD1F4 (DxgkExtractBundleObjectInternal.c)
 */

__int64 __fastcall DxgkExtractBundleObject(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx

  if ( (unsigned __int8)PsGetCurrentThreadPreviousMode() != 1 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2968;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      0xFFFFFFFFLL,
      L"PsGetCurrentThreadPreviousMode() == UserMode",
      2968LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  LOBYTE(v2) = 1;
  LOBYTE(v3) = 1;
  return DxgkExtractBundleObjectInternal(v3, v2, 0LL, a1);
}
