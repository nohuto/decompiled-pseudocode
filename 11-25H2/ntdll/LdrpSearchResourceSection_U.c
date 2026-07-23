/*
 * XREFs of LdrpSearchResourceSection_U @ 0x18001DC50
 * Callers:
 *     RtlLoadString @ 0x180002D50 (RtlLoadString.c)
 *     LdrIsResItemExist @ 0x18001B220 (LdrIsResItemExist.c)
 *     LdrpLoadResourceFromAlternativeModule @ 0x18001B3A0 (LdrpLoadResourceFromAlternativeModule.c)
 *     LdrpGetRcConfig @ 0x18001D0E0 (LdrpGetRcConfig.c)
 *     RtlFindMessage @ 0x18001D8B0 (RtlFindMessage.c)
 *     LdrpSearchResourceSection_U @ 0x18001DC50 (LdrpSearchResourceSection_U.c)
 *     RtlpFileIsWin32WithRCManifest @ 0x1800AA648 (RtlpFileIsWin32WithRCManifest.c)
 *     LdrFindResource_U @ 0x1800E93C0 (LdrFindResource_U.c)
 *     LdrFindResourceEx_U @ 0x1800FA500 (LdrFindResourceEx_U.c)
 *     LdrFindResourceDirectory_U @ 0x180116E20 (LdrFindResourceDirectory_U.c)
 * Callees:
 *     RtlImageNtHeaderEx @ 0x180014D30 (RtlImageNtHeaderEx.c)
 *     LdrRscIsTypeExist @ 0x18001AB60 (LdrRscIsTypeExist.c)
 *     LdrpSetAlternateResourceModuleHandle @ 0x18001AD80 (LdrpSetAlternateResourceModuleHandle.c)
 *     LdrpLoadResourceFromAlternativeModule @ 0x18001B3A0 (LdrpLoadResourceFromAlternativeModule.c)
 *     LdrpGetRcConfig @ 0x18001D0E0 (LdrpGetRcConfig.c)
 *     LdrpGetFromMUIMemCache @ 0x18001D230 (LdrpGetFromMUIMemCache.c)
 *     GetLCIDFromLangListNodeWithLICCheck @ 0x18001D670 (GetLCIDFromLangListNodeWithLICCheck.c)
 *     LdrpSearchResourceSection_U @ 0x18001DC50 (LdrpSearchResourceSection_U.c)
 *     LdrpAccessResourceDataNoMultipleLanguage @ 0x18001F4B0 (LdrpAccessResourceDataNoMultipleLanguage.c)
 *     RtlAddressInSectionTable @ 0x1800206B0 (RtlAddressInSectionTable.c)
 *     RtlAllocateHeap @ 0x180050340 (RtlAllocateHeap.c)
 *     RtlCultureNameToLCID @ 0x18005C370 (RtlCultureNameToLCID.c)
 *     LdrpSetThreadPreferredLangList @ 0x18008B8E0 (LdrpSetThreadPreferredLangList.c)
 *     LdrpResGetMappingSize @ 0x1800A3820 (LdrpResGetMappingSize.c)
 *     LdrpGetParentLangId @ 0x1800A6FA8 (LdrpGetParentLangId.c)
 *     _wcsicmp @ 0x180124750 (_wcsicmp.c)
 *     wcslen @ 0x1801292B0 (wcslen.c)
 *     wcsncmp @ 0x180129440 (wcsncmp.c)
 *     NtQueryDefaultLocale @ 0x1801634C0 (NtQueryDefaultLocale.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 */

