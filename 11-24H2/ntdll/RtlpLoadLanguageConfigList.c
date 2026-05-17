/*
 * XREFs of RtlpLoadLanguageConfigList @ 0x1800347C0
 * Callers:
 *     InitializeTEBUserLangList @ 0x180036A80 (InitializeTEBUserLangList.c)
 *     RtlpMuiRegCreateAndLoadRegistryInfo @ 0x18007CD08 (RtlpMuiRegCreateAndLoadRegistryInfo.c)
 *     RtlpInitializeUserList @ 0x18007D9E0 (RtlpInitializeUserList.c)
 *     RtlpMuiRegLoadRegistryInfo @ 0x1800EAF60 (RtlpMuiRegLoadRegistryInfo.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180011260 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x1800269F0 (RtlFreeHeap.c)
 *     GetGlobalizationUserModelType @ 0x180034D28 (GetGlobalizationUserModelType.c)
 *     RtlpMuiRegCreateLanguageConfigList @ 0x180034D6C (RtlpMuiRegCreateLanguageConfigList.c)
 *     RtlpPopulateLanguageConfigList @ 0x180034DF0 (RtlpPopulateLanguageConfigList.c)
 *     RtlpLoadPolicyLanguageSpec @ 0x180035280 (RtlpLoadPolicyLanguageSpec.c)
 *     RtlpMuiRegFreeLanguageConfigList @ 0x180035694 (RtlpMuiRegFreeLanguageConfigList.c)
 *     RtlOpenCurrentUser @ 0x180036FF0 (RtlOpenCurrentUser.c)
 *     OpenGlobalizationUserSettingsKey_ForSingleUserModel @ 0x180080044 (OpenGlobalizationUserSettingsKey_ForSingleUserModel.c)
 *     OpenGlobalizationUserSettingsKey_ForMua @ 0x180080384 (OpenGlobalizationUserSettingsKey_ForMua.c)
 *     wcslen @ 0x1801277D0 (wcslen.c)
 *     NtClose @ 0x180161E70 (NtClose.c)
 *     NtOpenKey @ 0x180161ED0 (NtOpenKey.c)
 *     NtQueryValueKey @ 0x180161F70 (NtQueryValueKey.c)
 *     memmove @ 0x180167400 (memmove.c)
 */

__int64 __fastcall RtlpLoadLanguageConfigList(unsigned int a1, __int64 *a2, __int64 a3)
{
  int v3; // ebx
  __int64 v7; // r15
  size_t v8; // rax
  int v9; // eax
  __int64 v10; // rdx
  int v11; // eax
  int v12; // eax
  HANDLE v13; // rbx
  char v14; // r12
  size_t v15; // rax
  unsigned __int64 Heap; // r13
  int v17; // ebx
  bool v18; // zf
  size_t v19; // rax
  size_t v20; // rax
  int v21; // eax
  __int64 LanguageConfigList; // rax
  size_t v24; // rax
  size_t v25; // rax
  int v26; // eax
  unsigned int v27; // eax
  HANDLE Handle; // [rsp+30h] [rbp-59h] BYREF
  __int128 v29; // [rsp+38h] [rbp-51h] BYREF
  HANDLE v30; // [rsp+48h] [rbp-41h] BYREF
  int v31; // [rsp+50h] [rbp-39h] BYREF
  __int64 v32; // [rsp+58h] [rbp-31h] BYREF
  HANDLE v33; // [rsp+60h] [rbp-29h]
  __int128 *v34; // [rsp+68h] [rbp-21h]
  __int64 v35; // [rsp+70h] [rbp-19h]
  __int128 v36; // [rsp+78h] [rbp-11h]
  int v37; // [rsp+88h] [rbp-1h] BYREF
  HANDLE v38; // [rsp+90h] [rbp+7h] BYREF
  _WORD v39[2]; // [rsp+98h] [rbp+Fh] BYREF
  int v40; // [rsp+9Ch] [rbp+13h]
  const wchar_t *v41; // [rsp+A0h] [rbp+17h]
  char v42; // [rsp+F8h] [rbp+6Fh] BYREF
  __int16 v43; // [rsp+108h] [rbp+7Fh] BYREF

  v3 = 0;
  v42 = 0;
  v43 = 0;
  Handle = 0LL;
  v38 = 0LL;
  v7 = 0LL;
  v30 = 0LL;
  v29 = 0LL;
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
  *((_QWORD *)&v29 + 1) = L"\\Registry\\Machine\\Software\\Policies\\Microsoft\\MUI\\Settings";
  DWORD1(v29) = 0;
  v8 = 2 * wcslen(L"\\Registry\\Machine\\Software\\Policies\\Microsoft\\MUI\\Settings");
  v32 = 48LL;
  v35 = 64LL;
  v33 = 0LL;
  if ( v8 >= 0xFFFE )
    LOWORD(v8) = -4;
  LOWORD(v29) = v8;
  WORD1(v29) = v8 + 2;
  v34 = &v29;
  v36 = 0LL;
  if ( (int)NtOpenKey(&Handle, 131097LL, &v32) >= 0 )
  {
    v3 = RtlpLoadPolicyLanguageSpec(Handle, a3, &v42, &v43);
    if ( v3 >= 0 )
      goto LABEL_39;
    if ( a1 != 8 )
      goto LABEL_24;
    v13 = Handle;
    v37 = -1;
    if ( !Handle )
      goto LABEL_24;
    v41 = L"MachineUILock";
    v14 = 0;
    v40 = 0;
    v15 = 2 * wcslen(L"MachineUILock");
    v31 = 0;
    if ( v15 >= 0xFFFE )
      LOWORD(v15) = -4;
    v39[0] = v15;
    v39[1] = v15 + 2;
    Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, a1, 0x10uLL);
    if ( !Heap )
      goto LABEL_24;
    v17 = NtQueryValueKey(v13, v39, 2LL, Heap, 16, &v31);
    if ( v17 >= 0 )
    {
      v27 = *(_DWORD *)(Heap + 8);
      if ( v27 > 4 )
        v17 = -2147483643;
      else
        memmove(&v37, (const void *)(Heap + 12), v27);
    }
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, Heap);
    v18 = v17 == 0;
    if ( v17 >= 0 )
    {
      if ( v37 == 1 )
      {
        v14 = 1;
      }
      else if ( v37 )
      {
LABEL_24:
        NtClose(Handle);
        v3 = 0;
        Handle = 0LL;
        goto LABEL_6;
      }
      v18 = v17 == 0;
    }
    if ( v18 && v14 == 1 )
      a1 = 4;
    goto LABEL_24;
  }
