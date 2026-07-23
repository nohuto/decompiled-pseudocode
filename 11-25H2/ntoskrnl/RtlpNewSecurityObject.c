/*
 * XREFs of RtlpNewSecurityObject @ 0x140927AA0
 * Callers:
 *     SeAssignSecurityEx2 @ 0x140436040 (SeAssignSecurityEx2.c)
 *     SeAssignSecurity @ 0x1409262C0 (SeAssignSecurity.c)
 *     RtlpNewSecurityObject @ 0x140927AA0 (RtlpNewSecurityObject.c)
 * Callees:
 *     ExAcquireResourceSharedLite @ 0x140295130 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x140296E10 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegionThread @ 0x14029B9C0 (KeLeaveCriticalRegionThread.c)
 *     SepLocateTokenTrustLevel @ 0x14035FEB0 (SepLocateTokenTrustLevel.c)
 *     SeAccessCheck @ 0x1403624F0 (SeAccessCheck.c)
 *     RtlpOwnerAcesPresent @ 0x1403CEDE0 (RtlpOwnerAcesPresent.c)
 *     RtlSidDominates @ 0x1403F2890 (RtlSidDominates.c)
 *     RtlFindAceByType @ 0x1404052C0 (RtlFindAceByType.c)
 *     SepLocateTokenIntegrity @ 0x14041DC40 (SepLocateTokenIntegrity.c)
 *     RtlSubAuthoritySid @ 0x14044F1F0 (RtlSubAuthoritySid.c)
 *     RtlpValidTrustSubjectContext @ 0x14045D468 (RtlpValidTrustSubjectContext.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     SePrivilegedServiceAuditAlarm @ 0x14089F8F0 (SePrivilegedServiceAuditAlarm.c)
 *     RtlAddProcessTrustLabelAce @ 0x140918E20 (RtlAddProcessTrustLabelAce.c)
 *     RtlpNormalizeAcl @ 0x14091B380 (RtlpNormalizeAcl.c)
 *     RtlpCreateServerAcl @ 0x14091B940 (RtlpCreateServerAcl.c)
 *     SepValidOwnerSubjectContext @ 0x14091C194 (SepValidOwnerSubjectContext.c)
 *     RtlpInheritAcl2 @ 0x1409273F0 (RtlpInheritAcl2.c)
 *     RtlpNewSecurityObject @ 0x140927AA0 (RtlpNewSecurityObject.c)
 *     RtlpCombineAcls @ 0x140929C90 (RtlpCombineAcls.c)
 *     RtlValidAcl @ 0x14092A320 (RtlValidAcl.c)
 *     RtlCreateAcl @ 0x140968260 (RtlCreateAcl.c)
 *     SePrivilegeCheck @ 0x1409C2C50 (SePrivilegeCheck.c)
 *     RtlpComputeMergedAcl @ 0x140AAC7E4 (RtlpComputeMergedAcl.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall RtlpNewSecurityObject(
        __int64 a1,
        _OWORD *a2,
        _QWORD *a3,
        __int64 a4,
        int a5,
        char a6,
        unsigned int a7,
        __int64 a8,
        GENERIC_MAPPING *a9,
        unsigned __int16 *a10)
{
  __int64 v10; // rsi
  _OWORD *v11; // r11
  char *v12; // r14
  char *v13; // r15
  char *v14; // r13
  char v15; // cl
  char *v16; // r9
  int v17; // edx
  __int16 v18; // ax
  int v19; // ebx
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *v21; // rax
  __int64 v22; // r8
  __int64 v23; // rdx
  unsigned __int8 *v24; // rbx
  unsigned __int16 *v25; // rsi
  unsigned __int8 *v26; // rdi
  unsigned __int8 *v27; // r13
  unsigned __int8 *v28; // r12
  unsigned __int8 **TokenIntegrity; // rax
  unsigned __int8 *v30; // r15
  unsigned __int8 *TokenTrustLevel; // r14
  void *Pool2; // rax
  size_t v33; // r8
  char *v34; // r13
  __int64 v35; // rax
  char *v36; // r12
  __int64 v37; // r8
  bool v38; // r8
  unsigned int v39; // edx
  char *v40; // rax
  __int64 v41; // rax
  char *v42; // rax
  char *v43; // rbx
  char *v44; // rbx
  ULONG v45; // r10d
  char v46; // r13
  int v47; // r12d
  char *v48; // r14
  unsigned __int8 *v49; // r15
  _BYTE *v50; // rsi
  signed int v51; // ebx
  int v52; // edi
  ACL *v53; // rdx
  __int16 v54; // r13
  int v55; // ecx
  int v56; // r13d
  __int16 v57; // dx
  char v58; // r15
  unsigned __int8 *v59; // r12
  _BYTE *v60; // rsi
  int v61; // edi
  __int64 v62; // rcx
  char *v63; // rdx
  __int16 v64; // cx
  PSID v65; // r12
  __int16 v66; // ax
  ACL *v67; // rcx
  PVOID AceByType; // rbx
  __int64 v69; // r8
  __int64 v70; // rdx
  unsigned int v71; // esi
  unsigned int v72; // r15d
  _OWORD *v73; // rdi
  __int16 v74; // ax
  ACL *v75; // rbx
  _DWORD *v76; // rax
  __int64 v77; // r8
  int v78; // edx
  int v79; // ebx
  unsigned __int8 *v80; // rsi
  void *v81; // r14
  PSID v82; // r12
  ACL *v83; // rax
  __int64 v84; // rcx
  __int64 v85; // rax
  __int64 v86; // rax
  __int64 v88; // rcx
  unsigned __int16 *v89; // rbx
  int v90; // eax
  char *v91; // rbx
  ACL *v92; // r15
  ACL *v93; // rax
  unsigned __int16 *v94; // rsi
  _OWORD *v95; // r14
  char v96; // r13
  __int64 v97; // rax
  __int16 v98; // ax
  ACL *v99; // rcx
  char *v100; // rax
  __int64 v101; // r8
  __int64 v102; // rax
  __int16 v103; // cx
  unsigned int v104; // ecx
  __int16 v105; // cx
  __int64 v106; // rcx
  char v107; // cl
  PSECURITY_SUBJECT_CONTEXT v108; // r12
  int v109; // ecx
  _BYTE *v110; // rdx
  unsigned int i; // r8d
  unsigned __int16 v112; // cx
  char v113; // al
  ACL *v114; // rcx
  _BYTE *v115; // rdi
  PVOID v116; // r14
  __int16 v117; // di
  PVOID v118; // rsi
  ACL *v119; // rax
  unsigned int v120; // r9d
  char *v121; // rax
  void *v122; // rdx
  int v123; // eax
  _OWORD *v124; // rdx
  char v125; // di
  char v126; // r15
  __int16 v127; // ax
  unsigned __int8 *v128; // r13
  __int64 v129; // r10
  _BYTE *v130; // r14
  __int16 v131; // si
  char v132; // di
  unsigned __int16 *v133; // r8
  __int16 v134; // r13
  __int16 v135; // cx
  char v136; // r15
  unsigned int v137; // r12d
  ACL *v138; // rax
  struct _SECURITY_SUBJECT_CONTEXT *v139; // r14
  char v140; // bl
  bool v141; // al
  char v142; // bl
  unsigned __int16 *v143; // rcx
  unsigned int v144; // r12d
  unsigned int v145; // r15d
  unsigned int v146; // esi
  unsigned int v147; // edi
  __int64 v148; // r14
  unsigned __int8 *v149; // rdx
  unsigned int v150; // r8d
  PGENERIC_MAPPING v151; // r14
  int v152; // r10d
  int v153; // ecx
  int v154; // ecx
  unsigned int v155; // eax
  int GenericAll; // eax
  __int64 v157; // rcx
  _OWORD *v158; // rax
  int v159; // r14d
  unsigned __int8 *v160; // rdx
  unsigned int v161; // r8d
  PGENERIC_MAPPING v162; // r14
  int v163; // r13d
  int v164; // ecx
  int v165; // ecx
  unsigned int v166; // eax
  int v167; // eax
  __int64 v168; // rax
  unsigned int v169; // r14d
  ACL *v170; // rax
  GENERIC_MAPPING *GenericMapping; // rsi
  __int16 v172; // cx
  char *v173; // rdx
  char v174; // al
  __int16 v175; // ax
  __int64 v176; // rax
  __int16 v177; // ax
  __int64 v178; // rax
  unsigned int v179; // ecx
  PGENERIC_MAPPING v180; // r8
  PGENERIC_MAPPING v181; // r8
  void *v182; // rax
  __int64 v183; // rax
  BOOLEAN v184; // bl
  __int16 v185; // ax
  ACL *v186; // rcx
  char *v187; // rax
  ACCESS_MASK v188; // edi
  void *v189; // rsi
  ULONG v190; // r14d
  __int64 v191; // rax
  __int64 v192; // rax
  char *v193; // rax
  __int64 v194; // rax
  __int64 v195; // rax
  BOOLEAN v196; // bl
  __int64 v197; // rax
  int v198; // edx
  char v199; // [rsp+90h] [rbp-80h]
  _BYTE AccessMode[15]; // [rsp+91h] [rbp-7Fh] BYREF
  PVOID P; // [rsp+A0h] [rbp-70h]
  char v202; // [rsp+A8h] [rbp-68h]
  ACCESS_MASK GrantedAccess; // [rsp+ACh] [rbp-64h] BYREF
  char v204; // [rsp+B0h] [rbp-60h]
  _OWORD *v205; // [rsp+B8h] [rbp-58h]
  ULONG Index; // [rsp+C0h] [rbp-50h] BYREF
  __int16 v207; // [rsp+C4h] [rbp-4Ch] BYREF
  char v208; // [rsp+C6h] [rbp-4Ah]
  BOOLEAN v209; // [rsp+C7h] [rbp-49h] BYREF
  char v210; // [rsp+C8h] [rbp-48h]
  char v211; // [rsp+C9h] [rbp-47h] BYREF
  __int16 v212; // [rsp+CAh] [rbp-46h]
  char v213; // [rsp+CCh] [rbp-44h]
  __int64 v214; // [rsp+D0h] [rbp-40h] BYREF
  PVOID v215; // [rsp+D8h] [rbp-38h]
  _WORD v216[2]; // [rsp+E0h] [rbp-30h] BYREF
  int v217; // [rsp+E4h] [rbp-2Ch]
  int v218; // [rsp+E8h] [rbp-28h]
  _OWORD *v219; // [rsp+F0h] [rbp-20h]
  void *Src; // [rsp+F8h] [rbp-18h]
  void *v221; // [rsp+100h] [rbp-10h]
  PSECURITY_SUBJECT_CONTEXT SubjectSecurityContext; // [rsp+108h] [rbp-8h]
  PGENERIC_MAPPING v223; // [rsp+110h] [rbp+0h]
  int v224; // [rsp+118h] [rbp+8h] BYREF
  PSID Sid1; // [rsp+120h] [rbp+10h]
  __int64 v226; // [rsp+128h] [rbp+18h]
  __int64 v227; // [rsp+130h] [rbp+20h]
  NTSTATUS AccessStatus; // [rsp+138h] [rbp+28h] BYREF
  int v229; // [rsp+13Ch] [rbp+2Ch]
  void *v230; // [rsp+140h] [rbp+30h]
  PVOID SecurityDescriptor; // [rsp+148h] [rbp+38h] BYREF
  __int64 v232; // [rsp+150h] [rbp+40h]
  __int64 v233; // [rsp+158h] [rbp+48h]
  PVOID v234; // [rsp+160h] [rbp+50h]
  unsigned __int16 *v235; // [rsp+168h] [rbp+58h]
  PVOID p_Acl; // [rsp+170h] [rbp+60h]
  ACL *v237; // [rsp+178h] [rbp+68h] BYREF
  unsigned __int16 *v238; // [rsp+180h] [rbp+70h]
  PVOID v239; // [rsp+188h] [rbp+78h] BYREF
  PVOID v240; // [rsp+190h] [rbp+80h] BYREF
  PSID ProcessTrustLabelSid; // [rsp+198h] [rbp+88h]
  int v242; // [rsp+1A0h] [rbp+90h]
  _QWORD *v243; // [rsp+1A8h] [rbp+98h]
  _OWORD v244[2]; // [rsp+1B0h] [rbp+A0h] BYREF
  __int64 v245; // [rsp+1D0h] [rbp+C0h]
  int v246; // [rsp+1D8h] [rbp+C8h]
  unsigned __int16 v247; // [rsp+1DCh] [rbp+CCh]
  int v248; // [rsp+1E0h] [rbp+D0h]
  unsigned __int16 v249; // [rsp+1E4h] [rbp+D4h]
  struct _PRIVILEGE_SET RequiredPrivileges; // [rsp+1E8h] [rbp+D8h] BYREF
  ACL Acl; // [rsp+200h] [rbp+F0h] BYREF
  _BYTE v252[120]; // [rsp+208h] [rbp+F8h] BYREF
  ACL v253; // [rsp+280h] [rbp+170h] BYREF

  v10 = a1;
  v223 = a9;
  v11 = a2;
  v235 = a10;
  v243 = a3;
  v245 = 0LL;
  v12 = 0LL;
  v204 = 0;
  v13 = 0LL;
  v14 = 0LL;
  v212 = 0;
  v199 = 0;
  *(_WORD *)AccessMode = 256;
  v216[0] = 0;
  v207 = 0;
  LOBYTE(v229) = 0;
  v211 = 0;
  v226 = a1;
  v15 = a7;
  v233 = a4;
  v16 = 0LL;
  p_Acl = &Acl;
  v219 = a2;
  SubjectSecurityContext = (PSECURITY_SUBJECT_CONTEXT)a8;
  v215 = 0LL;
  v224 = 0;
  *(_QWORD *)&AccessMode[7] = 0LL;
  v239 = 0LL;
  v234 = 0LL;
  Sid1 = 0LL;
  ProcessTrustLabelSid = 0LL;
  v227 = 0LL;
  v232 = 0LL;
  v238 = 0LL;
  v205 = 0LL;
  LODWORD(v214) = 0;
  AccessStatus = 0;
  v230 = 0LL;
  v237 = 0LL;
  v202 = 0;
  SecurityDescriptor = 0LL;
  v209 = 1;
  v240 = 0LL;
  v213 = 0;
  memset(v244, 0, sizeof(v244));
  memset(&RequiredPrivileges, 0, sizeof(RequiredPrivileges));
  if ( (a7 & 0x2000) == 0 )
    AccessMode[1] = KeGetCurrentThread()->PreviousMode;
  if ( a2 )
  {
    v210 = 1;
  }
  else
  {
    v11 = v244;
    v210 = 0;
    v219 = v244;
    LOBYTE(v244[0]) = 1;
  }
  v17 = *((unsigned __int16 *)v11 + 1);
  v18 = *((_WORD *)v11 + 1) & 0x80;
  LOBYTE(v19) = v18 != 0;
  LOBYTE(v17) = (v17 & 0x40) != 0;
  v242 = v17;
  if ( a8 || (v38 = v18 != 0, v217 = (unsigned __int8)v19, v18) )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceSharedLite(*(PERESOURCE *)(*(_QWORD *)(a8 + 16) + 48LL), 1u);
    if ( *(_QWORD *)a8 )
    {
      v21 = KeGetCurrentThread();
      --v21->KernelApcDisable;
      ExAcquireResourceSharedLite(*(PERESOURCE *)(*(_QWORD *)a8 + 48LL), 1u);
    }
    v22 = *(_QWORD *)a8;
    LOBYTE(v217) = v19;
    if ( v22 )
    {
      v19 = (unsigned __int8)v19;
      if ( *(_DWORD *)(a8 + 8) == 1 )
        v19 = 1;
      v217 = v19;
    }
    else
    {
      v22 = *(_QWORD *)(a8 + 16);
    }
    v23 = *(_QWORD *)(a8 + 16);
    v24 = *(unsigned __int8 **)(v22 + 168);
    v25 = *(unsigned __int16 **)(v22 + 184);
    v26 = *(unsigned __int8 **)(v23 + 168);
    v27 = *(unsigned __int8 **)(*(_QWORD *)(v22 + 152) + 16LL * *(unsigned int *)(v22 + 144));
    v28 = *(unsigned __int8 **)(*(_QWORD *)(v23 + 152) + 16LL * *(unsigned int *)(v23 + 144));
    TokenIntegrity = (unsigned __int8 **)SepLocateTokenIntegrity(v22);
    if ( TokenIntegrity )
      v30 = *TokenIntegrity;
    else
      v30 = (unsigned __int8 *)SepDefaultMandatorySid;
    TokenTrustLevel = (unsigned __int8 *)SepLocateTokenTrustLevel(SubjectSecurityContext);
    Pool2 = (void *)ExAllocatePool2(0x40uLL);
    v234 = Pool2;
    if ( !Pool2 )
    {
      ExReleaseResourceLite(*((PERESOURCE *)SubjectSecurityContext->PrimaryToken + 6));
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      if ( SubjectSecurityContext->ClientToken )
      {
        ExReleaseResourceLite(*((PERESOURCE *)SubjectSecurityContext->ClientToken + 6));
        KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      }
      return 3221225626LL;
    }
    memmove(Pool2, v27, 4LL * v27[1] + 8);
    v33 = 4LL * v30[1] + 8;
    v34 = (char *)v234 + 4 * v27[1] + 8;
    Sid1 = v34;
    memmove(v34, v30, v33);
    v35 = v30[1];
    v13 = &v34[4 * v35 + 8];
    v227 = (__int64)v13;
    if ( TokenTrustLevel )
    {
      v101 = TokenTrustLevel[1];
      ProcessTrustLabelSid = &v34[4 * v35 + 8];
      memmove(ProcessTrustLabelSid, TokenTrustLevel, 4 * v101 + 8);
      v13 += 4 * TokenTrustLevel[1] + 8;
      v227 = (__int64)v13;
    }
    else
    {
      ProcessTrustLabelSid = 0LL;
    }
    if ( v24 )
    {
      v12 = v13;
      memmove(v13, v24, 4LL * v24[1] + 8);
      v13 += 4 * v24[1] + 8;
      v227 = (__int64)v13;
    }
    else
    {
      v12 = 0LL;
    }
    memmove(v13, v28, 4LL * v28[1] + 8);
    v36 = &v13[4 * v28[1] + 8];
    v238 = (unsigned __int16 *)v36;
    if ( v26 )
    {
      v37 = v26[1];
      v232 = (__int64)v36;
      v14 = v36;
      memmove(v36, v26, 4 * v37 + 8);
      v36 += 4 * v26[1] + 8;
      v238 = (unsigned __int16 *)v36;
    }
    else
    {
      v14 = 0LL;
      v232 = 0LL;
    }
    if ( v25 )
      memmove(v36, v25, v25[1]);
    else
      v238 = 0LL;
    ExReleaseResourceLite(*((PERESOURCE *)SubjectSecurityContext->PrimaryToken + 6));
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    if ( SubjectSecurityContext->ClientToken )
    {
      ExReleaseResourceLite(*((PERESOURCE *)SubjectSecurityContext->ClientToken + 6));
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    }
    v16 = (char *)v234;
    v10 = v226;
    v38 = v217;
    v15 = a7;
    v11 = v219;
  }
  v39 = *((unsigned __int16 *)v11 + 1);
  if ( (v39 & 0x8000u) != 0 )
  {
    v41 = *((unsigned int *)v11 + 1);
    if ( !(_DWORD)v41 )
      goto LABEL_29;
    v40 = (char *)v11 + v41;
  }
  else
  {
    v40 = (char *)*((_QWORD *)v11 + 1);
  }
  Src = v40;
  if ( v40 )
  {
    HIBYTE(v207) = 1;
    goto LABEL_33;
  }
LABEL_29:
  if ( (v15 & 0x20) != 0 )
  {
    if ( !v10 )
    {
      v94 = *(unsigned __int16 **)&AccessMode[7];
      v51 = -1073741734;
      v92 = *(ACL **)&AccessMode[7];
      v96 = 0;
      goto LABEL_144;
    }
    if ( *(__int16 *)(v10 + 2) < 0 )
    {
      v197 = *(unsigned int *)(v10 + 4);
      if ( !(_DWORD)v197 )
        goto LABEL_414;
      v182 = (void *)(v10 + v197);
    }
    else
    {
      v182 = *(void **)(v10 + 8);
    }
    Src = v182;
    HIBYTE(v207) = 1;
    if ( v182 )
      goto LABEL_33;
LABEL_414:
    v94 = *(unsigned __int16 **)&AccessMode[7];
    v51 = -1073741734;
    v95 = v205;
    v92 = *(ACL **)&AccessMode[7];
    v96 = 0;
    goto LABEL_122;
  }
  v42 = v16;
  if ( v38 )
    v42 = v13;
  Src = v42;
  if ( !v42 )
  {
    v94 = *(unsigned __int16 **)&AccessMode[7];
    v51 = -1073741700;
    v95 = v205;
    v92 = *(ACL **)&AccessMode[7];
    v96 = 0;
    goto LABEL_122;
  }
LABEL_33:
  if ( (v39 & 0x8000u) != 0 )
  {
    v97 = *((unsigned int *)v11 + 2);
    if ( !(_DWORD)v97 )
      goto LABEL_36;
    v43 = (char *)v11 + v97;
  }
  else
  {
    v43 = (char *)*((_QWORD *)v11 + 2);
  }
  v221 = v43;
  if ( v43 )
    goto LABEL_40;
LABEL_36:
  if ( (v15 & 0x40) != 0 )
  {
    if ( !v10 )
    {
      v94 = *(unsigned __int16 **)&AccessMode[7];
      v51 = -1073741733;
      v95 = v205;
      v92 = *(ACL **)&AccessMode[7];
      v96 = 0;
      goto LABEL_122;
    }
    if ( *(__int16 *)(v10 + 2) >= 0 )
    {
      v44 = *(char **)(v10 + 16);
    }
    else
    {
      v191 = *(unsigned int *)(v10 + 8);
      if ( !(_DWORD)v191 )
        goto LABEL_173;
      v44 = (char *)(v10 + v191);
    }
  }
  else
  {
    v44 = v12;
    if ( v38 )
      v44 = v14;
  }
  v221 = v44;
  if ( !v44 )
  {
LABEL_173:
    v94 = *(unsigned __int16 **)&AccessMode[7];
    v51 = -1073741733;
    v95 = v205;
    v92 = *(ACL **)&AccessMode[7];
    v96 = 0;
    goto LABEL_122;
  }
LABEL_40:
  v45 = v15 & 4;
  Index = v45;
  v46 = v45 != 0;
  v47 = v15 & 2;
  v208 = v47 != 0;
  v48 = 0LL;
  if ( (v39 & 0x10) != 0 )
  {
    if ( (v39 & 0x8000u) == 0 )
    {
      v49 = (unsigned __int8 *)*((_QWORD *)v11 + 3);
    }
    else
    {
      v62 = *((unsigned int *)v11 + 3);
      if ( (_DWORD)v62 )
        v49 = (unsigned __int8 *)v11 + v62;
      else
        v49 = 0LL;
    }
  }
  else
  {
    v49 = 0LL;
  }
  if ( !v10 )
    goto LABEL_43;
  v103 = *(_WORD *)(v10 + 2);
  if ( (v103 & 0x10) == 0 )
    goto LABEL_43;
  if ( v103 < 0 )
  {
    v104 = *(_DWORD *)(v10 + 12);
    if ( v104 )
    {
      v50 = (_BYTE *)(v226 + v104);
      goto LABEL_44;
    }
LABEL_43:
    v50 = 0LL;
    goto LABEL_44;
  }
  v50 = *(_BYTE **)(v10 + 24);
LABEL_44:
  v51 = 0;
  v52 = ((v39 & 0x10) != 0 ? 4 : 0) | (v39 >> 2) & 8 | (v39 >> 1) & 0x1400;
  if ( !v52 && !v50 )
  {
    AccessMode[0] = 0;
    P = 0LL;
    GrantedAccess = -2147483637;
    LODWORD(v214) = v47 != 0 ? 0x400 : 0;
    goto LABEL_52;
  }
  GrantedAccess = 200;
  while ( 1 )
  {
    v53 = 0LL;
    if ( (unsigned int)v48 >= 2 )
      goto LABEL_48;
    v83 = (ACL *)ExAllocatePool2(0x100uLL);
    P = v83;
    if ( !v83 )
    {
      v51 = -1073741801;
      v92 = 0LL;
      goto LABEL_514;
    }
    v51 = RtlpInheritAcl2(
            v50,
            v49,
            v52,
            a6,
            v208,
            v46,
            (__int64)Src,
            (__int64)v221,
            v227,
            v232,
            v223,
            2,
            v233,
            a5,
            &GrantedAccess,
            v83,
            AccessMode,
            (int *)&v214);
    if ( v51 >= 0 )
      break;
    ExFreePoolWithTag(P, 0);
    v53 = 0LL;
    if ( v51 != -1073741789 )
      goto LABEL_48;
    LODWORD(v48) = (_DWORD)v48 + 1;
  }
  if ( GrantedAccess )
  {
    v53 = (ACL *)P;
LABEL_48:
    v48 = 0LL;
  }
  else
  {
    ExFreePoolWithTag(P, 0);
    v48 = 0LL;
    v53 = 0LL;
  }
  P = v53;
  if ( v51 >= 0 )
  {
    v45 = Index;
    v11 = v219;
    v204 = 1;
    v56 = 2 * (v214 & 0x1400 | (2 * (v214 & 8 | 0x2004)));
    v218 = v56;
  }
  else
  {
    P = v53;
    if ( v51 != -2147483637 )
    {
      v94 = *(unsigned __int16 **)&AccessMode[7];
      v92 = v53;
      v95 = v205;
      v96 = 0;
      goto LABEL_122;
    }
    v45 = Index;
    v11 = v219;
LABEL_52:
    v54 = *((_WORD *)v11 + 1);
    v55 = 34816;
    if ( !v47 )
      v55 = 0x8000;
    if ( (v54 & 0x30) != 0x30 )
    {
      v56 = v55;
      v218 = v55;
      goto LABEL_56;
    }
    if ( (v54 & 0x10) == 0 )
    {
      P = 0LL;
      goto LABEL_428;
    }
    if ( v54 >= 0 )
    {
      v193 = (char *)*((_QWORD *)v11 + 3);
LABEL_461:
      P = v193;
    }
    else
    {
      v192 = *((unsigned int *)v11 + 3);
      if ( (_DWORD)v192 )
      {
        v193 = (char *)v11 + v192;
        goto LABEL_461;
      }
      P = 0LL;
    }
LABEL_428:
    AccessMode[0] = 1;
    v56 = v55 | v54 & 0x2000 | 0x10;
    v218 = v56;
  }
LABEL_56:
  v57 = *((_WORD *)v11 + 1);
  v58 = v45 != 0;
  if ( (v57 & 0x10) != 0 )
  {
    if ( v57 >= 0 )
    {
      v59 = (unsigned __int8 *)*((_QWORD *)v11 + 3);
    }
    else
    {
      v84 = *((unsigned int *)v11 + 3);
      if ( (_DWORD)v84 )
        v59 = (unsigned __int8 *)v11 + v84;
      else
        v59 = 0LL;
    }
  }
  else
  {
    v59 = 0LL;
  }
  if ( !v226 )
    goto LABEL_59;
  v105 = *(_WORD *)(v226 + 2);
  if ( (v105 & 0x10) == 0 )
    goto LABEL_59;
  if ( v105 >= 0 )
  {
    v60 = *(_BYTE **)(v226 + 24);
    goto LABEL_60;
  }
  v106 = *(unsigned int *)(v226 + 12);
  if ( (_DWORD)v106 )
    v60 = (_BYTE *)(v226 + v106);
  else
LABEL_59:
    v60 = 0LL;
LABEL_60:
  v51 = 0;
  v61 = ((*((_WORD *)v11 + 1) & 0x10) != 0 ? 4 : 0) | (*((unsigned __int16 *)v11 + 1) >> 2) & 8 | (*((unsigned __int16 *)v11 + 1) >> 1) & 0x400;
  if ( v61 || v60 )
  {
    GrantedAccess = 200;
    while ( 1 )
    {
      v63 = 0LL;
      if ( (unsigned int)v48 >= 2 )
        goto LABEL_68;
      v93 = (ACL *)ExAllocatePool2(0x100uLL);
      v215 = v93;
      if ( !v93 )
      {
LABEL_175:
        v51 = -1073741801;
        goto LABEL_176;
      }
      v51 = RtlpInheritAcl2(
              v60,
              v59,
              v61,
              a6,
              v208,
              v58,
              (__int64)Src,
              (__int64)v221,
              v227,
              v232,
              v223,
              2,
              v233,
              a5,
              &GrantedAccess,
              v93,
              v216,
              &AccessStatus);
      if ( v51 >= 0 )
        break;
      ExFreePoolWithTag(v215, 0);
      v63 = 0LL;
      if ( v51 != -1073741789 )
        goto LABEL_68;
      LODWORD(v48) = (_DWORD)v48 + 1;
    }
    if ( GrantedAccess )
    {
      v63 = (char *)v215;
LABEL_68:
      v48 = 0LL;
    }
    else
    {
      ExFreePoolWithTag(v215, 0);
      v48 = 0LL;
      v63 = 0LL;
    }
    v215 = v63;
    GrantedAccess = v51;
    if ( v51 >= 0 )
    {
      v11 = v219;
      v48 = v63;
      HIBYTE(v212) = 1;
      goto LABEL_74;
    }
    v215 = v63;
    if ( v51 == -2147483637 )
    {
      v11 = v219;
      goto LABEL_72;
    }
    goto LABEL_176;
  }
  v215 = 0LL;
  GrantedAccess = -2147483637;
LABEL_72:
  v64 = *((_WORD *)v11 + 1);
  if ( (v64 & 0x30) == 0x30 )
  {
    if ( (v64 & 0x10) != 0 )
    {
      if ( v64 >= 0 )
      {
        v48 = (char *)*((_QWORD *)v11 + 3);
        v215 = v48;
      }
      else
      {
        v194 = *((unsigned int *)v11 + 3);
        if ( (_DWORD)v194 )
        {
          v48 = (char *)v11 + v194;
          v215 = (char *)v11 + v194;
        }
        else
        {
          v215 = 0LL;
        }
      }
    }
    else
    {
      v215 = 0LL;
    }
  }
  else
  {
    v48 = (char *)v215;
  }
LABEL_74:
  v65 = ProcessTrustLabelSid;
  Index = 0;
  while ( 1 )
  {
    v66 = *((_WORD *)v11 + 1);
    if ( (v66 & 0x10) != 0 )
    {
      if ( v66 >= 0 )
      {
        v67 = (ACL *)*((_QWORD *)v11 + 3);
      }
      else
      {
        v85 = *((unsigned int *)v11 + 3);
        if ( (_DWORD)v85 )
          v67 = (ACL *)((char *)v11 + v85);
        else
          v67 = 0LL;
      }
    }
    else
    {
      v67 = 0LL;
    }
    AceByType = RtlFindAceByType(v67, 0x14u, &Index);
    v70 = (__int64)AceByType + 8;
    if ( !AceByType )
      v70 = 0LL;
    if ( v70 && !RtlpValidTrustSubjectContext(v65, v70, v69, &GrantedAccess) )
    {
      v92 = (ACL *)P;
      v51 = -1073741790;
      v95 = v205;
      v94 = 0LL;
      v96 = 0;
      goto LABEL_122;
    }
    ++Index;
    if ( !AceByType )
      break;
    v11 = v219;
  }
  v71 = a7;
  v72 = 4;
  if ( (a7 & 0x800) == 0 )
  {
    v73 = v219;
LABEL_83:
    v240 = v48;
    goto LABEL_84;
  }
  Index = 0;
  v73 = v219;
  while ( 2 )
  {
    v185 = *((_WORD *)v73 + 1);
    if ( (v185 & 0x10) != 0 )
    {
      if ( v185 >= 0 )
      {
        v186 = (ACL *)*((_QWORD *)v73 + 3);
      }
      else
      {
        v195 = *((unsigned int *)v73 + 3);
        if ( (_DWORD)v195 )
          v186 = (ACL *)((char *)v73 + v195);
        else
          v186 = 0LL;
      }
    }
    else
    {
      v186 = 0LL;
    }
    v187 = (char *)RtlFindAceByType(v186, 0x14u, &Index);
    ++Index;
    if ( !v187 )
    {
      if ( !v65 )
        goto LABEL_83;
      if ( v235 )
      {
        v188 = *((_DWORD *)v235 + 1);
        v189 = v65;
        v190 = 0;
        goto LABEL_451;
      }
      v51 = -1073741811;
      v96 = 0;
LABEL_143:
      v92 = (ACL *)P;
      v94 = *(unsigned __int16 **)&AccessMode[7];
LABEL_144:
      v95 = v205;
      goto LABEL_122;
    }
    if ( (v187[1] & 8) != 0 )
      continue;
    break;
  }
  v188 = *((_DWORD *)v187 + 1);
  v189 = v187 + 8;
  v190 = (unsigned __int8)v187[1];
  if ( !v235 || (v188 & *((_DWORD *)v235 + 1)) != v188 || v187 == (char *)-8LL )
    goto LABEL_142;
LABEL_451:
  v51 = RtlCreateAcl(&v253, 0x58u, 2u);
  if ( v51 < 0 )
    goto LABEL_176;
  v51 = RtlAddProcessTrustLabelAce(&v253, 2u, v190, v189, 0x14u, v188);
  if ( v51 < 0 )
    goto LABEL_176;
  v73 = v219;
  v51 = RtlpComputeMergedAcl(
          (int)v215,
          (*((_WORD *)v219 + 1) & 0x800 | (*((unsigned __int16 *)v219 + 1) >> 1) & 0x18u) >> 1,
          (int)&v253,
          4,
          (__int64)Src,
          (__int64)v221,
          (__int64)v223,
          2,
          (__int64)&v240,
          (__int64)&v214);
  if ( v51 < 0 )
    goto LABEL_176;
  v71 = a7;
  v213 = 1;
LABEL_84:
  v74 = *((_WORD *)v73 + 1);
  if ( (v74 & 0x10) != 0 )
  {
    if ( v74 >= 0 )
    {
      v75 = (ACL *)*((_QWORD *)v73 + 3);
    }
    else
    {
      v86 = *((unsigned int *)v73 + 3);
      if ( (_DWORD)v86 )
        v75 = (ACL *)((char *)v73 + v86);
      else
        v75 = 0LL;
    }
  }
  else
  {
    v75 = 0LL;
  }
  GrantedAccess = 0;
  v246 = 0;
  v247 = 256;
  Index = 0;
  while ( 2 )
  {
    while ( 2 )
    {
      v76 = RtlFindAceByType(v75, 0x15u, &Index);
      if ( !v76 )
      {
LABEL_88:
        ++Index;
        if ( !v76 )
        {
          v51 = GrantedAccess;
          goto LABEL_90;
        }
        continue;
      }
      break;
    }
    if ( (v76[1] & 0xFF000000) != 0 )
      goto LABEL_536;
    if ( (*((_BYTE *)v76 + 1) & 0x40) == 0 )
    {
      v198 = *(_DWORD *)((char *)v76 + 10) - v246;
      if ( !v198 )
        v198 = *((unsigned __int16 *)v76 + 7) - v247;
      if ( v198 || *((_BYTE *)v76 + 9) != 1 || v76[4] )
      {
LABEL_536:
        v51 = -1073741811;
        goto LABEL_90;
      }
      goto LABEL_88;
    }
    if ( RtlpValidTrustSubjectContext(v65, (__int64)(v76 + 2), v77, &GrantedAccess) )
    {
      ++Index;
      continue;
    }
    break;
  }
  v51 = -1073741790;
LABEL_90:
  if ( v51 < 0 )
  {
LABEL_176:
    v92 = (ACL *)P;
    v96 = 0;
    v94 = *(unsigned __int16 **)&AccessMode[7];
    v95 = v205;
    goto LABEL_122;
  }
  v78 = (v71 >> 8) & 1 | 2;
  if ( (v71 & 0x200) == 0 )
    v78 = (v71 >> 8) & 1;
  v79 = v78 | 4;
  if ( (v71 & 0x400) == 0 )
    v79 = v78;
  if ( v79 )
  {
    v80 = (unsigned __int8 *)v230;
    v81 = v230;
    goto LABEL_97;
  }
  v98 = *((_WORD *)v73 + 1);
  if ( (v98 & 0x10) != 0 )
  {
    if ( v98 >= 0 )
    {
      v99 = (ACL *)*((_QWORD *)v73 + 3);
    }
    else
    {
      v102 = *((unsigned int *)v73 + 3);
      if ( (_DWORD)v102 )
        v99 = (ACL *)((char *)v73 + v102);
      else
        v99 = 0LL;
    }
  }
  else
  {
    v99 = 0LL;
  }
  v100 = (char *)RtlFindAceByType(v99, 0x11u, 0LL);
  v81 = v100;
  if ( !v100 )
  {
    v80 = (unsigned __int8 *)v230;
LABEL_97:
    v82 = Sid1;
    goto LABEL_181;
  }
  v107 = v100[1];
  v80 = (unsigned __int8 *)(v100 + 8);
  v79 = *((_DWORD *)v100 + 1);
  v230 = v100 + 8;
  v202 = v107;
  if ( v107 == 8 || (v107 & 0x10) != 0 )
  {
    v81 = 0LL;
    v230 = 0LL;
    v80 = 0LL;
    v202 = 0;
    v79 = 0;
    v82 = Sid1;
    goto LABEL_181;
  }
  v82 = Sid1;
  if ( (v107 & 8) != 0 )
  {
    v202 = v107;
    v230 = v100 + 8;
    if ( *RtlSubAuthoritySid(Sid1, 0) < 0x2000 )
    {
      v92 = (ACL *)P;
      v51 = -1073740730;
      v94 = *(unsigned __int16 **)&AccessMode[7];
      v96 = 0;
      v95 = v205;
      goto LABEL_122;
    }
  }
LABEL_181:
  if ( !v79 )
  {
    if ( v82 && *RtlSubAuthoritySid(v82, 0) < 0x2000 )
    {
      v79 = 1;
      goto LABEL_182;
    }
    v108 = SubjectSecurityContext;
LABEL_185:
    if ( v80 )
    {
      memset_0(v252, 0, sizeof(v252));
      Acl = (ACL)8388610LL;
      v248 = 0;
      v249 = 4096;
      if ( (unsigned __int64)v80 <= 0x7FFFFFFF0000LL || (*v80 & 0xF) != 1 || v80[1] > 0xFu )
      {
        v92 = (ACL *)P;
        v51 = -1073741704;
        v94 = *(unsigned __int16 **)&AccessMode[7];
        v96 = 0;
        v95 = v205;
        goto LABEL_122;
      }
      v109 = *(_DWORD *)(v80 + 2) - v248;
      if ( !v109 )
        v109 = *((unsigned __int16 *)v80 + 3) - v249;
      if ( v109 )
      {
LABEL_142:
        v51 = -1073741811;
        v96 = 0;
        goto LABEL_143;
      }
      if ( (v202 & 0xE0) != 0 )
      {
        v51 = -1073741811;
        v96 = 0;
        goto LABEL_143;
      }
      if ( (v79 & 0xFFFFFFF8) != 0 )
      {
        v51 = -1073741811;
        v96 = 0;
        goto LABEL_143;
      }
      if ( !RtlValidAcl(&Acl) )
      {
LABEL_518:
        v92 = (ACL *)P;
        v51 = -1073741705;
        v94 = *(unsigned __int16 **)&AccessMode[7];
        v96 = 0;
        v95 = v205;
        goto LABEL_122;
      }
      v110 = v252;
      for ( i = 0; i < Acl.AceCount; ++i )
      {
        if ( v110 >= (_BYTE *)&Acl + Acl.AclSize )
          goto LABEL_518;
        v110 += *((unsigned __int16 *)v110 + 1);
      }
      if ( v110 > (_BYTE *)&Acl + Acl.AclSize )
        v110 = 0LL;
      v112 = 4 * (v80[1] + 4);
      if ( !v110 || &v110[v112] > (_BYTE *)&Acl + Acl.AclSize )
      {
        v92 = (ACL *)P;
        v51 = -1073741671;
        v94 = *(unsigned __int16 **)&AccessMode[7];
        v96 = 0;
        v95 = v205;
        goto LABEL_122;
      }
      v113 = v202;
      *((_WORD *)v110 + 1) = v112;
      v110[1] = v113;
      *v110 = 17;
      *((_DWORD *)v110 + 1) = v79;
      memmove(v110 + 8, v80, 4LL * v80[1] + 8);
      ++Acl.AceCount;
      v114 = &Acl;
      Acl.AclRevision = 2;
      GrantedAccess = 0;
    }
    else
    {
      v114 = 0LL;
      p_Acl = 0LL;
    }
    if ( (a7 & 0x700) == 0 )
    {
      if ( !v81 && v114 )
        v72 = 0;
      else
        v72 = (*((_WORD *)v73 + 1) & 0x2800 | (*((unsigned __int16 *)v73 + 1) >> 1) & 0x18u) >> 1;
    }
    if ( v226 )
    {
      v177 = *(_WORD *)(v226 + 2);
      if ( (v177 & 0x10) != 0 )
      {
        if ( v177 >= 0 )
        {
          v115 = *(_BYTE **)(v226 + 24);
LABEL_205:
          v51 = 0;
          if ( !v72 && !v115 )
            goto LABEL_207;
          v169 = 0;
          GrantedAccess = 200;
          while ( 1 )
          {
            v118 = 0LL;
            if ( v169 >= 2 )
              break;
            v170 = (ACL *)ExAllocatePool2(0x100uLL);
            v118 = v170;
            if ( !v170 )
              goto LABEL_175;
            v51 = RtlpInheritAcl2(
                    v115,
                    (unsigned __int8 *)p_Acl,
                    v72,
                    a6,
                    1,
                    0,
                    (__int64)Src,
                    (__int64)v221,
                    v227,
                    v232,
                    v223,
                    3,
                    v233,
                    a5,
                    &GrantedAccess,
                    v170,
                    (_BYTE *)v216 + 1,
                    (int *)&v214);
            if ( v51 >= 0 )
            {
              if ( !GrantedAccess )
              {
                ExFreePoolWithTag(v118, 0);
                v118 = 0LL;
              }
              break;
            }
            ExFreePoolWithTag(v118, 0);
            v118 = 0LL;
            if ( v51 != -1073741789 )
              break;
            ++v169;
          }
          if ( v51 != -2147483637 )
          {
            if ( v51 < 0 )
              goto LABEL_176;
            v117 = v214;
            v116 = p_Acl;
          }
          else
          {
LABEL_207:
            v116 = p_Acl;
            v117 = 0;
            v118 = p_Acl;
            LODWORD(v214) = 0;
          }
          v92 = (ACL *)P;
          v51 = RtlpCombineAcls(
                  (_DWORD)P,
                  (_DWORD)v118,
                  (_DWORD)v215,
                  (_DWORD)v215,
                  (__int64)v240,
                  (__int64)v215,
                  (__int64)&v237,
                  (__int64)&v224);
          v224 |= (v56 & 0x2000) << 17;
          if ( v118 && v118 != v116 )
            ExFreePoolWithTag(v118, 0);
          if ( v51 >= 0 )
          {
            v119 = v237;
            if ( v237 )
            {
              if ( v204 && v92 )
              {
                ExFreePoolWithTag(v92, 0);
                v119 = v237;
              }
              v92 = v119;
              P = v119;
              LOBYTE(v212) = 1;
              v237 = 0LL;
              v218 = (2 * (v117 & 0x1400 | (2 * (v117 & 8 | 4)))) | v56;
            }
            v120 = a7;
            if ( (a7 & 8) != 0 )
              goto LABEL_225;
            v121 = (char *)RtlFindAceByType(v92, 0x11u, 0LL);
            if ( v121 )
              v122 = v121 + 8;
            else
              v122 = v230;
            if ( !v122 )
            {
LABEL_224:
              v120 = a7;
LABEL_225:
              v124 = v219;
              v125 = (v120 & 4) != 0;
              v126 = v120 & 1;
              v127 = *((_WORD *)v219 + 1);
              if ( (v127 & 4) != 0 )
              {
                if ( v127 >= 0 )
                {
                  v128 = (unsigned __int8 *)*((_QWORD *)v219 + 4);
                }
                else
                {
                  v168 = *((unsigned int *)v219 + 4);
                  if ( (_DWORD)v168 )
                    v128 = (unsigned __int8 *)v219 + v168;
                  else
                    v128 = 0LL;
                }
              }
              else
              {
                v128 = 0LL;
              }
              v129 = v226;
              if ( !v226 )
                goto LABEL_228;
              v175 = *(_WORD *)(v226 + 2);
              if ( (v175 & 4) == 0 )
                goto LABEL_228;
              if ( v175 >= 0 )
              {
                v130 = *(_BYTE **)(v226 + 32);
                goto LABEL_229;
              }
              v176 = *(unsigned int *)(v226 + 16);
              if ( (_DWORD)v176 )
                v130 = (_BYTE *)(v226 + v176);
              else
LABEL_228:
                v130 = 0LL;
LABEL_229:
              v51 = 0;
              v131 = *((_WORD *)v219 + 1) & 0x140C;
              if ( v131 || v130 )
              {
                v137 = 0;
                GrantedAccess = 200;
                while ( 1 )
                {
                  v133 = 0LL;
                  if ( v137 >= 2 )
                    break;
                  v138 = (ACL *)ExAllocatePool2(0x100uLL);
                  *(_QWORD *)&AccessMode[7] = v138;
                  if ( !v138 )
                  {
                    v92 = (ACL *)P;
                    v51 = -1073741801;
                    v95 = v205;
                    v94 = 0LL;
                    v96 = 0;
                    goto LABEL_122;
                  }
                  v51 = RtlpInheritAcl2(
                          v130,
                          v128,
                          v131,
                          a6,
                          v126,
                          v125,
                          (__int64)Src,
                          (__int64)v221,
                          v227,
                          v232,
                          v223,
                          1,
                          v233,
                          a5,
                          &GrantedAccess,
                          v138,
                          &v207,
                          (int *)&v214);
                  if ( v51 >= 0 )
                  {
                    if ( GrantedAccess )
                    {
                      v133 = *(unsigned __int16 **)&AccessMode[7];
                    }
                    else
                    {
                      ExFreePoolWithTag(*(PVOID *)&AccessMode[7], 0);
                      v133 = 0LL;
                    }
                    break;
                  }
                  ExFreePoolWithTag(*(PVOID *)&AccessMode[7], 0);
                  v133 = 0LL;
                  if ( v51 != -1073741789 )
                    break;
                  ++v137;
                }
                *(_QWORD *)&AccessMode[7] = v133;
                if ( v51 >= 0 )
                {
                  v136 = 1;
                  v132 = v207;
                  v120 = a7;
                  v134 = v214 & 0x1408 | 4 | v218;
                  v129 = v226;
                  v199 = 1;
                  goto LABEL_246;
                }
                *(_QWORD *)&AccessMode[7] = v133;
                if ( v51 == -2147483637 )
                {
                  v132 = v207;
                  v124 = v219;
                  v120 = a7;
                  v129 = v226;
                  goto LABEL_232;
                }
                v92 = (ACL *)P;
                v94 = v133;
                v95 = v205;
                v96 = 0;
                goto LABEL_122;
              }
              v132 = 0;
              *(_QWORD *)&AccessMode[7] = 0LL;
              v133 = 0LL;
LABEL_232:
              v134 = v218;
              if ( (v120 & 1) != 0 )
                v134 = v218 | 0x400;
              v135 = *((_WORD *)v124 + 1);
              if ( (v135 & 0xC) == 0xC )
              {
                if ( (v135 & 4) != 0 )
                {
                  if ( v135 >= 0 )
                  {
                    v133 = (unsigned __int16 *)*((_QWORD *)v124 + 4);
                  }
                  else
                  {
                    v183 = *((unsigned int *)v124 + 4);
                    if ( (_DWORD)v183 )
                      v133 = (unsigned __int16 *)((char *)v124 + v183);
                    else
                      v133 = 0LL;
                  }
                }
                else
                {
                  v133 = 0LL;
                }
                *(_QWORD *)&AccessMode[7] = v133;
                v132 = 1;
                v134 |= v135 & 0x1000 | 4;
                v136 = 0;
              }
              else
              {
                if ( v238 )
                {
                  v133 = v238;
                  *(_QWORD *)&AccessMode[7] = v238;
                  v134 |= 4u;
                }
                v136 = 0;
              }
LABEL_246:
              v139 = SubjectSecurityContext;
              if ( (v120 & 0x1000) == 0 && v210 && SubjectSecurityContext && v129 )
              {
                GenericMapping = v223;
                GrantedAccess = 0;
                AccessStatus = 0;
                v51 = RtlpNewSecurityObject(
                        v129,
                        0,
                        (unsigned int)&SecurityDescriptor,
                        v233,
                        a5,
                        a6,
                        v120 | 1,
                        (__int64)SubjectSecurityContext,
                        (__int64)v223,
                        (__int64)v235);
                if ( v51 < 0 )
                {
LABEL_392:
                  v96 = v199;
                  goto LABEL_143;
                }
                v172 = *((_WORD *)SecurityDescriptor + 1);
                if ( (v172 & 4) != 0 )
                {
                  if ( v172 >= 0 )
                  {
                    v173 = (char *)*((_QWORD *)SecurityDescriptor + 4);
                  }
                  else
                  {
                    v179 = *((_DWORD *)SecurityDescriptor + 4);
                    if ( v179 )
                      v173 = (char *)SecurityDescriptor + v179;
                    else
                      v173 = 0LL;
                  }
                }
                else
                {
                  v173 = 0LL;
                }
                v174 = RtlpOwnerAcesPresent(0x10u, (__int64)v173);
                v140 = AccessMode[1];
                if ( v174
                  && !SeAccessCheck(
                        SecurityDescriptor,
                        v139,
                        0,
                        0x40000u,
                        0,
                        0LL,
                        GenericMapping,
                        AccessMode[1],
                        &GrantedAccess,
                        &AccessStatus) )
                {
                  v51 = -1073741790;
                  goto LABEL_392;
                }
                v133 = *(unsigned __int16 **)&AccessMode[7];
                LOBYTE(v120) = a7;
              }
              else
              {
                v140 = AccessMode[1];
              }
              if ( (v120 & 1) != 0 && !v133 )
                v134 |= 0x1000u;
              v141 = !v224 || (v224 & 0x1B0) != v224;
              if ( v140 != 1 )
                goto LABEL_260;
              if ( AccessMode[0] && (v120 & 8) == 0 && v141 )
              {
                if ( !v139 )
                  goto LABEL_511;
                RequiredPrivileges.Privilege[0].Luid = SeSecurityPrivilege;
                RequiredPrivileges.PrivilegeCount = 1;
                RequiredPrivileges.Control = 1;
                RequiredPrivileges.Privilege[0].Attributes = 0;
                v196 = SePrivilegeCheck(&RequiredPrivileges, v139, 1);
                SePrivilegedServiceAuditAlarm(0, (__int64 *)v139, &RequiredPrivileges, v196);
                if ( !v196 )
                {
                  v96 = v199;
                  v51 = -1073741727;
                  goto LABEL_143;
                }
                LOBYTE(v120) = a7;
              }
              if ( !(_BYTE)v229 || (v120 & 8) != 0 )
                goto LABEL_258;
              if ( v139 )
              {
                RequiredPrivileges.Privilege[0].Luid = (LUID)SeRelabelPrivilege;
                RequiredPrivileges.PrivilegeCount = 1;
                RequiredPrivileges.Control = 1;
                RequiredPrivileges.Privilege[0].Attributes = 0;
                v184 = SePrivilegeCheck(&RequiredPrivileges, v139, 1);
                SePrivilegedServiceAuditAlarm(0, (__int64 *)v139, &RequiredPrivileges, v184);
                if ( !v184 )
                {
                  v96 = v199;
                  v51 = -1073741727;
                  goto LABEL_143;
                }
LABEL_258:
                v142 = v217;
                if ( HIBYTE(v207) && (a7 & 0x10) == 0 && !SepValidOwnerSubjectContext((__int64 *)v139, Src, v217) )
                {
                  v51 = -1073741734;
                  goto LABEL_392;
                }
                if ( v132 && v142 )
                {
                  v94 = *(unsigned __int16 **)&AccessMode[7];
                  v51 = RtlpCreateServerAcl(
                          *(__int64 *)&AccessMode[7],
                          v242,
                          (unsigned __int8 *)v227,
                          (ACL **)&v239,
                          &v211);
                  if ( v51 < 0 )
                  {
                    v92 = (ACL *)P;
                    v96 = v199;
                    v95 = v205;
                    goto LABEL_122;
                  }
                  if ( v136 && v94 )
                    ExFreePoolWithTag(v94, 0);
                  v143 = (unsigned __int16 *)v239;
                  *(_QWORD *)&AccessMode[7] = v239;
                  v239 = 0LL;
LABEL_261:
                  v144 = 4 * *((unsigned __int8 *)Src + 1) + 8;
                  if ( v221 )
                    v145 = 4 * *((unsigned __int8 *)v221 + 1) + 8;
                  else
                    v145 = 0;
                  if ( (v134 & 0x10) != 0 && P )
                    v146 = (*((unsigned __int16 *)P + 1) + 3) & 0xFFFFFFFC;
                  else
                    v146 = 0;
                  if ( (v134 & 4) != 0 && v143 )
                    v147 = (v143[1] + 3) & 0xFFFFFFFC;
                  else
                    v147 = 0;
                  v205 = (_OWORD *)ExAllocatePool2(0x100uLL);
                  v95 = v205;
                  if ( !v205 )
                  {
                    v94 = *(unsigned __int16 **)&AccessMode[7];
                    v51 = -1073741670;
                    v92 = (ACL *)P;
                    v96 = v199;
                    goto LABEL_122;
                  }
                  v89 = (unsigned __int16 *)v205 + 10;
                  *v205 = 0LL;
                  *((_DWORD *)v95 + 4) = 0;
                  *((_WORD *)v95 + 1) |= v134;
                  *(_BYTE *)v95 = 1;
                  if ( (v134 & 0x10) != 0 && P )
                  {
                    v148 = (__int64)v95 + 20;
                    v235 = v89;
                    if ( (a7 & 0x4000) != 0 )
                    {
                      v181 = v223;
                      if ( v204 )
                        v181 = 0LL;
                      RtlpNormalizeAcl((__int64)v89, (__int64)P, v181);
                      if ( v89[2] )
                      {
                        v146 = v89[1];
                      }
                      else
                      {
                        v148 = 0LL;
                        v146 = 0;
                      }
                    }
                    else
                    {
                      memmove(v89, P, *((unsigned __int16 *)P + 1));
                      if ( !v204 )
                      {
                        if ( v89 )
                        {
                          v149 = (unsigned __int8 *)(v89 + 4);
                          v150 = 0;
                          if ( v89[2] )
                          {
                            v151 = v223;
                            v152 = 1651;
                            do
                            {
                              if ( (*v149 <= 0xAu || (unsigned __int8)(*v149 - 13) <= 1u) && (v149[1] & 8) == 0 )
                              {
                                v153 = *((_DWORD *)v149 + 1);
                                if ( v153 < 0 )
                                  v153 |= v151->GenericRead;
                                if ( (v153 & 0x40000000) != 0 )
                                  v153 |= v151->GenericWrite;
                                if ( (v153 & 0x20000000) != 0 )
                                  v153 |= v151->GenericExecute;
                                if ( (v153 & 0x10000000) != 0 )
                                  v153 |= v151->GenericAll;
                                v154 = v153 & 0xFFFFFFF;
                                *((_DWORD *)v149 + 1) = v154;
                                v155 = *v149;
                                if ( (unsigned __int8)v155 <= 0xAu && _bittest(&v152, v155) )
                                  GenericAll = v151->GenericAll;
                                else
                                  GenericAll = v151->GenericAll | 0x1000000;
                                *((_DWORD *)v149 + 1) = v154 & GenericAll;
                              }
                              ++v150;
                              v149 += *((unsigned __int16 *)v149 + 1);
                            }
                            while ( v150 < v89[2] );
                            v148 = (__int64)v235;
                          }
                        }
                      }
                      v157 = *((unsigned __int16 *)P + 1);
                      if ( v146 > (unsigned int)v157 )
                        memset_0((char *)v89 + v157, 0, v146 - (unsigned int)v157);
                    }
                    if ( v148 )
                    {
                      v89 = (unsigned __int16 *)((char *)v89 + v146);
                      v158 = v205;
                      v159 = v148 - (_DWORD)v205;
                    }
                    else
                    {
                      v158 = v205;
                      v159 = 0;
                    }
                    *((_DWORD *)v158 + 3) = v159;
                    v95 = v205;
                  }
                  v94 = *(unsigned __int16 **)&AccessMode[7];
                  if ( (v134 & 4) != 0 )
                  {
                    if ( *(_QWORD *)&AccessMode[7] )
                    {
                      if ( (a7 & 0x4000) != 0 )
                      {
                        v96 = v199;
                        v180 = v223;
                        if ( v199 )
                          v180 = 0LL;
                        RtlpNormalizeAcl((__int64)v89, *(__int64 *)&AccessMode[7], v180);
                        v147 = v89[1];
                      }
                      else
                      {
                        memmove(
                          v89,
                          *(const void **)&AccessMode[7],
                          *(unsigned __int16 *)(*(_QWORD *)&AccessMode[7] + 2LL));
                        v96 = v199;
                        if ( !v199 )
                        {
                          if ( v89 )
                          {
                            v160 = (unsigned __int8 *)(v89 + 4);
                            v161 = 0;
                            if ( v89[2] )
                            {
                              v162 = v223;
                              v163 = 1651;
                              do
                              {
                                if ( (*v160 <= 0xAu || (unsigned __int8)(*v160 - 13) <= 1u) && (v160[1] & 8) == 0 )
                                {
                                  v164 = *((_DWORD *)v160 + 1);
                                  if ( v164 < 0 )
                                    v164 |= v162->GenericRead;
                                  if ( (v164 & 0x40000000) != 0 )
                                    v164 |= v162->GenericWrite;
                                  if ( (v164 & 0x20000000) != 0 )
                                    v164 |= v162->GenericExecute;
                                  if ( (v164 & 0x10000000) != 0 )
                                    v164 |= v162->GenericAll;
                                  v165 = v164 & 0xFFFFFFF;
                                  *((_DWORD *)v160 + 1) = v165;
                                  v166 = *v160;
                                  if ( (unsigned __int8)v166 <= 0xAu && _bittest(&v163, v166) )
                                    v167 = v162->GenericAll;
                                  else
                                    v167 = v162->GenericAll | 0x1000000;
                                  *((_DWORD *)v160 + 1) = v165 & v167;
                                }
                                ++v161;
                                v160 += *((unsigned __int16 *)v160 + 1);
                              }
                              while ( v161 < v89[2] );
                              v95 = v205;
                              v96 = 0;
                            }
                          }
                        }
                        v88 = v94[1];
                        if ( v147 > (unsigned int)v88 )
                          memset_0((char *)v89 + v88, 0, v147 - (unsigned int)v88);
                      }
                      *((_DWORD *)v95 + 4) = (_DWORD)v89 - (_DWORD)v95;
                      v89 = (unsigned __int16 *)((char *)v89 + v147);
                      goto LABEL_119;
                    }
                    *((_DWORD *)v95 + 4) = 0;
                  }
                  v96 = v199;
LABEL_119:
                  memmove(v89, Src, v144);
                  v90 = (int)v89;
                  v91 = (char *)v89 + v144;
                  *((_DWORD *)v95 + 1) = v90 - (_DWORD)v95;
                  if ( v221 )
                  {
                    memmove(v91, v221, v145);
                    *((_DWORD *)v95 + 2) = (_DWORD)v91 - (_DWORD)v95;
                  }
                  v92 = (ACL *)P;
                  v51 = 0;
                  goto LABEL_122;
                }
LABEL_260:
                v143 = *(unsigned __int16 **)&AccessMode[7];
                goto LABEL_261;
              }
LABEL_511:
              v51 = -1073741700;
              goto LABEL_392;
            }
            if ( !v108 )
            {
              v94 = *(unsigned __int16 **)&AccessMode[7];
              v51 = -1073741700;
              v95 = v205;
              v96 = 0;
              goto LABEL_122;
            }
            v51 = RtlSidDominates(Sid1, v122, &v209);
            if ( v51 >= 0 )
            {
              v123 = (unsigned __int8)v229;
              if ( !v209 )
                v123 = 1;
              v229 = v123;
              goto LABEL_224;
            }
          }
LABEL_514:
          v94 = *(unsigned __int16 **)&AccessMode[7];
          v96 = 0;
          v95 = v205;
          goto LABEL_122;
        }
        v178 = *(unsigned int *)(v226 + 12);
        if ( (_DWORD)v178 )
        {
          v115 = (_BYTE *)(v226 + v178);
          goto LABEL_205;
        }
      }
    }
    v115 = 0LL;
    goto LABEL_205;
  }
LABEL_182:
  v108 = SubjectSecurityContext;
  if ( v81 )
    goto LABEL_185;
  if ( SubjectSecurityContext )
  {
    v80 = (unsigned __int8 *)Sid1;
    v230 = Sid1;
    v202 = 0;
    goto LABEL_185;
  }
  v92 = (ACL *)P;
  v51 = -1073741700;
  v94 = *(unsigned __int16 **)&AccessMode[7];
  v96 = 0;
  v95 = v205;
LABEL_122:
  if ( SecurityDescriptor )
    ExFreePoolWithTag(SecurityDescriptor, 0);
  if ( v211 && v239 )
    ExFreePoolWithTag(v239, 0);
  if ( v234 )
    ExFreePoolWithTag(v234, 0);
  if ( (v204 || (_BYTE)v212) && v92 )
    ExFreePoolWithTag(v92, 0);
  if ( HIBYTE(v212) && v215 )
    ExFreePoolWithTag(v215, 0);
  if ( v240 && v213 )
    ExFreePoolWithTag(v240, 0);
  if ( v96 )
  {
    if ( v94 )
      ExFreePoolWithTag(v94, 0);
  }
  *v243 = v95;
  return (unsigned int)v51;
}
