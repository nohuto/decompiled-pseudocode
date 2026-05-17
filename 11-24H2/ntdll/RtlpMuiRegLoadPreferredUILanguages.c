/*
 * XREFs of RtlpMuiRegLoadPreferredUILanguages @ 0x18007EF80
 * Callers:
 *     RtlpQueryDefaultUILanguage @ 0x180035CC0 (RtlpQueryDefaultUILanguage.c)
 *     RtlpSetProcUserMachineLangList @ 0x180036910 (RtlpSetProcUserMachineLangList.c)
 *     InitializeTEBUserLangList @ 0x180036A80 (InitializeTEBUserLangList.c)
 *     RtlGetThreadPreferredUILanguages @ 0x180037120 (RtlGetThreadPreferredUILanguages.c)
 *     RtlpInitializeUserList @ 0x18007D9E0 (RtlpInitializeUserList.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180011260 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x1800269F0 (RtlFreeHeap.c)
 *     RtlpMuiRegAddMultiSzToLangFallbackList @ 0x1800322A0 (RtlpMuiRegAddMultiSzToLangFallbackList.c)
 *     GetGlobalizationUserModelType @ 0x180034D28 (GetGlobalizationUserModelType.c)
 *     RtlpLoadPolicyLanguageSpec @ 0x180035280 (RtlpLoadPolicyLanguageSpec.c)
 *     RtlOpenCurrentUser @ 0x180036FF0 (RtlOpenCurrentUser.c)
 *     RtlpMuiRegCreateLanguageList @ 0x18007E2D0 (RtlpMuiRegCreateLanguageList.c)
 *     RtlpMuiRegGrowLanguageList @ 0x18008001C (RtlpMuiRegGrowLanguageList.c)
 *     OpenGlobalizationUserSettingsKey_ForSingleUserModel @ 0x180080044 (OpenGlobalizationUserSettingsKey_ForSingleUserModel.c)
 *     OpenGlobalizationUserSettingsKey_ForMua @ 0x180080384 (OpenGlobalizationUserSettingsKey_ForMua.c)
 *     wcslen @ 0x1801277D0 (wcslen.c)
 *     NtClose @ 0x180161E70 (NtClose.c)
 *     NtOpenKey @ 0x180161ED0 (NtOpenKey.c)
 *     NtQueryValueKey @ 0x180161F70 (NtQueryValueKey.c)
 *     memmove @ 0x180167400 (memmove.c)
 */

