/*
 * XREFs of DpiIsFeatureEnabled2 @ 0x14007BFE0
 * Callers:
 *     DxgkInternalDeviceIoctl @ 0x1403AECB0 (DxgkInternalDeviceIoctl.c)
 * Callees:
 *     DpiIsFeatureEnabled @ 0x140247234 (DpiIsFeatureEnabled.c)
 */

__int64 __fastcall DpiIsFeatureEnabled2(__int64 a1, unsigned int *a2)
{
  unsigned int v2; // eax
  __int64 result; // rax

  v2 = a2[1];
  if ( !v2 )
    return DpiIsFeatureEnabled(a1, *a2, 0LL, a2 + 2);
  WdLogSingleEntry1(3LL, v2);
  result = 3221225485LL;
  WdLogGlobalForLineNumber = 3335;
  return result;
}