LABEL_6:
  v9 = GetGlobalizationUserModelType() - 1;
  if ( !v9 )
  {
    v12 = RtlOpenCurrentUser(0x2000000LL, &v30);
LABEL_26:
    if ( v12 >= 0 )
      goto LABEL_28;
    goto LABEL_27;
  }
  v11 = v9 - 1;
  if ( !v11 )
  {
    v12 = OpenGlobalizationUserSettingsKey_ForSingleUserModel(0x2000000LL, &v30);
    goto LABEL_26;
  }
  if ( v11 == 1 )
  {
    v31 = 0;
    v12 = OpenGlobalizationUserSettingsKey_ForMua(0x2000000LL, v10, &v30, &v31);
    goto LABEL_26;
  }
LABEL_27:
  v30 = 0LL;
LABEL_28:
  if ( a1 == 8 )
  {
    if ( !v30 )
      goto LABEL_39;
    *(_QWORD *)&v29 = 0LL;
    *((_QWORD *)&v29 + 1) = L"Software\\Policies\\Microsoft\\Control Panel\\Desktop";
    v19 = 2 * wcslen(L"Software\\Policies\\Microsoft\\Control Panel\\Desktop");
    v32 = 48LL;
    v35 = 64LL;
    if ( v19 >= 0xFFFE )
      LOWORD(v19) = -4;
    LOWORD(v29) = v19;
    WORD1(v29) = v19 + 2;
    v33 = v30;
    v34 = &v29;
    v36 = 0LL;
    if ( (int)NtOpenKey(&v38, 131097LL, &v32) >= 0 )
    {
      v3 = RtlpLoadPolicyLanguageSpec(v38, a3, &v42, &v43);
      if ( v3 >= 0 )
        goto LABEL_39;
      v3 = 0;
    }
    *(_QWORD *)&v29 = 0LL;
    *((_QWORD *)&v29 + 1) = L"Control Panel\\Desktop\\LanguageConfiguration";
    v20 = 2 * wcslen(L"Control Panel\\Desktop\\LanguageConfiguration");
    v32 = 48LL;
    v35 = 64LL;
    Handle = 0LL;
    if ( v20 >= 0xFFFE )
      LOWORD(v20) = -4;
    LOWORD(v29) = v20;
    WORD1(v29) = v20 + 2;
    v33 = v30;
    v34 = &v29;
    v36 = 0LL;
    v21 = NtOpenKey(&Handle, 131097LL, &v32);
    if ( v21 >= 0 )
      goto LABEL_38;
    if ( v21 != -1073741772 )
      v3 = v21;
  }
  else
  {
    if ( a1 != 4 )
      goto LABEL_38;
    if ( v30 )
    {
      *(_QWORD *)&v29 = 0LL;
      *((_QWORD *)&v29 + 1) = L"Control Panel\\Desktop\\MuiCached\\MachineLanguageConfiguration";
      v24 = 2 * wcslen(L"Control Panel\\Desktop\\MuiCached\\MachineLanguageConfiguration");
      v32 = 48LL;
      v35 = 64LL;
      Handle = 0LL;
      if ( v24 >= 0xFFFE )
        LOWORD(v24) = -4;
      LOWORD(v29) = v24;
      WORD1(v29) = v24 + 2;
      v33 = v30;
      v34 = &v29;
      v36 = 0LL;
      if ( (int)NtOpenKey(&Handle, 131097LL, &v32) >= 0 )
        goto LABEL_38;
    }
    *(_QWORD *)&v29 = 0LL;
    *((_QWORD *)&v29 + 1) = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\MUI\\Settings\\LanguageConfiguration";
    v25 = 2 * wcslen(L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\MUI\\Settings\\LanguageConfiguration");
    v32 = 48LL;
    v35 = 64LL;
    Handle = 0LL;
    if ( v25 >= 0xFFFE )
      LOWORD(v25) = -4;
    v33 = 0LL;
    LOWORD(v29) = v25;
    WORD1(v29) = v25 + 2;
    v34 = &v29;
    v36 = 0LL;
    v26 = NtOpenKey(&Handle, 131097LL, &v32);
    v3 = v26;
    if ( v26 >= 0 )
    {
LABEL_38:
      v3 = RtlpPopulateLanguageConfigList(Handle, a2, a3);
      goto LABEL_39;
    }
    if ( v26 == -1073741772 )
      v3 = 0;
  }
LABEL_39:
  if ( Handle )
    NtClose(Handle);
  if ( v38 )
    NtClose(v38);
  if ( v30 )
    NtClose(v30);
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
