/*
 * XREFs of LocalGetAclForString @ 0x140865750
 * Callers:
 *     LocalConvertStringSDToSD_Rev1 @ 0x140863ECC (LocalConvertStringSDToSD_Rev1.c)
 * Callees:
 *     RtlGetAce @ 0x14040BC40 (RtlGetAce.c)
 *     RtlLengthSid @ 0x140456300 (RtlLengthSid.c)
 *     _wcsnicmp @ 0x1404FE4F0 (_wcsnicmp.c)
 *     wcschr @ 0x1404FFD90 (wcschr.c)
 *     wcstoul @ 0x1405007D0 (wcstoul.c)
 *     wcsncpy_s @ 0x140504980 (wcsncpy_s.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     memmove @ 0x1406BFC40 (memmove.c)
 *     RtlAddAccessAllowedObjectAce @ 0x14077FA90 (RtlAddAccessAllowedObjectAce.c)
 *     RtlAddAccessDeniedObjectAce @ 0x14077FB20 (RtlAddAccessDeniedObjectAce.c)
 *     RtlAddAuditAccessAceEx @ 0x14077FDC0 (RtlAddAuditAccessAceEx.c)
 *     RtlAddAuditAccessObjectAce @ 0x14077FE10 (RtlAddAuditAccessObjectAce.c)
 *     SddlAddAccessFilterAce @ 0x1407966D8 (SddlAddAccessFilterAce.c)
 *     SddlAddProcessTrustLabelAce @ 0x140796914 (SddlAddProcessTrustLabelAce.c)
 *     SddlAddScopedPolicyIDAce @ 0x140796A74 (SddlAddScopedPolicyIDAce.c)
 *     SddlpUuidFromString @ 0x140796C80 (SddlpUuidFromString.c)
 *     LocalGetConditionForString @ 0x14085FAE0 (LocalGetConditionForString.c)
 *     LocalpConvertStringSidToSid @ 0x140862418 (LocalpConvertStringSidToSid.c)
 *     SddlpAlloc @ 0x1408638C4 (SddlpAlloc.c)
 *     FContainCallBackAce @ 0x1408667C0 (FContainCallBackAce.c)
 *     LocalGetAceCount @ 0x140866950 (LocalGetAceCount.c)
 *     LookupSidInTable @ 0x140866BD0 (LookupSidInTable.c)
 *     RtlValidSid @ 0x140866F20 (RtlValidSid.c)
 *     RtlNtStatusToDosError @ 0x140867430 (RtlNtStatusToDosError.c)
 *     SddlAddMandatoryAce @ 0x1408674D8 (SddlAddMandatoryAce.c)
 *     RtlCopySid @ 0x140910120 (RtlCopySid.c)
 *     RtlValidAcl @ 0x14091CB10 (RtlValidAcl.c)
 *     RtlAddAce @ 0x14091CC90 (RtlAddAce.c)
 *     RtlpAddKnownAce @ 0x14091DA10 (RtlpAddKnownAce.c)
 *     LocalGetRelativeAttributeForString @ 0x140AAF494 (LocalGetRelativeAttributeForString.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall LocalGetAclForString(wchar_t *Str1, char a2, const void **a3, wchar_t **a4)
{
  unsigned int v4; // edi
  const void **v6; // r13
  wchar_t *v8; // rsi
  unsigned int AceCount; // r14d
  bool v10; // cf
  wchar_t *v11; // rbx
  BOOL v12; // r15d
  wchar_t *v13; // rax
  __int64 v14; // rax
  wchar_t *v16; // rdx
  unsigned int v17; // ebx
  _BYTE *v18; // rax
  NTSTATUS v20; // ebx
  _WORD *v21; // rax
  char v22; // bl
  int v23; // edx
  unsigned int v24; // r8d
  unsigned int v25; // edi
  char *v26; // rbx
  wchar_t *v27; // r15
  const wchar_t **v28; // rbx
  int v29; // esi
  unsigned int v30; // edi
  wchar_t **v31; // rax
  wchar_t *v32; // r15
  unsigned int v33; // ebx
  unsigned int v34; // edi
  wchar_t j; // ax
  wchar_t k; // ax
  __int64 v37; // rax
  char *v38; // r8
  wchar_t *v39; // rsi
  wchar_t *m; // rbx
  int v41; // ecx
  unsigned int v42; // r15d
  unsigned int v43; // edx
  wchar_t ii; // ax
  unsigned int v45; // r13d
  unsigned int v46; // ebx
  ULONG v47; // edi
  ULONG v48; // eax
  __int64 v49; // rdx
  char *v50; // rbx
  char v51; // r15
  char *v52; // rdx
  unsigned int jj; // ecx
  void *v54; // rdi
  char *v55; // r8
  unsigned __int16 v56; // cx
  char v57; // al
  unsigned int v58; // eax
  unsigned int v59; // edi
  _BYTE *v60; // rax
  _BYTE *v61; // rax
  wchar_t v62; // ax
  const wchar_t **v63; // rbx
  unsigned int v64; // edi
  int v65; // eax
  wchar_t **v66; // rax
  unsigned int v67; // edi
  wchar_t *v68; // r15
  unsigned int v69; // r14d
  wchar_t **v70; // rax
  unsigned __int64 v71; // rcx
  NTSTATUS v72; // eax
  char *v73; // rax
  char *v74; // r15
  ULONG v75; // eax
  unsigned int v76; // ebx
  ULONG v77; // eax
  wchar_t v78; // ax
  wint_t *n; // rbx
  unsigned int ConditionForString; // eax
  unsigned int v81; // eax
  int v82; // eax
  int v83; // ecx
  unsigned int v84; // eax
  int v85; // ecx
  wchar_t v86; // ax
  unsigned int v87; // ebx
  _WORD *v88; // rax
  _WORD *v89; // r15
  void *v90; // rcx
  const void **v91; // rax
  char *v92; // rax
  char *v93; // r15
  ULONG v94; // eax
  unsigned int v95; // ebx
  ULONG v96; // eax
  _WORD *v97; // r15
  char v98; // al
  size_t v99; // rbx
  int v100; // edi
  ULONG v101; // eax
  ULONG v102; // eax
  __int64 AceListLength; // [rsp+20h] [rbp-E0h]
  char v104; // [rsp+50h] [rbp-B0h]
  unsigned __int8 v105; // [rsp+51h] [rbp-AFh]
  char v106; // [rsp+52h] [rbp-AEh]
  int v107; // [rsp+54h] [rbp-ACh]
  char *Sid; // [rsp+58h] [rbp-A8h]
  int v110; // [rsp+68h] [rbp-98h]
  size_t Size; // [rsp+6Ch] [rbp-94h] BYREF
  wchar_t *v112; // [rsp+78h] [rbp-88h] BYREF
  PVOID Src; // [rsp+80h] [rbp-80h] BYREF
  unsigned int v114; // [rsp+88h] [rbp-78h] BYREF
  unsigned int v115; // [rsp+90h] [rbp-70h]
  unsigned int v116; // [rsp+94h] [rbp-6Ch]
  int v117; // [rsp+98h] [rbp-68h]
  __int64 i; // [rsp+A0h] [rbp-60h]
  char v119[8]; // [rsp+A8h] [rbp-58h]
  PVOID P; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v121; // [rsp+B8h] [rbp-48h] BYREF
  char *v122; // [rsp+C0h] [rbp-40h] BYREF
  wchar_t *EndPtr; // [rsp+C8h] [rbp-38h] BYREF
  PVOID Ace; // [rsp+D0h] [rbp-30h] BYREF
  int v125; // [rsp+D8h] [rbp-28h]
  unsigned __int16 v126; // [rsp+DCh] [rbp-24h]
  GUID Guid; // [rsp+E0h] [rbp-20h] BYREF
  GUID v128; // [rsp+F0h] [rbp-10h] BYREF
  wchar_t Dst[40]; // [rsp+100h] [rbp+0h] BYREF

  v4 = 0;
  v114 = 0;
  v104 = 0;
  Sid = 0LL;
  v122 = 0LL;
  v6 = a3;
  v125 = 0;
  EndPtr = 0LL;
  v8 = Str1;
  Src = 0LL;
  AceCount = 0;
  Size = 0LL;
  P = 0LL;
  Ace = 0LL;
  v112 = 0LL;
  v126 = 256;
  if ( !Str1 || !a3 || !a4 )
    return 87LL;
  if ( !wcsnicmp(Str1, L"NO_ACCESS_CONTROL", 0x11uLL) )
  {
    *v6 = 0LL;
    *a4 = v8 + 17;
    goto LABEL_26;
  }
  v10 = a2 != 0;
  *a4 = 0LL;
  v11 = v8;
  v12 = 0;
  v110 = 2 - v10;
  if ( !(unsigned int)FContainCallBackAce(v8) )
  {
    *a4 = wcschr(v8, 0x3Au);
LABEL_10:
    v13 = *a4;
    if ( *a4 != v8 )
    {
      if ( v13 )
      {
        v16 = v13 - 1;
      }
      else
      {
        v14 = -1LL;
        while ( v8[++v14] != 0 )
          ;
        v16 = &v8[v14];
      }
      *a4 = v16;
      AceCount = LocalGetAceCount(v8, v16, &v114);
      if ( AceCount )
        goto LABEL_26;
      v17 = v114;
      if ( !v114 )
      {
        v18 = SddlpAlloc(8uLL);
        *v6 = v18;
        if ( v18 )
        {
          *v18 = 2;
          *((_BYTE *)*v6 + 1) = 0;
          *(_DWORD *)((char *)*v6 + 2) = 8;
          *((_WORD *)*v6 + 3) = 0;
        }
        else
        {
          return 8;
        }
        return AceCount;
      }
      v59 = 84 * v114 + 8;
      if ( v59 > 0xFFFF )
        v59 = 0xFFFF;
      v115 = v59;
      v60 = SddlpAlloc(v59);
      *v6 = v60;
      if ( !v60 )
      {
        AceCount = 8;
        goto LABEL_26;
      }
      *v60 = 2;
      v61 = *v6;
      v117 = 8;
      v61[1] = 0;
      *((_WORD *)*v6 + 1) = v59;
      *((_WORD *)*v6 + 2) = 0;
      *((_WORD *)*v6 + 3) = 0;
      v58 = 0;
LABEL_131:
      v116 = v58;
      LODWORD(v121) = AceCount;
      if ( v58 >= v17 )
        goto LABEL_23;
      v105 = 0;
      v107 = 0;
      Guid = 0LL;
      *(_QWORD *)v119 = 0LL;
      v128 = 0LL;
      v62 = *v8;
      for ( i = 0LL; v62 == 32; ++v8 )
        v62 = v8[1];
      if ( v62 == 40 )
      {
        for ( ++v8; *v8 == 32; ++v8 )
          ;
      }
      v63 = (const wchar_t **)&unk_140E08A38;
      v64 = 0;
      v23 = v110;
      while ( 1 )
      {
        if ( (v23 & (_DWORD)v63[1]) == v23 )
        {
          if ( v8 )
          {
            v65 = wcsnicmp(v8, *(v63 - 1), *(unsigned int *)v63);
            v23 = v110;
            if ( !v65 )
              goto LABEL_142;
          }
          else if ( !*((_DWORD *)v63 + 1) )
          {
LABEL_142:
            v66 = &(&off_140E08A30)[3 * v64];
            if ( !v66 )
            {
LABEL_140:
              v21 = *v6;
              AceCount = 1804;
              goto LABEL_54;
            }
            v67 = *((unsigned __int8 *)v66 + 12);
            v106 = *((_BYTE *)v66 + 12);
            v68 = &v8[*((unsigned int *)v66 + 2)];
            if ( *v68 != 59 && *v68 != 32 )
            {
LABEL_71:
              v21 = *v6;
              AceCount = 1336;
              goto LABEL_54;
            }
            v27 = v68 + 1;
            if ( (unsigned __int8)(v67 - 5) <= 3u || (_BYTE)v67 == 11 )
              *(_BYTE *)*v6 = 4;
            for ( ; *v27 == 32; ++v27 )
              ;
            v69 = v67;
LABEL_148:
            v24 = 0;
            if ( v27 != *a4 )
            {
              if ( *v27 != 59 )
              {
                for ( ; *v27 == 32; ++v27 )
                  ;
                v25 = 0;
                v26 = (char *)&unk_140E08924;
                while ( 1 )
                {
                  if ( (v23 & *((_DWORD *)v26 - 1)) == v23 )
                  {
                    if ( *(_DWORD *)v26 )
                    {
                      while ( v24 < *(_DWORD *)v26 )
                      {
                        if ( *(_BYTE *)(v24 + *(_QWORD *)(v26 + 4)) == (_BYTE)v69 )
                          goto LABEL_154;
                        ++v24;
                      }
                    }
                    else
                    {
LABEL_154:
                      if ( !wcsnicmp(v27, *(const wchar_t **)(v26 - 20), *((unsigned int *)v26 - 3)) )
                      {
                        v70 = &(&off_140E08910)[4 * v25];
                        if ( v70 )
                        {
                          v23 = v110;
                          v105 |= *((_BYTE *)v70 + 12);
                          v27 += *((unsigned int *)v70 + 2);
                          goto LABEL_148;
                        }
LABEL_53:
                        v21 = *v6;
                        AceCount = 1004;
LABEL_54:
                        v22 = v104;
LABEL_55:
                        if ( v21 )
                          ExFreePoolWithTag(v21, 0);
                        *v6 = 0LL;
LABEL_25:
                        if ( v22 && Sid )
                          ExFreePoolWithTag(Sid, 0);
LABEL_26:
                        if ( Src )
                          ExFreePoolWithTag(Src, 0);
                        if ( P )
                        {
                          ExFreePoolWithTag(P, 0);
                          return AceCount;
                        }
                        return AceCount;
                      }
                    }
                    v23 = v110;
                    v24 = 0;
                  }
                  ++v25;
                  v26 += 32;
                  if ( v25 >= 9 )
                    goto LABEL_53;
                }
              }
              ++v27;
            }
            for ( ; *v27 == 32; ++v27 )
              ;
            while ( *v27 != 59 )
            {
              for ( ; *v27 == 32; ++v27 )
                ;
              v28 = (const wchar_t **)&unk_140E08BD8;
              v29 = v23;
              if ( (_BYTE)v69 == 17 )
                v29 = 4;
              v30 = 0;
              while ( (v29 & (_DWORD)v28[1]) != v29 || wcsnicmp(v27, *(v28 - 1), *(unsigned int *)v28) )
              {
                ++v30;
                v28 += 3;
                if ( v30 >= 0x1C )
                  goto LABEL_70;
              }
              v31 = &(&off_140E08BD0)[3 * v30];
              if ( v31 )
              {
                v23 = v110;
                v107 |= *((_DWORD *)v31 + 3);
                v27 += *((unsigned int *)v31 + 2);
              }
              else
              {
LABEL_70:
                v107 |= wcstoul(v27, &EndPtr, 0);
                if ( EndPtr == v27 )
                  goto LABEL_71;
                v23 = v110;
                v27 = EndPtr;
              }
            }
            v32 = v27 + 1;
            v33 = 0;
            v34 = v69;
            while ( v33 < 2 )
            {
              for ( j = *v32; j == 32; ++v32 )
                j = v32[1];
              if ( j != 59 )
              {
                if ( (unsigned __int8)(v69 - 5) > 3u && (_BYTE)v69 != 11 )
                  goto LABEL_71;
                wcsncpy_s(Dst, 0x25uLL, v32, 0x24uLL);
                Dst[36] = 0;
                if ( v33 )
                {
                  if ( !SddlpUuidFromString(Dst, &v128) )
                    goto LABEL_278;
                  i = (__int64)&v128;
                }
                else
                {
                  if ( !SddlpUuidFromString(Dst, &Guid) )
                    goto LABEL_278;
                  *(_QWORD *)v119 = &Guid;
                }
                v86 = v32[36];
                v32 += 36;
                if ( v86 != 59 && v86 != 32 )
                {
LABEL_278:
                  AceCount = 1705;
                  goto LABEL_207;
                }
              }
              ++v32;
              ++v33;
            }
            AceCount = v121;
            if ( (_DWORD)v121 )
              goto LABEL_23;
            for ( k = *v32; k == 32; ++v32 )
              k = v32[1];
            v22 = 0;
            v121 = 0LL;
            AceCount = 0;
            v104 = 0;
            if ( !k || !v32[1] )
            {
              v21 = *v6;
              AceCount = 1332;
              goto LABEL_55;
            }
            v112 = v32 + 2;
            v37 = LookupSidInTable(v32, 0LL, AceListLength, 0, (__int64)&v121);
            if ( v37 )
            {
              v38 = *(char **)(v37 + 16);
              Sid = v38;
LABEL_85:
              v39 = v112;
              if ( !v112 || !v38 )
              {
                v21 = *v6;
                AceCount = 1336;
                goto LABEL_55;
              }
              for ( m = v112; *m == 32; ++m )
                ;
              if ( (unsigned __int8)v34 <= 0x15u && (v41 = 2371072, _bittest(&v41, v34)) )
              {
                if ( *m == 59 )
                {
                  v78 = m[1];
                  for ( n = m + 1; v78 == 32; ++n )
                    v78 = n[1];
                  if ( v78 == 40 )
                  {
                    if ( Src )
                    {
                      ExFreePoolWithTag(Src, 0);
                      Src = 0LL;
                    }
                    LODWORD(Size) = 0;
                    if ( P )
                    {
                      ExFreePoolWithTag(P, 0);
                      P = 0LL;
                    }
                    HIDWORD(Size) = 0;
                    if ( (_BYTE)v34 == 18 )
                    {
                      AceCount = LocalGetRelativeAttributeForString(
                                   (_DWORD)n,
                                   (unsigned int)&v112,
                                   (unsigned int)&P,
                                   (unsigned int)&Size + 4,
                                   0LL,
                                   0,
                                   0,
                                   0);
                      if ( AceCount )
                      {
LABEL_207:
                        v21 = *v6;
                        goto LABEL_54;
                      }
                      v39 = v112;
                      v38 = Sid;
                    }
                    else
                    {
                      AceListLength = 0LL;
                      ConditionForString = LocalGetConditionForString(
                                             n,
                                             (__int64)&v112,
                                             (const void **)&Src,
                                             (unsigned int *)&Size);
                      v38 = Sid;
                      AceCount = ConditionForString;
                      v39 = v112;
                    }
                  }
                  else
                  {
                    v39 = n;
                    v112 = n;
                  }
                }
                v42 = Size;
                v43 = HIDWORD(Size);
                if ( !Size )
                  goto LABEL_71;
                if ( AceCount )
                {
                  v21 = *v6;
                  goto LABEL_54;
                }
              }
              else
              {
                v42 = Size;
                v43 = HIDWORD(Size);
              }
              for ( ii = *v39; *v39 == 32; ii = *v39 )
                v112 = ++v39;
              if ( ii != 41 )
                goto LABEL_71;
              v8 = v39 + 1;
              v45 = v34;
              if ( v34 != 3 )
              {
                switch ( v34 )
                {
                  case 0u:
                  case 1u:
                  case 2u:
                  case 0x11u:
                  case 0x13u:
                  case 0x14u:
                    break;
                  case 5u:
                  case 6u:
                  case 7u:
                  case 8u:
                    v46 = 32;
                    if ( !*(_QWORD *)v119 )
                      v46 = 16;
                    if ( i )
                      v46 += 16;
                    goto LABEL_95;
                  case 9u:
                  case 0xAu:
                  case 0xDu:
                  case 0x15u:
                    if ( v42 > 0xFFFFFFFC )
                      goto LABEL_163;
                    v81 = (v42 + 3) & 0xFFFFFFFC;
                    v46 = v81 + 12;
                    if ( v81 + 12 >= v81 )
                      goto LABEL_95;
                    goto LABEL_96;
                  case 0xBu:
                    v82 = 32;
                    if ( !*(_QWORD *)v119 )
                      v82 = 16;
                    v83 = v82 + 16;
                    if ( !i )
                      v83 = v82;
                    if ( v42 > 0xFFFFFFFC )
                    {
LABEL_163:
                      AceCount = 534;
                      goto LABEL_26;
                    }
                    v84 = (v42 + 3) & 0xFFFFFFFC;
                    v46 = v83 + v84;
                    if ( v83 + v84 >= v84 )
                      goto LABEL_95;
                    goto LABEL_96;
                  case 0x12u:
                    v46 = v43 + 12;
                    if ( v43 + 12 >= v43 )
                      goto LABEL_95;
                    goto LABEL_96;
                  default:
                    v6 = a3;
                    AceCount = 1336;
                    v21 = *a3;
                    goto LABEL_54;
                }
              }
              v46 = 12;
LABEL_95:
              v47 = RtlLengthSid(v38) + v46 - 4;
              if ( v47 < v46 )
                goto LABEL_96;
              v48 = v47 + v117;
              v117 = v48;
              if ( v48 < v47 )
                goto LABEL_96;
              v49 = v115;
              if ( v48 <= v115 )
                goto LABEL_99;
              v71 = v47 * (unsigned __int64)(v114 - v116);
              if ( v71 > 0xFFFFFFFF || (v87 = v71 + v115, (unsigned int)v71 + v115 < (unsigned int)v71) )
              {
LABEL_96:
                v6 = a3;
                AceCount = 534;
                v21 = *a3;
                goto LABEL_54;
              }
              v88 = SddlpAlloc(v87);
              v89 = v88;
              v90 = (void *)*a3;
              if ( !v88 )
              {
                if ( v90 )
                  ExFreePoolWithTag(v90, 0);
                v6 = a3;
                v22 = v104;
                *a3 = 0LL;
                if ( v104 == 1 )
                {
                  if ( Sid )
                    ExFreePoolWithTag(Sid, 0);
                  Sid = 0LL;
                  v22 = 0;
                }
                v21 = *a3;
                AceCount = 8;
                goto LABEL_55;
              }
              memmove(v88, *a3, v115);
              v91 = a3;
              v89[1] = v87;
              if ( *a3 )
              {
                ExFreePoolWithTag((PVOID)*a3, 0);
                v91 = a3;
              }
              *v91 = v89;
              v42 = Size;
              v115 = v87;
LABEL_99:
              if ( v45 )
              {
                if ( v45 == 17 )
                {
                  v6 = a3;
                  v54 = Sid;
                  v20 = SddlAddMandatoryAce(*a3, v49, v105, Sid);
                  goto LABEL_115;
                }
                switch ( v45 )
                {
                  case 1u:
                    v6 = a3;
                    v54 = Sid;
                    v20 = RtlpAddKnownAce((int)*a3, 2, v105, v107, Sid, 1);
                    goto LABEL_115;
                  case 2u:
                    v6 = a3;
                    v54 = Sid;
                    v20 = RtlAddAuditAccessAceEx((int)*a3, 2, v105 & 0x3F, v107, Sid, v105 & 0x40, v105 & 0x80);
                    goto LABEL_115;
                  case 5u:
                    v54 = Sid;
                    v6 = a3;
                    v20 = RtlAddAccessAllowedObjectAce((int)*a3, 4, v105, v107, *(__int64 *)v119, i, Sid);
                    goto LABEL_115;
                  case 6u:
                    v54 = Sid;
                    v6 = a3;
                    v20 = RtlAddAccessDeniedObjectAce((int)*a3, 4, v105, v107, *(__int64 *)v119, i, Sid);
                    goto LABEL_115;
                  case 7u:
                    v54 = Sid;
                    v6 = a3;
                    v20 = RtlAddAuditAccessObjectAce(
                            (int)*a3,
                            4,
                            v105,
                            v107,
                            *(__int64 *)v119,
                            i,
                            Sid,
                            v105 & 0x40,
                            v105 & 0x80);
                    goto LABEL_115;
                  case 9u:
                  case 0xAu:
                  case 0xDu:
                    if ( v47 >= 0xFFFF )
                      goto LABEL_21;
                    v73 = (char *)SddlpAlloc(v47);
                    v74 = v73;
                    if ( !v73 )
                    {
                      v20 = -1073741801;
                      goto LABEL_22;
                    }
                    *v73 = v106;
                    v73[1] = v105;
                    *((_DWORD *)v73 + 1) = v107;
                    *((_WORD *)v73 + 1) = v47;
                    v75 = RtlLengthSid(Sid);
                    RtlCopySid(v75, v74 + 8, Sid);
                    if ( (_DWORD)Size )
                    {
                      v76 = Size;
                      v77 = RtlLengthSid(Sid);
                      memmove(&v74[v77 + 8], Src, v76);
                    }
                    v6 = a3;
                    v20 = RtlAddAce((PACL)*a3, 2u, 0xFFFFFFFF, v74, v47);
                    ExFreePoolWithTag(v74, 0);
                    break;
                  case 0xBu:
                    if ( v47 >= 0xFFFF )
                      goto LABEL_21;
                    v6 = a3;
                    v20 = RtlAddAccessAllowedObjectAce((int)*a3, 4, v105, v107, *(__int64 *)v119, i, Sid);
                    if ( v20 < 0 )
                      goto LABEL_22;
                    v20 = RtlGetAce((PACL)*a3, *((unsigned __int16 *)*a3 + 2) - 1, &Ace);
                    if ( v20 < 0 )
                      goto LABEL_22;
                    v97 = Ace;
                    v98 = 9;
                    if ( *(_BYTE *)Ace == 5 )
                      v98 = 11;
                    *(_BYTE *)Ace = v98;
                    v97[1] = v47;
                    if ( !(_DWORD)Size )
                      goto LABEL_299;
                    v99 = (unsigned int)Size;
                    if ( *(_BYTE *)v97 == 11 )
                    {
                      v100 = *((_DWORD *)v97 + 2);
                      v101 = RtlLengthSid(Sid);
                      memmove((char *)&v97[8 * (v100 & 1) + 6 + 4 * (v100 & 2)] + v101, Src, (unsigned int)v99);
LABEL_299:
                      v54 = Sid;
                    }
                    else
                    {
                      v54 = Sid;
                      v102 = RtlLengthSid(Sid);
                      memmove((char *)v97 + v102 + 8, Src, v99);
                    }
                    v57 = v104;
                    goto LABEL_117;
                  case 0x12u:
                    if ( v47 >= 0xFFFF || (v105 & 0xE0) != 0 || v107 )
                      goto LABEL_21;
                    v85 = *(_DWORD *)(Sid + 2) - v125;
                    if ( !v85 )
                      v85 = *((unsigned __int16 *)Sid + 3) - v126;
                    if ( v85 || Sid[1] != 1 || *((_DWORD *)Sid + 2) )
                    {
                      v20 = -1073741705;
                    }
                    else
                    {
                      v92 = (char *)SddlpAlloc(v47);
                      v93 = v92;
                      if ( v92 )
                      {
                        *v92 = v106;
                        *((_DWORD *)v92 + 1) = 0;
                        v92[1] = v105;
                        *((_WORD *)v92 + 1) = v47;
                        v94 = RtlLengthSid(Sid);
                        RtlCopySid(v94, v93 + 8, Sid);
                        if ( HIDWORD(Size) )
                        {
                          v95 = HIDWORD(Size);
                          v96 = RtlLengthSid(Sid);
                          memmove(&v93[v96 + 8], P, v95);
                        }
                        v6 = a3;
                        v20 = RtlAddAce((PACL)*a3, 2u, 0xFFFFFFFF, v93, v47);
                        ExFreePoolWithTag(v93, 0);
                        v57 = v104;
                        v54 = Sid;
                        goto LABEL_116;
                      }
                      v20 = -1073741801;
                    }
                    goto LABEL_22;
                  case 0x13u:
                    v6 = a3;
                    v54 = Sid;
                    v20 = SddlAddScopedPolicyIDAce((__int64)*a3, 0x140000000LL, v105, v107, Sid);
                    goto LABEL_115;
                  case 0x14u:
                    v6 = a3;
                    v54 = Sid;
                    v20 = SddlAddProcessTrustLabelAce(
                            (__int64)*a3,
                            0x140000000LL,
                            v105,
                            (__int64)Sid,
                            AceListLength,
                            v107);
                    goto LABEL_115;
                  case 0x15u:
                    if ( v42 < 0xFFFF )
                    {
                      v6 = a3;
                      v54 = Sid;
                      v20 = SddlAddAccessFilterAce(
                              (__int64)*a3,
                              0x140000000LL,
                              v105,
                              (__int64)Sid,
                              AceListLength,
                              v107,
                              Src,
                              v42);
                      goto LABEL_115;
                    }
LABEL_21:
                    v20 = -1073741705;
                    goto LABEL_22;
                  default:
                    v20 = -1073741811;
                    goto LABEL_22;
                }
              }
              else
              {
                v6 = a3;
                v50 = (char *)*a3;
                if ( !RtlValidSid(Sid) )
                {
                  v20 = -1073741704;
                  goto LABEL_114;
                }
                v51 = *v50;
                if ( (unsigned __int8)*v50 > 4u )
                {
                  v20 = -1073741735;
                  goto LABEL_114;
                }
                if ( (unsigned __int8)v51 <= 2u )
                  v51 = 2;
                if ( (v105 & 0xE0) != 0 && (v105 & 0xC0) != 0 )
                {
                  v20 = -1073741811;
                  goto LABEL_114;
                }
                if ( (unsigned __int8)RtlValidAcl(v50) )
                {
                  v52 = v50 + 8;
                  for ( jj = 0; jj < *((unsigned __int16 *)v50 + 2); ++jj )
                  {
                    if ( v52 >= &v50[*((unsigned __int16 *)v50 + 1)] )
                      goto LABEL_209;
                    v52 += *((unsigned __int16 *)v52 + 1);
                  }
                  v54 = Sid;
                  v55 = &v50[*((unsigned __int16 *)v50 + 1)];
                  if ( v52 > v55 )
                    v52 = 0LL;
                  v56 = 4 * ((unsigned __int8)Sid[1] + 4);
                  if ( v52 && &v52[v56] <= v55 )
                  {
                    v52[1] = v105;
                    *((_WORD *)v52 + 1) = v56;
                    *((_DWORD *)v52 + 1) = v107;
                    *v52 = 0;
                    RtlCopySid(4 * (unsigned __int8)Sid[1] + 8, v52 + 8, Sid);
                    ++*((_WORD *)v50 + 2);
                    *v50 = v51;
                    v20 = 0;
                  }
                  else
                  {
                    v20 = -1073741671;
                  }
LABEL_115:
                  v57 = v104;
LABEL_116:
                  if ( v20 >= 0 )
                  {
LABEL_117:
                    if ( v57 == 1 && v54 )
                      ExFreePoolWithTag(v54, 0);
                    Sid = 0LL;
                    v122 = 0LL;
                    if ( Src )
                    {
                      ExFreePoolWithTag(Src, 0);
                      Src = 0LL;
                    }
                    LODWORD(Size) = 0;
                    if ( P )
                    {
                      ExFreePoolWithTag(P, 0);
                      P = 0LL;
                    }
                    HIDWORD(Size) = 0;
                    if ( *v8 == 40 )
                      ++v8;
                    v17 = v114;
                    v58 = v116 + 1;
                    goto LABEL_131;
                  }
LABEL_22:
                  v6 = a3;
                  AceCount = RtlNtStatusToDosError(v20);
LABEL_23:
                  v21 = *v6;
                  if ( AceCount )
                    goto LABEL_54;
                  v22 = v104;
                  v21[1] = v117;
                  goto LABEL_25;
                }
LABEL_209:
                v20 = -1073741705;
              }
LABEL_114:
              v54 = Sid;
              goto LABEL_115;
            }
            v38 = (char *)v121;
            Sid = (char *)v121;
            if ( !v121 )
            {
              v112 -= 2;
              v72 = LocalpConvertStringSidToSid(v32, (__int64 *)&v122, &v112);
              if ( v72 < 0 )
              {
                AceCount = RtlNtStatusToDosError(v72);
                if ( AceCount )
                {
                  v38 = v122;
                  Sid = v122;
LABEL_178:
                  v104 = v22;
                  if ( !AceCount )
                    goto LABEL_85;
                  goto LABEL_23;
                }
              }
              v38 = v122;
              Sid = v122;
              if ( !v122 )
                goto LABEL_178;
            }
            v22 = 1;
            goto LABEL_178;
          }
        }
        ++v64;
        v63 += 3;
        if ( v64 >= 0x11 )
          goto LABEL_140;
      }
    }
    return 87LL;
  }
  if ( !*v8 )
    goto LABEL_10;
  while ( !*a4 && !v4 )
  {
    switch ( *v11 )
    {
      case '"':
        if ( AceCount <= 1 )
        {
LABEL_49:
          v4 = 1336;
          break;
        }
        v12 = !v12;
        break;
      case '(':
        if ( !v12 )
          ++AceCount;
        break;
      case ')':
        if ( !v12 )
        {
          if ( !AceCount )
            goto LABEL_49;
          --AceCount;
        }
        break;
      default:
        if ( *v11 == 58 && !AceCount )
          *a4 = v11;
        break;
    }
    if ( !*++v11 )
      break;
  }
  if ( v12 || AceCount )
  {
    return 1336;
  }
  else if ( !v4 )
  {
    goto LABEL_10;
  }
  return v4;
}
