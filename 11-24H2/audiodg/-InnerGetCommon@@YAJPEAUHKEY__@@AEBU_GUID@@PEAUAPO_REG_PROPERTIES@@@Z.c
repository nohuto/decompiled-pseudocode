/*
 * XREFs of ?InnerGetCommon@@YAJPEAUHKEY__@@AEBU_GUID@@PEAUAPO_REG_PROPERTIES@@@Z @ 0x140023838
 * Callers:
 *     ?InnerGetAPOProperties@@YAJPEAUHKEY__@@AEBU_GUID@@PEAUAPO_REG_PROPERTIES@@@Z @ 0x1400236AC (-InnerGetAPOProperties@@YAJPEAUHKEY__@@AEBU_GUID@@PEAUAPO_REG_PROPERTIES@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x140058CF0 (__security_check_cookie.c)
 */

__int64 __fastcall InnerGetCommon(HKEY hKey, const struct _GUID *a2, struct APO_REG_PROPERTIES *a3)
{
  CLSID v3; // xmm0
  LSTATUS v6; // eax
  unsigned int v7; // ebx
  bool v8; // cc
  WCHAR *szFriendlyName; // rcx
  __int64 v10; // rsi
  __int64 v11; // rdx
  WCHAR v12; // ax
  WCHAR *v13; // rax
  WCHAR *szCopyrightInfo; // rcx
  WCHAR v15; // ax
  WCHAR *v16; // rax
  bool v18; // cc
  LPDWORD lpcbData; // [rsp+28h] [rbp-D8h]
  DWORD cbData; // [rsp+30h] [rbp-D0h] BYREF
  BYTE lpData[4]; // [rsp+34h] [rbp-CCh] BYREF
  DWORD Type; // [rsp+38h] [rbp-C8h] BYREF
  BYTE Data[1024]; // [rsp+40h] [rbp-C0h] BYREF

  v3 = *a2;
  cbData = 1024;
  lpcbData = &cbData;
  a3->clsid = v3;
  *(_DWORD *)lpData = 0;
  Type = 0;
  v6 = RegQueryValueExW(hKey, L"FriendlyName", 0LL, &Type, Data, lpcbData);
  v7 = v6;
  v8 = v6 <= 0;
  if ( v6 )
    goto LABEL_30;
  szFriendlyName = a3->szFriendlyName;
  v10 = 256LL;
  v11 = 256LL;
  do
  {
    if ( v11 == -2147483390 )
      break;
    v12 = *(WCHAR *)((char *)szFriendlyName + Data - (BYTE *)a3->szFriendlyName);
    if ( !v12 )
      break;
    *szFriendlyName++ = v12;
    --v11;
  }
  while ( v11 );
  v13 = szFriendlyName - 1;
  if ( v11 )
    v13 = szFriendlyName;
  *v13 = 0;
  v7 = v11 == 0 ? 0x8007007A : 0;
  if ( v11 )
  {
    cbData = 1024;
    v6 = RegQueryValueExW(hKey, L"Copyright", 0LL, &Type, Data, &cbData);
    v7 = v6;
    v8 = v6 <= 0;
    if ( !v6 )
    {
      szCopyrightInfo = a3->szCopyrightInfo;
      do
      {
        if ( v10 == -2147483390 )
          break;
        v15 = *(WCHAR *)((char *)szCopyrightInfo + Data - (BYTE *)a3->szCopyrightInfo);
        if ( !v15 )
          break;
        *szCopyrightInfo++ = v15;
        --v10;
      }
      while ( v10 );
      v16 = szCopyrightInfo - 1;
      if ( v10 )
        v16 = szCopyrightInfo;
      *v16 = 0;
      v7 = v10 == 0 ? 0x8007007A : 0;
      if ( !v10 )
        return v7;
      cbData = 4;
      v6 = RegQueryValueExW(hKey, L"MajorVersion", 0LL, &Type, lpData, &cbData);
      v18 = v6 <= 0;
      if ( !v6 )
      {
        a3->u32MajorVersion = *(_DWORD *)lpData;
        cbData = 4;
        v6 = RegQueryValueExW(hKey, L"MinorVersion", 0LL, &Type, lpData, &cbData);
        v18 = v6 <= 0;
        if ( !v6 )
        {
          a3->u32MinorVersion = *(_DWORD *)lpData;
          cbData = 4;
          v6 = RegQueryValueExW(hKey, L"Flags", 0LL, &Type, lpData, &cbData);
          v18 = v6 <= 0;
          if ( !v6 )
          {
            a3->Flags = *(_DWORD *)lpData;
            cbData = 4;
            v6 = RegQueryValueExW(hKey, L"MinInputConnections", 0LL, &Type, lpData, &cbData);
            v18 = v6 <= 0;
            if ( !v6 )
            {
              a3->u32MinInputConnections = *(_DWORD *)lpData;
              cbData = 4;
              v6 = RegQueryValueExW(hKey, L"MaxInputConnections", 0LL, &Type, lpData, &cbData);
              v18 = v6 <= 0;
              if ( !v6 )
              {
                a3->u32MaxInputConnections = *(_DWORD *)lpData;
                cbData = 4;
                v6 = RegQueryValueExW(hKey, L"MinOutputConnections", 0LL, &Type, lpData, &cbData);
                v18 = v6 <= 0;
                if ( !v6 )
                {
                  a3->u32MinOutputConnections = *(_DWORD *)lpData;
                  cbData = 4;
                  v6 = RegQueryValueExW(hKey, L"MaxOutputConnections", 0LL, &Type, lpData, &cbData);
                  v18 = v6 <= 0;
                  if ( !v6 )
                  {
                    a3->u32MaxOutputConnections = *(_DWORD *)lpData;
                    cbData = 4;
                    v6 = RegQueryValueExW(hKey, L"MaxInstances", 0LL, &Type, lpData, &cbData);
                    v18 = v6 <= 0;
                    if ( !v6 )
                    {
                      a3->u32MaxInstances = *(_DWORD *)lpData;
                      return v7;
                    }
                  }
                }
              }
            }
          }
        }
      }
      if ( v18 )
        return (unsigned int)v6;
      return (unsigned __int16)v6 | 0x80070000;
    }
LABEL_30:
    if ( v8 )
      return v7;
    return (unsigned __int16)v6 | 0x80070000;
  }
  return v7;
}
