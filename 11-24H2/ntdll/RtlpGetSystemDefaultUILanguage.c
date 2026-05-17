/*
 * XREFs of RtlpGetSystemDefaultUILanguage @ 0x1800D16D0
 * Callers:
 *     RtlpQueryDefaultUILanguage @ 0x180035CC0 (RtlpQueryDefaultUILanguage.c)
 *     RtlpCleanupRegistryKeys @ 0x18013F570 (RtlpCleanupRegistryKeys.c)
 * Callees:
 *     RtlpCreateProcessRegistryInfo @ 0x18007CC10 (RtlpCreateProcessRegistryInfo.c)
 *     RtlpLoadInstallLanguageFallback @ 0x1800D1784 (RtlpLoadInstallLanguageFallback.c)
 *     NtIsUILanguageComitted @ 0x180163E00 (NtIsUILanguageComitted.c)
 *     NtQueryInstallUILanguage @ 0x180164800 (NtQueryInstallUILanguage.c)
 */

__int64 __fastcall RtlpGetSystemDefaultUILanguage(_WORD *a1, __int64 a2)
{
  int v2; // ebx
  __int64 v3; // rdi
  __int16 v5; // ax
  int v7; // eax
  __int16 v8; // [rsp+30h] [rbp+8h] BYREF
  __int64 v9; // [rsp+40h] [rbp+18h] BYREF

  v2 = 0;
  v3 = a2;
  v8 = 0;
  v9 = 0LL;
  if ( a1 )
  {
    *a1 = 0;
    if ( !a2 && (v7 = RtlpCreateProcessRegistryInfo(&v9, 0LL), v3 = v9, v2 = v7, v7 < 0)
      || !v3
      || (v5 = *(_WORD *)(v3 + 4)) == 0 )
    {
      v2 = NtQueryInstallUILanguage(&v8);
      if ( v2 < 0 )
        return (unsigned int)v2;
      if ( (int)NtIsUILanguageComitted() >= 0 )
      {
        if ( v3 )
        {
          RtlpLoadInstallLanguageFallback(v3, v3 + 6, v3 + 8);
          *(_WORD *)(v3 + 4) = v8;
        }
      }
      v5 = v8;
    }
    *a1 = v5;
    return (unsigned int)v2;
  }
  return 3221225485LL;
}
