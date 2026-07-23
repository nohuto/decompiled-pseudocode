/*
 * XREFs of RtlpLoadLanguageConfigList @ 0x18008C150
 * Callers:
 *     InitializeTEBUserLangList @ 0x18005D320 (InitializeTEBUserLangList.c)
 *     RtlpMuiRegLoadRegistryInfo @ 0x180087080 (RtlpMuiRegLoadRegistryInfo.c)
 *     RtlpInitializeUserList @ 0x180087740 (RtlpInitializeUserList.c)
 *     RtlpMuiRegCreateAndLoadRegistryInfo @ 0x18008BBB8 (RtlpMuiRegCreateAndLoadRegistryInfo.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180050340 (RtlAllocateHeap.c)
 *     RtlOpenCurrentUser @ 0x18005D890 (RtlOpenCurrentUser.c)
 *     RtlFreeHeap @ 0x180080DD0 (RtlFreeHeap.c)
 *     OpenGlobalizationUserSettingsKey_ForMua @ 0x18008A784 (OpenGlobalizationUserSettingsKey_ForMua.c)
 *     OpenGlobalizationUserSettingsKey_ForSingleUserModel @ 0x18008AAA4 (OpenGlobalizationUserSettingsKey_ForSingleUserModel.c)
 *     GetGlobalizationUserModelType @ 0x18008C6B8 (GetGlobalizationUserModelType.c)
 *     RtlpMuiRegCreateLanguageConfigList @ 0x18008C6FC (RtlpMuiRegCreateLanguageConfigList.c)
 *     RtlpPopulateLanguageConfigList @ 0x18008C780 (RtlpPopulateLanguageConfigList.c)
 *     RtlpLoadPolicyLanguageSpec @ 0x18008CC10 (RtlpLoadPolicyLanguageSpec.c)
 *     RtlpMuiRegFreeLanguageConfigList @ 0x18008D024 (RtlpMuiRegFreeLanguageConfigList.c)
 *     wcslen @ 0x1801292B0 (wcslen.c)
 *     NtClose @ 0x180163400 (NtClose.c)
 *     NtOpenKey @ 0x180163460 (NtOpenKey.c)
 *     NtQueryValueKey @ 0x180163500 (NtQueryValueKey.c)
 *     memmove @ 0x180168980 (memmove.c)
 */

