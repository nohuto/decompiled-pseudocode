/*
 * XREFs of RtlGetThreadPreferredUILanguages @ 0x180037120
 * Callers:
 *     RtlSetThreadPreferredUILanguages @ 0x18007C4E0 (RtlSetThreadPreferredUILanguages.c)
 *     LdrpSetThreadPreferredLangList @ 0x18007CA30 (LdrpSetThreadPreferredLangList.c)
 *     RtlGetFileMUIPath @ 0x18007E370 (RtlGetFileMUIPath.c)
 *     RtlSetThreadPreferredUILanguages2 @ 0x1800EBF30 (RtlSetThreadPreferredUILanguages2.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180011260 (RtlAllocateHeap.c)
 *     RtlEnterCriticalSection @ 0x1800148F0 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x1800149F0 (RtlLeaveCriticalSection.c)
 *     RtlFreeHeap @ 0x1800269F0 (RtlFreeHeap.c)
 *     RtlCultureNameToLCID @ 0x1800330E0 (RtlCultureNameToLCID.c)
 *     RtlpAddNeutralsToMergedList @ 0x180033B90 (RtlpAddNeutralsToMergedList.c)
 *     LdrpMergeLangFallbackLists @ 0x1800356C0 (LdrpMergeLangFallbackLists.c)
 *     RtlpMuiRegFreeLanguageList @ 0x180035EE0 (RtlpMuiRegFreeLanguageList.c)
 *     RtlLCIDToCultureName @ 0x1800360C0 (RtlLCIDToCultureName.c)
 *     RtlpComputeLangListCheckSum @ 0x180036440 (RtlpComputeLangListCheckSum.c)
 *     RtlpSetProcUserMachineLangList @ 0x180036910 (RtlpSetProcUserMachineLangList.c)
 *     InitializeTEBUserLangList @ 0x180036A80 (InitializeTEBUserLangList.c)
 *     RtlIntegerToUnicode @ 0x1800390E0 (RtlIntegerToUnicode.c)
 *     RtlpLangNameInMultiSzString_Size @ 0x180039430 (RtlpLangNameInMultiSzString_Size.c)
 *     RtlpCreateProcessRegistryInfo @ 0x18007CC10 (RtlpCreateProcessRegistryInfo.c)
 *     RtlpInitMuiCriticalSection @ 0x18007CC94 (RtlpInitMuiCriticalSection.c)
 *     RtlpMuiRegCreateAndLoadRegistryInfo @ 0x18007CD08 (RtlpMuiRegCreateAndLoadRegistryInfo.c)
 *     RtlpMuiRegDupLanguageList @ 0x18007D0E0 (RtlpMuiRegDupLanguageList.c)
 *     RtlpMUIRegPatchLicenseInfortmation @ 0x18007D170 (RtlpMUIRegPatchLicenseInfortmation.c)
 *     RtlpMuiRegCreateLanguageList @ 0x18007E2D0 (RtlpMuiRegCreateLanguageList.c)
 *     RtlpMuiRegLoadPreferredUILanguages @ 0x18007EF80 (RtlpMuiRegLoadPreferredUILanguages.c)
 *     RtlUpdateProcessRegistryInfo @ 0x1800EAE54 (RtlUpdateProcessRegistryInfo.c)
 *     RtlpMuiFreeLangRegistryInfo @ 0x1800EAF10 (RtlpMuiFreeLangRegistryInfo.c)
 *     RtlpSetProcMergedLangList @ 0x18010B414 (RtlpSetProcMergedLangList.c)
 *     wcslen @ 0x1801277D0 (wcslen.c)
 *     __security_check_cookie @ 0x1801659C0 (__security_check_cookie.c)
 *     memmove @ 0x180167400 (memmove.c)
 */

