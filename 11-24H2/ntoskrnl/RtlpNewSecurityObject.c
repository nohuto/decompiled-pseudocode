/*
 * XREFs of RtlpNewSecurityObject @ 0x14090DD00
 * Callers:
 *     SeAssignSecurityEx2 @ 0x140424AE0 (SeAssignSecurityEx2.c)
 *     SeAssignSecurity @ 0x14090C530 (SeAssignSecurity.c)
 *     RtlpNewSecurityObject @ 0x14090DD00 (RtlpNewSecurityObject.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140289BB0 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseResourceLite @ 0x14028AA60 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x140321360 (ExAcquireResourceSharedLite.c)
 *     SeAccessCheck @ 0x1403B6900 (SeAccessCheck.c)
 *     RtlpValidTrustSubjectContext @ 0x1403E334C (RtlpValidTrustSubjectContext.c)
 *     SepLocateTokenTrustLevel @ 0x1403E3620 (SepLocateTokenTrustLevel.c)
 *     RtlpOwnerAcesPresent @ 0x1403ECFB0 (RtlpOwnerAcesPresent.c)
 *     RtlSidDominates @ 0x1403EFBC0 (RtlSidDominates.c)
 *     RtlFindAceByType @ 0x140404D90 (RtlFindAceByType.c)
 *     SepLocateTokenIntegrity @ 0x14040ECA0 (SepLocateTokenIntegrity.c)
 *     RtlSubAuthoritySid @ 0x140445040 (RtlSubAuthoritySid.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     SePrivilegedServiceAuditAlarm @ 0x14084FDF0 (SePrivilegedServiceAuditAlarm.c)
 *     RtlpNormalizeAcl @ 0x140856694 (RtlpNormalizeAcl.c)
 *     RtlpCreateServerAcl @ 0x140856C98 (RtlpCreateServerAcl.c)
 *     RtlCreateAcl @ 0x140858810 (RtlCreateAcl.c)
 *     RtlpInheritAcl2 @ 0x14090D650 (RtlpInheritAcl2.c)
 *     RtlpNewSecurityObject @ 0x14090DD00 (RtlpNewSecurityObject.c)
 *     RtlpCombineAcls @ 0x14090FEF0 (RtlpCombineAcls.c)
 *     RtlValidAcl @ 0x140910580 (RtlValidAcl.c)
 *     RtlAddProcessTrustLabelAce @ 0x140911760 (RtlAddProcessTrustLabelAce.c)
 *     SePrivilegeCheck @ 0x14099A020 (SePrivilegeCheck.c)
 *     SepValidOwnerSubjectContext @ 0x140A22078 (SepValidOwnerSubjectContext.c)
 *     RtlpComputeMergedAcl @ 0x140AAC9C4 (RtlpComputeMergedAcl.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
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
        __int64 a10)
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
  unsigned __int8 *TokenTrustLevel; // rax
  unsigned __int8 *v32; // r14
  __int64 v33; // rdx
  __int64 v34; // r10
  __int64 v35; // r9
  __int64 v36; // r8
  void *Pool2; // rax
  size_t v38; // r8
  char *v39; // r13
  __int64 v40; // rax
  char *v41; // r12
  __int64 v42; // r8
  bool v43; // r8
  unsigned int v44; // edx
  char *v45; // rax
  __int64 v46; // rax
  char *v47; // rax
  char *v48; // rbx
  char *v49; // rbx
  ULONG v50; // r10d
  char v51; // r13
  int v52; // r12d
  char *v53; // r14
  unsigned __int8 *v54; // r15
  _BYTE *v55; // rsi
  signed int v56; // ebx
  int v57; // edi
  ACL *v58; // rdx
  __int16 v59; // r13
  int v60; // ecx
  int v61; // r13d
  __int16 v62; // dx
  char v63; // r15
  unsigned __int8 *v64; // r12
  _BYTE *v65; // rsi
  int v66; // edi
  __int64 v67; // rcx
  char *v68; // rdx
  __int16 v69; // cx
  PSID v70; // r12
  __int16 v71; // ax
  ACL *v72; // rcx
  PVOID AceByType; // rbx
  __int64 v74; // r8
  __int64 v75; // rdx
  unsigned int v76; // esi
  unsigned int v77; // r15d
  __int64 v78; // rdi
  __int16 v79; // ax
  ACL *v80; // rbx
  _DWORD *v81; // rax
  __int64 v82; // r8
  int v83; // edx
  int v84; // ebx
  unsigned __int8 *v85; // rsi
  void *v86; // r14
  PSID v87; // r12
  ACCESS_MASK v88; // eax
  ACL *v89; // rax
  __int64 v90; // rcx
  __int64 v91; // rax
  __int64 v92; // rax
  __int64 v94; // rcx
  unsigned __int16 *v95; // rbx
  int v96; // eax
  char *v97; // rbx
  ACL *v98; // r15
  ACCESS_MASK v99; // eax
  ACL *v100; // rax
  unsigned __int16 *v101; // r14
  _OWORD *v102; // rsi
  char v103; // r13
  __int64 v104; // rax
  __int16 v105; // ax
  ACL *v106; // rcx
  char *v107; // rax
  __int64 v108; // r8
  __int64 v109; // rax
  __int16 v110; // cx
  unsigned int v111; // ecx
  __int16 v112; // cx
  __int64 v113; // rcx
  char v114; // cl
  PSECURITY_SUBJECT_CONTEXT v115; // r12
  int v116; // ecx
  _BYTE *v117; // rdx
  unsigned int i; // r8d
  unsigned __int16 v119; // cx
  char v120; // al
  ACL *v121; // rcx
  _BYTE *v122; // rdi
  PVOID v123; // r14
  __int16 v124; // di
  PVOID v125; // rsi
  ACL *v126; // rax
  __int64 v127; // r9
  char *v128; // rax
  void *v129; // rdx
  int v130; // eax
  __int64 v131; // rdx
  char v132; // di
  char v133; // r15
  __int16 v134; // ax
  unsigned __int8 *v135; // r13
  __int64 v136; // r10
  _BYTE *v137; // r14
  __int16 v138; // si
  char v139; // di
  unsigned __int16 *v140; // r8
  __int16 v141; // r13
  __int16 v142; // cx
  char v143; // r15
  __int64 v144; // rax
  struct _SECURITY_SUBJECT_CONTEXT *v145; // r14
  char v146; // bl
  bool v147; // al
  char v148; // bl
  unsigned __int16 *v149; // rcx
  unsigned int v150; // r12d
  unsigned int v151; // r15d
  unsigned int v152; // r14d
  unsigned int v153; // edi
  char *v154; // rsi
  unsigned __int8 *v155; // rdx
  unsigned int v156; // r8d
  PGENERIC_MAPPING v157; // r12
  int v158; // r9d
  int v159; // ecx
  int v160; // ecx
  unsigned int v161; // eax
  int GenericAll; // eax
  __int64 v163; // rcx
  _OWORD *v164; // rax
  int v165; // esi
  unsigned __int8 *v166; // rdx
  unsigned int v167; // r8d
  PGENERIC_MAPPING v168; // rsi
  int v169; // r12d
  int v170; // ecx
  int v171; // ecx
  unsigned int v172; // eax
  int v173; // eax
  ACCESS_MASK v174; // eax
  unsigned int v175; // r14d
  ACL *v176; // rax
  ACCESS_MASK v177; // eax
  unsigned int v178; // r12d
  ACL *v179; // rax
  GENERIC_MAPPING *GenericMapping; // rsi
  __int16 v181; // cx
  char *v182; // rdx
  char v183; // al
  __int16 v184; // ax
  __int64 v185; // rax
  __int16 v186; // ax
  __int64 v187; // rax
  unsigned int v188; // ecx
  PGENERIC_MAPPING v189; // r8
  PGENERIC_MAPPING v190; // r8
  void *v191; // rax
  __int64 v192; // rax
  BOOLEAN v193; // bl
  __int16 v194; // ax
  ACL *v195; // rcx
  char *v196; // rax
  ACCESS_MASK v197; // edi
  void *v198; // rsi
  ULONG v199; // r14d
  __int64 v200; // rax
  __int64 v201; // rax
  char *v202; // rax
  __int64 v203; // rax
  __int64 v204; // rax
  BOOLEAN v205; // bl
  __int64 v206; // rax
  int v207; // edx
  char v208; // [rsp+90h] [rbp-80h]
  _BYTE AccessMode[15]; // [rsp+91h] [rbp-7Fh] BYREF
  PVOID P; // [rsp+A0h] [rbp-70h]
  char v211; // [rsp+A8h] [rbp-68h]
  ACCESS_MASK GrantedAccess; // [rsp+ACh] [rbp-64h] BYREF
  char v213; // [rsp+B0h] [rbp-60h]
  _OWORD *v214; // [rsp+B8h] [rbp-58h]
  ULONG Index; // [rsp+C0h] [rbp-50h] BYREF
  __int16 v216; // [rsp+C4h] [rbp-4Ch] BYREF
  char v217; // [rsp+C6h] [rbp-4Ah]
  BOOLEAN v218; // [rsp+C7h] [rbp-49h] BYREF
  char v219; // [rsp+C8h] [rbp-48h]
  char v220; // [rsp+C9h] [rbp-47h] BYREF
  __int16 v221; // [rsp+CAh] [rbp-46h]
  char v222; // [rsp+CCh] [rbp-44h]
  __int64 v223; // [rsp+D0h] [rbp-40h] BYREF
  PVOID v224; // [rsp+D8h] [rbp-38h]
  _WORD v225[2]; // [rsp+E0h] [rbp-30h] BYREF
  int v226; // [rsp+E4h] [rbp-2Ch]
  int v227; // [rsp+E8h] [rbp-28h]
  _DWORD Size[3]; // [rsp+ECh] [rbp-24h]
  void *Src; // [rsp+F8h] [rbp-18h]
  void *v230; // [rsp+100h] [rbp-10h]
  PSECURITY_SUBJECT_CONTEXT SubjectSecurityContext; // [rsp+108h] [rbp-8h]
  PGENERIC_MAPPING v232; // [rsp+110h] [rbp+0h]
  int v233; // [rsp+118h] [rbp+8h] BYREF
  PSID Sid1; // [rsp+120h] [rbp+10h]
  __int64 v235; // [rsp+128h] [rbp+18h]
  __int64 v236; // [rsp+130h] [rbp+20h]
  NTSTATUS AccessStatus; // [rsp+138h] [rbp+28h] BYREF
  void *v238; // [rsp+140h] [rbp+30h]
  PVOID SecurityDescriptor; // [rsp+148h] [rbp+38h] BYREF
  __int64 v240; // [rsp+150h] [rbp+40h]
  __int64 v241; // [rsp+158h] [rbp+48h]
  PVOID v242; // [rsp+160h] [rbp+50h]
  PVOID p_Acl; // [rsp+168h] [rbp+58h]
  ACL *v244; // [rsp+170h] [rbp+60h] BYREF
  unsigned __int16 *v245; // [rsp+178h] [rbp+68h]
  PVOID v246; // [rsp+180h] [rbp+70h] BYREF
  PVOID v247; // [rsp+188h] [rbp+78h] BYREF
  PSID ProcessTrustLabelSid; // [rsp+190h] [rbp+80h]
  int v249; // [rsp+198h] [rbp+88h]
  __int64 v250; // [rsp+1A0h] [rbp+90h]
  _QWORD *v251; // [rsp+1A8h] [rbp+98h]
  _OWORD v252[2]; // [rsp+1B0h] [rbp+A0h] BYREF
  __int64 v253; // [rsp+1D0h] [rbp+C0h]
  int v254; // [rsp+1D8h] [rbp+C8h]
  unsigned __int16 v255; // [rsp+1DCh] [rbp+CCh]
  int v256; // [rsp+1E0h] [rbp+D0h]
  unsigned __int16 v257; // [rsp+1E4h] [rbp+D4h]
  struct _PRIVILEGE_SET RequiredPrivileges; // [rsp+1E8h] [rbp+D8h] BYREF
  ACL Acl; // [rsp+200h] [rbp+F0h] BYREF
  _BYTE v260[120]; // [rsp+208h] [rbp+F8h] BYREF
  ACL v261; // [rsp+280h] [rbp+170h] BYREF

  v10 = a1;
  v232 = a9;
  v11 = a2;
  v250 = a10;
  v251 = a3;
  v253 = 0LL;
  v12 = 0LL;
  v213 = 0;
  v13 = 0LL;
  v14 = 0LL;
  v221 = 0;
  v208 = 0;
  *(_WORD *)AccessMode = 256;
  v225[0] = 0;
  v216 = 0;
  LOBYTE(Size[0]) = 0;
  v220 = 0;
  v235 = a1;
  v15 = a7;
  v241 = a4;
  v16 = 0LL;
  p_Acl = &Acl;
  *(_QWORD *)&Size[1] = a2;
  SubjectSecurityContext = (PSECURITY_SUBJECT_CONTEXT)a8;
  v224 = 0LL;
  v233 = 0;
  *(_QWORD *)&AccessMode[7] = 0LL;
  v246 = 0LL;
  v242 = 0LL;
  Sid1 = 0LL;
  ProcessTrustLabelSid = 0LL;
  v236 = 0LL;
  v240 = 0LL;
  v245 = 0LL;
  v214 = 0LL;
  LODWORD(v223) = 0;
  AccessStatus = 0;
  v238 = 0LL;
  v244 = 0LL;
  v211 = 0;
  SecurityDescriptor = 0LL;
  v218 = 1;
  v247 = 0LL;
  v222 = 0;
  memset(v252, 0, sizeof(v252));
  memset(&RequiredPrivileges, 0, sizeof(RequiredPrivileges));
  if ( (a7 & 0x2000) == 0 )
    AccessMode[1] = KeGetCurrentThread()->PreviousMode;
  if ( a2 )
  {
    v219 = 1;
  }
  else
  {
    v11 = v252;
    v219 = 0;
    *(_QWORD *)&Size[1] = v252;
    LOBYTE(v252[0]) = 1;
  }
  v17 = *((unsigned __int16 *)v11 + 1);
  v18 = *((_WORD *)v11 + 1) & 0x80;
  LOBYTE(v19) = v18 != 0;
  LOBYTE(v17) = (v17 & 0x40) != 0;
  v249 = v17;
  if ( a8 || (v43 = v18 != 0, v226 = (unsigned __int8)v19, v18) )
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
    LOBYTE(v226) = v19;
    if ( v22 )
    {
      v19 = (unsigned __int8)v19;
      if ( *(_DWORD *)(a8 + 8) == 1 )
        v19 = 1;
      v226 = v19;
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
    v32 = TokenTrustLevel;
    if ( TokenTrustLevel )
      v33 = 4LL * TokenTrustLevel[1] + 8;
    else
      v33 = 0LL;
    if ( v24 )
      v34 = 4LL * v24[1] + 8;
    else
      v34 = 0LL;
    if ( v26 )
      v35 = 4LL * v26[1] + 32;
    else
      v35 = 24LL;
    if ( v25 )
      v36 = v25[1];
    else
      v36 = 0LL;
    Pool2 = (void *)ExAllocatePool2(
                      0x40uLL,
                      v35 + v36 + v34 + v33 + 4 * (v30[1] + v28[1] + (unsigned __int64)v27[1]),
                      0x64536553u);
    v242 = Pool2;
    if ( !Pool2 )
    {
      ExReleaseResourceLite(*((PERESOURCE *)SubjectSecurityContext->PrimaryToken + 6));
      KeLeaveCriticalRegionThread();
      if ( SubjectSecurityContext->ClientToken )
      {
        ExReleaseResourceLite(*((PERESOURCE *)SubjectSecurityContext->ClientToken + 6));
        KeLeaveCriticalRegionThread();
      }
      return 3221225626LL;
    }
    memmove(Pool2, v27, 4LL * v27[1] + 8);
    v38 = 4LL * v30[1] + 8;
    v39 = (char *)v242 + 4 * v27[1] + 8;
    Sid1 = v39;
    memmove(v39, v30, v38);
    v40 = v30[1];
    v13 = &v39[4 * v40 + 8];
    v236 = (__int64)v13;
    if ( v32 )
    {
      v108 = v32[1];
      ProcessTrustLabelSid = &v39[4 * v40 + 8];
      memmove(ProcessTrustLabelSid, v32, 4 * v108 + 8);
      v13 += 4 * v32[1] + 8;
      v236 = (__int64)v13;
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
      v236 = (__int64)v13;
    }
    else
    {
      v12 = 0LL;
    }
    memmove(v13, v28, 4LL * v28[1] + 8);
    v41 = &v13[4 * v28[1] + 8];
    v245 = (unsigned __int16 *)v41;
    if ( v26 )
    {
      v42 = v26[1];
      v240 = (__int64)v41;
      v14 = v41;
      memmove(v41, v26, 4 * v42 + 8);
      v41 += 4 * v26[1] + 8;
      v245 = (unsigned __int16 *)v41;
    }
    else
    {
      v14 = 0LL;
      v240 = 0LL;
    }
    if ( v25 )
      memmove(v41, v25, v25[1]);
    else
      v245 = 0LL;
    ExReleaseResourceLite(*((PERESOURCE *)SubjectSecurityContext->PrimaryToken + 6));
    KeLeaveCriticalRegionThread();
    if ( SubjectSecurityContext->ClientToken )
    {
      ExReleaseResourceLite(*((PERESOURCE *)SubjectSecurityContext->ClientToken + 6));
      KeLeaveCriticalRegionThread();
    }
    v16 = (char *)v242;
    v10 = v235;
    v43 = v226;
    v15 = a7;
    v11 = *(_OWORD **)&Size[1];
  }
  v44 = *((unsigned __int16 *)v11 + 1);
  if ( (v44 & 0x8000u) != 0 )
  {
    v46 = *((unsigned int *)v11 + 1);
    if ( !(_DWORD)v46 )
      goto LABEL_37;
    v45 = (char *)v11 + v46;
  }
  else
  {
    v45 = (char *)*((_QWORD *)v11 + 1);
  }
  Src = v45;
  if ( v45 )
  {
    HIBYTE(v216) = 1;
    goto LABEL_41;
  }
LABEL_37:
  if ( (v15 & 0x20) != 0 )
  {
    if ( !v10 )
    {
      v101 = *(unsigned __int16 **)&AccessMode[7];
      v56 = -1073741734;
      v98 = *(ACL **)&AccessMode[7];
      v103 = 0;
      goto LABEL_153;
    }
    if ( *(__int16 *)(v10 + 2) < 0 )
    {
      v206 = *(unsigned int *)(v10 + 4);
      if ( !(_DWORD)v206 )
        goto LABEL_421;
      v191 = (void *)(v10 + v206);
    }
    else
    {
      v191 = *(void **)(v10 + 8);
    }
    Src = v191;
    HIBYTE(v216) = 1;
    if ( v191 )
      goto LABEL_41;
LABEL_421:
    v101 = *(unsigned __int16 **)&AccessMode[7];
    v56 = -1073741734;
    v102 = v214;
    v98 = *(ACL **)&AccessMode[7];
    v103 = 0;
    goto LABEL_131;
  }
  v47 = v16;
  if ( v43 )
    v47 = v13;
  Src = v47;
  if ( !v47 )
  {
    v101 = *(unsigned __int16 **)&AccessMode[7];
    v56 = -1073741700;
    v102 = v214;
    v98 = *(ACL **)&AccessMode[7];
    v103 = 0;
    goto LABEL_131;
  }
LABEL_41:
  if ( (v44 & 0x8000u) != 0 )
  {
    v104 = *((unsigned int *)v11 + 2);
    if ( !(_DWORD)v104 )
      goto LABEL_44;
    v48 = (char *)v11 + v104;
  }
  else
  {
    v48 = (char *)*((_QWORD *)v11 + 2);
  }
  v230 = v48;
  if ( v48 )
    goto LABEL_48;
LABEL_44:
  if ( (v15 & 0x40) != 0 )
  {
    if ( !v10 )
    {
      v101 = *(unsigned __int16 **)&AccessMode[7];
      v56 = -1073741733;
      v102 = v214;
      v98 = *(ACL **)&AccessMode[7];
      v103 = 0;
      goto LABEL_131;
    }
    if ( *(__int16 *)(v10 + 2) >= 0 )
    {
      v49 = *(char **)(v10 + 16);
    }
    else
    {
      v200 = *(unsigned int *)(v10 + 8);
      if ( !(_DWORD)v200 )
        goto LABEL_184;
      v49 = (char *)(v10 + v200);
    }
  }
  else
  {
    v49 = v12;
    if ( v43 )
      v49 = v14;
  }
  v230 = v49;
  if ( !v49 )
  {
LABEL_184:
    v101 = *(unsigned __int16 **)&AccessMode[7];
    v56 = -1073741733;
    v102 = v214;
    v98 = *(ACL **)&AccessMode[7];
    v103 = 0;
    goto LABEL_131;
  }
LABEL_48:
  v50 = v15 & 4;
  Index = v50;
  v51 = v50 != 0;
  v52 = v15 & 2;
  v217 = v52 != 0;
  v53 = 0LL;
  if ( (v44 & 0x10) != 0 )
  {
    if ( (v44 & 0x8000u) == 0 )
    {
      v54 = (unsigned __int8 *)*((_QWORD *)v11 + 3);
    }
    else
    {
      v67 = *((unsigned int *)v11 + 3);
      if ( (_DWORD)v67 )
        v54 = (unsigned __int8 *)v11 + v67;
      else
        v54 = 0LL;
    }
  }
  else
  {
    v54 = 0LL;
  }
  if ( !v10 )
    goto LABEL_51;
  v110 = *(_WORD *)(v10 + 2);
  if ( (v110 & 0x10) == 0 )
    goto LABEL_51;
  if ( v110 < 0 )
  {
    v111 = *(_DWORD *)(v10 + 12);
    if ( v111 )
    {
      v55 = (_BYTE *)(v235 + v111);
      goto LABEL_52;
    }
LABEL_51:
    v55 = 0LL;
    goto LABEL_52;
  }
  v55 = *(_BYTE **)(v10 + 24);
LABEL_52:
  v56 = 0;
  v57 = ((v44 & 0x10) != 0 ? 4 : 0) | (v44 >> 2) & 8 | (v44 >> 1) & 0x1400;
  if ( !v57 && !v55 )
  {
    AccessMode[0] = 0;
    P = 0LL;
    GrantedAccess = -2147483637;
    LODWORD(v223) = v52 != 0 ? 0x400 : 0;
    goto LABEL_60;
  }
  v88 = 200;
  GrantedAccess = 200;
  while ( 1 )
  {
    v58 = 0LL;
    if ( (unsigned int)v53 >= 2 )
      goto LABEL_56;
    v89 = (ACL *)ExAllocatePool2(0x100uLL, v88, 0x63416553u);
    P = v89;
    if ( !v89 )
    {
      v56 = -1073741801;
      v98 = 0LL;
      goto LABEL_526;
    }
    v56 = RtlpInheritAcl2(
            v55,
            v54,
            v57,
            a6,
            v217,
            v51,
            (__int64)Src,
            (__int64)v230,
            v236,
            v240,
            v232,
            2,
            v241,
            a5,
            &GrantedAccess,
            v89,
            AccessMode,
            (int *)&v223);
    if ( v56 >= 0 )
      break;
    ExFreePoolWithTag(P, 0);
    v58 = 0LL;
    if ( v56 != -1073741789 )
      goto LABEL_56;
    v88 = GrantedAccess;
    LODWORD(v53) = (_DWORD)v53 + 1;
  }
  if ( GrantedAccess )
  {
    v58 = (ACL *)P;
LABEL_56:
    v53 = 0LL;
  }
  else
  {
    ExFreePoolWithTag(P, 0);
    v53 = 0LL;
    v58 = 0LL;
  }
  P = v58;
  if ( v56 >= 0 )
  {
    v50 = Index;
    v11 = *(_OWORD **)&Size[1];
    v213 = 1;
    v61 = 2 * (v223 & 0x1400 | (2 * (v223 & 8 | 0x2004)));
    v227 = v61;
  }
  else
  {
    P = v58;
    if ( v56 != -2147483637 )
    {
      v101 = *(unsigned __int16 **)&AccessMode[7];
      v98 = v58;
      v102 = v214;
      v103 = 0;
      goto LABEL_131;
    }
    v50 = Index;
    v11 = *(_OWORD **)&Size[1];
LABEL_60:
    v59 = *((_WORD *)v11 + 1);
    v60 = 34816;
    if ( !v52 )
      v60 = 0x8000;
    if ( (v59 & 0x30) != 0x30 )
    {
      v61 = v60;
      v227 = v60;
      goto LABEL_64;
    }
    if ( (v59 & 0x10) == 0 )
    {
      P = 0LL;
      goto LABEL_436;
    }
    if ( v59 >= 0 )
    {
      v202 = (char *)*((_QWORD *)v11 + 3);
LABEL_469:
      P = v202;
    }
    else
    {
      v201 = *((unsigned int *)v11 + 3);
      if ( (_DWORD)v201 )
      {
        v202 = (char *)v11 + v201;
        goto LABEL_469;
      }
      P = 0LL;
    }
LABEL_436:
    AccessMode[0] = 1;
    v61 = v60 | v59 & 0x2000 | 0x10;
    v227 = v61;
  }
LABEL_64:
  v62 = *((_WORD *)v11 + 1);
  v63 = v50 != 0;
  if ( (v62 & 0x10) != 0 )
  {
    if ( v62 >= 0 )
    {
      v64 = (unsigned __int8 *)*((_QWORD *)v11 + 3);
    }
    else
    {
      v90 = *((unsigned int *)v11 + 3);
      if ( (_DWORD)v90 )
        v64 = (unsigned __int8 *)v11 + v90;
      else
        v64 = 0LL;
    }
  }
  else
  {
    v64 = 0LL;
  }
  if ( !v235 )
    goto LABEL_67;
  v112 = *(_WORD *)(v235 + 2);
  if ( (v112 & 0x10) == 0 )
    goto LABEL_67;
  if ( v112 >= 0 )
  {
    v65 = *(_BYTE **)(v235 + 24);
    goto LABEL_68;
  }
  v113 = *(unsigned int *)(v235 + 12);
  if ( (_DWORD)v113 )
    v65 = (_BYTE *)(v235 + v113);
  else
LABEL_67:
    v65 = 0LL;
LABEL_68:
  v56 = 0;
  v66 = ((*((_WORD *)v11 + 1) & 0x10) != 0 ? 4 : 0) | (*((unsigned __int16 *)v11 + 1) >> 2) & 8 | (*((unsigned __int16 *)v11 + 1) >> 1) & 0x400;
  if ( v66 || v65 )
  {
    v99 = 200;
    GrantedAccess = 200;
    while ( 1 )
    {
      v68 = 0LL;
      if ( (unsigned int)v53 >= 2 )
        goto LABEL_76;
      v100 = (ACL *)ExAllocatePool2(0x100uLL, v99, 0x63416553u);
      v224 = v100;
      if ( !v100 )
      {
LABEL_182:
        v56 = -1073741801;
        goto LABEL_183;
      }
      v56 = RtlpInheritAcl2(
              v65,
              v64,
              v66,
              a6,
              v217,
              v63,
              (__int64)Src,
              (__int64)v230,
              v236,
              v240,
              v232,
              2,
              v241,
              a5,
              &GrantedAccess,
              v100,
              v225,
              &AccessStatus);
      if ( v56 >= 0 )
        break;
      ExFreePoolWithTag(v224, 0);
      v68 = 0LL;
      if ( v56 != -1073741789 )
        goto LABEL_76;
      v99 = GrantedAccess;
      LODWORD(v53) = (_DWORD)v53 + 1;
    }
    if ( GrantedAccess )
    {
      v68 = (char *)v224;
LABEL_76:
      v53 = 0LL;
    }
    else
    {
      ExFreePoolWithTag(v224, 0);
      v53 = 0LL;
      v68 = 0LL;
    }
    v224 = v68;
    GrantedAccess = v56;
    if ( v56 >= 0 )
    {
      v11 = *(_OWORD **)&Size[1];
      v53 = v68;
      HIBYTE(v221) = 1;
      goto LABEL_82;
    }
    v224 = v68;
    if ( v56 == -2147483637 )
    {
      v11 = *(_OWORD **)&Size[1];
      goto LABEL_80;
    }
    goto LABEL_183;
  }
  v224 = 0LL;
  GrantedAccess = -2147483637;
LABEL_80:
  v69 = *((_WORD *)v11 + 1);
  if ( (v69 & 0x30) == 0x30 )
  {
    if ( (v69 & 0x10) != 0 )
    {
      if ( v69 >= 0 )
      {
        v53 = (char *)*((_QWORD *)v11 + 3);
        v224 = v53;
      }
      else
      {
        v203 = *((unsigned int *)v11 + 3);
        if ( (_DWORD)v203 )
        {
          v53 = (char *)v11 + v203;
          v224 = (char *)v11 + v203;
        }
        else
        {
          v224 = 0LL;
        }
      }
    }
    else
    {
      v224 = 0LL;
    }
  }
  else
  {
    v53 = (char *)v224;
  }
LABEL_82:
  v70 = ProcessTrustLabelSid;
  Index = 0;
  while ( 1 )
  {
    v71 = *((_WORD *)v11 + 1);
    if ( (v71 & 0x10) != 0 )
    {
      if ( v71 >= 0 )
      {
        v72 = (ACL *)*((_QWORD *)v11 + 3);
      }
      else
      {
        v91 = *((unsigned int *)v11 + 3);
        if ( (_DWORD)v91 )
          v72 = (ACL *)((char *)v11 + v91);
        else
          v72 = 0LL;
      }
    }
    else
    {
      v72 = 0LL;
    }
    AceByType = RtlFindAceByType(v72, 0x14u, &Index);
    v75 = (__int64)AceByType + 8;
    if ( !AceByType )
      v75 = 0LL;
    if ( v75 && !RtlpValidTrustSubjectContext(v70, v75, v74, &GrantedAccess) )
    {
      v98 = (ACL *)P;
      v56 = -1073741790;
      v102 = v214;
      v101 = 0LL;
      v103 = 0;
      goto LABEL_131;
    }
    ++Index;
    if ( !AceByType )
      break;
    v11 = *(_OWORD **)&Size[1];
  }
  v76 = a7;
  v77 = 4;
  if ( (a7 & 0x800) == 0 )
  {
    v78 = *(_QWORD *)&Size[1];
LABEL_91:
    v247 = v53;
    goto LABEL_92;
  }
  Index = 0;
  v78 = *(_QWORD *)&Size[1];
  while ( 2 )
  {
    v194 = *(_WORD *)(v78 + 2);
    if ( (v194 & 0x10) != 0 )
    {
      if ( v194 >= 0 )
      {
        v195 = *(ACL **)(v78 + 24);
      }
      else
      {
        v204 = *(unsigned int *)(v78 + 12);
        if ( (_DWORD)v204 )
          v195 = (ACL *)(v78 + v204);
        else
          v195 = 0LL;
      }
    }
    else
    {
      v195 = 0LL;
    }
    v196 = (char *)RtlFindAceByType(v195, 0x14u, &Index);
    ++Index;
    if ( !v196 )
    {
      if ( !v70 )
        goto LABEL_91;
      if ( v250 )
      {
        v197 = *(_DWORD *)(v250 + 4);
        v198 = v70;
        v199 = 0;
        goto LABEL_459;
      }
      v56 = -1073741811;
      v103 = 0;
LABEL_152:
      v98 = (ACL *)P;
      v101 = *(unsigned __int16 **)&AccessMode[7];
LABEL_153:
      v102 = v214;
      goto LABEL_131;
    }
    if ( (v196[1] & 8) != 0 )
      continue;
    break;
  }
  v197 = *((_DWORD *)v196 + 1);
  v198 = v196 + 8;
  v199 = (unsigned __int8)v196[1];
  if ( !v250 || (v197 & *(_DWORD *)(v250 + 4)) != v197 || v196 == (char *)-8LL )
    goto LABEL_151;
LABEL_459:
  v56 = RtlCreateAcl(&v261, 0x58u, 2u);
  if ( v56 < 0 )
    goto LABEL_183;
  v56 = RtlAddProcessTrustLabelAce(&v261, 2u, v199, v198, 0x14u, v197);
  if ( v56 < 0 )
    goto LABEL_183;
  v78 = *(_QWORD *)&Size[1];
  v56 = RtlpComputeMergedAcl(
          (int)v224,
          (*(_WORD *)(*(_QWORD *)&Size[1] + 2LL) & 0x800 | (*(unsigned __int16 *)(*(_QWORD *)&Size[1] + 2LL) >> 1) & 0x18u) >> 1,
          (int)&v261,
          4,
          (__int64)Src,
          (__int64)v230,
          (__int64)v232,
          2,
          (__int64)&v247,
          (__int64)&v223);
  if ( v56 < 0 )
    goto LABEL_183;
  v76 = a7;
  v222 = 1;
LABEL_92:
  v79 = *(_WORD *)(v78 + 2);
  if ( (v79 & 0x10) != 0 )
  {
    if ( v79 >= 0 )
    {
      v80 = *(ACL **)(v78 + 24);
    }
    else
    {
      v92 = *(unsigned int *)(v78 + 12);
      if ( (_DWORD)v92 )
        v80 = (ACL *)(v78 + v92);
      else
        v80 = 0LL;
    }
  }
  else
  {
    v80 = 0LL;
  }
  GrantedAccess = 0;
  v254 = 0;
  v255 = 256;
  Index = 0;
  while ( 2 )
  {
    while ( 2 )
    {
      v81 = RtlFindAceByType(v80, 0x15u, &Index);
      if ( !v81 )
      {
LABEL_96:
        ++Index;
        if ( !v81 )
        {
          v56 = GrantedAccess;
          goto LABEL_98;
        }
        continue;
      }
      break;
    }
    if ( (v81[1] & 0xFF000000) != 0 )
      goto LABEL_532;
    if ( (*((_BYTE *)v81 + 1) & 0x40) == 0 )
    {
      v207 = *(_DWORD *)((char *)v81 + 10) - v254;
      if ( !v207 )
        v207 = *((unsigned __int16 *)v81 + 7) - v255;
      if ( v207 || *((_BYTE *)v81 + 9) != 1 || v81[4] )
      {
LABEL_532:
        v56 = -1073741811;
        goto LABEL_98;
      }
      goto LABEL_96;
    }
    if ( RtlpValidTrustSubjectContext(v70, (__int64)(v81 + 2), v82, &GrantedAccess) )
    {
      ++Index;
      continue;
    }
    break;
  }
  v56 = -1073741790;
LABEL_98:
  if ( v56 < 0 )
  {
LABEL_183:
    v98 = (ACL *)P;
    v103 = 0;
    v101 = *(unsigned __int16 **)&AccessMode[7];
    v102 = v214;
    goto LABEL_131;
  }
  v83 = (v76 >> 8) & 1 | 2;
  if ( (v76 & 0x200) == 0 )
    v83 = (v76 >> 8) & 1;
  v84 = v83 | 4;
  if ( (v76 & 0x400) == 0 )
    v84 = v83;
  if ( v84 )
  {
    v85 = (unsigned __int8 *)v238;
    v86 = v238;
    goto LABEL_105;
  }
  v105 = *(_WORD *)(v78 + 2);
  if ( (v105 & 0x10) != 0 )
  {
    if ( v105 >= 0 )
    {
      v106 = *(ACL **)(v78 + 24);
    }
    else
    {
      v109 = *(unsigned int *)(v78 + 12);
      if ( (_DWORD)v109 )
        v106 = (ACL *)(v78 + v109);
      else
        v106 = 0LL;
    }
  }
  else
  {
    v106 = 0LL;
  }
  v107 = (char *)RtlFindAceByType(v106, 0x11u, 0LL);
  v86 = v107;
  if ( !v107 )
  {
    v85 = (unsigned __int8 *)v238;
LABEL_105:
    v87 = Sid1;
    goto LABEL_190;
  }
  v114 = v107[1];
  v85 = (unsigned __int8 *)(v107 + 8);
  v84 = *((_DWORD *)v107 + 1);
  v238 = v107 + 8;
  v211 = v114;
  if ( v114 == 8 || (v114 & 0x10) != 0 )
  {
    v86 = 0LL;
    v238 = 0LL;
    v85 = 0LL;
    v211 = 0;
    v84 = 0;
    v87 = Sid1;
    goto LABEL_190;
  }
  v87 = Sid1;
  if ( (v114 & 8) != 0 )
  {
    v211 = v114;
    v238 = v107 + 8;
    if ( *RtlSubAuthoritySid(Sid1, 0) < 0x2000 )
    {
      v98 = (ACL *)P;
      v56 = -1073740730;
      v101 = *(unsigned __int16 **)&AccessMode[7];
      v103 = 0;
      v102 = v214;
      goto LABEL_131;
    }
  }
LABEL_190:
  if ( !v84 )
  {
    if ( v87 && *RtlSubAuthoritySid(v87, 0) < 0x2000 )
    {
      v84 = 1;
      goto LABEL_191;
    }
    v115 = SubjectSecurityContext;
LABEL_194:
    if ( v85 )
    {
      memset_0(v260, 0, sizeof(v260));
      Acl = (ACL)8388610LL;
      v256 = 0;
      v257 = 4096;
      if ( (unsigned __int64)v85 <= 0x7FFFFFFF0000LL || (*v85 & 0xF) != 1 || v85[1] > 0xFu )
      {
        v98 = (ACL *)P;
        v56 = -1073741704;
        v101 = *(unsigned __int16 **)&AccessMode[7];
        v103 = 0;
        v102 = v214;
        goto LABEL_131;
      }
      v116 = *(_DWORD *)(v85 + 2) - v256;
      if ( !v116 )
        v116 = *((unsigned __int16 *)v85 + 3) - v257;
      if ( v116 )
      {
LABEL_151:
        v56 = -1073741811;
        v103 = 0;
        goto LABEL_152;
      }
      if ( (v211 & 0xE0) != 0 )
      {
        v56 = -1073741811;
        v103 = 0;
        goto LABEL_152;
      }
      if ( (v84 & 0xFFFFFFF8) != 0 )
      {
        v56 = -1073741811;
        v103 = 0;
        goto LABEL_152;
      }
      if ( !RtlValidAcl(&Acl) )
      {
LABEL_530:
        v98 = (ACL *)P;
        v56 = -1073741705;
        v101 = *(unsigned __int16 **)&AccessMode[7];
        v103 = 0;
        v102 = v214;
        goto LABEL_131;
      }
      v117 = v260;
      for ( i = 0; i < Acl.AceCount; ++i )
      {
        if ( v117 >= (_BYTE *)&Acl + Acl.AclSize )
          goto LABEL_530;
        v117 += *((unsigned __int16 *)v117 + 1);
      }
      if ( v117 > (_BYTE *)&Acl + Acl.AclSize )
        v117 = 0LL;
      v119 = 4 * (v85[1] + 4);
      if ( !v117 || &v117[v119] > (_BYTE *)&Acl + Acl.AclSize )
      {
        v98 = (ACL *)P;
        v56 = -1073741671;
        v101 = *(unsigned __int16 **)&AccessMode[7];
        v103 = 0;
        v102 = v214;
        goto LABEL_131;
      }
      v120 = v211;
      *((_WORD *)v117 + 1) = v119;
      v117[1] = v120;
      *v117 = 17;
      *((_DWORD *)v117 + 1) = v84;
      memmove(v117 + 8, v85, 4LL * v85[1] + 8);
      ++Acl.AceCount;
      v121 = &Acl;
      Acl.AclRevision = 2;
      GrantedAccess = 0;
    }
    else
    {
      v121 = 0LL;
      p_Acl = 0LL;
    }
    if ( (a7 & 0x700) == 0 )
    {
      if ( !v86 && v121 )
        v77 = 0;
      else
        v77 = (*(_WORD *)(v78 + 2) & 0x2800 | (*(unsigned __int16 *)(v78 + 2) >> 1) & 0x18u) >> 1;
    }
    if ( v235 )
    {
      v186 = *(_WORD *)(v235 + 2);
      if ( (v186 & 0x10) != 0 )
      {
        if ( v186 >= 0 )
        {
          v122 = *(_BYTE **)(v235 + 24);
LABEL_214:
          v56 = 0;
          if ( !v77 && !v122 )
            goto LABEL_216;
          v174 = 200;
          v175 = 0;
          GrantedAccess = 200;
          while ( 1 )
          {
            v125 = 0LL;
            if ( v175 >= 2 )
              break;
            v176 = (ACL *)ExAllocatePool2(0x100uLL, v174, 0x63416553u);
            v125 = v176;
            if ( !v176 )
              goto LABEL_182;
            v56 = RtlpInheritAcl2(
                    v122,
                    (unsigned __int8 *)p_Acl,
                    v77,
                    a6,
                    1,
                    0,
                    (__int64)Src,
                    (__int64)v230,
                    v236,
                    v240,
                    v232,
                    3,
                    v241,
                    a5,
                    &GrantedAccess,
                    v176,
                    (_BYTE *)v225 + 1,
                    (int *)&v223);
            if ( v56 >= 0 )
            {
              if ( !GrantedAccess )
              {
                ExFreePoolWithTag(v125, 0);
                v125 = 0LL;
              }
              break;
            }
            ExFreePoolWithTag(v125, 0);
            v125 = 0LL;
            if ( v56 != -1073741789 )
              break;
            v174 = GrantedAccess;
            ++v175;
          }
          if ( v56 != -2147483637 )
          {
            if ( v56 < 0 )
              goto LABEL_183;
            v124 = v223;
            v123 = p_Acl;
          }
          else
          {
LABEL_216:
            v123 = p_Acl;
            v124 = 0;
            v125 = p_Acl;
            LODWORD(v223) = 0;
          }
          v98 = (ACL *)P;
          v56 = RtlpCombineAcls(
                  (_DWORD)P,
                  (_DWORD)v125,
                  (_DWORD)v224,
                  (_DWORD)v224,
                  (__int64)v247,
                  (__int64)v224,
                  (__int64)&v244,
                  (__int64)&v233);
          v233 |= (v61 & 0x2000) << 17;
          if ( v125 && v125 != v123 )
            ExFreePoolWithTag(v125, 0);
          if ( v56 >= 0 )
          {
            v126 = v244;
            if ( v244 )
            {
              if ( v213 && v98 )
              {
                ExFreePoolWithTag(v98, 0);
                v126 = v244;
              }
              v98 = v126;
              P = v126;
              LOBYTE(v221) = 1;
              v244 = 0LL;
              v227 = (2 * (v124 & 0x1400 | (2 * (v124 & 8 | 4)))) | v61;
            }
            v127 = a7;
            if ( (a7 & 8) != 0 )
              goto LABEL_234;
            v128 = (char *)RtlFindAceByType(v98, 0x11u, 0LL);
            if ( v128 )
              v129 = v128 + 8;
            else
              v129 = v238;
            if ( !v129 )
            {
LABEL_233:
              v127 = a7;
LABEL_234:
              v131 = *(_QWORD *)&Size[1];
              v132 = (v127 & 4) != 0;
              v133 = v127 & 1;
              v134 = *(_WORD *)(*(_QWORD *)&Size[1] + 2LL);
              if ( (v134 & 4) != 0 )
              {
                if ( v134 >= 0 )
                {
                  v135 = *(unsigned __int8 **)(*(_QWORD *)&Size[1] + 32LL);
                }
                else
                {
                  v144 = *(unsigned int *)(*(_QWORD *)&Size[1] + 16LL);
                  if ( (_DWORD)v144 )
                    v135 = (unsigned __int8 *)(*(_QWORD *)&Size[1] + v144);
                  else
                    v135 = 0LL;
                }
              }
              else
              {
                v135 = 0LL;
              }
              v136 = v235;
              if ( !v235 )
                goto LABEL_237;
              v184 = *(_WORD *)(v235 + 2);
              if ( (v184 & 4) == 0 )
                goto LABEL_237;
              if ( v184 >= 0 )
              {
                v137 = *(_BYTE **)(v235 + 32);
                goto LABEL_238;
              }
              v185 = *(unsigned int *)(v235 + 16);
              if ( (_DWORD)v185 )
                v137 = (_BYTE *)(v235 + v185);
              else
LABEL_237:
                v137 = 0LL;
LABEL_238:
              v56 = 0;
              v138 = *(_WORD *)(*(_QWORD *)&Size[1] + 2LL) & 0x140C;
              if ( v138 || v137 )
              {
                v177 = 200;
                v178 = 0;
                GrantedAccess = 200;
                while ( 1 )
                {
                  v140 = 0LL;
                  if ( v178 >= 2 )
                    break;
                  v179 = (ACL *)ExAllocatePool2(0x100uLL, v177, 0x63416553u);
                  *(_QWORD *)&AccessMode[7] = v179;
                  if ( !v179 )
                  {
                    v98 = (ACL *)P;
                    v56 = -1073741801;
                    v102 = v214;
                    v101 = 0LL;
                    v103 = 0;
                    goto LABEL_131;
                  }
                  v56 = RtlpInheritAcl2(
                          v137,
                          v135,
                          v138,
                          a6,
                          v133,
                          v132,
                          (__int64)Src,
                          (__int64)v230,
                          v236,
                          v240,
                          v232,
                          1,
                          v241,
                          a5,
                          &GrantedAccess,
                          v179,
                          &v216,
                          (int *)&v223);
                  if ( v56 >= 0 )
                  {
                    if ( GrantedAccess )
                    {
                      v140 = *(unsigned __int16 **)&AccessMode[7];
                    }
                    else
                    {
                      ExFreePoolWithTag(*(PVOID *)&AccessMode[7], 0);
                      v140 = 0LL;
                    }
                    break;
                  }
                  ExFreePoolWithTag(*(PVOID *)&AccessMode[7], 0);
                  v140 = 0LL;
                  if ( v56 != -1073741789 )
                    break;
                  v177 = GrantedAccess;
                  ++v178;
                }
                *(_QWORD *)&AccessMode[7] = v140;
                if ( v56 >= 0 )
                {
                  v143 = 1;
                  v139 = v216;
                  v127 = a7;
                  v141 = v223 & 0x1408 | 4 | v227;
                  v136 = v235;
                  v208 = 1;
                  goto LABEL_251;
                }
                *(_QWORD *)&AccessMode[7] = v140;
                if ( v56 == -2147483637 )
                {
                  v139 = v216;
                  v131 = *(_QWORD *)&Size[1];
                  v127 = a7;
                  v136 = v235;
                  goto LABEL_241;
                }
                v98 = (ACL *)P;
                v101 = v140;
                v102 = v214;
                v103 = 0;
                goto LABEL_131;
              }
              v139 = 0;
              *(_QWORD *)&AccessMode[7] = 0LL;
              v140 = 0LL;
LABEL_241:
              v141 = v227;
              if ( (v127 & 1) != 0 )
                v141 = v227 | 0x400;
              v142 = *(_WORD *)(v131 + 2);
              if ( (v142 & 0xC) == 0xC )
              {
                if ( (v142 & 4) != 0 )
                {
                  if ( v142 >= 0 )
                  {
                    v140 = *(unsigned __int16 **)(v131 + 32);
                  }
                  else
                  {
                    v192 = *(unsigned int *)(v131 + 16);
                    if ( (_DWORD)v192 )
                      v140 = (unsigned __int16 *)(v131 + v192);
                    else
                      v140 = 0LL;
                  }
                }
                else
                {
                  v140 = 0LL;
                }
                *(_QWORD *)&AccessMode[7] = v140;
                v139 = 1;
                v141 |= v142 & 0x1000 | 4;
                v143 = 0;
              }
              else
              {
                if ( v245 )
                {
                  v140 = v245;
                  *(_QWORD *)&AccessMode[7] = v245;
                  v141 |= 4u;
                }
                v143 = 0;
              }
LABEL_251:
              v145 = SubjectSecurityContext;
              if ( (v127 & 0x1000) == 0 && v219 && SubjectSecurityContext && v136 )
              {
                GenericMapping = v232;
                GrantedAccess = 0;
                AccessStatus = 0;
                v56 = RtlpNewSecurityObject(
                        v136,
                        0,
                        (unsigned int)&SecurityDescriptor,
                        v241,
                        a5,
                        a6,
                        (unsigned int)v127 | 1,
                        (__int64)SubjectSecurityContext,
                        (__int64)v232,
                        v250);
                if ( v56 < 0 )
                {
LABEL_398:
                  v103 = v208;
                  goto LABEL_152;
                }
                v181 = *((_WORD *)SecurityDescriptor + 1);
                if ( (v181 & 4) != 0 )
                {
                  if ( v181 >= 0 )
                  {
                    v182 = (char *)*((_QWORD *)SecurityDescriptor + 4);
                  }
                  else
                  {
                    v188 = *((_DWORD *)SecurityDescriptor + 4);
                    if ( v188 )
                      v182 = (char *)SecurityDescriptor + v188;
                    else
                      v182 = 0LL;
                  }
                }
                else
                {
                  v182 = 0LL;
                }
                v183 = RtlpOwnerAcesPresent(0x10u, (__int64)v182);
                v146 = AccessMode[1];
                if ( v183 )
                {
                  if ( !SeAccessCheck(
                          SecurityDescriptor,
                          v145,
                          0,
                          0x40000u,
                          0,
                          0LL,
                          GenericMapping,
                          AccessMode[1],
                          &GrantedAccess,
                          &AccessStatus) )
                  {
                    v56 = -1073741790;
                    goto LABEL_398;
                  }
                  v140 = *(unsigned __int16 **)&AccessMode[7];
                  v127 = a7;
                }
                else
                {
                  v140 = *(unsigned __int16 **)&AccessMode[7];
                  v127 = a7;
                }
              }
              else
              {
                v146 = AccessMode[1];
              }
              if ( (v127 & 1) != 0 && !v140 )
                v141 |= 0x1000u;
              v147 = !v233 || (v233 & 0x1B0) != v233;
              if ( v146 != 1 )
                goto LABEL_265;
              if ( AccessMode[0] && (v127 & 8) == 0 && v147 )
              {
                if ( !v145 )
                  goto LABEL_522;
                RequiredPrivileges.Privilege[0].Luid = SeSecurityPrivilege;
                RequiredPrivileges.PrivilegeCount = 1;
                RequiredPrivileges.Control = 1;
                RequiredPrivileges.Privilege[0].Attributes = 0;
                v205 = SePrivilegeCheck(&RequiredPrivileges, v145, 1);
                SePrivilegedServiceAuditAlarm(0LL, v145, &RequiredPrivileges.PrivilegeCount, v205);
                if ( !v205 )
                {
                  v103 = v208;
                  v56 = -1073741727;
                  goto LABEL_152;
                }
                v127 = a7;
              }
              if ( !LOBYTE(Size[0]) || (v127 & 8) != 0 )
                goto LABEL_263;
              if ( v145 )
              {
                RequiredPrivileges.Privilege[0].Luid = (LUID)SeRelabelPrivilege;
                RequiredPrivileges.PrivilegeCount = 1;
                RequiredPrivileges.Control = 1;
                RequiredPrivileges.Privilege[0].Attributes = 0;
                v193 = SePrivilegeCheck(&RequiredPrivileges, v145, 1);
                SePrivilegedServiceAuditAlarm(0LL, v145, &RequiredPrivileges.PrivilegeCount, v193);
                if ( !v193 )
                {
                  v103 = v208;
                  v56 = -1073741727;
                  goto LABEL_152;
                }
LABEL_263:
                v148 = v226;
                if ( HIBYTE(v216)
                  && (a7 & 0x10) == 0
                  && !(unsigned __int8)SepValidOwnerSubjectContext(v145, Src, (unsigned __int8)v226, v127) )
                {
                  v56 = -1073741734;
                  goto LABEL_398;
                }
                if ( v139 && v148 )
                {
                  v101 = *(unsigned __int16 **)&AccessMode[7];
                  v56 = RtlpCreateServerAcl(
                          *(__int64 *)&AccessMode[7],
                          v249,
                          (unsigned __int8 *)v236,
                          (ACL **)&v246,
                          &v220);
                  if ( v56 < 0 )
                  {
                    v98 = (ACL *)P;
                    v103 = v208;
                    v102 = v214;
                    goto LABEL_131;
                  }
                  if ( v143 && v101 )
                    ExFreePoolWithTag(v101, 0);
                  v149 = (unsigned __int16 *)v246;
                  *(_QWORD *)&AccessMode[7] = v246;
                  v246 = 0LL;
LABEL_266:
                  v150 = 4 * *((unsigned __int8 *)Src + 1) + 8;
                  Size[0] = v150;
                  if ( v230 )
                    v151 = 4 * *((unsigned __int8 *)v230 + 1) + 8;
                  else
                    v151 = 0;
                  if ( (v141 & 0x10) != 0 && P )
                    v152 = (*((unsigned __int16 *)P + 1) + 3) & 0xFFFFFFFC;
                  else
                    v152 = 0;
                  if ( (v141 & 4) != 0 && v149 )
                    v153 = (v149[1] + 3) & 0xFFFFFFFC;
                  else
                    v153 = 0;
                  v214 = (_OWORD *)ExAllocatePool2(0x100uLL, v150 + v151 + v152 + v153 + 20, 0x64536553u);
                  v102 = v214;
                  if ( !v214 )
                  {
                    v101 = *(unsigned __int16 **)&AccessMode[7];
                    v56 = -1073741670;
                    v98 = (ACL *)P;
                    v103 = v208;
                    goto LABEL_131;
                  }
                  v95 = (unsigned __int16 *)v214 + 10;
                  *v214 = 0LL;
                  *((_DWORD *)v102 + 4) = 0;
                  *((_WORD *)v102 + 1) |= v141;
                  *(_BYTE *)v102 = 1;
                  if ( (v141 & 0x10) != 0 && P )
                  {
                    v154 = (char *)v102 + 20;
                    if ( (a7 & 0x4000) != 0 )
                    {
                      v190 = v232;
                      if ( v213 )
                        v190 = 0LL;
                      RtlpNormalizeAcl((__int64)v95, (__int64)P, v190);
                      if ( v95[2] )
                      {
                        v152 = v95[1];
                      }
                      else
                      {
                        v154 = 0LL;
                        v152 = 0;
                      }
                    }
                    else
                    {
                      memmove(v95, P, *((unsigned __int16 *)P + 1));
                      if ( !v213 )
                      {
                        if ( v95 )
                        {
                          v155 = (unsigned __int8 *)(v95 + 4);
                          v156 = 0;
                          if ( v95[2] )
                          {
                            v157 = v232;
                            v158 = 1651;
                            do
                            {
                              if ( (*v155 <= 0xAu || (unsigned __int8)(*v155 - 13) <= 1u) && (v155[1] & 8) == 0 )
                              {
                                v159 = *((_DWORD *)v155 + 1);
                                if ( v159 < 0 )
                                  v159 |= v157->GenericRead;
                                if ( (v159 & 0x40000000) != 0 )
                                  v159 |= v157->GenericWrite;
                                if ( (v159 & 0x20000000) != 0 )
                                  v159 |= v157->GenericExecute;
                                if ( (v159 & 0x10000000) != 0 )
                                  v159 |= v157->GenericAll;
                                v160 = v159 & 0xFFFFFFF;
                                *((_DWORD *)v155 + 1) = v160;
                                v161 = *v155;
                                if ( (unsigned __int8)v161 <= 0xAu && _bittest(&v158, v161) )
                                  GenericAll = v157->GenericAll;
                                else
                                  GenericAll = v157->GenericAll | 0x1000000;
                                *((_DWORD *)v155 + 1) = v160 & GenericAll;
                              }
                              ++v156;
                              v155 += *((unsigned __int16 *)v155 + 1);
                            }
                            while ( v156 < v95[2] );
                          }
                        }
                      }
                      v163 = *((unsigned __int16 *)P + 1);
                      if ( v152 > (unsigned int)v163 )
                        memset_0((char *)v95 + v163, 0, v152 - (unsigned int)v163);
                      v150 = Size[0];
                    }
                    if ( v154 )
                    {
                      v95 = (unsigned __int16 *)((char *)v95 + v152);
                      v164 = v214;
                      v165 = (_DWORD)v154 - (_DWORD)v214;
                    }
                    else
                    {
                      v165 = 0;
                      v164 = v214;
                    }
                    *((_DWORD *)v164 + 3) = v165;
                    v102 = v214;
                  }
                  v101 = *(unsigned __int16 **)&AccessMode[7];
                  if ( (v141 & 4) != 0 )
                  {
                    if ( *(_QWORD *)&AccessMode[7] )
                    {
                      if ( (a7 & 0x4000) != 0 )
                      {
                        v103 = v208;
                        v189 = v232;
                        if ( v208 )
                          v189 = 0LL;
                        RtlpNormalizeAcl((__int64)v95, *(__int64 *)&AccessMode[7], v189);
                        v153 = v95[1];
                      }
                      else
                      {
                        memmove(
                          v95,
                          *(const void **)&AccessMode[7],
                          *(unsigned __int16 *)(*(_QWORD *)&AccessMode[7] + 2LL));
                        v103 = v208;
                        if ( !v208 )
                        {
                          if ( v95 )
                          {
                            v166 = (unsigned __int8 *)(v95 + 4);
                            v167 = 0;
                            if ( v95[2] )
                            {
                              v168 = v232;
                              v169 = 1651;
                              do
                              {
                                if ( (*v166 <= 0xAu || (unsigned __int8)(*v166 - 13) <= 1u) && (v166[1] & 8) == 0 )
                                {
                                  v170 = *((_DWORD *)v166 + 1);
                                  if ( v170 < 0 )
                                    v170 |= v168->GenericRead;
                                  if ( (v170 & 0x40000000) != 0 )
                                    v170 |= v168->GenericWrite;
                                  if ( (v170 & 0x20000000) != 0 )
                                    v170 |= v168->GenericExecute;
                                  if ( (v170 & 0x10000000) != 0 )
                                    v170 |= v168->GenericAll;
                                  v171 = v170 & 0xFFFFFFF;
                                  *((_DWORD *)v166 + 1) = v171;
                                  v172 = *v166;
                                  if ( (unsigned __int8)v172 <= 0xAu && _bittest(&v169, v172) )
                                    v173 = v168->GenericAll;
                                  else
                                    v173 = v168->GenericAll | 0x1000000;
                                  *((_DWORD *)v166 + 1) = v171 & v173;
                                }
                                ++v167;
                                v166 += *((unsigned __int16 *)v166 + 1);
                              }
                              while ( v167 < v95[2] );
                              v150 = Size[0];
                              v102 = v214;
                            }
                          }
                        }
                        v94 = v101[1];
                        if ( v153 > (unsigned int)v94 )
                          memset_0((char *)v95 + v94, 0, v153 - (unsigned int)v94);
                      }
                      *((_DWORD *)v102 + 4) = (_DWORD)v95 - (_DWORD)v102;
                      v95 = (unsigned __int16 *)((char *)v95 + v153);
                      goto LABEL_128;
                    }
                    *((_DWORD *)v102 + 4) = 0;
                  }
                  v103 = v208;
LABEL_128:
                  memmove(v95, Src, v150);
                  v96 = (int)v95;
                  v97 = (char *)v95 + v150;
                  *((_DWORD *)v102 + 1) = v96 - (_DWORD)v102;
                  if ( v230 )
                  {
                    memmove(v97, v230, v151);
                    *((_DWORD *)v102 + 2) = (_DWORD)v97 - (_DWORD)v102;
                  }
                  v98 = (ACL *)P;
                  v56 = 0;
                  goto LABEL_131;
                }
LABEL_265:
                v149 = *(unsigned __int16 **)&AccessMode[7];
                goto LABEL_266;
              }
LABEL_522:
              v56 = -1073741700;
              goto LABEL_398;
            }
            if ( !v115 )
            {
              v101 = *(unsigned __int16 **)&AccessMode[7];
              v56 = -1073741700;
              v102 = v214;
              v103 = 0;
              goto LABEL_131;
            }
            v56 = RtlSidDominates(Sid1, v129, &v218);
            if ( v56 >= 0 )
            {
              v130 = LOBYTE(Size[0]);
              if ( !v218 )
                v130 = 1;
              Size[0] = v130;
              goto LABEL_233;
            }
          }
LABEL_526:
          v101 = *(unsigned __int16 **)&AccessMode[7];
          v103 = 0;
          v102 = v214;
          goto LABEL_131;
        }
        v187 = *(unsigned int *)(v235 + 12);
        if ( (_DWORD)v187 )
        {
          v122 = (_BYTE *)(v235 + v187);
          goto LABEL_214;
        }
      }
    }
    v122 = 0LL;
    goto LABEL_214;
  }
LABEL_191:
  v115 = SubjectSecurityContext;
  if ( v86 )
    goto LABEL_194;
  if ( SubjectSecurityContext )
  {
    v85 = (unsigned __int8 *)Sid1;
    v238 = Sid1;
    v211 = 0;
    goto LABEL_194;
  }
  v98 = (ACL *)P;
  v56 = -1073741700;
  v101 = *(unsigned __int16 **)&AccessMode[7];
  v103 = 0;
  v102 = v214;
LABEL_131:
  if ( SecurityDescriptor )
    ExFreePoolWithTag(SecurityDescriptor, 0);
  if ( v220 && v246 )
    ExFreePoolWithTag(v246, 0);
  if ( v242 )
    ExFreePoolWithTag(v242, 0);
  if ( (v213 || (_BYTE)v221) && v98 )
    ExFreePoolWithTag(v98, 0);
  if ( HIBYTE(v221) && v224 )
    ExFreePoolWithTag(v224, 0);
  if ( v247 && v222 )
    ExFreePoolWithTag(v247, 0);
  if ( v103 )
  {
    if ( v101 )
      ExFreePoolWithTag(v101, 0);
  }
  *v251 = v102;
  return (unsigned int)v56;
}
