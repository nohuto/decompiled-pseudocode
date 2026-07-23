/*
 * XREFs of LocalGetAclForString @ 0x140869D60
 * Callers:
 *     LocalConvertStringSDToSD_Rev1 @ 0x1408684DC (LocalConvertStringSDToSD_Rev1.c)
 * Callees:
 *     RtlGetAce @ 0x140404120 (RtlGetAce.c)
 *     RtlLengthSid @ 0x14044B2D0 (RtlLengthSid.c)
 *     _wcsnicmp @ 0x1404FBDB0 (_wcsnicmp.c)
 *     wcschr @ 0x1404FD650 (wcschr.c)
 *     wcstoul @ 0x1404FE090 (wcstoul.c)
 *     wcsncpy_s @ 0x140502240 (wcsncpy_s.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     RtlAddAccessAllowedObjectAce @ 0x14077F9C0 (RtlAddAccessAllowedObjectAce.c)
 *     RtlAddAccessDeniedObjectAce @ 0x14077FA50 (RtlAddAccessDeniedObjectAce.c)
 *     RtlAddAuditAccessAceEx @ 0x14077FCF0 (RtlAddAuditAccessAceEx.c)
 *     RtlAddAuditAccessObjectAce @ 0x14077FD40 (RtlAddAuditAccessObjectAce.c)
 *     SddlAddAccessFilterAce @ 0x1407967E8 (SddlAddAccessFilterAce.c)
 *     SddlAddProcessTrustLabelAce @ 0x140796A24 (SddlAddProcessTrustLabelAce.c)
 *     SddlAddScopedPolicyIDAce @ 0x140796B84 (SddlAddScopedPolicyIDAce.c)
 *     SddlpUuidFromString @ 0x140796D90 (SddlpUuidFromString.c)
 *     LocalGetConditionForString @ 0x1408640EC (LocalGetConditionForString.c)
 *     LocalpConvertStringSidToSid @ 0x140866A28 (LocalpConvertStringSidToSid.c)
 *     SddlpAlloc @ 0x140867ED4 (SddlpAlloc.c)
 *     FContainCallBackAce @ 0x14086ADD0 (FContainCallBackAce.c)
 *     LocalGetAceCount @ 0x14086AF60 (LocalGetAceCount.c)
 *     LookupSidInTable @ 0x14086B1E0 (LookupSidInTable.c)
 *     RtlValidSid @ 0x14086B530 (RtlValidSid.c)
 *     RtlNtStatusToDosError @ 0x14086B8C0 (RtlNtStatusToDosError.c)
 *     RtlCopySid @ 0x1408E7870 (RtlCopySid.c)
 *     RtlValidAcl @ 0x140910580 (RtlValidAcl.c)
 *     RtlAddAce @ 0x140910700 (RtlAddAce.c)
 *     RtlpAddKnownAce @ 0x140911480 (RtlpAddKnownAce.c)
 *     SddlAddMandatoryAce @ 0x140911D60 (SddlAddMandatoryAce.c)
 *     LocalGetRelativeAttributeForString @ 0x140AAA374 (LocalGetRelativeAttributeForString.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
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
  wchar_t i; // ax
  wchar_t j; // ax
  __int64 v37; // rax
  char *v38; // r8
  wchar_t *v39; // rsi
  wchar_t *k; // rbx
  int v41; // ecx
  unsigned int v42; // r15d
  unsigned int v43; // edx
  wchar_t n; // ax
  unsigned int v45; // r13d
  unsigned int v46; // ebx
  ULONG v47; // edi
  ULONG v48; // eax
  ACL *v49; // rbx
  char AclRevision; // r15
  ACL *v51; // rdx
  unsigned int ii; // ecx
  void *v53; // rdi
  ACL *v54; // r8
  USHORT v55; // cx
  char v56; // al
  unsigned int v57; // eax
  unsigned int v58; // edi
  _BYTE *v59; // rax
  _BYTE *v60; // rax
  wchar_t v61; // ax
  const wchar_t **v62; // rbx
  unsigned int v63; // edi
  int v64; // eax
  wchar_t **v65; // rax
  unsigned int v66; // edi
  wchar_t *v67; // r15
  unsigned int v68; // r14d
  wchar_t **v69; // rax
  unsigned __int64 v70; // rcx
  NTSTATUS v71; // eax
  char *v72; // rax
  char *v73; // r15
  ULONG v74; // eax
  unsigned int v75; // ebx
  ULONG v76; // eax
  wchar_t v77; // ax
  wint_t *m; // rbx
  unsigned int ConditionForString; // eax
  unsigned int v80; // eax
  int v81; // eax
  int v82; // ecx
  unsigned int v83; // eax
  int v84; // ecx
  wchar_t v85; // ax
  unsigned int v86; // ebx
  _WORD *v87; // rax
  _WORD *v88; // r15
  void *v89; // rcx
  const void **v90; // rax
  char *v91; // rax
  char *v92; // r15
  ULONG v93; // eax
  unsigned int v94; // ebx
  ULONG v95; // eax
  _WORD *v96; // r15
  char v97; // al
  size_t v98; // rbx
  int v99; // edi
  ULONG v100; // eax
  ULONG v101; // eax
  int AceListLength; // [rsp+20h] [rbp-E0h]
  char v103; // [rsp+50h] [rbp-B0h]
  UCHAR v104; // [rsp+51h] [rbp-AFh]
  char v105; // [rsp+52h] [rbp-AEh]
  ACCESS_MASK AccessMask; // [rsp+54h] [rbp-ACh]
  char *Sid; // [rsp+58h] [rbp-A8h]
  int v109; // [rsp+68h] [rbp-98h]
  size_t Size; // [rsp+6Ch] [rbp-94h] BYREF
  wchar_t *v111; // [rsp+78h] [rbp-88h] BYREF
  PVOID Src; // [rsp+80h] [rbp-80h] BYREF
  unsigned int v113; // [rsp+88h] [rbp-78h] BYREF
  unsigned int v114; // [rsp+90h] [rbp-70h]
  unsigned int v115; // [rsp+94h] [rbp-6Ch]
  int v116; // [rsp+98h] [rbp-68h]
  PGUID InheritedObjectTypeGuid; // [rsp+A0h] [rbp-60h]
  PGUID ObjectTypeGuid; // [rsp+A8h] [rbp-58h]
  PVOID P; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v120; // [rsp+B8h] [rbp-48h] BYREF
  char *v121; // [rsp+C0h] [rbp-40h] BYREF
  wchar_t *EndPtr; // [rsp+C8h] [rbp-38h] BYREF
  PVOID Ace; // [rsp+D0h] [rbp-30h] BYREF
  int v124; // [rsp+D8h] [rbp-28h]
  unsigned __int16 v125; // [rsp+DCh] [rbp-24h]
  GUID Guid; // [rsp+E0h] [rbp-20h] BYREF
  GUID v127; // [rsp+F0h] [rbp-10h] BYREF
  wchar_t Dst[40]; // [rsp+100h] [rbp+0h] BYREF

  v4 = 0;
  v113 = 0;
  v103 = 0;
  Sid = 0LL;
  v121 = 0LL;
  v6 = a3;
  v124 = 0;
  EndPtr = 0LL;
  v8 = Str1;
  Src = 0LL;
  AceCount = 0;
  Size = 0LL;
  P = 0LL;
  Ace = 0LL;
  v111 = 0LL;
  v125 = 256;
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
  v109 = 2 - v10;
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
      AceCount = LocalGetAceCount(v8, v16, &v113);
      if ( AceCount )
        goto LABEL_26;
      v17 = v113;
      if ( !v113 )
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
      v58 = 84 * v113 + 8;
      if ( v58 > 0xFFFF )
        v58 = 0xFFFF;
      v114 = v58;
      v59 = SddlpAlloc(v58);
      *v6 = v59;
      if ( !v59 )
      {
        AceCount = 8;
        goto LABEL_26;
      }
      *v59 = 2;
      v60 = *v6;
      v116 = 8;
      v60[1] = 0;
      *((_WORD *)*v6 + 1) = v58;
      *((_WORD *)*v6 + 2) = 0;
      *((_WORD *)*v6 + 3) = 0;
      v57 = 0;
LABEL_131:
      v115 = v57;
      LODWORD(v120) = AceCount;
      if ( v57 >= v17 )
        goto LABEL_23;
      v104 = 0;
      AccessMask = 0;
      Guid = 0LL;
      ObjectTypeGuid = 0LL;
      v127 = 0LL;
      v61 = *v8;
      for ( InheritedObjectTypeGuid = 0LL; v61 == 32; ++v8 )
        v61 = v8[1];
      if ( v61 == 40 )
      {
        for ( ++v8; *v8 == 32; ++v8 )
          ;
      }
      v62 = (const wchar_t **)&unk_140E08AA8;
      v63 = 0;
      v23 = v109;
      while ( 1 )
      {
        if ( (v23 & (_DWORD)v62[1]) == v23 )
        {
          if ( v8 )
          {
            v64 = wcsnicmp(v8, *(v62 - 1), *(unsigned int *)v62);
            v23 = v109;
            if ( !v64 )
              goto LABEL_142;
          }
          else if ( !*((_DWORD *)v62 + 1) )
          {
LABEL_142:
            v65 = &(&off_140E08AA0)[3 * v63];
            if ( !v65 )
            {
LABEL_140:
              v21 = *v6;
              AceCount = 1804;
              goto LABEL_54;
            }
            v66 = *((unsigned __int8 *)v65 + 12);
            v105 = *((_BYTE *)v65 + 12);
            v67 = &v8[*((unsigned int *)v65 + 2)];
            if ( *v67 != 59 && *v67 != 32 )
            {
LABEL_71:
              v21 = *v6;
              AceCount = 1336;
              goto LABEL_54;
            }
            v27 = v67 + 1;
            if ( (unsigned __int8)(v66 - 5) <= 3u || (_BYTE)v66 == 11 )
              *(_BYTE *)*v6 = 4;
            for ( ; *v27 == 32; ++v27 )
              ;
            v68 = v66;
LABEL_148:
            v24 = 0;
            if ( v27 != *a4 )
            {
              if ( *v27 != 59 )
              {
                for ( ; *v27 == 32; ++v27 )
                  ;
                v25 = 0;
                v26 = (char *)&unk_140E08994;
                while ( 1 )
                {
                  if ( (v23 & *((_DWORD *)v26 - 1)) == v23 )
                  {
                    if ( *(_DWORD *)v26 )
                    {
                      while ( v24 < *(_DWORD *)v26 )
                      {
                        if ( *(_BYTE *)(v24 + *(_QWORD *)(v26 + 4)) == (_BYTE)v68 )
                          goto LABEL_154;
                        ++v24;
                      }
                    }
                    else
                    {
LABEL_154:
                      if ( !wcsnicmp(v27, *(const wchar_t **)(v26 - 20), *((unsigned int *)v26 - 3)) )
                      {
                        v69 = &(&off_140E08980)[4 * v25];
                        if ( v69 )
                        {
                          v23 = v109;
                          v104 |= *((_BYTE *)v69 + 12);
                          v27 += *((unsigned int *)v69 + 2);
                          goto LABEL_148;
                        }
LABEL_53:
                        v21 = *v6;
                        AceCount = 1004;
LABEL_54:
                        v22 = v103;
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
                    v23 = v109;
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
              v28 = (const wchar_t **)&unk_140E08C48;
              v29 = v23;
              if ( (_BYTE)v68 == 17 )
                v29 = 4;
              v30 = 0;
              while ( (v29 & (_DWORD)v28[1]) != v29 || wcsnicmp(v27, *(v28 - 1), *(unsigned int *)v28) )
              {
                ++v30;
                v28 += 3;
                if ( v30 >= 0x1C )
                  goto LABEL_70;
              }
              v31 = &(&off_140E08C40)[3 * v30];
              if ( v31 )
              {
                v23 = v109;
                AccessMask |= *((_DWORD *)v31 + 3);
                v27 += *((unsigned int *)v31 + 2);
              }
              else
              {
LABEL_70:
                AccessMask |= wcstoul(v27, &EndPtr, 0);
                if ( EndPtr == v27 )
                  goto LABEL_71;
                v23 = v109;
                v27 = EndPtr;
              }
            }
            v32 = v27 + 1;
            v33 = 0;
            v34 = v68;
            while ( v33 < 2 )
            {
              for ( i = *v32; i == 32; ++v32 )
                i = v32[1];
              if ( i != 59 )
              {
                if ( (unsigned __int8)(v68 - 5) > 3u && (_BYTE)v68 != 11 )
                  goto LABEL_71;
                wcsncpy_s(Dst, 0x25uLL, v32, 0x24uLL);
                Dst[36] = 0;
                if ( v33 )
                {
                  if ( !SddlpUuidFromString(Dst, &v127) )
                    goto LABEL_278;
                  InheritedObjectTypeGuid = &v127;
                }
                else
                {
                  if ( !SddlpUuidFromString(Dst, &Guid) )
                    goto LABEL_278;
                  ObjectTypeGuid = &Guid;
                }
                v85 = v32[36];
                v32 += 36;
                if ( v85 != 59 && v85 != 32 )
                {
LABEL_278:
                  AceCount = 1705;
                  goto LABEL_207;
                }
              }
              ++v32;
              ++v33;
            }
            AceCount = v120;
            if ( (_DWORD)v120 )
              goto LABEL_23;
            for ( j = *v32; j == 32; ++v32 )
              j = v32[1];
            v22 = 0;
            v120 = 0LL;
            AceCount = 0;
            v103 = 0;
            if ( !j || !v32[1] )
            {
              v21 = *v6;
              AceCount = 1332;
              goto LABEL_55;
            }
            v111 = v32 + 2;
            v37 = LookupSidInTable(v32, 0LL, AceListLength, 0, (__int64)&v120);
            if ( v37 )
            {
              v38 = *(char **)(v37 + 16);
              Sid = v38;
LABEL_85:
              v39 = v111;
              if ( !v111 || !v38 )
              {
                v21 = *v6;
                AceCount = 1336;
                goto LABEL_55;
              }
              for ( k = v111; *k == 32; ++k )
                ;
              if ( (unsigned __int8)v34 <= 0x15u && (v41 = 2371072, _bittest(&v41, v34)) )
              {
                if ( *k == 59 )
                {
                  v77 = k[1];
                  for ( m = k + 1; v77 == 32; ++m )
                    v77 = m[1];
                  if ( v77 == 40 )
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
                                   (_DWORD)m,
                                   (unsigned int)&v111,
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
                      v39 = v111;
                      v38 = Sid;
                    }
                    else
                    {
                      AceListLength = 0;
                      ConditionForString = LocalGetConditionForString(
                                             m,
                                             (__int64)&v111,
                                             (const void **)&Src,
                                             (unsigned int *)&Size);
                      v38 = Sid;
                      AceCount = ConditionForString;
                      v39 = v111;
                    }
                  }
                  else
                  {
                    v39 = m;
                    v111 = m;
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
              for ( n = *v39; *v39 == 32; n = *v39 )
                v111 = ++v39;
              if ( n != 41 )
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
                    if ( !ObjectTypeGuid )
                      v46 = 16;
                    if ( InheritedObjectTypeGuid )
                      v46 += 16;
                    goto LABEL_95;
                  case 9u:
                  case 0xAu:
                  case 0xDu:
                  case 0x15u:
                    if ( v42 > 0xFFFFFFFC )
                      goto LABEL_163;
                    v80 = (v42 + 3) & 0xFFFFFFFC;
                    v46 = v80 + 12;
                    if ( v80 + 12 >= v80 )
                      goto LABEL_95;
                    goto LABEL_96;
                  case 0xBu:
                    v81 = 32;
                    if ( !ObjectTypeGuid )
                      v81 = 16;
                    v82 = v81 + 16;
                    if ( !InheritedObjectTypeGuid )
                      v82 = v81;
                    if ( v42 > 0xFFFFFFFC )
                    {
LABEL_163:
                      AceCount = 534;
                      goto LABEL_26;
                    }
                    v83 = (v42 + 3) & 0xFFFFFFFC;
                    v46 = v82 + v83;
                    if ( v82 + v83 >= v83 )
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
              v48 = v47 + v116;
              v116 = v48;
              if ( v48 < v47 )
                goto LABEL_96;
              if ( v48 <= v114 )
                goto LABEL_99;
              v70 = v47 * (unsigned __int64)(v113 - v115);
              if ( v70 > 0xFFFFFFFF || (v86 = v70 + v114, (unsigned int)v70 + v114 < (unsigned int)v70) )
              {
LABEL_96:
                v6 = a3;
                AceCount = 534;
                v21 = *a3;
                goto LABEL_54;
              }
              v87 = SddlpAlloc(v86);
              v88 = v87;
              v89 = (void *)*a3;
              if ( !v87 )
              {
                if ( v89 )
                  ExFreePoolWithTag(v89, 0);
                v6 = a3;
                v22 = v103;
                *a3 = 0LL;
                if ( v103 == 1 )
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
              memmove(v87, *a3, v114);
              v90 = a3;
              v88[1] = v86;
              if ( *a3 )
              {
                ExFreePoolWithTag((PVOID)*a3, 0);
                v90 = a3;
              }
              *v90 = v88;
              v42 = Size;
              v114 = v86;
LABEL_99:
              if ( v45 )
              {
                if ( v45 == 17 )
                {
                  v6 = a3;
                  v53 = Sid;
                  v20 = SddlAddMandatoryAce((PACL)*a3, AceListLength, AccessMask);
                  goto LABEL_115;
                }
                switch ( v45 )
                {
                  case 1u:
                    v6 = a3;
                    v53 = Sid;
                    v20 = RtlpAddKnownAce((int)*a3, 2, v104, AccessMask, Sid, 1);
                    goto LABEL_115;
                  case 2u:
                    v6 = a3;
                    v53 = Sid;
                    v20 = RtlAddAuditAccessAceEx((PACL)*a3, 2u, v104 & 0x3F, AccessMask, Sid, v104 & 0x40, v104 & 0x80);
                    goto LABEL_115;
                  case 5u:
                    v53 = Sid;
                    v6 = a3;
                    v20 = RtlAddAccessAllowedObjectAce(
                            (PACL)*a3,
                            4u,
                            v104,
                            AccessMask,
                            ObjectTypeGuid,
                            InheritedObjectTypeGuid,
                            Sid);
                    goto LABEL_115;
                  case 6u:
                    v53 = Sid;
                    v6 = a3;
                    v20 = RtlAddAccessDeniedObjectAce(
                            (PACL)*a3,
                            4u,
                            v104,
                            AccessMask,
                            ObjectTypeGuid,
                            InheritedObjectTypeGuid,
                            Sid);
                    goto LABEL_115;
                  case 7u:
                    v53 = Sid;
                    v6 = a3;
                    v20 = RtlAddAuditAccessObjectAce(
                            (PACL)*a3,
                            4u,
                            v104,
                            AccessMask,
                            ObjectTypeGuid,
                            InheritedObjectTypeGuid,
                            Sid,
                            v104 & 0x40,
                            v104 & 0x80);
                    goto LABEL_115;
                  case 9u:
                  case 0xAu:
                  case 0xDu:
                    if ( v47 >= 0xFFFF )
                      goto LABEL_21;
                    v72 = (char *)SddlpAlloc(v47);
                    v73 = v72;
                    if ( !v72 )
                    {
                      v20 = -1073741801;
                      goto LABEL_22;
                    }
                    *v72 = v105;
                    v72[1] = v104;
                    *((_DWORD *)v72 + 1) = AccessMask;
                    *((_WORD *)v72 + 1) = v47;
                    v74 = RtlLengthSid(Sid);
                    RtlCopySid(v74, v73 + 8, Sid);
                    if ( (_DWORD)Size )
                    {
                      v75 = Size;
                      v76 = RtlLengthSid(Sid);
                      memmove(&v73[v76 + 8], Src, v75);
                    }
                    v6 = a3;
                    v20 = RtlAddAce((PACL)*a3, 2u, 0xFFFFFFFF, v73, v47);
                    ExFreePoolWithTag(v73, 0);
                    break;
                  case 0xBu:
                    if ( v47 >= 0xFFFF )
                      goto LABEL_21;
                    v6 = a3;
                    v20 = RtlAddAccessAllowedObjectAce(
                            (PACL)*a3,
                            4u,
                            v104,
                            AccessMask,
                            ObjectTypeGuid,
                            InheritedObjectTypeGuid,
                            Sid);
                    if ( v20 < 0 )
                      goto LABEL_22;
                    v20 = RtlGetAce((PACL)*a3, *((unsigned __int16 *)*a3 + 2) - 1, &Ace);
                    if ( v20 < 0 )
                      goto LABEL_22;
                    v96 = Ace;
                    v97 = 9;
                    if ( *(_BYTE *)Ace == 5 )
                      v97 = 11;
                    *(_BYTE *)Ace = v97;
                    v96[1] = v47;
                    if ( !(_DWORD)Size )
                      goto LABEL_299;
                    v98 = (unsigned int)Size;
                    if ( *(_BYTE *)v96 == 11 )
                    {
                      v99 = *((_DWORD *)v96 + 2);
                      v100 = RtlLengthSid(Sid);
                      memmove((char *)&v96[8 * (v99 & 1) + 6 + 4 * (v99 & 2)] + v100, Src, (unsigned int)v98);
LABEL_299:
                      v53 = Sid;
                    }
                    else
                    {
                      v53 = Sid;
                      v101 = RtlLengthSid(Sid);
                      memmove((char *)v96 + v101 + 8, Src, v98);
                    }
                    v56 = v103;
                    goto LABEL_117;
                  case 0x12u:
                    if ( v47 >= 0xFFFF || (v104 & 0xE0) != 0 || AccessMask )
                      goto LABEL_21;
                    v84 = *(_DWORD *)(Sid + 2) - v124;
                    if ( !v84 )
                      v84 = *((unsigned __int16 *)Sid + 3) - v125;
                    if ( v84 || Sid[1] != 1 || *((_DWORD *)Sid + 2) )
                    {
                      v20 = -1073741705;
                    }
                    else
                    {
                      v91 = (char *)SddlpAlloc(v47);
                      v92 = v91;
                      if ( v91 )
                      {
                        *v91 = v105;
                        *((_DWORD *)v91 + 1) = 0;
                        v91[1] = v104;
                        *((_WORD *)v91 + 1) = v47;
                        v93 = RtlLengthSid(Sid);
                        RtlCopySid(v93, v92 + 8, Sid);
                        if ( HIDWORD(Size) )
                        {
                          v94 = HIDWORD(Size);
                          v95 = RtlLengthSid(Sid);
                          memmove(&v92[v95 + 8], P, v94);
                        }
                        v6 = a3;
                        v20 = RtlAddAce((PACL)*a3, 2u, 0xFFFFFFFF, v92, v47);
                        ExFreePoolWithTag(v92, 0);
                        v56 = v103;
                        v53 = Sid;
                        goto LABEL_116;
                      }
                      v20 = -1073741801;
                    }
                    goto LABEL_22;
                  case 0x13u:
                    v6 = a3;
                    v53 = Sid;
                    v20 = SddlAddScopedPolicyIDAce((PACL)*a3, 0x140000000LL, v104, AccessMask, Sid);
                    goto LABEL_115;
                  case 0x14u:
                    v6 = a3;
                    v53 = Sid;
                    v20 = SddlAddProcessTrustLabelAce(
                            (PACL)*a3,
                            0x140000000LL,
                            v104,
                            (__int64)Sid,
                            AceListLength,
                            AccessMask);
                    goto LABEL_115;
                  case 0x15u:
                    if ( v42 < 0xFFFF )
                    {
                      v6 = a3;
                      v53 = Sid;
                      v20 = SddlAddAccessFilterAce(
                              (PACL)*a3,
                              0x140000000LL,
                              v104,
                              (__int64)Sid,
                              AceListLength,
                              AccessMask,
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
                v49 = (ACL *)*a3;
                if ( !RtlValidSid(Sid) )
                {
                  v20 = -1073741704;
                  goto LABEL_114;
                }
                AclRevision = v49->AclRevision;
                if ( v49->AclRevision > 4u )
                {
                  v20 = -1073741735;
                  goto LABEL_114;
                }
                if ( (unsigned __int8)AclRevision <= 2u )
                  AclRevision = 2;
                if ( (v104 & 0xE0) != 0 && (v104 & 0xC0) != 0 )
                {
                  v20 = -1073741811;
                  goto LABEL_114;
                }
                if ( RtlValidAcl(v49) )
                {
                  v51 = v49 + 1;
                  for ( ii = 0; ii < v49->AceCount; ++ii )
                  {
                    if ( v51 >= (ACL *)((char *)v49 + v49->AclSize) )
                      goto LABEL_209;
                    v51 = (ACL *)((char *)v51 + v51->AclSize);
                  }
                  v53 = Sid;
                  v54 = (ACL *)((char *)v49 + v49->AclSize);
                  if ( v51 > v54 )
                    v51 = 0LL;
                  v55 = 4 * ((unsigned __int8)Sid[1] + 4);
                  if ( v51 && (ACL *)((char *)v51 + v55) <= v54 )
                  {
                    v51->Sbz1 = v104;
                    v51->AclSize = v55;
                    *(_DWORD *)&v51->AceCount = AccessMask;
                    v51->AclRevision = 0;
                    RtlCopySid(4 * (unsigned __int8)Sid[1] + 8, &v51[1], Sid);
                    ++v49->AceCount;
                    v49->AclRevision = AclRevision;
                    v20 = 0;
                  }
                  else
                  {
                    v20 = -1073741671;
                  }
LABEL_115:
                  v56 = v103;
LABEL_116:
                  if ( v20 >= 0 )
                  {
LABEL_117:
                    if ( v56 == 1 && v53 )
                      ExFreePoolWithTag(v53, 0);
                    Sid = 0LL;
                    v121 = 0LL;
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
                    v17 = v113;
                    v57 = v115 + 1;
                    goto LABEL_131;
                  }
LABEL_22:
                  v6 = a3;
                  AceCount = RtlNtStatusToDosError(v20);
LABEL_23:
                  v21 = *v6;
                  if ( AceCount )
                    goto LABEL_54;
                  v22 = v103;
                  v21[1] = v116;
                  goto LABEL_25;
                }
LABEL_209:
                v20 = -1073741705;
              }
LABEL_114:
              v53 = Sid;
              goto LABEL_115;
            }
            v38 = (char *)v120;
            Sid = (char *)v120;
            if ( !v120 )
            {
              v111 -= 2;
              v71 = LocalpConvertStringSidToSid(v32, (__int64 *)&v121, &v111);
              if ( v71 < 0 )
              {
                AceCount = RtlNtStatusToDosError(v71);
                if ( AceCount )
                {
                  v38 = v121;
                  Sid = v121;
LABEL_178:
                  v103 = v22;
                  if ( !AceCount )
                    goto LABEL_85;
                  goto LABEL_23;
                }
              }
              v38 = v121;
              Sid = v121;
              if ( !v121 )
                goto LABEL_178;
            }
            v22 = 1;
            goto LABEL_178;
          }
        }
        ++v63;
        v62 += 3;
        if ( v63 >= 0x11 )
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
