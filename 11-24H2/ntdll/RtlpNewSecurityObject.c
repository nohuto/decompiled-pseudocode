/*
 * XREFs of RtlpNewSecurityObject @ 0x1800C0E40
 * Callers:
 *     RtlNewSecurityObjectEx @ 0x1800C0790 (RtlNewSecurityObjectEx.c)
 *     RtlpNewSecurityObject @ 0x1800C0E40 (RtlpNewSecurityObject.c)
 *     RtlNewSecurityObjectWithMultipleInheritance @ 0x180105F10 (RtlNewSecurityObjectWithMultipleInheritance.c)
 *     RtlNewSecurityObject @ 0x180108E70 (RtlNewSecurityObject.c)
 *     RtlCreateUserSecurityObject @ 0x180131A80 (RtlCreateUserSecurityObject.c)
 *     RtlNewInstanceSecurityObject @ 0x180131B20 (RtlNewInstanceSecurityObject.c)
 * Callees:
 *     RtlAllocateHeap @ 0x18003DC60 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x1800533F0 (RtlFreeHeap.c)
 *     RtlpValidOwnerSubjectContext @ 0x1800BE320 (RtlpValidOwnerSubjectContext.c)
 *     RtlpCreateServerAcl @ 0x1800BE59C (RtlpCreateServerAcl.c)
 *     RtlpApplyAclToObject @ 0x1800BFFF0 (RtlpApplyAclToObject.c)
 *     RtlpNormalizeAcl @ 0x1800C0094 (RtlpNormalizeAcl.c)
 *     RtlSidDominatesForTrust @ 0x1800C0370 (RtlSidDominatesForTrust.c)
 *     RtlSidDominates @ 0x1800C0480 (RtlSidDominates.c)
 *     RtlAddMandatoryAce @ 0x1800C05A0 (RtlAddMandatoryAce.c)
 *     RtlpGetDefaultsSubjectContext @ 0x1800C0800 (RtlpGetDefaultsSubjectContext.c)
 *     RtlpNewSecurityObject @ 0x1800C0E40 (RtlpNewSecurityObject.c)
 *     RtlpValidFilterAclSubjectContext @ 0x1800C2B00 (RtlpValidFilterAclSubjectContext.c)
 *     RtlpCombineAcls @ 0x1800C2C00 (RtlpCombineAcls.c)
 *     RtlpInheritAcl2 @ 0x1800C3540 (RtlpInheritAcl2.c)
 *     RtlpOwnerAcesPresent @ 0x1800E45A0 (RtlpOwnerAcesPresent.c)
 *     ZwAccessCheck @ 0x180160050 (ZwAccessCheck.c)
 *     NtClose @ 0x180160230 (NtClose.c)
 *     NtQueryInformationToken @ 0x180160470 (NtQueryInformationToken.c)
 *     NtDuplicateToken @ 0x180160890 (NtDuplicateToken.c)
 *     ZwPrivilegeCheck @ 0x180162880 (ZwPrivilegeCheck.c)
 *     __security_check_cookie @ 0x180163D80 (__security_check_cookie.c)
 *     memmove @ 0x1801657C0 (memmove.c)
 *     memset$thunk$772440563353939046 @ 0x180171030 (memset$thunk$772440563353939046.c)
 */

