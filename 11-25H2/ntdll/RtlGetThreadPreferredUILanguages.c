/*
 * XREFs of RtlGetThreadPreferredUILanguages @ 0x18005D9C0
 * Callers:
 *     RtlSetThreadPreferredUILanguages2 @ 0x180088970 (RtlSetThreadPreferredUILanguages2.c)
 *     RtlSetThreadPreferredUILanguages @ 0x18008B390 (RtlSetThreadPreferredUILanguages.c)
 *     LdrpSetThreadPreferredLangList @ 0x18008B8E0 (LdrpSetThreadPreferredLangList.c)
 *     RtlGetFileMUIPath @ 0x1800A9A40 (RtlGetFileMUIPath.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180050340 (RtlAllocateHeap.c)
 *     RtlLCIDToCultureName @ 0x18005B640 (RtlLCIDToCultureName.c)
 *     RtlCultureNameToLCID @ 0x18005C370 (RtlCultureNameToLCID.c)
 *     RtlpComputeLangListCheckSum @ 0x18005CCE0 (RtlpComputeLangListCheckSum.c)
 *     RtlpSetProcUserMachineLangList @ 0x18005D1B0 (RtlpSetProcUserMachineLangList.c)
 *     InitializeTEBUserLangList @ 0x18005D320 (InitializeTEBUserLangList.c)
 *     RtlIntegerToUnicode @ 0x18005FB90 (RtlIntegerToUnicode.c)
 *     RtlpLangNameInMultiSzString_Size @ 0x1800600E0 (RtlpLangNameInMultiSzString_Size.c)
 *     RtlEnterCriticalSection @ 0x18007BF00 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x18007C000 (RtlLeaveCriticalSection.c)
 *     RtlFreeHeap @ 0x180080DD0 (RtlFreeHeap.c)
 *     RtlUpdateProcessRegistryInfo @ 0x180086FD0 (RtlUpdateProcessRegistryInfo.c)
 *     RtlpMuiRegLoadPreferredUILanguages @ 0x180087AE0 (RtlpMuiRegLoadPreferredUILanguages.c)
 *     RtlpMuiFreeLangRegistryInfo @ 0x180088D50 (RtlpMuiFreeLangRegistryInfo.c)
 *     RtlpMuiRegCreateLanguageList @ 0x180089780 (RtlpMuiRegCreateLanguageList.c)
 *     RtlpMUIRegPatchLicenseInfortmation @ 0x180089B50 (RtlpMUIRegPatchLicenseInfortmation.c)
 *     RtlpMuiRegDupLanguageList @ 0x18008A6F8 (RtlpMuiRegDupLanguageList.c)
 *     RtlpCreateProcessRegistryInfo @ 0x18008BAC0 (RtlpCreateProcessRegistryInfo.c)
 *     RtlpInitMuiCriticalSection @ 0x18008BB44 (RtlpInitMuiCriticalSection.c)
 *     RtlpMuiRegCreateAndLoadRegistryInfo @ 0x18008BBB8 (RtlpMuiRegCreateAndLoadRegistryInfo.c)
 *     LdrpMergeLangFallbackLists @ 0x18008D050 (LdrpMergeLangFallbackLists.c)
 *     RtlpMuiRegFreeLanguageList @ 0x18008D870 (RtlpMuiRegFreeLanguageList.c)
 *     RtlpAddNeutralsToMergedList @ 0x1800A80C0 (RtlpAddNeutralsToMergedList.c)
 *     RtlpSetProcMergedLangList @ 0x18010DAB4 (RtlpSetProcMergedLangList.c)
 *     _wcsicmp @ 0x180124750 (_wcsicmp.c)
 *     wcslen @ 0x1801292B0 (wcslen.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 *     memmove @ 0x180168980 (memmove.c)
 */

