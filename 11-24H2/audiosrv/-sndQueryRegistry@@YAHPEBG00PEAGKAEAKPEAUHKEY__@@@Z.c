/*
 * XREFs of ?sndQueryRegistry@@YAHPEBG00PEAGKAEAKPEAUHKEY__@@@Z @ 0x18005E428
 * Callers:
 *     ?_GetSoundAlias@@YAHPEBGPEAG_KAEAKHPEAUHKEY__@@0@Z @ 0x18005E1AC (-_GetSoundAlias@@YAHPEBGPEAG_KAEAKHPEAUHKEY__@@0@Z.c)
 * Callees:
 *     ?StringCbCatW@@YAJPEAG_KPEBG@Z @ 0x18005E69C (-StringCbCatW@@YAJPEAG_KPEBG@Z.c)
 *     ?sndRegQueryValue@@YAHPEAUHKEY__@@PEBG1KPEAG@Z @ 0x18006D070 (-sndRegQueryValue@@YAHPEAUHKEY__@@PEBG1KPEAG@Z.c)
 *     ?GetSoundRegistryPath@@YAHPEAG_KPEBG22@Z @ 0x18009E37C (-GetSoundRegistryPath@@YAHPEAG_KPEBG22@Z.c)
 *     ?sndRegQueryUserValue@@YAHPEBG0KPEAG@Z @ 0x1800A08D8 (-sndRegQueryUserValue@@YAHPEBG0KPEAG@Z.c)
 *     __security_check_cookie @ 0x1800A3DA0 (__security_check_cookie.c)
 */

__int64 __fastcall sndQueryRegistry(
        const unsigned __int16 *a1,
        const unsigned __int16 *a2,
        const unsigned __int16 *a3,
        unsigned __int16 *a4,
        unsigned int a5,
        unsigned int *a6,
        HKEY hkey)
{
  unsigned int v8; // ebx
  const unsigned __int16 *v9; // rdx
  int UserValue; // ecx
  HKEY v11; // rcx
  const unsigned __int16 *v12; // r8
  int Value; // edi
  DWORD pcbData; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v16; // [rsp+50h] [rbp-B8h] BYREF
  HKEY phkResult; // [rsp+58h] [rbp-B0h] BYREF
  DWORD v18; // [rsp+60h] [rbp-A8h] BYREF
  WCHAR SubKey[304]; // [rsp+68h] [rbp-A0h] BYREF

  LODWORD(v16) = 0;
  v8 = 0;
  if ( GetSoundRegistryPath(SubKey, (unsigned __int64)a2, a3, a2, a3) )
  {
    if ( hkey )
    {
      pcbData = 260;
      *a4 = 0;
      UserValue = RegGetValueW(hkey, SubKey, 0LL, 2u, 0LL, a4, &pcbData) == 0;
    }
    else
    {
      UserValue = sndRegQueryUserValue(SubKey, v9, 0x104u, a4);
    }
    if ( UserValue )
    {
      v18 = 4;
      v11 = HKEY_CURRENT_USER;
      if ( hkey )
        v11 = hkey;
      if ( !RegGetValueW(v11, SubKey, gszDefaultFlags, 0x10u, 0LL, &v16, &v18) )
        LODWORD(v16) = v16 & 0x380002;
      if ( !(unsigned int)StringCbCatW(SubKey, 0x25CuLL, gszSlash)
        && !(unsigned int)StringCbCatW(SubKey, 0x25CuLL, aszActiveKey) )
      {
        pcbData = 0;
        if ( hkey )
        {
          LODWORD(phkResult) = 4;
          Value = RegGetValueW(hkey, SubKey, 0LL, 2u, 0LL, &pcbData, (LPDWORD)&phkResult) == 0;
        }
        else
        {
          phkResult = 0LL;
          if ( RegOpenCurrentUser(1u, &phkResult) )
          {
LABEL_17:
            v8 = 1;
            goto LABEL_20;
          }
          Value = sndRegQueryValue(phkResult, SubKey, v12, 4u, (unsigned __int16 *)&pcbData);
          RegCloseKey(phkResult);
        }
        if ( !Value )
          goto LABEL_17;
        if ( !lstrcmpW((LPCWSTR)&pcbData, aszBoolOne) )
          v8 = 1;
      }
    }
  }
LABEL_20:
  if ( (_DWORD)v16 )
    *a6 |= v16;
  return v8;
}