int __fastcall RtlpNewSecurityObject(
        __int64 a1,
        _OWORD *a2,
        _QWORD *a3,
        __int64 a4,
        int a5,
        unsigned __int8 a6,
        unsigned int a7,
        HANDLE TokenHandle,
        GENERIC_MAPPING *a9)
{
  _OWORD *v9; // r14
  unsigned __int16 *v10; // r13
  unsigned __int16 *v11; // rsi
  unsigned __int8 *v12; // rbx
  void *v13; // rdi
  _OWORD *v14; // r12
  HANDLE v15; // rcx
  void *ProcessHeap; // r15
  int result; // eax
  int v18; // eax
  __int16 v19; // r8
  __int64 v20; // r9
  unsigned int v21; // edx
  char *v22; // rax
  __int64 v23; // r11
  char *v24; // rbx
  NTSTATUS v25; // r10d
  int v26; // r12d
  int v27; // eax
  int v28; // r8d
  int v29; // edi
  int v30; // r9d
  unsigned __int16 *v31; // rdx
  __int16 v32; // cx
  __int64 v33; // rsi
  int valid; // ebx
  int v35; // edi
  void *v36; // r15
  ULONG v37; // ecx
  unsigned int v38; // r14d
  unsigned __int16 *Heap; // rax
  __int16 v40; // r9
  ULONG v41; // ecx
  __int16 v42; // dx
  char v43; // r13
  __int64 v44; // r8
  __int64 v45; // r12
  __int16 v46; // cx
  __int64 v47; // r15
  int v48; // edi
  void *v49; // rsi
  unsigned __int32 v50; // ecx
  unsigned int v51; // r14d
  char *v52; // rdx
  PVOID v53; // rax
  __int16 v54; // cx
  char *v55; // r13
  PSID v56; // rsi
  unsigned int v57; // ebx
  __int16 v58; // ax
  char *v59; // rax
  char *v60; // rdi
  unsigned int i; // ecx
  void *v62; // rdx
  unsigned int v63; // ebx
  PSID v64; // rdx
  __int16 v65; // ax
  char *v66; // rcx
  unsigned int v67; // edx
  ACCESS_MASK v68; // ecx
  __int16 v69; // ax
  __int64 v70; // rax
  char *v71; // rax
  char *v72; // rsi
  unsigned int k; // edx
  char *v74; // rdx
  unsigned __int8 v75; // al
  char *v76; // r9
  __int64 v77; // rax
  void *p_Acl; // r15
  unsigned int v79; // esi
  __int16 v80; // ax
  __int64 v81; // r14
  void *v82; // r12
  unsigned __int32 v83; // ecx
  unsigned int v84; // r15d
  void *v85; // rdi
  PVOID v86; // rax
  __int16 v87; // si
  int v88; // r9d
  int v89; // r8d
  int v90; // eax
  ULONG v91; // r14d
  unsigned __int16 *v92; // rax
  unsigned __int16 *v93; // rdx
  unsigned int v94; // ecx
  unsigned int v95; // r12d
  _OWORD *v96; // rdx
  __int16 v97; // ax
  __int64 v98; // rsi
  __int64 v99; // r10
  __int16 v100; // ax
  __int64 v101; // rdi
  void *v102; // r13
  int v103; // r14d
  SIZE_T v104; // r8
  unsigned int v105; // r12d
  PVOID v106; // rax
  __int16 v107; // r13
  HANDLE v108; // r15
  bool v109; // al
  unsigned __int8 *v110; // r14
  unsigned __int16 *v111; // rcx
  PVOID v112; // rdi
  unsigned int v113; // r15d
  unsigned int v114; // r14d
  unsigned int v115; // esi
  unsigned int v116; // ebx
  unsigned __int16 *v117; // rdi
  __int64 v118; // rcx
  int v119; // eax
  char *v120; // rdi
  int v121; // eax
  void *v122; // rbx
  unsigned __int8 *v123; // rax
  __int64 v124; // rcx
  __int64 v125; // rcx
  __int64 v126; // rax
  __int64 v127; // rax
  __int64 v128; // rax
  GENERIC_MAPPING *v129; // r14
  __int64 v130; // rcx
  char *v131; // rdx
  HANDLE v132; // rdx
  __int64 v133; // rax
  PSID v134; // rdx
  int v135; // eax
  __int16 v136; // cx
  unsigned __int16 *v137; // r8
  unsigned int v138; // edx
  char *v139; // r12
  __int64 v140; // rcx
  _OWORD *v141; // rax
  int v142; // r12d
  bool v143; // zf
  __int64 v144; // rax
  PGENERIC_MAPPING v145; // r8
  int v146; // ecx
  int v147; // ecx
  bool v148; // cf
  __int64 v149; // rax
  __int64 v150; // rax
  __int64 v151; // rax
  void *v152; // rax
  PGENERIC_MAPPING v153; // r8
  __int64 v154; // rax
  unsigned __int16 *v155; // rax
  unsigned int v156; // ecx
  __int16 v157; // r9
  unsigned int v158; // r10d
  __int64 v159; // rax
  char *v160; // rax
  __int64 v161; // rax
  char *v162; // rdx
  unsigned int j; // ecx
  PULONG ReturnLength; // [rsp+20h] [rbp-F0h]
  PHANDLE NewTokenHandle; // [rsp+28h] [rbp-E8h]
  unsigned __int16 *BaseAddress; // [rsp+90h] [rbp-80h]
  unsigned __int16 *BaseAddressa; // [rsp+90h] [rbp-80h]
  char v168; // [rsp+98h] [rbp-78h]
  char v169; // [rsp+99h] [rbp-77h]
  BOOLEAN DominatesTrust; // [rsp+9Ah] [rbp-76h] BYREF
  char v171; // [rsp+9Bh] [rbp-75h] BYREF
  BOOLEAN Result[4]; // [rsp+9Ch] [rbp-74h] BYREF
  PVOID Src; // [rsp+A0h] [rbp-70h]
  PVOID HeapHandle; // [rsp+A8h] [rbp-68h]
  NTSTATUS AccessStatus; // [rsp+B0h] [rbp-60h] BYREF
  _OWORD *v176; // [rsp+B8h] [rbp-58h]
  char v177; // [rsp+C0h] [rbp-50h] BYREF
  char v178; // [rsp+C1h] [rbp-4Fh]
  ULONG PrivilegeSetLength; // [rsp+C4h] [rbp-4Ch] BYREF
  BOOLEAN Dominates; // [rsp+C8h] [rbp-48h] BYREF
  char v181; // [rsp+C9h] [rbp-47h]
  char v182; // [rsp+CAh] [rbp-46h] BYREF
  char v183; // [rsp+CBh] [rbp-45h]
  char v184; // [rsp+CCh] [rbp-44h]
  int v185; // [rsp+D0h] [rbp-40h] BYREF
  char v186; // [rsp+D4h] [rbp-3Ch]
  char v187; // [rsp+D5h] [rbp-3Bh] BYREF
  char v188; // [rsp+D6h] [rbp-3Ah] BYREF
  char v189; // [rsp+D7h] [rbp-39h]
  __int16 v190; // [rsp+D8h] [rbp-38h]
  PVOID v191; // [rsp+E0h] [rbp-30h]
  void *v192; // [rsp+E8h] [rbp-28h]
  ACCESS_MASK GrantedAccess; // [rsp+F0h] [rbp-20h] BYREF
  void *v194; // [rsp+F8h] [rbp-18h]
  int v195; // [rsp+100h] [rbp-10h] BYREF
  ULONG Attributes; // [rsp+104h] [rbp-Ch] BYREF
  PSID Sid2; // [rsp+108h] [rbp-8h]
  int v198[2]; // [rsp+110h] [rbp+0h]
  PGENERIC_MAPPING GenericMapping; // [rsp+118h] [rbp+8h]
  HANDLE Handle; // [rsp+120h] [rbp+10h] BYREF
  PSID Sid1; // [rsp+128h] [rbp+18h]
  unsigned __int8 *v202; // [rsp+130h] [rbp+20h]
  __int64 v203; // [rsp+138h] [rbp+28h]
  int v204; // [rsp+140h] [rbp+30h]
  __int64 v205; // [rsp+148h] [rbp+38h]
  _OWORD *v206; // [rsp+150h] [rbp+40h]
  HANDLE ExistingTokenHandle; // [rsp+158h] [rbp+48h]
  NTSTATUS v208; // [rsp+160h] [rbp+50h] BYREF
  int v209[2]; // [rsp+168h] [rbp+58h]
  PVOID SecurityDescriptor; // [rsp+170h] [rbp+60h] BYREF
  PVOID v211; // [rsp+178h] [rbp+68h] BYREF
  unsigned __int16 *v212; // [rsp+180h] [rbp+70h] BYREF
  PSID v213; // [rsp+188h] [rbp+78h]
  int v214; // [rsp+190h] [rbp+80h]
  PVOID v215; // [rsp+198h] [rbp+88h] BYREF
  PVOID v216; // [rsp+1A0h] [rbp+90h] BYREF
  PVOID v217; // [rsp+1A8h] [rbp+98h] BYREF
  PVOID v218; // [rsp+1B0h] [rbp+A0h] BYREF
  PVOID v219; // [rsp+1B8h] [rbp+A8h] BYREF
  PVOID v220; // [rsp+1C0h] [rbp+B0h] BYREF
  PVOID v221; // [rsp+1C8h] [rbp+B8h] BYREF
  char *v222; // [rsp+1D0h] [rbp+C0h]
  _QWORD *v223; // [rsp+1D8h] [rbp+C8h]
  _OWORD v224[2]; // [rsp+1E0h] [rbp+D0h] BYREF
  __int64 v225; // [rsp+200h] [rbp+F0h]
  _PRIVILEGE_SET PrivilegeSet; // [rsp+208h] [rbp+F8h] BYREF
  _DWORD v227[4]; // [rsp+220h] [rbp+110h] BYREF
  _OBJECT_ATTRIBUTES TokenInformation; // [rsp+230h] [rbp+120h] BYREF
  __int64 v229; // [rsp+260h] [rbp+150h]
  ACL Acl; // [rsp+270h] [rbp+160h] BYREF

  GenericMapping = a9;
  v9 = a2;
  v206 = a2;
  v225 = 0LL;
  Result[0] = 0;
  v10 = 0LL;
  v11 = 0LL;
  v168 = 0;
  v12 = 0LL;
  v184 = 0;
  v13 = 0LL;
  v183 = 0;
  v14 = 0LL;
  v169 = 0;
  v178 = 0;
  v171 = 0;
  v187 = 0;
  v188 = 0;
  v177 = 0;
  LOBYTE(v204) = 0;
  v182 = 0;
  memset(v224, 0, sizeof(v224));
  v195 = 0;
  v212 = 0LL;
  memset(&PrivilegeSet, 0, sizeof(PrivilegeSet));
  SecurityDescriptor = 0LL;
  Handle = &Acl;
  *(_QWORD *)v198 = a1;
  v15 = TokenHandle;
  *(_QWORD *)v209 = a4;
  ProcessHeap = NtCurrentPeb()->ProcessHeap;
  HeapHandle = ProcessHeap;
  v223 = a3;
  ExistingTokenHandle = TokenHandle;
  v191 = 0LL;
  Src = 0LL;
  v211 = 0LL;
  Sid1 = 0LL;
  v213 = 0LL;
  v202 = 0LL;
  v205 = 0LL;
  v203 = 0LL;
  v176 = 0LL;
  v185 = 0;
  GrantedAccess = 0;
  v222 = 0LL;
  Sid2 = 0LL;
  Dominates = 1;
  v208 = 0;
  LOBYTE(Attributes) = 1;
  v221 = 0LL;
  v217 = 0LL;
  v218 = 0LL;
  v215 = 0LL;
  v216 = 0LL;
  v219 = 0LL;
  v220 = 0LL;
  if ( TokenHandle )
  {
    Attributes = 0;
    v229 = 0LL;
    memset(&TokenInformation, 0, sizeof(TokenInformation));
    result = NtQueryInformationToken(TokenHandle, 0xAu, &TokenInformation, 0x38u, &Attributes);
    if ( result < 0 )
      return result;
    Attributes = TokenInformation.Attributes;
    if ( TokenInformation.Attributes == 2 && *((int *)&TokenInformation.Attributes + 1) < 1 )
      return -1073741659;
    v15 = ExistingTokenHandle;
  }
  if ( v9 )
  {
    v181 = 1;
  }
  else
  {
    v9 = v224;
    v181 = 0;
    v206 = v224;
    LOBYTE(v224[0]) = 1;
  }
  v18 = *((unsigned __int16 *)v9 + 1);
  v190 = *((_WORD *)v9 + 1) & 0x80;
  v19 = v190;
  LOBYTE(v18) = (v18 & 0x40) != 0;
  v189 = v190 != 0;
  v214 = v18;
  if ( v15 || v190 )
  {
    result = RtlpGetDefaultsSubjectContext(v15, v190 != 0, &v221, &v217, &v218, &v219, &v215, &v216, &v220);
    if ( result < 0 )
      return result;
    v12 = *(unsigned __int8 **)v221;
    v13 = *(void **)v217;
    v203 = *(_QWORD *)v218;
    Sid1 = *(PSID *)v215;
    v213 = *(PSID *)v216;
    if ( v219 )
      v202 = *(unsigned __int8 **)v219;
    else
      v202 = 0LL;
    if ( v220 )
    {
      v20 = *(_QWORD *)v220;
      v19 = v190;
      v205 = *(_QWORD *)v220;
    }
    else
    {
      v19 = v190;
      v20 = 0LL;
      v205 = 0LL;
    }
  }
  else
  {
    v20 = 0LL;
  }
  v21 = *((unsigned __int16 *)v9 + 1);
  if ( (v21 & 0x8000u) != 0 )
  {
    v127 = *((unsigned int *)v9 + 1);
    if ( !(_DWORD)v127 )
      goto LABEL_198;
    v22 = (char *)v9 + v127;
  }
  else
  {
    v22 = (char *)*((_QWORD *)v9 + 1);
  }
  v192 = v22;
  if ( v22 )
  {
    v178 = 1;
LABEL_17:
    v23 = *(_QWORD *)v198;
    goto LABEL_18;
  }
LABEL_198:
  if ( (a7 & 0x20) == 0 )
  {
    v123 = v12;
    if ( v19 )
      v123 = v202;
    v192 = v123;
    if ( !v123 )
    {
      valid = -1073741700;
      goto LABEL_175;
    }
    goto LABEL_17;
  }
  v23 = *(_QWORD *)v198;
  if ( !*(_QWORD *)v198 )
  {
    valid = -1073741734;
    goto LABEL_175;
  }
  if ( *(__int16 *)(*(_QWORD *)v198 + 2LL) >= 0 )
  {
    v152 = *(void **)(*(_QWORD *)v198 + 8LL);
  }
  else
  {
    v151 = *(unsigned int *)(*(_QWORD *)v198 + 4LL);
    if ( !(_DWORD)v151 )
    {
LABEL_387:
      valid = -1073741734;
      goto LABEL_175;
    }
    v152 = (void *)(*(_QWORD *)v198 + v151);
  }
  v192 = v152;
  v178 = 1;
  if ( !v152 )
    goto LABEL_387;
LABEL_18:
  if ( (v21 & 0x8000u) != 0 )
  {
    v128 = *((unsigned int *)v9 + 2);
    if ( !(_DWORD)v128 )
      goto LABEL_193;
    v24 = (char *)v9 + v128;
  }
  else
  {
    v24 = (char *)*((_QWORD *)v9 + 2);
  }
  v194 = v24;
  if ( v24 )
    goto LABEL_21;
LABEL_193:
  if ( (a7 & 0x40) == 0 )
  {
    v122 = v13;
    if ( v19 )
      v122 = (void *)v20;
LABEL_196:
    v194 = v122;
    if ( v122 )
    {
LABEL_21:
      v25 = a7 & 4;
      AccessStatus = v25;
      v186 = v25 != 0;
      v26 = a7 & 2;
      DominatesTrust = v26 != 0;
      v27 = (v21 >> 2) & 8;
      v28 = (v21 >> 1) & 0x400;
      v29 = (v21 >> 1) & 0x1000;
      v30 = (v21 & 0x10) != 0 ? 4 : 0;
      if ( (v21 & 0x10) != 0 )
      {
        if ( (v21 & 0x8000u) != 0 )
        {
          v146 = *((_DWORD *)v9 + 3);
          v31 = 0LL;
          if ( v146 )
            LODWORD(v10) = (_DWORD)v9 + v146;
          goto LABEL_25;
        }
        v10 = (unsigned __int16 *)*((_QWORD *)v9 + 3);
      }
      v31 = 0LL;
LABEL_25:
      if ( !v23 )
        goto LABEL_27;
      v32 = *(_WORD *)(v23 + 2);
      if ( (v32 & 0x10) == 0 )
        goto LABEL_27;
      if ( v32 >= 0 )
      {
        v33 = *(_QWORD *)(v23 + 24);
        goto LABEL_28;
      }
      v124 = *(unsigned int *)(v23 + 12);
      if ( (_DWORD)v124 )
        v33 = v23 + v124;
      else
LABEL_27:
        v33 = 0LL;
LABEL_28:
      valid = 0;
      v35 = v30 | v27 | v28 | v29;
      v36 = NtCurrentPeb()->ProcessHeap;
      if ( v35 || v33 )
      {
        v37 = 200;
        v38 = 0;
        PrivilegeSetLength = 200;
        while ( v38 < 2 )
        {
          Heap = (unsigned __int16 *)RtlAllocateHeap(v36, NtdllBaseTag + 1310720, v37);
          BaseAddress = Heap;
          if ( !Heap )
          {
            ProcessHeap = HeapHandle;
            valid = -1073741801;
            v11 = (unsigned __int16 *)Src;
            v10 = 0LL;
            v14 = v176;
            goto LABEL_175;
          }
          valid = RtlpInheritAcl2(
                    v33,
                    (_DWORD)v10,
                    v35,
                    a6,
                    DominatesTrust,
                    v186,
                    (__int64)v192,
                    (__int64)v194,
                    (__int64)v202,
                    v205,
                    (__int64)GenericMapping,
                    2,
                    *(__int64 *)v209,
                    a5,
                    (__int64)&PrivilegeSetLength,
                    (__int64)Heap,
                    (__int64)&v171,
                    (__int64)&v185);
          if ( valid >= 0 )
          {
            if ( PrivilegeSetLength )
            {
              v31 = BaseAddress;
            }
            else
            {
              RtlFreeHeap(v36, 0, BaseAddress);
              v31 = 0LL;
            }
            break;
          }
          RtlFreeHeap(v36, 0, BaseAddress);
          v31 = 0LL;
          if ( valid != -1073741789 )
            break;
          v37 = PrivilegeSetLength;
          ++v38;
        }
        BaseAddressa = v31;
        if ( valid < 0 )
        {
          BaseAddressa = v31;
          if ( valid == -2147483637 )
          {
            v25 = AccessStatus;
            v9 = v206;
            v23 = *(_QWORD *)v198;
            goto LABEL_38;
          }
          ProcessHeap = HeapHandle;
          v10 = v31;
          v11 = (unsigned __int16 *)Src;
          v14 = v176;
          goto LABEL_175;
        }
        v25 = AccessStatus;
        v9 = v206;
        v23 = *(_QWORD *)v198;
        v168 = 1;
        PrivilegeSetLength = 2 * (v185 & 0x1400 | (2 * (v185 & 8 | 0x2004)));
        goto LABEL_42;
      }
      v171 = 0;
      BaseAddressa = 0LL;
      v185 = v26 != 0 ? 0x400 : 0;
LABEL_38:
      v40 = *((_WORD *)v9 + 1);
      v41 = 34816;
      if ( (a7 & 2) == 0 )
        v41 = 0x8000;
      if ( (v40 & 0x30) != 0x30 )
      {
        PrivilegeSetLength = v41;
LABEL_42:
        v42 = *((_WORD *)v9 + 1);
        v43 = v25 != 0;
        v44 = (v42 & 0x10) != 0 ? 4 : 0;
        if ( (v42 & 0x10) != 0 )
        {
          if ( v42 < 0 )
          {
            v147 = *((_DWORD *)v9 + 3);
            if ( v147 )
              LODWORD(v45) = (_DWORD)v9 + v147;
            else
              LODWORD(v45) = 0;
          }
          else
          {
            v45 = *((_QWORD *)v9 + 3);
          }
        }
        else
        {
          LODWORD(v45) = 0;
        }
        if ( !v23 )
          goto LABEL_46;
        v46 = *(_WORD *)(v23 + 2);
        if ( (v46 & 0x10) == 0 )
          goto LABEL_46;
        if ( v46 >= 0 )
        {
          v47 = *(_QWORD *)(v23 + 24);
          goto LABEL_47;
        }
        v125 = *(unsigned int *)(v23 + 12);
        if ( (_DWORD)v125 )
          v47 = v23 + v125;
        else
LABEL_46:
          v47 = 0LL;
LABEL_47:
        valid = 0;
        v48 = v44 | (*((unsigned __int16 *)v9 + 1) >> 2) & 8 | (*((unsigned __int16 *)v9 + 1) >> 1) & 0x400;
        v49 = NtCurrentPeb()->ProcessHeap;
        if ( v48 || v47 )
        {
          v50 = 200;
          v51 = 0;
          AccessStatus = 200;
          while ( 1 )
          {
            v52 = 0LL;
            if ( v51 >= 2 )
              break;
            v53 = RtlAllocateHeap(v49, NtdllBaseTag + 1310720, v50);
            v191 = v53;
            if ( !v53 )
            {
LABEL_276:
              valid = -1073741801;
              goto LABEL_277;
            }
            valid = RtlpInheritAcl2(
                      v47,
                      v45,
                      v48,
                      a6,
                      DominatesTrust,
                      v43,
                      (__int64)v192,
                      (__int64)v194,
                      (__int64)v202,
                      v205,
                      (__int64)GenericMapping,
                      2,
                      *(__int64 *)v209,
                      a5,
                      (__int64)&AccessStatus,
                      (__int64)v53,
                      (__int64)&v187,
                      (__int64)&GrantedAccess);
            if ( valid >= 0 )
            {
              if ( AccessStatus )
              {
                v52 = (char *)v191;
              }
              else
              {
                RtlFreeHeap(v49, 0, v191);
                v52 = 0LL;
              }
              break;
            }
            RtlFreeHeap(v49, 0, v191);
            v52 = 0LL;
            if ( valid != -1073741789 )
              break;
            v50 = AccessStatus;
            ++v51;
          }
          v191 = v52;
          if ( valid >= 0 )
          {
            v9 = v206;
            v55 = v52;
            v184 = 1;
            goto LABEL_59;
          }
          v191 = v52;
          if ( valid != -2147483637 )
            goto LABEL_277;
          v9 = v206;
        }
        else
        {
          v191 = 0LL;
        }
        v54 = *((_WORD *)v9 + 1);
        if ( (v54 & 0x30) == 0x30 )
        {
          if ( (v54 & 0x10) != 0 )
          {
            if ( v54 >= 0 )
            {
              v55 = (char *)*((_QWORD *)v9 + 3);
              v191 = v55;
            }
            else
            {
              v149 = *((unsigned int *)v9 + 3);
              if ( (_DWORD)v149 )
              {
                v55 = (char *)v9 + v149;
                v191 = (char *)v9 + v149;
              }
              else
              {
                v55 = 0LL;
                v191 = 0LL;
              }
            }
          }
          else
          {
            v55 = 0LL;
            v191 = 0LL;
          }
        }
        else
        {
          v55 = (char *)v191;
        }
LABEL_59:
        v56 = v213;
        v57 = 0;
LABEL_60:
        v58 = *((_WORD *)v9 + 1);
        if ( (v58 & 0x10) != 0 )
        {
          if ( v58 < 0 )
          {
            v144 = *((unsigned int *)v9 + 3);
            if ( !(_DWORD)v144 )
              goto LABEL_72;
            v59 = (char *)v9 + v144;
          }
          else
          {
            v59 = (char *)*((_QWORD *)v9 + 3);
          }
          if ( v59 )
          {
            v60 = v59 + 8;
            for ( i = 0; i < *((unsigned __int16 *)v59 + 2); ++i )
            {
              if ( i >= v57 && *v60 == 20 )
              {
                v62 = v60 + 8;
                v63 = i;
                if ( !v60 )
                  v62 = 0LL;
                if ( v62 )
                {
                  DominatesTrust = 0;
                  if ( !v56 || (RtlSidDominatesForTrust(v56, v62, &DominatesTrust), !DominatesTrust) )
                  {
                    valid = -1073741790;
                    goto LABEL_277;
                  }
                }
                v57 = v63 + 1;
                if ( v60 )
                  goto LABEL_60;
                break;
              }
              v60 += *((unsigned __int16 *)v60 + 1);
            }
          }
        }
LABEL_72:
        if ( (a7 & 0x800) == 0 )
        {
          v64 = v56;
          goto LABEL_74;
        }
        v156 = 0;
        v157 = *((_WORD *)v9 + 1);
        if ( (v157 & 0x10) != 0 )
        {
LABEL_407:
          v158 = v156;
          if ( v157 >= 0 )
          {
            v160 = (char *)*((_QWORD *)v9 + 3);
          }
          else
          {
            v159 = *((unsigned int *)v9 + 3);
            if ( !(_DWORD)v159 )
              goto LABEL_411;
            v160 = (char *)v9 + v159;
          }
          if ( v160 )
          {
            v44 = *((unsigned __int16 *)v160 + 2);
            v162 = v160 + 8;
            for ( j = 0; j < (unsigned int)v44; ++j )
            {
              if ( j >= v158 && *v162 == 20 )
              {
                v156 = j + 1;
                if ( !v162 )
                  break;
                if ( (v162[1] & 8) == 0 )
                {
                  ProcessHeap = HeapHandle;
                  valid = -1073741811;
                  v10 = BaseAddressa;
                  v11 = 0LL;
                  v14 = v176;
                  goto LABEL_175;
                }
                goto LABEL_407;
              }
              v162 += *((unsigned __int16 *)v162 + 1);
            }
          }
        }
LABEL_411:
        v64 = v56;
        if ( v56 )
        {
          valid = -1073741811;
          goto LABEL_277;
        }
LABEL_74:
        v65 = *((_WORD *)v9 + 1);
        if ( (v65 & 0x10) != 0 )
        {
          if ( v65 >= 0 )
          {
            v66 = (char *)*((_QWORD *)v9 + 3);
          }
          else
          {
            v77 = *((unsigned int *)v9 + 3);
            if ( (_DWORD)v77 )
              v66 = (char *)v9 + v77;
            else
              v66 = 0LL;
          }
        }
        else
        {
          v66 = 0LL;
        }
        valid = RtlpValidFilterAclSubjectContext(v66, v64, v44);
        if ( valid < 0 )
          goto LABEL_277;
        v67 = (a7 >> 8) & 1 | 2;
        if ( (a7 & 0x200) == 0 )
          v67 = (a7 >> 8) & 1;
        v68 = v67 | 4;
        if ( (a7 & 0x400) == 0 )
          v68 = v67;
        if ( v68 )
        {
          v72 = v222;
          v75 = 0;
          v74 = (char *)Sid1;
          v76 = v222;
LABEL_90:
          if ( !v68 )
          {
            if ( !v74 || *((_DWORD *)v74 + 2) >= 0x2000u )
              goto LABEL_104;
            v68 = 1;
          }
          if ( !v72 )
          {
            if ( !ExistingTokenHandle )
            {
              valid = -1073741700;
              goto LABEL_277;
            }
            v76 = v74;
            Sid2 = v74;
            v75 = 0;
          }
LABEL_104:
          if ( v76 )
          {
            Acl = (ACL)8388610LL;
            valid = RtlAddMandatoryAce(&Acl, 2u, v75, v76, 0x11u, v68);
            if ( valid < 0 )
              goto LABEL_277;
            p_Acl = &Acl;
          }
          else
          {
            p_Acl = 0LL;
            Handle = 0LL;
          }
          if ( (a7 & 0x700) != 0 )
          {
            v79 = 4;
          }
          else if ( !v72 && p_Acl )
          {
            v79 = 0;
          }
          else
          {
            v79 = (*((_WORD *)v9 + 1) & 0x2800 | (*((unsigned __int16 *)v9 + 1) >> 1) & 0x18u) >> 1;
          }
          if ( !*(_QWORD *)v198 )
            goto LABEL_112;
          v80 = *(_WORD *)(*(_QWORD *)v198 + 2LL);
          if ( (v80 & 0x10) == 0 )
            goto LABEL_112;
          if ( v80 >= 0 )
          {
            v81 = *(_QWORD *)(*(_QWORD *)v198 + 24LL);
          }
          else
          {
            v133 = *(unsigned int *)(*(_QWORD *)v198 + 12LL);
            if ( !(_DWORD)v133 )
            {
LABEL_112:
              v81 = 0LL;
              goto LABEL_113;
            }
            v81 = *(_QWORD *)v198 + v133;
          }
LABEL_113:
          valid = 0;
          v82 = NtCurrentPeb()->ProcessHeap;
          if ( !v79 && !v81 )
            goto LABEL_122;
          v83 = 200;
          v84 = 0;
          AccessStatus = 200;
          while ( 1 )
          {
            v85 = 0LL;
            if ( v84 >= 2 )
              break;
            v86 = RtlAllocateHeap(v82, NtdllBaseTag + 1310720, v83);
            v85 = v86;
            if ( !v86 )
              goto LABEL_276;
            valid = RtlpInheritAcl2(
                      v81,
                      (_DWORD)Handle,
                      v79,
                      a6,
                      1,
                      0,
                      (__int64)v192,
                      (__int64)v194,
                      (__int64)v202,
                      v205,
                      (__int64)GenericMapping,
                      3,
                      *(__int64 *)v209,
                      a5,
                      (__int64)&AccessStatus,
                      (__int64)v86,
                      (__int64)&v188,
                      (__int64)&v185);
            if ( valid >= 0 )
            {
              if ( !AccessStatus )
              {
                RtlFreeHeap(v82, 0, v85);
                v85 = 0LL;
              }
              break;
            }
            RtlFreeHeap(v82, 0, v85);
            v85 = 0LL;
            if ( valid != -1073741789 )
              break;
            v83 = AccessStatus;
            ++v84;
          }
          if ( valid == -2147483637 )
          {
            p_Acl = Handle;
LABEL_122:
            v85 = p_Acl;
            v185 = 0;
            v87 = 0;
LABEL_123:
            v88 = (int)v55;
            v89 = (int)v55;
            NewTokenHandle = (PHANDLE)v55;
            ReturnLength = (PULONG)v55;
            v10 = BaseAddressa;
            v90 = RtlpCombineAcls(
                    (_DWORD)BaseAddressa,
                    (_DWORD)v85,
                    v89,
                    v88,
                    (__int64)ReturnLength,
                    (__int64)NewTokenHandle,
                    (__int64)&v212,
                    (__int64)&v195);
            v91 = PrivilegeSetLength;
            valid = v90;
            v195 |= (PrivilegeSetLength & 0x2000) << 17;
            if ( v85 )
            {
              v143 = v85 == p_Acl;
              ProcessHeap = HeapHandle;
              if ( !v143 )
                RtlFreeHeap(HeapHandle, 0, v85);
            }
            else
            {
              ProcessHeap = HeapHandle;
            }
            if ( valid < 0 )
              goto LABEL_279;
            v92 = v212;
            if ( v212 )
            {
              if ( v168 && BaseAddressa )
              {
                RtlFreeHeap(ProcessHeap, 0, BaseAddressa);
                v92 = v212;
              }
              v93 = v92;
              BaseAddressa = v92;
              v183 = 1;
              v94 = 0;
              v212 = 0LL;
              PrivilegeSetLength = (2 * (v87 & 0x1400 | (2 * (v87 & 8 | 4)))) | v91;
            }
            else
            {
              v93 = BaseAddressa;
              v94 = 0;
            }
            v95 = a7;
            if ( (a7 & 8) != 0 )
              goto LABEL_129;
            if ( v93 )
            {
              v137 = v93 + 4;
              v138 = v93[2];
              while ( v94 < v138 )
              {
                if ( *(_BYTE *)v137 == 17 )
                {
                  v134 = v137 + 4;
                  goto LABEL_255;
                }
                ++v94;
                v137 = (unsigned __int16 *)((char *)v137 + v137[1]);
              }
            }
            v134 = Sid2;
LABEL_255:
            if ( !v134 )
            {
LABEL_129:
              v96 = v206;
              GrantedAccess = a7 & 1;
              v97 = *((_WORD *)v206 + 1);
              if ( (v97 & 4) != 0 )
              {
                if ( v97 >= 0 )
                {
                  v98 = *((_QWORD *)v206 + 4);
                }
                else
                {
                  v121 = *((_DWORD *)v206 + 4);
                  if ( v121 )
                    LODWORD(v98) = (_DWORD)v206 + v121;
                  else
                    LODWORD(v98) = 0;
                }
              }
              else
              {
                LODWORD(v98) = 0;
              }
              v99 = *(_QWORD *)v198;
              if ( !*(_QWORD *)v198 )
                goto LABEL_133;
              v100 = *(_WORD *)(*(_QWORD *)v198 + 2LL);
              if ( (v100 & 4) == 0 )
                goto LABEL_133;
              if ( v100 >= 0 )
              {
                v101 = *(_QWORD *)(*(_QWORD *)v198 + 32LL);
              }
              else
              {
                v126 = *(unsigned int *)(*(_QWORD *)v198 + 16LL);
                if ( !(_DWORD)v126 )
                {
LABEL_133:
                  v101 = 0LL;
                  goto LABEL_134;
                }
                v101 = *(_QWORD *)v198 + v126;
              }
LABEL_134:
              valid = 0;
              v102 = NtCurrentPeb()->ProcessHeap;
              v103 = *((_WORD *)v206 + 1) & 0x140C;
              if ( (*((_WORD *)v206 + 1) & 0x140C) != 0 || v101 )
              {
                v104 = 200LL;
                v105 = 0;
                AccessStatus = 200;
                while ( 1 )
                {
                  if ( v105 >= 2 )
                  {
LABEL_141:
                    v11 = 0LL;
                    goto LABEL_142;
                  }
                  v106 = RtlAllocateHeap(v102, NtdllBaseTag + 1310720, v104);
                  Src = v106;
                  if ( !v106 )
                  {
                    ProcessHeap = HeapHandle;
                    valid = -1073741801;
                    v10 = BaseAddressa;
                    v11 = 0LL;
                    v14 = v176;
                    goto LABEL_175;
                  }
                  valid = RtlpInheritAcl2(
                            v101,
                            v98,
                            v103,
                            a6,
                            GrantedAccess,
                            (a7 & 4) != 0,
                            (__int64)v192,
                            (__int64)v194,
                            (__int64)v202,
                            v205,
                            (__int64)GenericMapping,
                            1,
                            *(__int64 *)v209,
                            a5,
                            (__int64)&AccessStatus,
                            (__int64)v106,
                            (__int64)&v177,
                            (__int64)&v185);
                  if ( valid >= 0 )
                    break;
                  RtlFreeHeap(v102, 0, Src);
                  if ( valid != -1073741789 )
                    goto LABEL_141;
                  v104 = (unsigned int)AccessStatus;
                  ++v105;
                }
                if ( AccessStatus )
                {
                  v11 = (unsigned __int16 *)Src;
                }
                else
                {
                  RtlFreeHeap(v102, 0, Src);
                  v11 = 0LL;
                }
LABEL_142:
                Src = v11;
                if ( valid >= 0 )
                {
                  LOBYTE(v101) = v177;
                  v99 = *(_QWORD *)v198;
                  v107 = v185 & 0x1408 | 4 | PrivilegeSetLength;
                  v95 = a7;
                  v169 = 1;
                  goto LABEL_144;
                }
                Src = v11;
                if ( valid != -2147483637 )
                  goto LABEL_306;
                LOBYTE(v101) = v177;
                v96 = v206;
                v99 = *(_QWORD *)v198;
                v95 = a7;
              }
              else
              {
                v11 = 0LL;
                Src = 0LL;
              }
              v107 = PrivilegeSetLength;
              if ( (v95 & 1) != 0 )
                v107 = PrivilegeSetLength | 0x400;
              v136 = *((_WORD *)v96 + 1);
              if ( (v136 & 0xC) == 0xC )
              {
                if ( (v136 & 4) != 0 )
                {
                  if ( v136 < 0 )
                  {
                    v161 = *((unsigned int *)v96 + 4);
                    if ( (_DWORD)v161 )
                      v11 = (unsigned __int16 *)((char *)v96 + v161);
                    else
                      v11 = 0LL;
                  }
                  else
                  {
                    v11 = (unsigned __int16 *)*((_QWORD *)v96 + 4);
                  }
                }
                else
                {
                  v11 = 0LL;
                }
                Src = v11;
                LOBYTE(v101) = 1;
                v107 |= v136 & 0x1000 | 4;
              }
              else if ( v203 )
              {
                v11 = (unsigned __int16 *)v203;
                Src = (PVOID)v203;
                v107 |= 4u;
              }
LABEL_144:
              v108 = ExistingTokenHandle;
              if ( (v95 & 0x1000) == 0 && v181 && ExistingTokenHandle && v99 )
              {
                v129 = GenericMapping;
                GrantedAccess = 0;
                AccessStatus = 0;
                valid = RtlpNewSecurityObject(
                          v99,
                          0,
                          (int)&SecurityDescriptor,
                          v209[0],
                          a5,
                          a6,
                          v95 | 1,
                          ExistingTokenHandle,
                          (__int64)GenericMapping);
                if ( valid < 0 )
                  goto LABEL_306;
                v130 = *((unsigned __int16 *)SecurityDescriptor + 1);
                if ( (v130 & 4) != 0 )
                {
                  if ( (v130 & 0x8000u) == 0LL )
                  {
                    v131 = (char *)*((_QWORD *)SecurityDescriptor + 4);
                  }
                  else
                  {
                    v130 = *((unsigned int *)SecurityDescriptor + 4);
                    if ( (_DWORD)v130 )
                      v131 = (char *)SecurityDescriptor + v130;
                    else
                      v131 = 0LL;
                  }
                }
                else
                {
                  v131 = 0LL;
                }
                LOBYTE(v130) = 16;
                if ( (unsigned __int8)RtlpOwnerAcesPresent(v130, v131) )
                {
                  Handle = 0LL;
                  PrivilegeSetLength = 20;
                  if ( (_BYTE)Attributes != 1 )
                    goto LABEL_236;
                  *(_OWORD *)&TokenInformation.Length = 0x30uLL;
                  v227[2] = 1;
                  TokenInformation.SecurityQualityOfService = v227;
                  v227[0] = 12;
                  v227[1] = 2;
                  memset(&TokenInformation.ObjectName, 0, 24);
                  valid = NtDuplicateToken(v108, 8u, &TokenInformation, 0, TokenImpersonation, &Handle);
                  if ( valid < 0 )
                    goto LABEL_306;
                  v132 = Handle;
                  if ( !Handle )
LABEL_236:
                    v132 = v108;
                  valid = ZwAccessCheck(
                            SecurityDescriptor,
                            v132,
                            0x40000u,
                            v129,
                            &PrivilegeSet,
                            &PrivilegeSetLength,
                            &GrantedAccess,
                            &AccessStatus);
                  if ( Handle )
                    NtClose(Handle);
                  if ( valid < 0 )
                    goto LABEL_306;
                  valid = AccessStatus;
                  if ( AccessStatus < 0 )
                    goto LABEL_306;
                }
              }
              if ( (v95 & 1) != 0 && !v11 )
                v107 |= 0x1000u;
              v109 = !v195 || (v195 & 0x1B0) != v195;
              if ( v171 && (v95 & 8) == 0 && v109 )
              {
                if ( !v108 )
                {
                  valid = -1073741700;
                  goto LABEL_306;
                }
                v203 = 8LL;
                PrivilegeSet.PrivilegeCount = 1;
                PrivilegeSet.Control = 1;
                PrivilegeSet.Privilege[0].Luid = (_LUID)8LL;
                PrivilegeSet.Privilege[0].Attributes = 0;
                valid = ZwPrivilegeCheck(v108, &PrivilegeSet, Result);
                if ( valid < 0 )
                {
LABEL_306:
                  ProcessHeap = HeapHandle;
                  v10 = BaseAddressa;
                  v14 = v176;
                  goto LABEL_175;
                }
                if ( !Result[0] )
                {
                  ProcessHeap = HeapHandle;
                  valid = -1073741727;
                  v10 = BaseAddressa;
                  v14 = v176;
                  goto LABEL_175;
                }
              }
              if ( !(_BYTE)v204 || (v95 & 8) != 0 )
              {
LABEL_150:
                if ( !v178 || (v95 & 0x10) != 0 )
                {
                  v110 = (unsigned __int8 *)v192;
                }
                else
                {
                  if ( !v108 )
                  {
                    ProcessHeap = HeapHandle;
                    valid = -1073741700;
                    v10 = BaseAddressa;
                    v14 = v176;
                    goto LABEL_175;
                  }
                  v110 = (unsigned __int8 *)v192;
                  if ( !RtlpValidOwnerSubjectContext(v108, v192, v189, &v208) )
                  {
                    valid = v208;
                    ProcessHeap = HeapHandle;
                    v10 = BaseAddressa;
                    v14 = v176;
                    goto LABEL_175;
                  }
                }
                if ( !(_BYTE)v101 || !v190 )
                {
                  v111 = (unsigned __int16 *)Src;
                  v112 = HeapHandle;
LABEL_155:
                  v113 = 4 * v110[1] + 8;
                  if ( v194 )
                    v114 = 4 * *((unsigned __int8 *)v194 + 1) + 8;
                  else
                    v114 = 0;
                  if ( (v107 & 0x10) != 0 && BaseAddressa )
                    v115 = (BaseAddressa[1] + 3) & 0xFFFFFFFC;
                  else
                    v115 = 0;
                  if ( (v107 & 4) != 0 && v111 )
                    v116 = (v111[1] + 3) & 0xFFFFFFFC;
                  else
                    v116 = 0;
                  v176 = RtlAllocateHeap(v112, NtdllBaseTag + 1310720, v113 + v114 + v115 + v116 + 20);
                  v14 = v176;
                  if ( v176 )
                  {
                    v117 = (unsigned __int16 *)v176 + 10;
                    *v176 = 0LL;
                    *((_DWORD *)v14 + 4) = 0;
                    *((_WORD *)v14 + 1) |= v107;
                    *(_BYTE *)v14 = 1;
                    if ( (v107 & 0x10) != 0 && BaseAddressa )
                    {
                      v139 = (char *)v14 + 20;
                      if ( (a7 & 0x4000) != 0 )
                      {
                        v153 = GenericMapping;
                        if ( v168 )
                          v153 = 0LL;
                        RtlpNormalizeAcl((__int64)v117, (__int64)BaseAddressa, v153);
                        if ( v117[2] )
                        {
                          v115 = v117[1];
                        }
                        else
                        {
                          v139 = 0LL;
                          v115 = 0;
                        }
                      }
                      else
                      {
                        memmove(v117, BaseAddressa, BaseAddressa[1]);
                        if ( !v168 )
                          RtlpApplyAclToObject((__int64)v117, GenericMapping);
                        v140 = BaseAddressa[1];
                        if ( v115 > (unsigned int)v140 )
                          memset_thunk_772440563353939046((char *)v117 + v140, 0, v115 - (unsigned int)v140);
                      }
                      if ( v139 )
                      {
                        v117 = (unsigned __int16 *)((char *)v117 + v115);
                        v141 = v176;
                        v142 = (_DWORD)v139 - (_DWORD)v176;
                      }
                      else
                      {
                        v142 = 0;
                        v141 = v176;
                      }
                      *((_DWORD *)v141 + 3) = v142;
                      v14 = v176;
                    }
                    v11 = (unsigned __int16 *)Src;
                    if ( (v107 & 4) != 0 )
                    {
                      if ( Src )
                      {
                        if ( (a7 & 0x4000) != 0 )
                        {
                          v145 = GenericMapping;
                          if ( v169 )
                            v145 = 0LL;
                          RtlpNormalizeAcl((__int64)v117, (__int64)Src, v145);
                          v116 = v117[1];
                        }
                        else
                        {
                          memmove(v117, Src, *((unsigned __int16 *)Src + 1));
                          if ( !v169 )
                            RtlpApplyAclToObject((__int64)v117, GenericMapping);
                          v118 = v11[1];
                          if ( v116 > (unsigned int)v118 )
                            memset_thunk_772440563353939046((char *)v117 + v118, 0, v116 - (unsigned int)v118);
                        }
                        *((_DWORD *)v14 + 4) = (_DWORD)v117 - (_DWORD)v14;
                        v117 = (unsigned __int16 *)((char *)v117 + v116);
                      }
                      else
                      {
                        *((_DWORD *)v14 + 4) = 0;
                      }
                    }
                    memmove(v117, v192, v113);
                    v119 = (int)v117;
                    v120 = (char *)v117 + v113;
                    *((_DWORD *)v14 + 1) = v119 - (_DWORD)v14;
                    if ( v194 )
                    {
                      memmove(v120, v194, v114);
                      *((_DWORD *)v14 + 2) = (_DWORD)v120 - (_DWORD)v14;
                    }
                    ProcessHeap = HeapHandle;
                    valid = 0;
                    v10 = BaseAddressa;
                  }
                  else
                  {
                    ProcessHeap = HeapHandle;
                    valid = -1073741801;
                    v10 = BaseAddressa;
                    v11 = (unsigned __int16 *)Src;
                  }
                  goto LABEL_175;
                }
                valid = RtlpCreateServerAcl((__int64)v11, v214, v202, (ACL **)&v211, &v182);
                if ( valid >= 0 )
                {
                  v112 = HeapHandle;
                  if ( v169 && v11 )
                    RtlFreeHeap(HeapHandle, 0, v11);
                  v111 = (unsigned __int16 *)v211;
                  Src = v211;
                  v211 = 0LL;
                  goto LABEL_155;
                }
                goto LABEL_306;
              }
              if ( v108 )
              {
                v203 = 32LL;
                PrivilegeSet.PrivilegeCount = 1;
                PrivilegeSet.Control = 1;
                PrivilegeSet.Privilege[0].Luid = (_LUID)32LL;
                PrivilegeSet.Privilege[0].Attributes = 0;
                valid = ZwPrivilegeCheck(v108, &PrivilegeSet, Result);
                if ( valid < 0 )
                  goto LABEL_306;
                if ( !Result[0] )
                {
                  ProcessHeap = HeapHandle;
                  valid = -1073741727;
                  v10 = BaseAddressa;
                  v14 = v176;
                  goto LABEL_175;
                }
                goto LABEL_150;
              }
              ProcessHeap = HeapHandle;
              valid = -1073741700;
              v10 = BaseAddressa;
              goto LABEL_280;
            }
            if ( !ExistingTokenHandle )
            {
              v10 = BaseAddressa;
              valid = -1073741700;
              v11 = (unsigned __int16 *)Src;
              v14 = v176;
              goto LABEL_175;
            }
            valid = RtlSidDominates(Sid1, v134, &Dominates);
            if ( valid >= 0 )
            {
              v135 = (unsigned __int8)v204;
              if ( !Dominates )
                v135 = 1;
              v204 = v135;
              goto LABEL_129;
            }
LABEL_278:
            v10 = BaseAddressa;
LABEL_279:
            v11 = (unsigned __int16 *)Src;
LABEL_280:
            v14 = v176;
            goto LABEL_175;
          }
          if ( valid >= 0 )
          {
            v87 = v185;
            p_Acl = Handle;
            goto LABEL_123;
          }
LABEL_277:
          ProcessHeap = HeapHandle;
          goto LABEL_278;
        }
        v69 = *((_WORD *)v9 + 1);
        if ( (v69 & 0x10) != 0 )
        {
          if ( v69 >= 0 )
          {
            v71 = (char *)*((_QWORD *)v9 + 3);
LABEL_86:
            if ( v71 )
            {
              v72 = v71 + 8;
              for ( k = 0; k < *((unsigned __int16 *)v71 + 2); ++k )
              {
                if ( *v72 == 17 )
                {
                  if ( !v72 )
                  {
                    v74 = (char *)Sid1;
                    v76 = 0LL;
                    v75 = 0;
                    goto LABEL_90;
                  }
                  v75 = v72[1];
                  v76 = v72 + 8;
                  v68 = *((_DWORD *)v72 + 1);
                  Sid2 = v72 + 8;
                  if ( v75 == 8 || (v75 & 0x10) != 0 )
                  {
                    v74 = (char *)Sid1;
                    v72 = 0LL;
                    Sid2 = 0LL;
                    v76 = 0LL;
                    v68 = 0;
                    v75 = 0;
                  }
                  else
                  {
                    v74 = (char *)Sid1;
                    if ( (v75 & 8) != 0 )
                    {
                      v148 = *((_DWORD *)Sid1 + 2) < 0x2000u;
                      Sid2 = v72 + 8;
                      if ( v148 )
                      {
                        ProcessHeap = HeapHandle;
                        valid = -1073740730;
                        v10 = BaseAddressa;
                        v11 = 0LL;
                        v14 = v176;
                        goto LABEL_175;
                      }
                    }
                  }
                  goto LABEL_90;
                }
                v72 += *((unsigned __int16 *)v72 + 1);
              }
            }
            goto LABEL_89;
          }
          v70 = *((unsigned int *)v9 + 3);
          if ( (_DWORD)v70 )
          {
            v71 = (char *)v9 + v70;
            goto LABEL_86;
          }
        }
LABEL_89:
        v74 = (char *)Sid1;
        v72 = 0LL;
        v75 = 0;
        v76 = 0LL;
        goto LABEL_90;
      }
      if ( (v40 & 0x10) != 0 )
      {
        if ( v40 >= 0 )
        {
          v155 = (unsigned __int16 *)*((_QWORD *)v9 + 3);
        }
        else
        {
          v154 = *((unsigned int *)v9 + 3);
          if ( !(_DWORD)v154 )
          {
            BaseAddressa = 0LL;
            goto LABEL_382;
          }
          v155 = (unsigned __int16 *)((char *)v9 + v154);
        }
        BaseAddressa = v155;
      }
      else
      {
        BaseAddressa = 0LL;
      }
LABEL_382:
      v171 = 1;
      PrivilegeSetLength = v41 | v40 & 0x2000 | 0x10;
      goto LABEL_42;
    }
    goto LABEL_197;
  }
  if ( !v23 )
  {
    valid = -1073741733;
    goto LABEL_175;
  }
  if ( *(__int16 *)(v23 + 2) >= 0 )
  {
    v122 = *(void **)(v23 + 16);
    goto LABEL_196;
  }
  v150 = *(unsigned int *)(v23 + 8);
  if ( (_DWORD)v150 )
  {
    v122 = (void *)(v23 + v150);
    goto LABEL_196;
  }
LABEL_197:
  valid = -1073741733;
LABEL_175:
  if ( SecurityDescriptor )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, SecurityDescriptor);
  if ( v182 && v211 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v211);
  RtlFreeHeap(ProcessHeap, 0, v221);
  RtlFreeHeap(ProcessHeap, 0, v215);
  RtlFreeHeap(ProcessHeap, 0, v216);
  RtlFreeHeap(ProcessHeap, 0, v217);
  RtlFreeHeap(ProcessHeap, 0, v218);
  if ( v219 )
    RtlFreeHeap(ProcessHeap, 0, v219);
  if ( v220 )
    RtlFreeHeap(ProcessHeap, 0, v220);
  if ( (v168 || v183) && v10 )
    RtlFreeHeap(ProcessHeap, 0, v10);
  if ( v184 && v191 )
    RtlFreeHeap(ProcessHeap, 0, v191);
  if ( v169 )
  {
    if ( v11 )
      RtlFreeHeap(ProcessHeap, 0, v11);
  }
  *v223 = v14;
  return valid;
}
