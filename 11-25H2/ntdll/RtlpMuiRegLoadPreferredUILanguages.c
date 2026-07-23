/*
 * XREFs of RtlpMuiRegLoadPreferredUILanguages @ 0x180087AE0
 * Callers:
 *     RtlpSetProcUserMachineLangList @ 0x18005D1B0 (RtlpSetProcUserMachineLangList.c)
 *     InitializeTEBUserLangList @ 0x18005D320 (InitializeTEBUserLangList.c)
 *     RtlGetThreadPreferredUILanguages @ 0x18005D9C0 (RtlGetThreadPreferredUILanguages.c)
 *     RtlpInitializeUserList @ 0x180087740 (RtlpInitializeUserList.c)
 *     RtlpQueryDefaultUILanguage @ 0x18008D650 (RtlpQueryDefaultUILanguage.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180050340 (RtlAllocateHeap.c)
 *     RtlpMuiRegAddMultiSzToLangFallbackList @ 0x18005AD70 (RtlpMuiRegAddMultiSzToLangFallbackList.c)
 *     RtlOpenCurrentUser @ 0x18005D890 (RtlOpenCurrentUser.c)
 *     RtlFreeHeap @ 0x180080DD0 (RtlFreeHeap.c)
 *     RtlpMuiRegGrowLanguageList @ 0x180088948 (RtlpMuiRegGrowLanguageList.c)
 *     RtlpMuiRegCreateLanguageList @ 0x180089780 (RtlpMuiRegCreateLanguageList.c)
 *     OpenGlobalizationUserSettingsKey_ForMua @ 0x18008A784 (OpenGlobalizationUserSettingsKey_ForMua.c)
 *     OpenGlobalizationUserSettingsKey_ForSingleUserModel @ 0x18008AAA4 (OpenGlobalizationUserSettingsKey_ForSingleUserModel.c)
 *     GetGlobalizationUserModelType @ 0x18008C6B8 (GetGlobalizationUserModelType.c)
 *     RtlpLoadPolicyLanguageSpec @ 0x18008CC10 (RtlpLoadPolicyLanguageSpec.c)
 *     wcslen @ 0x1801292B0 (wcslen.c)
 *     NtClose @ 0x180163400 (NtClose.c)
 *     NtOpenKey @ 0x180163460 (NtOpenKey.c)
 *     NtQueryValueKey @ 0x180163500 (NtQueryValueKey.c)
 *     memmove @ 0x180168980 (memmove.c)
 */