NTSTATUS __cdecl RtlGetThreadPreferredUILanguages(
        ULONG Flags,
        PULONG NumberOfLanguages,
        PZZWSTR Languages,
        PULONG ReturnLength)
{
  ULONG v4; // r12d
  PZZWSTR v5; // rbx
  unsigned int *v6; // rsi
  ULONG v7; // r14d
  __int64 v8; // r15
  void *v9; // r13
  NTSTATUS RegistryInfo; // ebx
  NTSTATUS PreferredUILanguages; // edi
  void *MergedPrefLanguages; // r12
  char v13; // r9
  unsigned int v14; // r13d
  ULONG v15; // r8d
  PULONG v16; // rdx
  unsigned __int16 v17; // r15
  unsigned int v18; // r11d
  int v19; // r14d
  __int128 *v20; // rbx
  unsigned __int16 *v21; // rdx
  int v22; // ecx
  int v23; // ecx
  DWORD v24; // ebx
  int v25; // eax
  size_t v26; // rax
  ULONG v27; // r11d
  __int64 v28; // r8
  unsigned __int64 v29; // rdx
  __int64 v30; // rcx
  wchar_t *v31; // rax
  wchar_t *v32; // rdx
  __int64 v33; // r15
  unsigned int v34; // ebx
  wchar_t *v35; // r10
  __int64 v36; // rcx
  PULONG v37; // rax
  wchar_t *v39; // rax
  wchar_t *v40; // r13
  __int64 v41; // rcx
  LCID v42; // ecx
  wchar_t *Buffer; // r12
  size_t v44; // r15
  __int64 v45; // r8
  __int64 v46; // rdx
  __int64 v47; // rax
  ULONG v48; // ebx
  __int64 v49; // rsi
  ULONG v50; // ebx
  int v51; // edx
  wchar_t *i; // rbx
  __int64 v53; // rax
  __int64 v54; // rbx
  char *Heap; // rax
  int v56; // eax
  __int64 v57; // rcx
  __int64 v58; // rbx
  NTSTATUS v59; // eax
  void *v60; // rcx
  NTSTATUS v61; // eax
  char *v62; // rax
  __int64 *v63; // r15
  PULONG v64; // rax
  __int64 v65; // rax
  wchar_t *v66; // rcx
  size_t v67; // rax
  char v68; // [rsp+50h] [rbp-B0h] BYREF
  char v69; // [rsp+51h] [rbp-AFh]
  DWORD Lcid; // [rsp+54h] [rbp-ACh] BYREF
  PVOID v71; // [rsp+58h] [rbp-A8h] BYREF
  char v72; // [rsp+60h] [rbp-A0h]
  __int16 v73; // [rsp+62h] [rbp-9Eh]
  ULONG v74; // [rsp+64h] [rbp-9Ch]
  ULONG v75; // [rsp+68h] [rbp-98h]
  wchar_t *String1; // [rsp+70h] [rbp-90h]
  void *v77; // [rsp+78h] [rbp-88h] BYREF
  _UNICODE_STRING v78; // [rsp+80h] [rbp-80h] BYREF
  ULONG v79; // [rsp+90h] [rbp-70h]
  unsigned int v80; // [rsp+94h] [rbp-6Ch]
  char *v81; // [rsp+98h] [rbp-68h]
  __int64 v82; // [rsp+A0h] [rbp-60h]
  void *PreferredLanguages; // [rsp+A8h] [rbp-58h]
  __int64 LanguageList; // [rsp+B0h] [rbp-50h] BYREF
  ULONG v85; // [rsp+B8h] [rbp-48h]
  ULONG v86; // [rsp+BCh] [rbp-44h]
  __int64 v87; // [rsp+C0h] [rbp-40h]
  PULONG v88; // [rsp+C8h] [rbp-38h]
  PVOID BaseAddress; // [rsp+D0h] [rbp-30h]
  PULONG v90; // [rsp+D8h] [rbp-28h]
  __int128 v91; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v92; // [rsp+F0h] [rbp-10h]
  int v93; // [rsp+F8h] [rbp-8h]
  wchar_t String[4]; // [rsp+100h] [rbp+0h] BYREF
  __int16 v95; // [rsp+108h] [rbp+8h]

  v88 = ReturnLength;
  v90 = NumberOfLanguages;
  v4 = Flags & 0x30;
  v86 = 0;
  v80 = 0;
  v5 = Languages;
  String1 = Languages;
  v6 = 0LL;
  PreferredLanguages = 0LL;
  v7 = Flags;
  v82 = 0LL;
  v8 = 0LL;
  BaseAddress = 0LL;
  v9 = 0LL;
  v69 = 0;
  v72 = 0;
  v87 = 0LL;
  v85 = v4;
  if ( ReturnLength )
    v86 = *ReturnLength;
  if ( (Flags & 0xFFFEFC83) != 0 )
    goto LABEL_187;
  if ( (Flags & 0xC) != 0 )
  {
    if ( (Flags & 0xC) == 0xC )
    {
      PreferredUILanguages = -1073741811;
      goto LABEL_117;
    }
  }
  else
  {
    v7 = Flags | 8;
  }
  if ( (v7 & 0x10000) != 0 )
  {
    if ( (v7 & 0x40) != 0 )
    {
      PreferredUILanguages = -1073741811;
      goto LABEL_117;
    }
    if ( (v7 & 0x30) == 0 )
    {
      v7 |= 0x30u;
      goto LABEL_7;
    }
LABEL_187:
    PreferredUILanguages = -1073741811;
    goto LABEL_117;
  }
LABEL_7:
  if ( (v7 & 0x40) != 0 && (v7 & 0x30) != 0 )
  {
    PreferredUILanguages = -1073741811;
    goto LABEL_117;
  }
  if ( (v7 & 0x70) == 0 )
    v7 |= 0x20u;
  if ( !ReturnLength )
  {
    PreferredUILanguages = -1073741811;
    goto LABEL_117;
  }
  if ( *ReturnLength && !Languages )
    return -1073741811;
  if ( (v7 & 0x300) == 0x300 )
  {
    PreferredUILanguages = -1073741811;
    goto LABEL_117;
  }
  v6 = (unsigned int *)g_RegInfo;
  if ( !g_RegInfo )
  {
    RtlpInitMuiCriticalSection();
    RtlEnterCriticalSection(&RegistryInfoCritSect);
    RegistryInfo = 0;
    if ( !g_RegInfo )
      RegistryInfo = RtlpMuiRegCreateAndLoadRegistryInfo(&g_RegInfo);
    RtlLeaveCriticalSection(&RegistryInfoCritSect);
    if ( RegistryInfo < 0 )
      return RegistryInfo;
    v6 = (unsigned int *)g_RegInfo;
    v5 = String1;
  }
  v71 = v6;
  if ( v4 == 48 && v6[3] != MEMORY[0x7FFE03A4] && (int)RtlUpdateProcessRegistryInfo() >= 0 )
  {
    v71 = 0LL;
    PreferredUILanguages = RtlpCreateProcessRegistryInfo(&v71);
    if ( PreferredUILanguages < 0 )
      goto LABEL_116;
    v6 = (unsigned int *)v71;
  }
  if ( (v7 & 0x10000) != 0 )
  {
    v68 = 0;
    PreferredLanguages = 0LL;
    if ( v6[3] == MEMORY[0x7FFE03A4] )
      goto LABEL_25;
    v71 = 0LL;
    PreferredUILanguages = RtlpMuiRegCreateAndLoadRegistryInfo(&v71);
    if ( PreferredUILanguages >= 0 )
    {
      v6 = (unsigned int *)v71;
      v63 = (__int64 *)((char *)v71 + 56);
      v72 = 1;
      if ( !*((_QWORD *)v71 + 7) )
      {
        PreferredUILanguages = RtlpMuiRegLoadPreferredUILanguages(
                                 (_DWORD)v71,
                                 v51,
                                 0,
                                 3,
                                 (__int64)&v68,
                                 (__int64)v71 + 56);
        if ( PreferredUILanguages < 0 && !v68 )
          goto LABEL_117;
      }
      if ( !*((_QWORD *)v6 + 8) )
      {
        v68 = 0;
        PreferredUILanguages = RtlpMuiRegLoadPreferredUILanguages(
                                 (_DWORD)v6,
                                 v51,
                                 1,
                                 3,
                                 (__int64)&v68,
                                 (__int64)(v6 + 16));
        if ( PreferredUILanguages < 0 && !v68 )
          goto LABEL_232;
      }
      v54 = *((_QWORD *)v6 + 8);
      v8 = *v63;
      v82 = v54;
LABEL_137:
      if ( !v6 )
      {
        PreferredUILanguages = -1073741811;
        goto LABEL_232;
      }
      Heap = (char *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0xD6uLL);
      v6 = (unsigned int *)v71;
      v81 = Heap;
      MergedPrefLanguages = Heap;
      if ( Heap )
      {
        *(_DWORD *)Heap = 214;
        *((_DWORD *)Heap + 1) = 1638400;
        Heap[8] = 0;
        *((_QWORD *)Heap + 3) = Heap + 64;
        *((_DWORD *)Heap + 10) = 0;
        *((_QWORD *)Heap + 2) = v6;
      }
      else
      {
        MergedPrefLanguages = 0LL;
        v81 = 0LL;
      }
      v77 = MergedPrefLanguages;
      if ( !MergedPrefLanguages )
      {
        PreferredUILanguages = -1073741801;
        goto LABEL_83;
      }
      if ( (v7 & 0x40) != 0 )
      {
        v61 = LdrpMergeLangFallbackLists(v7, v6, &v77, PreferredLanguages, 0LL, v54, v8, v87, 0);
        MergedPrefLanguages = v77;
        PreferredUILanguages = v61;
        v81 = (char *)v77;
      }
      else
      {
        LanguageList = RtlpMuiRegCreateLanguageList(25LL, 0LL, v6);
        v56 = LdrpMergeLangFallbackLists(v7, v6, &LanguageList, PreferredLanguages, v9, v54, v8, v87, 0);
        v58 = LanguageList;
        PreferredUILanguages = v56;
        if ( v56 >= 0 )
        {
          LOBYTE(v57) = v85 == 48 || (v7 & 0x10) != 0;
          v59 = RtlpAddNeutralsToMergedList(v57, v6, LanguageList, &v77);
          MergedPrefLanguages = v77;
          PreferredUILanguages = v59;
          v81 = (char *)v77;
        }
        RtlpMuiRegFreeLanguageList(v58);
      }
      if ( PreferredUILanguages < 0 )
        goto LABEL_149;
      goto LABEL_36;
    }
LABEL_116:
    v6 = (unsigned int *)v71;
    goto LABEL_117;
  }
  if ( NtCurrentTeb()->PreferredLanguages )
    PreferredLanguages = NtCurrentTeb()->PreferredLanguages;
  v6 = (unsigned int *)v71;
LABEL_25:
  if ( (v7 & 0x40) == 0 )
  {
    PreferredUILanguages = InitializeTEBUserLangList(0, (__int64)v6);
    if ( PreferredUILanguages < 0 )
      goto LABEL_117;
    v82 = *(_QWORD *)NtCurrentTeb()->UserPrefLanguages;
    v6 = (unsigned int *)v71;
    v87 = *((_QWORD *)NtCurrentTeb()->UserPrefLanguages + 1)
        ? *((_QWORD *)NtCurrentTeb()->UserPrefLanguages + 1)
        : *((_QWORD *)v71 + 6);
    PreferredUILanguages = RtlpSetProcUserMachineLangList((__int64)v71, 0);
    if ( PreferredUILanguages < 0 )
      goto LABEL_117;
    v8 = *((_QWORD *)v6 + 7);
  }
  if ( !NtCurrentTeb()->MergedPrefLanguages )
  {
    v69 = 0;
    if ( v4 == 48 && !PreferredLanguages )
    {
      v6 = (unsigned int *)v71;
      v62 = (char *)*((_QWORD *)v71 + 12);
      if ( v62 )
      {
        v54 = v82;
        if ( v82 && (*(_BYTE *)(v82 + 40) & 0x40) != 0 && v62[40] >= 0 )
        {
          v6 = (unsigned int *)v71;
          v77 = (void *)*((_QWORD *)v71 + 12);
          MergedPrefLanguages = v62;
          v81 = v62;
          NtCurrentTeb()->MuiGeneration = *((_DWORD *)v71 + 4);
          goto LABEL_36;
        }
        goto LABEL_135;
      }
LABEL_134:
      v54 = v82;
LABEL_135:
      if ( (v7 & 0x10000) == 0 )
      {
        RtlpInitMuiCriticalSection();
        RtlEnterCriticalSection(&RegistryInfoCritSect);
        v9 = (void *)RtlpMuiRegDupLanguageList(*((_QWORD *)v6 + 9));
        BaseAddress = v9;
        v80 = v6[4];
        RtlLeaveCriticalSection(&RegistryInfoCritSect);
      }
      goto LABEL_137;
    }
LABEL_133:
    v6 = (unsigned int *)v71;
    goto LABEL_134;
  }
  v69 = 1;
  if ( v4 != 48 )
    goto LABEL_133;
  if ( *((char *)NtCurrentTeb()->MergedPrefLanguages + 40) < 0 || NtCurrentTeb()->MuiGeneration != *((_DWORD *)v71 + 4) )
  {
    v69 = 0;
    RtlpMuiRegFreeLanguageList(NtCurrentTeb()->MergedPrefLanguages);
    NtCurrentTeb()->MergedPrefLanguages = 0LL;
    goto LABEL_133;
  }
  v6 = (unsigned int *)v71;
  MergedPrefLanguages = NtCurrentTeb()->MergedPrefLanguages;
  v81 = (char *)MergedPrefLanguages;
  v77 = MergedPrefLanguages;
LABEL_36:
  v13 = 0;
  v75 = 0;
  v14 = 0;
  v68 = 0;
  PreferredUILanguages = 0;
  if ( !MergedPrefLanguages )
  {
    v64 = v88;
    if ( String1 )
    {
      if ( *v88 < 2 )
        PreferredUILanguages = -1073741789;
      else
        *(_DWORD *)String1 = 0;
    }
    *v64 = 2;
    goto LABEL_78;
  }
  v15 = 0;
  v16 = v88;
  v17 = 0;
  v79 = 0;
  v73 = 0;
  v18 = *v88;
  v74 = *v88;
  if ( !*((_WORD *)MergedPrefLanguages + 2) )
    goto LABEL_72;
  v19 = v7 & 4;
  do
  {
    v91 = 0LL;
    v20 = 0LL;
    v21 = (unsigned __int16 *)(*((_QWORD *)MergedPrefLanguages + 3) + 6LL * v17);
    v92 = 0LL;
    v93 = 0;
    if ( !v21 )
      goto LABEL_70;
    v22 = *v21;
    if ( v22 == 1 )
    {
      WORD2(v91) = v21[2];
LABEL_44:
      v20 = &v91;
      goto LABEL_45;
    }
    v23 = v22 - 2;
    if ( !v23 )
    {
      v20 = (__int128 *)(*(_QWORD *)(*((_QWORD *)v6 + 3) + 16LL) + 28LL * (__int16)v21[2]);
      goto LABEL_45;
    }
    if ( v23 == 1 )
    {
      WORD3(v91) = v21[2];
      goto LABEL_44;
    }
LABEL_45:
    Lcid = 0;
    v78 = 0LL;
    if ( !v19 )
    {
      if ( !v20 )
      {
LABEL_162:
        v25 = -1073741811;
        goto LABEL_67;
      }
      v39 = (wchar_t *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0xAAuLL);
      v40 = v39;
      if ( !v39 )
      {
        v6 = (unsigned int *)v71;
        Lcid = -1073741801;
        v25 = -1073741801;
        goto LABEL_67;
      }
      v41 = *((__int16 *)v20 + 3);
      if ( (__int16)v41 > 0 )
      {
        v45 = *((_QWORD *)v71 + 4);
        v46 = *(__int16 *)(*(_QWORD *)(v45 + 16) + 2 * v41);
        v47 = *(_QWORD *)(v45 + 24);
        Buffer = (wchar_t *)(v47 + 2 * v46);
        if ( Buffer )
        {
          v44 = 2 * wcslen((const wchar_t *)(v47 + 2 * v46));
          if ( v44 >= 0xFFFE )
            LOWORD(v44) = -4;
          v78.MaximumLength = v44 + 2;
LABEL_102:
          v48 = v75;
          if ( v75 && v75 <= v74 && (unsigned __int8)RtlpLangNameInMultiSzString_Size(String1, Buffer) )
            goto LABEL_113;
          v49 = v48 + ((unsigned __int16)v44 >> 1);
          v50 = v49 + 1;
          if ( String1 && v75 < v50 )
          {
            if ( v50 < v74 )
            {
              memmove(&String1[v75], Buffer, (unsigned __int16)v44);
              String1[v49] = 0;
              goto LABEL_112;
            }
          }
          else if ( v50 < v74 || !String1 )
          {
            goto LABEL_112;
          }
          Lcid = -1073741789;
LABEL_112:
          v75 = v49 + 1;
LABEL_113:
          v17 = v73;
          MergedPrefLanguages = v81;
LABEL_114:
          RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v40);
          v25 = Lcid;
          v6 = (unsigned int *)v71;
          goto LABEL_67;
        }
      }
      else
      {
        v42 = *((unsigned __int16 *)v20 + 2);
        v78.Buffer = v39;
        *(_DWORD *)&v78.Length = 11141120;
        if ( !RtlLCIDToCultureName(v42, &v78) )
        {
          Lcid = -1073741595;
          goto LABEL_114;
        }
        Buffer = v78.Buffer;
      }
      LOWORD(v44) = v78.Length;
      goto LABEL_102;
    }
    *(_QWORD *)String = 0LL;
    v95 = 0;
    if ( !v20 )
      goto LABEL_162;
    if ( *((_WORD *)v20 + 2) )
    {
      v24 = *((unsigned __int16 *)v20 + 2);
      goto LABEL_49;
    }
    v65 = *((__int16 *)v20 + 3);
    if ( (__int16)v65 <= 0 )
    {
      v25 = -1073741595;
LABEL_67:
      if ( v25 >= 0 )
        goto LABEL_68;
      goto LABEL_223;
    }
    v66 = (wchar_t *)(*(_QWORD *)(*((_QWORD *)v6 + 4) + 24LL)
                    + 2LL * *(__int16 *)(*(_QWORD *)(*((_QWORD *)v6 + 4) + 16LL) + 2 * v65));
    v78.Buffer = v66;
    if ( v66 )
    {
      v67 = 2 * wcslen(v66);
      if ( v67 >= 0xFFFE )
        LOWORD(v67) = -4;
      v78.Length = v67;
      v78.MaximumLength = v67 + 2;
    }
    if ( !RtlCultureNameToLCID(&v78, &Lcid) )
      goto LABEL_162;
    v24 = Lcid;
LABEL_49:
    v25 = RtlIntegerToUnicode(v24, 16LL, 4294967292LL, String);
    Lcid = v25;
    if ( v25 >= 0 )
    {
      *(_QWORD *)&v78.Length = 0LL;
      v78.Buffer = String;
      v26 = wcslen(String);
      v27 = v74;
      v28 = 2 * v26;
      if ( 2 * v26 >= 0xFFFE )
        v28 = 65532LL;
      LanguageList = v28;
      v78.MaximumLength = v28 + 2;
      if ( v24 != 4096 )
      {
        if ( v14 )
        {
          if ( v14 <= v74 )
          {
            *(_QWORD *)&v78.Length = 0LL;
            v29 = 0LL;
            if ( String1 )
            {
              v30 = v14;
              if ( v14 > 0x7FFFFFFFuLL )
              {
                v32 = String1;
                v33 = v14 + ((unsigned __int16)v28 >> 1);
                v34 = v33 + 1;
LABEL_62:
                if ( v14 < v34 )
                {
                  if ( v34 < v27 )
                  {
                    memmove(&v32[v14], String, (unsigned __int16)v28);
                    String1[v33] = 0;
LABEL_65:
                    v25 = Lcid;
LABEL_66:
                    v17 = v73;
                    v75 = v34;
                    goto LABEL_67;
                  }
LABEL_175:
                  v25 = -1073741789;
                  goto LABEL_66;
                }
LABEL_173:
                if ( v34 < v27 || !v32 )
                  goto LABEL_65;
                goto LABEL_175;
              }
              v31 = String1;
              do
              {
                if ( !*v31 )
                  break;
                ++v31;
                --v30;
              }
              while ( v30 );
              if ( v30 )
              {
                for ( i = String1; v29 < v14 && i && *i; i += v53 + 1 )
                {
                  if ( !wcsicmp(i, String) )
                  {
                    v17 = v73;
                    v25 = Lcid;
                    goto LABEL_67;
                  }
                  v53 = -1LL;
                  do
                    ++v53;
                  while ( i[v53] );
                  v29 = v53 + *(_QWORD *)&v78.Length + 1LL;
                  *(_QWORD *)&v78.Length = v29;
                }
                v27 = v74;
                LOWORD(v28) = LanguageList;
              }
            }
          }
        }
      }
      v32 = String1;
      v33 = v14 + ((unsigned __int16)v28 >> 1);
      v34 = v33 + 1;
      if ( !String1 )
        goto LABEL_173;
      goto LABEL_62;
    }
LABEL_223:
    if ( v25 != -1073741789 )
      goto LABEL_69;
    v68 = 1;
LABEL_68:
    ++v79;
LABEL_69:
    v14 = v75;
LABEL_70:
    v73 = ++v17;
  }
  while ( v17 < *((_WORD *)MergedPrefLanguages + 2) );
  MergedPrefLanguages = v77;
  v16 = v88;
  v15 = v79;
  v13 = v68;
  v18 = v74;
