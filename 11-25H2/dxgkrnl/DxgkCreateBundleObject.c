/*
 * XREFs of DxgkCreateBundleObject @ 0x1401DCFD0
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     DxgkCreateBundleObjectInternal @ 0x1403FBE18 (DxgkCreateBundleObjectInternal.c)
 */

__int64 __fastcall DxgkCreateBundleObject(__int64 a1)
{
  int v2; // edx
  int v3; // ecx
  int v4; // r8d

  if ( (unsigned __int8)PsGetCurrentThreadPreviousMode() != 1 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2581;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      0xFFFFFFFFLL,
      L"PsGetCurrentThreadPreviousMode() == UserMode",
      2581LL,
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