__int64 __fastcall RtlpMuiRegLoadPreferredUILanguages(
        __int64 a1,
        ULONG a2,
        unsigned int a3,
        int a4,
        _BYTE *a5,
        __int64 *a6)
{
  unsigned int v6; // r12d
  __int64 v7; // rsi
  unsigned int v8; // r15d
  _WORD *v9; // r14
  __int64 v10; // rdi
  _BYTE *v11; // r13
  size_t v12; // rax
  int GlobalizationUserModelType; // eax
  __int64 v14; // rdx
  NTSTATUS v15; // eax
  HANDLE v16; // rsi
  size_t v17; // rax
  _DWORD *Heap; // rbx
  NTSTATUS v19; // edi
  int PolicyLanguageSpec; // ebx
  unsigned int v21; // eax
  unsigned int v22; // esi
  int v23; // r13d
  int v24; // eax
  _DWORD *v25; // rax
  HANDLE v27; // rcx
  size_t v28; // rax
  size_t v29; // rax
  size_t v30; // rax
  HANDLE v31; // rbx
  _DWORD *v32; // rdi
  NTSTATUS v33; // ebx
  HANDLE v34; // rbx
  unsigned int v35; // edi
  _DWORD *v36; // rsi
  NTSTATUS v37; // eax
  int v38; // edi
  size_t v39; // rax
  _OBJECT_ATTRIBUTES *p_ObjectAttributes; // r8
  size_t v41; // rax
  wchar_t *v42; // rcx
  _WORD *v43; // r15
  size_t v44; // rax
  HANDLE v45; // rbx
  size_t v46; // rax
  _DWORD *v47; // rdi
  NTSTATUS v48; // ebx
  HANDLE v49; // rbx
  unsigned int v50; // r13d
  _DWORD *v51; // rdi
  NTSTATUS v52; // eax
  unsigned int v53; // eax
  unsigned int v54; // eax
  __int64 v55; // rax
  int v56; // eax
  __int64 v57; // rdx
  NTSTATUS v58; // eax
  __int64 v59; // rdx
  __int64 LanguageList; // rax
  __int64 v61; // [rsp+40h] [rbp-C0h] BYREF
  _UNICODE_STRING v62; // [rsp+48h] [rbp-B8h] BYREF
  HANDLE v63; // [rsp+58h] [rbp-A8h] BYREF
  HANDLE CurrentUserKey; // [rsp+60h] [rbp-A0h] BYREF
  HANDLE Handle; // [rsp+68h] [rbp-98h] BYREF
  _UNICODE_STRING v66; // [rsp+70h] [rbp-90h] BYREF
  int v67; // [rsp+80h] [rbp-80h]
  int v68; // [rsp+84h] [rbp-7Ch]
  HANDLE v69; // [rsp+88h] [rbp-78h] BYREF
  HANDLE KeyHandle; // [rsp+90h] [rbp-70h] BYREF
  _OBJECT_ATTRIBUTES v71; // [rsp+98h] [rbp-68h] BYREF
  _UNICODE_STRING ValueName; // [rsp+C8h] [rbp-38h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+D8h] [rbp-28h] BYREF
  int v74; // [rsp+108h] [rbp+8h] BYREF
  ULONG v75; // [rsp+10Ch] [rbp+Ch] BYREF
  ULONG v76; // [rsp+110h] [rbp+10h] BYREF
  _WORD v77[2]; // [rsp+118h] [rbp+18h] BYREF
  int v78; // [rsp+11Ch] [rbp+1Ch]
  const wchar_t *v79; // [rsp+120h] [rbp+20h]
  ULONG v81; // [rsp+188h] [rbp+88h] BYREF
  ULONG ResultLength; // [rsp+190h] [rbp+90h] BYREF
  int v83; // [rsp+198h] [rbp+98h]

  v83 = a4;
  v81 = a2;
  CurrentUserKey = 0LL;
  v63 = 0LL;
  v6 = a3;
  KeyHandle = 0LL;
  v7 = a1;
  v68 = 7;
  v8 = 0;
  v67 = 7;
  v9 = 0LL;
  v61 = 0LL;
  v10 = 0LL;
  v62 = 0LL;
  if ( !a1 || (v11 = a5) == 0LL || !a6 )
  {
    PolicyLanguageSpec = -1073741811;
    goto LABEL_40;
  }
  *a5 = 0;
  if ( a3 > 1 )
    return 3221225485LL;
  *(_DWORD *)(&v62.MaximumLength + 1) = 0;
  v62.Buffer = (wchar_t *)L"\\Registry\\Machine\\Software\\Policies\\Microsoft\\MUI\\Settings";
  v12 = 2 * wcslen(L"\\Registry\\Machine\\Software\\Policies\\Microsoft\\MUI\\Settings");
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  *(_QWORD *)&ObjectAttributes.Attributes = 64LL;
  ObjectAttributes.RootDirectory = 0LL;
  if ( v12 >= 0xFFFE )
    LOWORD(v12) = -4;
  v62.Length = v12;
  v62.MaximumLength = v12 + 2;
  ObjectAttributes.ObjectName = &v62;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( NtOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) < 0 )
  {
    KeyHandle = 0LL;
    goto LABEL_9;
  }
  v27 = KeyHandle;
  Handle = 0LL;
  LOBYTE(v81) = 0;
  LOWORD(ResultLength) = 0;
  v66 = 0LL;
  if ( KeyHandle )
    goto LABEL_153;
  *(_DWORD *)(&v66.MaximumLength + 1) = 0;
  v66.Buffer = (wchar_t *)L"\\Registry\\Machine\\Software\\Policies\\Microsoft\\MUI\\Settings";
  v28 = 2 * wcslen(L"\\Registry\\Machine\\Software\\Policies\\Microsoft\\MUI\\Settings");
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  *(_QWORD *)&ObjectAttributes.Attributes = 64LL;
  ObjectAttributes.RootDirectory = 0LL;
  if ( v28 >= 0xFFFE )
    LOWORD(v28) = -4;
  v66.Length = v28;
  v66.MaximumLength = v28 + 2;
  ObjectAttributes.ObjectName = &v66;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  PolicyLanguageSpec = NtOpenKey(&Handle, 0x20019u, &ObjectAttributes);
  if ( PolicyLanguageSpec >= 0 )
  {
    v27 = Handle;
LABEL_153:
    PolicyLanguageSpec = RtlpLoadPolicyLanguageSpec(v27);
    if ( !PolicyLanguageSpec )
    {
      LOBYTE(v59) = 1;
      LanguageList = RtlpMuiRegCreateLanguageList(1LL, v59, v7);
      v61 = LanguageList;
      v10 = LanguageList;
      if ( LanguageList )
      {
        *(_WORD *)(*(_QWORD *)(LanguageList + 24) + 6LL * *(unsigned __int16 *)(LanguageList + 4)) = (unsigned __int8)v81;
        *(_WORD *)(*(_QWORD *)(LanguageList + 24) + 6LL * (unsigned __int16)(*(_WORD *)(LanguageList + 4))++ + 4) = ResultLength;
      }
      else
      {
        PolicyLanguageSpec = -1073741801;
      }
    }
  }
  if ( Handle )
    NtClose(Handle);
  if ( !PolicyLanguageSpec && v10 )
  {
    v22 = 0;
    goto LABEL_99;
  }