LABEL_72:
  v35 = String1;
  if ( String1 )
  {
    if ( v14 >= v18 )
      v13 = 1;
    else
      String1[v14] = 0;
  }
  v36 = v14 + 1;
  if ( !v15 )
  {
    if ( v35 )
    {
      if ( (unsigned int)v36 >= v18 )
        v13 = 1;
      else
        v35[v36] = 0;
    }
    LODWORD(v36) = v14 + 2;
  }
  v37 = v90;
  *v16 = v36;
  PreferredUILanguages = v13 != 0 ? 0xC0000023 : 0;
  if ( v37 )
    *v37 = v15;
LABEL_78:
  if ( (int)(PreferredUILanguages + 0x80000000) >= 0 && PreferredUILanguages != -1073741789 || v85 != 48 )
  {
LABEL_149:
    if ( !MergedPrefLanguages )
      goto LABEL_83;
    v60 = v77;
    if ( v77 == NtCurrentTeb()->MergedPrefLanguages )
    {
      v60 = v77;
      NtCurrentTeb()->MergedPrefLanguages = 0LL;
    }
    RtlpMuiRegFreeLanguageList(v60);
    goto LABEL_157;
  }
  if ( !*((_WORD *)MergedPrefLanguages + 22) )
    RtlpComputeLangListCheckSum((__int64)MergedPrefLanguages);
  if ( !v69 )
  {
    if ( (*((_BYTE *)MergedPrefLanguages + 40) & 0x40) != 0 )
    {
      NtCurrentTeb()->MergedPrefLanguages = v77;
      v6 = (unsigned int *)v71;
      NtCurrentTeb()->MuiGeneration = v80;
      goto LABEL_83;
    }
    RtlpMUIRegPatchLicenseInfortmation(MergedPrefLanguages);
    if ( !PreferredLanguages && (*(_BYTE *)(v82 + 40) & 0x40) != 0 && v87 == *((_QWORD *)v6 + 6) )
      RtlpSetProcMergedLangList(v6, MergedPrefLanguages);
    NtCurrentTeb()->MergedPrefLanguages = v77;
    NtCurrentTeb()->MuiGeneration = v80;
LABEL_157:
    v6 = (unsigned int *)v71;
  }
LABEL_83:
  if ( PreferredUILanguages >= 0 )
    goto LABEL_84;
LABEL_232:
  v5 = String1;
LABEL_117:
  if ( v5 && v86 )
  {
    if ( v86 == 1 )
      *v5 = 0;
    else
      *(_DWORD *)v5 = 0;
  }
LABEL_84:
  if ( v72 && v6 )
    RtlpMuiFreeLangRegistryInfo(v6);
  if ( BaseAddress )
  {
    if ( (*((_BYTE *)BaseAddress + 40) & 0x40) == 0 )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
  }
  return PreferredUILanguages;
}
