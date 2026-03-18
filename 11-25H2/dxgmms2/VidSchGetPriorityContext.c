/*
 * XREFs of VidSchGetPriorityContext @ 0x1400A5860
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140004FE8 (DxgkLogInternalTriageEvent.c)
 */

__int64 __fastcall VidSchGetPriorityContext(__int64 a1, _DWORD *a2)
{
  __int64 v3; // rcx

  if ( a1 && a2 )
  {
    *a2 = *(_DWORD *)(a1 + 396);
    return 0LL;
  }
  else
  {
    WdLogSingleEntry1(1LL, -1073741811LL);
    WdLogGlobalForLineNumber = 6345;
    DxgkLogInternalTriageEvent(v3, 0x40000LL);
    return 3221225485LL;
  }
}
