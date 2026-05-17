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

__int64 __fastcall RtlpLoadLanguageConfigList(unsigned int a1, __int64 *a2, __int64 a3)
{
  int v3; // ebx
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
  __int64 Heap; // r13
  int v19; // ebx
  __int64 v20; // r9
  bool v21; // zf
  size_t v22; // rax
  size_t v23; // rax
  int v24; // eax
  __int64 LanguageConfigList; // rax
  size_t v27; // rax
  size_t v28; // rax
  int v29; // eax
  unsigned int v30; // eax
  HANDLE Handle; // [rsp+30h] [rbp-59h] BYREF
  __int128 v32; // [rsp+38h] [rbp-51h] BYREF
  HANDLE v33; // [rsp+48h] [rbp-41h] BYREF
  int v34; // [rsp+50h] [rbp-39h] BYREF
  __int64 v35; // [rsp+58h] [rbp-31h] BYREF
  HANDLE v36; // [rsp+60h] [rbp-29h]
  __int128 *v37; // [rsp+68h] [rbp-21h]
  __int64 v38; // [rsp+70h] [rbp-19h]
  __int128 v39; // [rsp+78h] [rbp-11h]
  int v40; // [rsp+88h] [rbp-1h] BYREF
  HANDLE v41; // [rsp+90h] [rbp+7h] BYREF
  _WORD v42[2]; // [rsp+98h] [rbp+Fh] BYREF
  int v43; // [rsp+9Ch] [rbp+13h]
  const wchar_t *v44; // [rsp+A0h] [rbp+17h]
  char v45; // [rsp+F8h] [rbp+6Fh] BYREF
  __int16 v46; // [rsp+108h] [rbp+7Fh] BYREF

  v3 = 0;
  v45 = 0;
  v46 = 0;
  Handle = 0LL;
  v41 = 0LL;
  v7 = 0LL;
  v33 = 0LL;
  v32 = 0LL;
  if ( !a2 || !a3 )
  {
    v3 = -1073741811;
LABEL_49:
    if ( a2 && *a2 != v7 )
    {
      if ( *a2 )
        RtlpMuiRegFreeLanguageConfigList();
      *a2 = v7;
    }
    return (unsigned int)v3;
  }
  v7 = *a2;
  *((_QWORD *)&v32 + 1) = L"\\Registry\\Machine\\Software\\Policies\\Microsoft\\MUI\\Settings";
  DWORD1(v32) = 0;
  v8 = 2 * wcslen(L"\\Registry\\Machine\\Software\\Policies\\Microsoft\\MUI\\Settings");
  v35 = 48LL;
  v38 = 64LL;
  v36 = 0LL;
  if ( v8 >= 0xFFFE )
    LOWORD(v8) = -4;
  LOWORD(v32) = v8;
  WORD1(v32) = v8 + 2;
  v37 = &v32;
  v39 = 0LL;
  if ( (int)NtOpenKey(&Handle, 131097LL, &v35) >= 0 )
  {
    v3 = RtlpLoadPolicyLanguageSpec(Handle, a3, &v45, &v46);
    if ( v3 >= 0 )
      goto LABEL_39;
    if ( a1 != 8 )
      goto LABEL_24;
    v15 = Handle;
    v40 = -1;
    if ( !Handle )
      goto LABEL_24;
    v44 = L"MachineUILock";
    v16 = 0;
    v43 = 0;
    v17 = 2 * wcslen(L"MachineUILock");
    v34 = 0;
    if ( v17 >= 0xFFFE )
      LOWORD(v17) = -4;
    v42[0] = v17;
    v42[1] = v17 + 2;
    Heap = RtlAllocateHeap((char *)NtCurrentPeb()->ProcessHeap, a1, 0x10uLL);
    if ( !Heap )
      goto LABEL_24;
    v19 = NtQueryValueKey(v15, v42, 2LL, Heap, 16, &v34);
    if ( v19 >= 0 )
    {
      v30 = *(_DWORD *)(Heap + 8);
      if ( v30 > 4 )
        v19 = -2147483643;
      else
        memmove(&v40, (const void *)(Heap + 12), v30);
    }
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, Heap, v20);
    v21 = v19 == 0;
    if ( v19 >= 0 )
    {
      if ( v40 == 1 )
      {
        v16 = 1;
      }
      else if ( v40 )
      {
LABEL_24:
        NtClose(Handle);
        v3 = 0;
        Handle = 0LL;
        goto LABEL_6;
      }
      v21 = v19 == 0;
    }
    if ( v21 && v16 == 1 )
      a1 = 4;
    goto LABEL_24;
  }
