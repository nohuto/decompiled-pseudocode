/*
 * XREFs of ?HampUtilCreateVolatileUserRegKey@@YAJPEAXKPEAPEAUHKEY__@@@Z @ 0x18000D274
 * Callers:
 *     ?HampUtilQueryRegistryTerminateReason@@YAJPEBGPEAXPEAW4_HAM_TERMINATE_REASON@@@Z @ 0x18000D160 (-HampUtilQueryRegistryTerminateReason@@YAJPEBGPEAXPEAW4_HAM_TERMINATE_REASON@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18001C200 (__security_check_cookie.c)
 */

__int64 __fastcall HampUtilCreateVolatileUserRegKey(PSID Sid, __int64 a2, HKEY *a3)
{
  HKEY v4; // rdi
  signed int v5; // ebx
  WCHAR *v6; // rax
  __int64 v7; // r8
  __int64 v8; // r9
  LSTATUS v9; // eax
  HKEY v10; // rcx
  LSTATUS v11; // eax
  HKEY v12; // rcx
  WCHAR *v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rax
  char *v17; // r8
  WCHAR v18; // r9
  WCHAR *v19; // rax
  HKEY hKey; // [rsp+50h] [rbp-B0h] BYREF
  HKEY phkResult; // [rsp+58h] [rbp-A8h] BYREF
  _UNICODE_STRING UnicodeString; // [rsp+60h] [rbp-A0h] BYREF
  WCHAR SubKey[256]; // [rsp+70h] [rbp-90h] BYREF

  *(_QWORD *)&UnicodeString.Length = 33292288LL;
  phkResult = 0LL;
  hKey = 0LL;
  UnicodeString.Buffer = SubKey;
  v4 = 0LL;
  v5 = RtlConvertSidToUnicodeString(&UnicodeString, Sid, 0);
  if ( v5 < 0 )
    goto LABEL_32;
  v6 = SubKey;
  v7 = 254LL;
  do
  {
    if ( !*v6 )
      break;
    ++v6;
    --v7;
  }
  while ( v7 );
  v8 = (254 - v7) & -(__int64)(v7 != 0);
  v5 = v7 == 0 ? 0xC000000D : 0;
  if ( v7 )
  {
    v14 = &SubKey[v8];
    v15 = 254 - v8;
    if ( 254 != v8 )
    {
      v16 = 66LL;
      v17 = (char *)((char *)L"\\Software\\Microsoft\\Windows NT\\CurrentVersion\\HostActivityManager" - (char *)v14);
      do
      {
        if ( !v16 )
          break;
        v18 = *(WCHAR *)((char *)v14 + (_QWORD)v17);
        if ( !v18 )
          break;
        *v14 = v18;
        --v16;
        ++v14;
        --v15;
      }
      while ( v15 );
    }
    v19 = v14 - 1;
    if ( v15 )
      v19 = v14;
    v5 = v15 == 0 ? 0x80000005 : 0;
    *v19 = 0;
  }
  if ( v5 < 0 )
    goto LABEL_32;
  v9 = RegCreateKeyExW(HKEY_USERS, SubKey, 0, 0LL, 0, 1u, 0LL, &hKey, 0LL);
  v5 = v9;
  if ( v9 > 0 )
    v5 = (unsigned __int16)v9 | 0xC0070000;
  if ( v5 < 0 )
  {
LABEL_32:
    v10 = hKey;
  }
  else
  {
    v4 = hKey;
    v10 = 0LL;
    hKey = 0LL;
    v5 = 0;
  }
  if ( v10 )
    RegCloseKey(v10);
  if ( v5 < 0 )
    goto LABEL_23;
  v11 = RegCreateKeyExW(v4, L"Volatile", 0, 0LL, 1u, 1u, 0LL, &phkResult, 0LL);
  v5 = v11;
  if ( v11 > 0 )
    v5 = (unsigned __int16)v11 | 0xC0070000;
  if ( v5 < 0 )
  {
LABEL_23:
    v12 = phkResult;
  }
  else
  {
    v12 = 0LL;
    *a3 = phkResult;
    v5 = 0;
    phkResult = 0LL;
  }
  if ( v12 )
    RegCloseKey(v12);
  if ( v4 )
    RegCloseKey(v4);
  return (unsigned int)v5;
}