__int64 __fastcall RtlpMuiRegLoadPreferredUILanguages(
        __int64 a1,
        int a2,
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
  int v15; // eax
  HANDLE v16; // rsi
  size_t v17; // rax
  unsigned __int64 Heap; // rbx
  int v19; // edi
  int v20; // ebx
  unsigned int v21; // eax
  unsigned int v22; // esi
  int v23; // r13d
  int v24; // eax
  __int64 v25; // rax
  HANDLE v27; // rcx
  size_t v28; // rax
  size_t v29; // rax
  size_t v30; // rax
  HANDLE v31; // rbx
  unsigned __int64 v32; // rdi
  int v33; // ebx
  HANDLE v34; // rbx
  unsigned int v35; // edi
  _DWORD *v36; // rsi
  int v37; // eax
  int v38; // edi
  size_t v39; // rax
  __int64 *v40; // r8
  size_t v41; // rax
  const wchar_t *v42; // rcx
  _WORD *v43; // r15
  size_t v44; // rax
  HANDLE v45; // rbx
  size_t v46; // rax
  unsigned __int64 v47; // rdi
  int v48; // ebx
  HANDLE v49; // rbx
  unsigned int v50; // r13d
  _DWORD *v51; // rdi
  int v52; // eax
  unsigned int v53; // eax
  unsigned int v54; // eax
  __int64 v55; // rax
  int v56; // eax
  __int64 v57; // rdx
  int v58; // eax
  __int64 LanguageList; // rax
  __int64 v60; // [rsp+40h] [rbp-C0h] BYREF
  __int128 v61; // [rsp+48h] [rbp-B8h] BYREF
  HANDLE v62; // [rsp+58h] [rbp-A8h] BYREF
  HANDLE v63; // [rsp+60h] [rbp-A0h] BYREF
  HANDLE Handle; // [rsp+68h] [rbp-98h] BYREF
  __int128 v65; // [rsp+70h] [rbp-90h] BYREF
  int v66; // [rsp+80h] [rbp-80h]
  int v67; // [rsp+84h] [rbp-7Ch]
  HANDLE v68; // [rsp+88h] [rbp-78h] BYREF
  HANDLE v69; // [rsp+90h] [rbp-70h] BYREF
  __int64 v70; // [rsp+98h] [rbp-68h] BYREF
  HANDLE v71; // [rsp+A0h] [rbp-60h]
  __int128 *v72; // [rsp+A8h] [rbp-58h]
  __int64 v73; // [rsp+B0h] [rbp-50h]
  __int128 v74; // [rsp+B8h] [rbp-48h]
  HANDLE v75[2]; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v76; // [rsp+D8h] [rbp-28h] BYREF
  HANDLE v77; // [rsp+E0h] [rbp-20h]
  __int128 *v78; // [rsp+E8h] [rbp-18h]
  __int64 v79; // [rsp+F0h] [rbp-10h]
  __int128 v80; // [rsp+F8h] [rbp-8h]
  int v81; // [rsp+108h] [rbp+8h] BYREF
  int v82; // [rsp+10Ch] [rbp+Ch] BYREF
  int v83; // [rsp+110h] [rbp+10h] BYREF
  _WORD v84[2]; // [rsp+118h] [rbp+18h] BYREF
  int v85; // [rsp+11Ch] [rbp+1Ch]
  const wchar_t *v86; // [rsp+120h] [rbp+20h]
  int v88; // [rsp+188h] [rbp+88h] BYREF
  int v89; // [rsp+190h] [rbp+90h] BYREF
  int v90; // [rsp+198h] [rbp+98h]

  v90 = a4;
  v88 = a2;
  v63 = 0LL;
  v62 = 0LL;
  v6 = a3;
  v69 = 0LL;
  v7 = a1;
  v67 = 7;
  v8 = 0;
  v66 = 7;
  v9 = 0LL;
  v60 = 0LL;
  v10 = 0LL;
  v61 = 0LL;
  if ( !a1 || (v11 = a5) == 0LL || !a6 )
  {
    v20 = -1073741811;
    goto LABEL_40;
  }
  *a5 = 0;
  if ( a3 > 1 )
    return 3221225485LL;
  DWORD1(v61) = 0;
  *((_QWORD *)&v61 + 1) = L"\\Registry\\Machine\\Software\\Policies\\Microsoft\\MUI\\Settings";
  v12 = 2 * wcslen(L"\\Registry\\Machine\\Software\\Policies\\Microsoft\\MUI\\Settings");
  v76 = 48LL;
  v79 = 64LL;
  v77 = 0LL;
  if ( v12 >= 0xFFFE )
    LOWORD(v12) = -4;
  LOWORD(v61) = v12;
  WORD1(v61) = v12 + 2;
  v78 = &v61;
  v80 = 0LL;
  if ( (int)NtOpenKey(&v69, 131097LL, &v76) < 0 )
  {
    v69 = 0LL;
    goto LABEL_9;
  }
  v27 = v69;
  Handle = 0LL;
  LOBYTE(v88) = 0;
  LOWORD(v89) = 0;
  v65 = 0LL;
  if ( v69 )
    goto LABEL_153;
  DWORD1(v65) = 0;
  *((_QWORD *)&v65 + 1) = L"\\Registry\\Machine\\Software\\Policies\\Microsoft\\MUI\\Settings";
  v28 = 2 * wcslen(L"\\Registry\\Machine\\Software\\Policies\\Microsoft\\MUI\\Settings");
  v76 = 48LL;
  v79 = 64LL;
  v77 = 0LL;
  if ( v28 >= 0xFFFE )
    LOWORD(v28) = -4;
  LOWORD(v65) = v28;
  WORD1(v65) = v28 + 2;
  v78 = &v65;
  v80 = 0LL;
  v20 = NtOpenKey(&Handle, 131097LL, &v76);
  if ( v20 >= 0 )
  {
    v27 = Handle;
LABEL_153:
    v20 = RtlpLoadPolicyLanguageSpec((__int64)v27, v7, &v88, (__int16 *)&v89);
    if ( !v20 )
    {
      LanguageList = RtlpMuiRegCreateLanguageList(1, 1, v7);
      v60 = LanguageList;
      v10 = LanguageList;
      if ( LanguageList )
      {
        *(_WORD *)(*(_QWORD *)(LanguageList + 24) + 6LL * *(unsigned __int16 *)(LanguageList + 4)) = (unsigned __int8)v88;
        *(_WORD *)(*(_QWORD *)(LanguageList + 24) + 6LL * (unsigned __int16)(*(_WORD *)(LanguageList + 4))++ + 4) = v89;
      }
      else
      {
        v20 = -1073741801;
      }
    }
  }
  if ( Handle )
    NtClose(Handle);
  if ( !v20 && v10 )
  {
    v22 = 0;
    goto LABEL_99;
  }
LABEL_9:
  if ( v6 != 1 )
    goto LABEL_10;
  v16 = v69;
  if ( v69 )
  {
    v88 = -1;
    v75[1] = (HANDLE)L"MachineUILock";
    HIDWORD(v75[0]) = 0;
    v17 = 2 * wcslen(L"MachineUILock");
    v89 = 0;
    if ( v17 >= 0xFFFE )
      LOWORD(v17) = -4;
    LOWORD(v75[0]) = v17;
    WORD1(v75[0]) = v17 + 2;
    Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, 0x10uLL);
    if ( Heap )
    {
      v19 = NtQueryValueKey(v16, v75, 2LL, Heap, 16, &v89);
      if ( v19 >= 0 )
      {
        v54 = *(_DWORD *)(Heap + 8);
        if ( v54 > 4 )
          v19 = -2147483643;
        else
          memmove(&v88, (const void *)(Heap + 12), v54);
      }
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, Heap);
      if ( v19 >= 0 && v88 == 1 )
      {
        v10 = v60;
        v7 = a1;
        v6 = 0;
        goto LABEL_10;
      }
    }
    v10 = v60;
  }
  v7 = a1;
