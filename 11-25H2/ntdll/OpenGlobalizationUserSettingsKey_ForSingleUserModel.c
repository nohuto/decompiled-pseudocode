/*
 * XREFs of OpenGlobalizationUserSettingsKey_ForSingleUserModel @ 0x18008AAA4
 * Callers:
 *     RtlpMuiRegLoadPreferredUILanguages @ 0x180087AE0 (RtlpMuiRegLoadPreferredUILanguages.c)
 *     RtlpLoadUserUIByPolicy @ 0x180088B20 (RtlpLoadUserUIByPolicy.c)
 *     OpenGlobalizationUserSettingsKey_ForMua @ 0x18008A784 (OpenGlobalizationUserSettingsKey_ForMua.c)
 *     RtlpMuiRegCreateAndLoadRegistryInfo @ 0x18008BBB8 (RtlpMuiRegCreateAndLoadRegistryInfo.c)
 *     OpenGlobalizationUserSettingsKey @ 0x18008C0B0 (OpenGlobalizationUserSettingsKey.c)
 *     RtlpLoadLanguageConfigList @ 0x18008C150 (RtlpLoadLanguageConfigList.c)
 * Callees:
 *     RtlpSysVolFree @ 0x180015880 (RtlpSysVolFree.c)
 *     IdnaMemAlloc @ 0x1800BEB6C (IdnaMemAlloc.c)
 *     wcslen @ 0x1801292B0 (wcslen.c)
 *     NtClose @ 0x180163400 (NtClose.c)
 *     NtOpenKey @ 0x180163460 (NtOpenKey.c)
 *     NtQueryValueKey @ 0x180163500 (NtQueryValueKey.c)
 *     memmove @ 0x180168980 (memmove.c)
 */

__int64 __fastcall OpenGlobalizationUserSettingsKey_ForSingleUserModel(ACCESS_MASK DesiredAccess, PHANDLE KeyHandle)
{
  size_t v4; // rax
  NTSTATUS v5; // edi
  size_t v6; // rax
  NTSTATUS v7; // eax
  _DWORD *v8; // r14
  HANDLE v9; // rax
  size_t v11; // rax
  unsigned __int64 v12; // r15
  unsigned __int64 v13; // rdi
  size_t v14; // rax
  HANDLE v15; // [rsp+30h] [rbp-49h] BYREF
  __int64 v16; // [rsp+38h] [rbp-41h] BYREF
  void *Src; // [rsp+40h] [rbp-39h]
  _WORD v18[2]; // [rsp+48h] [rbp-31h] BYREF
  int v19; // [rsp+4Ch] [rbp-2Dh]
  void *v20; // [rsp+50h] [rbp-29h]
  _UNICODE_STRING ValueName; // [rsp+58h] [rbp-21h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp-11h] BYREF
  ULONG ResultLength; // [rsp+F0h] [rbp+77h] BYREF
  HANDLE KeyHandlea; // [rsp+F8h] [rbp+7Fh] BYREF

  if ( !dword_1801D4374 )
  {
    KeyHandlea = 0LL;
    v20 = (void *)L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\CommonGlobUserSettings\\";
    v19 = 0;
    v4 = 2 * wcslen(L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\CommonGlobUserSettings\\");
    *(_QWORD *)&ObjectAttributes.Length = 48LL;
    *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
    ObjectAttributes.RootDirectory = 0LL;
    if ( v4 >= 0xFFFE )
      LOWORD(v4) = -4;
    v18[0] = v4;
    v18[1] = v4 + 2;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)v18;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v5 = NtOpenKey(&KeyHandlea, DesiredAccess, &ObjectAttributes);
    if ( v5 < 0 )
      goto LABEL_15;
    ResultLength = 0;
    ValueName.Buffer = (wchar_t *)L"RedirectedKey";
    *(_DWORD *)(&ValueName.MaximumLength + 1) = 0;
    v6 = 2 * wcslen(L"RedirectedKey");
    if ( v6 >= 0xFFFE )
      LOWORD(v6) = -4;
    ValueName.Length = v6;
    ValueName.MaximumLength = v6 + 2;
    v7 = NtQueryValueKey(KeyHandlea, &ValueName, KeyValuePartialInformation, 0LL, 0, &ResultLength);
    if ( !ResultLength || v7 != -1073741789 && v7 != -2147483643 )
    {
      if ( v18[0] <= 0xAAu )
      {
        v13 = v18[0];
        memmove(word_1801D02F0, v20, v18[0]);
        if ( v13 + 2 <= 0xAA )
          word_1801D02F0[v13 >> 1] = 0;
        dword_1801D4374 = 1;
      }
      v5 = 0;
      *KeyHandle = KeyHandlea;
      KeyHandlea = 0LL;
      goto LABEL_15;
    }
    v8 = (_DWORD *)IdnaMemAlloc(ResultLength);
    if ( !v8 )
    {
      v5 = -1073741801;
LABEL_15:
      if ( KeyHandlea )
        NtClose(KeyHandlea);
      return (unsigned int)v5;
    }
    v5 = NtQueryValueKey(KeyHandlea, &ValueName, KeyValuePartialInformation, v8, ResultLength, &ResultLength);
    if ( v5 >= 0 )
    {
      if ( v8[1] == 1 )
      {
        v15 = 0LL;
        v16 = 0LL;
        Src = v8 + 3;
        if ( v8 != (_DWORD *)-12LL )
        {
          v11 = 2 * wcslen((const wchar_t *)v8 + 6);
          if ( v11 >= 0xFFFE )
            LOWORD(v11) = -4;
          LOWORD(v16) = v11;
          WORD1(v16) = v11 + 2;
        }
        ObjectAttributes.RootDirectory = 0LL;
        ObjectAttributes.ObjectName = (PUNICODE_STRING)&v16;
        *(_QWORD *)&ObjectAttributes.Length = 48LL;
        *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        v5 = NtOpenKey(&v15, DesiredAccess, &ObjectAttributes);
        if ( v5 < 0 )
          goto LABEL_14;
        if ( (unsigned __int16)v16 <= 0xAAu )
        {
          v12 = (unsigned __int16)v16;
          memmove(word_1801D02F0, Src, (unsigned __int16)v16);
          if ( v12 + 2 <= 0xAA )
            word_1801D02F0[v12 >> 1] = 0;
          dword_1801D4374 = 1;
        }
        v9 = v15;
      }
      else
      {
        v9 = KeyHandlea;
        KeyHandlea = 0LL;
      }
      *KeyHandle = v9;
    }
LABEL_14:
    RtlpSysVolFree(v8);
    goto LABEL_15;
  }
  *(_DWORD *)(&ValueName.MaximumLength + 1) = 0;
  ValueName.Buffer = word_1801D02F0;
  v14 = 2 * wcslen(word_1801D02F0);
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  ObjectAttributes.RootDirectory = 0LL;
  if ( v14 >= 0xFFFE )
    LOWORD(v14) = -4;
  ValueName.Length = v14;
  ValueName.MaximumLength = v14 + 2;
  ObjectAttributes.ObjectName = &ValueName;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  return (unsigned int)NtOpenKey(KeyHandle, DesiredAccess, &ObjectAttributes);
}