__int64 __fastcall RtlGetThreadPreferredUILanguages(
        void *PreferredLanguages,
        unsigned __int64 a2,
        wchar_t *a3,
        unsigned int *a4)
{
  int v4; // r13d
  __int64 v5; // rdi
  __int64 v6; // rbx
  int v8; // r14d
  __int64 v9; // r15
  int RegistryInfo; // ebx
  signed int PreferredUILanguages; // esi
  _QWORD *UserPrefLanguages; // rcx
  void *MergedPrefLanguages; // rdi
  char v14; // r9
  unsigned int v15; // r13d
  int v16; // ecx
  unsigned __int16 v17; // r12
  int v18; // r14d
  __int128 *v19; // r15
  unsigned __int16 *v20; // rdx
  int v21; // ecx
  unsigned int v22; // r15d
  int v23; // eax
  size_t v24; // rdx
  unsigned int v25; // r15d
  wchar_t *v26; // r8
  __int64 v27; // r13
  int v29; // ecx
  wchar_t *Heap; // rax
  unsigned __int64 v31; // rbx
  __int64 v32; // rcx
  unsigned int v33; // ecx
  wchar_t *v34; // rax
  size_t v35; // rdx
  unsigned int v36; // r15d
  __int64 v37; // rax
  int v38; // eax
  void *v39; // r15
  char v40; // cl
  signed int v41; // eax
  unsigned __int64 v42; // rcx
  signed int v43; // eax
  char *v44; // rax
  __int64 *v45; // r15
  __int64 v46; // rax
  wchar_t *v47; // rcx
  size_t v48; // rax
  char v49; // [rsp+50h] [rbp-B0h] BYREF
  char v50; // [rsp+51h] [rbp-AFh]
  int v51; // [rsp+54h] [rbp-ACh] BYREF
  __int64 v52; // [rsp+58h] [rbp-A8h] BYREF
  char v53; // [rsp+60h] [rbp-A0h]
  unsigned int v54; // [rsp+64h] [rbp-9Ch]
  void *v55; // [rsp+68h] [rbp-98h] BYREF
  wchar_t *String1; // [rsp+70h] [rbp-90h]
  void *Src; // [rsp+78h] [rbp-88h] BYREF
  wchar_t *String2[2]; // [rsp+80h] [rbp-80h] BYREF
  int v59; // [rsp+90h] [rbp-70h]
  unsigned int v60; // [rsp+94h] [rbp-6Ch]
  size_t v61; // [rsp+98h] [rbp-68h]
  void *v62; // [rsp+A0h] [rbp-60h]
  unsigned int v63; // [rsp+A8h] [rbp-58h]
  __int64 v64; // [rsp+B0h] [rbp-50h]
  __int64 v65; // [rsp+B8h] [rbp-48h]
  int v66; // [rsp+C0h] [rbp-40h]
  unsigned __int64 v67; // [rsp+C8h] [rbp-38h]
  _DWORD *v68; // [rsp+D0h] [rbp-30h]
  _DWORD *v69; // [rsp+D8h] [rbp-28h]
  __int128 v70; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v71; // [rsp+F0h] [rbp-10h]
  int v72; // [rsp+F8h] [rbp-8h]
  wchar_t String[4]; // [rsp+100h] [rbp+0h] BYREF
  __int16 v74; // [rsp+108h] [rbp+8h]

  String1 = a3;
  v68 = a4;
  v69 = (_DWORD *)a2;
  v4 = (unsigned __int8)PreferredLanguages & 0x30;
  v63 = 0;
  v60 = 0;
  v5 = 0LL;
  v50 = 0;
  v6 = 0LL;
  v53 = 0;
  v62 = 0LL;
  v8 = (int)PreferredLanguages;
  v64 = 0LL;
  v9 = 0LL;
  v67 = 0LL;
  v65 = 0LL;
  v66 = v4;
  if ( a4 )
    v63 = *a4;
  if ( ((unsigned int)PreferredLanguages & 0xFFFEFC83) != 0 )
    goto LABEL_169;
  if ( ((unsigned __int8)PreferredLanguages & 0xC) != 0 )
  {
    if ( ((unsigned __int8)PreferredLanguages & 0xC) == 0xC )
    {
      PreferredUILanguages = -1073741811;
      goto LABEL_170;
    }
  }
  else
  {
    v8 = (unsigned int)PreferredLanguages | 8;
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
  if ( !a4 )
  {
    PreferredUILanguages = -1073741811;
    goto LABEL_170;
  }
  if ( *a4 && !a3 )
    return (unsigned int)-1073741811;
  if ( (v8 & 0x300) == 0x300 )
  {
    PreferredUILanguages = -1073741811;
    goto LABEL_170;
  }
  v6 = g_RegInfo;
  if ( g_RegInfo )
  {
LABEL_19:
    v52 = v6;
    if ( v4 == 48 && *(_DWORD *)(v6 + 12) != MEMORY[0x7FFE03A4] && (int)RtlUpdateProcessRegistryInfo() >= 0 )
    {
      v52 = 0LL;
      PreferredUILanguages = RtlpCreateProcessRegistryInfo(&v52);
      if ( PreferredUILanguages < 0 )
        goto LABEL_112;
      v6 = v52;
    }
    if ( (v8 & 0x10000) == 0 )
    {
      if ( NtCurrentTeb()->PreferredLanguages )
      {
        PreferredLanguages = NtCurrentTeb()->PreferredLanguages;
        v62 = PreferredLanguages;
      }
      v6 = v52;
LABEL_25:
      if ( (v8 & 0x40) == 0 )
      {
        PreferredUILanguages = InitializeTEBUserLangList(0, v6);
        if ( PreferredUILanguages < 0 )
          goto LABEL_170;
        v5 = *(_QWORD *)NtCurrentTeb()->UserPrefLanguages;
        UserPrefLanguages = NtCurrentTeb()->UserPrefLanguages;
        v64 = v5;
        v6 = v52;
        v65 = UserPrefLanguages[1] ? *((_QWORD *)NtCurrentTeb()->UserPrefLanguages + 1) : *(_QWORD *)(v52 + 48);
        PreferredUILanguages = RtlpSetProcUserMachineLangList(v52, 0LL);
        if ( PreferredUILanguages < 0 )
          goto LABEL_170;
        v9 = *(_QWORD *)(v6 + 56);
      }
      if ( NtCurrentTeb()->MergedPrefLanguages )
      {
        v50 = 1;
        if ( v4 == 48 )
        {
          if ( *((char *)NtCurrentTeb()->MergedPrefLanguages + 40) >= 0 )
          {
            a2 = (unsigned __int64)NtCurrentTeb();
            if ( *(_DWORD *)(a2 + 6040) == *(_DWORD *)(v52 + 16) )
            {
              v6 = v52;
              MergedPrefLanguages = NtCurrentTeb()->MergedPrefLanguages;
              v55 = MergedPrefLanguages;
LABEL_36:
              v14 = 0;
              v49 = 0;
              v15 = 0;
              PreferredUILanguages = 0;
              if ( !MergedPrefLanguages )
              {
                if ( String1 )
                {
                  if ( *a4 < 2 )
                    PreferredUILanguages = -1073741789;
                  else
                    *(_DWORD *)String1 = 0;
                }
                *a4 = 2;
                goto LABEL_70;
              }
              v16 = 0;
              a2 = *a4;
              v17 = 0;
              v59 = 0;
              v54 = a2;
              if ( !*((_WORD *)MergedPrefLanguages + 2) )
                goto LABEL_64;
              v18 = v8 & 4;
              while ( 1 )
              {
                v70 = 0LL;
                v19 = 0LL;
                v20 = (unsigned __int16 *)(*((_QWORD *)MergedPrefLanguages + 3) + 6LL * v17);
                v71 = 0LL;
                v72 = 0;
                if ( v20 )
                  break;
LABEL_62:
                if ( ++v17 >= *((_WORD *)MergedPrefLanguages + 2) )
                {
                  MergedPrefLanguages = v55;
                  v16 = v59;
                  a2 = v54;
                  v14 = v49;
LABEL_64:
                  v26 = String1;
                  if ( String1 )
                  {
                    if ( v15 >= (unsigned int)a2 )
                      v14 = 1;
                    else
                      String1[v15] = 0;
                  }
                  v27 = v15 + 1;
                  if ( !v16 )
                  {
                    if ( v26 )
                    {
                      if ( (unsigned int)v27 >= (unsigned int)a2 )
                        v14 = 1;
                      else
                        v26[v27] = 0;
                    }
                    LODWORD(v27) = v27 + 1;
                  }
                  PreferredUILanguages = v14 != 0 ? 0xC0000023 : 0;
                  *v68 = v27;
                  if ( v69 )
                    *v69 = v16;
LABEL_70:
                  if ( ((int)(PreferredUILanguages + 0x80000000) < 0 || PreferredUILanguages == -1073741789)
                    && v66 == 48 )
                  {
                    if ( !*((_WORD *)MergedPrefLanguages + 22) )
                      RtlpComputeLangListCheckSum((__int64)MergedPrefLanguages);
                    if ( v50 )
                    {
LABEL_75:
                      if ( PreferredUILanguages >= 0 )
                        goto LABEL_76;
                      goto LABEL_170;
                    }
                    if ( (*((_BYTE *)MergedPrefLanguages + 40) & 0x40) != 0 )
                    {
                      NtCurrentTeb()->MergedPrefLanguages = v55;
                      v6 = v52;
                      NtCurrentTeb()->MuiGeneration = v60;
                      goto LABEL_75;
                    }
                    RtlpMUIRegPatchLicenseInfortmation(MergedPrefLanguages, a2);
                    if ( !v62 && (*(_BYTE *)(v64 + 40) & 0x40) != 0 && v65 == *(_QWORD *)(v6 + 48) )
                      RtlpSetProcMergedLangList(v6, MergedPrefLanguages);
                    NtCurrentTeb()->MergedPrefLanguages = v55;
                    NtCurrentTeb()->MuiGeneration = v60;
LABEL_141:
                    v6 = v52;
                    goto LABEL_75;
                  }
LABEL_133:
                  if ( !MergedPrefLanguages )
                    goto LABEL_75;
                  v42 = (unsigned __int64)v55;
                  if ( v55 == NtCurrentTeb()->MergedPrefLanguages )
                  {
                    v42 = (unsigned __int64)v55;
                    NtCurrentTeb()->MergedPrefLanguages = 0LL;
                  }
                  RtlpMuiRegFreeLanguageList(v42);
                  goto LABEL_141;
                }
              }
              v21 = *v20;
              if ( v21 == 1 )
              {
                WORD2(v70) = v20[2];
LABEL_42:
                v19 = &v70;
                goto LABEL_43;
              }
              v29 = v21 - 2;
              if ( v29 )
              {
                if ( v29 == 1 )
                {
                  WORD3(v70) = v20[2];
                  goto LABEL_42;
                }
              }
              else
              {
                v19 = (__int128 *)(*(_QWORD *)(*(_QWORD *)(v6 + 24) + 16LL) + 28LL * (__int16)v20[2]);
              }
LABEL_43:
              v51 = 0;
              *(_OWORD *)String2 = 0LL;
              if ( v18 )
              {
                *(_QWORD *)String = 0LL;
                v74 = 0;
                if ( v19 )
                {
                  if ( *((_WORD *)v19 + 2) )
                  {
                    v22 = *((unsigned __int16 *)v19 + 2);
LABEL_47:
                    v23 = RtlIntegerToUnicode(v22, 16LL, 4294967292LL, String);
                    v51 = v23;
                    if ( v23 < 0 )
                      goto LABEL_209;
                    String2[0] = 0LL;
                    String2[1] = String;
                    v24 = 2 * wcslen(String);
                    if ( v24 >= 0xFFFE )
                      v24 = 65532LL;
                    Src = (void *)v24;
                    WORD1(String2[0]) = v24 + 2;
                    if ( v22 == 4096 || !v15 || v15 > v54 )
                    {
LABEL_55:
                      LODWORD(v61) = v15 + ((unsigned __int16)v24 >> 1);
                      v25 = v61 + 1;
                      if ( String1 && v15 < v25 )
                      {
                        if ( v25 < v54 )
                        {
                          memmove(&String1[v15], String, (unsigned __int16)v24);
                          String1[(unsigned int)v61] = 0;
LABEL_59:
                          v23 = v51;
                          v15 = v25;
                          goto LABEL_60;
                        }
                      }
                      else if ( v25 < v54 || !String1 )
                      {
                        goto LABEL_59;
                      }
                      v51 = -1073741789;
                      goto LABEL_59;
                    }
                    if ( !(unsigned __int8)RtlpLangNameInMultiSzString_Size(String1, String) )
                    {
                      LOWORD(v24) = (_WORD)Src;
                      goto LABEL_55;
                    }
                    goto LABEL_109;
                  }
                  v46 = *((__int16 *)v19 + 3);
                  if ( (__int16)v46 > 0 )
                  {
                    v47 = (wchar_t *)(*(_QWORD *)(*(_QWORD *)(v6 + 32) + 24LL)
                                    + 2LL * *(__int16 *)(*(_QWORD *)(*(_QWORD *)(v6 + 32) + 16LL) + 2 * v46));
                    String2[1] = v47;
                    if ( v47 )
                    {
                      v48 = 2 * wcslen(v47);
                      if ( v48 >= 0xFFFE )
                        LOWORD(v48) = -4;
                      LOWORD(String2[0]) = v48;
                      WORD1(String2[0]) = v48 + 2;
                    }
                    if ( RtlCultureNameToLCID((unsigned __int16 *)String2, &v51) )
                    {
                      v22 = v51;
                      goto LABEL_47;
                    }
                    goto LABEL_145;
                  }
                  v23 = -1073741595;
LABEL_60:
                  if ( v23 >= 0 )
                  {
LABEL_61:
                    ++v59;
                    goto LABEL_62;
                  }
LABEL_209:
                  if ( v23 != -1073741789 )
                    goto LABEL_62;
                  v49 = 1;
                  goto LABEL_61;
                }
LABEL_145:
                v23 = -1073741811;
                goto LABEL_60;
              }
              if ( !v19 )
                goto LABEL_145;
              Heap = (wchar_t *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, 0xAAuLL);
              v31 = (unsigned __int64)Heap;
              if ( !Heap )
              {
                v6 = v52;
                v51 = -1073741801;
                v23 = -1073741801;
                goto LABEL_60;
              }
              v32 = *((__int16 *)v19 + 3);
              if ( (__int16)v32 > 0 )
              {
                v34 = (wchar_t *)(*(_QWORD *)(*(_QWORD *)(v52 + 32) + 24LL)
                                + 2LL * *(__int16 *)(*(_QWORD *)(*(_QWORD *)(v52 + 32) + 16LL) + 2 * v32));
                Src = v34;
                if ( v34 )
                {
                  v35 = 2 * wcslen(v34);
                  if ( v35 >= 0xFFFE )
                    v35 = 65532LL;
                  v34 = (wchar_t *)Src;
                  WORD1(String2[0]) = v35 + 2;
LABEL_96:
                  v61 = v35;
                  if ( v15 && v15 <= v54 )
                  {
                    if ( (unsigned __int8)RtlpLangNameInMultiSzString_Size(String1, v34) )
                    {
LABEL_108:
                      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v31);
                      v6 = v52;
LABEL_109:
                      v23 = v51;
                      goto LABEL_60;
                    }
                    LOWORD(v35) = v61;
                  }
                  LODWORD(v61) = v15 + ((unsigned __int16)v35 >> 1);
                  v36 = v61 + 1;
                  if ( String1 && v15 < v36 )
                  {
                    if ( v36 < v54 )
                    {
                      memmove(&String1[v15], Src, (unsigned __int16)v35);
                      String1[(unsigned int)v61] = 0;
                      goto LABEL_107;
                    }
                  }
                  else if ( v36 < v54 || !String1 )
                  {
                    goto LABEL_107;
                  }
                  v51 = -1073741789;
LABEL_107:
                  v15 = v36;
                  goto LABEL_108;
                }
              }
              else
              {
                v33 = *((unsigned __int16 *)v19 + 2);
                String2[1] = Heap;
                LODWORD(String2[0]) = 11141120;
                if ( !(unsigned __int8)RtlLCIDToCultureName(v33, (__int64)String2) )
                {
                  v51 = -1073741595;
                  goto LABEL_108;
                }
                v34 = String2[1];
                Src = String2[1];
              }
              v35 = LOWORD(String2[0]);
              goto LABEL_96;
            }
          }
          v50 = 0;
          RtlpMuiRegFreeLanguageList((unsigned __int64)NtCurrentTeb()->MergedPrefLanguages);
          a2 = 0LL;
          NtCurrentTeb()->MergedPrefLanguages = 0LL;
        }
      }
      else
      {
        v50 = 0;
        if ( v4 == 48 && !v62 )
        {
          v6 = v52;
          v44 = *(char **)(v52 + 96);
          if ( v44 && v5 && (*(_BYTE *)(v5 + 40) & 0x40) != 0 && v44[40] >= 0 )
          {
            v6 = v52;
            v55 = *(void **)(v52 + 96);
            MergedPrefLanguages = v44;
            NtCurrentTeb()->MuiGeneration = *(_DWORD *)(v52 + 16);
            goto LABEL_36;
          }
          goto LABEL_119;
        }
      }
      v6 = v52;
LABEL_119:
      if ( (v8 & 0x10000) == 0 )
      {
        RtlpInitMuiCriticalSection(PreferredLanguages, a2);
        RtlEnterCriticalSection((__int64)&RegistryInfoCritSect);
        v67 = RtlpMuiRegDupLanguageList(*(_QWORD *)(v6 + 72));
        v60 = *(_DWORD *)(v6 + 16);
        RtlLeaveCriticalSection((__int64)&RegistryInfoCritSect);
      }
LABEL_121:
      if ( v6 )
      {
        v37 = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, 0xD6uLL);
        v6 = v52;
        MergedPrefLanguages = (void *)v37;
        if ( v37 )
        {
          *(_DWORD *)v37 = 214;
          *(_DWORD *)(v37 + 4) = 1638400;
          *(_BYTE *)(v37 + 8) = 0;
          *(_QWORD *)(v37 + 24) = v37 + 64;
          *(_DWORD *)(v37 + 40) = 0;
          *(_QWORD *)(v37 + 16) = v6;
        }
        else
        {
          MergedPrefLanguages = 0LL;
        }
        v55 = MergedPrefLanguages;
        if ( !MergedPrefLanguages )
        {
          PreferredUILanguages = -1073741801;
          goto LABEL_75;
        }
        if ( (v8 & 0x40) != 0 )
        {
          v43 = LdrpMergeLangFallbackLists(v8, v6, &v55, v62, 0LL, v64, v9, v65, 0);
          MergedPrefLanguages = v55;
          PreferredUILanguages = v43;
        }
        else
        {
          Src = (void *)RtlpMuiRegCreateLanguageList(25LL, 0LL, v6);
          v38 = LdrpMergeLangFallbackLists(v8, v6, &Src, v62, v67, v64, v9, v65, 0);
          v39 = Src;
          PreferredUILanguages = v38;
          if ( v38 >= 0 )
          {
            v40 = v4 == 48 || (v8 & 0x10) != 0;
            v41 = RtlpAddNeutralsToMergedList(v40, v6, (__int64)Src, (__int64 *)&v55);
            MergedPrefLanguages = v55;
            PreferredUILanguages = v41;
          }
          RtlpMuiRegFreeLanguageList((unsigned __int64)v39);
        }
        if ( PreferredUILanguages < 0 )
          goto LABEL_133;
        goto LABEL_36;
      }
      PreferredUILanguages = -1073741811;
LABEL_170:
      if ( String1 )
      {
        a2 = v63;
        if ( v63 )
        {
          if ( v63 == 1 )
            *String1 = 0;
          else
            *(_DWORD *)String1 = 0;
        }
      }
LABEL_76:
      if ( v53 && v6 )
        RtlpMuiFreeLangRegistryInfo(v6, a2);
      if ( v67 )
      {
        if ( (*(_BYTE *)(v67 + 40) & 0x40) == 0 )
          RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v67);
      }
      return (unsigned int)PreferredUILanguages;
    }
    PreferredLanguages = 0LL;
    v49 = 0;
    v62 = 0LL;
    if ( *(_DWORD *)(v6 + 12) == MEMORY[0x7FFE03A4] )
      goto LABEL_25;
    v52 = 0LL;
    PreferredUILanguages = RtlpMuiRegCreateAndLoadRegistryInfo(&v52);
    if ( PreferredUILanguages >= 0 )
    {
      v6 = v52;
      v45 = (__int64 *)(v52 + 56);
      v53 = 1;
      if ( !*(_QWORD *)(v52 + 56) )
      {
        PreferredUILanguages = RtlpMuiRegLoadPreferredUILanguages(v52, a2, 0, 3, (__int64)&v49, v52 + 56);
        if ( PreferredUILanguages < 0 && !v49 )
          goto LABEL_170;
      }
      if ( !*(_QWORD *)(v6 + 64) )
      {
        v49 = 0;
        PreferredUILanguages = RtlpMuiRegLoadPreferredUILanguages(v6, a2, 1, 3, (__int64)&v49, v6 + 64);
        if ( PreferredUILanguages < 0 && !v49 )
          goto LABEL_170;
      }
      v9 = *v45;
      v64 = *(_QWORD *)(v6 + 64);
      goto LABEL_121;
    }
LABEL_112:
    v6 = v52;
    goto LABEL_170;
  }
  RtlpInitMuiCriticalSection(PreferredLanguages, a2);
  RtlEnterCriticalSection((__int64)&RegistryInfoCritSect);
  RegistryInfo = 0;
  if ( !g_RegInfo )
    RegistryInfo = RtlpMuiRegCreateAndLoadRegistryInfo(&g_RegInfo);
  RtlLeaveCriticalSection((__int64)&RegistryInfoCritSect);
  if ( RegistryInfo >= 0 )
  {
    v6 = g_RegInfo;
    goto LABEL_19;
  }
  return (unsigned int)RegistryInfo;
}