LABEL_6:
  v11 = GetGlobalizationUserModelType(v10, v9) - 1;
  if ( !v11 )
  {
    v14 = RtlOpenCurrentUser(0x2000000u, (__int64)&v33);
LABEL_26:
    if ( v14 >= 0 )
      goto LABEL_28;
    goto LABEL_27;
  }
  v13 = v11 - 1;
  if ( !v13 )
  {
    v14 = OpenGlobalizationUserSettingsKey_ForSingleUserModel(0x2000000u, &v33);
    goto LABEL_26;
  }
  if ( v13 == 1 )
  {
    v34 = 0;
    v14 = OpenGlobalizationUserSettingsKey_ForMua(0x2000000u, v12, (__int64)&v33, &v34);
    goto LABEL_26;
  }
LABEL_27:
  v33 = 0LL;
LABEL_28:
  if ( a1 == 8 )
  {
    if ( !v33 )
      goto LABEL_39;
    *(_QWORD *)&v32 = 0LL;
    *((_QWORD *)&v32 + 1) = L"Software\\Policies\\Microsoft\\Control Panel\\Desktop";
    v22 = 2 * wcslen(L"Software\\Policies\\Microsoft\\Control Panel\\Desktop");
    v35 = 48LL;
    v38 = 64LL;
    if ( v22 >= 0xFFFE )
      LOWORD(v22) = -4;
    LOWORD(v32) = v22;
    WORD1(v32) = v22 + 2;
    v36 = v33;
    v37 = &v32;
    v39 = 0LL;
    if ( (int)NtOpenKey(&v41, 131097LL, &v35) >= 0 )
    {
      v3 = RtlpLoadPolicyLanguageSpec(v41, a3, &v45, &v46);
      if ( v3 >= 0 )
        goto LABEL_39;
      v3 = 0;
    }
    *(_QWORD *)&v32 = 0LL;
    *((_QWORD *)&v32 + 1) = L"Control Panel\\Desktop\\LanguageConfiguration";
    v23 = 2 * wcslen(L"Control Panel\\Desktop\\LanguageConfiguration");
    v35 = 48LL;
    v38 = 64LL;
    Handle = 0LL;
    if ( v23 >= 0xFFFE )
      LOWORD(v23) = -4;
    LOWORD(v32) = v23;
    WORD1(v32) = v23 + 2;
    v36 = v33;
    v37 = &v32;
    v39 = 0LL;
    v24 = NtOpenKey(&Handle, 131097LL, &v35);
    if ( v24 >= 0 )
      goto LABEL_38;
    if ( v24 != -1073741772 )
      v3 = v24;
  }
  else
  {
    if ( a1 != 4 )
      goto LABEL_38;
    if ( v33 )
    {
      *(_QWORD *)&v32 = 0LL;
      *((_QWORD *)&v32 + 1) = L"Control Panel\\Desktop\\MuiCached\\MachineLanguageConfiguration";
      v27 = 2 * wcslen(L"Control Panel\\Desktop\\MuiCached\\MachineLanguageConfiguration");
      v35 = 48LL;
      v38 = 64LL;
      Handle = 0LL;
      if ( v27 >= 0xFFFE )
        LOWORD(v27) = -4;
      LOWORD(v32) = v27;
      WORD1(v32) = v27 + 2;
      v36 = v33;
      v37 = &v32;
      v39 = 0LL;
      if ( (int)NtOpenKey(&Handle, 131097LL, &v35) >= 0 )
        goto LABEL_38;
    }
    *(_QWORD *)&v32 = 0LL;
    *((_QWORD *)&v32 + 1) = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\MUI\\Settings\\LanguageConfiguration";
    v28 = 2 * wcslen(L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\MUI\\Settings\\LanguageConfiguration");
    v35 = 48LL;
    v38 = 64LL;
    Handle = 0LL;
    if ( v28 >= 0xFFFE )
      LOWORD(v28) = -4;
    v36 = 0LL;
    LOWORD(v32) = v28;
    WORD1(v32) = v28 + 2;
    v37 = &v32;
    v39 = 0LL;
    v29 = NtOpenKey(&Handle, 131097LL, &v35);
    v3 = v29;
    if ( v29 >= 0 )
    {
LABEL_38:
      v3 = RtlpPopulateLanguageConfigList(Handle, a2, a3);
      goto LABEL_39;
    }
    if ( v29 == -1073741772 )
      v3 = 0;
  }
LABEL_39:
  if ( Handle )
    NtClose(Handle);
  if ( v41 )
    NtClose(v41);
  if ( v33 )
    NtClose(v33);
  if ( v3 < 0 )
    goto LABEL_49;
  if ( *a2 )
    return (unsigned int)v3;
  LanguageConfigList = RtlpMuiRegCreateLanguageConfigList(1LL);
  *a2 = LanguageConfigList;
  if ( LanguageConfigList )
    return (unsigned int)v3;
  *a2 = v7;
  return 3221225495LL;
}