__int64 __fastcall RtlpLoadLanguageConfigList(ULONG Flags, __int64 *a2, __int64 a3)
{
  int PolicyLanguageSpec; // ebx
  __int64 v7; // r15
  size_t v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  int v11; // eax
  __int64 v12; // rdx
  int v13; // eax
  int v14; // eax
  HANDLE v15; // rbx
  char v16; // r12
  size_t v17; // rax
  _DWORD *Heap; // r13
  NTSTATUS v19; // ebx
  bool v20; // zf
  size_t v21; // rax
  size_t v22; // rax
  NTSTATUS v23; // eax
  __int64 LanguageConfigList; // rax
  size_t v26; // rax
  size_t v27; // rax
  NTSTATUS v28; // eax
  unsigned int v29; // eax
  HANDLE KeyHandle; // [rsp+30h] [rbp-59h] BYREF
  __int128 v31; // [rsp+38h] [rbp-51h] BYREF
  HANDLE CurrentUserKey; // [rsp+48h] [rbp-41h] BYREF
  ULONG ResultLength; // [rsp+50h] [rbp-39h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+58h] [rbp-31h] BYREF
  int v35; // [rsp+88h] [rbp-1h] BYREF
  HANDLE Handle; // [rsp+90h] [rbp+7h] BYREF
  _UNICODE_STRING ValueName; // [rsp+98h] [rbp+Fh] BYREF

  PolicyLanguageSpec = 0;
  KeyHandle = 0LL;
  Handle = 0LL;
  v7 = 0LL;
  CurrentUserKey = 0LL;
  v31 = 0LL;
  if ( !a2 || !a3 )
  {
    PolicyLanguageSpec = -1073741811;
LABEL_49:
    if ( a2 && *a2 != v7 )
    {
      if ( *a2 )
        RtlpMuiRegFreeLanguageConfigList();
      *a2 = v7;
    }
    return (unsigned int)PolicyLanguageSpec;
  }
  v7 = *a2;
  *((_QWORD *)&v31 + 1) = L"\\Registry\\Machine\\Software\\Policies\\Microsoft\\MUI\\Settings";
  DWORD1(v31) = 0;
  v8 = 2 * wcslen(L"\\Registry\\Machine\\Software\\Policies\\Microsoft\\MUI\\Settings");
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  *(_QWORD *)&ObjectAttributes.Attributes = 64LL;
  ObjectAttributes.RootDirectory = 0LL;
  if ( v8 >= 0xFFFE )
    LOWORD(v8) = -4;
  LOWORD(v31) = v8;
  WORD1(v31) = v8 + 2;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&v31;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( NtOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0 )
  {
    PolicyLanguageSpec = RtlpLoadPolicyLanguageSpec(KeyHandle);
    if ( PolicyLanguageSpec >= 0 )
      goto LABEL_39;
    if ( Flags != 8 )
      goto LABEL_24;
    v15 = KeyHandle;
    v35 = -1;
    if ( !KeyHandle )
      goto LABEL_24;
    ValueName.Buffer = (wchar_t *)L"MachineUILock";
    v16 = 0;
    *(_DWORD *)(&ValueName.MaximumLength + 1) = 0;
    v17 = 2 * wcslen(L"MachineUILock");
    ResultLength = 0;
    if ( v17 >= 0xFFFE )
      LOWORD(v17) = -4;
    ValueName.Length = v17;
    ValueName.MaximumLength = v17 + 2;
    Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, Flags, 0x10uLL);
    if ( !Heap )
      goto LABEL_24;
    v19 = NtQueryValueKey(v15, &ValueName, KeyValuePartialInformation, Heap, 0x10u, &ResultLength);
    if ( v19 >= 0 )
    {
      v29 = Heap[2];
      if ( v29 > 4 )
        v19 = -2147483643;
      else
        memmove(&v35, Heap + 3, v29);
    }
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
    v20 = v19 == 0;
    if ( v19 >= 0 )
    {
      if ( v35 == 1 )
      {
        v16 = 1;
      }
      else if ( v35 )
      {
LABEL_24:
        NtClose(KeyHandle);
        PolicyLanguageSpec = 0;
        KeyHandle = 0LL;
        goto LABEL_6;
      }
      v20 = v19 == 0;
    }
    if ( v20 && v16 == 1 )
      Flags = 4;
    goto LABEL_24;
  }
LABEL_6:
  v11 = GetGlobalizationUserModelType(v10, v9) - 1;
  if ( !v11 )
  {
    v14 = RtlOpenCurrentUser(0x2000000u, &CurrentUserKey);
LABEL_26:
    if ( v14 >= 0 )
      goto LABEL_28;
    goto LABEL_27;
  }
  v13 = v11 - 1;
  if ( !v13 )
  {
    v14 = OpenGlobalizationUserSettingsKey_ForSingleUserModel(0x2000000u, &CurrentUserKey);
    goto LABEL_26;
  }
  if ( v13 == 1 )
  {
    ResultLength = 0;
    v14 = OpenGlobalizationUserSettingsKey_ForMua(0x2000000u, v12, &CurrentUserKey, &ResultLength);
    goto LABEL_26;
  }
LABEL_27:
  CurrentUserKey = 0LL;
