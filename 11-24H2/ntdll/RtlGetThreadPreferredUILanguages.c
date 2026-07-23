/*
 * XREFs of RtlGetThreadPreferredUILanguages @ 0x1800173A0
 * Callers:
 *     RtlGetFileMUIPath @ 0x1800016B0 (RtlGetFileMUIPath.c)
 *     LdrpSetThreadPreferredLangList @ 0x180011370 (LdrpSetThreadPreferredLangList.c)
 *     RtlSetThreadPreferredUILanguages @ 0x180011A20 (RtlSetThreadPreferredUILanguages.c)
 *     RtlSetThreadPreferredUILanguages2 @ 0x1800C99F0 (RtlSetThreadPreferredUILanguages2.c)
 * Callees:
 *     RtlpCreateProcessRegistryInfo @ 0x180011550 (RtlpCreateProcessRegistryInfo.c)
 *     RtlpInitMuiCriticalSection @ 0x1800115D4 (RtlpInitMuiCriticalSection.c)
 *     RtlpMuiRegCreateAndLoadRegistryInfo @ 0x180011648 (RtlpMuiRegCreateAndLoadRegistryInfo.c)
 *     RtlpAddNeutralsToMergedList @ 0x180012510 (RtlpAddNeutralsToMergedList.c)
 *     RtlCultureNameToLCID @ 0x1800141A0 (RtlCultureNameToLCID.c)
 *     LdrpMergeLangFallbackLists @ 0x180015940 (LdrpMergeLangFallbackLists.c)
 *     RtlpMuiRegFreeLanguageList @ 0x180016160 (RtlpMuiRegFreeLanguageList.c)
 *     RtlLCIDToCultureName @ 0x180016340 (RtlLCIDToCultureName.c)
 *     RtlpComputeLangListCheckSum @ 0x1800166C0 (RtlpComputeLangListCheckSum.c)
 *     RtlpSetProcUserMachineLangList @ 0x180016B90 (RtlpSetProcUserMachineLangList.c)
 *     InitializeTEBUserLangList @ 0x180016D00 (InitializeTEBUserLangList.c)
 *     RtlIntegerToUnicode @ 0x180019360 (RtlIntegerToUnicode.c)
 *     RtlpLangNameInMultiSzString_Size @ 0x1800196B0 (RtlpLangNameInMultiSzString_Size.c)
 *     RtlAllocateHeap @ 0x18003DC60 (RtlAllocateHeap.c)
 *     RtlEnterCriticalSection @ 0x1800412F0 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x1800413F0 (RtlLeaveCriticalSection.c)
 *     RtlFreeHeap @ 0x1800533F0 (RtlFreeHeap.c)
 *     RtlpMuiRegLoadPreferredUILanguages @ 0x1800C8B80 (RtlpMuiRegLoadPreferredUILanguages.c)
 *     RtlpMuiRegDupLanguageList @ 0x1800C9DCC (RtlpMuiRegDupLanguageList.c)
 *     RtlpMuiRegCreateLanguageList @ 0x1800CA3B0 (RtlpMuiRegCreateLanguageList.c)
 *     RtlpMUIRegPatchLicenseInfortmation @ 0x1800CAB90 (RtlpMUIRegPatchLicenseInfortmation.c)
 *     RtlpMuiFreeLangRegistryInfo @ 0x1800CB7D0 (RtlpMuiFreeLangRegistryInfo.c)
 *     RtlUpdateProcessRegistryInfo @ 0x1800CC36C (RtlUpdateProcessRegistryInfo.c)
 *     RtlpSetProcMergedLangList @ 0x1801061B4 (RtlpSetProcMergedLangList.c)
 *     wcslen @ 0x180125A00 (wcslen.c)
 *     __security_check_cookie @ 0x180163D80 (__security_check_cookie.c)
 *     memmove @ 0x1801657C0 (memmove.c)
 */

