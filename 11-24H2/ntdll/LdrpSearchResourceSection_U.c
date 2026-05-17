/*
 * XREFs of LdrpSearchResourceSection_U @ 0x180061FF0
 * Callers:
 *     LdrIsResItemExist @ 0x18005F5C0 (LdrIsResItemExist.c)
 *     LdrpLoadResourceFromAlternativeModule @ 0x18005F740 (LdrpLoadResourceFromAlternativeModule.c)
 *     LdrpGetRcConfig @ 0x180061480 (LdrpGetRcConfig.c)
 *     RtlFindMessage @ 0x180061C50 (RtlFindMessage.c)
 *     LdrpSearchResourceSection_U @ 0x180061FF0 (LdrpSearchResourceSection_U.c)
 *     RtlpFileIsWin32WithRCManifest @ 0x180080844 (RtlpFileIsWin32WithRCManifest.c)
 *     RtlLoadString @ 0x1800976E0 (RtlLoadString.c)
 *     LdrFindResource_U @ 0x1800E7C80 (LdrFindResource_U.c)
 *     LdrFindResourceEx_U @ 0x1800F88E0 (LdrFindResourceEx_U.c)
 *     LdrFindResourceDirectory_U @ 0x180113F30 (LdrFindResourceDirectory_U.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180011260 (RtlAllocateHeap.c)
 *     RtlCultureNameToLCID @ 0x1800330E0 (RtlCultureNameToLCID.c)
 *     RtlImageNtHeaderEx @ 0x1800590F0 (RtlImageNtHeaderEx.c)
 *     LdrRscIsTypeExist @ 0x18005EF00 (LdrRscIsTypeExist.c)
 *     LdrpSetAlternateResourceModuleHandle @ 0x18005F120 (LdrpSetAlternateResourceModuleHandle.c)
 *     LdrpLoadResourceFromAlternativeModule @ 0x18005F740 (LdrpLoadResourceFromAlternativeModule.c)
 *     LdrpGetRcConfig @ 0x180061480 (LdrpGetRcConfig.c)
 *     LdrpGetFromMUIMemCache @ 0x1800615D0 (LdrpGetFromMUIMemCache.c)
 *     GetLCIDFromLangListNodeWithLICCheck @ 0x180061A10 (GetLCIDFromLangListNodeWithLICCheck.c)
 *     LdrpSearchResourceSection_U @ 0x180061FF0 (LdrpSearchResourceSection_U.c)
 *     LdrpAccessResourceDataNoMultipleLanguage @ 0x180063850 (LdrpAccessResourceDataNoMultipleLanguage.c)
 *     RtlAddressInSectionTable @ 0x1800649C0 (RtlAddressInSectionTable.c)
 *     LdrpResGetMappingSize @ 0x1800791F0 (LdrpResGetMappingSize.c)
 *     LdrpSetThreadPreferredLangList @ 0x18007CA30 (LdrpSetThreadPreferredLangList.c)
 *     LdrpGetParentLangId @ 0x1800D1514 (LdrpGetParentLangId.c)
 *     _wcsicmp @ 0x180122C70 (_wcsicmp.c)
 *     wcslen @ 0x1801277D0 (wcslen.c)
 *     wcsncmp @ 0x180127960 (wcsncmp.c)
 *     NtQueryDefaultLocale @ 0x180161F30 (NtQueryDefaultLocale.c)
 *     __security_check_cookie @ 0x1801659C0 (__security_check_cookie.c)
 */

