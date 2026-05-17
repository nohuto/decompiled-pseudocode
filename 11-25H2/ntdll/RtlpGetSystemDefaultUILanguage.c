/*
 * XREFs of RtlpGetSystemDefaultUILanguage @ 0x1800A8000
 * Callers:
 *     RtlpQueryDefaultUILanguage @ 0x18008D650 (RtlpQueryDefaultUILanguage.c)
 *     RtlpCleanupRegistryKeys @ 0x180140C60 (RtlpCleanupRegistryKeys.c)
 * Callees:
 *     RtlpCreateProcessRegistryInfo @ 0x18008BAC0 (RtlpCreateProcessRegistryInfo.c)
 *     RtlpLoadInstallLanguageFallback @ 0x1800A7CAC (RtlpLoadInstallLanguageFallback.c)
 *     NtIsUILanguageComitted @ 0x180165390 (NtIsUILanguageComitted.c)
 *     NtQueryInstallUILanguage @ 0x180165D90 (NtQueryInstallUILanguage.c)
 */

__int64 __fastcall RtlpGetSystemDefaultUILanguage(_WORD *a1, _WORD *a2, __int64 a3)
{
  int v3; // ebx
  _WORD *v4; // rdi
  __int16 v6; // ax
  __int64 v7; // r9
  int ProcessRegistryInfo; // eax
  __int16 v10; // [rsp+30h] [rbp+8h] BYREF
  _WORD *v11; // [rsp+40h] [rbp+18h] BYREF

  v3 = 0;
  v4 = a2;
  v10 = 0;
  v11 = 0LL;
  if ( a1 )
  {
    *a1 = 0;
    if ( !a2
      && (ProcessRegistryInfo = RtlpCreateProcessRegistryInfo((__int64 *)&v11),
          v4 = v11,
          v3 = ProcessRegistryInfo,
          ProcessRegistryInfo < 0)
      || !v4
      || (v6 = v4[2]) == 0 )
    {
      v3 = NtQueryInstallUILanguage(&v10, a2, a3);
      if ( v3 < 0 )
        return (unsigned int)v3;
      if ( (int)NtIsUILanguageComitted() >= 0 )
      {
        if ( v4 )
        {
          RtlpLoadInstallLanguageFallback((__int64)v4, v4 + 3, v4 + 4, v7);
          v4[2] = v10;
        }
      }
      v6 = v10;
    }
    *a1 = v6;
    return (unsigned int)v3;
  }
  return 3221225485LL;
}
