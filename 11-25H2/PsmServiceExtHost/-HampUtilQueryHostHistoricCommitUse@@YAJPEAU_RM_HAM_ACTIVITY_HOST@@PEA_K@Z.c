/*
 * XREFs of ?HampUtilQueryHostHistoricCommitUse@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEA_K@Z @ 0x18000A444
 * Callers:
 *     ?HampHostNotifyZeroProcess@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@KPEAK@Z @ 0x180009594 (-HampHostNotifyZeroProcess@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINAT.c)
 *     ?HampActStartAsync@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_START_TYPE@@PEAW4_HAM_ACTIVITY_START_DENY_REASON@@PEA_K@Z @ 0x18001A7A8 (-HampActStartAsync@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_START_TYPE@@PEAW4_HAM_ACTIVITY_START_D.c)
 * Callees:
 *     __report_rangecheckfailure @ 0x1800728D4 (__report_rangecheckfailure.c)
 *     __security_check_cookie @ 0x1800A7850 (__security_check_cookie.c)
 */

__int64 __fastcall HampUtilQueryHostHistoricCommitUse(struct _RM_HAM_ACTIVITY_HOST *a1, unsigned __int64 *a2)
{
  __int64 v4; // rdx
  HKEY v5; // rsi
  HKEY v6; // rdi
  signed int v7; // ebx
  WCHAR *v8; // rax
  __int64 v9; // r8
  __int64 v10; // r9
  WCHAR *v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rax
  char *v14; // r8
  WCHAR v15; // r9
  WCHAR *v16; // rax
  HKEY v17; // rcx
  __int64 v19; // rcx
  const WCHAR *v20; // rdx
  LSTATUS v21; // eax
  LSTATUS v22; // eax
  LSTATUS v23; // eax
  LSTATUS v24; // eax
  unsigned int v25; // edx
  int v26; // [rsp+50h] [rbp-B0h] BYREF
  DWORD cbData; // [rsp+54h] [rbp-ACh] BYREF
  HKEY v28; // [rsp+58h] [rbp-A8h] BYREF
  HKEY phkResult; // [rsp+60h] [rbp-A0h] BYREF
  HKEY hKey; // [rsp+68h] [rbp-98h] BYREF
  BYTE Data[8]; // [rsp+70h] [rbp-90h] BYREF
  struct _UNICODE_STRING UnicodeString; // [rsp+78h] [rbp-88h] BYREF
  WCHAR SubKey[136]; // [rsp+90h] [rbp-70h] BYREF
  WCHAR v34[256]; // [rsp+1A0h] [rbp+A0h] BYREF

  *(_QWORD *)Data = 0LL;
  cbData = 0;
  *(_QWORD *)&UnicodeString.Length = 33292288LL;
  v26 = 0;
  hKey = 0LL;
  UnicodeString.Buffer = v34;
  v4 = 552LL;
  phkResult = 0LL;
  if ( a1 )
    v4 = (__int64)a1 + 488;
  v28 = 0LL;
  v5 = 0LL;
  v6 = 0LL;
  v7 = RtlConvertSidToUnicodeString(&UnicodeString, (PSID)v4, 0);
  if ( v7 < 0 )
    goto LABEL_17;
  v8 = v34;
  v9 = 254LL;
  do
  {
    if ( !*v8 )
      break;
    ++v8;
    --v9;
  }
  while ( v9 );
  v10 = (254 - v9) & -(__int64)(v9 != 0);
  v7 = v9 == 0 ? 0xC000000D : 0;
  if ( v9 )
  {
    v11 = &v34[v10];
    v12 = 254 - v10;
    if ( 254 != v10 )
    {
      v13 = 66LL;
      v14 = (char *)((char *)L"\\Software\\Microsoft\\Windows NT\\CurrentVersion\\HostActivityManager" - (char *)v11);
      do
      {
        if ( !v13 )
          break;
        v15 = *(WCHAR *)((char *)v11 + (_QWORD)v14);
        if ( !v15 )
          break;
        *v11 = v15;
        --v13;
        ++v11;
        --v12;
      }
      while ( v12 );
    }
    v16 = v11 - 1;
    if ( v12 )
      v16 = v11;
    v7 = v12 == 0 ? 0x80000005 : 0;
    *v16 = 0;
  }
  if ( v7 < 0 )
    goto LABEL_17;
  v24 = RegCreateKeyExW(HKEY_USERS, v34, 0, 0LL, 0, 4u, 0LL, &v28, 0LL);
  v7 = v24;
  if ( v24 > 0 )
    v7 = (unsigned __int16)v24 | 0xC0070000;
  if ( v7 < 0 )
  {
LABEL_17:
    v17 = v28;
  }
  else
  {
    v6 = v28;
    v17 = 0LL;
    v28 = 0LL;
    v7 = 0;
  }
  if ( v17 )
    RegCloseKey(v17);
  if ( v7 >= 0 )
  {
    v22 = RegOpenKeyExW(v6, L"CommitHistory", 0, 0x20019u, &hKey);
    v7 = v22;
    if ( v22 > 0 )
      v7 = (unsigned __int16)v22 | 0xC0070000;
    if ( v7 >= 0 )
    {
      v26 = 131;
      PsmGetAumidFromKey((char *)a1 + 24, &v26, SubKey);
      if ( (*(_DWORD *)(*((_QWORD *)a1 + 99) + 616LL) & 0x10000) != 0 )
      {
        v25 = v26;
        SubKey[v26 - 1] = 35;
        if ( 2 * (unsigned __int64)v25 >= 0x106 )
          _report_rangecheckfailure();
        SubKey[v25] = 0;
      }
      v23 = RegOpenKeyExW(hKey, SubKey, 0, 0x20019u, &phkResult);
      v7 = v23;
      if ( v23 > 0 )
        v7 = (unsigned __int16)v23 | 0xC0070000;
      if ( v7 >= 0 )
      {
        v5 = phkResult;
        v7 = 0;
        phkResult = 0LL;
      }
    }
  }
  if ( v6 )
    RegCloseKey(v6);
  if ( hKey )
    RegCloseKey(hKey);
  if ( phkResult )
    RegCloseKey(phkResult);
  if ( v7 >= 0 )
  {
    v19 = 624LL;
    if ( a1 )
      v19 = (__int64)a1 + 560;
    switch ( *(_DWORD *)v19 )
    {
      case 2:
        v20 = L"Mixed";
        break;
      case 4:
        v20 = L"Pure";
        break;
      case 8:
        v20 = L"System";
        break;
      default:
        NT_ASSERT("!"HampUtilHostTypeNameFromType bad host type"");
    }
    cbData = 8;
    v21 = RegQueryValueExW(v5, v20, 0LL, 0LL, Data, &cbData);
    v7 = v21;
    if ( v21 > 0 )
      v7 = (unsigned __int16)v21 | 0xC0070000;
    if ( v7 >= 0 )
    {
      if ( cbData == 8 )
      {
        v7 = 0;
        *a2 = *(_QWORD *)Data;
      }
      else
      {
        v7 = -1073739509;
      }
    }
  }
  if ( v5 )
    RegCloseKey(v5);
  return (unsigned int)v7;
}
