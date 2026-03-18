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
  __int64 v30; // rdx
  unsigned __int8 *v31; // r15
  unsigned __int8 *TokenTrustLevel; // r14
  void *Pool2; // rax
  size_t v34; // r8
  char *v35; // r13
  __int64 v36; // rax
  char *v37; // r12
  __int64 v38; // r8
  bool v39; // r8
  unsigned int v40; // edx
  char *v41; // rax
  __int64 v42; // rax
  char *v43; // rax
  char *v44; // rbx
  char *v45; // rbx
  int v46; // r10d
  char v47; // r13
  int v48; // r12d
  char *v49; // r14
  unsigned __int8 *v50; // r15
  _BYTE *v51; // rsi
  signed int v52; // ebx
  int v53; // edi
  PVOID v54; // rdx
  __int16 v55; // r13
  int v56; // ecx
  int v57; // r13d
  __int16 v58; // dx
  char v59; // r15
  unsigned __int8 *v60; // r12
  _BYTE *v61; // rsi
  int v62; // edi
  __int64 v63; // rcx
  char *v64; // rdx
  __int16 v65; // cx
  unsigned __int8 *v66; // r12
  __int16 v67; // ax
  __int64 v68; // rcx
  unsigned __int8 *AceByType; // rbx
  __int64 v70; // r8
  __int64 v71; // rdx
  unsigned int v72; // esi
  unsigned int v73; // r15d
  _OWORD *v74; // rdi
  __int16 v75; // ax
  __int64 v76; // rbx
  unsigned __int8 *v77; // rax
  __int64 v78; // r8
  int v79; // edx
  int v80; // ebx
  unsigned __int8 *v81; // rsi
  void *v82; // r14
  PSID v83; // r12
  void *v84; // rax
  __int64 v85; // rcx
  __int64 v86; // rax
  __int64 v87; // rax
  __int64 v89; // rcx
  unsigned __int16 *v90; // rbx
  int v91; // eax
  char *v92; // rbx
  PVOID v93; // r15
  void *v94; // rax
  unsigned __int16 *v95; // rsi
  _OWORD *v96; // r14
  char v97; // r13
  __int64 v98; // rax
  __int16 v99; // ax
  __int64 v100; // rcx
  unsigned __int8 *v101; // rax
  __int64 v102; // r8
  __int64 v103; // rax
  __int16 v104; // cx
  unsigned int v105; // ecx
  __int16 v106; // cx
  __int64 v107; // rcx
  unsigned __int8 v108; // cl
  PSECURITY_SUBJECT_CONTEXT v109; // r12
  int v110; // ecx
  _BYTE *v111; // rdx
  unsigned int i; // r8d
  unsigned __int16 v113; // cx
  unsigned __int8 v114; // al
  __int64 *v115; // rcx
  _BYTE *v116; // rdi
  PVOID v117; // r14
  __int16 v118; // di
  PVOID v119; // rsi
  void *v120; // rax
  unsigned int v121; // r9d
  unsigned __int8 *v122; // rax
  char *v123; // rdx
  int v124; // eax
  _OWORD *v125; // rdx
  char v126; // di
  char v127; // r15
  __int16 v128; // ax
  unsigned __int8 *v129; // r13
  __int64 v130; // r10
  _BYTE *v131; // r14
  __int16 v132; // si
  char v133; // di
  unsigned __int16 *v134; // r8
  __int16 v135; // r13
  __int16 v136; // cx
  char v137; // r15
  unsigned int v138; // r12d
  unsigned __int16 *v139; // rax
  struct _SECURITY_SUBJECT_CONTEXT *v140; // r14
  char v141; // bl
  bool v142; // al
  char v143; // bl
  unsigned __int16 *v144; // rcx
  unsigned int v145; // r12d
  unsigned int v146; // r15d
  unsigned int v147; // esi
  unsigned int v148; // edi
  __int64 v149; // r14
  unsigned __int8 *v150; // rdx
  unsigned int v151; // r8d
  PGENERIC_MAPPING v152; // r14
  int v153; // r10d
  int v154; // ecx
  int v155; // ecx
  unsigned int v156; // eax
  int GenericAll; // eax
  __int64 v158; // rcx
  _OWORD *v159; // rax
  int v160; // r14d
  unsigned __int8 *v161; // rdx
  unsigned int v162; // r8d
  PGENERIC_MAPPING v163; // r14
  int v164; // r13d
  int v165; // ecx
  int v166; // ecx
  unsigned int v167; // eax
  int v168; // eax
  __int64 v169; // rax
  unsigned int v170; // r14d
  unsigned __int16 *v171; // rax
  GENERIC_MAPPING *GenericMapping; // rsi
  __int16 v173; // cx
  char *v174; // rdx
  char v175; // al
  __int16 v176; // ax
  __int64 v177; // rax
  __int16 v178; // ax
  __int64 v179; // rax
  unsigned int v180; // ecx
  PGENERIC_MAPPING v181; // r8
  PGENERIC_MAPPING v182; // r8
  void *v183; // rax
  __int64 v184; // rax
  BOOLEAN v185; // bl
  __int16 v186; // ax
  __int64 v187; // rcx
  unsigned __int8 *v188; // rax
  int v189; // edi
  unsigned __int8 *v190; // rsi
  int v191; // r14d
  __int64 v192; // rax
  __int64 v193; // rax
  char *v194; // rax
  __int64 v195; // rax
  __int64 v196; // rax
  BOOLEAN v197; // bl
  __int64 v198; // rax
  int v199; // edx
  char v200; // [rsp+90h] [rbp-80h]
  _BYTE AccessMode[15]; // [rsp+91h] [rbp-7Fh] BYREF
  PVOID P; // [rsp+A0h] [rbp-70h]
  unsigned __int8 v203; // [rsp+A8h] [rbp-68h]
  ACCESS_MASK GrantedAccess; // [rsp+ACh] [rbp-64h] BYREF
  char v205; // [rsp+B0h] [rbp-60h]
  _OWORD *v206; // [rsp+B8h] [rbp-58h]
  int v207; // [rsp+C0h] [rbp-50h] BYREF
  __int16 v208; // [rsp+C4h] [rbp-4Ch] BYREF
  char v209; // [rsp+C6h] [rbp-4Ah]
  char v210; // [rsp+C7h] [rbp-49h] BYREF
  char v211; // [rsp+C8h] [rbp-48h]
  char v212; // [rsp+C9h] [rbp-47h] BYREF
  __int16 v213; // [rsp+CAh] [rbp-46h]
  char v214; // [rsp+CCh] [rbp-44h]
  __int64 v215; // [rsp+D0h] [rbp-40h] BYREF
  PVOID v216; // [rsp+D8h] [rbp-38h]
  _WORD v217[2]; // [rsp+E0h] [rbp-30h] BYREF
  int v218; // [rsp+E4h] [rbp-2Ch]
  int v219; // [rsp+E8h] [rbp-28h]
  _OWORD *v220; // [rsp+F0h] [rbp-20h]
  void *Src; // [rsp+F8h] [rbp-18h]
  void *v222; // [rsp+100h] [rbp-10h]
  PSECURITY_SUBJECT_CONTEXT SubjectSecurityContext; // [rsp+108h] [rbp-8h]
  PGENERIC_MAPPING v224; // [rsp+110h] [rbp+0h]
  int v225; // [rsp+118h] [rbp+8h] BYREF
  PSID Sid; // [rsp+120h] [rbp+10h]
  __int64 v227; // [rsp+128h] [rbp+18h]
  __int64 v228; // [rsp+130h] [rbp+20h]
  NTSTATUS AccessStatus; // [rsp+138h] [rbp+28h] BYREF
  int v230; // [rsp+13Ch] [rbp+2Ch]
  void *v231; // [rsp+140h] [rbp+30h]
  PVOID SecurityDescriptor; // [rsp+148h] [rbp+38h] BYREF
  __int64 v233; // [rsp+150h] [rbp+40h]
  __int64 v234; // [rsp+158h] [rbp+48h]
  PVOID v235; // [rsp+160h] [rbp+50h]
  unsigned __int16 *v236; // [rsp+168h] [rbp+58h]
  PVOID v237; // [rsp+170h] [rbp+60h]
  void *v238; // [rsp+178h] [rbp+68h] BYREF
  unsigned __int16 *v239; // [rsp+180h] [rbp+70h]
  PVOID v240; // [rsp+188h] [rbp+78h] BYREF
  PVOID v241; // [rsp+190h] [rbp+80h] BYREF
  char *v242; // [rsp+198h] [rbp+88h]
  int v243; // [rsp+1A0h] [rbp+90h]
  _QWORD *v244; // [rsp+1A8h] [rbp+98h]
  _OWORD v245[2]; // [rsp+1B0h] [rbp+A0h] BYREF
  __int64 v246; // [rsp+1D0h] [rbp+C0h]
  int v247; // [rsp+1D8h] [rbp+C8h]
  unsigned __int16 v248; // [rsp+1DCh] [rbp+CCh]
  int v249; // [rsp+1E0h] [rbp+D0h]
  unsigned __int16 v250; // [rsp+1E4h] [rbp+D4h]
  struct _PRIVILEGE_SET RequiredPrivileges; // [rsp+1E8h] [rbp+D8h] BYREF
  __int64 v252; // [rsp+200h] [rbp+F0h] BYREF
  _BYTE v253[120]; // [rsp+208h] [rbp+F8h] BYREF
  ACL Acl; // [rsp+280h] [rbp+170h] BYREF

  v10 = a1;
  v224 = a9;
  v11 = a2;
  v236 = a10;
  v244 = a3;
  v246 = 0LL;
  v12 = 0LL;
  v205 = 0;
  v13 = 0LL;
  v14 = 0LL;
  v213 = 0;
  v200 = 0;
  *(_WORD *)AccessMode = 256;
  v217[0] = 0;
  v208 = 0;
  LOBYTE(v230) = 0;
  v212 = 0;
  v227 = a1;
  v15 = a7;
  v234 = a4;
  v16 = 0LL;
  v237 = &v252;
  v220 = a2;
  SubjectSecurityContext = (PSECURITY_SUBJECT_CONTEXT)a8;
  v216 = 0LL;
  v225 = 0;
  *(_QWORD *)&AccessMode[7] = 0LL;
  v240 = 0LL;
  v235 = 0LL;
  Sid = 0LL;
  v242 = 0LL;
  v228 = 0LL;
  v233 = 0LL;
  v239 = 0LL;
  v206 = 0LL;
  LODWORD(v215) = 0;
  AccessStatus = 0;
  v231 = 0LL;
  v238 = 0LL;
  v203 = 0;
  SecurityDescriptor = 0LL;
  v210 = 1;
  v241 = 0LL;
  v214 = 0;
  memset(v245, 0, sizeof(v245));
  memset(&RequiredPrivileges, 0, sizeof(RequiredPrivileges));
  if ( (a7 & 0x2000) == 0 )
    AccessMode[1] = KeGetCurrentThread()->PreviousMode;
  if ( a2 )
  {
    v211 = 1;
  }
  else
  {
    v11 = v245;
    v211 = 0;
    v220 = v245;
    LOBYTE(v245[0]) = 1;
  }
  v17 = *((unsigned __int16 *)v11 + 1);
  v18 = *((_WORD *)v11 + 1) & 0x80;
  LOBYTE(v19) = v18 != 0;
  LOBYTE(v17) = (v17 & 0x40) != 0;
  v243 = v17;
  if ( a8 || (v39 = v18 != 0, v218 = (unsigned __int8)v19, v18) )
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
    LOBYTE(v218) = v19;
    if ( v22 )
    {
      v19 = (unsigned __int8)v19;
      if ( *(_DWORD *)(a8 + 8) == 1 )
        v19 = 1;
      v218 = v19;
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
      v31 = *TokenIntegrity;
    else
      v31 = (unsigned __int8 *)SepDefaultMandatorySid;
    TokenTrustLevel = (unsigned __int8 *)SepLocateTokenTrustLevel(SubjectSecurityContext, v30);
    Pool2 = (void *)ExAllocatePool2(0x40uLL);
    v235 = Pool2;
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
    v34 = 4LL * v31[1] + 8;
    v35 = (char *)v235 + 4 * v27[1] + 8;
    Sid = v35;
    memmove(v35, v31, v34);
    v36 = v31[1];
    v13 = &v35[4 * v36 + 8];
    v228 = (__int64)v13;
    if ( TokenTrustLevel )
    {
      v102 = TokenTrustLevel[1];
      v242 = &v35[4 * v36 + 8];
      memmove(v242, TokenTrustLevel, 4 * v102 + 8);
      v13 += 4 * TokenTrustLevel[1] + 8;
      v228 = (__int64)v13;
    }
    else
    {
      v242 = 0LL;
    }
    if ( v24 )
    {
      v12 = v13;
      memmove(v13, v24, 4LL * v24[1] + 8);
      v13 += 4 * v24[1] + 8;
      v228 = (__int64)v13;
    }
    else
    {
      v12 = 0LL;
    }
    memmove(v13, v28, 4LL * v28[1] + 8);
    v37 = &v13[4 * v28[1] + 8];
    v239 = (unsigned __int16 *)v37;
    if ( v26 )
    {
      v38 = v26[1];
      v233 = (__int64)v37;
      v14 = v37;
      memmove(v37, v26, 4 * v38 + 8);
      v37 += 4 * v26[1] + 8;
      v239 = (unsigned __int16 *)v37;
    }
    else
    {
      v14 = 0LL;
      v233 = 0LL;
    }
    if ( v25 )
      memmove(v37, v25, v25[1]);
    else
      v239 = 0LL;
    ExReleaseResourceLite(*((PERESOURCE *)SubjectSecurityContext->PrimaryToken + 6));
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    if ( SubjectSecurityContext->ClientToken )
    {
      ExReleaseResourceLite(*((PERESOURCE *)SubjectSecurityContext->ClientToken + 6));
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    }
    v16 = (char *)v235;
    v10 = v227;
    v39 = v218;
    v15 = a7;
    v11 = v220;
  }
  v40 = *((unsigned __int16 *)v11 + 1);
  if ( (v40 & 0x8000u) != 0 )
  {
    v42 = *((unsigned int *)v11 + 1);
    if ( !(_DWORD)v42 )
      goto LABEL_29;
    v41 = (char *)v11 + v42;
  }
  else
  {
    v41 = (char *)*((_QWORD *)v11 + 1);
  }
  Src = v41;
  if ( v41 )
  {
    HIBYTE(v208) = 1;
    goto LABEL_33;
  }