LABEL_10:
  GlobalizationUserModelType = GetGlobalizationUserModelType();
  switch ( GlobalizationUserModelType )
  {
    case 1:
      v15 = RtlOpenCurrentUser(0x2000000u, (__int64)&v63);
      break;
    case 2:
      v15 = OpenGlobalizationUserSettingsKey_ForSingleUserModel(0x2000000LL, &v63);
      break;
    case 3:
      v88 = 0;
      v15 = OpenGlobalizationUserSettingsKey_ForMua(0x2000000LL, v14, &v63, &v88);
      break;
    default:
      v20 = -1073741595;
      goto LABEL_129;
  }
  v20 = v15;
  if ( v15 < 0 )
  {
LABEL_129:
    *v11 = 1;
    goto LABEL_40;
  }
  if ( v6 == 1 )
  {
    v86 = L"Software\\Policies\\Microsoft\\Control Panel\\Desktop";
    v75[0] = 0LL;
    v68 = 0LL;
    LOBYTE(v88) = 0;
    LOWORD(v89) = 0;
    v85 = 0;
    v39 = 2 * wcslen(L"Software\\Policies\\Microsoft\\Control Panel\\Desktop");
    if ( v39 >= 0xFFFE )
      LOWORD(v39) = -4;
    v84[0] = v39;
    v84[1] = v39 + 2;
    if ( v63 )
    {
      v70 = 48LL;
      v72 = (__int128 *)v84;
      v74 = 0LL;
      v73 = 64LL;
      v40 = &v70;
      v71 = v63;
    }
    else
    {
      v56 = GetGlobalizationUserModelType();
      switch ( v56 )
      {
        case 1:
          v58 = RtlOpenCurrentUser(0x2000000u, (__int64)v75);
          break;
        case 2:
          v58 = OpenGlobalizationUserSettingsKey_ForSingleUserModel(0x2000000LL, v75);
          break;
        case 3:
          v81 = 0;
          v58 = OpenGlobalizationUserSettingsKey_ForMua(0x2000000LL, v57, v75, &v81);
          break;
        default:
          v20 = -1073741595;
          goto LABEL_84;
      }
      v20 = v58;
      if ( v58 < 0 )
        goto LABEL_84;
      v40 = &v76;
      v77 = v75[0];
      v76 = 48LL;
      v78 = (__int128 *)v84;
      v79 = 64LL;
      v80 = 0LL;
    }
    v20 = NtOpenKey(&v68, 131097LL, v40);
    if ( v20 >= 0 )
    {
      v20 = RtlpLoadPolicyLanguageSpec((__int64)v68, v7, &v88, (__int16 *)&v89);
      if ( !v20 )
      {
        if ( v10 )
        {
          if ( *(_WORD *)(v10 + 4) < *(_WORD *)(v10 + 6) )
          {
LABEL_141:
            *(_WORD *)(*(_QWORD *)(v10 + 24) + 6LL * *(unsigned __int16 *)(v10 + 4)) = (unsigned __int8)v88;
            *(_WORD *)(*(_QWORD *)(v10 + 24) + 6LL * (unsigned __int16)(*(_WORD *)(v10 + 4))++ + 4) = v89;
            goto LABEL_84;
          }
          v55 = RtlpMuiRegGrowLanguageList(v10);
        }
        else
        {
          v55 = RtlpMuiRegCreateLanguageList(1, 0, v7);
        }
        v60 = v55;
        v10 = v55;
        if ( !v55 )
        {
          v20 = -1073741801;
          goto LABEL_84;
        }
        goto LABEL_141;
      }
    }
LABEL_84:
    if ( v68 )
    {
      NtClose(v68);
      v22 = 0;
      v68 = 0LL;
    }
    else
    {
      v22 = 0;
    }
    if ( v75[0] )
      NtClose(v75[0]);
    if ( !v20 && v10 )
      goto LABEL_38;
    *(_QWORD *)&v61 = 0LL;
    *((_QWORD *)&v61 + 1) = L"Control Panel\\Desktop";
    v41 = 2 * wcslen(L"Control Panel\\Desktop");
    v70 = 48LL;
    v73 = 64LL;
    v62 = 0LL;
    if ( v41 >= 0xFFFE )
      LOWORD(v41) = -4;
    LOWORD(v61) = v41;
    WORD1(v61) = v41 + 2;
    v71 = v63;
    v72 = &v61;
    v74 = 0LL;
    v20 = NtOpenKey(&v62, 131097LL, &v70);
    if ( v20 < 0 )
    {
      *v11 = 1;
      goto LABEL_40;
    }
    v42 = L"PreferredUILanguages";
    *(_QWORD *)&v61 = 0LL;
    if ( v90 != 3 )
      v42 = L"PreferredUILanguagesPending";
    *((_QWORD *)&v61 + 1) = v42;
    v30 = 2 * wcslen(v42);
    if ( v30 >= 0xFFFE )
      LOWORD(v30) = -4;
    goto LABEL_66;
  }
  v22 = 0;
  *(_QWORD *)&v61 = 0LL;
  *((_QWORD *)&v61 + 1) = L"Control Panel\\Desktop\\MuiCached";
  v29 = 2 * wcslen(L"Control Panel\\Desktop\\MuiCached");
  v70 = 48LL;
  v73 = 64LL;
  v62 = 0LL;
  if ( v29 >= 0xFFFE )
    LOWORD(v29) = -4;
  LOWORD(v61) = v29;
  WORD1(v61) = v29 + 2;
  v71 = v63;
  v72 = &v61;
  v74 = 0LL;
  if ( (int)NtOpenKey(&v62, 131097LL, &v70) < 0 )
  {
    v20 = 0;
    *v11 = 1;
    goto LABEL_99;
  }
  *(_QWORD *)&v61 = 0LL;
  *((_QWORD *)&v61 + 1) = L"MachinePreferredUILanguages";
  v30 = 2 * wcslen(L"MachinePreferredUILanguages");
  if ( v30 >= 0xFFFE )
    LOWORD(v30) = -4;
