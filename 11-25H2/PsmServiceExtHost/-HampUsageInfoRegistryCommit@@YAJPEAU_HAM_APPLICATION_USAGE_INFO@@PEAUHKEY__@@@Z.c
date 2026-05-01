/*
 * XREFs of ?HampUsageInfoRegistryCommit@@YAJPEAU_HAM_APPLICATION_USAGE_INFO@@PEAUHKEY__@@@Z @ 0x18005B330
 * Callers:
 *     ?HampUsageInfoRegistrySaveForApp@@YAJPEBGPEAX0PEAU_HAM_APPLICATION_USAGE_INFO@@@Z @ 0x18005AE30 (-HampUsageInfoRegistrySaveForApp@@YAJPEBGPEAX0PEAU_HAM_APPLICATION_USAGE_INFO@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HampUsageInfoRegistryCommit(struct _HAM_APPLICATION_USAGE_INFO *a1, HKEY a2)
{
  LSTATUS v3; // eax
  signed int v4; // ebx
  __int64 i; // rdi
  const BYTE *lpData; // rcx
  LSTATUS v8; // eax
  HKEY hKey; // [rsp+70h] [rbp+18h] BYREF

  hKey = 0LL;
  v3 = RegCreateKeyExW(a2, L"LU", 0, 0LL, 0, 2u, 0LL, &hKey, 0LL);
  v4 = v3;
  if ( v3 > 0 )
    v4 = (unsigned __int16)v3 | 0xC0070000;
  if ( v4 >= 0 )
  {
    for ( i = 0LL; (unsigned int)i < 4; i = (unsigned int)(i + 1) )
    {
      lpData = (const BYTE *)a1 + *((unsigned int *)&LastUsageRegInfo + 6 * i + 3);
      if ( *(_QWORD *)lpData != -1LL )
      {
        v8 = RegSetValueExW(
               hKey,
               (LPCWSTR)*(&LastUsageRegInfo + 3 * i),
               0,
               *((_DWORD *)&LastUsageRegInfo + 6 * i + 2),
               lpData,
               *((_DWORD *)&LastUsageRegInfo + 6 * i + 4));
        v4 = v8;
        if ( v8 > 0 )
          v4 = (unsigned __int16)v8 | 0xC0070000;
        if ( v4 < 0 )
          goto LABEL_9;
      }
    }
    v4 = 0;
  }
LABEL_9:
  if ( hKey )
    RegCloseKey(hKey);
  return (unsigned int)v4;
}