__int64 __fastcall LdrpSearchResourceSection_U(PVOID BaseOfImage, __int64 a2, DWORD a3, ULONG a4, __int64 a5)
{
  ULONG v5; // r15d
  __int64 *v6; // r13
  unsigned __int64 v7; // r12
  __int64 v8; // rbx
  int v9; // ecx
  char v10; // di
  unsigned __int16 v11; // si
  unsigned __int64 v12; // rcx
  unsigned int *v13; // rax
  unsigned int *v14; // rdi
  int v15; // eax
  bool v16; // r14
  char *v17; // rsi
  char *v18; // rdi
  NTSTATUS v19; // eax
  __int64 v20; // r9
  unsigned __int16 Magic; // ax
  __int64 VirtualAddress; // rax
  __int64 result; // rax
  unsigned __int64 v24; // rcx
  __int64 v25; // rax
  _DWORD *v26; // rdx
  unsigned int NumberOfSections; // r10d
  unsigned int v28; // r8d
  unsigned int v29; // ecx
  PIMAGE_NT_HEADERS v30; // r9
  int CurrentLocale_low; // esi
  unsigned int v32; // r14d
  int v33; // eax
  int v34; // r9d
  __int64 v35; // r12
  unsigned int v36; // eax
  __int64 v37; // rcx
  unsigned __int64 v38; // rcx
  unsigned int v39; // r8d
  int *v40; // r14
  PVOID v41; // rdi
  unsigned __int64 v42; // r10
  __int64 v43; // r11
  unsigned int *v44; // rax
  unsigned __int16 i; // si
  unsigned int *v46; // r15
  bool v47; // r8
  char v48; // r13
  int v49; // eax
  bool v50; // zf
  __int64 v51; // r13
  bool v52; // r8
  char v53; // si
  int v54; // eax
  unsigned __int64 v55; // r8
  __int64 v56; // rax
  __int64 v57; // rdi
  unsigned __int64 v58; // r8
  __int64 v59; // rax
  __int64 v60; // rdi
  unsigned int v61; // edi
  const wchar_t **v62; // r8
  int v63; // eax
  unsigned int v64; // edi
  __int64 *v65; // rsi
  const wchar_t **v66; // r13
  DWORD v67; // ebx
  const wchar_t *v68; // rax
  const wchar_t *v69; // rax
  int v70; // ecx
  __int64 v71; // r9
  unsigned __int16 *v72; // r9
  unsigned int v73; // ecx
  unsigned int v74; // eax
  __int64 v75; // rdx
  struct _TEB *v76; // rax
  _DWORD *RcConfig; // rax
  wchar_t *v78; // rcx
  size_t v79; // rax
  __int16 v80; // cx
  PVOID Heap; // rax
  int v82; // ecx
  __int64 v83; // r15
  unsigned __int16 *v84; // r15
  unsigned int v85; // ecx
  __int64 v86; // rcx
  unsigned int v87; // eax
  __int64 v88; // rdx
  __int64 v89; // rcx
  unsigned int ResourceFromAlternativeModule; // eax
  unsigned int v91; // r8d
  unsigned int v92; // r9d
  int v93; // eax
  const wchar_t **v94; // r14
  DWORD v95; // ebx
  __int64 *v96; // rsi
  NTSTATUS v97; // eax
  NTSTATUS v98; // r8d
  int v99; // eax
  __int64 v100; // r9
  unsigned __int16 v101[2]; // [rsp+40h] [rbp-1C8h] BYREF
  int v102; // [rsp+44h] [rbp-1C4h]
  char v103; // [rsp+48h] [rbp-1C0h]
  ULONG v104; // [rsp+4Ch] [rbp-1BCh] BYREF
  bool v105; // [rsp+50h] [rbp-1B8h]
  NTSTATUS v106; // [rsp+54h] [rbp-1B4h]
  unsigned __int16 v107; // [rsp+58h] [rbp-1B0h]
  ULONG v108; // [rsp+60h] [rbp-1A8h]
  DWORD v109; // [rsp+68h] [rbp-1A0h]
  unsigned int v110; // [rsp+6Ch] [rbp-19Ch]
  __int64 v111; // [rsp+70h] [rbp-198h] BYREF
  unsigned int *v112; // [rsp+78h] [rbp-190h]
  char v113; // [rsp+80h] [rbp-188h]
  bool v114; // [rsp+88h] [rbp-180h] BYREF
  unsigned __int16 v115; // [rsp+90h] [rbp-178h]
  int v116; // [rsp+98h] [rbp-170h]
  __int64 v117; // [rsp+A0h] [rbp-168h]
  int v118; // [rsp+A8h] [rbp-160h]
  const wchar_t **v119; // [rsp+B0h] [rbp-158h]
  DWORD v120; // [rsp+B8h] [rbp-150h] BYREF
  PIMAGE_NT_HEADERS OutHeaders; // [rsp+C0h] [rbp-148h] BYREF
  __int64 v122; // [rsp+C8h] [rbp-140h] BYREF
  __int64 v123; // [rsp+D0h] [rbp-138h] BYREF
  int v124; // [rsp+D8h] [rbp-130h]
  unsigned int v125; // [rsp+DCh] [rbp-12Ch]
  PVOID DllHandle; // [rsp+E0h] [rbp-128h]
  __int64 v127; // [rsp+E8h] [rbp-120h]
  char *v128; // [rsp+F0h] [rbp-118h]
  char *v129; // [rsp+F8h] [rbp-110h]
  DWORD Lcid; // [rsp+100h] [rbp-108h] BYREF
  PIMAGE_NT_HEADERS v131; // [rsp+108h] [rbp-100h]
  DWORD DefaultLocaleId; // [rsp+110h] [rbp-F8h] BYREF
  int v133; // [rsp+114h] [rbp-F4h]
  char *v134; // [rsp+118h] [rbp-F0h]
  char *v135; // [rsp+120h] [rbp-E8h]
  unsigned int *v136; // [rsp+128h] [rbp-E0h]
  unsigned int *v137; // [rsp+130h] [rbp-D8h]
  char *v138; // [rsp+138h] [rbp-D0h]
  __int64 *v139; // [rsp+140h] [rbp-C8h]
  unsigned __int16 *v140; // [rsp+148h] [rbp-C0h]
  _DWORD *v141; // [rsp+150h] [rbp-B8h]
  _UNICODE_STRING String; // [rsp+158h] [rbp-B0h] BYREF
  unsigned __int64 v143; // [rsp+168h] [rbp-A0h]
  int *v144; // [rsp+170h] [rbp-98h]
  unsigned int *v145; // [rsp+178h] [rbp-90h]
  __int64 v146; // [rsp+180h] [rbp-88h]
  __int64 v147; // [rsp+188h] [rbp-80h]
  const wchar_t *v148; // [rsp+190h] [rbp-78h] BYREF
  const wchar_t *v149; // [rsp+198h] [rbp-70h]
  const wchar_t *v150; // [rsp+1A0h] [rbp-68h]
  __int64 v151; // [rsp+1A8h] [rbp-60h]
  const wchar_t *v152; // [rsp+1B0h] [rbp-58h]
  __int64 v153; // [rsp+1B8h] [rbp-50h]
  __int64 v154; // [rsp+1C0h] [rbp-48h]

  v5 = a4;
  v104 = a4;
  v109 = a3;
  v6 = (__int64 *)a2;
  v127 = a2;
  v7 = (unsigned __int64)BaseOfImage;
  DllHandle = BaseOfImage;
  v139 = (__int64 *)a2;
  v108 = a4;
  v117 = a5;
  v8 = 0LL;
  v111 = 0LL;
  v114 = 0;
  v119 = (const wchar_t **)a2;
  v105 = 0;
  v122 = 0LL;
  v125 = 0;
  Lcid = 0;
  v120 = 0;
  DefaultLocaleId = 0;
  String = 0LL;
  if ( a3 < 3 && (a4 & 2) == 0 || a3 > 4 || (a4 & 0x41) != 0 && a3 != 4 || a3 == 4 && (a4 & 0x41) == 0 )
    return 3221225713LL;
  v9 = 3;
  if ( a3 != 4 )
    v9 = a3;
  v110 = v9;
  v118 = v9;
  v10 = ~(_BYTE)a4;
  if ( (~(_BYTE)a4 & 0x10) == 0 || (unsigned int)(v9 - 1) > 2 )
    goto LABEL_23;
  if ( v9 == 3 )
    v11 = *(_WORD *)(a2 + 16);
  else
    v11 = 0;
  v107 = v11;
  v12 = *(_QWORD *)a2;
  if ( (((*(_QWORD *)a2 - 16LL) & 0xFFFFFFFFFFFFFFF7uLL) == 0
     || (v12 & 0xFFFFFFFFFFFF0000uLL) != 0 && !wcsicmp((const wchar_t *)v12, L"MUI"))
    && (v10 & 8) != 0
    && (v11 & 0xF3FF) == 0
    && v11 != 3072 )
  {
    v5 |= 0x10u;
    v104 = v5;
    v108 = v5;
    goto LABEL_23;
  }
  v104 = 0;
  v123 = 0LL;
  v124 = 0;
  v102 = 0;
  v13 = LdrpGetFromMUIMemCache(v7, 0, 0LL, 8);
  v14 = v13;
  v112 = v13;
  if ( v13 == (unsigned int *)-1LL )
    goto LABEL_297;
  if ( !v13 )
  {
    v152 = L"MUI";
    v153 = 1LL;
    v154 = 0LL;
    v99 = LdrpSearchResourceSection_U((PVOID)v7, (__int64)&v123);
    v124 = v99;
    if ( v99 < 0 )
    {
      v14 = 0LL;
      v112 = 0LL;
    }
    else
    {
      v99 = LdrpAccessResourceDataNoMultipleLanguage((PVOID)v7);
      v124 = v99;
      if ( v99 < 0 )
      {
        v14 = 0LL;
        v112 = 0LL;
      }
      else
      {
        v14 = v112;
        if ( *v112 == -20054323 )
        {
          v102 = 0;
        }
        else
        {
          v99 = -1073741701;
          v124 = -1073741701;
          v14 = 0LL;
          v112 = 0LL;
        }
      }
    }
    v100 = -1LL;
    if ( v14 )
      v100 = (__int64)v14;
    LdrpSetAlternateResourceModuleHandle(v7, 0LL, 0LL, v100, 0, 2, v99, 0LL);
  }
  if ( !v14 )
  {
LABEL_297:
    v15 = 0x80000;
    goto LABEL_21;
  }
  if ( (int)LdrRscIsTypeExist(v14, (const wchar_t *)*v6, v5, &v104) < 0 )
  {
    v15 = 393216;
    goto LABEL_21;
  }
  v15 = v104;
  if ( (v14[5] & 0x100) != 0 )
  {
    v15 = v104 | 0x100000;
    v104 |= 0x100000u;
  }
  if ( (v14[4] & 0x10) != 0 )
  {
    v15 |= 0x200000u;
LABEL_21:
    v104 = v15;
  }
  v5 |= v15;
  v104 = v5;
  v108 = v5;
  if ( (v5 & 0x40000) != 0 )
  {
    result = 3221225610LL;
    v106 = -1073741686;
    if ( (v5 & 0x20000) == 0 )
    {
      v148 = (const wchar_t *)*v6;
      if ( v110 < 2 )
        v25 = 0LL;
      else
        v25 = v6[1];
      v149 = (const wchar_t *)v25;
      if ( v110 == 3 )
        v8 = v6[2];
      v150 = (const wchar_t *)v8;
      if ( v109 == 4 )
        v151 = v6[3];
      result = LdrpLoadResourceFromAlternativeModule((PVOID)v7, (__int64)&v148, v109, v5, (__int64 *)v117);
      v106 = result;
    }
    return result;
  }
LABEL_23:
  v16 = 1;
  v113 = 1;
  v17 = (char *)v7;
  v143 = v7;
  OutHeaders = 0LL;
  v18 = 0LL;
  v128 = 0LL;
  if ( (v7 & 3) != 0 )
  {
    v16 = (v7 & 1) == 0;
    v113 = v16;
    v17 = (char *)(v7 & 0xFFFFFFFFFFFFFFFCuLL);
    v143 = v7 & 0xFFFFFFFFFFFFFFFCuLL;
  }
  v19 = RtlImageNtHeaderEx(1u, v17, 0LL, &OutHeaders);
  if ( OutHeaders )
  {
    Magic = OutHeaders->OptionalHeader.Magic;
    if ( Magic != 267 )
    {
      if ( Magic == 523 && OutHeaders->OptionalHeader.NumberOfRvaAndSizes > 2 )
      {
        VirtualAddress = OutHeaders->OptionalHeader.DataDirectory[2].VirtualAddress;
        if ( (_DWORD)VirtualAddress )
        {
          if ( v16 || (unsigned int)VirtualAddress < OutHeaders->OptionalHeader.SizeOfHeaders )
          {
            v18 = &v17[VirtualAddress];
            v128 = &v17[VirtualAddress];
            v19 = 0;
          }
          else
          {
            v18 = (char *)RtlAddressInSectionTable(OutHeaders, v17, VirtualAddress);
            v128 = v18;
            v19 = 0;
            if ( !v18 )
              v19 = -1073741811;
          }
        }
        else
        {
          v19 = -1073741822;
        }
        goto LABEL_32;
      }
LABEL_296:
      v19 = -1073741811;
      goto LABEL_32;
    }
    if ( HIDWORD(OutHeaders->OptionalHeader.SizeOfHeapReserve) <= 2 )
      goto LABEL_296;
    v20 = OutHeaders->OptionalHeader.DataDirectory[0].VirtualAddress;
    if ( (_DWORD)v20 )
    {
      if ( v16 || (unsigned int)v20 < OutHeaders->OptionalHeader.SizeOfHeaders )
      {
        v18 = &v17[v20];
        v128 = &v17[v20];
        v19 = 0;
      }
      else
      {
        v133 = 0;
        v141 = 0LL;
        v26 = (_DWORD *)((char *)&OutHeaders->OptionalHeader.Magic + OutHeaders->FileHeader.SizeOfOptionalHeader);
        v141 = v26;
        NumberOfSections = OutHeaders->FileHeader.NumberOfSections;
        v28 = 0;
        v133 = 0;
        while ( v28 < NumberOfSections )
        {
          v29 = v26[3];
          if ( (unsigned int)v20 >= v29 && (unsigned int)v20 < v26[4] + v29 )
          {
            if ( v26 )
            {
              v18 = &v17[(unsigned int)v26[5] - (unsigned __int64)(unsigned int)v26[3] + v20];
              goto LABEL_292;
            }
            break;
          }
          v26 += 10;
          v141 = v26;
          v133 = ++v28;
        }
        v18 = 0LL;
LABEL_292:
        v128 = v18;
        v19 = 0;
        if ( !v18 )
          v19 = -1073741811;
        v6 = v139;
        v127 = (__int64)v139;
        v5 = v108;
        v104 = v108;
      }
    }
    else
    {
      v19 = -1073741822;
    }
  }
LABEL_32:
  if ( v19 < 0 )
    v18 = 0LL;
  v128 = v18;
  v112 = (unsigned int *)v18;
  if ( !v18 )
    return 3221225609LL;
  LOBYTE(v20) = 1;
  result = LdrpResGetMappingSize(v7, &v122, 256LL, v20);
  v106 = result;
  if ( (int)result >= 0 )
  {
    v135 = v18;
    v111 = 61166LL;
    v116 = 0;
    v30 = 0LL;
    v131 = 0LL;
    v129 = 0LL;
    LOWORD(CurrentLocale_low) = 0;
    v102 = 0;
    v101[0] = 0;
    v107 = 0;
    v120 = 0;
LABEL_56:
    v32 = -1073741308;
    if ( !v18 || (v33 = v118, v24 = (unsigned int)(v118 - 1), --v118, !v33) )
    {
LABEL_111:
      if ( v30 && (v5 & 2) == 0 )
      {
        v65 = (__int64 *)v117;
        *(_QWORD *)v117 = v30;
        if ( !NtCurrentTeb()->ResourceRetValue )
        {
          v123 = (__int64)NtCurrentTeb();
          Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x18uLL);
          *(_QWORD *)(v123 + 6160) = Heap;
        }
        if ( NtCurrentTeb()->ResourceRetValue )
        {
          *(_QWORD *)NtCurrentTeb()->ResourceRetValue = v7;
          *((_QWORD *)NtCurrentTeb()->ResourceRetValue + 1) = v131;
          *((_QWORD *)NtCurrentTeb()->ResourceRetValue + 2) = v7;
        }
        v32 = 0;
        v106 = 0;
        v5 = v108;
        v61 = v110;
        goto LABEL_146;
      }
      if ( v18 && (v5 & 2) != 0 )
      {
        v65 = (__int64 *)v117;
        *(_QWORD *)v117 = v18;
        v32 = 0;
        v106 = 0;
        v61 = v110;
      }
      else
      {
        v61 = v110;
        if ( v110 - v118 == 3 )
        {
          v106 = -1073741308;
          if ( v129 )
          {
            v131 = 0LL;
            goto LABEL_129;
          }
        }
        else
        {
          if ( v110 - v118 != 1 )
          {
            v65 = (__int64 *)v117;
            if ( v110 - v118 == 2 )
            {
              v32 = -1073741685;
              v106 = -1073741685;
            }
            else
            {
              v32 = -1073741811;
              v106 = -1073741811;
            }
            goto LABEL_146;
          }
          v32 = -1073741686;
          v106 = -1073741686;
        }
        v65 = (__int64 *)v117;
      }
LABEL_146:
      v66 = v119;
      v67 = v109;
      if ( (v5 & 0x2040000) == 0 && v32 + 1073741686 <= 1 && v61 == 3 )
      {
        v148 = *v119;
        v149 = v119[1];
        v150 = v119[2];
        if ( v109 == 4 )
          v151 = (__int64)v119[3];
        ResourceFromAlternativeModule = LdrpLoadResourceFromAlternativeModule(
                                          (PVOID)v7,
                                          (__int64)&v148,
                                          v109,
                                          v5 | 0x1000000,
                                          v65);
        if ( ResourceFromAlternativeModule != -1073020927 )
        {
          if ( ResourceFromAlternativeModule != -1073020922 )
            v32 = ResourceFromAlternativeModule;
          v106 = v32;
        }
      }
      if ( v32 + 1073741686 <= 1 && (~v5 & 0x20000) != 0 && (~v5 & 0x80000) != 0 && (~(_BYTE)v5 & 0x10) != 0 && v61 == 3 )
      {
        v148 = *v66;
        v149 = v66[1];
        v150 = v66[2];
        if ( v67 == 4 )
          v151 = (__int64)v66[3];
        v32 = LdrpLoadResourceFromAlternativeModule((PVOID)v7, (__int64)&v148, v67, v5, v65);
        v106 = v32;
      }
      return v32;
    }
    if ( !(_DWORD)v24 && v110 == 3 )
      v129 = v18;
    if ( !v129 )
    {
LABEL_60:
      v34 = *((unsigned __int16 *)v18 + 7);
      v35 = *((unsigned __int16 *)v18 + 6);
      v36 = v35 + v34;
      v37 = 0xFFFFFFFFLL;
      if ( (int)v35 + v34 >= (unsigned int)v35 )
        v37 = v36;
      result = v36 < (unsigned int)v35 ? 0xC0000095 : 0;
      v106 = result;
      if ( (int)result < 0 )
        return result;
      v38 = 8 * v37;
      v140 = (unsigned __int16 *)v38;
      v39 = -1;
      if ( v38 <= 0xFFFFFFFF )
        v39 = v38;
      result = 0LL;
      if ( v38 > 0xFFFFFFFF )
        result = 3221225621LL;
      v106 = result;
      if ( (int)result < 0 )
        return result;
      v40 = (int *)(v18 + 16);
      v144 = v40;
      v41 = DllHandle;
      v42 = v122 + ((unsigned __int64)DllHandle & 0xFFFFFFFFFFFFFFFCuLL);
      v24 = (unsigned __int64)v40 + v39;
      if ( v24 > v42 )
        return 3221225595LL;
      v43 = *v6;
      v123 = v43;
      if ( (v43 & 0xFFFFFFFFFFFF0000uLL) == 0 )
      {
        v40 += 2 * v35;
        v144 = v40;
        LOWORD(v35) = v34;
      }
      if ( (_WORD)v35 )
      {
        if ( v129 && (v5 & 0x20) != 0 )
        {
          v18 = 0LL;
          v135 = 0LL;
          v111 = (unsigned int)*v40;
          v30 = (PIMAGE_NT_HEADERS)((char *)v112 + (unsigned int)v40[1]);
          if ( (unsigned __int64)v30 > v42 )
            return 3221225595LL;
          v131 = (PIMAGE_NT_HEADERS)((char *)v112 + (unsigned int)v40[1]);
          v7 = (unsigned __int64)DllHandle;
          v32 = -1073741308;
          goto LABEL_111;
        }
        v145 = (unsigned int *)v40;
        v115 = v35;
        v136 = 0LL;
        v103 = 0;
        v135 = 0LL;
        v131 = 0LL;
        v18 = 0LL;
        v134 = 0LL;
        v30 = 0LL;
        OutHeaders = 0LL;
        v138 = 0LL;
        v44 = (unsigned int *)&v40[2 * (unsigned __int16)v35 - 2];
        v137 = v44;
        for ( i = v35; ; v115 = i )
        {
          if ( v40 > (int *)v44 )
          {
            v7 = (unsigned __int64)DllHandle;
            goto LABEL_107;
          }
          i >>= 1;
          if ( !i )
          {
            v50 = (_WORD)v35 == 0;
            v7 = (unsigned __int64)DllHandle;
            if ( v50 )
              goto LABEL_107;
            v51 = v122;
            v52 = DllHandle && v122;
            v53 = 1;
            v103 = 1;
            v54 = *v40;
            if ( (v43 & 0xFFFFFFFFFFFF0000uLL) != 0 )
            {
              if ( v54 >= 0 )
              {
                v24 = 0xFFFFFFFFLL;
              }
              else if ( v52
                     && (v89 = (unsigned int)v54,
                         LODWORD(v89) = v54 & 0x7FFFFFFF,
                         (unsigned __int64)v112 + v89 > v122 + ((unsigned __int64)DllHandle & 0xFFFFFFFFFFFFFFFCuLL)) )
              {
                v53 = 0;
                v103 = 0;
                v24 = 0xFFFFFFFFLL;
              }
              else
              {
                v82 = *v40;
                v83 = (unsigned int)*v40;
                LODWORD(v83) = v83 & 0x7FFFFFFF;
                v84 = (unsigned __int16 *)((char *)v112 + v83);
                if ( v52
                  && ((v147 = 2LL * *v84, v85 = v82 & 0x7FFFFFFF, v85 + (unsigned int)v147 < v85)
                   || (unsigned __int64)v112 + v85 + (unsigned int)v147 > v122
                                                                        + ((unsigned __int64)DllHandle & 0xFFFFFFFFFFFFFFFCuLL)) )
                {
                  v53 = 0;
                  v103 = 0;
                  v24 = 0xFFFFFFFFLL;
                }
                else
                {
                  v87 = wcsncmp((const wchar_t *)v43, v84 + 1, *v84);
                  v24 = v87;
                  if ( !v87 )
                  {
                    v88 = -1LL;
                    do
                      ++v88;
                    while ( *(_WORD *)(v123 + 2 * v88) );
                    if ( v88 != *v84 )
                      v24 = 1LL;
                  }
                  v30 = OutHeaders;
                }
              }
            }
            else if ( v54 < 0 )
            {
              v24 = 1LL;
            }
            else
            {
              v24 = (unsigned int)(v43 - v54);
            }
            if ( !v53 )
              return 3221225595LL;
            if ( (_DWORD)v24 )
              goto LABEL_107;
            v24 = (unsigned int)v40[1];
            v55 = v51 + (v7 & 0xFFFFFFFFFFFFFFFCuLL);
            HIDWORD(v56) = HIDWORD(v24);
            if ( (v24 & 0x80000000) != 0LL )
            {
              LODWORD(v56) = v24 & 0x7FFFFFFF;
              if ( (unsigned __int64)v112 + v56 <= v55 )
              {
                v57 = (unsigned int)v24;
                LODWORD(v57) = v24 & 0x7FFFFFFF;
                v18 = (char *)v112 + v57;
                v134 = v18;
                goto LABEL_107;
              }
              return 3221225595LL;
            }
            if ( (unsigned __int64)v112 + v24 > v55 )
              return 3221225595LL;
            v30 = (PIMAGE_NT_HEADERS)((char *)v112 + v24);
            v138 = (char *)v112 + v24;
            goto LABEL_107;
          }
          v136 = (unsigned int *)v40;
          if ( (v35 & 1) != 0 )
            v46 = (unsigned int *)&v40[2 * i];
          else
            v46 = (unsigned int *)&v40[2 * i - 2];
          v136 = v46;
          v47 = DllHandle && v122;
          v48 = 1;
          v103 = 1;
          v49 = *v46;
          if ( (v43 & 0xFFFFFFFFFFFF0000uLL) != 0 )
          {
            if ( v49 >= 0 )
            {
              v24 = 0xFFFFFFFFLL;
            }
            else if ( v47
                   && (v86 = (unsigned int)v49,
                       LODWORD(v86) = v49 & 0x7FFFFFFF,
                       (unsigned __int64)v112 + v86 > v122 + ((unsigned __int64)DllHandle & 0xFFFFFFFFFFFFFFFCuLL)) )
            {
              v48 = 0;
              v103 = 0;
              v24 = 0xFFFFFFFFLL;
            }
            else
            {
              v70 = *v46;
              v71 = *v46;
              LODWORD(v71) = v71 & 0x7FFFFFFF;
              v72 = (unsigned __int16 *)((char *)v112 + v71);
              v140 = v72;
              if ( v47 )
              {
                v146 = 2LL * *v72;
                v73 = v70 & 0x7FFFFFFF;
                if ( v73 + (unsigned int)v146 < v73
                  || (unsigned __int64)v112 + v73 + (unsigned int)v146 > v122
                                                                       + ((unsigned __int64)DllHandle & 0xFFFFFFFFFFFFFFFCuLL) )
                {
                  v48 = 0;
                  v103 = 0;
                  v24 = 0xFFFFFFFFLL;
LABEL_171:
                  v30 = OutHeaders;
                  goto LABEL_84;
                }
              }
              v74 = wcsncmp((const wchar_t *)v43, v72 + 1, *v72);
              v24 = v74;
              v43 = v123;
              if ( v74 )
                goto LABEL_171;
              v75 = -1LL;
              do
                ++v75;
              while ( *(_WORD *)(v123 + 2 * v75) );
              if ( v75 == *v140 )
                goto LABEL_171;
              v24 = 1LL;
              v30 = OutHeaders;
            }
          }
          else if ( v49 < 0 )
          {
            v24 = 1LL;
          }
          else
          {
            v24 = (unsigned int)(v43 - v49);
          }
LABEL_84:
          if ( !v48 )
            return 3221225595LL;
          if ( !(_DWORD)v24 )
          {
            v24 = v46[1];
            v7 = (unsigned __int64)DllHandle;
            v58 = v122 + ((unsigned __int64)DllHandle & 0xFFFFFFFFFFFFFFFCuLL);
            HIDWORD(v59) = HIDWORD(v24);
            if ( (v24 & 0x80000000) != 0LL )
            {
              LODWORD(v59) = v24 & 0x7FFFFFFF;
              if ( (unsigned __int64)v112 + v59 <= v58 )
              {
                v60 = (unsigned int)v24;
                LODWORD(v60) = v24 & 0x7FFFFFFF;
                v18 = (char *)v112 + v60;
                v134 = v18;
                goto LABEL_107;
              }
              return 3221225595LL;
            }
            if ( (unsigned __int64)v112 + v24 > v58 )
              return 3221225595LL;
            v18 = 0LL;
            v134 = 0LL;
            v30 = (PIMAGE_NT_HEADERS)((char *)v112 + v24);
            v138 = (char *)v112 + v24;
LABEL_107:
            v135 = v18;
            v131 = v30;
            v6 = (__int64 *)(v127 + 8);
            v127 = (__int64)v6;
            v139 = v6;
            v5 = v104;
            LOWORD(CurrentLocale_low) = v102;
            goto LABEL_56;
          }
          if ( (v24 & 0x80000000) == 0LL )
          {
            v40 = (int *)(v46 + 2);
            v145 = v46 + 2;
            v44 = v137;
          }
          else
          {
            v44 = v46 - 2;
            v137 = v46 - 2;
            if ( (v35 & 1) == 0 )
              --i;
          }
          LOWORD(v35) = i;
        }
      }
      v91 = v110;
      switch ( v110 - v118 )
      {
        case 1u:
          v93 = -1073741686;
          break;
        case 2u:
          v93 = -1073741685;
          break;
        case 3u:
          v106 = -1073741308;
          return (unsigned int)-1073741308;
        default:
          v92 = -1073741811;
          v106 = -1073741811;
          v95 = v109;
          v96 = (__int64 *)v117;
          v94 = v119;
LABEL_277:
          if ( v92 + 1073741686 <= 1
            && (~v5 & 0x20000) != 0
            && (~v5 & 0x80000) != 0
            && (~(_BYTE)v5 & 0x10) != 0
            && v91 == 3 )
          {
            v148 = *v94;
            v149 = v94[1];
            v150 = v94[2];
            if ( v95 == 4 )
              v151 = (__int64)v94[3];
            return (unsigned int)LdrpLoadResourceFromAlternativeModule(v41, (__int64)&v148, v95, v5, v96);
          }
          return v92;
      }
      v106 = v93;
      v104 = v93;
      v94 = v119;
      v95 = v109;
      if ( (v5 & 0x2040000) != 0 || v110 != 3 )
      {
        v96 = (__int64 *)v117;
      }
      else
      {
        v148 = *v119;
        v149 = v119[1];
        v150 = v119[2];
        if ( v109 == 4 )
          v151 = (__int64)v119[3];
        v96 = (__int64 *)v117;
        v97 = LdrpLoadResourceFromAlternativeModule(DllHandle, (__int64)&v148, v109, v5 | 0x1000000, (__int64 *)v117);
        if ( v97 != -1073020927 )
        {
          v98 = v104;
          if ( v97 != -1073020922 )
            v98 = v97;
          v104 = v98;
          v106 = v98;
        }
        v91 = v110;
      }
      v92 = v104;
      goto LABEL_277;
    }
    LOWORD(CurrentLocale_low) = 0;
    v102 = 0;
    v101[0] = 0;
    v62 = v119;
    v107 = *((_WORD *)v119 + 8);
    v105 = (v107 & 0x3FF) == 0;
    v61 = v110;
    while ( 1 )
    {
      v63 = v116++;
      if ( v63 == 6 )
        break;
      if ( !v63 )
      {
        if ( v107 )
        {
          CurrentLocale_low = (unsigned __int16)v111;
          if ( (v5 & 0x80000) != 0 )
            LOWORD(CurrentLocale_low) = v107;
        }
        else
        {
LABEL_181:
          CurrentLocale_low = 0;
        }
LABEL_124:
        v101[0] = CurrentLocale_low;
LABEL_125:
        v102 = CurrentLocale_low;
        goto LABEL_126;
      }
      switch ( v63 )
      {
        case 1:
          LOBYTE(v24) = (~v5 & 0x20000) != 0 && (~v5 & 0x80000) != 0;
          if ( ((unsigned __int8)v24 & ((~(_BYTE)v5 & 0x10) != 0)) == 0 )
            goto LABEL_123;
          v148 = *v62;
          if ( v61 < 2 )
            v68 = 0LL;
          else
            v68 = v62[1];
          v149 = v68;
          if ( v61 == 3 )
            v69 = v62[2];
          else
            v69 = 0LL;
          v150 = v69;
          if ( v109 == 4 )
            v151 = (__int64)v62[3];
          result = LdrpLoadResourceFromAlternativeModule((PVOID)v7, (__int64)&v148, v109, v5, (__int64 *)v117);
          v106 = result;
          if ( (int)result < 0 )
            goto LABEL_123;
          return result;
        case 2:
          CurrentLocale_low = v107;
          if ( v105 )
            LOWORD(CurrentLocale_low) = v111;
          goto LABEL_124;
        case 3:
          if ( (v5 & 4) != 0 )
            return 3221225988LL;
          if ( v105 )
            goto LABEL_123;
          if ( (int)LdrpGetParentLangId((unsigned __int16)CurrentLocale_low, v101, v62, 1023LL) < 0 )
            goto LABEL_181;
          LOWORD(CurrentLocale_low) = v101[0];
          v102 = v101[0];
          if ( v101[0] )
            --v116;
          break;
        case 4:
          if ( v105 )
            goto LABEL_123;
          CurrentLocale_low = v107;
          LOWORD(CurrentLocale_low) = v107 & 0x3FF;
          goto LABEL_124;
        case 5:
          if ( v105 )
            goto LABEL_123;
          return 3221225988LL;
        case 7:
          if ( (~v5 & 0x80000) == 0 )
            goto LABEL_123;
          RcConfig = LdrpGetRcConfig((PVOID)v7, 0xFFFFFFFFLL, 0, 1);
          if ( !RcConfig )
            goto LABEL_123;
          if ( *RcConfig != -20054323 )
            goto LABEL_123;
          v24 = (unsigned int)RcConfig[31];
          if ( !(_DWORD)v24 )
            goto LABEL_123;
          v50 = (_DWORD *)((char *)RcConfig + v24) == 0LL;
          v78 = (wchar_t *)((char *)RcConfig + v24);
          v127 = 0LL;
          *(_QWORD *)&String.Length = 0LL;
          String.Buffer = v78;
          if ( !v50 )
          {
            v79 = 2 * wcslen(v78);
            v127 = v79;
            v80 = v79;
            if ( v79 >= 0xFFFE )
            {
              LOWORD(v79) = -4;
              v127 = 65532LL;
              v80 = -4;
            }
            String.Length = v79;
            String.MaximumLength = v80 + 2;
          }
          if ( !RtlCultureNameToLCID(&String, &Lcid) )
            goto LABEL_123;
          CurrentLocale_low = (unsigned __int16)Lcid;
          goto LABEL_124;
        case 8:
          LOWORD(CurrentLocale_low) = v111;
          v102 = (unsigned __int16)v111;
          v101[0] = v111;
          if ( (~v5 & 0x80000) != 0 )
            goto LABEL_220;
          if ( NtCurrentTeb() )
          {
            v76 = NtCurrentTeb();
            CurrentLocale_low = LOWORD(v76->CurrentLocale);
            v101[0] = v76->CurrentLocale;
          }
          else
          {
            CurrentLocale_low = v101[0];
          }
          v5 = v108;
          v104 = v108;
          goto LABEL_125;
        case 9:
          LOWORD(CurrentLocale_low) = v111;
          v102 = (unsigned __int16)v111;
          v101[0] = v111;
          v106 = NtQueryDefaultLocale(1u, &v120);
          if ( v106 < 0 )
            break;
          CurrentLocale_low = (unsigned __int16)v120;
          goto LABEL_124;
        case 10:
          LOWORD(CurrentLocale_low) = v111;
          v102 = (unsigned __int16)v111;
          v101[0] = v111;
          v106 = NtQueryDefaultLocale(0, &DefaultLocaleId);
          if ( v106 < 0 || DefaultLocaleId == v120 )
            break;
          CurrentLocale_low = (unsigned __int16)DefaultLocaleId;
          goto LABEL_124;
        case 11:
          CurrentLocale_low = 1033;
          goto LABEL_124;
        case 12:
LABEL_220:
          v5 |= 0x20u;
          v104 = v5;
          v108 = v5;
          break;
        default:
          return 3221225988LL;
      }
LABEL_126:
      if ( (~(_BYTE)v5 & 0x20) == 0 || (unsigned __int16)CurrentLocale_low != v111 )
      {
        v111 = (unsigned __int16)CurrentLocale_low;
        v6 = &v111;
        v127 = (__int64)&v111;
        v139 = &v111;
        v18 = v129;
        v135 = v129;
        goto LABEL_60;
      }
      v61 = v110;
LABEL_129:
      v62 = v119;
    }
    LOWORD(CurrentLocale_low) = v111;
    v102 = (unsigned __int16)v111;
    v101[0] = v111;
    if ( (v5 & 0x20) != 0 )
      goto LABEL_126;
    v101[0] = 0;
    if ( (unsigned __int8)LdrpSetThreadPreferredLangList(v24, 0xFFFFFFFFLL, v62, 1023LL) )
    {
      v24 = *((unsigned __int16 *)NtCurrentTeb()->MergedPrefLanguages + 2);
      if ( v125 >= (unsigned int)v24 )
      {
        v101[0] = 0;
      }
      else
      {
        v64 = v125;
        GetLCIDFromLangListNodeWithLICCheck(v24, (__int64)NtCurrentTeb()->MergedPrefLanguages, v125, v101, &v114);
        LOWORD(CurrentLocale_low) = v101[0];
        v102 = v101[0];
        if ( v101[0] )
        {
          v125 = v64 + 1;
          --v116;
          v5 = v108;
          v104 = v108;
          goto LABEL_126;
        }
      }
      v5 = v108;
      v104 = v108;
    }
    else
    {
      v101[0] = 0;
    }
LABEL_123:
    CurrentLocale_low = (unsigned __int16)v111;
    goto LABEL_124;
  }
  return result;
}
