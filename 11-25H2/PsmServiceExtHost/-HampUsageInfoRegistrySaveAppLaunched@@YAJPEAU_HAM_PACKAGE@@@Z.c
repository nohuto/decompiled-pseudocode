/*
 * XREFs of ?HampUsageInfoRegistrySaveAppLaunched@@YAJPEAU_HAM_PACKAGE@@@Z @ 0x180059570
 * Callers:
 *     ?HampPkgCommitAppsUsageInfo@@YAXPEAU_HAM_PACKAGE@@@Z @ 0x1800165E0 (-HampPkgCommitAppsUsageInfo@@YAXPEAU_HAM_PACKAGE@@@Z.c)
 * Callees:
 *     _tlgKeywordOn @ 0x180057540 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x18005C198 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 *     ?HampSystemSetValue@@YAJPEAUHKEY__@@PEBGKPEAXK@Z @ 0x180062B04 (-HampSystemSetValue@@YAJPEAUHKEY__@@PEBGKPEAXK@Z.c)
 *     __security_check_cookie @ 0x1800A7850 (__security_check_cookie.c)
 */

__int64 __fastcall HampUsageInfoRegistrySaveAppLaunched(const WCHAR *a1)
{
  HKEY v2; // rdi
  int v3; // ebx
  WCHAR *v4; // rax
  __int64 v5; // rdx
  WCHAR *v6; // rax
  __int64 v7; // r8
  char *v8; // r9
  WCHAR v9; // cx
  WCHAR *v10; // rcx
  int v11; // ecx
  int v12; // r8d
  int v13; // r9d
  LSTATUS v14; // eax
  LSTATUS v15; // eax
  LSTATUS v16; // eax
  BYTE Data[4]; // [rsp+50h] [rbp-B0h] BYREF
  DWORD cbData; // [rsp+54h] [rbp-ACh] BYREF
  HKEY phkResult; // [rsp+58h] [rbp-A8h] BYREF
  HKEY hKey; // [rsp+60h] [rbp-A0h] BYREF
  int v22; // [rsp+68h] [rbp-98h] BYREF
  char *v23; // [rsp+70h] [rbp-90h] BYREF
  struct _UNICODE_STRING UnicodeString; // [rsp+78h] [rbp-88h] BYREF
  WCHAR SubKey[288]; // [rsp+90h] [rbp-70h] BYREF

  *(_DWORD *)Data = 0;
  *(_QWORD *)&UnicodeString.Length = 37486592LL;
  cbData = 0;
  hKey = 0LL;
  UnicodeString.Buffer = SubKey;
  phkResult = 0LL;
  v2 = 0LL;
  v3 = RtlConvertSidToUnicodeString(&UnicodeString, (PSID)(a1 + 114), 0);
  if ( v3 < 0 )
    goto LABEL_13;
  v4 = SubKey;
  v5 = 286LL;
  while ( *v4 )
  {
    ++v4;
    if ( !--v5 )
    {
      v3 = -1073741811;
      goto LABEL_13;
    }
  }
  v6 = &SubKey[286 - v5];
  v7 = 98LL;
  v8 = (char *)((char *)L"\\SOFTWARE\\Classes\\Local Settings\\Software\\Microsoft\\Windows\\CurrentVersion\\AppModel\\SystemAppData"
              - (char *)v6);
  do
  {
    if ( !v7 )
      break;
    v9 = *(WCHAR *)((char *)v6 + (_QWORD)v8);
    if ( !v9 )
      break;
    *v6 = v9;
    --v7;
    ++v6;
    --v5;
  }
  while ( v5 );
  v10 = v6 - 1;
  v3 = -2147483643;
  if ( v5 )
  {
    v10 = v6;
    v3 = 0;
  }
  *v10 = 0;
  if ( v3 < 0 )
    goto LABEL_13;
  v14 = RegCreateKeyExW(HKEY_USERS, SubKey, 0, 0LL, 0, 4u, 0LL, &phkResult, 0LL);
  v3 = v14;
  if ( v14 > 0 )
    v3 = (unsigned __int16)v14 | 0xC0070000;
  if ( v3 < 0 )
  {
LABEL_13:
    if ( phkResult )
      RegCloseKey(phkResult);
LABEL_15:
    if ( (unsigned int)dword_1800E72B0 > 4 && tlgKeywordOn((__int64)&dword_1800E72B0, 8LL) )
    {
      v22 = v3;
      v23 = (char *)(a1 + 48);
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>>(
        v11,
        (unsigned int)&unk_1800D33D5,
        v12,
        v13,
        (__int64)&v23,
        (__int64)&v22);
    }
    goto LABEL_28;
  }
  v2 = phkResult;
  phkResult = 0LL;
  v15 = RegCreateKeyExW(v2, a1 + 48, 0, 0LL, 0, 0x2001Fu, 0LL, &hKey, 0LL);
  v3 = v15;
  if ( v15 > 0 )
    v3 = (unsigned __int16)v15 | 0xC0070000;
  if ( v3 < 0 )
    goto LABEL_15;
  cbData = 4;
  v16 = RegQueryValueExW(hKey, L"WasEverActivated", 0LL, 0LL, Data, &cbData);
  v3 = v16;
  if ( v16 > 0 )
    v3 = (unsigned __int16)v16 | 0xC0070000;
  if ( v3 < 0 || *(_DWORD *)Data != 1 )
  {
    *(_DWORD *)Data = 1;
    v3 = HampSystemSetValue(hKey, L"WasEverActivated", 4u, Data, 4u);
    if ( v3 >= 0 )
    {
      v3 = 0;
      goto LABEL_28;
    }
    goto LABEL_15;
  }
LABEL_28:
  if ( v2 )
    RegCloseKey(v2);
  if ( hKey )
    RegCloseKey(hKey);
  return (unsigned int)v3;
}