__int64 __fastcall LdrpSearchResourceSection_U(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        unsigned __int64 *a5)
{
  unsigned int v5; // r15d
  __int64 *v6; // r13
  __int64 v7; // r12
  __int64 v8; // rbx
  int v9; // ecx
  unsigned __int16 v10; // si
  unsigned __int64 v11; // rcx
  unsigned int *v12; // rax
  unsigned int *v13; // rdi
  int v14; // eax
  bool v15; // r14
  unsigned __int64 v16; // rsi
  unsigned __int64 v17; // rdi
  int v18; // eax
  __int64 v19; // r9
  __int16 v20; // ax
  __int64 v21; // rax
  __int64 result; // rax
  unsigned __int64 v23; // rcx
  __int64 v24; // rax
  _DWORD *v25; // rdx
  unsigned int v26; // r10d
  unsigned int v27; // r8d
  unsigned int v28; // ecx
  unsigned __int64 v29; // r9
  int CurrentLocale_low; // esi
  unsigned int v31; // r14d
  int v32; // eax
  int v33; // r9d
  __int64 v34; // r12
  unsigned int v35; // eax
  __int64 v36; // rcx
  unsigned __int64 v37; // rcx
  unsigned int v38; // r8d
  int *v39; // r14
  __int64 v40; // rdi
  unsigned __int64 v41; // r10
  unsigned __int64 v42; // r11
  unsigned int *v43; // rax
  unsigned __int16 i; // si
  unsigned int *v45; // r15
  bool v46; // r8
  char v47; // r13
  int v48; // eax
  bool v49; // zf
  __int64 v50; // r13
  bool v51; // r8
  char v52; // si
  int v53; // eax
  unsigned __int64 v54; // r8
  __int64 v55; // rax
  __int64 v56; // rdi
  unsigned __int64 v57; // r8
  __int64 v58; // rax
  __int64 v59; // rdi
  unsigned int v60; // edi
  const wchar_t **v61; // r8
  int v62; // eax
  unsigned int v63; // edi
  unsigned __int64 *v64; // rsi
  const wchar_t **v65; // r13
  unsigned int v66; // ebx
  const wchar_t *v67; // rax
  const wchar_t *v68; // rax
  int v69; // ecx
  __int64 v70; // r9
  unsigned __int16 *v71; // r9
  unsigned int v72; // ecx
  unsigned int v73; // eax
  __int64 v74; // rdx
  struct _TEB *v75; // rax
  _DWORD *RcConfig; // rax
  const wchar_t *v77; // rcx
  size_t v78; // rax
  __int16 v79; // cx
  __int64 Heap; // rax
  int v81; // ecx
  __int64 v82; // r15
  unsigned __int16 *v83; // r15
  unsigned int v84; // ecx
  __int64 v85; // rcx
  unsigned int v86; // eax
  __int64 v87; // rdx
  __int64 v88; // rcx
  unsigned int ResourceFromAlternativeModule; // eax
  unsigned int v90; // r8d
  unsigned int v91; // r9d
  int v92; // eax
  const wchar_t **v93; // r14
  unsigned int v94; // ebx
  unsigned __int64 *v95; // rsi
  int v96; // eax
  int v97; // r8d
  int v98; // eax
  __int64 v99; // r9
  unsigned __int16 v100[2]; // [rsp+40h] [rbp-1C8h] BYREF
  int v101; // [rsp+44h] [rbp-1C4h] BYREF
  char v102; // [rsp+48h] [rbp-1C0h]
  unsigned int v103; // [rsp+4Ch] [rbp-1BCh] BYREF
  bool v104; // [rsp+50h] [rbp-1B8h]
  int v105; // [rsp+54h] [rbp-1B4h]
  unsigned __int16 v106; // [rsp+58h] [rbp-1B0h]
  unsigned int v107; // [rsp+60h] [rbp-1A8h]
  unsigned int v108; // [rsp+68h] [rbp-1A0h]
  unsigned int v109; // [rsp+6Ch] [rbp-19Ch]
  __int64 v110; // [rsp+70h] [rbp-198h] BYREF
  unsigned int *v111; // [rsp+78h] [rbp-190h] BYREF
  char v112; // [rsp+80h] [rbp-188h]
  bool v113; // [rsp+88h] [rbp-180h] BYREF
  unsigned __int16 v114; // [rsp+90h] [rbp-178h]
  int v115; // [rsp+98h] [rbp-170h]
  unsigned __int64 *v116; // [rsp+A0h] [rbp-168h]
  int v117; // [rsp+A8h] [rbp-160h]
  const wchar_t **v118; // [rsp+B0h] [rbp-158h]
  int v119; // [rsp+B8h] [rbp-150h] BYREF
  unsigned __int64 v120; // [rsp+C0h] [rbp-148h] BYREF
  __int64 v121; // [rsp+C8h] [rbp-140h] BYREF
  struct _TEB *v122; // [rsp+D0h] [rbp-138h] BYREF
  int v123; // [rsp+D8h] [rbp-130h]
  unsigned int v124; // [rsp+DCh] [rbp-12Ch]
  __int64 v125; // [rsp+E0h] [rbp-128h]
  __int64 v126; // [rsp+E8h] [rbp-120h]
  unsigned __int64 v127; // [rsp+F0h] [rbp-118h]
  unsigned __int64 v128; // [rsp+F8h] [rbp-110h]
  int v129; // [rsp+100h] [rbp-108h] BYREF
  char *v130; // [rsp+108h] [rbp-100h]
  int v131; // [rsp+110h] [rbp-F8h] BYREF
  int v132; // [rsp+114h] [rbp-F4h]
  unsigned __int64 v133; // [rsp+118h] [rbp-F0h]
  unsigned __int64 v134; // [rsp+120h] [rbp-E8h]
  unsigned int *v135; // [rsp+128h] [rbp-E0h]
  unsigned int *v136; // [rsp+130h] [rbp-D8h]
  char *v137; // [rsp+138h] [rbp-D0h]
  __int64 *v138; // [rsp+140h] [rbp-C8h]
  unsigned __int16 *v139; // [rsp+148h] [rbp-C0h]
  _DWORD *v140; // [rsp+150h] [rbp-B8h]
  __int128 v141; // [rsp+158h] [rbp-B0h] BYREF
  unsigned __int64 v142; // [rsp+168h] [rbp-A0h]
  int *v143; // [rsp+170h] [rbp-98h]
  unsigned int *v144; // [rsp+178h] [rbp-90h]
  __int64 v145; // [rsp+180h] [rbp-88h]
  __int64 v146; // [rsp+188h] [rbp-80h]
  const wchar_t *v147; // [rsp+190h] [rbp-78h] BYREF
  const wchar_t *v148; // [rsp+198h] [rbp-70h]
  const wchar_t *v149; // [rsp+1A0h] [rbp-68h]
  __int64 v150; // [rsp+1A8h] [rbp-60h]
  _QWORD v151[3]; // [rsp+1B0h] [rbp-58h] BYREF

  v5 = a4;
  v103 = a4;
  v108 = a3;
  v6 = (__int64 *)a2;
  v126 = a2;
  v7 = a1;
  v125 = a1;
  v138 = (__int64 *)a2;
  v107 = a4;
  v116 = a5;
  v8 = 0LL;
  v110 = 0LL;
  v113 = 0;
  v118 = (const wchar_t **)a2;
  v104 = 0;
  v121 = 0LL;
  v124 = 0;
  v129 = 0;
  v119 = 0;
  v131 = 0;
  v141 = 0LL;
  if ( a3 < 3 && (a4 & 2) == 0 || a3 > 4 || (a4 & 0x41) != 0 && a3 != 4 || a3 == 4 && (a4 & 0x41) == 0 )
    return 3221225713LL;
  v9 = 3;
  if ( a3 != 4 )
    v9 = a3;
  v109 = v9;
  v117 = v9;
  if ( (~(_BYTE)a4 & 0x10) == 0 || (unsigned int)(v9 - 1) > 2 )
    goto LABEL_23;
  if ( v9 == 3 )
    v10 = *(_WORD *)(a2 + 16);
  else
    v10 = 0;
  v106 = v10;
  v11 = *(_QWORD *)a2;
  if ( (((*(_QWORD *)a2 - 16LL) & 0xFFFFFFFFFFFFFFF7uLL) == 0
     || (v11 & 0xFFFFFFFFFFFF0000uLL) != 0 && !wcsicmp((const wchar_t *)v11, L"MUI"))
    && (~(_BYTE)v5 & 8) != 0
    && (v10 & 0xF3FF) == 0
    && v10 != 3072 )
  {
    v5 |= 0x10u;
    v103 = v5;
    v107 = v5;
    goto LABEL_23;
  }
  v103 = 0;
  v122 = 0LL;
  v123 = 0;
  v101 = 0;
  v12 = LdrpGetFromMUIMemCache(v7, 0, 0LL, 8);
  v13 = v12;
  v111 = v12;
  if ( v12 == (unsigned int *)-1LL )
    goto LABEL_297;
  if ( !v12 )
  {
    v151[0] = L"MUI";
    v151[1] = 1LL;
    v151[2] = 0LL;
    v98 = LdrpSearchResourceSection_U(v7, (unsigned int)v151, 3, 33554480, (__int64)&v122);
    v123 = v98;
    if ( v98 < 0 )
    {
      v13 = 0LL;
      v111 = 0LL;
    }
    else
    {
      v98 = LdrpAccessResourceDataNoMultipleLanguage(v7, v122, &v111, &v101);
      v123 = v98;
      if ( v98 < 0 )
      {
        v13 = 0LL;
        v111 = 0LL;
      }
      else
      {
        v13 = v111;
        if ( *v111 == -20054323 )
        {
          v101 = 0;
        }
        else
        {
          v98 = -1073741701;
          v123 = -1073741701;
          v13 = 0LL;
          v111 = 0LL;
        }
      }
    }
    v99 = -1LL;
    if ( v13 )
      v99 = (__int64)v13;
    LdrpSetAlternateResourceModuleHandle(v7, 0LL, 0LL, v99, 0, 2, v98, 0LL);
  }
  if ( !v13 )
  {
LABEL_297:
    v14 = 0x80000;
    goto LABEL_21;
  }
  if ( (int)LdrRscIsTypeExist(v13, (const wchar_t *)*v6, v5, &v103) < 0 )
  {
    v14 = 393216;
    goto LABEL_21;
  }
  v14 = v103;
  if ( (v13[5] & 0x100) != 0 )
  {
    v14 = v103 | 0x100000;
    v103 |= 0x100000u;
  }
  if ( (v13[4] & 0x10) != 0 )
  {
    v14 |= 0x200000u;
LABEL_21:
    v103 = v14;
  }
  v5 |= v14;
  v103 = v5;
  v107 = v5;
  if ( (v5 & 0x40000) != 0 )
  {
    result = 3221225610LL;
    v105 = -1073741686;
    if ( (v5 & 0x20000) == 0 )
    {
      v147 = (const wchar_t *)*v6;
      if ( v109 < 2 )
        v24 = 0LL;
      else
        v24 = v6[1];
      v148 = (const wchar_t *)v24;
      if ( v109 == 3 )
        v8 = v6[2];
      v149 = (const wchar_t *)v8;
      if ( v108 == 4 )
        v150 = v6[3];
      result = LdrpLoadResourceFromAlternativeModule(v7, (__int64)&v147, v108, v5, v116);
      v105 = result;
    }
    return result;
  }
LABEL_23:
  v15 = 1;
  v112 = 1;
  v16 = v7;
  v142 = v7;
  v120 = 0LL;
  v17 = 0LL;
  v127 = 0LL;
  if ( (v7 & 3) != 0 )
  {
    v15 = (v7 & 1) == 0;
    v112 = v15;
    v16 = v7 & 0xFFFFFFFFFFFFFFFCuLL;
    v142 = v7 & 0xFFFFFFFFFFFFFFFCuLL;
  }
  v18 = RtlImageNtHeaderEx(1, v16, 0LL, &v120);
  if ( v120 )
  {
    v20 = *(_WORD *)(v120 + 24);
    if ( v20 != 267 )
    {
      if ( v20 == 523 && *(_DWORD *)(v120 + 132) > 2u )
      {
        v21 = *(unsigned int *)(v120 + 152);
        if ( (_DWORD)v21 )
        {
          if ( v15 || (unsigned int)v21 < *(_DWORD *)(v120 + 84) )
          {
            v17 = v16 + v21;
            v127 = v16 + v21;
            v18 = 0;
          }
          else
          {
            v17 = RtlAddressInSectionTable(v120, v16, (unsigned int)v21);
            v127 = v17;
            v18 = 0;
            if ( !v17 )
              v18 = -1073741811;
          }
        }
        else
        {
          v18 = -1073741822;
        }
        goto LABEL_32;
      }
LABEL_296:
      v18 = -1073741811;
      goto LABEL_32;
    }
    if ( *(_DWORD *)(v120 + 116) <= 2u )
      goto LABEL_296;
    v19 = *(unsigned int *)(v120 + 136);
    if ( (_DWORD)v19 )
    {
      if ( v15 || (unsigned int)v19 < *(_DWORD *)(v120 + 84) )
      {
        v17 = v16 + v19;
        v127 = v16 + v19;
        v18 = 0;
      }
      else
      {
        v132 = 0;
        v140 = 0LL;
        v25 = (_DWORD *)(*(unsigned __int16 *)(v120 + 20) + v120 + 24);
        v140 = v25;
        v26 = *(unsigned __int16 *)(v120 + 6);
        v27 = 0;
        v132 = 0;
        while ( v27 < v26 )
        {
          v28 = v25[3];
          if ( (unsigned int)v19 >= v28 && (unsigned int)v19 < v25[4] + v28 )
          {
            if ( v25 )
            {
              v17 = v19 + v16 + (unsigned int)v25[5] - (unsigned __int64)(unsigned int)v25[3];
              goto LABEL_292;
            }
            break;
          }
          v25 += 10;
          v140 = v25;
          v132 = ++v27;
        }
        v17 = 0LL;
LABEL_292:
        v127 = v17;
        v18 = 0;
        if ( !v17 )
          v18 = -1073741811;
        v6 = v138;
        v126 = (__int64)v138;
        v5 = v107;
        v103 = v107;
      }
    }
    else
    {
      v18 = -1073741822;
    }
  }
LABEL_32:
  if ( v18 < 0 )
    v17 = 0LL;
  v127 = v17;
  v111 = (unsigned int *)v17;
  if ( !v17 )
    return 3221225609LL;
  LOBYTE(v19) = 1;
  result = LdrpResGetMappingSize(v7, &v121, 256LL, v19);
  v105 = result;
  if ( (int)result >= 0 )
  {
    v134 = v17;
    v110 = 61166LL;
    v115 = 0;
    v29 = 0LL;
    v130 = 0LL;
    v128 = 0LL;
    LOWORD(CurrentLocale_low) = 0;
    v101 = 0;
    v100[0] = 0;
    v106 = 0;
    v119 = 0;
LABEL_56:
    v31 = -1073741308;
    if ( !v17 || (v32 = v117, v23 = (unsigned int)(v117 - 1), --v117, !v32) )
    {
LABEL_111:
      if ( v29 && (v5 & 2) == 0 )
      {
        v64 = v116;
        *v116 = v29;
        if ( !NtCurrentTeb()->ResourceRetValue )
        {
          v122 = NtCurrentTeb();
          Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, 0x18uLL);
          v122->ResourceRetValue = (void *)Heap;
        }
        if ( NtCurrentTeb()->ResourceRetValue )
        {
          *(_QWORD *)NtCurrentTeb()->ResourceRetValue = v7;
          *((_QWORD *)NtCurrentTeb()->ResourceRetValue + 1) = v130;
          *((_QWORD *)NtCurrentTeb()->ResourceRetValue + 2) = v7;
        }
        v31 = 0;
        v105 = 0;
        v5 = v107;
        v60 = v109;
        goto LABEL_146;
      }
      if ( v17 && (v5 & 2) != 0 )
      {
        v64 = v116;
        *v116 = v17;
        v31 = 0;
        v105 = 0;
        v60 = v109;
      }
      else
      {
        v60 = v109;
        if ( v109 - v117 == 3 )
        {
          v105 = -1073741308;
          if ( v128 )
          {
            v130 = 0LL;
            goto LABEL_129;
          }
        }
        else
        {
          if ( v109 - v117 != 1 )
          {
            v64 = v116;
            if ( v109 - v117 == 2 )
            {
              v31 = -1073741685;
              v105 = -1073741685;
            }
            else
            {
              v31 = -1073741811;
              v105 = -1073741811;
            }
            goto LABEL_146;
          }
          v31 = -1073741686;
          v105 = -1073741686;
        }
        v64 = v116;
      }
LABEL_146:
      v65 = v118;
      v66 = v108;
      if ( (v5 & 0x2040000) == 0 && v31 + 1073741686 <= 1 && v60 == 3 )
      {
        v147 = *v118;
        v148 = v118[1];
        v149 = v118[2];
        if ( v108 == 4 )
          v150 = (__int64)v118[3];
        ResourceFromAlternativeModule = LdrpLoadResourceFromAlternativeModule(
                                          v7,
                                          (__int64)&v147,
                                          v108,
                                          v5 | 0x1000000,
                                          v64);
        if ( ResourceFromAlternativeModule != -1073020927 )
        {
          if ( ResourceFromAlternativeModule != -1073020922 )
            v31 = ResourceFromAlternativeModule;
          v105 = v31;
        }
      }
      if ( v31 + 1073741686 <= 1 && (~v5 & 0x20000) != 0 && (~v5 & 0x80000) != 0 && (~(_BYTE)v5 & 0x10) != 0 && v60 == 3 )
      {
        v147 = *v65;
        v148 = v65[1];
        v149 = v65[2];
        if ( v66 == 4 )
          v150 = (__int64)v65[3];
        v31 = LdrpLoadResourceFromAlternativeModule(v7, (__int64)&v147, v66, v5, v64);
        v105 = v31;
      }
      return v31;
    }
    if ( !(_DWORD)v23 && v109 == 3 )
      v128 = v17;
    if ( !v128 )
    {
LABEL_60:
      v33 = *(unsigned __int16 *)(v17 + 14);
      v34 = *(unsigned __int16 *)(v17 + 12);
      v35 = v34 + v33;
      v36 = 0xFFFFFFFFLL;
      if ( (int)v34 + v33 >= (unsigned int)v34 )
        v36 = v35;
      result = v35 < (unsigned int)v34 ? 0xC0000095 : 0;
      v105 = result;
      if ( (int)result < 0 )
        return result;
      v37 = 8 * v36;
      v139 = (unsigned __int16 *)v37;
      v38 = -1;
      if ( v37 <= 0xFFFFFFFF )
        v38 = v37;
      result = 0LL;
      if ( v37 > 0xFFFFFFFF )
        result = 3221225621LL;
      v105 = result;
      if ( (int)result < 0 )
        return result;
      v39 = (int *)(v17 + 16);
      v143 = v39;
      v40 = v125;
      v41 = v121 + (v125 & 0xFFFFFFFFFFFFFFFCuLL);
      v23 = (unsigned __int64)v39 + v38;
      if ( v23 > v41 )
        return 3221225595LL;
      v42 = *v6;
      v122 = (struct _TEB *)v42;
      if ( (v42 & 0xFFFFFFFFFFFF0000uLL) == 0 )
      {
        v39 += 2 * v34;
        v143 = v39;
        LOWORD(v34) = v33;
      }
      if ( (_WORD)v34 )
      {
        if ( v128 && (v5 & 0x20) != 0 )
        {
          v17 = 0LL;
          v134 = 0LL;
          v110 = (unsigned int)*v39;
          v29 = (unsigned __int64)v111 + (unsigned int)v39[1];
          if ( v29 > v41 )
            return 3221225595LL;
          v130 = (char *)v111 + (unsigned int)v39[1];
          v7 = v125;
          v31 = -1073741308;
          goto LABEL_111;
        }
        v144 = (unsigned int *)v39;
        v114 = v34;
        v135 = 0LL;
        v102 = 0;
        v134 = 0LL;
        v130 = 0LL;
        v17 = 0LL;
        v133 = 0LL;
        v29 = 0LL;
        v120 = 0LL;
        v137 = 0LL;
        v43 = (unsigned int *)&v39[2 * (unsigned __int16)v34 - 2];
        v136 = v43;
        for ( i = v34; ; v114 = i )
        {
          if ( v39 > (int *)v43 )
          {
            v7 = v125;
            goto LABEL_107;
          }
          i >>= 1;
          if ( !i )
          {
            v49 = (_WORD)v34 == 0;
            v7 = v125;
            if ( v49 )
              goto LABEL_107;
            v50 = v121;
            v51 = v125 && v121;
            v52 = 1;
            v102 = 1;
            v53 = *v39;
            if ( (v42 & 0xFFFFFFFFFFFF0000uLL) != 0 )
            {
              if ( v53 >= 0 )
              {
                v23 = 0xFFFFFFFFLL;
              }
              else if ( v51
                     && (v88 = (unsigned int)v53,
                         LODWORD(v88) = v53 & 0x7FFFFFFF,
                         (unsigned __int64)v111 + v88 > v121 + (v125 & 0xFFFFFFFFFFFFFFFCuLL)) )
              {
                v52 = 0;
                v102 = 0;
                v23 = 0xFFFFFFFFLL;
              }
              else
              {
                v81 = *v39;
                v82 = (unsigned int)*v39;
                LODWORD(v82) = v82 & 0x7FFFFFFF;
                v83 = (unsigned __int16 *)((char *)v111 + v82);
                if ( v51
                  && ((v146 = 2LL * *v83, v84 = v81 & 0x7FFFFFFF, v84 + (unsigned int)v146 < v84)
                   || (unsigned __int64)v111 + v84 + (unsigned int)v146 > v121 + (v125 & 0xFFFFFFFFFFFFFFFCuLL)) )
                {
                  v52 = 0;
                  v102 = 0;
                  v23 = 0xFFFFFFFFLL;
                }
                else
                {
                  v86 = wcsncmp((const wchar_t *)v42, v83 + 1, *v83);
                  v23 = v86;
                  if ( !v86 )
                  {
                    v87 = -1LL;
                    do
                      ++v87;
                    while ( *((_WORD *)&v122->NtTib.ExceptionList + v87) );
                    if ( v87 != *v83 )
                      v23 = 1LL;
                  }
                  v29 = v120;
                }
              }
            }
            else if ( v53 < 0 )
            {
              v23 = 1LL;
            }
            else
            {
              v23 = (unsigned int)(v42 - v53);
            }
            if ( !v52 )
              return 3221225595LL;
            if ( (_DWORD)v23 )
              goto LABEL_107;
            v23 = (unsigned int)v39[1];
            v54 = v50 + (v7 & 0xFFFFFFFFFFFFFFFCuLL);
            HIDWORD(v55) = HIDWORD(v23);
            if ( (v23 & 0x80000000) != 0LL )
            {
              LODWORD(v55) = v23 & 0x7FFFFFFF;
              if ( (unsigned __int64)v111 + v55 <= v54 )
              {
                v56 = (unsigned int)v23;
                LODWORD(v56) = v23 & 0x7FFFFFFF;
                v17 = (unsigned __int64)v111 + v56;
                v133 = v17;
                goto LABEL_107;
              }
              return 3221225595LL;
            }
            if ( (unsigned __int64)v111 + v23 > v54 )
              return 3221225595LL;
            v29 = (unsigned __int64)v111 + v23;
            v137 = (char *)v111 + v23;
            goto LABEL_107;
          }
          v135 = (unsigned int *)v39;
          if ( (v34 & 1) != 0 )
            v45 = (unsigned int *)&v39[2 * i];
          else
            v45 = (unsigned int *)&v39[2 * i - 2];
          v135 = v45;
          v46 = v125 && v121;
          v47 = 1;
          v102 = 1;
          v48 = *v45;
          if ( (v42 & 0xFFFFFFFFFFFF0000uLL) != 0 )
          {
            if ( v48 >= 0 )
            {
              v23 = 0xFFFFFFFFLL;
            }
            else if ( v46
                   && (v85 = (unsigned int)v48,
                       LODWORD(v85) = v48 & 0x7FFFFFFF,
                       (unsigned __int64)v111 + v85 > v121 + (v125 & 0xFFFFFFFFFFFFFFFCuLL)) )
            {
              v47 = 0;
              v102 = 0;
              v23 = 0xFFFFFFFFLL;
            }
            else
            {
              v69 = *v45;
              v70 = *v45;
              LODWORD(v70) = v70 & 0x7FFFFFFF;
              v71 = (unsigned __int16 *)((char *)v111 + v70);
              v139 = v71;
              if ( v46 )
              {
                v145 = 2LL * *v71;
                v72 = v69 & 0x7FFFFFFF;
                if ( v72 + (unsigned int)v145 < v72
                  || (unsigned __int64)v111 + v72 + (unsigned int)v145 > v121 + (v125 & 0xFFFFFFFFFFFFFFFCuLL) )
                {
                  v47 = 0;
                  v102 = 0;
                  v23 = 0xFFFFFFFFLL;
LABEL_171:
                  v29 = v120;
                  goto LABEL_84;
                }
              }
              v73 = wcsncmp((const wchar_t *)v42, v71 + 1, *v71);
              v23 = v73;
              v42 = (unsigned __int64)v122;
              if ( v73 )
                goto LABEL_171;
              v74 = -1LL;
              do
                ++v74;
              while ( *((_WORD *)&v122->NtTib.ExceptionList + v74) );
              if ( v74 == *v139 )
                goto LABEL_171;
              v23 = 1LL;
              v29 = v120;
            }
          }
          else if ( v48 < 0 )
          {
            v23 = 1LL;
          }
          else
          {
            v23 = (unsigned int)(v42 - v48);
          }
LABEL_84:
          if ( !v47 )
            return 3221225595LL;
          if ( !(_DWORD)v23 )
          {
            v23 = v45[1];
            v7 = v125;
            v57 = v121 + (v125 & 0xFFFFFFFFFFFFFFFCuLL);
            HIDWORD(v58) = HIDWORD(v23);
            if ( (v23 & 0x80000000) != 0LL )
            {
              LODWORD(v58) = v23 & 0x7FFFFFFF;
              if ( (unsigned __int64)v111 + v58 <= v57 )
              {
                v59 = (unsigned int)v23;
                LODWORD(v59) = v23 & 0x7FFFFFFF;
                v17 = (unsigned __int64)v111 + v59;
                v133 = v17;
                goto LABEL_107;
              }
              return 3221225595LL;
            }
            if ( (unsigned __int64)v111 + v23 > v57 )
              return 3221225595LL;
            v17 = 0LL;
            v133 = 0LL;
            v29 = (unsigned __int64)v111 + v23;
            v137 = (char *)v111 + v23;
LABEL_107:
            v134 = v17;
            v130 = (char *)v29;
            v6 = (__int64 *)(v126 + 8);
            v126 = (__int64)v6;
            v138 = v6;
            v5 = v103;
            LOWORD(CurrentLocale_low) = v101;
            goto LABEL_56;
          }
          if ( (v23 & 0x80000000) == 0LL )
          {
            v39 = (int *)(v45 + 2);
            v144 = v45 + 2;
            v43 = v136;
          }
          else
          {
            v43 = v45 - 2;
            v136 = v45 - 2;
            if ( (v34 & 1) == 0 )
              --i;
          }
          LOWORD(v34) = i;
        }
      }
      v90 = v109;
      switch ( v109 - v117 )
      {
        case 1u:
          v92 = -1073741686;
          break;
        case 2u:
          v92 = -1073741685;
          break;
        case 3u:
          v105 = -1073741308;
          return (unsigned int)-1073741308;
        default:
          v91 = -1073741811;
          v105 = -1073741811;
          v94 = v108;
          v95 = v116;
          v93 = v118;
LABEL_277:
          if ( v91 + 1073741686 <= 1
            && (~v5 & 0x20000) != 0
            && (~v5 & 0x80000) != 0
            && (~(_BYTE)v5 & 0x10) != 0
            && v90 == 3 )
          {
            v147 = *v93;
            v148 = v93[1];
            v149 = v93[2];
            if ( v94 == 4 )
              v150 = (__int64)v93[3];
            return (unsigned int)LdrpLoadResourceFromAlternativeModule(v40, (__int64)&v147, v94, v5, v95);
          }
          return v91;
      }
      v105 = v92;
      v103 = v92;
      v93 = v118;
      v94 = v108;
      if ( (v5 & 0x2040000) != 0 || v109 != 3 )
      {
        v95 = v116;
      }
      else
      {
        v147 = *v118;
        v148 = v118[1];
        v149 = v118[2];
        if ( v108 == 4 )
          v150 = (__int64)v118[3];
        v95 = v116;
        v96 = LdrpLoadResourceFromAlternativeModule(v125, (__int64)&v147, v108, v5 | 0x1000000, v116);
        if ( v96 != -1073020927 )
        {
          v97 = v103;
          if ( v96 != -1073020922 )
            v97 = v96;
          v103 = v97;
          v105 = v97;
        }
        v90 = v109;
      }
      v91 = v103;
      goto LABEL_277;
    }
    LOWORD(CurrentLocale_low) = 0;
    v101 = 0;
    v100[0] = 0;
    v61 = v118;
    v106 = *((_WORD *)v118 + 8);
    v104 = (v106 & 0x3FF) == 0;
    v60 = v109;
    while ( 1 )
    {
      v62 = v115++;
      if ( v62 == 6 )
        break;
      if ( !v62 )
      {
        if ( v106 )
        {
          CurrentLocale_low = (unsigned __int16)v110;
          if ( (v5 & 0x80000) != 0 )
            LOWORD(CurrentLocale_low) = v106;
        }
        else
        {
LABEL_181:
          CurrentLocale_low = 0;
        }
LABEL_124:
        v100[0] = CurrentLocale_low;
LABEL_125:
        v101 = CurrentLocale_low;
        goto LABEL_126;
      }
      switch ( v62 )
      {
        case 1:
          LOBYTE(v23) = (~v5 & 0x20000) != 0 && (~v5 & 0x80000) != 0;
          if ( ((unsigned __int8)v23 & ((~(_BYTE)v5 & 0x10) != 0)) == 0 )
            goto LABEL_123;
          v147 = *v61;
          if ( v60 < 2 )
            v67 = 0LL;
          else
            v67 = v61[1];
          v148 = v67;
          if ( v60 == 3 )
            v68 = v61[2];
          else
            v68 = 0LL;
          v149 = v68;
          if ( v108 == 4 )
            v150 = (__int64)v61[3];
          result = LdrpLoadResourceFromAlternativeModule(v7, (__int64)&v147, v108, v5, v116);
          v105 = result;
          if ( (int)result < 0 )
            goto LABEL_123;
          return result;
        case 2:
          CurrentLocale_low = v106;
          if ( v104 )
            LOWORD(CurrentLocale_low) = v110;
          goto LABEL_124;
        case 3:
          if ( (v5 & 4) != 0 )
            return 3221225988LL;
          if ( v104 )
            goto LABEL_123;
          if ( (int)LdrpGetParentLangId((unsigned __int16)CurrentLocale_low, v100, v61, 1023LL) < 0 )
            goto LABEL_181;
          LOWORD(CurrentLocale_low) = v100[0];
          v101 = v100[0];
          if ( v100[0] )
            --v115;
          break;
        case 4:
          if ( v104 )
            goto LABEL_123;
          CurrentLocale_low = v106;
          LOWORD(CurrentLocale_low) = v106 & 0x3FF;
          goto LABEL_124;
        case 5:
          if ( v104 )
            goto LABEL_123;
          return 3221225988LL;
        case 7:
          if ( (~v5 & 0x80000) == 0 )
            goto LABEL_123;
          RcConfig = (_DWORD *)LdrpGetRcConfig(v7, 0xFFFFFFFFLL, 0, 1);
          if ( !RcConfig )
            goto LABEL_123;
          if ( *RcConfig != -20054323 )
            goto LABEL_123;
          v23 = (unsigned int)RcConfig[31];
          if ( !(_DWORD)v23 )
            goto LABEL_123;
          v49 = (_DWORD *)((char *)RcConfig + v23) == 0LL;
          v77 = (const wchar_t *)((char *)RcConfig + v23);
          v126 = 0LL;
          *(_QWORD *)&v141 = 0LL;
          *((_QWORD *)&v141 + 1) = v77;
          if ( !v49 )
          {
            v78 = 2 * wcslen(v77);
            v126 = v78;
            v79 = v78;
            if ( v78 >= 0xFFFE )
            {
              LOWORD(v78) = -4;
              v126 = 65532LL;
              v79 = -4;
            }
            LOWORD(v141) = v78;
            WORD1(v141) = v79 + 2;
          }
          if ( !RtlCultureNameToLCID((unsigned __int16 *)&v141, &v129) )
            goto LABEL_123;
          CurrentLocale_low = (unsigned __int16)v129;
          goto LABEL_124;
        case 8:
          LOWORD(CurrentLocale_low) = v110;
          v101 = (unsigned __int16)v110;
          v100[0] = v110;
          if ( (~v5 & 0x80000) != 0 )
            goto LABEL_220;
          if ( NtCurrentTeb() )
          {
            v75 = NtCurrentTeb();
            CurrentLocale_low = LOWORD(v75->CurrentLocale);
            v100[0] = v75->CurrentLocale;
          }
          else
          {
            CurrentLocale_low = v100[0];
          }
          v5 = v107;
          v103 = v107;
          goto LABEL_125;
        case 9:
          LOWORD(CurrentLocale_low) = v110;
          v101 = (unsigned __int16)v110;
          v100[0] = v110;
          LOBYTE(v23) = 1;
          v105 = NtQueryDefaultLocale(v23, &v119);
          if ( v105 < 0 )
            break;
          CurrentLocale_low = (unsigned __int16)v119;
          goto LABEL_124;
        case 10:
          LOWORD(CurrentLocale_low) = v110;
          v101 = (unsigned __int16)v110;
          v100[0] = v110;
          v105 = NtQueryDefaultLocale(0LL, &v131);
          if ( v105 < 0 || v131 == v119 )
            break;
          CurrentLocale_low = (unsigned __int16)v131;
          goto LABEL_124;
        case 11:
          CurrentLocale_low = 1033;
          goto LABEL_124;
        case 12:
LABEL_220:
          v5 |= 0x20u;
          v103 = v5;
          v107 = v5;
          break;
        default:
          return 3221225988LL;
      }
LABEL_126:
      if ( (~(_BYTE)v5 & 0x20) == 0 || (unsigned __int16)CurrentLocale_low != v110 )
      {
        v110 = (unsigned __int16)CurrentLocale_low;
        v6 = &v110;
        v126 = (__int64)&v110;
        v138 = &v110;
        v17 = v128;
        v134 = v128;
        goto LABEL_60;
      }
      v60 = v109;
LABEL_129:
      v61 = v118;
    }
    LOWORD(CurrentLocale_low) = v110;
    v101 = (unsigned __int16)v110;
    v100[0] = v110;
    if ( (v5 & 0x20) != 0 )
      goto LABEL_126;
    v100[0] = 0;
    if ( (unsigned __int8)LdrpSetThreadPreferredLangList(v23, 0xFFFFFFFFLL, v61, 1023LL) )
    {
      v23 = *((unsigned __int16 *)NtCurrentTeb()->MergedPrefLanguages + 2);
      if ( v124 >= (unsigned int)v23 )
      {
        v100[0] = 0;
      }
      else
      {
        v63 = v124;
        GetLCIDFromLangListNodeWithLICCheck(v23, (__int64)NtCurrentTeb()->MergedPrefLanguages, v124, v100, &v113);
        LOWORD(CurrentLocale_low) = v100[0];
        v101 = v100[0];
        if ( v100[0] )
        {
          v124 = v63 + 1;
          --v115;
          v5 = v107;
          v103 = v107;
          goto LABEL_126;
        }
      }
      v5 = v107;
      v103 = v107;
    }
    else
    {
      v100[0] = 0;
    }
LABEL_123:
    CurrentLocale_low = (unsigned __int16)v110;
    goto LABEL_124;
  }
  return result;
}
