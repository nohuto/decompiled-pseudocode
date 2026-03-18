/*
 * XREFs of VidSchIsSyncObjectWaitUnordered @ 0x1400F80B0
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140004FE8 (DxgkLogInternalTriageEvent.c)
 */

char __fastcall VidSchIsSyncObjectWaitUnordered(__int64 a1, unsigned __int64 a2)
{
  int v3; // edx
  unsigned __int64 v5; // rcx
  __int64 v6; // rcx

  if ( !a1 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 12243;
    DxgkLogInternalTriageEvent(v6, 0x40000LL);
    return 0;
  }
  v3 = *(_DWORD *)(a1 + 48);
  if ( (unsigned int)(v3 - 4) > 2 )
  {
    if ( v3 != 2 )
      return 0;
    v5 = *(_BYTE *)(a1 + 28) ? *(_QWORD *)(*(_QWORD *)(a1 + 304) + 40LL) : *(_QWORD *)(a1 + 72);
    if ( v5 >= a2 )
      return 0;
  }
  return 1;
}