LABEL_29:
  if ( (v15 & 0x20) != 0 )
  {
    if ( !v10 )
    {
      v95 = *(unsigned __int16 **)&AccessMode[7];
      v52 = -1073741734;
      v93 = *(PVOID *)&AccessMode[7];
      v97 = 0;
      goto LABEL_144;
    }
    if ( *(__int16 *)(v10 + 2) < 0 )
    {
      v198 = *(unsigned int *)(v10 + 4);
      if ( !(_DWORD)v198 )
        goto LABEL_414;
      v183 = (void *)(v10 + v198);
    }
    else
    {
      v183 = *(void **)(v10 + 8);
    }
    Src = v183;
    HIBYTE(v208) = 1;
    if ( v183 )
      goto LABEL_33;
LABEL_414:
    v95 = *(unsigned __int16 **)&AccessMode[7];
    v52 = -1073741734;
    v96 = v206;
    v93 = *(PVOID *)&AccessMode[7];
    v97 = 0;
    goto LABEL_122;
  }
  v43 = v16;
  if ( v39 )
    v43 = v13;
  Src = v43;
  if ( !v43 )
  {
    v95 = *(unsigned __int16 **)&AccessMode[7];
    v52 = -1073741700;
    v96 = v206;
    v93 = *(PVOID *)&AccessMode[7];
    v97 = 0;
    goto LABEL_122;
  }