LABEL_9:
  if ( v6 != 1 )
    goto LABEL_10;
  v16 = KeyHandle;
  if ( KeyHandle )
  {
    v81 = -1;
    ValueName.Buffer = (wchar_t *)L"MachineUILock";
    *(_DWORD *)(&ValueName.MaximumLength + 1) = 0;
    v17 = 2 * wcslen(L"MachineUILock");
    ResultLength = 0;
    if ( v17 >= 0xFFFE )
      LOWORD(v17) = -4;
    ValueName.Length = v17;
    ValueName.MaximumLength = v17 + 2;
    Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0x10uLL);
    if ( Heap )
    {
      v19 = NtQueryValueKey(v16, &ValueName, KeyValuePartialInformation, Heap, 0x10u, &ResultLength);
      if ( v19 >= 0 )
      {
        v54 = Heap[2];
        if ( v54 > 4 )
          v19 = -2147483643;
        else
          memmove(&v81, Heap + 3, v54);
      }
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
      if ( v19 >= 0 && v81 == 1 )
      {
        v10 = v61;
        v7 = a1;
        v6 = 0;
        goto LABEL_10;
      }
    }
    v10 = v61;
  }
  v7 = a1;
LABEL_10:
  GlobalizationUserModelType = GetGlobalizationUserModelType();
  switch ( GlobalizationUserModelType )
  {
    case 1:
      v15 = RtlOpenCurrentUser(0x2000000u, &CurrentUserKey);
      break;
    case 2:
      v15 = OpenGlobalizationUserSettingsKey_ForSingleUserModel(0x2000000u, &CurrentUserKey);
      break;
    case 3:
      v81 = 0;
      v15 = OpenGlobalizationUserSettingsKey_ForMua(0x2000000LL, v14, &CurrentUserKey, &v81);
      break;
    default:
      PolicyLanguageSpec = -1073741595;
      goto LABEL_129;
  }
  PolicyLanguageSpec = v15;
  if ( v15 < 0 )
  {
LABEL_129:
    *v11 = 1;
    goto LABEL_40;
  }
  if ( v6 == 1 )
  {
    v79 = L"Software\\Policies\\Microsoft\\Control Panel\\Desktop";
    *(_QWORD *)&ValueName.Length = 0LL;
    v69 = 0LL;
    LOBYTE(v81) = 0;
    LOWORD(ResultLength) = 0;
    v78 = 0;
    v39 = 2 * wcslen(L"Software\\Policies\\Microsoft\\Control Panel\\Desktop");
    if ( v39 >= 0xFFFE )
      LOWORD(v39) = -4;
    v77[0] = v39;
    v77[1] = v39 + 2;
    if ( CurrentUserKey )
    {
      *(_QWORD *)&v71.Length = 48LL;
      v71.ObjectName = (PUNICODE_STRING)v77;
      *(_OWORD *)&v71.SecurityDescriptor = 0LL;
      *(_QWORD *)&v71.Attributes = 64LL;
      p_ObjectAttributes = &v71;
      v71.RootDirectory = CurrentUserKey;
    }
    else
    {
      v56 = GetGlobalizationUserModelType();
      switch ( v56 )
      {
        case 1:
          v58 = RtlOpenCurrentUser(0x2000000u, (PHANDLE)&ValueName);
          break;
        case 2:
          v58 = OpenGlobalizationUserSettingsKey_ForSingleUserModel(0x2000000u, (PHANDLE)&ValueName);
          break;
        case 3:
          v74 = 0;
          v58 = OpenGlobalizationUserSettingsKey_ForMua(0x2000000LL, v57, &ValueName, &v74);
          break;
        default:
          PolicyLanguageSpec = -1073741595;
          goto LABEL_84;
      }
      PolicyLanguageSpec = v58;
      if ( v58 < 0 )
        goto LABEL_84;
      p_ObjectAttributes = &ObjectAttributes;
      ObjectAttributes.RootDirectory = *(HANDLE *)&ValueName.Length;
      *(_QWORD *)&ObjectAttributes.Length = 48LL;
      ObjectAttributes.ObjectName = (PUNICODE_STRING)v77;
      *(_QWORD *)&ObjectAttributes.Attributes = 64LL;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    }
    PolicyLanguageSpec = NtOpenKey(&v69, 0x20019u, p_ObjectAttributes);
    if ( PolicyLanguageSpec >= 0 )
    {
      PolicyLanguageSpec = RtlpLoadPolicyLanguageSpec(v69);
      if ( !PolicyLanguageSpec )
      {
        if ( v10 )
        {
          if ( *(_WORD *)(v10 + 4) < *(_WORD *)(v10 + 6) )
          {
LABEL_141:
            *(_WORD *)(*(_QWORD *)(v10 + 24) + 6LL * *(unsigned __int16 *)(v10 + 4)) = (unsigned __int8)v81;
            *(_WORD *)(*(_QWORD *)(v10 + 24) + 6LL * (unsigned __int16)(*(_WORD *)(v10 + 4))++ + 4) = ResultLength;
            goto LABEL_84;
          }
          v55 = RtlpMuiRegGrowLanguageList(v10);
        }
        else
        {
          v55 = RtlpMuiRegCreateLanguageList(1LL, 0LL, v7);
        }
        v61 = v55;
        v10 = v55;
        if ( !v55 )
        {
          PolicyLanguageSpec = -1073741801;
          goto LABEL_84;
        }
        goto LABEL_141;
      }
    }
LABEL_84:
    if ( v69 )
    {
      NtClose(v69);
      v22 = 0;
      v69 = 0LL;
    }
    else
    {
      v22 = 0;
    }
    if ( *(_QWORD *)&ValueName.Length )
      NtClose(*(HANDLE *)&ValueName.Length);
    if ( !PolicyLanguageSpec && v10 )
      goto LABEL_38;
    *(_QWORD *)&v62.Length = 0LL;
    v62.Buffer = (wchar_t *)L"Control Panel\\Desktop";
    v41 = 2 * wcslen(L"Control Panel\\Desktop");
    *(_QWORD *)&v71.Length = 48LL;
    *(_QWORD *)&v71.Attributes = 64LL;
    v63 = 0LL;
    if ( v41 >= 0xFFFE )
      LOWORD(v41) = -4;
    v62.Length = v41;
    v62.MaximumLength = v41 + 2;
    v71.RootDirectory = CurrentUserKey;
    v71.ObjectName = &v62;
    *(_OWORD *)&v71.SecurityDescriptor = 0LL;
    PolicyLanguageSpec = NtOpenKey(&v63, 0x20019u, &v71);
    if ( PolicyLanguageSpec < 0 )
    {
      *v11 = 1;
      goto LABEL_40;
    }
    v42 = (wchar_t *)L"PreferredUILanguages";
    *(_QWORD *)&v62.Length = 0LL;
    if ( v83 != 3 )
      v42 = (wchar_t *)L"PreferredUILanguagesPending";
    v62.Buffer = v42;
    v30 = 2 * wcslen(v42);
    if ( v30 >= 0xFFFE )
      LOWORD(v30) = -4;
    goto LABEL_66;
  }
  v22 = 0;
  *(_QWORD *)&v62.Length = 0LL;
  v62.Buffer = (wchar_t *)L"Control Panel\\Desktop\\MuiCached";
  v29 = 2 * wcslen(L"Control Panel\\Desktop\\MuiCached");
  *(_QWORD *)&v71.Length = 48LL;
  *(_QWORD *)&v71.Attributes = 64LL;
  v63 = 0LL;
  if ( v29 >= 0xFFFE )
    LOWORD(v29) = -4;
  v62.Length = v29;
  v62.MaximumLength = v29 + 2;
  v71.RootDirectory = CurrentUserKey;
  v71.ObjectName = &v62;
  *(_OWORD *)&v71.SecurityDescriptor = 0LL;
  if ( NtOpenKey(&v63, 0x20019u, &v71) < 0 )
  {
    PolicyLanguageSpec = 0;
    *v11 = 1;
    goto LABEL_99;
  }
  *(_QWORD *)&v62.Length = 0LL;
  v62.Buffer = (wchar_t *)L"MachinePreferredUILanguages";
  v30 = 2 * wcslen(L"MachinePreferredUILanguages");
  if ( v30 >= 0xFFFE )
    LOWORD(v30) = -4;