LABEL_66:
  v31 = v62;
  LOWORD(v61) = v30;
  WORD1(v61) = v30 + 2;
  v88 = 0;
  v32 = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, 0xCuLL);
  if ( !v32 )
    goto LABEL_78;
  v33 = NtQueryValueKey(v31, &v61, 2LL, v32, 12, &v88);
  if ( (int)(v33 + 0x80000000) < 0 || v33 == -2147483643 )
  {
    v8 = *(_DWORD *)(v32 + 8);
    v66 = *(_DWORD *)(v32 + 4);
  }
  RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v32);
  if ( v33 == -1073741772 || !v8 )
    goto LABEL_78;
  if ( v33 != -2147483643 )
  {
    v20 = -1073741772;
    goto LABEL_40;
  }
  v9 = (_WORD *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, v8 + 2);
  if ( !v9 )
  {
    v20 = -1073741801;
    goto LABEL_40;
  }
  v34 = v62;
  v35 = v8 + 12;
  v88 = 0;
  if ( v8 == -12 || (v36 = (_DWORD *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, v35)) == 0LL )
  {
    v20 = -1073741670;
    goto LABEL_39;
  }
  v37 = NtQueryValueKey(v34, &v61, 2LL, v36, v8 + 12, &v88);
  v20 = v37;
  if ( v37 >= 0 )
  {
    v53 = v36[2];
    if ( v53 > v8 )
    {
      v20 = -2147483643;
    }
    else if ( v53 <= v35 )
    {
      memmove(v9, v36 + 3, v53);
    }
  }
  else if ( v37 != -2147483643 )
  {
    v38 = v66;
    goto LABEL_123;
  }
  v8 = v36[2];
  v38 = v36[1];