LABEL_33:
  if ( (v40 & 0x8000u) != 0 )
  {
    v98 = *((unsigned int *)v11 + 2);
    if ( !(_DWORD)v98 )
      goto LABEL_36;
    v44 = (char *)v11 + v98;
  }
  else
  {
    v44 = (char *)*((_QWORD *)v11 + 2);
  }
  v222 = v44;
  if ( v44 )
    goto LABEL_40;
LABEL_36:
  if ( (v15 & 0x40) != 0 )
  {
    if ( !v10 )
    {
      v95 = *(unsigned __int16 **)&AccessMode[7];
      v52 = -1073741733;
      v96 = v206;
      v93 = *(PVOID *)&AccessMode[7];
      v97 = 0;
      goto LABEL_122;
    }
    if ( *(__int16 *)(v10 + 2) >= 0 )
    {
      v45 = *(char **)(v10 + 16);
    }
    else
    {
      v192 = *(unsigned int *)(v10 + 8);
      if ( !(_DWORD)v192 )
        goto LABEL_173;
      v45 = (char *)(v10 + v192);
    }
  }
  else
  {
    v45 = v12;
    if ( v39 )
      v45 = v14;
  }
  v222 = v45;
  if ( !v45 )
  {
LABEL_173:
    v95 = *(unsigned __int16 **)&AccessMode[7];
    v52 = -1073741733;
    v96 = v206;
    v93 = *(PVOID *)&AccessMode[7];
    v97 = 0;
    goto LABEL_122;
  }
LABEL_40:
  v46 = v15 & 4;
  v207 = v46;
  v47 = v46 != 0;
  v48 = v15 & 2;
  v209 = v48 != 0;
  v49 = 0LL;
  if ( (v40 & 0x10) != 0 )
  {
    if ( (v40 & 0x8000u) == 0 )
    {
      v50 = (unsigned __int8 *)*((_QWORD *)v11 + 3);
    }
    else
    {
      v63 = *((unsigned int *)v11 + 3);
      if ( (_DWORD)v63 )
        v50 = (unsigned __int8 *)v11 + v63;
      else
        v50 = 0LL;
    }
  }
  else
  {
    v50 = 0LL;
  }
  if ( !v10 )
    goto LABEL_43;
  v104 = *(_WORD *)(v10 + 2);
  if ( (v104 & 0x10) == 0 )
    goto LABEL_43;
  if ( v104 < 0 )
  {
    v105 = *(_DWORD *)(v10 + 12);
    if ( v105 )
    {
      v51 = (_BYTE *)(v227 + v105);
      goto LABEL_44;
    }
LABEL_43:
    v51 = 0LL;
    goto LABEL_44;
  }
  v51 = *(_BYTE **)(v10 + 24);
LABEL_44:
  v52 = 0;
  v53 = ((v40 & 0x10) != 0 ? 4 : 0) | (v40 >> 2) & 8 | (v40 >> 1) & 0x1400;
  if ( !v53 && !v51 )
  {
    AccessMode[0] = 0;
    P = 0LL;
    GrantedAccess = -2147483637;
    LODWORD(v215) = v48 != 0 ? 0x400 : 0;
    goto LABEL_52;
  }
  GrantedAccess = 200;
  while ( 1 )
  {
    v54 = 0LL;
    if ( (unsigned int)v49 >= 2 )
      goto LABEL_48;
    v84 = (void *)ExAllocatePool2(0x100uLL);
    P = v84;
    if ( !v84 )
    {
      v52 = -1073741801;
      v93 = 0LL;
      goto LABEL_514;
    }
    v52 = RtlpInheritAcl2(
            v51,
            v50,
            v53,
            a6,
            v209,
            v47,
            (__int64)Src,
            (__int64)v222,
            v228,
            v233,
            v224,
            2,
            v234,
            a5,
            &GrantedAccess,
            (unsigned __int16 *)v84,
            AccessMode,
            (int *)&v215);
    if ( v52 >= 0 )
      break;
    ExFreePoolWithTag(P, 0);
    v54 = 0LL;
    if ( v52 != -1073741789 )
      goto LABEL_48;
    LODWORD(v49) = (_DWORD)v49 + 1;
  }
  if ( GrantedAccess )
  {
    v54 = P;
LABEL_48:
    v49 = 0LL;
  }
  else
  {
    ExFreePoolWithTag(P, 0);
    v49 = 0LL;
    v54 = 0LL;
  }
  P = v54;
  if ( v52 >= 0 )
  {
    v46 = v207;
    v11 = v220;
    v205 = 1;
    v57 = 2 * (v215 & 0x1400 | (2 * (v215 & 8 | 0x2004)));
    v219 = v57;
  }
  else
  {
    P = v54;
    if ( v52 != -2147483637 )
    {
      v95 = *(unsigned __int16 **)&AccessMode[7];
      v93 = v54;
      v96 = v206;
      v97 = 0;
      goto LABEL_122;
    }
    v46 = v207;
    v11 = v220;
LABEL_52:
    v55 = *((_WORD *)v11 + 1);
    v56 = 34816;
    if ( !v48 )
      v56 = 0x8000;
    if ( (v55 & 0x30) != 0x30 )
    {
      v57 = v56;
      v219 = v56;
      goto LABEL_56;
    }
    if ( (v55 & 0x10) == 0 )
    {
      P = 0LL;
      goto LABEL_428;
    }
    if ( v55 >= 0 )
    {
      v194 = (char *)*((_QWORD *)v11 + 3);
LABEL_461:
      P = v194;
    }
    else
    {
      v193 = *((unsigned int *)v11 + 3);
      if ( (_DWORD)v193 )
      {
        v194 = (char *)v11 + v193;
        goto LABEL_461;
      }
      P = 0LL;
    }
LABEL_428:
    AccessMode[0] = 1;
    v57 = v56 | v55 & 0x2000 | 0x10;
    v219 = v57;
  }