NTSTATUS __cdecl RtlGetThreadPreferredUILanguages(
        ULONG Flags,
        PULONG NumberOfLanguages,
        PZZWSTR Languages,
        PULONG ReturnLength)
{
  ULONG v4; // r13d
  __int64 v5; // rdi
  unsigned int *v6; // rbx
  ULONG v8; // r14d
  __int64 v9; // r15
  NTSTATUS RegistryInfo; // ebx
  NTSTATUS PreferredUILanguages; // esi
  _QWORD *UserPrefLanguages; // rcx
  void *MergedPrefLanguages; // rdi
  char v14; // r9
  unsigned int v15; // r13d
  ULONG v16; // ecx
  unsigned __int16 v17; // r12
  int v18; // r14d
  __int128 *v19; // r15
  unsigned __int16 *v20; // rdx
  int v21; // ecx
  DWORD v22; // r15d
  int v23; // eax
  size_t v24; // rdx
  unsigned int v25; // r15d
  wchar_t *v26; // r8
  __int64 v27; // r13
  int v29; // ecx
  wchar_t *Heap; // rax
  wchar_t *v31; // rbx
  __int64 v32; // rcx
  LCID v33; // ecx
  void *Buffer; // rax
  size_t Length; // rdx
  unsigned int v36; // r15d
  int v37; // edx
  char *v38; // rax
  int v39; // eax
  _BYTE *v40; // r15
  char v41; // cl
  NTSTATUS v42; // eax
  _BYTE *v43; // rcx
  NTSTATUS v44; // eax
  char *v45; // rax
  __int64 *v46; // r15
  __int64 v47; // rax
  wchar_t *v48; // rcx
  size_t v49; // rax
  char v50; // [rsp+50h] [rbp-B0h] BYREF
  char v51; // [rsp+51h] [rbp-AFh]
  DWORD Lcid; // [rsp+54h] [rbp-ACh] BYREF
  PVOID v53; // [rsp+58h] [rbp-A8h] BYREF
  char v54; // [rsp+60h] [rbp-A0h]
  unsigned int v55; // [rsp+64h] [rbp-9Ch]
  void *v56; // [rsp+68h] [rbp-98h] BYREF
  wchar_t *String1; // [rsp+70h] [rbp-90h]
  void *Src; // [rsp+78h] [rbp-88h] BYREF
  _UNICODE_STRING v59; // [rsp+80h] [rbp-80h] BYREF
  ULONG v60; // [rsp+90h] [rbp-70h]
  unsigned int v61; // [rsp+94h] [rbp-6Ch]
  size_t v62; // [rsp+98h] [rbp-68h]
  void *PreferredLanguages; // [rsp+A0h] [rbp-60h]
  ULONG v64; // [rsp+A8h] [rbp-58h]
  __int64 v65; // [rsp+B0h] [rbp-50h]
  __int64 v66; // [rsp+B8h] [rbp-48h]
  ULONG v67; // [rsp+C0h] [rbp-40h]
  PVOID BaseAddress; // [rsp+C8h] [rbp-38h]
  PULONG v69; // [rsp+D0h] [rbp-30h]
  PULONG v70; // [rsp+D8h] [rbp-28h]
  __int128 v71; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v72; // [rsp+F0h] [rbp-10h]
  int v73; // [rsp+F8h] [rbp-8h]
  wchar_t String[4]; // [rsp+100h] [rbp+0h] BYREF
  __int16 v75; // [rsp+108h] [rbp+8h]

  String1 = Languages;
  v69 = ReturnLength;
  v70 = NumberOfLanguages;
  v4 = Flags & 0x30;
  v64 = 0;
  v61 = 0;
  v5 = 0LL;
  v51 = 0;
  v6 = 0LL;
  v54 = 0;
  PreferredLanguages = 0LL;
  v8 = Flags;
  v65 = 0LL;
  v9 = 0LL;
  BaseAddress = 0LL;
  v66 = 0LL;
  v67 = v4;
  if ( ReturnLength )
    v64 = *ReturnLength;
  if ( (Flags & 0xFFFEFC83) != 0 )
    goto LABEL_169;
  if ( (Flags & 0xC) != 0 )
  {
    if ( (Flags & 0xC) == 0xC )
    {
      PreferredUILanguages = -1073741811;
      goto LABEL_170;
    }
  }
  else
  {
    v8 = Flags | 8;
  }
  if ( (v8 & 0x10000) != 0 )
  {
    if ( (v8 & 0x40) != 0 )
    {
      PreferredUILanguages = -1073741811;
      goto LABEL_170;
    }
    if ( (v8 & 0x30) == 0 )
    {
      v8 |= 0x30u;
      goto LABEL_7;
    }
LABEL_169:
    PreferredUILanguages = -1073741811;
    goto LABEL_170;
  }
LABEL_7:
  if ( (v8 & 0x40) != 0 && (v8 & 0x30) != 0 )
  {
    PreferredUILanguages = -1073741811;
    goto LABEL_170;
  }
  if ( (v8 & 0x70) == 0 )
    v8 |= 0x20u;
  if ( !ReturnLength )
  {
    PreferredUILanguages = -1073741811;
    goto LABEL_170;
  }
  if ( *ReturnLength && !Languages )
    return -1073741811;
  if ( (v8 & 0x300) == 0x300 )
  {
    PreferredUILanguages = -1073741811;
    goto LABEL_170;
  }
  v6 = (unsigned int *)g_RegInfo;
  if ( g_RegInfo )
  {
LABEL_19:
    v53 = v6;
    if ( v4 == 48 && v6[3] != MEMORY[0x7FFE03A4] && (int)RtlUpdateProcessRegistryInfo() >= 0 )
    {
      v53 = 0LL;
      PreferredUILanguages = RtlpCreateProcessRegistryInfo(&v53);
      if ( PreferredUILanguages < 0 )
        goto LABEL_112;
      v6 = (unsigned int *)v53;
    }
    if ( (v8 & 0x10000) == 0 )
    {
      if ( NtCurrentTeb()->PreferredLanguages )
        PreferredLanguages = NtCurrentTeb()->PreferredLanguages;
      v6 = (unsigned int *)v53;
LABEL_25:
      if ( (v8 & 0x40) == 0 )
      {
        PreferredUILanguages = InitializeTEBUserLangList(0, (__int64)v6);
        if ( PreferredUILanguages < 0 )
          goto LABEL_170;
        v5 = *(_QWORD *)NtCurrentTeb()->UserPrefLanguages;
        UserPrefLanguages = NtCurrentTeb()->UserPrefLanguages;
        v65 = v5;
        v6 = (unsigned int *)v53;
        v66 = UserPrefLanguages[1] ? *((_QWORD *)NtCurrentTeb()->UserPrefLanguages + 1) : *((_QWORD *)v53 + 6);
        PreferredUILanguages = RtlpSetProcUserMachineLangList((__int64)v53, 0);
        if ( PreferredUILanguages < 0 )
          goto LABEL_170;
        v9 = *((_QWORD *)v6 + 7);
      }
      if ( NtCurrentTeb()->MergedPrefLanguages )
      {
        v51 = 1;
        if ( v4 == 48 )
        {
          if ( *((char *)NtCurrentTeb()->MergedPrefLanguages + 40) >= 0 )
          {
            NumberOfLanguages = (PULONG)NtCurrentTeb();
            if ( NumberOfLanguages[1510] == *((_DWORD *)v53 + 4) )
            {
              v6 = (unsigned int *)v53;
              MergedPrefLanguages = NtCurrentTeb()->MergedPrefLanguages;
              v56 = MergedPrefLanguages;
LABEL_36:
              v14 = 0;
              v50 = 0;
              v15 = 0;
              PreferredUILanguages = 0;
              if ( !MergedPrefLanguages )
              {
                if ( String1 )
                {
                  if ( *ReturnLength < 2 )
                    PreferredUILanguages = -1073741789;
                  else
                    *(_DWORD *)String1 = 0;
                }
                *ReturnLength = 2;
                goto LABEL_70;
              }
              v16 = 0;
              NumberOfLanguages = (PULONG)*ReturnLength;
              v17 = 0;
              v60 = 0;
              v55 = (unsigned int)NumberOfLanguages;
              if ( !*((_WORD *)MergedPrefLanguages + 2) )
                goto LABEL_64;
              v18 = v8 & 4;
              while ( 1 )
              {
                v71 = 0LL;
                v19 = 0LL;
                v20 = (unsigned __int16 *)(*((_QWORD *)MergedPrefLanguages + 3) + 6LL * v17);
                v72 = 0LL;
                v73 = 0;
                if ( v20 )
                  break;
LABEL_62:
                if ( ++v17 >= *((_WORD *)MergedPrefLanguages + 2) )
                {
                  MergedPrefLanguages = v56;
                  v16 = v60;
                  NumberOfLanguages = (PULONG)v55;
                  v14 = v50;
LABEL_64:
                  v26 = String1;
                  if ( String1 )
                  {
                    if ( v15 >= (unsigned int)NumberOfLanguages )
                      v14 = 1;
                    else
                      String1[v15] = 0;
                  }
                  v27 = v15 + 1;
                  if ( !v16 )
                  {
                    if ( v26 )
                    {
                      if ( (unsigned int)v27 >= (unsigned int)NumberOfLanguages )
                        v14 = 1;
                      else
                        v26[v27] = 0;
                    }
                    LODWORD(v27) = v27 + 1;
                  }
                  PreferredUILanguages = v14 != 0 ? 0xC0000023 : 0;
                  *v69 = v27;
                  if ( v70 )
                    *v70 = v16;
LABEL_70:
                  if ( ((int)(PreferredUILanguages + 0x80000000) < 0 || PreferredUILanguages == -1073741789)
                    && v67 == 48 )
                  {
                    if ( !*((_WORD *)MergedPrefLanguages + 22) )
                      RtlpComputeLangListCheckSum((__int64)MergedPrefLanguages);
                    if ( v51 )
                    {
LABEL_75:
                      if ( PreferredUILanguages >= 0 )
                        goto LABEL_76;
                      goto LABEL_170;
                    }
                    if ( (*((_BYTE *)MergedPrefLanguages + 40) & 0x40) != 0 )
                    {
                      NtCurrentTeb()->MergedPrefLanguages = v56;
                      v6 = (unsigned int *)v53;
                      NtCurrentTeb()->MuiGeneration = v61;
                      goto LABEL_75;
                    }
                    RtlpMUIRegPatchLicenseInfortmation(MergedPrefLanguages, NumberOfLanguages);
                    if ( !PreferredLanguages && (*(_BYTE *)(v65 + 40) & 0x40) != 0 && v66 == *((_QWORD *)v6 + 6) )
                      RtlpSetProcMergedLangList(v6, MergedPrefLanguages);
                    NtCurrentTeb()->MergedPrefLanguages = v56;
                    NtCurrentTeb()->MuiGeneration = v61;
LABEL_141:
                    v6 = (unsigned int *)v53;
                    goto LABEL_75;
                  }
LABEL_133:
                  if ( !MergedPrefLanguages )
                    goto LABEL_75;
                  v43 = v56;
                  if ( v56 == NtCurrentTeb()->MergedPrefLanguages )
                  {
                    v43 = v56;
                    NtCurrentTeb()->MergedPrefLanguages = 0LL;
                  }
                  RtlpMuiRegFreeLanguageList(v43);
                  goto LABEL_141;
                }
              }
              v21 = *v20;
              if ( v21 == 1 )
              {
                WORD2(v71) = v20[2];
LABEL_42:
                v19 = &v71;
                goto LABEL_43;
              }
              v29 = v21 - 2;
              if ( v29 )
              {
                if ( v29 == 1 )
                {
                  WORD3(v71) = v20[2];
                  goto LABEL_42;
                }
              }
              else
              {
                v19 = (__int128 *)(*(_QWORD *)(*((_QWORD *)v6 + 3) + 16LL) + 28LL * (__int16)v20[2]);
              }
LABEL_43:
              Lcid = 0;
              v59 = 0LL;
              if ( v18 )
              {
                *(_QWORD *)String = 0LL;
                v75 = 0;
                if ( v19 )
                {
                  if ( *((_WORD *)v19 + 2) )
                  {
                    v22 = *((unsigned __int16 *)v19 + 2);
LABEL_47:
                    v23 = RtlIntegerToUnicode(v22, 16LL, 4294967292LL, String);
                    Lcid = v23;
                    if ( v23 < 0 )
                      goto LABEL_209;
                    *(_QWORD *)&v59.Length = 0LL;
                    v59.Buffer = String;
                    v24 = 2 * wcslen(String);
                    if ( v24 >= 0xFFFE )
                      v24 = 65532LL;
                    Src = (void *)v24;
                    v59.MaximumLength = v24 + 2;
                    if ( v22 == 4096 || !v15 || v15 > v55 )
                    {
LABEL_55:
                      LODWORD(v62) = v15 + ((unsigned __int16)v24 >> 1);
                      v25 = v62 + 1;
                      if ( String1 && v15 < v25 )
                      {
                        if ( v25 < v55 )
                        {
                          memmove(&String1[v15], String, (unsigned __int16)v24);
                          String1[(unsigned int)v62] = 0;
LABEL_59:
                          v23 = Lcid;
                          v15 = v25;
                          goto LABEL_60;
                        }
                      }
                      else if ( v25 < v55 || !String1 )
                      {
                        goto LABEL_59;
                      }
                      Lcid = -1073741789;
                      goto LABEL_59;
                    }
                    if ( !(unsigned __int8)RtlpLangNameInMultiSzString_Size(String1, String) )
                    {
                      LOWORD(v24) = (_WORD)Src;
                      goto LABEL_55;
                    }
                    goto LABEL_109;
                  }
                  v47 = *((__int16 *)v19 + 3);
                  if ( (__int16)v47 > 0 )
                  {
                    v48 = (wchar_t *)(*(_QWORD *)(*((_QWORD *)v6 + 4) + 24LL)
                                    + 2LL * *(__int16 *)(*(_QWORD *)(*((_QWORD *)v6 + 4) + 16LL) + 2 * v47));
                    v59.Buffer = v48;
                    if ( v48 )
                    {
                      v49 = 2 * wcslen(v48);
                      if ( v49 >= 0xFFFE )
                        LOWORD(v49) = -4;
                      v59.Length = v49;
                      v59.MaximumLength = v49 + 2;
                    }
                    if ( RtlCultureNameToLCID(&v59, &Lcid) )
                    {
                      v22 = Lcid;
                      goto LABEL_47;
                    }
                    goto LABEL_145;
                  }
                  v23 = -1073741595;
LABEL_60:
                  if ( v23 >= 0 )
                  {
LABEL_61:
                    ++v60;
                    goto LABEL_62;
                  }
LABEL_209:
                  if ( v23 != -1073741789 )
                    goto LABEL_62;
                  v50 = 1;
                  goto LABEL_61;
                }
LABEL_145:
                v23 = -1073741811;
                goto LABEL_60;
              }
              if ( !v19 )
                goto LABEL_145;
              Heap = (wchar_t *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0xAAuLL);
              v31 = Heap;
              if ( !Heap )
              {
                v6 = (unsigned int *)v53;
                Lcid = -1073741801;
                v23 = -1073741801;
                goto LABEL_60;
              }
              v32 = *((__int16 *)v19 + 3);
              if ( (__int16)v32 > 0 )
              {
                Buffer = (void *)(*(_QWORD *)(*((_QWORD *)v53 + 4) + 24LL)
                                + 2LL * *(__int16 *)(*(_QWORD *)(*((_QWORD *)v53 + 4) + 16LL) + 2 * v32));
                Src = Buffer;
                if ( Buffer )
                {
                  Length = 2 * wcslen((const wchar_t *)Buffer);
                  if ( Length >= 0xFFFE )
                    Length = 65532LL;
                  Buffer = Src;
                  v59.MaximumLength = Length + 2;
LABEL_96:
                  v62 = Length;
                  if ( v15 && v15 <= v55 )
                  {
                    if ( (unsigned __int8)RtlpLangNameInMultiSzString_Size(String1, (wchar_t *)Buffer) )
                    {
LABEL_108:
                      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v31);
                      v6 = (unsigned int *)v53;
LABEL_109:
                      v23 = Lcid;
                      goto LABEL_60;
                    }
                    LOWORD(Length) = v62;
                  }
                  LODWORD(v62) = v15 + ((unsigned __int16)Length >> 1);
                  v36 = v62 + 1;
                  if ( String1 && v15 < v36 )
                  {
                    if ( v36 < v55 )
                    {
                      memmove(&String1[v15], Src, (unsigned __int16)Length);
                      String1[(unsigned int)v62] = 0;
                      goto LABEL_107;
                    }
                  }
                  else if ( v36 < v55 || !String1 )
                  {
                    goto LABEL_107;
                  }
                  Lcid = -1073741789;
LABEL_107:
                  v15 = v36;
                  goto LABEL_108;
                }
              }
              else
              {
                v33 = *((unsigned __int16 *)v19 + 2);
                v59.Buffer = Heap;
                *(_DWORD *)&v59.Length = 11141120;
                if ( !RtlLCIDToCultureName(v33, &v59) )
                {
                  Lcid = -1073741595;
                  goto LABEL_108;
                }
                Buffer = v59.Buffer;
                Src = v59.Buffer;
              }
              Length = v59.Length;
              goto LABEL_96;
            }
          }
          v51 = 0;
          RtlpMuiRegFreeLanguageList((_BYTE *)NtCurrentTeb()->MergedPrefLanguages);
          NtCurrentTeb()->MergedPrefLanguages = 0LL;
        }
      }
      else
      {
        v51 = 0;
        if ( v4 == 48 && !PreferredLanguages )
        {
          v6 = (unsigned int *)v53;
          v45 = (char *)*((_QWORD *)v53 + 12);
          if ( v45 && v5 && (*(_BYTE *)(v5 + 40) & 0x40) != 0 && v45[40] >= 0 )
          {
            v6 = (unsigned int *)v53;
            v56 = (void *)*((_QWORD *)v53 + 12);
            MergedPrefLanguages = v45;
            NtCurrentTeb()->MuiGeneration = *((_DWORD *)v53 + 4);
            goto LABEL_36;
          }
          goto LABEL_119;
        }
      }
      v6 = (unsigned int *)v53;
LABEL_119:
      if ( (v8 & 0x10000) == 0 )
      {
        RtlpInitMuiCriticalSection();
        RtlEnterCriticalSection(&RegistryInfoCritSect);
        BaseAddress = (PVOID)RtlpMuiRegDupLanguageList(*((_QWORD *)v6 + 9));
        v61 = v6[4];
        RtlLeaveCriticalSection(&RegistryInfoCritSect);
      }
LABEL_121:
      if ( v6 )
      {
        v38 = (char *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0xD6uLL);
        v6 = (unsigned int *)v53;
        MergedPrefLanguages = v38;
        if ( v38 )
        {
          *(_DWORD *)v38 = 214;
          *((_DWORD *)v38 + 1) = 1638400;
          v38[8] = 0;
          *((_QWORD *)v38 + 3) = v38 + 64;
          *((_DWORD *)v38 + 10) = 0;
          *((_QWORD *)v38 + 2) = v6;
        }
        else
        {
          MergedPrefLanguages = 0LL;
        }
        v56 = MergedPrefLanguages;
        if ( !MergedPrefLanguages )
        {
          PreferredUILanguages = -1073741801;
          goto LABEL_75;
        }
        if ( (v8 & 0x40) != 0 )
        {
          v44 = LdrpMergeLangFallbackLists(v8, (__int64)v6, &v56, PreferredLanguages, 0LL, v65, v9, v66, 0);
          MergedPrefLanguages = v56;
          PreferredUILanguages = v44;
        }
        else
        {
          Src = (void *)RtlpMuiRegCreateLanguageList(25LL, 0LL, v6);
          v39 = LdrpMergeLangFallbackLists(v8, (__int64)v6, &Src, PreferredLanguages, BaseAddress, v65, v9, v66, 0);
          v40 = Src;
          PreferredUILanguages = v39;
          if ( v39 >= 0 )
          {
            v41 = v4 == 48 || (v8 & 0x10) != 0;
            v42 = RtlpAddNeutralsToMergedList(v41, (__int64)v6, (__int64)Src, &v56);
            MergedPrefLanguages = v56;
            PreferredUILanguages = v42;
          }
          RtlpMuiRegFreeLanguageList(v40);
        }
        if ( PreferredUILanguages < 0 )
          goto LABEL_133;
        goto LABEL_36;
      }
      PreferredUILanguages = -1073741811;
LABEL_170:
      if ( String1 && v64 )
      {
        if ( v64 == 1 )
          *String1 = 0;
        else
          *(_DWORD *)String1 = 0;
      }
LABEL_76:
      if ( v54 && v6 )
        RtlpMuiFreeLangRegistryInfo(v6);
      if ( BaseAddress )
      {
        if ( (*((_BYTE *)BaseAddress + 40) & 0x40) == 0 )
          RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
      }
      return PreferredUILanguages;
    }
    v50 = 0;
    PreferredLanguages = 0LL;
    if ( v6[3] == MEMORY[0x7FFE03A4] )
      goto LABEL_25;
    v53 = 0LL;
    PreferredUILanguages = RtlpMuiRegCreateAndLoadRegistryInfo(&v53);
    if ( PreferredUILanguages >= 0 )
    {
      v6 = (unsigned int *)v53;
      v46 = (__int64 *)((char *)v53 + 56);
      v54 = 1;
      if ( !*((_QWORD *)v53 + 7) )
      {
        PreferredUILanguages = RtlpMuiRegLoadPreferredUILanguages(
                                 (_DWORD)v53,
                                 v37,
                                 0,
                                 3,
                                 (__int64)&v50,
                                 (__int64)v53 + 56);
        if ( PreferredUILanguages < 0 && !v50 )
          goto LABEL_170;
      }
      if ( !*((_QWORD *)v6 + 8) )
      {
        v50 = 0;
        PreferredUILanguages = RtlpMuiRegLoadPreferredUILanguages(
                                 (_DWORD)v6,
                                 v37,
                                 1,
                                 3,
                                 (__int64)&v50,
                                 (__int64)(v6 + 16));
        if ( PreferredUILanguages < 0 && !v50 )
          goto LABEL_170;
      }
      v9 = *v46;
      v65 = *((_QWORD *)v6 + 8);
      goto LABEL_121;
    }
LABEL_112:
    v6 = (unsigned int *)v53;
    goto LABEL_170;
  }
  RtlpInitMuiCriticalSection();
  RtlEnterCriticalSection(&RegistryInfoCritSect);
  RegistryInfo = 0;
  if ( !g_RegInfo )
    RegistryInfo = RtlpMuiRegCreateAndLoadRegistryInfo(&g_RegInfo);
  RtlLeaveCriticalSection(&RegistryInfoCritSect);
  if ( RegistryInfo >= 0 )
  {
    v6 = (unsigned int *)g_RegInfo;
    goto LABEL_19;
  }
  return RegistryInfo;
}