LABEL_66:
  v31 = v63;
  v62.Length = v30;
  v62.MaximumLength = v30 + 2;
  v81 = 0;
  v32 = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0xCuLL);
  if ( !v32 )
    goto LABEL_78;
  v33 = NtQueryValueKey(v31, &v62, KeyValuePartialInformation, v32, 0xCu, &v81);
  if ( (int)(v33 + 0x80000000) < 0 || v33 == -2147483643 )
  {
    v8 = v32[2];
    v67 = v32[1];
  }
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v32);
  if ( v33 == -1073741772 || !v8 )
    goto LABEL_78;
  if ( v33 != -2147483643 )
  {
    PolicyLanguageSpec = -1073741772;
    goto LABEL_40;
  }
  v9 = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, v8 + 2);
  if ( !v9 )
  {
    PolicyLanguageSpec = -1073741801;
    goto LABEL_40;
  }
  v34 = v63;
  v35 = v8 + 12;
  v81 = 0;
  if ( v8 == -12 || (v36 = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, v35)) == 0LL )
  {
    PolicyLanguageSpec = -1073741670;
    goto LABEL_39;
  }
  v37 = NtQueryValueKey(v34, &v62, KeyValuePartialInformation, v36, v8 + 12, &v81);
  PolicyLanguageSpec = v37;
  if ( v37 >= 0 )
  {
    v53 = v36[2];
    if ( v53 > v8 )
    {
      PolicyLanguageSpec = -2147483643;
    }
    else if ( v53 <= v35 )
    {
      memmove(v9, v36 + 3, v53);
    }
  }
  else if ( v37 != -2147483643 )
  {
    v38 = v67;
    goto LABEL_123;
  }
  v8 = v36[2];
  v38 = v36[1];
