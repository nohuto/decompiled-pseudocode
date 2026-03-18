/*
 * XREFs of SepCommonAccessCheckEx @ 0x1403CD1A0
 * Callers:
 *     SeSrpAccessCheck @ 0x1403CD140 (SeSrpAccessCheck.c)
 *     SeAccessCheckEx @ 0x1403CD170 (SeAccessCheckEx.c)
 * Callees:
 *     SepMandatoryIntegrityCheck @ 0x140296910 (SepMandatoryIntegrityCheck.c)
 *     SepLocateTokenTrustLevel @ 0x14035FEB0 (SepLocateTokenTrustLevel.c)
 *     RtlSidDominatesForTrust @ 0x140361640 (RtlSidDominatesForTrust.c)
 *     SepFreeResourceInfo @ 0x140362310 (SepFreeResourceInfo.c)
 *     SepFilterCheck @ 0x140363580 (SepFilterCheck.c)
 *     AuthzBasepEvaluateAceCondition @ 0x140367C20 (AuthzBasepEvaluateAceCondition.c)
 *     AuthzBasepInitializeResourceClaimsFromSacl @ 0x14036B400 (AuthzBasepInitializeResourceClaimsFromSacl.c)
 *     SeGetTrustLabelAce @ 0x1403CE100 (SeGetTrustLabelAce.c)
 *     SepTokenIsOwner @ 0x1403CE170 (SepTokenIsOwner.c)
 *     SepAccessCheckEx @ 0x1403CE444 (SepAccessCheckEx.c)
 *     RtlpOwnerAcesPresent @ 0x1403CEDE0 (RtlpOwnerAcesPresent.c)
 *     SeLogAccessFailure @ 0x1403CF70C (SeLogAccessFailure.c)
 *     AuthzBasepSetAccessReasons @ 0x14042F8C0 (AuthzBasepSetAccessReasons.c)
 *     SepGetScopedPolicySid @ 0x14045478C (SepGetScopedPolicySid.c)
 *     SepRmReferenceFindCap @ 0x1404547E4 (SepRmReferenceFindCap.c)
 *     SepLogLpacAccessFailure @ 0x14048CCB4 (SepLogLpacAccessFailure.c)
 *     SepBuildCapeSecurityDescriptor @ 0x1404D0670 (SepBuildCapeSecurityDescriptor.c)
 *     SepRmDereferenceCapTable @ 0x1404F2B84 (SepRmDereferenceCapTable.c)
 *     AuthzBasepMergeAccessReasons @ 0x14068B9C8 (AuthzBasepMergeAccessReasons.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     SepAdtAuditThisEventWithContext @ 0x140856980 (SepAdtAuditThisEventWithContext.c)
 *     SeLockSubjectContext @ 0x1409163C0 (SeLockSubjectContext.c)
 *     SeUnlockSubjectContext @ 0x140916420 (SeUnlockSubjectContext.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

bool __fastcall SepCommonAccessCheckEx(
        PSECURITY_SUBJECT_CONTEXT SubjectContext,
        char a2,
        __int64 a3,
        __int64 a4,
        _DWORD *a5,
        char a6,
        char a7)
{
  unsigned int v7; // esi
  int v11; // ebx
  _DWORD *v12; // rdx
  _DWORD *v13; // rcx
  _DWORD *v14; // rax
  _QWORD *v15; // rax
  int v16; // edi
  __int64 v17; // r8
  int v18; // eax
  unsigned int v19; // r14d
  unsigned int v20; // edx
  __int64 v21; // rax
  int v22; // eax
  __int64 v23; // rax
  int v24; // r15d
  __int64 TrustLabelAce; // rax
  int v26; // r12d
  __int64 v27; // r11
  unsigned __int64 v28; // r8
  __int64 v29; // r12
  int v30; // ecx
  PSECURITY_SUBJECT_CONTEXT v31; // r10
  __int64 v32; // rdx
  int *v33; // rax
  PVOID ClientToken; // r15
  __int64 v35; // rcx
  __int64 v36; // rdx
  __int64 v37; // r9
  int v38; // eax
  char v39; // r15
  char v40; // cl
  PVOID v41; // rcx
  char IsOwner; // al
  int v43; // r12d
  char v44; // cl
  char v45; // r8
  __int64 v46; // r15
  int v47; // edx
  __int64 v48; // rcx
  PACCESS_TOKEN v49; // r9
  PACCESS_TOKEN v50; // r8
  char v51; // al
  __int64 v52; // rdx
  __int64 v53; // r8
  __int64 v54; // r9
  bool v55; // r12
  __int64 v56; // r11
  _DWORD *v57; // r14
  int *v58; // rax
  _DWORD *v59; // rdx
  int v60; // ecx
  int v61; // ebx
  unsigned int v62; // edx
  __int64 v63; // r9
  int v64; // r8d
  int v65; // ecx
  _DWORD *v66; // rax
  int *v67; // rdx
  int v68; // ecx
  int v69; // ecx
  int v71; // r15d
  int v72; // eax
  int *v73; // rcx
  int v74; // edx
  int v75; // r12d
  unsigned int v76; // edx
  int v77; // ecx
  __int64 v78; // r8
  __int16 v79; // ax
  __int64 v80; // rdx
  char v81; // al
  int v82; // r12d
  int v83; // ecx
  int v84; // r14d
  __int64 v85; // r9
  int v86; // ecx
  unsigned int v87; // edx
  _DWORD *v88; // rcx
  int *v89; // r8
  int v90; // ecx
  __int64 v91; // rax
  int v92; // ecx
  int v93; // r12d
  int *v94; // rcx
  char *Pool2; // r15
  int v96; // eax
  int v97; // ecx
  unsigned int **v98; // rax
  char v99; // al
  __int64 v100; // rdx
  __int64 v101; // r8
  __int64 v102; // r9
  __int64 v103; // rcx
  int v104; // ecx
  int v105; // edi
  __int64 v106; // rbx
  char v107; // si
  PSECURITY_SUBJECT_CONTEXT v108; // rcx
  _QWORD *PrimaryToken; // rcx
  PVOID v110; // rcx
  __int64 v111; // rcx
  int v112; // r8d
  int v113; // r10d
  bool v114; // zf
  int v115; // r9d
  int v116; // eax
  int v117; // ecx
  _DWORD *v118; // rax
  __int64 v119; // rcx
  int v120; // r12d
  _QWORD *v121; // rax
  __int64 v122; // rax
  __int64 v123; // rcx
  __int64 v124; // rdx
  __int64 v125; // rax
  unsigned int *v126; // rdx
  unsigned int v127; // eax
  _DWORD *v128; // rdx
  __int64 v129; // r9
  int v130; // ecx
  unsigned int v131; // edx
  _QWORD *v132; // r11
  _DWORD *v133; // rax
  __int64 v134; // rcx
  int v135; // esi
  __int64 v136; // rdi
  __int64 v137; // rax
  void *ScopedPolicySid; // rax
  int Cap; // eax
  __int64 v140; // rdx
  unsigned int v141; // r8d
  __int64 v142; // r8
  PVOID v143; // rcx
  int v144; // eax
  int v145; // ecx
  _QWORD *v146; // rax
  void *v147; // r9
  void *v148; // rdx
  void *v149; // r10
  void *v150; // r11
  int v151; // eax
  __int64 v152; // rdx
  __int64 v153; // r8
  __int64 v154; // r9
  int v155; // ecx
  _QWORD *v156; // rax
  void *v157; // r9
  void *v158; // rdx
  void *v159; // r8
  void *v160; // r10
  __int64 v161; // rdx
  __int64 v162; // r8
  __int64 v163; // r9
  unsigned int v164; // edx
  __int64 v165; // rdx
  __int64 v166; // r8
  __int64 v167; // r9
  int v168; // r12d
  int v169; // ecx
  int v170; // r12d
  PACCESS_TOKEN v171; // r9
  PACCESS_TOKEN v172; // r8
  char v173; // al
  int v174; // edx
  int v175; // ecx
  int v176; // r12d
  unsigned int v177; // r8d
  int v178; // ecx
  int v179; // ecx
  int v180; // r11d
  __int64 v181; // rdx
  __int64 v182; // r8
  __int64 v183; // r9
  int v184; // ecx
  int v185; // eax
  PACCESS_TOKEN v186; // r9
  PACCESS_TOKEN v187; // r8
  int v188; // eax
  char *v189; // rcx
  char *v190; // rcx
  __int64 v191; // rcx
  int v192; // ecx
  __int64 v193; // rcx
  int v194; // ecx
  __int64 v195; // rcx
  int v196; // ecx
  __int64 v197; // rcx
  int v198; // r14d
  int v199; // edx
  __int64 v200; // rax
  unsigned int v201; // r12d
  int v202; // r11d
  int v203; // ecx
  int v204; // r11d
  int v205; // ecx
  __int64 v206; // [rsp+38h] [rbp-F8h]
  __int64 v207; // [rsp+38h] [rbp-F8h]
  __int64 v208; // [rsp+38h] [rbp-F8h]
  int v209; // [rsp+40h] [rbp-F0h]
  __int64 v210; // [rsp+50h] [rbp-E0h]
  __int64 v211; // [rsp+58h] [rbp-D8h]
  __int64 v212; // [rsp+60h] [rbp-D0h]
  __int64 v213; // [rsp+68h] [rbp-C8h]
  int v214; // [rsp+70h] [rbp-C0h]
  char v215; // [rsp+78h] [rbp-B8h]
  char v217; // [rsp+B1h] [rbp-7Fh]
  bool v218; // [rsp+B2h] [rbp-7Eh] BYREF
  char v219; // [rsp+B3h] [rbp-7Dh] BYREF
  char v220; // [rsp+B4h] [rbp-7Ch]
  char v221; // [rsp+B5h] [rbp-7Bh] BYREF
  PVOID Object; // [rsp+B8h] [rbp-78h]
  char v223; // [rsp+C0h] [rbp-70h]
  char v224; // [rsp+C1h] [rbp-6Fh]
  char v225; // [rsp+C2h] [rbp-6Eh]
  PSECURITY_SUBJECT_CONTEXT SubjectContexta; // [rsp+C8h] [rbp-68h]
  int v227; // [rsp+D0h] [rbp-60h]
  __int64 v228; // [rsp+D8h] [rbp-58h]
  char v229[4]; // [rsp+E0h] [rbp-50h] BYREF
  int v230; // [rsp+E4h] [rbp-4Ch]
  unsigned int v231; // [rsp+E8h] [rbp-48h]
  int v232; // [rsp+ECh] [rbp-44h]
  PVOID P; // [rsp+F0h] [rbp-40h] BYREF
  int v234; // [rsp+F8h] [rbp-38h]
  int v235; // [rsp+FCh] [rbp-34h] BYREF
  int v236; // [rsp+100h] [rbp-30h]
  __int64 v237; // [rsp+108h] [rbp-28h]
  int v238; // [rsp+110h] [rbp-20h] BYREF
  int v239; // [rsp+114h] [rbp-1Ch]
  __int64 v240; // [rsp+118h] [rbp-18h]
  __int64 v241; // [rsp+120h] [rbp-10h]
  int v242; // [rsp+128h] [rbp-8h] BYREF
  int v243; // [rsp+12Ch] [rbp-4h]
  int v244; // [rsp+130h] [rbp+0h] BYREF
  int v245; // [rsp+134h] [rbp+4h]
  __int128 v246; // [rsp+138h] [rbp+8h] BYREF
  int v247; // [rsp+148h] [rbp+18h] BYREF
  int v248; // [rsp+150h] [rbp+20h] BYREF
  _OWORD SecurityDescriptor[2]; // [rsp+158h] [rbp+28h] BYREF
  __int64 v250; // [rsp+178h] [rbp+48h]
  _OWORD v251[2]; // [rsp+180h] [rbp+50h] BYREF
  __int64 v252; // [rsp+1A0h] [rbp+70h]
  _OWORD v253[2]; // [rsp+1A8h] [rbp+78h] BYREF
  __int128 v254; // [rsp+1C8h] [rbp+98h] BYREF
  __int128 v255; // [rsp+1D8h] [rbp+A8h]
  __int128 v256; // [rsp+1E8h] [rbp+B8h]
  _BYTE v257[128]; // [rsp+200h] [rbp+D0h] BYREF
  _BYTE v258[128]; // [rsp+280h] [rbp+150h] BYREF
  _BYTE v259[128]; // [rsp+300h] [rbp+1D0h] BYREF

  v237 = a3;
  v7 = 0;
  SubjectContexta = SubjectContext;
  v240 = 0LL;
  v250 = 0LL;
  v252 = 0LL;
  v242 = 0;
  v246 = 0LL;
  v247 = 0;
  memset(v253, 0, 28);
  v228 = 0LL;
  memset(SecurityDescriptor, 0, sizeof(SecurityDescriptor));
  v220 = 0;
  P = 0LL;
  memset(v251, 0, sizeof(v251));
  v238 = 0;
  v218 = 0;
  v229[0] = 0;
  memset_0(v257, 0, sizeof(v257));
  memset_0(v258, 0, sizeof(v258));
  memset_0(v259, 0, sizeof(v259));
  v223 = 0;
  v11 = -1;
  v248 = -1;
  v224 = 0;
  if ( !a4 )
    return 0;
  if ( *(_DWORD *)a4 != 40 )
    return 0;
  v12 = *(_DWORD **)(a4 + 16);
  if ( !v12 )
    return 0;
  if ( !SubjectContext
    || !a3
    || *(_DWORD *)a3 != 56
    || (v13 = *(_DWORD **)(a4 + 8)) == 0LL
    || (v14 = *(_DWORD **)(a3 + 8)) != 0LL && (*v14 != 16 || (v14[1] & 0xFFFFFFF8) != 0)
    || a5 && *a5 != 96 )
  {
    *v12 = -1073741811;
    return 0;
  }
  *v13 = 0;
  **(_DWORD **)(a4 + 16) = -1073741790;
  v15 = *(_QWORD **)(a4 + 32);
  v235 = 0;
  v244 = -1073741790;
  if ( v15 )
    *v15 = 0LL;
  v16 = 1;
  v17 = *(_QWORD *)(a4 + 24);
  v18 = 1;
  v19 = *(_DWORD *)(a3 + 16) & ~*(_DWORD *)(a3 + 20) & 0xFDFFFFFF;
  v20 = 0;
  if ( v17 )
  {
    while ( v18 )
    {
      if ( (v18 & v19) != 0 )
        *(_DWORD *)(v17 + 4LL * v20) = 0;
      ++v20;
      v18 *= 2;
    }
  }
  if ( !a6 )
  {
    v104 = *(_DWORD *)(a3 + 16);
    if ( (v104 & 0x2000000) != 0 )
    {
      **(_DWORD **)(a4 + 8) = *(_DWORD *)(*(_QWORD *)(a3 + 32) + 12LL);
      **(_DWORD **)(a4 + 8) |= *(_DWORD *)(a3 + 16) & 0xFDFFFFFF;
      **(_DWORD **)(a4 + 8) |= *(_DWORD *)(a3 + 20);
    }
    else
    {
      **(_DWORD **)(a4 + 8) = *(_DWORD *)(a3 + 20) | v104;
    }
    **(_DWORD **)(a4 + 16) = 0;
    return 1;
  }
  v21 = *(_QWORD *)(a3 + 8);
  if ( !v21 || !*(_QWORD *)(v21 + 8) )
    goto LABEL_141;
  if ( SubjectContext->ClientToken && SubjectContext->ImpersonationLevel < SecurityImpersonation )
  {
    **(_DWORD **)(a4 + 16) = -1073741659;
    return 0;
  }
  if ( !*(_DWORD *)(a3 + 16) )
  {
    v92 = *(_DWORD *)(a3 + 20);
    if ( v92 )
    {
      **(_DWORD **)(a4 + 8) = v92;
      **(_DWORD **)(a4 + 16) = 0;
      v121 = *(_QWORD **)(a4 + 32);
      if ( v121 )
        *v121 = 0LL;
      return 1;
    }
LABEL_141:
    **(_DWORD **)(a4 + 16) = -1073741790;
    return 0;
  }
  v22 = *(_DWORD *)(a4 + 4);
  if ( v22 != 1 && v22 != *(_DWORD *)(a3 + 40) )
  {
    **(_DWORD **)(a4 + 16) = -1073741811;
    return 0;
  }
  if ( !a2 )
    SeLockSubjectContext(SubjectContext);
  v23 = *(_QWORD *)(a3 + 8);
  v24 = 0;
  v219 = 0;
  v221 = 0;
  TrustLabelAce = SeGetTrustLabelAce(*(_QWORD *)(v23 + 8));
  if ( TrustLabelAce )
  {
    v26 = *(_DWORD *)(TrustLabelAce + 4);
    v27 = TrustLabelAce + 8;
    if ( TrustLabelAce != -8 )
    {
      v108 = SubjectContexta;
      if ( SubjectContexta->ClientToken )
      {
        PrimaryToken = SubjectContexta->PrimaryToken;
        Object = (PVOID)*((_QWORD *)SubjectContexta->ClientToken + 138);
        v24 = RtlSidDominatesForTrust(PrimaryToken[138], (__int64)Object, (bool *)&v221);
        if ( v24 < 0 )
          goto LABEL_27;
        if ( v221 )
        {
          v110 = Object;
          goto LABEL_163;
        }
        v108 = SubjectContexta;
      }
      v110 = (PVOID)*((_QWORD *)v108->PrimaryToken + 138);
LABEL_163:
      v24 = RtlSidDominatesForTrust((__int64)v110, v27, (bool *)&v219);
      if ( v24 >= 0 && !v219 )
        v11 = v26 | 0x1000000;
    }
  }
LABEL_27:
  **(_DWORD **)(a4 + 16) = v24;
  v28 = *(_QWORD *)(a4 + 16);
  if ( *(int *)v28 < 0 )
    goto LABEL_78;
  v29 = v237;
  v30 = 0;
  v31 = SubjectContexta;
  v32 = *(unsigned int *)(v237 + 16);
  LODWORD(v32) = v32 & 0xFDFFFFFF;
  if ( (v11 & (unsigned int)v32) != (_DWORD)v32 )
    v30 = -1073741790;
  *(_DWORD *)v28 = v30;
  v33 = *(int **)(a4 + 16);
  ClientToken = v31->ClientToken;
  Object = v31->ClientToken;
  if ( *v33 < 0 )
  {
    if ( !ClientToken )
      ClientToken = v31->PrimaryToken;
    v135 = *(_DWORD *)(v29 + 16) | *(_DWORD *)(v29 + 20);
    v136 = *(_QWORD *)(v29 + 8);
    SepLocateTokenTrustLevel(v31, v32);
    SeLogAccessFailure(ClientToken, *(_QWORD *)(v136 + 8), v135, 0);
    if ( !a2 )
      SeUnlockSubjectContext(SubjectContexta);
    AuthzBasepSetAccessReasons(v19 & ~v11, 9437184, 0, *(_QWORD *)(a4 + 24), 0);
    return 0;
  }
  if ( !ClientToken )
  {
    ClientToken = v31->PrimaryToken;
    Object = ClientToken;
  }
  v35 = *(_QWORD *)(v29 + 8);
  if ( (*(_DWORD *)(v35 + 4) & 4) == 0 )
  {
    **(_DWORD **)(a4 + 16) = SepFilterCheck(*(_QWORD *)(v35 + 8), &P, (__int64)ClientToken, 0, (__int64)&v248);
    v28 = *(_QWORD *)(a4 + 16);
    if ( *(int *)v28 < 0 )
      goto LABEL_78;
    v71 = v248;
    v72 = -1073741790;
    if ( (v248 & *(_DWORD *)(v29 + 16) & 0xFDFFFFFF) == (*(_DWORD *)(v29 + 16) & 0xFDFFFFFF) )
      v72 = 0;
    *(_DWORD *)v28 = v72;
    if ( **(int **)(a4 + 16) < 0 )
    {
      SeLogAccessFailure(
        Object,
        *(_QWORD *)(*(_QWORD *)(v29 + 8) + 8LL),
        *(_BYTE *)(v29 + 16) | *(_BYTE *)(v29 + 20),
        0);
      if ( !a2 )
        SeUnlockSubjectContext(SubjectContexta);
      AuthzBasepSetAccessReasons(v19 & v71, 10485760, 0, *(_QWORD *)(a4 + 24), 0);
      return 0;
    }
    v31 = SubjectContexta;
  }
  v36 = *(_QWORD *)(v29 + 8);
  v37 = (__int64)Object;
  v38 = *(_DWORD *)(v36 + 4);
  v39 = v38 & 1;
  if ( (v38 & 2) != 0 )
  {
    v28 = 1LL;
    if ( (*((_DWORD *)Object + 50) & 0x2000) != 0 )
    {
      v40 = 1;
      goto LABEL_37;
    }
  }
  else
  {
    LOBYTE(v28) = 0;
  }
  v40 = 0;
LABEL_37:
  v225 = v40;
  if ( !SepAllowAccessUponLogoff && (*((_DWORD *)Object + 50) & 0x20) == 0 )
  {
    v122 = *((_QWORD *)Object + 27);
    if ( v122 )
    {
      if ( (*(_DWORD *)(v122 + 32) & 0x20) != 0 )
      {
        **(_DWORD **)(a4 + 8) = 0;
        **(_DWORD **)(a4 + 16) = -1073741790;
        if ( !a2 )
          SeUnlockSubjectContext(v31);
        return 0;
      }
    }
  }
  LOBYTE(v236) = 0;
  if ( v40 )
    goto LABEL_39;
  **(_DWORD **)(a4 + 16) = SepMandatoryIntegrityCheck(
                             *(_DWORD **)(v29 + 32),
                             *(_QWORD *)(v36 + 8),
                             v28,
                             (__int64)Object,
                             0,
                             (__int64)&v246);
  v73 = *(int **)(a4 + 16);
  if ( *v73 < 0 )
  {
LABEL_78:
    if ( !a2 )
      SeUnlockSubjectContext(SubjectContexta);
    return 0;
  }
  v74 = *(_DWORD *)(v29 + 16);
  v75 = v246;
  v76 = v74 & 0xFDFFFFFF;
  if ( DWORD2(v246) )
  {
    v28 = 3221225506LL;
    if ( ((unsigned int)v246 & v76) == v76 )
      v28 = 0LL;
  }
  else
  {
    v28 = 0LL;
  }
  *v73 = v28;
  v41 = Object;
  if ( **(int **)(a4 + 16) < 0 )
  {
    if ( (*((_DWORD *)Object + 50) & 0x4000) == 0 || HIDWORD(v246) > 0x2000 )
    {
      if ( !a2 )
        SeUnlockSubjectContext(SubjectContexta);
      v119 = *(_QWORD *)(a4 + 24);
      v120 = v19 & ~v75;
      if ( v119 )
      {
        while ( v16 )
        {
          if ( (v16 & v120) != 0 && !*(_DWORD *)(v119 + 4LL * v7) )
            *(_DWORD *)(v119 + 4LL * v7) = 3145728;
          ++v7;
          v16 *= 2;
        }
      }
      return 0;
    }
    v29 = v237;
    LOBYTE(v236) = 1;
  }
  else
  {
    v29 = v237;
    if ( (*(_DWORD *)(v237 + 16) & 0x2000000) != 0 && (*((_DWORD *)Object + 50) & 0x4000) != 0 )
    {
      v77 = (unsigned __int8)v236;
      if ( HIDWORD(v246) <= 0x2000 )
        v77 = 1;
      v236 = v77;
LABEL_39:
      v41 = Object;
    }
  }
  if ( !SepRmEnforceCap )
  {
LABEL_41:
    LOBYTE(v37) = 0;
    goto LABEL_42;
  }
  v123 = *(_QWORD *)(*(_QWORD *)(v29 + 8) + 8LL);
  v124 = *(unsigned __int16 *)(v123 + 2);
  if ( (v124 & 0x10) == 0 || KeGetCurrentIrql() >= 2u )
  {
LABEL_260:
    v41 = Object;
    goto LABEL_41;
  }
  if ( (v124 & 0x8000u) == 0LL )
  {
    v137 = *(_QWORD *)(v123 + 24);
  }
  else
  {
    v125 = *(unsigned int *)(v123 + 12);
    if ( !(_DWORD)v125 )
    {
      v240 = 0LL;
      goto LABEL_260;
    }
    v137 = v123 + v125;
  }
  v240 = v137;
  if ( !v137 )
    goto LABEL_260;
  ScopedPolicySid = (void *)SepGetScopedPolicySid(v137, v124, v28, v37);
  if ( !ScopedPolicySid )
    goto LABEL_260;
  Cap = SepRmReferenceFindCap(ScopedPolicySid);
  v140 = v228;
  v41 = Object;
  v37 = 1LL;
  if ( Cap < 0 )
    v140 = SepRmDefaultCap;
  v228 = v140;
  v220 = 1;
LABEL_42:
  if ( v39 && (*(_DWORD *)(v29 + 16) & 0x2060000) == 0 && !(_BYTE)v37 )
  {
    v45 = 0;
    v43 = *(_DWORD *)(v29 + 16);
    v217 = 0;
    goto LABEL_45;
  }
  IsOwner = SepTokenIsOwner(v41, *(_QWORD *)(*(_QWORD *)(v29 + 8) + 8LL), v28, v37);
  v43 = *(_DWORD *)(v29 + 16);
  v44 = IsOwner;
  v217 = IsOwner;
  v45 = IsOwner;
  if ( !IsOwner || (v217 = IsOwner, (v43 & 0x2060000) == 0) )
  {
    LOBYTE(v37) = v220;
LABEL_45:
    v46 = v237;
    goto LABEL_46;
  }
  v114 = v39 == 0;
  v46 = v237;
  if ( !v114 )
    goto LABEL_106;
  v217 = IsOwner;
  v78 = *(_QWORD *)(*(_QWORD *)(v237 + 8) + 8LL);
  v79 = *(_WORD *)(v78 + 2);
  if ( (v79 & 4) != 0 )
  {
    if ( v79 >= 0 )
    {
      v80 = *(_QWORD *)(v78 + 32);
      v217 = v44;
    }
    else
    {
      v91 = *(unsigned int *)(v78 + 16);
      v80 = 0LL;
      if ( (_DWORD)v91 )
        v80 = v78 + v91;
    }
  }
  else
  {
    v80 = 0LL;
  }
  v81 = RtlpOwnerAcesPresent(0LL, v80);
  v45 = v217;
  if ( v81 )
  {
    LOBYTE(v37) = v220;
  }
  else
  {
LABEL_106:
    v82 = *(_DWORD *)(v46 + 16);
    v83 = *(_DWORD *)(v46 + 20);
    v217 = v45;
    if ( (v82 & 0x2000000) != 0 )
    {
      v43 = 393216;
      v84 = 393216;
      *(_DWORD *)(v46 + 20) = v83 | 0x60000;
    }
    else
    {
      v43 = v82 & 0x60000;
      v217 = v45;
      *(_DWORD *)(v46 + 20) = v83 | v43;
      v84 = v19 & 0x60000;
    }
    v85 = *(_QWORD *)(a4 + 24);
    v86 = 1;
    v87 = 0;
    if ( v85 )
    {
      while ( v86 )
      {
        if ( (v86 & v84) != 0 && !*(_DWORD *)(v85 + 4LL * v87) )
          *(_DWORD *)(v85 + 4LL * v87) = 0x400000;
        ++v87;
        v86 *= 2;
      }
    }
    *(_DWORD *)(v46 + 16) &= 0xFFF9FFFF;
    LOBYTE(v37) = v220;
    if ( !v220 )
    {
      v45 = 0;
      v217 = 0;
    }
  }
LABEL_46:
  v47 = *(_DWORD *)(v46 + 16);
  if ( !v47 && !(_BYTE)v37 && ((*((_DWORD *)Object + 50) & 0x2000) != 0 || !v43) )
  {
    if ( !a2 )
      SeUnlockSubjectContext(SubjectContexta);
    **(_DWORD **)(a4 + 8) = *(_DWORD *)(v46 + 20);
    **(_DWORD **)(a4 + 16) = 0;
    return 1;
  }
  v48 = *(_QWORD *)(v46 + 8);
  v215 = v45;
  v213 = *(_QWORD *)(a4 + 24);
  v212 = *(_QWORD *)(a4 + 16);
  v211 = *(_QWORD *)(a4 + 32);
  v210 = *(_QWORD *)(a4 + 8);
  v209 = *(_DWORD *)(v46 + 20);
  v206 = *(_QWORD *)(v46 + 32);
  memset((char *)v253 + 4, 0, 24);
  v49 = SubjectContexta->ClientToken;
  v50 = SubjectContexta->PrimaryToken;
  LODWORD(v253[0]) = v43;
  v51 = SepAccessCheckEx(
          *(_QWORD *)(v48 + 8),
          0,
          (_DWORD)v50,
          (_DWORD)v49,
          v47,
          0LL,
          0,
          v206,
          v209,
          a6,
          v210,
          v211,
          v212,
          v213,
          0,
          v215,
          a7,
          (__int64)v253,
          (__int64)&P,
          (__int64)&v218);
  v55 = v51;
  v56 = v228;
  v221 = v51;
  if ( !SepRmEnforceCap )
    goto LABEL_48;
  v93 = **(_DWORD **)(a4 + 16);
  v243 = v93;
  if ( v93 < 0 || !v220 )
  {
    v55 = v51;
LABEL_48:
    if ( v225 || (*(_DWORD *)(v46 + 16) & 0x2000000) == 0 )
    {
      v57 = Object;
      if ( (_BYTE)v236 && !*(_WORD *)((char *)&v253[1] + 5) )
      {
        if ( (*((_DWORD *)Object + 50) & 0x3000000) != 0x3000000 || HIDWORD(v253[0]) )
        {
          v117 = 1;
          v52 = 0LL;
          **(_DWORD **)(a4 + 16) = -1073741790;
          **(_DWORD **)(a4 + 8) = 0;
          v118 = *(_DWORD **)(a4 + 8);
          v54 = *(_QWORD *)(a4 + 24);
          v218 = 0;
          v53 = (unsigned int)~*v118;
          if ( v54 )
          {
            while ( v117 )
            {
              if ( (v117 & (unsigned int)v53) != 0 && !*(_DWORD *)(v54 + 4LL * (unsigned int)v52) )
                *(_DWORD *)(v54 + 4LL * (unsigned int)v52) = 3145728;
              v52 = (unsigned int)(v52 + 1);
              v117 *= 2;
            }
          }
        }
        else
        {
          v133 = *(_DWORD **)(a4 + 16);
          BYTE7(v253[1]) = 1;
          *v133 = 0;
          **(_DWORD **)(a4 + 8) = *(_DWORD *)(v46 + 16);
          v218 = 1;
        }
      }
    }
    else
    {
      v88 = *(_DWORD **)(a4 + 8);
      v52 = (unsigned int)*v88;
      if ( !(_BYTE)v236 || !*(_WORD *)((char *)&v253[1] + 5) && (*((_DWORD *)Object + 50) & 0x3000000) != 0x3000000 )
      {
        v89 = *(int **)(a4 + 16);
        if ( DWORD2(v246) && (!BYTE4(v246) || !BYTE6(v246) || !BYTE5(v246)) )
        {
          v115 = v52 & v246;
          if ( ((unsigned int)v52 & (unsigned int)v246) != (_DWORD)v52 )
          {
            *v88 = v115;
            v116 = -1073741790;
            if ( v115 )
              v116 = 0;
            *v89 = v116;
            v218 = v115 != 0;
          }
        }
        v90 = 1;
        v54 = *(_QWORD *)(a4 + 24);
        v53 = (unsigned int)v52 & ~**(_DWORD **)(a4 + 8);
        v52 = 0LL;
        if ( v54 )
        {
          while ( v90 )
          {
            if ( (v90 & (unsigned int)v53) != 0 && !*(_DWORD *)(v54 + 4LL * (unsigned int)v52) )
              *(_DWORD *)(v54 + 4LL * (unsigned int)v52) = 3145728;
            v52 = (unsigned int)(v52 + 1);
            v90 *= 2;
          }
        }
      }
      v57 = Object;
    }
    if ( (*(_DWORD *)(v46 + 16) & 0x2000000) != 0 )
    {
      v58 = *(int **)(a4 + 8);
      v59 = *(_DWORD **)(a4 + 16);
      v223 = 0;
      v60 = *v58;
      if ( v11 == -1 )
      {
        v61 = -1073741790;
      }
      else
      {
        v112 = v11 & v60;
        v61 = -1073741790;
        if ( v112 != v60 )
        {
          v223 = 1;
          *v58 = v112;
          if ( v112 )
          {
            *v59 = 0;
            v218 = 1;
          }
          else
          {
            *v59 = -1073741790;
            v218 = 0;
          }
        }
      }
      v62 = 0;
      v63 = *(_QWORD *)(a4 + 24);
      v64 = v60 & ~**(_DWORD **)(a4 + 8);
      v65 = 1;
      if ( v63 )
      {
        while ( v65 )
        {
          if ( (v65 & v64) != 0 && !*(_DWORD *)(v63 + 4LL * v62) )
            *(_DWORD *)(v63 + 4LL * v62) = 9437184;
          ++v62;
          v65 *= 2;
        }
      }
      v66 = *(_DWORD **)(a4 + 8);
      v67 = *(int **)(a4 + 16);
      v54 = *(unsigned int *)(v46 + 16);
      v53 = (unsigned int)*v66;
      v224 = 0;
      if ( v248 != -1 )
      {
        v113 = v248 & v53;
        if ( (v248 & (unsigned int)v53) != (_DWORD)v53 )
        {
          v224 = 1;
          *v66 = v113;
          if ( (v54 & 0x2000000) != 0 )
          {
            v114 = v113 == 0;
            if ( v113 )
              v61 = 0;
            *v67 = v61;
          }
          else
          {
            *v67 = -1073741790;
            v114 = *v66 == 0;
          }
          v218 = !v114;
        }
      }
      v52 = *(_QWORD *)(a4 + 24);
      v68 = v53 & ~**(_DWORD **)(a4 + 8);
      if ( v52 )
      {
        while ( v16 )
        {
          if ( (v16 & v68) != 0 && !*(_DWORD *)(v52 + 4LL * v7) )
            *(_DWORD *)(v52 + 4LL * v7) = 10485760;
          ++v7;
          v16 *= 2;
        }
      }
    }
    if ( v57 )
    {
      if ( v223
        || v224
        || (v69 = HIDWORD(v253[0])) == 0 && (v57[50] & 0x4000) != 0 && (**(int **)(a4 + 16) < 0 || BYTE7(v253[1])) )
      {
        v105 = *(_DWORD *)(v46 + 16) | *(_DWORD *)(v46 + 20);
        v106 = *(_QWORD *)(v46 + 8);
        v107 = **(_DWORD **)(a4 + 16) >= 0;
        SepLocateTokenTrustLevel(SubjectContexta, v52);
        SeLogAccessFailure(v57, *(_QWORD *)(v106 + 8), v105, v107);
        v69 = HIDWORD(v253[0]);
        v56 = v228;
      }
      if ( **(int **)(a4 + 16) < 0 && !v69 && (v57[50] & 0x4000) != 0 )
      {
        if ( BYTE8(v253[1]) )
        {
          v111 = *(_DWORD *)(v46 + 16) & ~(DWORD1(v253[0]) | DWORD2(v253[0]) | 0x2000000u);
          if ( ((unsigned int)v111 & v253[1]) == (_DWORD)v111 )
          {
            SepLogLpacAccessFailure(v111, v52, v53);
            v56 = v228;
          }
        }
      }
    }
    if ( v220 )
    {
      v134 = *(_QWORD *)(v56 + 32);
      if ( v134 )
        SepRmDereferenceCapTable(v134, v52, v53, v54);
    }
    if ( !a2 )
      SeUnlockSubjectContext(SubjectContexta);
    SepFreeResourceInfo((char *)P);
    return v55 && v218;
  }
  v94 = *(int **)(a4 + 8);
  Pool2 = 0LL;
  LOBYTE(v232) = 0;
  v96 = *v94;
  v97 = 0;
  v239 = v96;
  v230 = v96;
  v98 = *(unsigned int ***)(a4 + 32);
  v234 = 0;
  if ( v98 )
  {
    v126 = *v98;
    if ( *v98 )
    {
      v127 = *v126;
      if ( *v126 )
      {
        v128 = v126 + 3;
        v129 = v127;
        do
        {
          if ( (int)v128[1] < 0 )
          {
            if ( *(v128 - 1) == SeSecurityPrivilege.LowPart && *v128 == SeSecurityPrivilege.HighPart )
            {
              v97 |= 0x1000000u;
            }
            else if ( *(_QWORD *)(v128 - 1) == SeTakeOwnershipPrivilege || *(_QWORD *)(v128 - 1) == SeRelabelPrivilege )
            {
              v97 |= 0x80000u;
            }
          }
          v128 += 3;
          --v129;
        }
        while ( v129 );
        v234 = v97;
      }
    }
  }
  v245 = **(_DWORD **)(a4 + 8);
  v99 = SepAdtAuditThisEventWithContext(130LL, 1LL, 1LL, SubjectContexta);
  v219 = v99;
  if ( v99 )
  {
    Pool2 = (char *)ExAllocatePool2(0x40uLL);
    if ( !Pool2 )
    {
      if ( !a2 )
        SeUnlockSubjectContext(SubjectContexta);
      v103 = *(_QWORD *)(v228 + 32);
      if ( v103 )
        SepRmDereferenceCapTable(v103, v100, v101, v102);
      **(_DWORD **)(a4 + 8) = 0;
      **(_DWORD **)(a4 + 16) = -1073741801;
      SepFreeResourceInfo((char *)P);
      return 0;
    }
    memset_0(Pool2, 0, 8LL * *(unsigned int *)(v228 + 60));
    v99 = v219;
  }
  v130 = v230;
  v131 = 0;
  v132 = Object;
  while ( 1 )
  {
    v231 = v131;
    v141 = *(_DWORD *)(v228 + 60);
    LODWORD(v241) = v141;
    if ( v131 >= v141 )
    {
      if ( v99 )
      {
        if ( v130 != v239 )
        {
          v198 = v130 & (v239 ^ v130);
          v199 = v239 & (v239 ^ v130);
          v232 = v199;
          if ( v141 )
          {
            v200 = (__int64)Pool2;
            v201 = 0;
            v240 = (__int64)Pool2;
            do
            {
              if ( !v198 && !v199 )
                break;
              if ( *(_BYTE *)(v200 + 4) )
              {
                v202 = *(_DWORD *)v200;
                v203 = v199 & (v199 ^ *(_DWORD *)v200);
                if ( v203 )
                {
                  AuthzBasepSetAccessReasons(v203, 0x80000000, v201 << 24, (unsigned int)v258, 0);
                  v199 = v232;
                }
                v232 = ~v203 & v199;
                v204 = v198 & v202;
                if ( v204 )
                  AuthzBasepSetAccessReasons(v204, 0x80000000, v201 << 24, (unsigned int)v258, 0);
                v198 &= ~v204;
                AuthzBasepMergeAccessReasons(v257, v258, 4278190080LL);
                v199 = v232;
                v200 = v240;
                v141 = v241;
              }
              v200 += 8LL;
              ++v201;
              v240 = v200;
            }
            while ( v201 < v141 );
            v93 = v243;
          }
        }
      }
      if ( Pool2 )
        ExFreePoolWithTag(Pool2, 0);
      v205 = v239;
      **(_DWORD **)(a4 + 16) = v93;
      **(_DWORD **)(a4 + 8) &= v205;
      if ( **(int **)(a4 + 16) < 0 )
        v218 = 0;
      AuthzBasepMergeAccessReasons(*(_QWORD *)(a4 + 24), v257, 0LL);
      AuthzBasepMergeAccessReasons(*(_QWORD *)(a4 + 24), v257, 4278190080LL);
      v56 = v228;
      v46 = v237;
      v55 = v221;
      goto LABEL_48;
    }
    v254 = 0LL;
    v255 = 0LL;
    v256 = 0LL;
    v142 = *(_QWORD *)(v228 + 8LL * v131 + 64);
    v241 = v142;
    if ( !*(_QWORD *)(v142 + 24) )
      goto LABEL_290;
    v143 = P;
    if ( !P )
    {
      v144 = AuthzBasepInitializeResourceClaimsFromSacl(v240, (__int64 *)&P);
      v142 = v241;
      v132 = Object;
      v145 = (unsigned __int8)v232;
      if ( v144 < 0 )
        v145 = 1;
      v232 = v145;
      v143 = P;
    }
    v146 = (_QWORD *)v132[137];
    if ( v146 )
    {
      v147 = (void *)v146[72];
      v148 = (void *)v146[74];
      v149 = (void *)v146[73];
      v150 = (void *)v146[75];
    }
    else
    {
      v147 = 0LL;
      v148 = 0LL;
      v149 = 0LL;
      v150 = 0LL;
    }
    v151 = AuthzBasepEvaluateAceCondition(
             Object,
             *((void **)Object + 97),
             v143,
             v147,
             v148,
             v149,
             v150,
             *(_DWORD **)(v142 + 24),
             *(_DWORD *)(v142 + 16),
             1u,
             0,
             &v238);
    v155 = v238;
    v227 = v151;
    if ( v238 == 1 )
      goto LABEL_290;
    if ( v151 < 0 )
    {
      if ( !a2 )
        SeUnlockSubjectContext(SubjectContexta);
      v193 = *(_QWORD *)(v228 + 32);
      if ( v193 )
        SepRmDereferenceCapTable(v193, v152, v153, v154);
      v194 = v227;
      **(_DWORD **)(a4 + 8) = 0;
      **(_DWORD **)(a4 + 16) = v194;
      SepFreeResourceInfo((char *)P);
      if ( Pool2 )
        goto LABEL_339;
      return 0;
    }
    v132 = Object;
    if ( (*((_DWORD *)Object + 50) & 0x10) != 0 )
      break;
LABEL_287:
    if ( !(_BYTE)v232 && v155 != 1 )
    {
      v99 = v219;
      v130 = v230;
      v164 = v231;
      goto LABEL_315;
    }
LABEL_290:
    v168 = SepBuildCapeSecurityDescriptor(SecurityDescriptor);
    if ( v168 < 0 )
    {
      if ( !a2 )
        SeUnlockSubjectContext(SubjectContexta);
      v197 = *(_QWORD *)(v228 + 32);
      if ( v197 )
        SepRmDereferenceCapTable(v197, v165, v166, v167);
      **(_DWORD **)(a4 + 8) = 0;
      **(_DWORD **)(a4 + 16) = v168;
      SepFreeResourceInfo((char *)P);
      if ( !Pool2 )
        return 0;
      goto LABEL_339;
    }
    v169 = *(_DWORD *)(v237 + 16);
    if ( (*(_DWORD *)(v241 + 48) & 1) != 0 )
    {
      if ( (v169 & 0x2000000) == 0 )
        v169 |= *(_DWORD *)(v237 + 20);
      v170 = 0;
    }
    else
    {
      v170 = *(_DWORD *)(v237 + 20);
    }
    LOBYTE(v214) = 0;
    v207 = *(_QWORD *)(v237 + 32);
    v254 = 0LL;
    v171 = SubjectContexta->ClientToken;
    v172 = SubjectContexta->PrimaryToken;
    v255 = 0LL;
    v256 = 0LL;
    v173 = SepAccessCheckEx(
             (unsigned int)SecurityDescriptor,
             0,
             (_DWORD)v172,
             (_DWORD)v171,
             v169 | 0x2000000u,
             (__int64)&v254,
             1,
             v207,
             v170,
             a6,
             (__int64)&v235,
             0LL,
             (__int64)&v244,
             (__int64)v259,
             v214,
             v217,
             a7,
             (__int64)v253,
             (__int64)&P,
             (__int64)&v218);
    v174 = v234;
    v175 = v234 | HIDWORD(v255);
    v221 = v173;
    v176 = v235 & (**(_DWORD **)(a4 + 8) | v170);
    v235 = v176;
    if ( v217 )
      v175 |= v176 & 0x60000;
    v177 = v231;
    v178 = ~(_DWORD)v256 & v175;
    v114 = (v176 & v239) == 0;
    v239 &= v176;
    v93 = v244;
    if ( v114 )
      v93 = -1073741790;
    v227 = v178;
    v243 = v93;
    v179 = v245 & (v245 ^ v178);
    if ( v179 )
    {
      AuthzBasepSetAccessReasons(v179, 327680, v231, (unsigned int)v257, 0);
      v174 = v234;
      v245 = v227 & v180;
    }
    v99 = v219;
    if ( v219 )
    {
      if ( *(_QWORD *)(v241 + 40) )
      {
        v227 = SepBuildCapeSecurityDescriptor(v251);
        if ( v227 >= 0 )
        {
          v184 = *(_DWORD *)(v237 + 16);
          if ( (*(_DWORD *)(v241 + 48) & 0x100) != 0 )
          {
            if ( (v184 & 0x2000000) == 0 )
              v184 |= *(_DWORD *)(v237 + 20);
            v185 = 0;
          }
          else
          {
            v185 = *(_DWORD *)(v237 + 20);
          }
          LOBYTE(v214) = 0;
          v208 = *(_QWORD *)(v237 + 32);
          v186 = SubjectContexta->ClientToken;
          v187 = SubjectContexta->PrimaryToken;
          v254 = 0LL;
          v255 = 0LL;
          v256 = 0LL;
          SepAccessCheckEx(
            (unsigned int)v251,
            0,
            (_DWORD)v187,
            (_DWORD)v186,
            v184,
            0LL,
            0,
            v208,
            v185,
            a6,
            (__int64)&v242,
            0LL,
            (__int64)&v247,
            (__int64)v259,
            v214,
            v217,
            a7,
            (__int64)v253,
            (__int64)&P,
            (__int64)v229);
          v164 = v231;
          v188 = v234;
          v189 = &Pool2[8 * v231];
          v189[4] = 1;
          *(_DWORD *)v189 = v242 | v188;
          v130 = v242 & v230;
          v99 = v219;
          v230 &= v242;
          goto LABEL_314;
        }
        if ( !a2 )
          SeUnlockSubjectContext(SubjectContexta);
        v195 = *(_QWORD *)(v228 + 32);
        if ( v195 )
          SepRmDereferenceCapTable(v195, v181, v182, v183);
        v196 = v227;
        **(_DWORD **)(a4 + 8) = 0;
        **(_DWORD **)(a4 + 16) = v196;
        SepFreeResourceInfo((char *)P);
        if ( !Pool2 )
          return 0;
LABEL_339:
        ExFreePoolWithTag(Pool2, 0);
        return 0;
      }
      v190 = &Pool2[8 * v177];
      v99 = v219;
      v190[4] = 1;
      *(_DWORD *)v190 = v235 | v174;
      v130 = v235 & v230;
      v230 &= v235;
    }
    else
    {
      v130 = v230;
    }
    v164 = v231;
LABEL_314:
    v132 = Object;
LABEL_315:
    v131 = v164 + 1;
  }
  v156 = (_QWORD *)*((_QWORD *)Object + 137);
  if ( v156 )
  {
    v157 = (void *)v156[72];
    v158 = (void *)v156[74];
    v159 = (void *)v156[73];
    v160 = (void *)v156[75];
  }
  else
  {
    v157 = 0LL;
    v158 = 0LL;
    v159 = 0LL;
    v160 = 0LL;
  }
  v227 = AuthzBasepEvaluateAceCondition(
           Object,
           *((void **)Object + 97),
           P,
           v157,
           v158,
           v159,
           v160,
           *(_DWORD **)(v241 + 24),
           *(_DWORD *)(v241 + 16),
           1u,
           1u,
           &v238);
  if ( v227 >= 0 )
  {
    v155 = v238;
    v132 = Object;
    goto LABEL_287;
  }
  if ( !a2 )
    SeUnlockSubjectContext(SubjectContexta);
  v191 = *(_QWORD *)(v228 + 32);
  if ( v191 )
    SepRmDereferenceCapTable(v191, v161, v162, v163);
  v192 = v227;
  **(_DWORD **)(a4 + 8) = 0;
  **(_DWORD **)(a4 + 16) = v192;
  SepFreeResourceInfo((char *)P);
  if ( Pool2 )
    goto LABEL_339;
  return 0;
}