LABEL_28:
  if ( Flags == 8 )
  {
    if ( !CurrentUserKey )
      goto LABEL_39;
    *(_QWORD *)&v31 = 0LL;
    *((_QWORD *)&v31 + 1) = L"Software\\Policies\\Microsoft\\Control Panel\\Desktop";
    v21 = 2 * wcslen(L"Software\\Policies\\Microsoft\\Control Panel\\Desktop");
    *(_QWORD *)&ObjectAttributes.Length = 48LL;
    *(_QWORD *)&ObjectAttributes.Attributes = 64LL;
    if ( v21 >= 0xFFFE )
      LOWORD(v21) = -4;
    LOWORD(v31) = v21;
    WORD1(v31) = v21 + 2;
    ObjectAttributes.RootDirectory = CurrentUserKey;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)&v31;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( NtOpenKey(&Handle, 0x20019u, &ObjectAttributes) >= 0 )
    {
      PolicyLanguageSpec = RtlpLoadPolicyLanguageSpec(Handle);
      if ( PolicyLanguageSpec >= 0 )
        goto LABEL_39;
      PolicyLanguageSpec = 0;
    }
    *(_QWORD *)&v31 = 0LL;
    *((_QWORD *)&v31 + 1) = L"Control Panel\\Desktop\\LanguageConfiguration";
    v22 = 2 * wcslen(L"Control Panel\\Desktop\\LanguageConfiguration");
    *(_QWORD *)&ObjectAttributes.Length = 48LL;
    *(_QWORD *)&ObjectAttributes.Attributes = 64LL;
    KeyHandle = 0LL;
    if ( v22 >= 0xFFFE )
      LOWORD(v22) = -4;
    LOWORD(v31) = v22;
    WORD1(v31) = v22 + 2;
    ObjectAttributes.RootDirectory = CurrentUserKey;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)&v31;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v23 = NtOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
    if ( v23 >= 0 )
      goto LABEL_38;
    if ( v23 != -1073741772 )
      PolicyLanguageSpec = v23;
  }
  else
  {
    if ( Flags != 4 )
      goto LABEL_38;
    if ( CurrentUserKey )
    {
      *(_QWORD *)&v31 = 0LL;
      *((_QWORD *)&v31 + 1) = L"Control Panel\\Desktop\\MuiCached\\MachineLanguageConfiguration";
      v26 = 2 * wcslen(L"Control Panel\\Desktop\\MuiCached\\MachineLanguageConfiguration");
      *(_QWORD *)&ObjectAttributes.Length = 48LL;
      *(_QWORD *)&ObjectAttributes.Attributes = 64LL;
      KeyHandle = 0LL;
      if ( v26 >= 0xFFFE )
        LOWORD(v26) = -4;
      LOWORD(v31) = v26;
      WORD1(v31) = v26 + 2;
      ObjectAttributes.RootDirectory = CurrentUserKey;
      ObjectAttributes.ObjectName = (PUNICODE_STRING)&v31;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      if ( NtOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0 )
        goto LABEL_38;
    }
    *(_QWORD *)&v31 = 0LL;
    *((_QWORD *)&v31 + 1) = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\MUI\\Settings\\LanguageConfiguration";
    v27 = 2 * wcslen(L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\MUI\\Settings\\LanguageConfiguration");
    *(_QWORD *)&ObjectAttributes.Length = 48LL;
    *(_QWORD *)&ObjectAttributes.Attributes = 64LL;
    KeyHandle = 0LL;
    if ( v27 >= 0xFFFE )
      LOWORD(v27) = -4;
    ObjectAttributes.RootDirectory = 0LL;
    LOWORD(v31) = v27;
    WORD1(v31) = v27 + 2;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)&v31;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v28 = NtOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
    PolicyLanguageSpec = v28;
    if ( v28 >= 0 )
    {
LABEL_38:
      PolicyLanguageSpec = RtlpPopulateLanguageConfigList(KeyHandle, a2, a3);
      goto LABEL_39;
    }
    if ( v28 == -1073741772 )
      PolicyLanguageSpec = 0;
  }
LABEL_39:
  if ( KeyHandle )
    NtClose(KeyHandle);
  if ( Handle )
    NtClose(Handle);
  if ( CurrentUserKey )
    NtClose(CurrentUserKey);
  if ( PolicyLanguageSpec < 0 )
    goto LABEL_49;
  if ( *a2 )
    return (unsigned int)PolicyLanguageSpec;
  LanguageConfigList = RtlpMuiRegCreateLanguageConfigList(1LL);
  *a2 = LanguageConfigList;
  if ( LanguageConfigList )
    return (unsigned int)PolicyLanguageSpec;
  *a2 = v7;
  return 3221225495LL;
}
