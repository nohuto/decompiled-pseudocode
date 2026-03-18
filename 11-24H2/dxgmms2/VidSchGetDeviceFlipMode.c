/*
 * XREFs of VidSchGetDeviceFlipMode @ 0x1400F3F40
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140004FE8 (DxgkLogInternalTriageEvent.c)
 */

__int64 __fastcall VidSchGetDeviceFlipMode(__int64 a1, unsigned int a2, _DWORD *a3)
{
  int v3; // eax
  __int64 v4; // rsi
  int v7; // edi
  __int64 v8; // rcx

  v3 = *(_DWORD *)(a1 + 1216);
  v4 = *(_QWORD *)(a1 + 32);
  if ( v3 == 1 )
  {
    *a3 = 0;
  }
  else if ( v3 == 2 )
  {
    *a3 = 1;
  }
  if ( !*a3 )
    return *(unsigned int *)(v4 + 2796);
  if ( (unsigned int)(*a3 - 1) <= 3 )
  {
    if ( *(int *)(v4 + 2800) < 4 && !*(_BYTE *)(v4 + 156) )
      return *(unsigned int *)(v4 + 2800);
    if ( a2 >= *(_DWORD *)(v4 + 40) )
    {
      WdLogSingleEntry1(1LL, a2);
      WdLogGlobalForLineNumber = 9940;
      DxgkLogInternalTriageEvent(v8, 0x40000LL);
    }
    else
    {
      ExAcquireResourceExclusiveLite((PERESOURCE)(v4 + 1344), 1u);
      v7 = *(_DWORD *)(v4 + 2464);
      ExReleaseResourceLite((PERESOURCE)(v4 + 1344));
      if ( _bittest(&v7, a2) )
        return *(unsigned int *)(v4 + 2800);
    }
    return *(unsigned int *)(v4 + 2796);
  }
  return 0LL;
}
