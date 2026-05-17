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
  __int64 Heap; // rbx
  int v19; // edi
  __int64 v20; // r9
  int v21; // ebx
  unsigned int v22; // eax
  __int64 v23; // r9
  unsigned int v24; // esi
  int v25; // r13d
  __int64 v26; // r9
  int v27; // eax
  __int64 v28; // rax
  HANDLE v30; // rcx
  size_t v31; // rax
  size_t v32; // rax
  size_t v33; // rax
  HANDLE v34; // rbx
  __int64 v35; // rdi
  int v36; // ebx
  __int64 v37; // r9
  HANDLE v38; // rbx
  unsigned int v39; // edi
  _DWORD *v40; // rsi
  int v41; // eax
  __int64 v42; // r9
  int v43; // edi
  size_t v44; // rax
  __int64 *v45; // r8
  size_t v46; // rax
  const wchar_t *v47; // rcx
  _WORD *v48; // r15
  size_t v49; // rax
  HANDLE v50; // rbx
  size_t v51; // rax
  __int64 v52; // rdi
  int v53; // ebx
  __int64 v54; // r9
  HANDLE v55; // rbx
  unsigned int v56; // r13d
  _DWORD *v57; // rdi
  int v58; // eax
  unsigned int v59; // eax
  unsigned int v60; // eax
  __int64 v61; // rax
  int v62; // eax
  __int64 v63; // rdx
  int v64; // eax
  __int64 v65; // rdx
  __int64 LanguageList; // rax
  __int64 v67; // [rsp+40h] [rbp-C0h] BYREF
  __int128 v68; // [rsp+48h] [rbp-B8h] BYREF
  HANDLE v69; // [rsp+58h] [rbp-A8h] BYREF
  HANDLE v70; // [rsp+60h] [rbp-A0h] BYREF
  HANDLE Handle; // [rsp+68h] [rbp-98h] BYREF
  __int128 v72; // [rsp+70h] [rbp-90h] BYREF
  int v73; // [rsp+80h] [rbp-80h]
  int v74; // [rsp+84h] [rbp-7Ch]
  HANDLE v75; // [rsp+88h] [rbp-78h] BYREF
  HANDLE v76; // [rsp+90h] [rbp-70h] BYREF
  __int64 v77; // [rsp+98h] [rbp-68h] BYREF
  HANDLE v78; // [rsp+A0h] [rbp-60h]
  __int128 *v79; // [rsp+A8h] [rbp-58h]
  __int64 v80; // [rsp+B0h] [rbp-50h]
  __int128 v81; // [rsp+B8h] [rbp-48h]
  HANDLE v82[2]; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v83; // [rsp+D8h] [rbp-28h] BYREF
  HANDLE v84; // [rsp+E0h] [rbp-20h]
  __int128 *v85; // [rsp+E8h] [rbp-18h]
  __int64 v86; // [rsp+F0h] [rbp-10h]
  __int128 v87; // [rsp+F8h] [rbp-8h]
  int v88; // [rsp+108h] [rbp+8h] BYREF
  int v89; // [rsp+10Ch] [rbp+Ch] BYREF
  int v90; // [rsp+110h] [rbp+10h] BYREF
  _WORD v91[2]; // [rsp+118h] [rbp+18h] BYREF
  int v92; // [rsp+11Ch] [rbp+1Ch]
  const wchar_t *v93; // [rsp+120h] [rbp+20h]
  int v95; // [rsp+188h] [rbp+88h] BYREF
  int v96; // [rsp+190h] [rbp+90h] BYREF
  int v97; // [rsp+198h] [rbp+98h]

  v97 = a4;
  v95 = a2;
  v70 = 0LL;
  v69 = 0LL;
  v6 = a3;
  v76 = 0LL;
  v7 = a1;
  v74 = 7;
  v8 = 0;
  v73 = 7;
  v9 = 0LL;
  v67 = 0LL;
  v10 = 0LL;
  v68 = 0LL;
  if ( !a1 || (v11 = a5) == 0LL || !a6 )
  {
    v21 = -1073741811;
    goto LABEL_40;
  }
  *a5 = 0;
  if ( a3 > 1 )
    return 3221225485LL;
  DWORD1(v68) = 0;
  *((_QWORD *)&v68 + 1) = L"\\Registry\\Machine\\Software\\Policies\\Microsoft\\MUI\\Settings";
  v12 = 2 * wcslen(L"\\Registry\\Machine\\Software\\Policies\\Microsoft\\MUI\\Settings");
  v83 = 48LL;
  v86 = 64LL;
  v84 = 0LL;
  if ( v12 >= 0xFFFE )
    LOWORD(v12) = -4;
  LOWORD(v68) = v12;
  WORD1(v68) = v12 + 2;
  v85 = &v68;
  v87 = 0LL;
  if ( (int)NtOpenKey(&v76, 131097LL, &v83) < 0 )
  {
    v76 = 0LL;
    goto LABEL_9;
  }
  v30 = v76;
  Handle = 0LL;
  LOBYTE(v95) = 0;
  LOWORD(v96) = 0;
  v72 = 0LL;
  if ( v76 )
    goto LABEL_153;
  DWORD1(v72) = 0;
  *((_QWORD *)&v72 + 1) = L"\\Registry\\Machine\\Software\\Policies\\Microsoft\\MUI\\Settings";
  v31 = 2 * wcslen(L"\\Registry\\Machine\\Software\\Policies\\Microsoft\\MUI\\Settings");
  v83 = 48LL;
  v86 = 64LL;
  v84 = 0LL;
  if ( v31 >= 0xFFFE )
    LOWORD(v31) = -4;
  LOWORD(v72) = v31;
  WORD1(v72) = v31 + 2;
  v85 = &v72;
  v87 = 0LL;
  v21 = NtOpenKey(&Handle, 131097LL, &v83);
  if ( v21 >= 0 )
  {
    v30 = Handle;
LABEL_153:
    v21 = RtlpLoadPolicyLanguageSpec(v30, v7, &v95, &v96);
    if ( !v21 )
    {
      LOBYTE(v65) = 1;
      LanguageList = RtlpMuiRegCreateLanguageList(1LL, v65, v7);
      v67 = LanguageList;
      v10 = LanguageList;
      if ( LanguageList )
      {
        *(_WORD *)(*(_QWORD *)(LanguageList + 24) + 6LL * *(unsigned __int16 *)(LanguageList + 4)) = (unsigned __int8)v95;
        *(_WORD *)(*(_QWORD *)(LanguageList + 24) + 6LL * (unsigned __int16)(*(_WORD *)(LanguageList + 4))++ + 4) = v96;
      }
      else
      {
        v21 = -1073741801;
      }
    }
  }
  if ( Handle )
    NtClose(Handle);
  if ( !v21 && v10 )
  {
    v24 = 0;
    goto LABEL_99;
  }
