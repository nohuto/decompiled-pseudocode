/*
 * XREFs of VidMmValidateHistoryBuffers @ 0x140097280
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140004FE8 (DxgkLogInternalTriageEvent.c)
 *     VidSchMarkDeviceAsError @ 0x14001F860 (VidSchMarkDeviceAsError.c)
 */

__int64 __fastcall VidMmValidateHistoryBuffers(int **a1, __int64 a2)
{
  int **i; // r8
  int *v3; // rbx
  __int64 v4; // rcx
  __int64 v5; // rcx

  for ( i = a1; i != &a1[a2]; ++i )
  {
    v3 = *i;
    if ( (**(_DWORD **)(**(_QWORD **)v3 + 392LL) & 0x4000) == 0 )
    {
      WdLogSingleEntry2(1LL, v3, **(_QWORD **)v3);
      WdLogGlobalForLineNumber = 26220;
      DxgkLogInternalTriageEvent(v5, 0x40000LL);
      return 3221225473LL;
    }
    if ( v3[42] < 2 )
    {
      WdLogSingleEntry2(1LL, v3, v3[42]);
      WdLogGlobalForLineNumber = 26235;
      DxgkLogInternalTriageEvent(v4, 0x40000LL);
      VidSchMarkDeviceAsError(*(_QWORD *)(*((_QWORD *)v3 + 1) + 32LL), 17LL);
      return 3221225473LL;
    }
  }
  return 0LL;
}
