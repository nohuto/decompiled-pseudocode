/*
 * XREFs of RtlpGetAlternateCodePage @ 0x1800A9158
 * Callers:
 *     RtlpConsoleFallbackNameFromLocaleName @ 0x1800A86FC (RtlpConsoleFallbackNameFromLocaleName.c)
 * Callees:
 *     RtlpMuiRegGetInstalledLanguageIndexByName @ 0x180089F60 (RtlpMuiRegGetInstalledLanguageIndexByName.c)
 */

__int64 __fastcall RtlpGetAlternateCodePage(__int64 a1, wchar_t *a2, _QWORD *a3)
{
  unsigned int v5; // ebx
  __int64 i; // r8
  __int16 v8; // ax
  __int16 v9; // [rsp+50h] [rbp+18h] BYREF

  v9 = -1;
  v5 = 0;
  if ( a3 )
  {
    *a3 = 0LL;
    if ( (int)RtlpMuiRegGetInstalledLanguageIndexByName(a1, a2, 1, &v9) >= 0 )
    {
      for ( i = 0LL; i < 4; ++i )
      {
        v8 = *(_WORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL) + 2 * (i + 14LL * v9) + 20);
        if ( v8 )
        {
          if ( v8 == -1 )
            return (unsigned int)-1;
          ++v5;
        }
      }
      if ( v5 && v5 != -1 )
        *a3 = 28LL * v9 + 20 + *(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL);
    }
  }
  return v5;
}
