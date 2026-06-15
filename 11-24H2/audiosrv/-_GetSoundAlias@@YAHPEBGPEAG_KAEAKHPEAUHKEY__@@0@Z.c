/*
 * XREFs of ?_GetSoundAlias@@YAHPEBGPEAG_KAEAKHPEAUHKEY__@@0@Z @ 0x18005E1AC
 * Callers:
 *     s_sndevtResolveSoundAlias @ 0x18007F820 (s_sndevtResolveSoundAlias.c)
 * Callees:
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x180043E20 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?sndQueryRegistry@@YAHPEBG00PEAGKAEAKPEAUHKEY__@@@Z @ 0x18005E428 (-sndQueryRegistry@@YAHPEBG00PEAGKAEAKPEAUHKEY__@@@Z.c)
 *     __security_check_cookie @ 0x1800A3DA0 (__security_check_cookie.c)
 */

__int64 __fastcall _GetSoundAlias(
        const unsigned __int16 *a1,
        unsigned __int16 *a2,
        __int64 a3,
        unsigned int *a4,
        int a5,
        HKEY hkey,
        unsigned __int16 *a7)
{
  __int64 result; // rax
  unsigned int Registry; // edi
  const unsigned __int16 *v12; // r15
  __int64 v13; // rcx
  const unsigned __int16 *v14; // rax
  LSTATUS ValueW; // ebx
  unsigned int pdwType; // [rsp+20h] [rbp-E0h]
  DWORD pcbData; // [rsp+40h] [rbp-C0h] BYREF
  HKEY phkResult; // [rsp+48h] [rbp-B8h] BYREF
  WCHAR String1[264]; // [rsp+50h] [rbp-B0h] BYREF

  result = 0LL;
  if ( a1 && a2 && hkey )
  {
    if ( a7 && *a7 )
      *a4 |= 0x80u;
    Registry = 0;
    v12 = szSystemDefaultSound;
    pcbData = 256;
    if ( lstrcmpW(a1, gszDefaultBeepOldAlias) )
      v12 = a1;
    if ( !RegGetValueW(hkey, gszSchemesRootKey, 0LL, 2u, 0LL, String1, &pcbData)
      && !lstrcmpiW(String1, gszNoSoundsSchemeName) )
    {
      *a4 |= 2u;
    }
    v13 = 40LL;
    v14 = v12;
    do
    {
      if ( !*v14 )
        break;
      ++v14;
      --v13;
    }
    while ( v13 );
    if ( v13 )
    {
      if ( (*(char *)a4 >= 0
         || !a7
         || !*a7
         || (Registry = sndQueryRegistry((const unsigned __int16 *)v13, a7, v12, a2, pdwType, a4, hkey)) == 0)
        && ((*a4 & 0x400000) == 0
         || (Registry = sndQueryRegistry((const unsigned __int16 *)v13, aszExplorer, v12, a2, pdwType, a4, hkey)) == 0) )
      {
        Registry = sndQueryRegistry((const unsigned __int16 *)v13, aszDefault, v12, a2, pdwType, a4, hkey);
        if ( !Registry )
        {
          phkResult = 0LL;
          pcbData = 260;
          StringCchPrintfW(String1, 260LL, c_szPathFormat, &PSZ_SOUNDS_REGKEY, v12);
          if ( !RegOpenKeyExW(HKEY_LOCAL_MACHINE, String1, 0, 0x20019u, &phkResult) )
          {
            ValueW = RegGetValueW(phkResult, 0LL, PSZ_SOUNDS_SOUND, Registry + 2, 0LL, a2, &pcbData);
            RegCloseKey(phkResult);
            return ValueW == 0;
          }
        }
      }
    }
    return Registry;
  }
  return result;
}