LABEL_9:
  if ( v6 != 1 )
    goto LABEL_10;
  v16 = v76;
  if ( v76 )
  {
    v95 = -1;
    v82[1] = (HANDLE)L"MachineUILock";
    HIDWORD(v82[0]) = 0;
    v17 = 2 * wcslen(L"MachineUILock");
    v96 = 0;
    if ( v17 >= 0xFFFE )
      LOWORD(v17) = -4;
    LOWORD(v82[0]) = v17;
    WORD1(v82[0]) = v17 + 2;
    Heap = RtlAllocateHeap((char *)NtCurrentPeb()->ProcessHeap, 8u, 0x10uLL);
    if ( Heap )
    {
      v19 = NtQueryValueKey(v16, v82, 2LL, Heap, 16, &v96);
      if ( v19 >= 0 )
      {
        v60 = *(_DWORD *)(Heap + 8);
        if ( v60 > 4 )
          v19 = -2147483643;
        else
          memmove(&v95, (const void *)(Heap + 12), v60);
      }
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, Heap, v20);
      if ( v19 >= 0 && v95 == 1 )
      {
        v10 = v67;
        v7 = a1;
        v6 = 0;
        goto LABEL_10;
      }
    }
    v10 = v67;
  }
  v7 = a1;
LABEL_10:
  GlobalizationUserModelType = GetGlobalizationUserModelType();
  switch ( GlobalizationUserModelType )
  {
    case 1:
      v15 = RtlOpenCurrentUser(0x2000000u, (__int64)&v70);
      break;
    case 2:
      v15 = OpenGlobalizationUserSettingsKey_ForSingleUserModel(0x2000000LL, &v70);
      break;
    case 3:
      v95 = 0;
      v15 = OpenGlobalizationUserSettingsKey_ForMua(0x2000000LL, v14, &v70, &v95);
      break;
    default:
      v21 = -1073741595;
      goto LABEL_129;
  }
  v21 = v15;
  if ( v15 < 0 )
  {
LABEL_129:
    *v11 = 1;
    goto LABEL_40;
  }
  if ( v6 == 1 )
  {
    v93 = L"Software\\Policies\\Microsoft\\Control Panel\\Desktop";
    v82[0] = 0LL;
    v75 = 0LL;
    LOBYTE(v95) = 0;
    LOWORD(v96) = 0;
    v92 = 0;
    v44 = 2 * wcslen(L"Software\\Policies\\Microsoft\\Control Panel\\Desktop");
    if ( v44 >= 0xFFFE )
      LOWORD(v44) = -4;
    v91[0] = v44;
    v91[1] = v44 + 2;
    if ( v70 )
    {
      v77 = 48LL;
      v79 = (__int128 *)v91;
      v81 = 0LL;
      v80 = 64LL;
      v45 = &v77;
      v78 = v70;
    }
    else
    {
      v62 = GetGlobalizationUserModelType();
      switch ( v62 )
      {
        case 1:
          v64 = RtlOpenCurrentUser(0x2000000u, (__int64)v82);
          break;
        case 2:
          v64 = OpenGlobalizationUserSettingsKey_ForSingleUserModel(0x2000000LL, v82);
          break;
        case 3:
          v88 = 0;
          v64 = OpenGlobalizationUserSettingsKey_ForMua(0x2000000LL, v63, v82, &v88);
          break;
        default:
          v21 = -1073741595;
          goto LABEL_84;
      }
      v21 = v64;
      if ( v64 < 0 )
        goto LABEL_84;
      v45 = &v83;
      v84 = v82[0];
      v83 = 48LL;
      v85 = (__int128 *)v91;
      v86 = 64LL;
      v87 = 0LL;
    }
    v21 = NtOpenKey(&v75, 131097LL, v45);
    if ( v21 >= 0 )
    {
      v21 = RtlpLoadPolicyLanguageSpec(v75, v7, &v95, &v96);
      if ( !v21 )
      {
        if ( v10 )
        {
          if ( *(_WORD *)(v10 + 4) < *(_WORD *)(v10 + 6) )
          {
LABEL_141:
            *(_WORD *)(*(_QWORD *)(v10 + 24) + 6LL * *(unsigned __int16 *)(v10 + 4)) = (unsigned __int8)v95;
            *(_WORD *)(*(_QWORD *)(v10 + 24) + 6LL * (unsigned __int16)(*(_WORD *)(v10 + 4))++ + 4) = v96;
            goto LABEL_84;
          }
          v61 = RtlpMuiRegGrowLanguageList(v10);
        }
        else
        {
          v61 = RtlpMuiRegCreateLanguageList(1LL, 0LL, v7);
        }
        v67 = v61;
        v10 = v61;
        if ( !v61 )
        {
          v21 = -1073741801;
          goto LABEL_84;
        }
        goto LABEL_141;
      }
    }
LABEL_84:
    if ( v75 )
    {
      NtClose(v75);
      v24 = 0;
      v75 = 0LL;
    }
    else
    {
      v24 = 0;
    }
    if ( v82[0] )
      NtClose(v82[0]);
    if ( !v21 && v10 )
      goto LABEL_38;
    *(_QWORD *)&v68 = 0LL;
    *((_QWORD *)&v68 + 1) = L"Control Panel\\Desktop";
    v46 = 2 * wcslen(L"Control Panel\\Desktop");
    v77 = 48LL;
    v80 = 64LL;
    v69 = 0LL;
    if ( v46 >= 0xFFFE )
      LOWORD(v46) = -4;
    LOWORD(v68) = v46;
    WORD1(v68) = v46 + 2;
    v78 = v70;
    v79 = &v68;
    v81 = 0LL;
    v21 = NtOpenKey(&v69, 131097LL, &v77);
    if ( v21 < 0 )
    {
      *v11 = 1;
      goto LABEL_40;
    }
    v47 = L"PreferredUILanguages";
    *(_QWORD *)&v68 = 0LL;
    if ( v97 != 3 )
      v47 = L"PreferredUILanguagesPending";
    *((_QWORD *)&v68 + 1) = v47;
    v33 = 2 * wcslen(v47);
    if ( v33 >= 0xFFFE )
      LOWORD(v33) = -4;
    goto LABEL_66;
  }
  v24 = 0;
  *(_QWORD *)&v68 = 0LL;
  *((_QWORD *)&v68 + 1) = L"Control Panel\\Desktop\\MuiCached";
  v32 = 2 * wcslen(L"Control Panel\\Desktop\\MuiCached");
  v77 = 48LL;
  v80 = 64LL;
  v69 = 0LL;
  if ( v32 >= 0xFFFE )
    LOWORD(v32) = -4;
  LOWORD(v68) = v32;
  WORD1(v68) = v32 + 2;
  v78 = v70;
  v79 = &v68;
  v81 = 0LL;
  if ( (int)NtOpenKey(&v69, 131097LL, &v77) < 0 )
  {
    v21 = 0;
    *v11 = 1;
    goto LABEL_99;
  }
  *(_QWORD *)&v68 = 0LL;
  *((_QWORD *)&v68 + 1) = L"MachinePreferredUILanguages";
  v33 = 2 * wcslen(L"MachinePreferredUILanguages");
  if ( v33 >= 0xFFFE )
    LOWORD(v33) = -4;
