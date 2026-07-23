/*
 * XREFs of LdrpSearchResourceSection_U @ 0x180077BD0
 * Callers:
 *     RtlpFileIsWin32WithRCManifest @ 0x1800026C0 (RtlpFileIsWin32WithRCManifest.c)
 *     RtlLoadString @ 0x18002C530 (RtlLoadString.c)
 *     LdrIsResItemExist @ 0x1800751A0 (LdrIsResItemExist.c)
 *     LdrpLoadResourceFromAlternativeModule @ 0x180075320 (LdrpLoadResourceFromAlternativeModule.c)
 *     LdrpGetRcConfig @ 0x180077060 (LdrpGetRcConfig.c)
 *     RtlFindMessage @ 0x180077830 (RtlFindMessage.c)
 *     LdrpSearchResourceSection_U @ 0x180077BD0 (LdrpSearchResourceSection_U.c)
 *     LdrFindResource_U @ 0x1800E2990 (LdrFindResource_U.c)
 *     LdrFindResourceEx_U @ 0x1800F34B0 (LdrFindResourceEx_U.c)
 *     LdrFindResourceDirectory_U @ 0x18010F230 (LdrFindResourceDirectory_U.c)
 * Callees:
 *     LdrpSetThreadPreferredLangList @ 0x180011370 (LdrpSetThreadPreferredLangList.c)
 *     RtlCultureNameToLCID @ 0x1800141A0 (RtlCultureNameToLCID.c)
 *     RtlAllocateHeap @ 0x18003DC60 (RtlAllocateHeap.c)
 *     RtlImageNtHeaderEx @ 0x18006ECD0 (RtlImageNtHeaderEx.c)
 *     LdrRscIsTypeExist @ 0x180074AE0 (LdrRscIsTypeExist.c)
 *     LdrpSetAlternateResourceModuleHandle @ 0x180074D00 (LdrpSetAlternateResourceModuleHandle.c)
 *     LdrpLoadResourceFromAlternativeModule @ 0x180075320 (LdrpLoadResourceFromAlternativeModule.c)
 *     LdrpGetRcConfig @ 0x180077060 (LdrpGetRcConfig.c)
 *     LdrpGetFromMUIMemCache @ 0x1800771B0 (LdrpGetFromMUIMemCache.c)
 *     GetLCIDFromLangListNodeWithLICCheck @ 0x1800775F0 (GetLCIDFromLangListNodeWithLICCheck.c)
 *     LdrpSearchResourceSection_U @ 0x180077BD0 (LdrpSearchResourceSection_U.c)
 *     LdrpAccessResourceDataNoMultipleLanguage @ 0x180079430 (LdrpAccessResourceDataNoMultipleLanguage.c)
 *     RtlAddressInSectionTable @ 0x18007A5A0 (RtlAddressInSectionTable.c)
 *     LdrpResGetMappingSize @ 0x180095500 (LdrpResGetMappingSize.c)
 *     LdrpGetParentLangId @ 0x180099B74 (LdrpGetParentLangId.c)
 *     _wcsicmp @ 0x180120EA0 (_wcsicmp.c)
 *     wcslen @ 0x180125A00 (wcslen.c)
 *     wcsncmp @ 0x180125B90 (wcsncmp.c)
 *     NtQueryDefaultLocale @ 0x1801602F0 (NtQueryDefaultLocale.c)
 *     __security_check_cookie @ 0x180163D80 (__security_check_cookie.c)
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
  __int64 v24; // rax
  _DWORD *v25; // rdx
  unsigned int NumberOfSections; // r10d
  unsigned int v27; // r8d
  unsigned int v28; // ecx
  PIMAGE_NT_HEADERS v29; // r9
  int CurrentLocale_low; // esi
  unsigned int v31; // r14d
  int v32; // eax
  int v33; // ecx
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
  int v50; // ecx
  bool v51; // zf
  __int64 v52; // r13
  bool v53; // r8
  char v54; // si
  int v55; // eax
  int v56; // ecx
  __int64 v57; // rcx
  unsigned __int64 v58; // r8
  __int64 v59; // rax
  __int64 v60; // rdi
  __int64 v61; // rcx
  unsigned __int64 v62; // r8
  __int64 v63; // rax
  __int64 v64; // rdi
  unsigned int v65; // edi
  const wchar_t **v66; // r8
  int v67; // eax
  __int64 v68; // rcx
  unsigned int v69; // edi
  __int64 *v70; // rsi
  const wchar_t **v71; // r13
  DWORD v72; // ebx
  const wchar_t *v73; // rax
  const wchar_t *v74; // rax
  int v75; // ecx
  __int64 v76; // r9
  unsigned __int16 *v77; // r9
  unsigned int v78; // ecx
  __int64 v79; // rdx
  struct _TEB *v80; // rax
  _DWORD *RcConfig; // rax
  __int64 v82; // rcx
  wchar_t *v83; // rcx
  size_t v84; // rax
  __int16 v85; // cx
  PVOID Heap; // rax
  int v87; // ecx
  __int64 v88; // r15
  unsigned __int16 *v89; // r15
  unsigned int v90; // ecx
  __int64 v91; // rcx
  __int64 v92; // rdx
  __int64 v93; // rcx
  unsigned int ResourceFromAlternativeModule; // eax
  unsigned int v95; // r8d
  unsigned int v96; // r9d
  int v97; // eax
  const wchar_t **v98; // r14
  DWORD v99; // ebx
  __int64 *v100; // rsi
  NTSTATUS v101; // eax
  NTSTATUS v102; // r8d
  int v103; // eax
  __int64 v104; // r9
  unsigned __int16 v105[2]; // [rsp+40h] [rbp-1C8h] BYREF
  int v106; // [rsp+44h] [rbp-1C4h]
  char v107; // [rsp+48h] [rbp-1C0h]
  ULONG v108; // [rsp+4Ch] [rbp-1BCh] BYREF
  bool v109; // [rsp+50h] [rbp-1B8h]
  NTSTATUS v110; // [rsp+54h] [rbp-1B4h]
  unsigned __int16 v111; // [rsp+58h] [rbp-1B0h]
  ULONG v112; // [rsp+60h] [rbp-1A8h]
  DWORD v113; // [rsp+68h] [rbp-1A0h]
  unsigned int v114; // [rsp+6Ch] [rbp-19Ch]
  __int64 v115; // [rsp+70h] [rbp-198h] BYREF
  unsigned int *v116; // [rsp+78h] [rbp-190h]
  char v117; // [rsp+80h] [rbp-188h]
  bool v118; // [rsp+88h] [rbp-180h] BYREF
  unsigned __int16 v119; // [rsp+90h] [rbp-178h]
  int v120; // [rsp+98h] [rbp-170h]
  __int64 v121; // [rsp+A0h] [rbp-168h]
  int v122; // [rsp+A8h] [rbp-160h]
  const wchar_t **v123; // [rsp+B0h] [rbp-158h]
  DWORD v124; // [rsp+B8h] [rbp-150h] BYREF
  PIMAGE_NT_HEADERS OutHeaders; // [rsp+C0h] [rbp-148h] BYREF
  __int64 v126; // [rsp+C8h] [rbp-140h] BYREF
  __int64 v127; // [rsp+D0h] [rbp-138h] BYREF
  int v128; // [rsp+D8h] [rbp-130h]
  unsigned int v129; // [rsp+DCh] [rbp-12Ch]
  PVOID DllHandle; // [rsp+E0h] [rbp-128h]
  __int64 v131; // [rsp+E8h] [rbp-120h]
  char *v132; // [rsp+F0h] [rbp-118h]
  char *v133; // [rsp+F8h] [rbp-110h]
  DWORD Lcid; // [rsp+100h] [rbp-108h] BYREF
  PIMAGE_NT_HEADERS v135; // [rsp+108h] [rbp-100h]
  DWORD DefaultLocaleId; // [rsp+110h] [rbp-F8h] BYREF
  int v137; // [rsp+114h] [rbp-F4h]
  char *v138; // [rsp+118h] [rbp-F0h]
  char *v139; // [rsp+120h] [rbp-E8h]
  unsigned int *v140; // [rsp+128h] [rbp-E0h]
  unsigned int *v141; // [rsp+130h] [rbp-D8h]
  char *v142; // [rsp+138h] [rbp-D0h]
  __int64 *v143; // [rsp+140h] [rbp-C8h]
  unsigned __int16 *v144; // [rsp+148h] [rbp-C0h]
  _DWORD *v145; // [rsp+150h] [rbp-B8h]
  _UNICODE_STRING String; // [rsp+158h] [rbp-B0h] BYREF
  unsigned __int64 v147; // [rsp+168h] [rbp-A0h]
  int *v148; // [rsp+170h] [rbp-98h]
  unsigned int *v149; // [rsp+178h] [rbp-90h]
  __int64 v150; // [rsp+180h] [rbp-88h]
  __int64 v151; // [rsp+188h] [rbp-80h]
  const wchar_t *v152; // [rsp+190h] [rbp-78h] BYREF
  const wchar_t *v153; // [rsp+198h] [rbp-70h]
  const wchar_t *v154; // [rsp+1A0h] [rbp-68h]
  __int64 v155; // [rsp+1A8h] [rbp-60h]
  const wchar_t *v156; // [rsp+1B0h] [rbp-58h]
  __int64 v157; // [rsp+1B8h] [rbp-50h]
  __int64 v158; // [rsp+1C0h] [rbp-48h]

  v5 = a4;
  v108 = a4;
  v113 = a3;
  v6 = (__int64 *)a2;
  v131 = a2;
  v7 = (unsigned __int64)BaseOfImage;
  DllHandle = BaseOfImage;
  v143 = (__int64 *)a2;
  v112 = a4;
  v121 = a5;
  v8 = 0LL;
  v115 = 0LL;
  v118 = 0;
  v123 = (const wchar_t **)a2;
  v109 = 0;
  v126 = 0LL;
  v129 = 0;
  Lcid = 0;
  v124 = 0;
  DefaultLocaleId = 0;
  String = 0LL;
  if ( a3 < 3 && (a4 & 2) == 0 || a3 > 4 || (a4 & 0x41) != 0 && a3 != 4 || a3 == 4 && (a4 & 0x41) == 0 )
    return 3221225713LL;
  v9 = 3;
  if ( a3 != 4 )
    v9 = a3;
  v114 = v9;
  v122 = v9;
  v10 = ~(_BYTE)a4;
  if ( (~(_BYTE)a4 & 0x10) == 0 || (unsigned int)(v9 - 1) > 2 )
    goto LABEL_23;
  if ( v9 == 3 )
    v11 = *(_WORD *)(a2 + 16);
  else
    v11 = 0;
  v111 = v11;
  v12 = *(_QWORD *)a2;
  if ( (((*(_QWORD *)a2 - 16LL) & 0xFFFFFFFFFFFFFFF7uLL) == 0
     || (v12 & 0xFFFFFFFFFFFF0000uLL) != 0 && !wcsicmp((const wchar_t *)v12, L"MUI"))
    && (v10 & 8) != 0
    && (v11 & 0xF3FF) == 0
    && v11 != 3072 )
  {
    v5 |= 0x10u;
    v108 = v5;
    v112 = v5;
    goto LABEL_23;
  }
  v108 = 0;
  v127 = 0LL;
  v128 = 0;
  v106 = 0;
  v13 = LdrpGetFromMUIMemCache(v7, 0, 0LL, 8);
  v14 = v13;
  v116 = v13;
  if ( v13 == (unsigned int *)-1LL )
    goto LABEL_297;
  if ( !v13 )
  {
    v156 = L"MUI";
    v157 = 1LL;
    v158 = 0LL;
    v103 = LdrpSearchResourceSection_U((PVOID)v7, (__int64)&v127);
    v128 = v103;
    if ( v103 < 0 )
    {
      v14 = 0LL;
      v116 = 0LL;
    }
    else
    {
      v103 = LdrpAccessResourceDataNoMultipleLanguage((PVOID)v7);
      v128 = v103;
      if ( v103 < 0 )
      {
        v14 = 0LL;
        v116 = 0LL;
      }
      else
      {
        v14 = v116;
        if ( *v116 == -20054323 )
        {
          v106 = 0;
        }
        else
        {
          v103 = -1073741701;
          v128 = -1073741701;
          v14 = 0LL;
          v116 = 0LL;
        }
      }
    }
    v104 = -1LL;
    if ( v14 )
      v104 = (__int64)v14;
    LdrpSetAlternateResourceModuleHandle(v7, 0LL, 0LL, v104, 0, 2, v103, 0LL);
  }
  if ( !v14 )
  {
LABEL_297:
    v15 = 0x80000;
    goto LABEL_21;
  }
  if ( (int)LdrRscIsTypeExist(v14, (const wchar_t *)*v6, v5, &v108) < 0 )
  {
    v15 = 393216;
    goto LABEL_21;
  }
  v15 = v108;
  if ( (v14[5] & 0x100) != 0 )
  {
    v15 = v108 | 0x100000;
    v108 |= 0x100000u;
  }
  if ( (v14[4] & 0x10) != 0 )
  {
    v15 |= 0x200000u;
LABEL_21:
    v108 = v15;
  }
  v5 |= v15;
  v108 = v5;
  v112 = v5;
  if ( (v5 & 0x40000) != 0 )
  {
    result = 3221225610LL;
    v110 = -1073741686;
    if ( (v5 & 0x20000) == 0 )
    {
      v152 = (const wchar_t *)*v6;
      if ( v114 < 2 )
        v24 = 0LL;
      else
        v24 = v6[1];
      v153 = (const wchar_t *)v24;
      if ( v114 == 3 )
        v8 = v6[2];
      v154 = (const wchar_t *)v8;
      if ( v113 == 4 )
        v155 = v6[3];
      result = LdrpLoadResourceFromAlternativeModule((PVOID)v7, (__int64)&v152, v113, v5, (__int64 *)v121);
      v110 = result;
    }
    return result;
  }
LABEL_23:
  v16 = 1;
  v117 = 1;
  v17 = (char *)v7;
  v147 = v7;
  OutHeaders = 0LL;
  v18 = 0LL;
  v132 = 0LL;
  if ( (v7 & 3) != 0 )
  {
    v16 = (v7 & 1) == 0;
    v117 = v16;
    v17 = (char *)(v7 & 0xFFFFFFFFFFFFFFFCuLL);
    v147 = v7 & 0xFFFFFFFFFFFFFFFCuLL;
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
            v132 = &v17[VirtualAddress];
            v19 = 0;
          }
          else
          {
            v18 = (char *)RtlAddressInSectionTable(OutHeaders, v17, VirtualAddress);
            v132 = v18;
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
        v132 = &v17[v20];
        v19 = 0;
      }
      else
      {
        v137 = 0;
        v145 = 0LL;
        v25 = (_DWORD *)((char *)&OutHeaders->OptionalHeader.Magic + OutHeaders->FileHeader.SizeOfOptionalHeader);
        v145 = v25;
        NumberOfSections = OutHeaders->FileHeader.NumberOfSections;
        v27 = 0;
        v137 = 0;
        while ( v27 < NumberOfSections )
        {
          v28 = v25[3];
          if ( (unsigned int)v20 >= v28 && (unsigned int)v20 < v25[4] + v28 )
          {
            if ( v25 )
            {
              v18 = &v17[(unsigned int)v25[5] - (unsigned __int64)(unsigned int)v25[3] + v20];
              goto LABEL_292;
            }
            break;
          }
          v25 += 10;
          v145 = v25;
          v137 = ++v27;
        }
        v18 = 0LL;
LABEL_292:
        v132 = v18;
        v19 = 0;
        if ( !v18 )
          v19 = -1073741811;
        v6 = v143;
        v131 = (__int64)v143;
        v5 = v112;
        v108 = v112;
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
  v132 = v18;
  v116 = (unsigned int *)v18;
  if ( !v18 )
    return 3221225609LL;
  LOBYTE(v20) = 1;
  result = LdrpResGetMappingSize(v7, &v126, 256LL, v20);
  v110 = result;
  if ( (int)result >= 0 )
  {
    v139 = v18;
    v115 = 61166LL;
    v120 = 0;
    v29 = 0LL;
    v135 = 0LL;
    v133 = 0LL;
    LOWORD(CurrentLocale_low) = 0;
    v106 = 0;
    v105[0] = 0;
    v111 = 0;
    v124 = 0;
LABEL_56:
    v31 = -1073741308;
    if ( !v18 || (v32 = v122, v33 = v122 - 1, --v122, !v32) )
    {
LABEL_111:
      if ( v29 && (v5 & 2) == 0 )
      {
        v70 = (__int64 *)v121;
        *(_QWORD *)v121 = v29;
        if ( !NtCurrentTeb()->ResourceRetValue )
        {
          v127 = (__int64)NtCurrentTeb();
          Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x18uLL);
          *(_QWORD *)(v127 + 6160) = Heap;
        }
        if ( NtCurrentTeb()->ResourceRetValue )
        {
          *(_QWORD *)NtCurrentTeb()->ResourceRetValue = v7;
          *((_QWORD *)NtCurrentTeb()->ResourceRetValue + 1) = v135;
          *((_QWORD *)NtCurrentTeb()->ResourceRetValue + 2) = v7;
        }
        v31 = 0;
        v110 = 0;
        v5 = v112;
        v65 = v114;
        goto LABEL_146;
      }
      if ( v18 && (v5 & 2) != 0 )
      {
        v70 = (__int64 *)v121;
        *(_QWORD *)v121 = v18;
        v31 = 0;
        v110 = 0;
        v65 = v114;
      }
      else
      {
        v65 = v114;
        if ( v114 - v122 == 3 )
        {
          v110 = -1073741308;
          if ( v133 )
          {
            v135 = 0LL;
            goto LABEL_129;
          }
        }
        else
        {
          if ( v114 - v122 != 1 )
          {
            v70 = (__int64 *)v121;
            if ( v114 - v122 == 2 )
            {
              v31 = -1073741685;
              v110 = -1073741685;
            }
            else
            {
              v31 = -1073741811;
              v110 = -1073741811;
            }
            goto LABEL_146;
          }
          v31 = -1073741686;
          v110 = -1073741686;
        }
        v70 = (__int64 *)v121;
      }
LABEL_146:
      v71 = v123;
      v72 = v113;
      if ( (v5 & 0x2040000) == 0 && v31 + 1073741686 <= 1 && v65 == 3 )
      {
        v152 = *v123;
        v153 = v123[1];
        v154 = v123[2];
        if ( v113 == 4 )
          v155 = (__int64)v123[3];
        ResourceFromAlternativeModule = LdrpLoadResourceFromAlternativeModule(
                                          (PVOID)v7,
                                          (__int64)&v152,
                                          v113,
                                          v5 | 0x1000000,
                                          v70);
        if ( ResourceFromAlternativeModule != -1073020927 )
        {
          if ( ResourceFromAlternativeModule != -1073020922 )
            v31 = ResourceFromAlternativeModule;
          v110 = v31;
        }
      }
      if ( v31 + 1073741686 <= 1 && (~v5 & 0x20000) != 0 && (~v5 & 0x80000) != 0 && (~(_BYTE)v5 & 0x10) != 0 && v65 == 3 )
      {
        v152 = *v71;
        v153 = v71[1];
        v154 = v71[2];
        if ( v72 == 4 )
          v155 = (__int64)v71[3];
        v31 = LdrpLoadResourceFromAlternativeModule((PVOID)v7, (__int64)&v152, v72, v5, v70);
        v110 = v31;
      }
      return v31;
    }
    if ( !v33 && v114 == 3 )
      v133 = v18;
    if ( !v133 )
    {
LABEL_60:
      v34 = *((unsigned __int16 *)v18 + 7);
      v35 = *((unsigned __int16 *)v18 + 6);
      v36 = v35 + v34;
      v37 = 0xFFFFFFFFLL;
      if ( (int)v35 + v34 >= (unsigned int)v35 )
        v37 = v36;
      result = v36 < (unsigned int)v35 ? 0xC0000095 : 0;
      v110 = result;
      if ( (int)result < 0 )
        return result;
      v38 = 8 * v37;
      v144 = (unsigned __int16 *)v38;
      v39 = -1;
      if ( v38 <= 0xFFFFFFFF )
        v39 = v38;
      result = 0LL;
      if ( v38 > 0xFFFFFFFF )
        result = 3221225621LL;
      v110 = result;
      if ( (int)result < 0 )
        return result;
      v40 = (int *)(v18 + 16);
      v148 = v40;
      v41 = DllHandle;
      v42 = v126 + ((unsigned __int64)DllHandle & 0xFFFFFFFFFFFFFFFCuLL);
      if ( (unsigned __int64)v40 + v39 > v42 )
        return 3221225595LL;
      v43 = *v6;
      v127 = v43;
      if ( (v43 & 0xFFFFFFFFFFFF0000uLL) == 0 )
      {
        v40 += 2 * v35;
        v148 = v40;
        LOWORD(v35) = v34;
      }
      if ( (_WORD)v35 )
      {
        if ( v133 && (v5 & 0x20) != 0 )
        {
          v18 = 0LL;
          v139 = 0LL;
          v115 = (unsigned int)*v40;
          v29 = (PIMAGE_NT_HEADERS)((char *)v116 + (unsigned int)v40[1]);
          if ( (unsigned __int64)v29 > v42 )
            return 3221225595LL;
          v135 = (PIMAGE_NT_HEADERS)((char *)v116 + (unsigned int)v40[1]);
          v7 = (unsigned __int64)DllHandle;
          v31 = -1073741308;
          goto LABEL_111;
        }
        v149 = (unsigned int *)v40;
        v119 = v35;
        v140 = 0LL;
        v107 = 0;
        v139 = 0LL;
        v135 = 0LL;
        v18 = 0LL;
        v138 = 0LL;
        v29 = 0LL;
        OutHeaders = 0LL;
        v142 = 0LL;
        v44 = (unsigned int *)&v40[2 * (unsigned __int16)v35 - 2];
        v141 = v44;
        for ( i = v35; ; v119 = i )
        {
          if ( v40 > (int *)v44 )
          {
            v7 = (unsigned __int64)DllHandle;
            goto LABEL_107;
          }
          i >>= 1;
          if ( !i )
          {
            v51 = (_WORD)v35 == 0;
            v7 = (unsigned __int64)DllHandle;
            if ( v51 )
              goto LABEL_107;
            v52 = v126;
            v53 = DllHandle && v126;
            v54 = 1;
            v107 = 1;
            v55 = *v40;
            if ( (v43 & 0xFFFFFFFFFFFF0000uLL) != 0 )
            {
              if ( v55 >= 0 )
              {
                v56 = -1;
              }
              else if ( v53
                     && (v93 = (unsigned int)v55,
                         LODWORD(v93) = v55 & 0x7FFFFFFF,
                         (unsigned __int64)v116 + v93 > v126 + ((unsigned __int64)DllHandle & 0xFFFFFFFFFFFFFFFCuLL)) )
              {
                v54 = 0;
                v107 = 0;
                v56 = -1;
              }
              else
              {
                v87 = *v40;
                v88 = (unsigned int)*v40;
                LODWORD(v88) = v88 & 0x7FFFFFFF;
                v89 = (unsigned __int16 *)((char *)v116 + v88);
                if ( v53
                  && ((v151 = 2LL * *v89, v90 = v87 & 0x7FFFFFFF, v90 + (unsigned int)v151 < v90)
                   || (unsigned __int64)v116 + v90 + (unsigned int)v151 > v126
                                                                        + ((unsigned __int64)DllHandle & 0xFFFFFFFFFFFFFFFCuLL)) )
                {
                  v54 = 0;
                  v107 = 0;
                  v56 = -1;
                }
                else
                {
                  v56 = wcsncmp((const wchar_t *)v43, v89 + 1, *v89);
                  if ( !v56 )
                  {
                    v92 = -1LL;
                    do
                      ++v92;
                    while ( *(_WORD *)(v127 + 2 * v92) );
                    if ( v92 != *v89 )
                      v56 = 1;
                  }
                  v29 = OutHeaders;
                }
              }
            }
            else if ( v55 < 0 )
            {
              v56 = 1;
            }
            else
            {
              v56 = v43 - v55;
            }
            if ( !v54 )
              return 3221225595LL;
            if ( v56 )
              goto LABEL_107;
            v57 = (unsigned int)v40[1];
            v58 = v52 + (v7 & 0xFFFFFFFFFFFFFFFCuLL);
            HIDWORD(v59) = HIDWORD(v57);
            if ( (int)v57 < 0 )
            {
              LODWORD(v59) = v57 & 0x7FFFFFFF;
              if ( (unsigned __int64)v116 + v59 <= v58 )
              {
                v60 = (unsigned int)v57;
                LODWORD(v60) = v57 & 0x7FFFFFFF;
                v18 = (char *)v116 + v60;
                v138 = v18;
                goto LABEL_107;
              }
              return 3221225595LL;
            }
            if ( (unsigned __int64)v116 + v57 > v58 )
              return 3221225595LL;
            v29 = (PIMAGE_NT_HEADERS)((char *)v116 + v57);
            v142 = (char *)v116 + v57;
            goto LABEL_107;
          }
          v140 = (unsigned int *)v40;
          if ( (v35 & 1) != 0 )
            v46 = (unsigned int *)&v40[2 * i];
          else
            v46 = (unsigned int *)&v40[2 * i - 2];
          v140 = v46;
          v47 = DllHandle && v126;
          v48 = 1;
          v107 = 1;
          v49 = *v46;
          if ( (v43 & 0xFFFFFFFFFFFF0000uLL) != 0 )
          {
            if ( v49 >= 0 )
            {
              v50 = -1;
            }
            else if ( v47
                   && (v91 = (unsigned int)v49,
                       LODWORD(v91) = v49 & 0x7FFFFFFF,
                       (unsigned __int64)v116 + v91 > v126 + ((unsigned __int64)DllHandle & 0xFFFFFFFFFFFFFFFCuLL)) )
            {
              v48 = 0;
              v107 = 0;
              v50 = -1;
            }
            else
            {
              v75 = *v46;
              v76 = *v46;
              LODWORD(v76) = v76 & 0x7FFFFFFF;
              v77 = (unsigned __int16 *)((char *)v116 + v76);
              v144 = v77;
              if ( v47 )
              {
                v150 = 2LL * *v77;
                v78 = v75 & 0x7FFFFFFF;
                if ( v78 + (unsigned int)v150 < v78
                  || (unsigned __int64)v116 + v78 + (unsigned int)v150 > v126
                                                                       + ((unsigned __int64)DllHandle & 0xFFFFFFFFFFFFFFFCuLL) )
                {
                  v48 = 0;
                  v107 = 0;
                  v50 = -1;
LABEL_171:
                  v29 = OutHeaders;
                  goto LABEL_84;
                }
              }
              v50 = wcsncmp((const wchar_t *)v43, v77 + 1, *v77);
              v43 = v127;
              if ( v50 )
                goto LABEL_171;
              v79 = -1LL;
              do
                ++v79;
              while ( *(_WORD *)(v127 + 2 * v79) );
              if ( v79 == *v144 )
                goto LABEL_171;
              v50 = 1;
              v29 = OutHeaders;
            }
          }
          else if ( v49 < 0 )
          {
            v50 = 1;
          }
          else
          {
            v50 = v43 - v49;
          }
LABEL_84:
          if ( !v48 )
            return 3221225595LL;
          if ( !v50 )
          {
            v61 = v46[1];
            v7 = (unsigned __int64)DllHandle;
            v62 = v126 + ((unsigned __int64)DllHandle & 0xFFFFFFFFFFFFFFFCuLL);
            HIDWORD(v63) = HIDWORD(v61);
            if ( (int)v61 < 0 )
            {
              LODWORD(v63) = v61 & 0x7FFFFFFF;
              if ( (unsigned __int64)v116 + v63 <= v62 )
              {
                v64 = (unsigned int)v61;
                LODWORD(v64) = v61 & 0x7FFFFFFF;
                v18 = (char *)v116 + v64;
                v138 = v18;
                goto LABEL_107;
              }
              return 3221225595LL;
            }
            if ( (unsigned __int64)v116 + v61 > v62 )
              return 3221225595LL;
            v18 = 0LL;
            v138 = 0LL;
            v29 = (PIMAGE_NT_HEADERS)((char *)v116 + v61);
            v142 = (char *)v116 + v61;
LABEL_107:
            v139 = v18;
            v135 = v29;
            v6 = (__int64 *)(v131 + 8);
            v131 = (__int64)v6;
            v143 = v6;
            v5 = v108;
            LOWORD(CurrentLocale_low) = v106;
            goto LABEL_56;
          }
          if ( v50 >= 0 )
          {
            v40 = (int *)(v46 + 2);
            v149 = v46 + 2;
            v44 = v141;
          }
          else
          {
            v44 = v46 - 2;
            v141 = v46 - 2;
            if ( (v35 & 1) == 0 )
              --i;
          }
          LOWORD(v35) = i;
        }
      }
      v95 = v114;
      switch ( v114 - v122 )
      {
        case 1u:
          v97 = -1073741686;
          break;
        case 2u:
          v97 = -1073741685;
          break;
        case 3u:
          v110 = -1073741308;
          return (unsigned int)-1073741308;
        default:
          v96 = -1073741811;
          v110 = -1073741811;
          v99 = v113;
          v100 = (__int64 *)v121;
          v98 = v123;
LABEL_277:
          if ( v96 + 1073741686 <= 1
            && (~v5 & 0x20000) != 0
            && (~v5 & 0x80000) != 0
            && (~(_BYTE)v5 & 0x10) != 0
            && v95 == 3 )
          {
            v152 = *v98;
            v153 = v98[1];
            v154 = v98[2];
            if ( v99 == 4 )
              v155 = (__int64)v98[3];
            return (unsigned int)LdrpLoadResourceFromAlternativeModule(v41, (__int64)&v152, v99, v5, v100);
          }
          return v96;
      }
      v110 = v97;
      v108 = v97;
      v98 = v123;
      v99 = v113;
      if ( (v5 & 0x2040000) != 0 || v114 != 3 )
      {
        v100 = (__int64 *)v121;
      }
      else
      {
        v152 = *v123;
        v153 = v123[1];
        v154 = v123[2];
        if ( v113 == 4 )
          v155 = (__int64)v123[3];
        v100 = (__int64 *)v121;
        v101 = LdrpLoadResourceFromAlternativeModule(DllHandle, (__int64)&v152, v113, v5 | 0x1000000, (__int64 *)v121);
        if ( v101 != -1073020927 )
        {
          v102 = v108;
          if ( v101 != -1073020922 )
            v102 = v101;
          v108 = v102;
          v110 = v102;
        }
        v95 = v114;
      }
      v96 = v108;
      goto LABEL_277;
    }
    LOWORD(CurrentLocale_low) = 0;
    v106 = 0;
    v105[0] = 0;
    v66 = v123;
    v111 = *((_WORD *)v123 + 8);
    v109 = (v111 & 0x3FF) == 0;
    v65 = v114;
    while ( 1 )
    {
      v67 = v120++;
      if ( v67 == 6 )
        break;
      if ( !v67 )
      {
        if ( v111 )
        {
          CurrentLocale_low = (unsigned __int16)v115;
          if ( (v5 & 0x80000) != 0 )
            LOWORD(CurrentLocale_low) = v111;
        }
        else
        {
LABEL_181:
          CurrentLocale_low = 0;
        }
LABEL_124:
        v105[0] = CurrentLocale_low;
LABEL_125:
        v106 = CurrentLocale_low;
        goto LABEL_126;
      }
      switch ( v67 )
      {
        case 1:
          if ( (~v5 & 0x20000) == 0 || (~v5 & 0x80000) == 0 || (~(_BYTE)v5 & 0x10) == 0 )
            goto LABEL_123;
          v152 = *v66;
          if ( v65 < 2 )
            v73 = 0LL;
          else
            v73 = v66[1];
          v153 = v73;
          if ( v65 == 3 )
            v74 = v66[2];
          else
            v74 = 0LL;
          v154 = v74;
          if ( v113 == 4 )
            v155 = (__int64)v66[3];
          result = LdrpLoadResourceFromAlternativeModule((PVOID)v7, (__int64)&v152, v113, v5, (__int64 *)v121);
          v110 = result;
          if ( (int)result < 0 )
            goto LABEL_123;
          return result;
        case 2:
          CurrentLocale_low = v111;
          if ( v109 )
            LOWORD(CurrentLocale_low) = v115;
          goto LABEL_124;
        case 3:
          if ( (v5 & 4) != 0 )
            return 3221225988LL;
          if ( v109 )
            goto LABEL_123;
          if ( (int)LdrpGetParentLangId((unsigned __int16)CurrentLocale_low, v105, v66) < 0 )
            goto LABEL_181;
          LOWORD(CurrentLocale_low) = v105[0];
          v106 = v105[0];
          if ( v105[0] )
            --v120;
          break;
        case 4:
          if ( v109 )
            goto LABEL_123;
          CurrentLocale_low = v111;
          LOWORD(CurrentLocale_low) = v111 & 0x3FF;
          goto LABEL_124;
        case 5:
          if ( v109 )
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
          v82 = (unsigned int)RcConfig[31];
          if ( !(_DWORD)v82 )
            goto LABEL_123;
          v51 = (_DWORD *)((char *)RcConfig + v82) == 0LL;
          v83 = (wchar_t *)((char *)RcConfig + v82);
          v131 = 0LL;
          *(_QWORD *)&String.Length = 0LL;
          String.Buffer = v83;
          if ( !v51 )
          {
            v84 = 2 * wcslen(v83);
            v131 = v84;
            v85 = v84;
            if ( v84 >= 0xFFFE )
            {
              LOWORD(v84) = -4;
              v131 = 65532LL;
              v85 = -4;
            }
            String.Length = v84;
            String.MaximumLength = v85 + 2;
          }
          if ( !RtlCultureNameToLCID(&String, &Lcid) )
            goto LABEL_123;
          CurrentLocale_low = (unsigned __int16)Lcid;
          goto LABEL_124;
        case 8:
          LOWORD(CurrentLocale_low) = v115;
          v106 = (unsigned __int16)v115;
          v105[0] = v115;
          if ( (~v5 & 0x80000) != 0 )
            goto LABEL_220;
          if ( NtCurrentTeb() )
          {
            v80 = NtCurrentTeb();
            CurrentLocale_low = LOWORD(v80->CurrentLocale);
            v105[0] = v80->CurrentLocale;
          }
          else
          {
            CurrentLocale_low = v105[0];
          }
          v5 = v112;
          v108 = v112;
          goto LABEL_125;
        case 9:
          LOWORD(CurrentLocale_low) = v115;
          v106 = (unsigned __int16)v115;
          v105[0] = v115;
          v110 = NtQueryDefaultLocale(1u, &v124);
          if ( v110 < 0 )
            break;
          CurrentLocale_low = (unsigned __int16)v124;
          goto LABEL_124;
        case 10:
          LOWORD(CurrentLocale_low) = v115;
          v106 = (unsigned __int16)v115;
          v105[0] = v115;
          v110 = NtQueryDefaultLocale(0, &DefaultLocaleId);
          if ( v110 < 0 || DefaultLocaleId == v124 )
            break;
          CurrentLocale_low = (unsigned __int16)DefaultLocaleId;
          goto LABEL_124;
        case 11:
          CurrentLocale_low = 1033;
          goto LABEL_124;
        case 12:
LABEL_220:
          v5 |= 0x20u;
          v108 = v5;
          v112 = v5;
          break;
        default:
          return 3221225988LL;
      }
LABEL_126:
      if ( (~(_BYTE)v5 & 0x20) == 0 || (unsigned __int16)CurrentLocale_low != v115 )
      {
        v115 = (unsigned __int16)CurrentLocale_low;
        v6 = &v115;
        v131 = (__int64)&v115;
        v143 = &v115;
        v18 = v133;
        v139 = v133;
        goto LABEL_60;
      }
      v65 = v114;
LABEL_129:
      v66 = v123;
    }
    LOWORD(CurrentLocale_low) = v115;
    v106 = (unsigned __int16)v115;
    v105[0] = v115;
    if ( (v5 & 0x20) != 0 )
      goto LABEL_126;
    v105[0] = 0;
    if ( LdrpSetThreadPreferredLangList() )
    {
      v68 = *((unsigned __int16 *)NtCurrentTeb()->MergedPrefLanguages + 2);
      if ( v129 >= (unsigned int)v68 )
      {
        v105[0] = 0;
      }
      else
      {
        v69 = v129;
        GetLCIDFromLangListNodeWithLICCheck(v68, (__int64)NtCurrentTeb()->MergedPrefLanguages, v129, v105, &v118);
        LOWORD(CurrentLocale_low) = v105[0];
        v106 = v105[0];
        if ( v105[0] )
        {
          v129 = v69 + 1;
          --v120;
          v5 = v112;
          v108 = v112;
          goto LABEL_126;
        }
      }
      v5 = v112;
      v108 = v112;
    }
    else
    {
      v105[0] = 0;
    }
LABEL_123:
    CurrentLocale_low = (unsigned __int16)v115;
    goto LABEL_124;
  }
  return result;
}
