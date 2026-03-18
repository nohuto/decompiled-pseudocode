/*
 * XREFs of VidSchGetMonitorPowerState @ 0x1400FB4F0
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140004FE8 (DxgkLogInternalTriageEvent.c)
 */

__int64 __fastcall VidSchGetMonitorPowerState(__int64 a1)
{
  struct _ERESOURCE *v2; // rdi
  unsigned int v3; // ebx
  __int64 v5; // rcx

  if ( a1 )
  {
    v2 = (struct _ERESOURCE *)(a1 + 1344);
    ExAcquireResourceExclusiveLite((PERESOURCE)(a1 + 1344), 1u);
    v3 = *(_DWORD *)(a1 + 2464);
    ExReleaseResourceLite(v2);
    return v3;
  }
  else
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 9692;
    DxgkLogInternalTriageEvent(v5, 0x40000LL);
    return 0LL;
  }
}