LABEL_66:
  v34 = v69;
  LOWORD(v68) = v33;
  WORD1(v68) = v33 + 2;
  v95 = 0;
  v35 = RtlAllocateHeap((char *)NtCurrentPeb()->ProcessHeap, 8u, 0xCuLL);
  if ( !v35 )
    goto LABEL_78;
  v36 = NtQueryValueKey(v34, &v68, 2LL, v35, 12, &v95);
  if ( (int)(v36 + 0x80000000) < 0 || v36 == -2147483643 )
  {
    v8 = *(_DWORD *)(v35 + 8);
    v73 = *(_DWORD *)(v35 + 4);
  }
  RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v35, v37);
  if ( v36 == -1073741772 || !v8 )
    goto LABEL_78;
  if ( v36 != -2147483643 )
  {
    v21 = -1073741772;
    goto LABEL_40;
  }
  v9 = (_WORD *)RtlAllocateHeap((char *)NtCurrentPeb()->ProcessHeap, 8u, v8 + 2);
  if ( !v9 )
  {
    v21 = -1073741801;
    goto LABEL_40;
  }
  v38 = v69;
  v39 = v8 + 12;
  v95 = 0;
  if ( v8 == -12 || (v40 = (_DWORD *)RtlAllocateHeap((char *)NtCurrentPeb()->ProcessHeap, 8u, v39)) == 0LL )
  {
    v21 = -1073741670;
    goto LABEL_39;
  }
  v41 = NtQueryValueKey(v38, &v68, 2LL, v40, v8 + 12, &v95);
  v21 = v41;
  if ( v41 >= 0 )
  {
    v59 = v40[2];
    if ( v59 > v8 )
    {
      v21 = -2147483643;
    }
    else if ( v59 <= v39 )
    {
      memmove(v9, v40 + 3, v59);
    }
  }
  else if ( v41 != -2147483643 )
  {
    v43 = v73;
    goto LABEL_123;
  }
  v8 = v40[2];
  v43 = v40[1];