LABEL_56:
  v58 = *((_WORD *)v11 + 1);
  v59 = v46 != 0;
  if ( (v58 & 0x10) != 0 )
  {
    if ( v58 >= 0 )
    {
      v60 = (unsigned __int8 *)*((_QWORD *)v11 + 3);
    }
    else
    {
      v85 = *((unsigned int *)v11 + 3);
      if ( (_DWORD)v85 )
        v60 = (unsigned __int8 *)v11 + v85;
      else
        v60 = 0LL;
    }
  }
  else
  {
    v60 = 0LL;
  }
  if ( !v227 )
    goto LABEL_59;
  v106 = *(_WORD *)(v227 + 2);
  if ( (v106 & 0x10) == 0 )
    goto LABEL_59;
  if ( v106 >= 0 )
  {
    v61 = *(_BYTE **)(v227 + 24);
    goto LABEL_60;
  }
  v107 = *(unsigned int *)(v227 + 12);
  if ( (_DWORD)v107 )
    v61 = (_BYTE *)(v227 + v107);
  else
LABEL_59:
    v61 = 0LL;
LABEL_60:
  v52 = 0;
  v62 = ((*((_WORD *)v11 + 1) & 0x10) != 0 ? 4 : 0) | (*((unsigned __int16 *)v11 + 1) >> 2) & 8 | (*((unsigned __int16 *)v11 + 1) >> 1) & 0x400;
  if ( v62 || v61 )
  {
    GrantedAccess = 200;
    while ( 1 )
    {
      v64 = 0LL;
      if ( (unsigned int)v49 >= 2 )
        goto LABEL_68;
      v94 = (void *)ExAllocatePool2(0x100uLL);
      v216 = v94;
      if ( !v94 )
      {
LABEL_175:
        v52 = -1073741801;
        goto LABEL_176;
      }
      v52 = RtlpInheritAcl2(
              v61,
              v60,
              v62,
              a6,
              v209,
              v59,
              (__int64)Src,
              (__int64)v222,
              v228,
              v233,
              v224,
              2,
              v234,
              a5,
              &GrantedAccess,
              (unsigned __int16 *)v94,
              v217,
              &AccessStatus);
      if ( v52 >= 0 )
        break;
      ExFreePoolWithTag(v216, 0);
      v64 = 0LL;
      if ( v52 != -1073741789 )
        goto LABEL_68;
      LODWORD(v49) = (_DWORD)v49 + 1;
    }
    if ( GrantedAccess )
    {
      v64 = (char *)v216;
LABEL_68:
      v49 = 0LL;
    }
    else
    {
      ExFreePoolWithTag(v216, 0);
      v49 = 0LL;
      v64 = 0LL;
    }
    v216 = v64;
    GrantedAccess = v52;
    if ( v52 >= 0 )
    {
      v11 = v220;
      v49 = v64;
      HIBYTE(v213) = 1;
      goto LABEL_74;
    }
    v216 = v64;
    if ( v52 == -2147483637 )
    {
      v11 = v220;
      goto LABEL_72;
    }
    goto LABEL_176;
  }
  v216 = 0LL;
  GrantedAccess = -2147483637;
LABEL_72:
  v65 = *((_WORD *)v11 + 1);
  if ( (v65 & 0x30) == 0x30 )
  {
    if ( (v65 & 0x10) != 0 )
    {
      if ( v65 >= 0 )
      {
        v49 = (char *)*((_QWORD *)v11 + 3);
        v216 = v49;
      }
      else
      {
        v195 = *((unsigned int *)v11 + 3);
        if ( (_DWORD)v195 )
        {
          v49 = (char *)v11 + v195;
          v216 = (char *)v11 + v195;
        }
        else
        {
          v216 = 0LL;
        }
      }
    }
    else
    {
      v216 = 0LL;
    }
  }
  else
  {
    v49 = (char *)v216;
  }
LABEL_74:
  v66 = (unsigned __int8 *)v242;
  v207 = 0;
  while ( 1 )
  {
    v67 = *((_WORD *)v11 + 1);
    if ( (v67 & 0x10) != 0 )
    {
      if ( v67 >= 0 )
      {
        v68 = *((_QWORD *)v11 + 3);
      }
      else
      {
        v86 = *((unsigned int *)v11 + 3);
        if ( (_DWORD)v86 )
          v68 = (__int64)v11 + v86;
        else
          v68 = 0LL;
      }
    }
    else
    {
      v68 = 0LL;
    }
    AceByType = RtlFindAceByType(v68, 20, (unsigned int *)&v207);
    v71 = (__int64)(AceByType + 8);
    if ( !AceByType )
      v71 = 0LL;
    if ( v71 && !RtlpValidTrustSubjectContext((__int64)v66, v71, v70, &GrantedAccess) )
    {
      v93 = P;
      v52 = -1073741790;
      v96 = v206;
      v95 = 0LL;
      v97 = 0;
      goto LABEL_122;
    }
    ++v207;
    if ( !AceByType )
      break;
    v11 = v220;
  }
  v72 = a7;
  v73 = 4;
  if ( (a7 & 0x800) == 0 )
  {
    v74 = v220;
LABEL_83:
    v241 = v49;
    goto LABEL_84;
  }
  v207 = 0;
  v74 = v220;
  while ( 2 )
  {
    v186 = *((_WORD *)v74 + 1);
    if ( (v186 & 0x10) != 0 )
    {
      if ( v186 >= 0 )
      {
        v187 = *((_QWORD *)v74 + 3);
      }
      else
      {
        v196 = *((unsigned int *)v74 + 3);
        if ( (_DWORD)v196 )
          v187 = (__int64)v74 + v196;
        else
          v187 = 0LL;
      }
    }
    else
    {
      v187 = 0LL;
    }
    v188 = RtlFindAceByType(v187, 20, (unsigned int *)&v207);
    ++v207;
    if ( !v188 )
    {
      if ( !v66 )
        goto LABEL_83;
      if ( v236 )
      {
        v189 = *((_DWORD *)v236 + 1);
        v190 = v66;
        v191 = 0;
        goto LABEL_451;
      }
      v52 = -1073741811;
      v97 = 0;
LABEL_143:
      v93 = P;
      v95 = *(unsigned __int16 **)&AccessMode[7];
LABEL_144:
      v96 = v206;
      goto LABEL_122;
    }
    if ( (v188[1] & 8) != 0 )
      continue;
    break;
  }
  v189 = *((_DWORD *)v188 + 1);
  v190 = v188 + 8;
  v191 = v188[1];
  if ( !v236 || (v189 & *((_DWORD *)v236 + 1)) != v189 || v188 == (unsigned __int8 *)-8LL )
    goto LABEL_142;
LABEL_451:
  v52 = RtlCreateAcl(&Acl, 0x58u, 2u);
  if ( v52 < 0 )
    goto LABEL_176;
  v52 = RtlAddProcessTrustLabelAce((unsigned __int8 *)&Acl, 2u, v191, v190, 20, v189);
  if ( v52 < 0 )
    goto LABEL_176;
  v74 = v220;
  v52 = RtlpComputeMergedAcl(
          (int)v216,
          (*((_WORD *)v220 + 1) & 0x800 | (*((unsigned __int16 *)v220 + 1) >> 1) & 0x18u) >> 1,
          (int)&Acl,
          4,
          (__int64)Src,
          (__int64)v222,
          (__int64)v224,
          2,
          (__int64)&v241,
          (__int64)&v215);
  if ( v52 < 0 )
    goto LABEL_176;
  v72 = a7;
  v214 = 1;