LABEL_123:
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v36);
  if ( PolicyLanguageSpec < 0 )
  {
    v22 = 0;
  }
  else
  {
    if ( v38 != 1 && v38 != 7 )
    {
      v22 = 0;
LABEL_78:
      v10 = v61;
      PolicyLanguageSpec = 0;
      *v11 = 1;
      goto LABEL_99;
    }
    v22 = 0;
    PolicyLanguageSpec = RtlpMuiRegAddMultiSzToLangFallbackList(
                           a1,
                           v9,
                           v8 >> 1,
                           8,
                           (unsigned int)(v6 != 1) + 2,
                           1u,
                           &v61);
  }
  if ( PolicyLanguageSpec )
    goto LABEL_39;
  v10 = v61;
LABEL_99:
  if ( v6 || v10 && *(_WORD *)(v10 + 4) )
  {
LABEL_35:
    if ( !v10 )
    {
      v25 = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0x46uLL);
      v10 = (__int64)v25;
      if ( v25 )
      {
        *v25 = 70;
        v25[1] = 0x10000;
        v25[10] = 0;
        *((_BYTE *)v25 + 8) = v6 != 1;
        *((_QWORD *)v25 + 3) = v25 + 16;
        *((_QWORD *)v25 + 2) = a1;
      }
      else
      {
        v10 = 0LL;
        PolicyLanguageSpec = -1073741801;
      }
    }
    goto LABEL_38;
  }
  PolicyLanguageSpec = 0;
  v43 = 0LL;
  *(_DWORD *)(&v66.MaximumLength + 1) = 0;
  v66.Buffer = (wchar_t *)L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\MUI\\Settings";
  v44 = 2 * wcslen(L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\MUI\\Settings");
  *(_QWORD *)&v71.Length = 48LL;
  *(_QWORD *)&v71.Attributes = 64LL;
  Handle = 0LL;
  if ( v44 >= 0xFFFE )
    LOWORD(v44) = -4;
  v71.RootDirectory = 0LL;
  v66.Length = v44;
  v66.MaximumLength = v44 + 2;
  v71.ObjectName = &v66;
  *(_OWORD *)&v71.SecurityDescriptor = 0LL;
  if ( NtOpenKey(&Handle, 0x20019u, &v71) < 0 )
    goto LABEL_162;
  *(_QWORD *)&v66.Length = 0LL;
  v66.Buffer = (wchar_t *)L"PreferredUILanguages";
  v45 = Handle;
  v46 = 2 * wcslen(L"PreferredUILanguages");
  v75 = 0;
  if ( v46 >= 0xFFFE )
    LOWORD(v46) = -4;
  v66.Length = v46;
  v66.MaximumLength = v46 + 2;
  v47 = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0xCuLL);
  if ( !v47 )
    goto LABEL_161;
  v48 = NtQueryValueKey(v45, &v66, KeyValuePartialInformation, v47, 0xCu, &v75);
  if ( (int)(v48 + 0x80000000) < 0 || v48 == -2147483643 )
  {
    v22 = v47[2];
    v68 = v47[1];
  }
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v47);
  if ( v48 == -1073741772 || !v22 )
  {
LABEL_161:
    v10 = v61;
    PolicyLanguageSpec = 0;
LABEL_162:
    *v11 = 1;
    goto LABEL_30;
  }
  if ( v48 != -2147483643 )
  {
    v10 = v61;
    PolicyLanguageSpec = -1073741772;
    goto LABEL_30;
  }
  v43 = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, v22 + 2);
  if ( !v43 )
  {
    PolicyLanguageSpec = -1073741801;
    goto LABEL_146;
  }
  v49 = Handle;
  v50 = v22 + 12;
  v76 = 0;
  if ( v22 == -12 || (v51 = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, v50)) == 0LL )
  {
    v10 = v61;
    PolicyLanguageSpec = -1073741670;
    goto LABEL_30;
  }
  v52 = NtQueryValueKey(v49, &v66, KeyValuePartialInformation, v51, v22 + 12, &v76);
  PolicyLanguageSpec = v52;
  if ( v52 >= 0 )
  {
    v21 = v51[2];
    if ( v21 > v22 )
    {
      PolicyLanguageSpec = -2147483643;
    }
    else if ( v21 <= v50 )
    {
      memmove(v43, v51 + 3, v21);
    }
    goto LABEL_26;
  }
  if ( v52 == -2147483643 )
  {
LABEL_26:
    v22 = v51[2];
    v23 = v51[1];
    goto LABEL_27;
  }
  v23 = v68;
LABEL_27:
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v51);
  if ( PolicyLanguageSpec < 0 )
  {
LABEL_146:
    v10 = v61;
    goto LABEL_30;
  }
  if ( v23 == 7 || v23 == 1 )
  {
    *a5 = 0;
    v24 = RtlpMuiRegAddMultiSzToLangFallbackList(a1, v43, v22 >> 1, 8, 3, 1u, &v61);
    v10 = v61;
    PolicyLanguageSpec = v24;
  }
  else
  {
    PolicyLanguageSpec = 0;
    v10 = v61;
    *a5 = 1;
  }
LABEL_30:
  if ( Handle )
    NtClose(Handle);
  if ( v43 )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v43);
    v10 = v61;
  }
  if ( !PolicyLanguageSpec )
    goto LABEL_35;
LABEL_38:
  *a6 = v10;
  if ( v9 )
LABEL_39:
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v9);
LABEL_40:
  if ( v63 )
  {
    NtClose(v63);
    v63 = 0LL;
  }
  if ( CurrentUserKey )
  {
    NtClose(CurrentUserKey);
    CurrentUserKey = 0LL;
  }
  if ( KeyHandle )
    NtClose(KeyHandle);
  return (unsigned int)PolicyLanguageSpec;
}
