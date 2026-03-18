/*
 * XREFs of DxgkCreateBundleObject @ 0x1401E21A0
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     DxgkCreateBundleObjectInternal @ 0x1403F5DB0 (DxgkCreateBundleObjectInternal.c)
 */

__int64 __fastcall DxgkCreateBundleObject(__int64 a1)
{
  int v2; // edx
  int v3; // ecx
  int v4; // r8d

  if ( (unsigned __int8)PsGetCurrentThreadPreviousMode() != 1 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2555;
    DxgkLogInternalTriageEvent(
      0LL,
      262146LL,
      0xFFFFFFFFLL,
      L"PsGetCurrentThreadPreviousMode() == UserMode",
      2555LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  LOBYTE(v4) = 1;
  LOBYTE(v2) = 1;
  LOBYTE(v3) = 1;
  return DxgkCreateBundleObjectInternal(v3, v2, v4, 0, a1, 0LL);
}