LABEL_84:
  v75 = *((_WORD *)v74 + 1);
  if ( (v75 & 0x10) != 0 )
  {
    if ( v75 >= 0 )
    {
      v76 = *((_QWORD *)v74 + 3);
    }
    else
    {
      v87 = *((unsigned int *)v74 + 3);
      if ( (_DWORD)v87 )
        v76 = (__int64)v74 + v87;
      else
        v76 = 0LL;
    }
  }
  else
  {
    v76 = 0LL;
  }
  GrantedAccess = 0;
  v247 = 0;
  v248 = 256;
  v207 = 0;
  while ( 2 )
  {
    while ( 2 )
    {
      v77 = RtlFindAceByType(v76, 21, (unsigned int *)&v207);
      if ( !v77 )
      {
LABEL_88:
        ++v207;
        if ( !v77 )
        {
          v52 = GrantedAccess;
          goto LABEL_90;
        }
        continue;
      }
      break;
    }
    if ( (*((_DWORD *)v77 + 1) & 0xFF000000) != 0 )
      goto LABEL_536;
    if ( (v77[1] & 0x40) == 0 )
    {
      v199 = *(_DWORD *)(v77 + 10) - v247;
      if ( !v199 )
        v199 = *((unsigned __int16 *)v77 + 7) - v248;
      if ( v199 || v77[9] != 1 || *((_DWORD *)v77 + 4) )
      {
LABEL_536:
        v52 = -1073741811;
        goto LABEL_90;
      }
      goto LABEL_88;
    }
    if ( RtlpValidTrustSubjectContext((__int64)v66, (__int64)(v77 + 8), v78, &GrantedAccess) )
    {
      ++v207;
      continue;
    }
    break;
  }
  v52 = -1073741790;
LABEL_90:
  if ( v52 < 0 )
  {
LABEL_176:
    v93 = P;
    v97 = 0;
    v95 = *(unsigned __int16 **)&AccessMode[7];
    v96 = v206;
    goto LABEL_122;
  }
  v79 = (v72 >> 8) & 1 | 2;
  if ( (v72 & 0x200) == 0 )
    v79 = (v72 >> 8) & 1;
  v80 = v79 | 4;
  if ( (v72 & 0x400) == 0 )
    v80 = v79;
  if ( v80 )
  {
    v81 = (unsigned __int8 *)v231;
    v82 = v231;
    goto LABEL_97;
  }
  v99 = *((_WORD *)v74 + 1);
  if ( (v99 & 0x10) != 0 )
  {
    if ( v99 >= 0 )
    {
      v100 = *((_QWORD *)v74 + 3);
    }
    else
    {
      v103 = *((unsigned int *)v74 + 3);
      if ( (_DWORD)v103 )
        v100 = (__int64)v74 + v103;
      else
        v100 = 0LL;
    }
  }
  else
  {
    v100 = 0LL;
  }
  v101 = RtlFindAceByType(v100, 17, 0LL);
  v82 = v101;
  if ( !v101 )
  {
    v81 = (unsigned __int8 *)v231;
LABEL_97:
    v83 = Sid;
    goto LABEL_181;
  }
  v108 = v101[1];
  v81 = v101 + 8;
  v80 = *((_DWORD *)v101 + 1);
  v231 = v101 + 8;
  v203 = v108;
  if ( v108 == 8 || (v108 & 0x10) != 0 )
  {
    v82 = 0LL;
    v231 = 0LL;
    v81 = 0LL;
    v203 = 0;
    v80 = 0;
    v83 = Sid;
    goto LABEL_181;
  }
  v83 = Sid;
  if ( (v108 & 8) != 0 )
  {
    v203 = v108;
    v231 = v101 + 8;
    if ( *RtlSubAuthoritySid(Sid, 0) < 0x2000 )
    {
      v93 = P;
      v52 = -1073740730;
      v95 = *(unsigned __int16 **)&AccessMode[7];
      v97 = 0;
      v96 = v206;
      goto LABEL_122;
    }
  }
