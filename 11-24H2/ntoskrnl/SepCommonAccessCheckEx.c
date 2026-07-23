/*
 * XREFs of SepCommonAccessCheckEx @ 0x140465250
 * Callers:
 *     SeSrpAccessCheck @ 0x1404651F0 (SeSrpAccessCheck.c)
 *     SeAccessCheckEx @ 0x140465220 (SeAccessCheckEx.c)
 * Callees:
 *     SepLogLpacAccessFailure @ 0x140231454 (SepLogLpacAccessFailure.c)
 *     SepMandatoryIntegrityCheck @ 0x14028A540 (SepMandatoryIntegrityCheck.c)
 *     AuthzBasepEvaluateAceCondition @ 0x140323B60 (AuthzBasepEvaluateAceCondition.c)
 *     SepRmReferenceFindCap @ 0x1403B562C (SepRmReferenceFindCap.c)
 *     SepGetScopedPolicySid @ 0x1403B56EC (SepGetScopedPolicySid.c)
 *     SepFreeResourceInfo @ 0x1403B9940 (SepFreeResourceInfo.c)
 *     SepFilterCheck @ 0x1403B9AB0 (SepFilterCheck.c)
 *     AuthzBasepInitializeResourceClaimsFromSacl @ 0x1403BADD4 (AuthzBasepInitializeResourceClaimsFromSacl.c)
 *     SepTokenIsOwner @ 0x1403D9F70 (SepTokenIsOwner.c)
 *     SepTrustLevelCheck @ 0x1403E33C0 (SepTrustLevelCheck.c)
 *     SepLocateTokenTrustLevel @ 0x1403E3620 (SepLocateTokenTrustLevel.c)
 *     RtlpOwnerAcesPresent @ 0x1403ECFB0 (RtlpOwnerAcesPresent.c)
 *     SeLogAccessFailure @ 0x140438750 (SeLogAccessFailure.c)
 *     SepAccessCheckEx @ 0x1404E81A8 (SepAccessCheckEx.c)
 *     Feature_DecoupleAppContainerAndIntegrityLevel__private_IsEnabledDeviceUsageNoInline @ 0x1405E2C90 (Feature_DecoupleAppContainerAndIntegrityLevel__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     SepRmDestroyCapTable @ 0x140796324 (SepRmDestroyCapTable.c)
 *     SepAdtAuditThisEventWithContext @ 0x14084EED0 (SepAdtAuditThisEventWithContext.c)
 *     SeLockSubjectContext @ 0x14086C760 (SeLockSubjectContext.c)
 *     SeUnlockSubjectContext @ 0x14086C7C0 (SeUnlockSubjectContext.c)
 *     RtlSetDaclSecurityDescriptor @ 0x1409DFF30 (RtlSetDaclSecurityDescriptor.c)
 *     RtlCreateSecurityDescriptor @ 0x1409E16D0 (RtlCreateSecurityDescriptor.c)
 *     RtlSetSaclSecurityDescriptor @ 0x140A04030 (RtlSetSaclSecurityDescriptor.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
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
  _DWORD *v12; // rcx
  _DWORD *v13; // rdx
  _DWORD *v14; // rax
  _QWORD *v15; // rax
  int v16; // r13d
  __int64 v17; // rcx
  int v18; // r14d
  unsigned int v19; // edx
  __int64 v20; // r8
  unsigned int v21; // r14d
  char v22; // r12
  int v23; // ecx
  __int64 v25; // rax
  int v26; // ecx
  _QWORD *v27; // rax
  int v28; // eax
  int *v29; // r8
  int v30; // eax
  int v31; // r15d
  PSECURITY_SUBJECT_CONTEXT v32; // r9
  int *v33; // rax
  PVOID ClientToken; // rdx
  int v35; // edi
  __int64 v36; // rbx
  _DWORD *TokenTrustLevel; // rax
  int v38; // r15d
  __int64 v39; // rcx
  __int64 v40; // rcx
  __int64 v41; // r15
  int *v42; // r8
  int v43; // eax
  int v44; // ebx
  __int64 v45; // rcx
  int v46; // ebx
  __int64 v47; // rdx
  __int64 v48; // rcx
  int v49; // eax
  int v50; // edi
  char v51; // r8
  char v52; // r11
  __int64 v53; // rax
  __int64 v54; // rbx
  int *v55; // r8
  int v56; // ebx
  __int64 v57; // rcx
  int v58; // ebx
  int v59; // r9d
  __int64 v60; // rax
  ACL *v61; // r12
  void *ScopedPolicySid; // rax
  int Cap; // eax
  int v64; // ebx
  unsigned __int8 IsOwner; // al
  __int64 v66; // r9
  __int64 v67; // rax
  __int64 v68; // r8
  __int16 v69; // ax
  __int64 v70; // rdx
  __int64 v71; // rax
  int v72; // ebx
  int v73; // eax
  int v74; // eax
  int v75; // r14d
  __int64 v76; // r8
  int v77; // edx
  PSECURITY_SUBJECT_CONTEXT v78; // r12
  __int64 v79; // rbx
  __int64 v80; // r8
  int *v81; // rcx
  int v82; // r12d
  int v83; // r14d
  unsigned int **v84; // rcx
  unsigned int *v85; // rcx
  unsigned int v86; // eax
  _DWORD *v87; // rcx
  int v88; // r13d
  char v89; // cl
  volatile signed __int64 *Blink; // rcx
  signed __int64 v91; // rax
  bool v92; // cc
  signed __int64 v93; // rax
  PRTL_DYNAMIC_HASH_TABLE_ENTRY v94; // rdx
  unsigned int v95; // r15d
  unsigned int Blink_high; // eax
  __int64 v97; // r14
  PVOID v98; // r8
  int v99; // eax
  _QWORD *v100; // rax
  void *v101; // r9
  void *v102; // rcx
  void *v103; // rdx
  void *v104; // r10
  int v105; // eax
  int v106; // ecx
  int v107; // ebx
  _QWORD *v108; // rax
  void *v109; // r9
  void *v110; // rcx
  void *v111; // rdx
  void *v112; // r8
  unsigned __int8 *v113; // rdi
  __int16 v114; // dx
  ACL *v115; // r8
  __int64 v116; // rax
  int v117; // ecx
  int v118; // ebx
  char v119; // di
  PACCESS_TOKEN v120; // r9
  PACCESS_TOKEN PrimaryToken; // r8
  int v122; // r10d
  int v123; // ebx
  int v124; // r10d
  int v125; // eax
  int v126; // r9d
  int v127; // ecx
  unsigned int v128; // r8d
  unsigned __int8 *v129; // rbx
  NTSTATUS v130; // edi
  __int16 v131; // dx
  ACL *v132; // r8
  __int64 v133; // rax
  int v134; // ecx
  int v135; // eax
  PACCESS_TOKEN v136; // r9
  PACCESS_TOKEN v137; // r8
  int v138; // r14d
  char *v139; // rcx
  int v140; // r14d
  char *v141; // rcx
  int v142; // r12d
  unsigned int v143; // ebx
  unsigned int v144; // r11d
  int v145; // r15d
  int v146; // edi
  char *v147; // r14
  int v148; // r10d
  int v149; // r9d
  int v150; // ecx
  unsigned int v151; // edx
  volatile signed __int64 *v152; // rcx
  signed __int64 v153; // rax
  signed __int64 v154; // rax
  signed __int64 v155; // rax
  signed __int64 v156; // rax
  volatile signed __int64 *v157; // rcx
  signed __int64 v158; // rax
  signed __int64 v159; // rax
  __int64 v160; // rcx
  signed __int64 v161; // rax
  signed __int64 v162; // rax
  __int64 v163; // rcx
  int v164; // r10d
  int v165; // ecx
  unsigned int v166; // edx
  unsigned int v167; // eax
  __int64 v168; // rcx
  int v169; // edx
  __int64 v170; // rcx
  int v171; // edx
  int v172; // edx
  __int64 v173; // rcx
  int v174; // edx
  __int64 v175; // rcx
  int v176; // edx
  __int64 v177; // rcx
  int v178; // edx
  __int64 v179; // rcx
  int v180; // edx
  __int64 v181; // rcx
  int v182; // edx
  __int64 v183; // rcx
  int v184; // edx
  __int64 v185; // rcx
  int v186; // edx
  __int64 v187; // rcx
  int v188; // edx
  __int64 v189; // rcx
  int v190; // edx
  __int64 v191; // rcx
  int v192; // edx
  __int64 v193; // rcx
  int v194; // edx
  __int64 v195; // rcx
  int v196; // edx
  __int64 v197; // rcx
  int v198; // edx
  _DWORD *v199; // rax
  __int64 v200; // rdx
  __int64 v201; // r8
  int v202; // ecx
  __int64 v203; // r8
  int v204; // ecx
  int v205; // ecx
  __int64 v206; // r8
  int v207; // ecx
  __int64 v208; // r8
  int v209; // ecx
  __int64 v210; // r8
  int v211; // ecx
  __int64 v212; // r8
  int v213; // ecx
  __int64 v214; // r8
  int v215; // ecx
  __int64 v216; // r8
  int v217; // ecx
  __int64 v218; // r8
  int v219; // ecx
  __int64 v220; // r8
  int v221; // ecx
  __int64 v222; // r8
  int v223; // ecx
  __int64 v224; // r8
  int v225; // ecx
  __int64 v226; // r8
  int v227; // ecx
  __int64 v228; // r8
  int v229; // ecx
  __int64 v230; // rax
  int v231; // ecx
  int *v232; // r8
  int v233; // edx
  int *v234; // r9
  int v235; // ecx
  int v236; // eax
  int v237; // ecx
  __int64 v238; // r9
  int v239; // r8d
  unsigned int v240; // edx
  const void ***v241; // r14
  _DWORD *v242; // rax
  int v243; // r10d
  int v244; // ecx
  unsigned int v245; // edx
  _DWORD *v246; // rax
  __int64 v247; // r9
  int v248; // r8d
  int *v249; // r8
  int *v250; // r9
  int v251; // edx
  int v252; // ecx
  int v253; // eax
  int v254; // ecx
  __int64 v255; // r9
  int v256; // r8d
  unsigned int v257; // edx
  int *v258; // rdx
  int *v259; // r9
  int v260; // r8d
  int v261; // ecx
  int v262; // eax
  bool v263; // zf
  __int64 v264; // rdx
  int v265; // ecx
  int v266; // ecx
  int v267; // edi
  __int64 v268; // rbx
  char v269; // si
  _DWORD *v270; // rax
  int v271; // ecx
  volatile signed __int64 *v272; // rcx
  signed __int64 v273; // rax
  signed __int64 v274; // rax
  __int64 v275; // [rsp+38h] [rbp-F8h]
  __int64 v276; // [rsp+38h] [rbp-F8h]
  char v277; // [rsp+48h] [rbp-E8h]
  __int64 v278; // [rsp+50h] [rbp-E0h]
  __int64 v279; // [rsp+58h] [rbp-D8h]
  __int64 v280; // [rsp+60h] [rbp-D0h]
  __int64 v281; // [rsp+68h] [rbp-C8h]
  int v282; // [rsp+70h] [rbp-C0h]
  _BYTE v284[3]; // [rsp+B1h] [rbp-7Fh] BYREF
  int v285; // [rsp+B4h] [rbp-7Ch]
  char v286; // [rsp+B8h] [rbp-78h]
  char v287; // [rsp+B9h] [rbp-77h]
  char v288; // [rsp+BAh] [rbp-76h]
  char v289; // [rsp+BBh] [rbp-75h]
  char v290; // [rsp+BCh] [rbp-74h]
  char v291; // [rsp+BDh] [rbp-73h]
  PVOID Object; // [rsp+C0h] [rbp-70h]
  PSECURITY_SUBJECT_CONTEXT SubjectContexta; // [rsp+C8h] [rbp-68h]
  char v294[8]; // [rsp+D0h] [rbp-60h] BYREF
  __int64 v295; // [rsp+D8h] [rbp-58h]
  PVOID v296; // [rsp+E0h] [rbp-50h] BYREF
  int v297; // [rsp+E8h] [rbp-48h]
  int v298; // [rsp+ECh] [rbp-44h] BYREF
  int v299; // [rsp+F0h] [rbp-40h]
  PRTL_DYNAMIC_HASH_TABLE_ENTRY v300; // [rsp+F8h] [rbp-38h]
  int v301; // [rsp+100h] [rbp-30h] BYREF
  int v302; // [rsp+104h] [rbp-2Ch]
  int v303; // [rsp+108h] [rbp-28h]
  PVOID P; // [rsp+110h] [rbp-20h]
  __int64 v305; // [rsp+118h] [rbp-18h]
  int v306; // [rsp+120h] [rbp-10h] BYREF
  int v307; // [rsp+124h] [rbp-Ch] BYREF
  PACL Sacl; // [rsp+128h] [rbp-8h]
  int v309; // [rsp+130h] [rbp+0h]
  int v310; // [rsp+134h] [rbp+4h] BYREF
  unsigned int v311; // [rsp+138h] [rbp+8h]
  __int128 v312; // [rsp+140h] [rbp+10h] BYREF
  PRTL_DYNAMIC_HASH_TABLE_ENTRY v313; // [rsp+150h] [rbp+20h] BYREF
  int v314; // [rsp+158h] [rbp+28h] BYREF
  int v315; // [rsp+160h] [rbp+30h] BYREF
  _OWORD SecurityDescriptor[2]; // [rsp+168h] [rbp+38h] BYREF
  __int64 v317; // [rsp+188h] [rbp+58h]
  _OWORD v318[2]; // [rsp+190h] [rbp+60h] BYREF
  __int64 v319; // [rsp+1B0h] [rbp+80h]
  _OWORD v320[2]; // [rsp+1B8h] [rbp+88h] BYREF
  __int128 v321; // [rsp+1E0h] [rbp+B0h]
  __int128 v322; // [rsp+1F0h] [rbp+C0h]
  __int128 v323; // [rsp+200h] [rbp+D0h]
  __int128 v324; // [rsp+210h] [rbp+E0h]
  __int128 v325; // [rsp+220h] [rbp+F0h]
  __int128 v326; // [rsp+230h] [rbp+100h]
  __int128 v327; // [rsp+240h] [rbp+110h]
  __int128 v328; // [rsp+250h] [rbp+120h]
  __int128 v329; // [rsp+260h] [rbp+130h] BYREF
  __int128 v330; // [rsp+270h] [rbp+140h]
  __int128 v331; // [rsp+280h] [rbp+150h]
  _OWORD v332[8]; // [rsp+290h] [rbp+160h] BYREF
  _OWORD v333[8]; // [rsp+310h] [rbp+1E0h] BYREF

  v295 = a3;
  SubjectContexta = SubjectContext;
  v7 = 0;
  v284[0] = 0;
  v294[0] = 0;
  v305 = a4;
  Sacl = 0LL;
  v317 = 0LL;
  v319 = 0LL;
  v306 = 0;
  v314 = 0;
  v313 = 0LL;
  v286 = 0;
  v296 = 0LL;
  v301 = 0;
  v288 = 0;
  v289 = 0;
  v307 = -1;
  v315 = -1;
  v312 = 0LL;
  memset(v320, 0, 28);
  memset(SecurityDescriptor, 0, sizeof(SecurityDescriptor));
  memset(v318, 0, sizeof(v318));
  v321 = 0LL;
  v322 = 0LL;
  v323 = 0LL;
  v324 = 0LL;
  v325 = 0LL;
  v326 = 0LL;
  v327 = 0LL;
  v328 = 0LL;
  memset(v332, 0, sizeof(v332));
  memset(v333, 0, sizeof(v333));
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
  v298 = 0;
  v310 = -1073741790;
  if ( v15 )
    *v15 = 0LL;
  v16 = 1;
  v17 = 1LL;
  v18 = *(_DWORD *)(a3 + 16) & ~*(_DWORD *)(a3 + 20);
  v19 = 0;
  v20 = *(_QWORD *)(a4 + 24);
  v21 = v18 & 0xFDFFFFFF;
  if ( v20 )
  {
    while ( (_DWORD)v17 )
    {
      if ( ((unsigned int)v17 & v21) != 0 )
        *(_DWORD *)(v20 + 4LL * v19) = 0;
      ++v19;
      v17 = (unsigned int)(2 * v17);
    }
  }
  v22 = a6;
  if ( !a6 )
  {
    v23 = *(_DWORD *)(a3 + 16);
    if ( (v23 & 0x2000000) != 0 )
    {
      **(_DWORD **)(a4 + 8) = *(_DWORD *)(*(_QWORD *)(a3 + 32) + 12LL);
      **(_DWORD **)(a4 + 8) |= *(_DWORD *)(a3 + 16) & 0xFDFFFFFF;
      **(_DWORD **)(a4 + 8) |= *(_DWORD *)(a3 + 20);
    }
    else
    {
      **(_DWORD **)(a4 + 8) = *(_DWORD *)(a3 + 20) | v23;
    }
    **(_DWORD **)(a4 + 16) = 0;
    return 1;
  }
  v25 = *(_QWORD *)(a3 + 8);
  if ( !v25 || !*(_QWORD *)(v25 + 8) )
    goto LABEL_32;
  if ( SubjectContext->ClientToken && SubjectContext->ImpersonationLevel < SecurityImpersonation )
  {
    **(_DWORD **)(a4 + 16) = -1073741659;
    return 0;
  }
  if ( !*(_DWORD *)(a3 + 16) )
  {
    v26 = *(_DWORD *)(a3 + 20);
    if ( v26 )
    {
      **(_DWORD **)(a4 + 8) = v26;
      **(_DWORD **)(a4 + 16) = 0;
      v27 = *(_QWORD **)(a4 + 32);
      if ( v27 )
        *v27 = 0LL;
      return 1;
    }
LABEL_32:
    **(_DWORD **)(a4 + 16) = -1073741790;
    return 0;
  }
  v28 = *(_DWORD *)(a4 + 4);
  if ( v28 != 1 && v28 != *(_DWORD *)(a3 + 40) )
  {
    **(_DWORD **)(a4 + 16) = -1073741811;
    return 0;
  }
  if ( !a2 )
    SeLockSubjectContext(SubjectContext);
  **(_DWORD **)(a4 + 16) = SepTrustLevelCheck(
                             v17,
                             *(_QWORD *)(*(_QWORD *)(a3 + 8) + 8LL),
                             SubjectContext,
                             0LL,
                             0LL,
                             0,
                             &v307);
  v29 = *(int **)(a4 + 16);
  if ( *v29 < 0 )
  {
    if ( !a2 )
      SeUnlockSubjectContext(SubjectContext);
    return 0;
  }
  v30 = 0;
  v31 = v307;
  v32 = SubjectContexta;
  if ( (v307 & *(_DWORD *)(a3 + 16) & 0xFDFFFFFF) != (*(_DWORD *)(a3 + 16) & 0xFDFFFFFF) )
    v30 = -1073741790;
  *v29 = v30;
  v33 = *(int **)(a4 + 16);
  ClientToken = v32->ClientToken;
  Object = v32->ClientToken;
  if ( *v33 < 0 )
  {
    if ( !ClientToken )
      Object = v32->PrimaryToken;
    v35 = *(_DWORD *)(a3 + 16) | *(_DWORD *)(a3 + 20);
    v36 = *(_QWORD *)(v295 + 8);
    TokenTrustLevel = SepLocateTokenTrustLevel(v32);
    SeLogAccessFailure((const void ***)Object, 0LL, 0LL, (ULONGLONG)TokenTrustLevel, *(_QWORD *)(v36 + 8), v35, 0);
    if ( !a2 )
      SeUnlockSubjectContext(SubjectContexta);
    v38 = v21 & ~v31;
    v39 = *(_QWORD *)(v305 + 24);
    if ( v39 )
    {
      while ( v16 )
      {
        if ( (v16 & v38) != 0 && !*(_DWORD *)(v39 + 4LL * v7) )
          *(_DWORD *)(v39 + 4LL * v7) = 9437184;
        ++v7;
        v16 *= 2;
      }
    }
    return 0;
  }
  if ( !ClientToken )
  {
    ClientToken = v32->PrimaryToken;
    Object = ClientToken;
  }
  v40 = *(_QWORD *)(a3 + 8);
  if ( (*(_DWORD *)(v40 + 4) & 4) != 0 )
  {
    v41 = a4;
  }
  else
  {
    v41 = a4;
    **(_DWORD **)(a4 + 16) = SepFilterCheck(*(_QWORD *)(v40 + 8), &v296, (__int64)ClientToken, 0, (__int64)&v315);
    v42 = *(int **)(a4 + 16);
    if ( *v42 < 0 )
      goto LABEL_87;
    v43 = 0;
    v44 = v315;
    if ( (v315 & *(_DWORD *)(a3 + 16) & 0xFDFFFFFF) != (*(_DWORD *)(a3 + 16) & 0xFDFFFFFF) )
      v43 = -1073741790;
    *v42 = v43;
    if ( **(int **)(v41 + 16) < 0 )
    {
      SeLogAccessFailure(
        (const void ***)Object,
        0LL,
        0LL,
        0LL,
        *(_QWORD *)(*(_QWORD *)(a3 + 8) + 8LL),
        *(_BYTE *)(a3 + 16) | *(_BYTE *)(a3 + 20),
        0);
      if ( !a2 )
        SeUnlockSubjectContext(SubjectContexta);
      v45 = *(_QWORD *)(v41 + 24);
      v46 = v21 & v44;
      if ( v45 )
      {
        while ( v16 )
        {
          if ( (v16 & v46) != 0 && !*(_DWORD *)(v45 + 4LL * v7) )
            *(_DWORD *)(v45 + 4LL * v7) = 10485760;
          ++v7;
          v16 *= 2;
        }
      }
      return 0;
    }
    v32 = SubjectContexta;
  }
  v47 = *(_QWORD *)(a3 + 8);
  v48 = (__int64)Object;
  v49 = *(_DWORD *)(v47 + 4);
  v50 = (unsigned __int8)v49;
  LOBYTE(v50) = v49 & 1;
  if ( (v49 & 2) == 0 )
  {
    v51 = 0;
    goto LABEL_78;
  }
  v51 = 1;
  if ( (*((_DWORD *)Object + 50) & 0x2000) == 0 )
  {
LABEL_78:
    v52 = 0;
    goto LABEL_79;
  }
  v52 = 1;
LABEL_79:
  v290 = v52;
  if ( !SepAllowAccessUponLogoff && (*((_DWORD *)Object + 50) & 0x20) == 0 )
  {
    v53 = *((_QWORD *)Object + 27);
    if ( v53 )
    {
      if ( (*(_DWORD *)(v53 + 40) & 0x20) != 0 )
      {
        **(_DWORD **)(v41 + 8) = 0;
        **(_DWORD **)(v41 + 16) = -1073741790;
        if ( !a2 )
          SeUnlockSubjectContext(v32);
        return 0;
      }
    }
  }
  v54 = v295;
  LOBYTE(v299) = 0;
  if ( !v52 )
  {
    **(_DWORD **)(v41 + 16) = SepMandatoryIntegrityCheck(
                                *(_DWORD **)(v295 + 32),
                                *(_QWORD *)(v47 + 8),
                                v51,
                                (__int64)Object,
                                0,
                                (__int64)&v312);
    v55 = *(int **)(v41 + 16);
    if ( *v55 < 0 )
    {
LABEL_87:
      if ( !a2 )
        SeUnlockSubjectContext(SubjectContexta);
      return 0;
    }
    v47 = *(unsigned int *)(v54 + 16);
    v56 = v312;
    LODWORD(v47) = v47 & 0xFDFFFFFF;
    if ( DWORD2(v312) )
    {
      v48 = 3221225506LL;
      if ( ((unsigned int)v312 & (unsigned int)v47) == (_DWORD)v47 )
        v48 = 0LL;
    }
    else
    {
      v48 = 0LL;
    }
    *v55 = v48;
    if ( **(int **)(v41 + 16) >= 0 )
    {
      v54 = v295;
      if ( (*(_DWORD *)(v295 + 16) & 0x2000000) != 0 && (*((_DWORD *)Object + 50) & 0x4000) != 0 )
      {
        v59 = (unsigned __int8)v299;
        if ( HIDWORD(v312) <= 0x2000 )
          v59 = 1;
        v299 = v59;
      }
    }
    else
    {
      if ( (*((_DWORD *)Object + 50) & 0x4000) == 0 || HIDWORD(v312) > 0x2000 )
      {
        if ( !a2 )
          SeUnlockSubjectContext(SubjectContexta);
        v57 = *(_QWORD *)(v41 + 24);
        v58 = v21 & ~v56;
        if ( v57 )
        {
          while ( v16 )
          {
            if ( (v58 & v16) != 0 && !*(_DWORD *)(v57 + 4LL * v7) )
              *(_DWORD *)(v57 + 4LL * v7) = 3145728;
            ++v7;
            v16 *= 2;
          }
        }
        return 0;
      }
      v54 = v295;
      LOBYTE(v299) = 1;
    }
  }
  if ( !SepRmEnforceCap )
    goto LABEL_124;
  v48 = *(_QWORD *)(*(_QWORD *)(v54 + 8) + 8LL);
  v47 = *(unsigned __int16 *)(v48 + 2);
  if ( (v47 & 0x10) == 0 || KeGetCurrentIrql() >= 2u )
    goto LABEL_124;
  if ( (v47 & 0x8000u) == 0LL )
  {
    v61 = *(ACL **)(v48 + 24);
  }
  else
  {
    v60 = *(unsigned int *)(v48 + 12);
    if ( !(_DWORD)v60 )
    {
      Sacl = 0LL;
LABEL_124:
      LOBYTE(v48) = 0;
      goto LABEL_125;
    }
    v61 = (ACL *)(v48 + v60);
  }
  Sacl = v61;
  if ( !v61 || (ScopedPolicySid = (void *)SepGetScopedPolicySid((__int64)v61)) == 0LL )
  {
    v22 = a6;
    goto LABEL_124;
  }
  Cap = SepRmReferenceFindCap(ScopedPolicySid, &v313);
  v47 = (__int64)v313;
  v22 = a6;
  v48 = 1LL;
  if ( Cap < 0 )
    v47 = SepRmDefaultCap;
  v313 = (PRTL_DYNAMIC_HASH_TABLE_ENTRY)v47;
  v286 = 1;
LABEL_125:
  if ( (_BYTE)v50 && (*(_DWORD *)(v54 + 16) & 0x2060000) == 0 && !(_BYTE)v48 )
  {
    LOBYTE(v50) = 0;
    v64 = *(_DWORD *)(v54 + 16);
    v285 = v50;
    goto LABEL_153;
  }
  IsOwner = SepTokenIsOwner((__int64)Object, *(_QWORD *)(*(_QWORD *)(v54 + 8) + 8LL));
  v66 = v295;
  v47 = IsOwner;
  v285 = IsOwner;
  v48 = IsOwner;
  v64 = *(_DWORD *)(v295 + 16);
  if ( !IsOwner || (v285 = IsOwner, (v64 & 0x2060000) == 0) )
  {
    v50 = v285;
    goto LABEL_153;
  }
  v263 = (_BYTE)v50 == 0;
  v50 = IsOwner;
  if ( !v263 )
    goto LABEL_140;
  v67 = *(_QWORD *)(v295 + 8);
  v285 = v50;
  v68 = *(_QWORD *)(v67 + 8);
  v69 = *(_WORD *)(v68 + 2);
  if ( (v69 & 4) != 0 )
  {
    if ( v69 >= 0 )
    {
      v70 = *(_QWORD *)(v68 + 32);
      v285 = v50;
    }
    else
    {
      v71 = *(unsigned int *)(v68 + 16);
      v70 = 0LL;
      if ( (_DWORD)v71 )
        v70 = v68 + v71;
    }
  }
  else
  {
    v70 = 0LL;
  }
  if ( !RtlpOwnerAcesPresent(0, v70) )
  {
    v66 = v295;
LABEL_140:
    v72 = *(_DWORD *)(v66 + 16);
    v73 = *(_DWORD *)(v66 + 20);
    if ( (v72 & 0x2000000) != 0 )
    {
      v64 = 393216;
      v74 = v73 | 0x60000;
      v75 = 393216;
    }
    else
    {
      v64 = v72 & 0x60000;
      v74 = v64 | v73;
      v75 = v21 & 0x60000;
    }
    *(_DWORD *)(v66 + 20) = v74;
    v48 = 1LL;
    v76 = *(_QWORD *)(v41 + 24);
    v47 = 0LL;
    if ( v76 )
    {
      while ( (_DWORD)v48 )
      {
        if ( (v75 & (unsigned int)v48) != 0 && !*(_DWORD *)(v76 + 4LL * (unsigned int)v47) )
          *(_DWORD *)(v76 + 4LL * (unsigned int)v47) = 0x400000;
        v47 = (unsigned int)(v47 + 1);
        v48 = (unsigned int)(2 * v48);
      }
    }
    *(_DWORD *)(v66 + 16) &= 0xFFF9FFFF;
    v50 = (unsigned __int8)v50;
    if ( !v286 )
      v50 = 0;
    v285 = v50;
  }
LABEL_153:
  if ( !(unsigned int)Feature_DecoupleAppContainerAndIntegrityLevel__private_IsEnabledDeviceUsageNoInline(v48, v47) )
  {
    v77 = *(_DWORD *)(v295 + 16);
    if ( v77 || v286 )
      goto LABEL_165;
    if ( (*((_DWORD *)Object + 50) & 0x2000) == 0 )
      goto LABEL_161;
LABEL_162:
    if ( !a2 )
      SeUnlockSubjectContext(SubjectContexta);
    **(_DWORD **)(v41 + 8) = *(_DWORD *)(v295 + 20);
    **(_DWORD **)(v41 + 16) = 0;
    return 1;
  }
  v77 = *(_DWORD *)(v295 + 16);
  if ( v77 || v286 )
    goto LABEL_165;
  if ( (*((_DWORD *)Object + 50) & 0x6000) == 0x2000 )
    goto LABEL_162;
LABEL_161:
  if ( !v64 )
    goto LABEL_162;
LABEL_165:
  v281 = *(_QWORD *)(v41 + 24);
  v280 = *(_QWORD *)(v41 + 16);
  v279 = *(_QWORD *)(v41 + 32);
  v278 = *(_QWORD *)(v41 + 8);
  v277 = v22;
  v78 = SubjectContexta;
  LODWORD(v320[0]) = v64;
  v79 = v295;
  memset((char *)v320 + 4, 0, 24);
  v291 = SepAccessCheckEx(
           *(_QWORD *)(*(_QWORD *)(v295 + 8) + 8LL),
           0,
           SubjectContexta->PrimaryToken,
           SubjectContexta->ClientToken,
           v77,
           0LL,
           0,
           *(_QWORD *)(v295 + 32),
           *(_DWORD *)(v295 + 20),
           v277,
           v278,
           v279,
           v280,
           v281,
           0,
           v50,
           a7,
           (__int64)v320,
           (__int64)&v296,
           (__int64)v284);
  v300 = v313;
  if ( !SepRmEnforceCap )
    goto LABEL_450;
  v309 = **(_DWORD **)(v41 + 16);
  if ( v309 < 0 || !v286 )
    goto LABEL_450;
  v81 = *(int **)(v41 + 8);
  LOBYTE(v50) = 0;
  P = 0LL;
  v82 = 0;
  v302 = v50;
  v83 = *v81;
  v84 = *(unsigned int ***)(v41 + 32);
  v303 = v83;
  v297 = v83;
  if ( v84 )
  {
    v85 = *v84;
    if ( v85 )
    {
      v86 = *v85;
      if ( *v85 )
      {
        v87 = v85 + 3;
        v80 = v86;
        do
        {
          if ( (int)v87[1] < 0 )
          {
            if ( *(v87 - 1) == SeSecurityPrivilege.LowPart && *v87 == SeSecurityPrivilege.HighPart )
            {
              v82 |= 0x1000000u;
            }
            else if ( *(_QWORD *)(v87 - 1) == SeTakeOwnershipPrivilege || *(_QWORD *)(v87 - 1) == SeRelabelPrivilege )
            {
              v82 |= 0x80000u;
            }
          }
          v87 += 3;
          --v80;
        }
        while ( v80 );
      }
    }
  }
  LOBYTE(v80) = 1;
  v88 = **(_DWORD **)(v41 + 8);
  v287 = SepAdtAuditThisEventWithContext(130LL, 1LL, v80, SubjectContexta);
  v89 = v287;
  if ( v287 )
  {
    P = (PVOID)ExAllocatePool2(0x40uLL, 8LL * HIDWORD(v300[2].Linkage.Blink), 0x41536553u);
    if ( !P )
    {
      if ( !a2 )
        SeUnlockSubjectContext(SubjectContexta);
      Blink = (volatile signed __int64 *)v300[1].Linkage.Blink;
      if ( Blink )
      {
        v91 = _InterlockedExchangeAdd64(Blink + 5, 0xFFFFFFFFFFFFFFFFuLL);
        v92 = v91 <= 1;
        v93 = v91 - 1;
        if ( v92 )
        {
          if ( v93 )
            __fastfail(0xEu);
          SepRmDestroyCapTable((PVOID)Blink);
        }
      }
      **(_DWORD **)(v41 + 8) = 0;
      **(_DWORD **)(v41 + 16) = -1073741801;
      SepFreeResourceInfo((char *)v296);
      return 0;
    }
    memset_0(P, 0, 8LL * HIDWORD(v300[2].Linkage.Blink));
    v89 = v287;
  }
  v94 = v300;
  v95 = 0;
  Blink_high = HIDWORD(v300[2].Linkage.Blink);
  v311 = Blink_high;
  if ( !Blink_high )
  {
LABEL_260:
    v142 = v303;
    v143 = 2;
    if ( v89 )
    {
      if ( v83 != v303 )
      {
        v144 = 0;
        v145 = v83 & (v303 ^ v83);
        v146 = v303 & (v303 ^ v83);
        if ( Blink_high )
        {
          v147 = (char *)P;
          do
          {
            if ( !v145 && !v146 )
              break;
            if ( v147[4] )
            {
              v148 = *(_DWORD *)v147;
              v149 = v146 & (v146 ^ *(_DWORD *)v147);
              if ( v149 )
              {
                v150 = 1;
                v151 = 0;
                while ( v150 )
                {
                  if ( (v150 & v149) != 0 && !*((_DWORD *)v332 + v151) )
                    *((_DWORD *)v332 + v151) = (v144 | 0xFFFFFF80) << 24;
                  ++v151;
                  v150 *= 2;
                }
              }
              v146 &= ~v149;
              v164 = v145 & v148;
              if ( v164 )
              {
                v165 = 1;
                v166 = 0;
                while ( v165 )
                {
                  if ( (v165 & v164) != 0 && !*((_DWORD *)v332 + v166) )
                    *((_DWORD *)v332 + v166) = (v144 | 0xFFFFFF80) << 24;
                  ++v166;
                  v165 *= 2;
                }
              }
              v167 = 2;
              v145 &= ~v164;
              do
              {
                v168 = v167 - 2;
                v169 = *((_DWORD *)v332 + v168);
                if ( (v169 & 0xFFFF0000) != 0 )
                  *((_DWORD *)&v321 + v168) |= v169 & 0xFF000000;
                v170 = v167 - 1;
                v171 = *((_DWORD *)v332 + v170);
                if ( (v171 & 0xFFFF0000) != 0 )
                  *((_DWORD *)&v321 + v170) |= v171 & 0xFF000000;
                v172 = *((_DWORD *)v332 + v167);
                if ( (v172 & 0xFFFF0000) != 0 )
                  *((_DWORD *)&v321 + v167) |= v172 & 0xFF000000;
                v173 = v167 + 1;
                v174 = *((_DWORD *)v332 + v173);
                if ( (v174 & 0xFFFF0000) != 0 )
                  *((_DWORD *)&v321 + v173) |= v174 & 0xFF000000;
                v175 = v167 + 2;
                v176 = *((_DWORD *)v332 + v175);
                if ( (v176 & 0xFFFF0000) != 0 )
                  *((_DWORD *)&v321 + v175) |= v176 & 0xFF000000;
                v177 = v167 + 3;
                v178 = *((_DWORD *)v332 + v177);
                if ( (v178 & 0xFFFF0000) != 0 )
                  *((_DWORD *)&v321 + v177) |= v178 & 0xFF000000;
                v179 = v167 + 4;
                v180 = *((_DWORD *)v332 + v179);
                if ( (v180 & 0xFFFF0000) != 0 )
                  *((_DWORD *)&v321 + v179) |= v180 & 0xFF000000;
                v181 = v167 + 5;
                v182 = *((_DWORD *)v332 + v181);
                if ( (v182 & 0xFFFF0000) != 0 )
                  *((_DWORD *)&v321 + v181) |= v182 & 0xFF000000;
                v183 = v167 + 6;
                v184 = *((_DWORD *)v332 + v183);
                if ( (v184 & 0xFFFF0000) != 0 )
                  *((_DWORD *)&v321 + v183) |= v184 & 0xFF000000;
                v185 = v167 + 7;
                v186 = *((_DWORD *)v332 + v185);
                if ( (v186 & 0xFFFF0000) != 0 )
                  *((_DWORD *)&v321 + v185) |= v186 & 0xFF000000;
                v187 = v167 + 8;
                v188 = *((_DWORD *)v332 + v187);
                if ( (v188 & 0xFFFF0000) != 0 )
                  *((_DWORD *)&v321 + v187) |= v188 & 0xFF000000;
                v189 = v167 + 9;
                v190 = *((_DWORD *)v332 + v189);
                if ( (v190 & 0xFFFF0000) != 0 )
                  *((_DWORD *)&v321 + v189) |= v190 & 0xFF000000;
                v191 = v167 + 10;
                v192 = *((_DWORD *)v332 + v191);
                if ( (v192 & 0xFFFF0000) != 0 )
                  *((_DWORD *)&v321 + v191) |= v192 & 0xFF000000;
                v193 = v167 + 11;
                v194 = *((_DWORD *)v332 + v193);
                if ( (v194 & 0xFFFF0000) != 0 )
                  *((_DWORD *)&v321 + v193) |= v194 & 0xFF000000;
                v195 = v167 + 12;
                v196 = *((_DWORD *)v332 + v195);
                if ( (v196 & 0xFFFF0000) != 0 )
                  *((_DWORD *)&v321 + v195) |= v196 & 0xFF000000;
                v197 = v167 + 13;
                v198 = *((_DWORD *)v332 + v197);
                if ( (v198 & 0xFFFF0000) != 0 )
                  *((_DWORD *)&v321 + v197) |= v198 & 0xFF000000;
                v167 += 16;
              }
              while ( v167 - 2 < 0x20 );
              Blink_high = v311;
            }
            ++v144;
            v147 += 8;
          }
          while ( v144 < Blink_high );
        }
      }
    }
    if ( P )
      ExFreePoolWithTag(P, 0);
    v41 = v305;
    **(_DWORD **)(v305 + 16) = v309;
    **(_DWORD **)(v41 + 8) &= v142;
    if ( **(int **)(v41 + 16) < 0 )
      v284[0] = 0;
    v199 = *(_DWORD **)(v41 + 24);
    if ( (v321 & 0xFF0000) != 0 )
      *v199 = v321;
    if ( (DWORD1(v321) & 0xFF0000) != 0 )
      v199[1] = DWORD1(v321);
    if ( (DWORD2(v321) & 0xFF0000) != 0 )
      v199[2] = DWORD2(v321);
    if ( (HIDWORD(v321) & 0xFF0000) != 0 )
      v199[3] = HIDWORD(v321);
    if ( (v322 & 0xFF0000) != 0 )
      v199[4] = v322;
    if ( (DWORD1(v322) & 0xFF0000) != 0 )
      v199[5] = DWORD1(v322);
    if ( (DWORD2(v322) & 0xFF0000) != 0 )
      v199[6] = DWORD2(v322);
    if ( (HIDWORD(v322) & 0xFF0000) != 0 )
      v199[7] = HIDWORD(v322);
    if ( (v323 & 0xFF0000) != 0 )
      v199[8] = v323;
    if ( (DWORD1(v323) & 0xFF0000) != 0 )
      v199[9] = DWORD1(v323);
    if ( (DWORD2(v323) & 0xFF0000) != 0 )
      v199[10] = DWORD2(v323);
    if ( (HIDWORD(v323) & 0xFF0000) != 0 )
      v199[11] = HIDWORD(v323);
    if ( (v324 & 0xFF0000) != 0 )
      v199[12] = v324;
    if ( (DWORD1(v324) & 0xFF0000) != 0 )
      v199[13] = DWORD1(v324);
    if ( (DWORD2(v324) & 0xFF0000) != 0 )
      v199[14] = DWORD2(v324);
    if ( (HIDWORD(v324) & 0xFF0000) != 0 )
      v199[15] = HIDWORD(v324);
    if ( (v325 & 0xFF0000) != 0 )
      v199[16] = v325;
    if ( (DWORD1(v325) & 0xFF0000) != 0 )
      v199[17] = DWORD1(v325);
    if ( (DWORD2(v325) & 0xFF0000) != 0 )
      v199[18] = DWORD2(v325);
    if ( (HIDWORD(v325) & 0xFF0000) != 0 )
      v199[19] = HIDWORD(v325);
    if ( (v326 & 0xFF0000) != 0 )
      v199[20] = v326;
    if ( (DWORD1(v326) & 0xFF0000) != 0 )
      v199[21] = DWORD1(v326);
    if ( (DWORD2(v326) & 0xFF0000) != 0 )
      v199[22] = DWORD2(v326);
    if ( (HIDWORD(v326) & 0xFF0000) != 0 )
      v199[23] = HIDWORD(v326);
    if ( (v327 & 0xFF0000) != 0 )
      v199[24] = v327;
    if ( (DWORD1(v327) & 0xFF0000) != 0 )
      v199[25] = DWORD1(v327);
    if ( (DWORD2(v327) & 0xFF0000) != 0 )
      v199[26] = DWORD2(v327);
    if ( (HIDWORD(v327) & 0xFF0000) != 0 )
      v199[27] = HIDWORD(v327);
    if ( (v328 & 0xFF0000) != 0 )
      v199[28] = v328;
    if ( (DWORD1(v328) & 0xFF0000) != 0 )
      v199[29] = DWORD1(v328);
    if ( (DWORD2(v328) & 0xFF0000) != 0 )
      v199[30] = DWORD2(v328);
    if ( (HIDWORD(v328) & 0xFF0000) != 0 )
      v199[31] = HIDWORD(v328);
    v200 = *(_QWORD *)(v41 + 24);
    do
    {
      v201 = 4LL * (v143 - 2);
      v202 = *(_DWORD *)((char *)&v321 + v201);
      if ( (v202 & 0xFFFF0000) != 0 )
        *(_DWORD *)(v201 + v200) |= v202 & 0xFF000000;
      v203 = 4LL * (v143 - 1);
      v204 = *(_DWORD *)((char *)&v321 + v203);
      if ( (v204 & 0xFFFF0000) != 0 )
        *(_DWORD *)(v203 + v200) |= v204 & 0xFF000000;
      v205 = *((_DWORD *)&v321 + v143);
      if ( (v205 & 0xFFFF0000) != 0 )
        *(_DWORD *)(4LL * v143 + v200) |= v205 & 0xFF000000;
      v206 = 4LL * (v143 + 1);
      v207 = *(_DWORD *)((char *)&v321 + v206);
      if ( (v207 & 0xFFFF0000) != 0 )
        *(_DWORD *)(v206 + v200) |= v207 & 0xFF000000;
      v208 = 4LL * (v143 + 2);
      v209 = *(_DWORD *)((char *)&v321 + v208);
      if ( (v209 & 0xFFFF0000) != 0 )
        *(_DWORD *)(v208 + v200) |= v209 & 0xFF000000;
      v210 = 4LL * (v143 + 3);
      v211 = *(_DWORD *)((char *)&v321 + v210);
      if ( (v211 & 0xFFFF0000) != 0 )
        *(_DWORD *)(v210 + v200) |= v211 & 0xFF000000;
      v212 = 4LL * (v143 + 4);
      v213 = *(_DWORD *)((char *)&v321 + v212);
      if ( (v213 & 0xFFFF0000) != 0 )
        *(_DWORD *)(v212 + v200) |= v213 & 0xFF000000;
      v214 = 4LL * (v143 + 5);
      v215 = *(_DWORD *)((char *)&v321 + v214);
      if ( (v215 & 0xFFFF0000) != 0 )
        *(_DWORD *)(v214 + v200) |= v215 & 0xFF000000;
      v216 = 4LL * (v143 + 6);
      v217 = *(_DWORD *)((char *)&v321 + v216);
      if ( (v217 & 0xFFFF0000) != 0 )
        *(_DWORD *)(v216 + v200) |= v217 & 0xFF000000;
      v218 = 4LL * (v143 + 7);
      v219 = *(_DWORD *)((char *)&v321 + v218);
      if ( (v219 & 0xFFFF0000) != 0 )
        *(_DWORD *)(v218 + v200) |= v219 & 0xFF000000;
      v220 = 4LL * (v143 + 8);
      v221 = *(_DWORD *)((char *)&v321 + v220);
      if ( (v221 & 0xFFFF0000) != 0 )
        *(_DWORD *)(v220 + v200) |= v221 & 0xFF000000;
      v222 = 4LL * (v143 + 9);
      v223 = *(_DWORD *)((char *)&v321 + v222);
      if ( (v223 & 0xFFFF0000) != 0 )
        *(_DWORD *)(v222 + v200) |= v223 & 0xFF000000;
      v224 = 4LL * (v143 + 10);
      v225 = *(_DWORD *)((char *)&v321 + v224);
      if ( (v225 & 0xFFFF0000) != 0 )
        *(_DWORD *)(v224 + v200) |= v225 & 0xFF000000;
      v226 = 4LL * (v143 + 11);
      v227 = *(_DWORD *)((char *)&v321 + v226);
      if ( (v227 & 0xFFFF0000) != 0 )
        *(_DWORD *)(v226 + v200) |= v227 & 0xFF000000;
      v228 = 4LL * (v143 + 12);
      v229 = *(_DWORD *)((char *)&v321 + v228);
      if ( (v229 & 0xFFFF0000) != 0 )
        *(_DWORD *)(v228 + v200) |= v229 & 0xFF000000;
      v230 = v143 + 13;
      v231 = *((_DWORD *)&v321 + v230);
      if ( (v231 & 0xFFFF0000) != 0 )
        *(_DWORD *)(v200 + 4 * v230) |= v231 & 0xFF000000;
      v143 += 16;
    }
    while ( v143 - 2 < 0x20 );
    v79 = v295;
    v16 = 1;
    v78 = SubjectContexta;
LABEL_450:
    if ( v290 || (*(_DWORD *)(v79 + 16) & 0x2000000) == 0 )
    {
      v241 = (const void ***)Object;
      if ( (_BYTE)v299 && !*(_WORD *)((char *)&v320[1] + 5) )
      {
        if ( (*((_DWORD *)Object + 50) & 0x3000000) != 0x3000000 || HIDWORD(v320[0]) )
        {
          v243 = -1073741790;
          v244 = 1;
          v245 = 0;
          **(_DWORD **)(v41 + 16) = -1073741790;
          **(_DWORD **)(v41 + 8) = 0;
          v246 = *(_DWORD **)(v41 + 8);
          v247 = *(_QWORD *)(v41 + 24);
          v284[0] = 0;
          v248 = ~*v246;
          if ( v247 )
          {
            while ( v244 )
            {
              if ( (v244 & v248) != 0 && !*(_DWORD *)(v247 + 4LL * v245) )
                *(_DWORD *)(v247 + 4LL * v245) = 3145728;
              ++v245;
              v244 *= 2;
            }
          }
          goto LABEL_482;
        }
        v242 = *(_DWORD **)(v41 + 16);
        BYTE7(v320[1]) = 1;
        *v242 = 0;
        **(_DWORD **)(v41 + 8) = *(_DWORD *)(v79 + 16);
        v284[0] = 1;
      }
    }
    else
    {
      v232 = *(int **)(v41 + 8);
      v233 = *v232;
      if ( !(_BYTE)v299 || !*(_WORD *)((char *)&v320[1] + 5) && (*((_DWORD *)Object + 50) & 0x3000000) != 0x3000000 )
      {
        v234 = *(int **)(v41 + 16);
        if ( DWORD2(v312) && (!BYTE5(v312) || !BYTE4(v312) || !BYTE6(v312)) )
        {
          v235 = v312 & v233;
          if ( ((unsigned int)v312 & v233) != v233 )
          {
            *v232 = v235;
            v236 = -1073741790;
            if ( v235 )
              v236 = 0;
            *v234 = v236;
            v284[0] = v235 != 0;
          }
        }
        v237 = 1;
        v238 = *(_QWORD *)(v41 + 24);
        v239 = v233 & ~**(_DWORD **)(v41 + 8);
        v240 = 0;
        if ( v238 )
        {
          while ( v237 )
          {
            if ( (v237 & v239) != 0 && !*(_DWORD *)(v238 + 4LL * v240) )
              *(_DWORD *)(v238 + 4LL * v240) = 3145728;
            ++v240;
            v237 *= 2;
          }
        }
      }
      v241 = (const void ***)Object;
    }
    v243 = -1073741790;
LABEL_482:
    if ( (*(_DWORD *)(v79 + 16) & 0x2000000) != 0 )
    {
      v249 = *(int **)(v41 + 8);
      v250 = *(int **)(v41 + 16);
      v288 = 0;
      v251 = *v249;
      if ( v307 != -1 )
      {
        v252 = v307 & v251;
        if ( (v307 & v251) != v251 )
        {
          *v249 = v252;
          v253 = -1073741790;
          v288 = 1;
          if ( v252 )
            v253 = 0;
          *v250 = v253;
          v284[0] = v252 != 0;
        }
      }
      v254 = 1;
      v255 = *(_QWORD *)(v41 + 24);
      v256 = v251 & ~**(_DWORD **)(v41 + 8);
      v257 = 0;
      if ( v255 )
      {
        while ( v254 )
        {
          if ( (v254 & v256) != 0 && !*(_DWORD *)(v255 + 4LL * v257) )
            *(_DWORD *)(v255 + 4LL * v257) = 9437184;
          ++v257;
          v254 *= 2;
        }
      }
      v258 = *(int **)(v41 + 8);
      v259 = *(int **)(v41 + 16);
      v289 = 0;
      v260 = *v258;
      if ( v315 != -1 )
      {
        v261 = v315 & v260;
        if ( (v315 & v260) != v260 )
        {
          v262 = *(_DWORD *)(v79 + 16);
          v289 = 1;
          *v258 = v261;
          if ( (v262 & 0x2000000) != 0 )
          {
            v263 = v261 == 0;
            if ( v261 )
              v243 = 0;
            *v259 = v243;
          }
          else
          {
            *v259 = -1073741790;
            v263 = *v258 == 0;
          }
          v284[0] = !v263;
        }
      }
      v264 = *(_QWORD *)(v41 + 24);
      v265 = v260 & ~**(_DWORD **)(v41 + 8);
      if ( v264 )
      {
        while ( v16 )
        {
          if ( (v265 & v16) != 0 && !*(_DWORD *)(v264 + 4LL * v7) )
            *(_DWORD *)(v264 + 4LL * v7) = 10485760;
          ++v7;
          v16 *= 2;
        }
      }
    }
    if ( v241 )
    {
      if ( v288
        || v289
        || (v266 = HIDWORD(v320[0])) == 0
        && ((_DWORD)v241[25] & 0x4000) != 0
        && (**(int **)(v41 + 16) < 0 || BYTE7(v320[1])) )
      {
        v267 = *(_DWORD *)(v79 + 16) | *(_DWORD *)(v79 + 20);
        v268 = *(_QWORD *)(v79 + 8);
        v269 = **(_DWORD **)(v41 + 16) >= 0;
        v270 = SepLocateTokenTrustLevel(v78);
        SeLogAccessFailure(v241, 0LL, 0LL, (ULONGLONG)v270, *(_QWORD *)(v268 + 8), v267, v269);
        v266 = HIDWORD(v320[0]);
        v79 = v295;
      }
      if ( **(int **)(v41 + 16) < 0 && !v266 && ((_DWORD)v241[25] & 0x4000) != 0 )
      {
        if ( BYTE8(v320[1]) )
        {
          v271 = *(_DWORD *)(v79 + 16) & ~(DWORD2(v320[0]) | DWORD1(v320[0]) | 0x2000000);
          if ( (v271 & v320[1]) == v271 )
            SepLogLpacAccessFailure();
        }
      }
    }
    if ( v286 )
    {
      v272 = (volatile signed __int64 *)v300[1].Linkage.Blink;
      if ( v272 )
      {
        v273 = _InterlockedExchangeAdd64(v272 + 5, 0xFFFFFFFFFFFFFFFFuLL);
        v92 = v273 <= 1;
        v274 = v273 - 1;
        if ( v92 )
        {
          if ( v274 )
            __fastfail(0xEu);
          SepRmDestroyCapTable((PVOID)v272);
        }
      }
    }
    if ( !a2 )
      SeUnlockSubjectContext(v78);
    SepFreeResourceInfo((char *)v296);
    return v291 && v284[0];
  }
  while ( 1 )
  {
    v329 = 0LL;
    v330 = 0LL;
    v331 = 0LL;
    v97 = *(&v94[2].Signature + v95);
    if ( *(_QWORD *)(v97 + 24) )
    {
      v98 = v296;
      if ( !v296 )
      {
        v99 = AuthzBasepInitializeResourceClaimsFromSacl((__int64)Sacl, (__int64 *)&v296);
        v98 = v296;
        v50 = (unsigned __int8)v50;
        if ( v99 < 0 )
          v50 = 1;
        v302 = v50;
      }
      v100 = (_QWORD *)*((_QWORD *)Object + 137);
      if ( v100 )
      {
        v101 = (void *)v100[72];
        v102 = (void *)v100[74];
        v103 = (void *)v100[73];
        v104 = (void *)v100[75];
      }
      else
      {
        v101 = 0LL;
        v102 = 0LL;
        v103 = 0LL;
        v104 = 0LL;
      }
      v105 = AuthzBasepEvaluateAceCondition(
               Object,
               *((void **)Object + 97),
               v98,
               v101,
               v102,
               v103,
               v104,
               *(_DWORD **)(v97 + 24),
               *(_DWORD *)(v97 + 16),
               1u,
               0,
               &v301);
      v106 = v301;
      v107 = v105;
      if ( v301 != 1 )
      {
        if ( v105 < 0 )
        {
          if ( !a2 )
            SeUnlockSubjectContext(SubjectContexta);
          v152 = (volatile signed __int64 *)v300[1].Linkage.Blink;
          if ( v152 )
          {
            v155 = _InterlockedExchangeAdd64(v152 + 5, 0xFFFFFFFFFFFFFFFFuLL);
            v92 = v155 <= 1;
            v156 = v155 - 1;
            if ( v92 )
            {
              if ( v156 )
                goto LABEL_302;
LABEL_301:
              SepRmDestroyCapTable((PVOID)v152);
            }
          }
LABEL_303:
          v163 = v305;
          **(_DWORD **)(v305 + 8) = 0;
          **(_DWORD **)(v163 + 16) = v107;
          goto LABEL_294;
        }
        if ( (*((_DWORD *)Object + 50) & 0x10) != 0 )
        {
          v108 = (_QWORD *)*((_QWORD *)Object + 137);
          if ( v108 )
          {
            v109 = (void *)v108[72];
            v110 = (void *)v108[74];
            v111 = (void *)v108[73];
            v112 = (void *)v108[75];
          }
          else
          {
            v109 = 0LL;
            v110 = 0LL;
            v111 = 0LL;
            v112 = 0LL;
          }
          v107 = AuthzBasepEvaluateAceCondition(
                   Object,
                   *((void **)Object + 97),
                   v296,
                   v109,
                   v110,
                   v111,
                   v112,
                   *(_DWORD **)(v97 + 24),
                   *(_DWORD *)(v97 + 16),
                   1u,
                   1u,
                   &v301);
          if ( v107 < 0 )
          {
            if ( !a2 )
              SeUnlockSubjectContext(SubjectContexta);
            v152 = (volatile signed __int64 *)v300[1].Linkage.Blink;
            if ( v152 )
            {
              v153 = _InterlockedExchangeAdd64(v152 + 5, 0xFFFFFFFFFFFFFFFFuLL);
              v92 = v153 <= 1;
              v154 = v153 - 1;
              if ( v92 )
              {
                if ( !v154 )
                  goto LABEL_301;
LABEL_302:
                __fastfail(0xEu);
              }
            }
            goto LABEL_303;
          }
          v106 = v301;
        }
        if ( !(_BYTE)v50 && v106 != 1 )
        {
          v83 = v297;
          goto LABEL_258;
        }
      }
    }
    v113 = *(unsigned __int8 **)(v97 + 32);
    v107 = RtlCreateSecurityDescriptor(SecurityDescriptor, *v113);
    if ( v107 < 0
      || ((WORD1(SecurityDescriptor[0]) |= 3u, v114 = *((_WORD *)v113 + 1), (v114 & 4) != 0)
        ? (v114 >= 0
         ? (v115 = (ACL *)*((_QWORD *)v113 + 4))
         : (v116 = *((unsigned int *)v113 + 4), (_DWORD)v116)
         ? (v115 = (ACL *)&v113[v116])
         : (v115 = 0LL))
        : (v115 = 0LL),
          (v107 = RtlSetDaclSecurityDescriptor(SecurityDescriptor, (v114 & 4) != 0, v115, (v114 & 8) != 0), v107 < 0)
       || (v107 = RtlSetSaclSecurityDescriptor(SecurityDescriptor, 1u, Sacl, 0), v107 < 0)) )
    {
      if ( !a2 )
        SeUnlockSubjectContext(SubjectContexta);
      v152 = (volatile signed __int64 *)v300[1].Linkage.Blink;
      if ( v152 )
      {
        v161 = _InterlockedExchangeAdd64(v152 + 5, 0xFFFFFFFFFFFFFFFFuLL);
        v92 = v161 <= 1;
        v162 = v161 - 1;
        if ( v92 )
        {
          if ( !v162 )
            goto LABEL_301;
          goto LABEL_302;
        }
      }
      goto LABEL_303;
    }
    v117 = *(_DWORD *)(v295 + 16);
    if ( (*(_DWORD *)(v97 + 48) & 1) != 0 )
    {
      if ( (v117 & 0x2000000) == 0 )
        v117 |= *(_DWORD *)(v295 + 20);
      v118 = 0;
    }
    else
    {
      v118 = *(_DWORD *)(v295 + 20);
    }
    v119 = v285;
    LOBYTE(v282) = 0;
    v275 = *(_QWORD *)(v295 + 32);
    v329 = 0LL;
    v120 = SubjectContexta->ClientToken;
    PrimaryToken = SubjectContexta->PrimaryToken;
    v330 = 0LL;
    v331 = 0LL;
    v291 = SepAccessCheckEx(
             (unsigned int)SecurityDescriptor,
             0,
             (_DWORD)PrimaryToken,
             (_DWORD)v120,
             v117 | 0x2000000u,
             (__int64)&v329,
             1,
             v275,
             v118,
             a6,
             (__int64)&v298,
             0LL,
             (__int64)&v310,
             (__int64)v333,
             v282,
             v285,
             a7,
             (__int64)v320,
             (__int64)&v296,
             (__int64)v284);
    v122 = v82 | HIDWORD(v330);
    v123 = v298 & (**(_DWORD **)(v305 + 8) | v118);
    v298 = v123;
    if ( v119 )
      v122 |= v123 & 0x60000;
    v124 = ~(_DWORD)v331 & v122;
    v125 = v310;
    v303 &= v123;
    if ( !v303 )
      v125 = -1073741790;
    v309 = v125;
    v126 = v88 & (v88 ^ v124);
    if ( v126 )
    {
      v127 = 1;
      v128 = 0;
      while ( v127 )
      {
        if ( (v127 & v126) != 0 && !*((_DWORD *)&v321 + v128) )
          *((_DWORD *)&v321 + v128) = v95 | 0x50000;
        ++v128;
        v127 *= 2;
      }
      v88 &= v124;
    }
    v89 = v287;
    if ( v287 )
      break;
    LOBYTE(v50) = v302;
    v83 = v297;
LABEL_259:
    v94 = v300;
    ++v95;
    Blink_high = HIDWORD(v300[2].Linkage.Blink);
    v311 = Blink_high;
    if ( v95 >= Blink_high )
      goto LABEL_260;
  }
  v129 = *(unsigned __int8 **)(v97 + 40);
  if ( !v129 )
  {
    v140 = v297;
    LOBYTE(v50) = v302;
    v141 = (char *)P + 8 * v95;
    v141[4] = 1;
    *(_DWORD *)v141 = v298 | v82;
    v83 = v298 & v140;
    v297 = v83;
LABEL_258:
    v89 = v287;
    goto LABEL_259;
  }
  v130 = RtlCreateSecurityDescriptor(v318, *v129);
  if ( v130 >= 0 )
  {
    WORD1(v318[0]) |= 3u;
    v131 = *((_WORD *)v129 + 1);
    if ( (v131 & 4) != 0 )
    {
      if ( v131 >= 0 )
      {
        v132 = (ACL *)*((_QWORD *)v129 + 4);
      }
      else
      {
        v133 = *((unsigned int *)v129 + 4);
        v132 = (_DWORD)v133 ? (ACL *)&v129[v133] : 0LL;
      }
    }
    else
    {
      v132 = 0LL;
    }
    v130 = RtlSetDaclSecurityDescriptor(v318, (v131 & 4) != 0, v132, (v131 & 8) != 0);
    if ( v130 >= 0 )
    {
      v130 = RtlSetSaclSecurityDescriptor(v318, 1u, Sacl, 0);
      if ( v130 >= 0 )
      {
        v134 = *(_DWORD *)(v295 + 16);
        if ( (*(_DWORD *)(v97 + 48) & 0x100) != 0 )
        {
          if ( (v134 & 0x2000000) == 0 )
            v134 |= *(_DWORD *)(v295 + 20);
          v135 = 0;
        }
        else
        {
          v135 = *(_DWORD *)(v295 + 20);
        }
        LOBYTE(v282) = 0;
        v276 = *(_QWORD *)(v295 + 32);
        v136 = SubjectContexta->ClientToken;
        v137 = SubjectContexta->PrimaryToken;
        v329 = 0LL;
        v330 = 0LL;
        v331 = 0LL;
        SepAccessCheckEx(
          (unsigned int)v318,
          0,
          (_DWORD)v137,
          (_DWORD)v136,
          v134,
          0LL,
          0,
          v276,
          v135,
          a6,
          (__int64)&v306,
          0LL,
          (__int64)&v314,
          (__int64)v333,
          v282,
          v285,
          a7,
          (__int64)v320,
          (__int64)&v296,
          (__int64)v294);
        v138 = v297;
        LOBYTE(v50) = v302;
        v139 = (char *)P + 8 * v95;
        v139[4] = 1;
        *(_DWORD *)v139 = v306 | v82;
        v83 = v306 & v138;
        v297 = v83;
        goto LABEL_258;
      }
    }
  }
  if ( !a2 )
    SeUnlockSubjectContext(SubjectContexta);
  v157 = (volatile signed __int64 *)v300[1].Linkage.Blink;
  if ( v157 )
  {
    v158 = _InterlockedExchangeAdd64(v157 + 5, 0xFFFFFFFFFFFFFFFFuLL);
    v92 = v158 <= 1;
    v159 = v158 - 1;
    if ( v92 )
    {
      if ( v159 )
        __fastfail(0xEu);
      SepRmDestroyCapTable((PVOID)v157);
    }
  }
  v160 = v305;
  **(_DWORD **)(v305 + 8) = 0;
  **(_DWORD **)(v160 + 16) = v130;
LABEL_294:
  SepFreeResourceInfo((char *)v296);
  if ( P )
    ExFreePoolWithTag(P, 0);
  return 0;
}