LABEL_123:
  RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (__int64)v40, v42);
  if ( v21 < 0 )
  {
    v24 = 0;
  }
  else
  {
    if ( v43 != 1 && v43 != 7 )
    {
      v24 = 0;
LABEL_78:
      v10 = v67;
      v21 = 0;
      *v11 = 1;
      goto LABEL_99;
    }
    v24 = 0;
    v21 = RtlpMuiRegAddMultiSzToLangFallbackList(a1, v9, v8 >> 1, 8, (unsigned int)(v6 != 1) + 2, 1u, &v67);
  }
  if ( v21 )
    goto LABEL_39;
  v10 = v67;
LABEL_99:
  if ( v6 || v10 && *(_WORD *)(v10 + 4) )
  {
LABEL_35:
    if ( !v10 )
    {
      v28 = RtlAllocateHeap((char *)NtCurrentPeb()->ProcessHeap, 8u, 0x46uLL);
      v10 = v28;
      if ( v28 )
      {
        *(_DWORD *)v28 = 70;
        *(_DWORD *)(v28 + 4) = 0x10000;
        *(_DWORD *)(v28 + 40) = 0;
        *(_BYTE *)(v28 + 8) = v6 != 1;
        *(_QWORD *)(v28 + 24) = v28 + 64;
        *(_QWORD *)(v28 + 16) = a1;
      }
      else
      {
        v10 = 0LL;
        v21 = -1073741801;
      }
    }
    goto LABEL_38;
  }
  v21 = 0;
  v48 = 0LL;
  DWORD1(v72) = 0;
  *((_QWORD *)&v72 + 1) = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\MUI\\Settings";
  v49 = 2 * wcslen(L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\MUI\\Settings");
  v77 = 48LL;
  v80 = 64LL;
  Handle = 0LL;
  if ( v49 >= 0xFFFE )
    LOWORD(v49) = -4;
  v78 = 0LL;
  LOWORD(v72) = v49;
  WORD1(v72) = v49 + 2;
  v79 = &v72;
  v81 = 0LL;
  if ( (int)NtOpenKey(&Handle, 131097LL, &v77) < 0 )
    goto LABEL_162;
  *(_QWORD *)&v72 = 0LL;
  *((_QWORD *)&v72 + 1) = L"PreferredUILanguages";
  v50 = Handle;
  v51 = 2 * wcslen(L"PreferredUILanguages");
  v89 = 0;
  if ( v51 >= 0xFFFE )
    LOWORD(v51) = -4;
  LOWORD(v72) = v51;
  WORD1(v72) = v51 + 2;
  v52 = RtlAllocateHeap((char *)NtCurrentPeb()->ProcessHeap, 8u, 0xCuLL);
  if ( !v52 )
    goto LABEL_161;
  v53 = NtQueryValueKey(v50, &v72, 2LL, v52, 12, &v89);
  if ( (int)(v53 + 0x80000000) < 0 || v53 == -2147483643 )
  {
    v24 = *(_DWORD *)(v52 + 8);
    v74 = *(_DWORD *)(v52 + 4);
  }
  RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v52, v54);
  if ( v53 == -1073741772 || !v24 )
  {
LABEL_161:
    v10 = v67;
    v21 = 0;
LABEL_162:
    *v11 = 1;
    goto LABEL_30;
  }
  if ( v53 != -2147483643 )
  {
    v10 = v67;
    v21 = -1073741772;
    goto LABEL_30;
  }
  v48 = (_WORD *)RtlAllocateHeap((char *)NtCurrentPeb()->ProcessHeap, 8u, v24 + 2);
  if ( !v48 )
  {
    v21 = -1073741801;
    goto LABEL_146;
  }
  v55 = Handle;
  v56 = v24 + 12;
  v90 = 0;
  if ( v24 == -12 || (v57 = (_DWORD *)RtlAllocateHeap((char *)NtCurrentPeb()->ProcessHeap, 8u, v56)) == 0LL )
  {
    v10 = v67;
    v21 = -1073741670;
    goto LABEL_30;
  }
  v58 = NtQueryValueKey(v55, &v72, 2LL, v57, v24 + 12, &v90);
  v21 = v58;
  if ( v58 >= 0 )
  {
    v22 = v57[2];
    if ( v22 > v24 )
    {
      v21 = -2147483643;
    }
    else if ( v22 <= v56 )
    {
      memmove(v48, v57 + 3, v22);
    }
    goto LABEL_26;
  }
  if ( v58 == -2147483643 )
  {
LABEL_26:
    v24 = v57[2];
    v25 = v57[1];
    goto LABEL_27;
  }
  v25 = v74;
LABEL_27:
  RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (__int64)v57, v23);
  if ( v21 < 0 )
  {
LABEL_146:
    v10 = v67;
    goto LABEL_30;
  }
  if ( v25 == 7 || v25 == 1 )
  {
    *a5 = 0;
    v27 = RtlpMuiRegAddMultiSzToLangFallbackList(a1, v48, v24 >> 1, 8, 3, 1u, &v67);
    v10 = v67;
    v21 = v27;
  }
  else
  {
    v21 = 0;
    v10 = v67;
    *a5 = 1;
  }
LABEL_30:
  if ( Handle )
    NtClose(Handle);
  if ( v48 )
  {
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (__int64)v48, v26);
    v10 = v67;
  }
  if ( !v21 )
    goto LABEL_35;
LABEL_38:
  *a6 = v10;
  if ( v9 )
LABEL_39:
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (__int64)v9, v26);
LABEL_40:
  if ( v69 )
  {
    NtClose(v69);
    v69 = 0LL;
  }
  if ( v70 )
  {
    NtClose(v70);
    v70 = 0LL;
  }
  if ( v76 )
    NtClose(v76);
  return (unsigned int)v21;
}