LABEL_181:
  if ( !v80 )
  {
    if ( v83 && *RtlSubAuthoritySid(v83, 0) < 0x2000 )
    {
      v80 = 1;
      goto LABEL_182;
    }
    v109 = SubjectSecurityContext;
LABEL_185:
    if ( v81 )
    {
      memset_0(v253, 0, sizeof(v253));
      v252 = 8388610LL;
      v249 = 0;
      v250 = 4096;
      if ( (unsigned __int64)v81 <= 0x7FFFFFFF0000LL || (*v81 & 0xF) != 1 || v81[1] > 0xFu )
      {
        v93 = P;
        v52 = -1073741704;
        v95 = *(unsigned __int16 **)&AccessMode[7];
        v97 = 0;
        v96 = v206;
        goto LABEL_122;
      }
      v110 = *(_DWORD *)(v81 + 2) - v249;
      if ( !v110 )
        v110 = *((unsigned __int16 *)v81 + 3) - v250;
      if ( v110 )
      {
LABEL_142:
        v52 = -1073741811;
        v97 = 0;
        goto LABEL_143;
      }
      if ( (v203 & 0xE0) != 0 )
      {
        v52 = -1073741811;
        v97 = 0;
        goto LABEL_143;
      }
      if ( (v80 & 0xFFFFFFF8) != 0 )
      {
        v52 = -1073741811;
        v97 = 0;
        goto LABEL_143;
      }
      if ( !(unsigned __int8)RtlValidAcl(&v252) )
      {
LABEL_518:
        v93 = P;
        v52 = -1073741705;
        v95 = *(unsigned __int16 **)&AccessMode[7];
        v97 = 0;
        v96 = v206;
        goto LABEL_122;
      }
      v111 = v253;
      for ( i = 0; i < WORD2(v252); ++i )
      {
        if ( v111 >= &v253[WORD1(v252) - 8] )
          goto LABEL_518;
        v111 += *((unsigned __int16 *)v111 + 1);
      }
      if ( v111 > &v253[WORD1(v252) - 8] )
        v111 = 0LL;
      v113 = 4 * (v81[1] + 4);
      if ( !v111 || &v111[v113] > &v253[WORD1(v252) - 8] )
      {
        v93 = P;
        v52 = -1073741671;
        v95 = *(unsigned __int16 **)&AccessMode[7];
        v97 = 0;
        v96 = v206;
        goto LABEL_122;
      }
      v114 = v203;
      *((_WORD *)v111 + 1) = v113;
      v111[1] = v114;
      *v111 = 17;
      *((_DWORD *)v111 + 1) = v80;
      memmove(v111 + 8, v81, 4LL * v81[1] + 8);
      ++WORD2(v252);
      v115 = &v252;
      LOBYTE(v252) = 2;
      GrantedAccess = 0;
    }
    else
    {
      v115 = 0LL;
      v237 = 0LL;
    }
    if ( (a7 & 0x700) == 0 )
    {
      if ( !v82 && v115 )
        v73 = 0;
      else
        v73 = (*((_WORD *)v74 + 1) & 0x2800 | (*((unsigned __int16 *)v74 + 1) >> 1) & 0x18u) >> 1;
    }
    if ( v227 )
    {
      v178 = *(_WORD *)(v227 + 2);
      if ( (v178 & 0x10) != 0 )
      {
        if ( v178 >= 0 )
        {
          v116 = *(_BYTE **)(v227 + 24);
LABEL_205:
          v52 = 0;
          if ( !v73 && !v116 )
            goto LABEL_207;
          v170 = 0;
          GrantedAccess = 200;
          while ( 1 )
          {
            v119 = 0LL;
            if ( v170 >= 2 )
              break;
            v171 = (unsigned __int16 *)ExAllocatePool2(0x100uLL);
            v119 = v171;
            if ( !v171 )
              goto LABEL_175;
            v52 = RtlpInheritAcl2(
                    v116,
                    (unsigned __int8 *)v237,
                    v73,
                    a6,
                    1,
                    0,
                    (__int64)Src,
                    (__int64)v222,
                    v228,
                    v233,
                    v224,
                    3,
                    v234,
                    a5,
                    &GrantedAccess,
                    v171,
                    (_BYTE *)v217 + 1,
                    (int *)&v215);
            if ( v52 >= 0 )
            {
              if ( !GrantedAccess )
              {
                ExFreePoolWithTag(v119, 0);
                v119 = 0LL;
              }
              break;
            }
            ExFreePoolWithTag(v119, 0);
            v119 = 0LL;
            if ( v52 != -1073741789 )
              break;
            ++v170;
          }
          if ( v52 != -2147483637 )
          {
            if ( v52 < 0 )
              goto LABEL_176;
            v118 = v215;
            v117 = v237;
          }
          else
          {
LABEL_207:
            v117 = v237;
            v118 = 0;
            v119 = v237;
            LODWORD(v215) = 0;
          }
          v93 = P;
          v52 = RtlpCombineAcls(
                  (_DWORD)P,
                  (_DWORD)v119,
                  (_DWORD)v216,
                  (_DWORD)v216,
                  (__int64)v241,
                  (__int64)v216,
                  (__int64)&v238,
                  (__int64)&v225);
          v225 |= (v57 & 0x2000) << 17;
          if ( v119 && v119 != v117 )
            ExFreePoolWithTag(v119, 0);
          if ( v52 >= 0 )
          {
            v120 = v238;
            if ( v238 )
            {
              if ( v205 && v93 )
              {
                ExFreePoolWithTag(v93, 0);
                v120 = v238;
              }
              v93 = v120;
              P = v120;
              LOBYTE(v213) = 1;
              v238 = 0LL;
              v219 = (2 * (v118 & 0x1400 | (2 * (v118 & 8 | 4)))) | v57;
            }
            v121 = a7;
            if ( (a7 & 8) != 0 )
              goto LABEL_225;
            v122 = RtlFindAceByType((__int64)v93, 17, 0LL);
            if ( v122 )
              v123 = (char *)(v122 + 8);
            else
              v123 = (char *)v231;
            if ( !v123 )
            {
LABEL_224:
              v121 = a7;
LABEL_225:
              v125 = v220;
              v126 = (v121 & 4) != 0;
              v127 = v121 & 1;
              v128 = *((_WORD *)v220 + 1);
              if ( (v128 & 4) != 0 )
              {
                if ( v128 >= 0 )
                {
                  v129 = (unsigned __int8 *)*((_QWORD *)v220 + 4);
                }
                else
                {
                  v169 = *((unsigned int *)v220 + 4);
                  if ( (_DWORD)v169 )
                    v129 = (unsigned __int8 *)v220 + v169;
                  else
                    v129 = 0LL;
                }
              }
              else
              {
                v129 = 0LL;
              }
              v130 = v227;
              if ( !v227 )
                goto LABEL_228;
              v176 = *(_WORD *)(v227 + 2);
              if ( (v176 & 4) == 0 )
                goto LABEL_228;
              if ( v176 >= 0 )
              {
                v131 = *(_BYTE **)(v227 + 32);
                goto LABEL_229;
              }
              v177 = *(unsigned int *)(v227 + 16);
              if ( (_DWORD)v177 )
                v131 = (_BYTE *)(v227 + v177);
              else
LABEL_228:
                v131 = 0LL;
LABEL_229:
              v52 = 0;
              v132 = *((_WORD *)v220 + 1) & 0x140C;
              if ( v132 || v131 )
              {
                v138 = 0;
                GrantedAccess = 200;
                while ( 1 )
                {
                  v134 = 0LL;
                  if ( v138 >= 2 )
                    break;
                  v139 = (unsigned __int16 *)ExAllocatePool2(0x100uLL);
                  *(_QWORD *)&AccessMode[7] = v139;
                  if ( !v139 )
                  {
                    v93 = P;
                    v52 = -1073741801;
                    v96 = v206;
                    v95 = 0LL;
                    v97 = 0;
                    goto LABEL_122;
                  }
                  v52 = RtlpInheritAcl2(
                          v131,
                          v129,
                          v132,
                          a6,
                          v127,
                          v126,
                          (__int64)Src,
                          (__int64)v222,
                          v228,
                          v233,
                          v224,
                          1,
                          v234,
                          a5,
                          &GrantedAccess,
                          v139,
                          &v208,
                          (int *)&v215);
                  if ( v52 >= 0 )
                  {
                    if ( GrantedAccess )
                    {
                      v134 = *(unsigned __int16 **)&AccessMode[7];
                    }
                    else
                    {
                      ExFreePoolWithTag(*(PVOID *)&AccessMode[7], 0);
                      v134 = 0LL;
                    }
                    break;
                  }
                  ExFreePoolWithTag(*(PVOID *)&AccessMode[7], 0);
                  v134 = 0LL;
                  if ( v52 != -1073741789 )
                    break;
                  ++v138;
                }
                *(_QWORD *)&AccessMode[7] = v134;
                if ( v52 >= 0 )
                {
                  v137 = 1;
                  v133 = v208;
                  v121 = a7;
                  v135 = v215 & 0x1408 | 4 | v219;
                  v130 = v227;
                  v200 = 1;
                  goto LABEL_246;
                }
                *(_QWORD *)&AccessMode[7] = v134;
                if ( v52 == -2147483637 )
                {
                  v133 = v208;
                  v125 = v220;
                  v121 = a7;
                  v130 = v227;
                  goto LABEL_232;
                }
                v93 = P;
                v95 = v134;
                v96 = v206;
                v97 = 0;
                goto LABEL_122;
              }
              v133 = 0;
              *(_QWORD *)&AccessMode[7] = 0LL;
              v134 = 0LL;
LABEL_232:
              v135 = v219;
              if ( (v121 & 1) != 0 )
                v135 = v219 | 0x400;
              v136 = *((_WORD *)v125 + 1);
              if ( (v136 & 0xC) == 0xC )
              {
                if ( (v136 & 4) != 0 )
                {
                  if ( v136 >= 0 )
                  {
                    v134 = (unsigned __int16 *)*((_QWORD *)v125 + 4);
                  }
                  else
                  {
                    v184 = *((unsigned int *)v125 + 4);
                    if ( (_DWORD)v184 )
                      v134 = (unsigned __int16 *)((char *)v125 + v184);
                    else
                      v134 = 0LL;
                  }
                }
                else
                {
                  v134 = 0LL;
                }
                *(_QWORD *)&AccessMode[7] = v134;
                v133 = 1;
                v135 |= v136 & 0x1000 | 4;
                v137 = 0;
              }
              else
              {
                if ( v239 )
                {
                  v134 = v239;
                  *(_QWORD *)&AccessMode[7] = v239;
                  v135 |= 4u;
                }
                v137 = 0;
              }
LABEL_246:
              v140 = SubjectSecurityContext;
              if ( (v121 & 0x1000) == 0 && v211 && SubjectSecurityContext && v130 )
              {
                GenericMapping = v224;
                GrantedAccess = 0;
                AccessStatus = 0;
                v52 = RtlpNewSecurityObject(
                        v130,
                        0,
                        (unsigned int)&SecurityDescriptor,
                        v234,
                        a5,
                        a6,
                        v121 | 1,
                        (__int64)SubjectSecurityContext,
                        (__int64)v224,
                        (__int64)v236);
                if ( v52 < 0 )
                {
LABEL_392:
                  v97 = v200;
                  goto LABEL_143;
                }
                v173 = *((_WORD *)SecurityDescriptor + 1);
                if ( (v173 & 4) != 0 )
                {
                  if ( v173 >= 0 )
                  {
                    v174 = (char *)*((_QWORD *)SecurityDescriptor + 4);
                  }
                  else
                  {
                    v180 = *((_DWORD *)SecurityDescriptor + 4);
                    if ( v180 )
                      v174 = (char *)SecurityDescriptor + v180;
                    else
                      v174 = 0LL;
                  }
                }
                else
                {
                  v174 = 0LL;
                }
                v175 = RtlpOwnerAcesPresent(0x10u, (__int64)v174);
                v141 = AccessMode[1];
                if ( v175
                  && !SeAccessCheck(
                        SecurityDescriptor,
                        v140,
                        0,
                        0x40000u,
                        0,
                        0LL,
                        GenericMapping,
                        AccessMode[1],
                        &GrantedAccess,
                        &AccessStatus) )
                {
                  v52 = -1073741790;
                  goto LABEL_392;
                }
                v134 = *(unsigned __int16 **)&AccessMode[7];
                LOBYTE(v121) = a7;
              }
              else
              {
                v141 = AccessMode[1];
              }
              if ( (v121 & 1) != 0 && !v134 )
                v135 |= 0x1000u;
              v142 = !v225 || (v225 & 0x1B0) != v225;
              if ( v141 != 1 )
                goto LABEL_260;
              if ( AccessMode[0] && (v121 & 8) == 0 && v142 )
              {
                if ( !v140 )
                  goto LABEL_511;
                RequiredPrivileges.Privilege[0].Luid = SeSecurityPrivilege;
                RequiredPrivileges.PrivilegeCount = 1;
                RequiredPrivileges.Control = 1;
                RequiredPrivileges.Privilege[0].Attributes = 0;
                v197 = SePrivilegeCheck(&RequiredPrivileges, v140, 1);
                SePrivilegedServiceAuditAlarm(0, (__int64 *)v140, &RequiredPrivileges, v197);
                if ( !v197 )
                {
                  v97 = v200;
                  v52 = -1073741727;
                  goto LABEL_143;
                }
                LOBYTE(v121) = a7;
              }
              if ( !(_BYTE)v230 || (v121 & 8) != 0 )
                goto LABEL_258;
              if ( v140 )
              {
                RequiredPrivileges.Privilege[0].Luid = (LUID)SeRelabelPrivilege;
                RequiredPrivileges.PrivilegeCount = 1;
                RequiredPrivileges.Control = 1;
                RequiredPrivileges.Privilege[0].Attributes = 0;
                v185 = SePrivilegeCheck(&RequiredPrivileges, v140, 1);
                SePrivilegedServiceAuditAlarm(0, (__int64 *)v140, &RequiredPrivileges, v185);
                if ( !v185 )
                {
                  v97 = v200;
                  v52 = -1073741727;
                  goto LABEL_143;
                }
LABEL_258:
                v143 = v218;
                if ( HIBYTE(v208) && (a7 & 0x10) == 0 && !SepValidOwnerSubjectContext((__int64 *)v140, Src, v218) )
                {
                  v52 = -1073741734;
                  goto LABEL_392;
                }
                if ( v133 && v143 )
                {
                  v95 = *(unsigned __int16 **)&AccessMode[7];
                  v52 = RtlpCreateServerAcl(
                          *(__int64 *)&AccessMode[7],
                          v243,
                          (unsigned __int8 *)v228,
                          (ACL **)&v240,
                          &v212);
                  if ( v52 < 0 )
                  {
                    v93 = P;
                    v97 = v200;
                    v96 = v206;
                    goto LABEL_122;
                  }
                  if ( v137 && v95 )
                    ExFreePoolWithTag(v95, 0);
                  v144 = (unsigned __int16 *)v240;
                  *(_QWORD *)&AccessMode[7] = v240;
                  v240 = 0LL;
LABEL_261:
                  v145 = 4 * *((unsigned __int8 *)Src + 1) + 8;
                  if ( v222 )
                    v146 = 4 * *((unsigned __int8 *)v222 + 1) + 8;
                  else
                    v146 = 0;
                  if ( (v135 & 0x10) != 0 && P )
                    v147 = (*((unsigned __int16 *)P + 1) + 3) & 0xFFFFFFFC;
                  else
                    v147 = 0;
                  if ( (v135 & 4) != 0 && v144 )
                    v148 = (v144[1] + 3) & 0xFFFFFFFC;
                  else
                    v148 = 0;
                  v206 = (_OWORD *)ExAllocatePool2(0x100uLL);
                  v96 = v206;
                  if ( !v206 )
                  {
                    v95 = *(unsigned __int16 **)&AccessMode[7];
                    v52 = -1073741670;
                    v93 = P;
                    v97 = v200;
                    goto LABEL_122;
                  }
                  v90 = (unsigned __int16 *)v206 + 10;
                  *v206 = 0LL;
                  *((_DWORD *)v96 + 4) = 0;
                  *((_WORD *)v96 + 1) |= v135;
                  *(_BYTE *)v96 = 1;
                  if ( (v135 & 0x10) != 0 && P )
                  {
                    v149 = (__int64)v96 + 20;
                    v236 = v90;
                    if ( (a7 & 0x4000) != 0 )
                    {
                      v182 = v224;
                      if ( v205 )
                        v182 = 0LL;
                      RtlpNormalizeAcl((__int64)v90, (__int64)P, v182);
                      if ( v90[2] )
                      {
                        v147 = v90[1];
                      }
                      else
                      {
                        v149 = 0LL;
                        v147 = 0;
                      }
                    }
                    else
                    {
                      memmove(v90, P, *((unsigned __int16 *)P + 1));
                      if ( !v205 )
                      {
                        if ( v90 )
                        {
                          v150 = (unsigned __int8 *)(v90 + 4);
                          v151 = 0;
                          if ( v90[2] )
                          {
                            v152 = v224;
                            v153 = 1651;
                            do
                            {
                              if ( (*v150 <= 0xAu || (unsigned __int8)(*v150 - 13) <= 1u) && (v150[1] & 8) == 0 )
                              {
                                v154 = *((_DWORD *)v150 + 1);
                                if ( v154 < 0 )
                                  v154 |= v152->GenericRead;
                                if ( (v154 & 0x40000000) != 0 )
                                  v154 |= v152->GenericWrite;
                                if ( (v154 & 0x20000000) != 0 )
                                  v154 |= v152->GenericExecute;
                                if ( (v154 & 0x10000000) != 0 )
                                  v154 |= v152->GenericAll;
                                v155 = v154 & 0xFFFFFFF;
                                *((_DWORD *)v150 + 1) = v155;
                                v156 = *v150;
                                if ( (unsigned __int8)v156 <= 0xAu && _bittest(&v153, v156) )
                                  GenericAll = v152->GenericAll;
                                else
                                  GenericAll = v152->GenericAll | 0x1000000;
                                *((_DWORD *)v150 + 1) = v155 & GenericAll;
                              }
                              ++v151;
                              v150 += *((unsigned __int16 *)v150 + 1);
                            }
                            while ( v151 < v90[2] );
                            v149 = (__int64)v236;
                          }
                        }
                      }
                      v158 = *((unsigned __int16 *)P + 1);
                      if ( v147 > (unsigned int)v158 )
                        memset_0((char *)v90 + v158, 0, v147 - (unsigned int)v158);
                    }
                    if ( v149 )
                    {
                      v90 = (unsigned __int16 *)((char *)v90 + v147);
                      v159 = v206;
                      v160 = v149 - (_DWORD)v206;
                    }
                    else
                    {
                      v159 = v206;
                      v160 = 0;
                    }
                    *((_DWORD *)v159 + 3) = v160;
                    v96 = v206;
                  }
                  v95 = *(unsigned __int16 **)&AccessMode[7];
                  if ( (v135 & 4) != 0 )
                  {
                    if ( *(_QWORD *)&AccessMode[7] )
                    {
                      if ( (a7 & 0x4000) != 0 )
                      {
                        v97 = v200;
                        v181 = v224;
                        if ( v200 )
                          v181 = 0LL;
                        RtlpNormalizeAcl((__int64)v90, *(__int64 *)&AccessMode[7], v181);
                        v148 = v90[1];
                      }
                      else
                      {
                        memmove(
                          v90,
                          *(const void **)&AccessMode[7],
                          *(unsigned __int16 *)(*(_QWORD *)&AccessMode[7] + 2LL));
                        v97 = v200;
                        if ( !v200 )
                        {
                          if ( v90 )
                          {
                            v161 = (unsigned __int8 *)(v90 + 4);
                            v162 = 0;
                            if ( v90[2] )
                            {
                              v163 = v224;
                              v164 = 1651;
                              do
                              {
                                if ( (*v161 <= 0xAu || (unsigned __int8)(*v161 - 13) <= 1u) && (v161[1] & 8) == 0 )
                                {
                                  v165 = *((_DWORD *)v161 + 1);
                                  if ( v165 < 0 )
                                    v165 |= v163->GenericRead;
                                  if ( (v165 & 0x40000000) != 0 )
                                    v165 |= v163->GenericWrite;
                                  if ( (v165 & 0x20000000) != 0 )
                                    v165 |= v163->GenericExecute;
                                  if ( (v165 & 0x10000000) != 0 )
                                    v165 |= v163->GenericAll;
                                  v166 = v165 & 0xFFFFFFF;
                                  *((_DWORD *)v161 + 1) = v166;
                                  v167 = *v161;
                                  if ( (unsigned __int8)v167 <= 0xAu && _bittest(&v164, v167) )
                                    v168 = v163->GenericAll;
                                  else
                                    v168 = v163->GenericAll | 0x1000000;
                                  *((_DWORD *)v161 + 1) = v166 & v168;
                                }
                                ++v162;
                                v161 += *((unsigned __int16 *)v161 + 1);
                              }
                              while ( v162 < v90[2] );
                              v96 = v206;
                              v97 = 0;
                            }
                          }
                        }
                        v89 = v95[1];
                        if ( v148 > (unsigned int)v89 )
                          memset_0((char *)v90 + v89, 0, v148 - (unsigned int)v89);
                      }
                      *((_DWORD *)v96 + 4) = (_DWORD)v90 - (_DWORD)v96;
                      v90 = (unsigned __int16 *)((char *)v90 + v148);
                      goto LABEL_119;
                    }
                    *((_DWORD *)v96 + 4) = 0;
                  }
                  v97 = v200;
LABEL_119:
                  memmove(v90, Src, v145);
                  v91 = (int)v90;
                  v92 = (char *)v90 + v145;
                  *((_DWORD *)v96 + 1) = v91 - (_DWORD)v96;
                  if ( v222 )
                  {
                    memmove(v92, v222, v146);
                    *((_DWORD *)v96 + 2) = (_DWORD)v92 - (_DWORD)v96;
                  }
                  v93 = P;
                  v52 = 0;
                  goto LABEL_122;
                }
LABEL_260:
                v144 = *(unsigned __int16 **)&AccessMode[7];
                goto LABEL_261;
              }
LABEL_511:
              v52 = -1073741700;
              goto LABEL_392;
            }
            if ( !v109 )
            {
              v95 = *(unsigned __int16 **)&AccessMode[7];
              v52 = -1073741700;
              v96 = v206;
              v97 = 0;
              goto LABEL_122;
            }
            v52 = RtlSidDominates((char *)Sid, v123, &v210);
            if ( v52 >= 0 )
            {
              v124 = (unsigned __int8)v230;
              if ( !v210 )
                v124 = 1;
              v230 = v124;
              goto LABEL_224;
            }
          }
LABEL_514:
          v95 = *(unsigned __int16 **)&AccessMode[7];
          v97 = 0;
          v96 = v206;
          goto LABEL_122;
        }
        v179 = *(unsigned int *)(v227 + 12);
        if ( (_DWORD)v179 )
        {
          v116 = (_BYTE *)(v227 + v179);
          goto LABEL_205;
        }
      }
    }
    v116 = 0LL;
    goto LABEL_205;
  }
LABEL_182:
  v109 = SubjectSecurityContext;
  if ( v82 )
    goto LABEL_185;
  if ( SubjectSecurityContext )
  {
    v81 = (unsigned __int8 *)Sid;
    v231 = Sid;
    v203 = 0;
    goto LABEL_185;
  }
  v93 = P;
  v52 = -1073741700;
  v95 = *(unsigned __int16 **)&AccessMode[7];
  v97 = 0;
  v96 = v206;
LABEL_122:
  if ( SecurityDescriptor )
    ExFreePoolWithTag(SecurityDescriptor, 0);
  if ( v212 && v240 )
    ExFreePoolWithTag(v240, 0);
  if ( v235 )
    ExFreePoolWithTag(v235, 0);
  if ( (v205 || (_BYTE)v213) && v93 )
    ExFreePoolWithTag(v93, 0);
  if ( HIBYTE(v213) && v216 )
    ExFreePoolWithTag(v216, 0);
  if ( v241 && v214 )
    ExFreePoolWithTag(v241, 0);
  if ( v97 )
  {
    if ( v95 )
      ExFreePoolWithTag(v95, 0);
  }
  *v244 = v96;
  return (unsigned int)v52;
}
