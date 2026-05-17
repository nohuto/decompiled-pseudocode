/*
 * XREFs of RtlOpenCurrentUser @ 0x180036FF0
 * Callers:
 *     OpenGlobalizationUserSettingsKey @ 0x180034720 (OpenGlobalizationUserSettingsKey.c)
 *     RtlpLoadLanguageConfigList @ 0x1800347C0 (RtlpLoadLanguageConfigList.c)
 *     RtlpMuiRegCreateAndLoadRegistryInfo @ 0x18007CD08 (RtlpMuiRegCreateAndLoadRegistryInfo.c)
 *     RtlpMuiRegLoadPreferredUILanguages @ 0x18007EF80 (RtlpMuiRegLoadPreferredUILanguages.c)
 *     RtlpLoadUserUIByPolicy @ 0x18007FDF0 (RtlpLoadUserUIByPolicy.c)
 * Callees:
 *     RtlpSysVolFree @ 0x180001470 (RtlpSysVolFree.c)
 *     RtlFormatCurrentUserKeyPath @ 0x1800389C0 (RtlFormatCurrentUserKeyPath.c)
 *     wcslen @ 0x1801277D0 (wcslen.c)
 *     NtOpenKey @ 0x180161ED0 (NtOpenKey.c)
 */

__int64 __fastcall RtlOpenCurrentUser(unsigned int a1, __int64 a2)
{
  int v4; // ebx
  size_t v5; // rax
  UNICODE_STRING UnicodeString; // [rsp+20h] [rbp-40h] BYREF
  __int128 v8; // [rsp+30h] [rbp-30h] BYREF
  __int128 v9; // [rsp+40h] [rbp-20h]
  __int128 v10; // [rsp+50h] [rbp-10h]

  *(_QWORD *)&v10 = 0LL;
  DWORD2(v10) = 0;
  UnicodeString = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  v4 = RtlFormatCurrentUserKeyPath(&UnicodeString);
  if ( v4 >= 0 )
  {
    LODWORD(v8) = 48;
    *(_QWORD *)&v9 = &UnicodeString;
    *((_QWORD *)&v8 + 1) = 0LL;
    DWORD2(v9) = 1600;
    v10 = 0LL;
    v4 = NtOpenKey(a2, a1, &v8);
    if ( UnicodeString.Buffer )
      RtlpSysVolFree((__int64)UnicodeString.Buffer);
  }
  if ( v4 != -1073741772 )
    return (unsigned int)v4;
  *(_QWORD *)&UnicodeString.Length = 0LL;
  UnicodeString.Buffer = L"\\Registry\\User\\.Default";
  if ( L"\\Registry\\User\\.Default" )
  {
    v5 = 2 * wcslen(L"\\Registry\\User\\.Default");
    if ( v5 >= 0xFFFE )
      LOWORD(v5) = -4;
    UnicodeString.Length = v5;
    UnicodeString.MaximumLength = v5 + 2;
  }
  LODWORD(v8) = 48;
  *(_QWORD *)&v9 = &UnicodeString;
  *((_QWORD *)&v8 + 1) = 0LL;
  DWORD2(v9) = 1600;
  v10 = 0LL;
  return NtOpenKey(a2, a1, &v8);
}