LABEL_123:
  RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)v36);
  if ( v20 < 0 )
  {
    v22 = 0;
  }
  else
  {
    if ( v38 != 1 && v38 != 7 )
    {
      v22 = 0;
LABEL_78:
      v10 = v60;
      v20 = 0;
      *v11 = 1;
      goto LABEL_99;
    }
    v22 = 0;
    v20 = RtlpMuiRegAddMultiSzToLangFallbackList(a1, v9, v8 >> 1, 8, (unsigned int)(v6 != 1) + 2, 1u, &v60);
  }
  if ( v20 )
    goto LABEL_39;
  v10 = v60;
LABEL_99:
  if ( v6 || v10 && *(_WORD *)(v10 + 4) )
  {
LABEL_35:
    if ( !v10 )
    {
      v25 = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, 0x46uLL);
      v10 = v25;
      if ( v25 )
      {
        *(_DWORD *)v25 = 70;
        *(_DWORD *)(v25 + 4) = 0x10000;
        *(_DWORD *)(v25 + 40) = 0;
        *(_BYTE *)(v25 + 8) = v6 != 1;
        *(_QWORD *)(v25 + 24) = v25 + 64;
        *(_QWORD *)(v25 + 16) = a1;
      }
      else
      {
        v10 = 0LL;
        v20 = -1073741801;
      }
    }
    goto LABEL_38;
  }
  v20 = 0;
  v43 = 0LL;
  DWORD1(v65) = 0;
  *((_QWORD *)&v65 + 1) = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\MUI\\Settings";
  v44 = 2 * wcslen(L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\MUI\\Settings");
  v70 = 48LL;
  v73 = 64LL;
  Handle = 0LL;
  if ( v44 >= 0xFFFE )
    LOWORD(v44) = -4;
  v71 = 0LL;
  LOWORD(v65) = v44;
  WORD1(v65) = v44 + 2;
  v72 = &v65;
  v74 = 0LL;
  if ( (int)NtOpenKey(&Handle, 131097LL, &v70) < 0 )
    goto LABEL_162;
  *(_QWORD *)&v65 = 0LL;
  *((_QWORD *)&v65 + 1) = L"PreferredUILanguages";
  v45 = Handle;
  v46 = 2 * wcslen(L"PreferredUILanguages");
  v82 = 0;
  if ( v46 >= 0xFFFE )
    LOWORD(v46) = -4;
  LOWORD(v65) = v46;
  WORD1(v65) = v46 + 2;
  v47 = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, 0xCuLL);
  if ( !v47 )
    goto LABEL_161;
  v48 = NtQueryValueKey(v45, &v65, 2LL, v47, 12, &v82);
  if ( (int)(v48 + 0x80000000) < 0 || v48 == -2147483643 )
  {
    v22 = *(_DWORD *)(v47 + 8);
    v67 = *(_DWORD *)(v47 + 4);
  }
  RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v47);
  if ( v48 == -1073741772 || !v22 )
  {
LABEL_161:
    v10 = v60;
    v20 = 0;
LABEL_162:
    *v11 = 1;
    goto LABEL_30;
  }
  if ( v48 != -2147483643 )
  {
    v10 = v60;
    v20 = -1073741772;
    goto LABEL_30;
  }
  v43 = (_WORD *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, v22 + 2);
  if ( !v43 )
  {
    v20 = -1073741801;
    goto LABEL_146;
  }
  v49 = Handle;
  v50 = v22 + 12;
  v83 = 0;
  if ( v22 == -12 || (v51 = (_DWORD *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, v50)) == 0LL )
  {
    v10 = v60;
    v20 = -1073741670;
    goto LABEL_30;
  }
  v52 = NtQueryValueKey(v49, &v65, 2LL, v51, v22 + 12, &v83);
  v20 = v52;
  if ( v52 >= 0 )
  {
    v21 = v51[2];
    if ( v21 > v22 )
    {
      v20 = -2147483643;
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
  v23 = v67;
LABEL_27:
  RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)v51);
  if ( v20 < 0 )
  {
LABEL_146:
    v10 = v60;
    goto LABEL_30;
  }
  if ( v23 == 7 || v23 == 1 )
  {
    *a5 = 0;
    v24 = RtlpMuiRegAddMultiSzToLangFallbackList(a1, v43, v22 >> 1, 8, 3, 1u, &v60);
    v10 = v60;
    v20 = v24;
  }
  else
  {
    v20 = 0;
    v10 = v60;
    *a5 = 1;
  }
LABEL_30:
  if ( Handle )
    NtClose(Handle);
  if ( v43 )
  {
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)v43);
    v10 = v60;
  }
  if ( !v20 )
    goto LABEL_35;
LABEL_38:
  *a6 = v10;
  if ( v9 )
LABEL_39:
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)v9);
LABEL_40:
  if ( v62 )
  {
    NtClose(v62);
    v62 = 0LL;
  }
  if ( v63 )
  {
    NtClose(v63);
    v63 = 0LL;
  }
  if ( v69 )
    NtClose(v69);
  return (unsigned int)v20;
}
