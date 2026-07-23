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
  NTSTATUS v24; // r15d
  __int64 TrustLabelAce; // rax
  int v26; // r12d
  void *v27; // r11
  unsigned __int64 v28; // r8
  __int64 v29; // r12
  int v30; // ecx
  PSECURITY_SUBJECT_CONTEXT v31; // r10
  int *v32; // rax
  PVOID ClientToken; // r15
  __int64 v34; // rcx
  __int64 v35; // rdx
  __int64 v36; // r9
  int v37; // eax
  char v38; // r15
  char v39; // cl
  PVOID v40; // rcx
  char IsOwner; // al
  int v42; // r12d
  char v43; // cl
  char v44; // r8
  __int64 v45; // r15
  int v46; // edx
  __int64 v47; // rcx
  PACCESS_TOKEN v48; // r9
  PACCESS_TOKEN v49; // r8
  BOOLEAN v50; // al
  __int64 v51; // rdx
  __int64 v52; // r8
  __int64 v53; // r9
  BOOLEAN v54; // r12
  __int64 v55; // r11
  _DWORD *v56; // r14
  int *v57; // rax
  _DWORD *v58; // rdx
  int v59; // ecx
  int v60; // ebx
  unsigned int v61; // edx
  __int64 v62; // r9
  int v63; // r8d
  int v64; // ecx
  _DWORD *v65; // rax
  int *v66; // rdx
  int v67; // ecx
  int v68; // ecx
  int v70; // r15d
  int v71; // eax
  int *v72; // rcx
  int v73; // edx
  int v74; // r12d
  unsigned int v75; // edx
  int v76; // ecx
  __int64 v77; // r8
  __int16 v78; // ax
  __int64 v79; // rdx
  char v80; // al
  int v81; // r12d
  int v82; // ecx
  int v83; // r14d
  __int64 v84; // r9
  int v85; // ecx
  unsigned int v86; // edx
  _DWORD *v87; // rcx
  int *v88; // r8
  int v89; // ecx
  __int64 v90; // rax
  int v91; // ecx
  int v92; // r12d
  int *v93; // rcx
  char *Pool2; // r15
  int v95; // eax
  int v96; // ecx
  unsigned int **v97; // rax
  BOOLEAN v98; // al
  __int64 v99; // rdx
  __int64 v100; // r8
  __int64 v101; // r9
  __int64 v102; // rcx
  int v103; // ecx
  int v104; // edi
  __int64 v105; // rbx
  char v106; // si
  PSECURITY_SUBJECT_CONTEXT v107; // rcx
  PSID *PrimaryToken; // rcx
  PVOID v109; // rcx
  __int64 v110; // rcx
  int v111; // r8d
  int v112; // r10d
  bool v113; // zf
  int v114; // r9d
  int v115; // eax
  int v116; // ecx
  _DWORD *v117; // rax
  __int64 v118; // rcx
  int v119; // r12d
  _QWORD *v120; // rax
  __int64 v121; // rax
  __int64 v122; // rcx
  __int64 v123; // rdx
  __int64 v124; // rax
  unsigned int *v125; // rdx
  unsigned int v126; // eax
  _DWORD *v127; // rdx
  __int64 v128; // r9
  int v129; // ecx
  unsigned int v130; // edx
  _QWORD *v131; // r11
  _DWORD *v132; // rax
  __int64 v133; // rcx
  int v134; // esi
  __int64 v135; // rdi
  __int64 v136; // rax
  void *ScopedPolicySid; // rax
  int Cap; // eax
  __int64 v139; // rdx
  unsigned int v140; // r8d
  __int64 v141; // r8
  PVOID v142; // rcx
  int v143; // eax
  int v144; // ecx
  _QWORD *v145; // rax
  void *v146; // r9
  void *v147; // rdx
  void *v148; // r10
  void *v149; // r11
  int v150; // eax
  __int64 v151; // rdx
  __int64 v152; // r8
  __int64 v153; // r9
  int v154; // ecx
  _QWORD *v155; // rax
  void *v156; // r9
  void *v157; // rdx
  void *v158; // r8
  void *v159; // r10
  __int64 v160; // rdx
  __int64 v161; // r8
  __int64 v162; // r9
  unsigned int v163; // edx
  __int64 v164; // rdx
  __int64 v165; // r8
  __int64 v166; // r9
  int v167; // r12d
  int v168; // ecx
  int v169; // r12d
  PACCESS_TOKEN v170; // r9
  PACCESS_TOKEN v171; // r8
  BOOLEAN v172; // al
  int v173; // edx
  int v174; // ecx
  int v175; // r12d
  unsigned int v176; // r8d
  int v177; // ecx
  int v178; // ecx
  int v179; // r11d
  __int64 v180; // rdx
  __int64 v181; // r8
  __int64 v182; // r9
  int v183; // ecx
  int v184; // eax
  PACCESS_TOKEN v185; // r9
  PACCESS_TOKEN v186; // r8
  int v187; // eax
  char *v188; // rcx
  char *v189; // rcx
  __int64 v190; // rcx
  int v191; // ecx
  __int64 v192; // rcx
  int v193; // ecx
  __int64 v194; // rcx
  int v195; // ecx
  __int64 v196; // rcx
  int v197; // r14d
  int v198; // edx
  __int64 v199; // rax
  unsigned int v200; // r12d
  int v201; // r11d
  int v202; // ecx
  int v203; // r11d
  int v204; // ecx
  __int64 v205; // [rsp+38h] [rbp-F8h]
  __int64 v206; // [rsp+38h] [rbp-F8h]
  __int64 v207; // [rsp+38h] [rbp-F8h]
  int v208; // [rsp+40h] [rbp-F0h]
  __int64 v209; // [rsp+50h] [rbp-E0h]
  __int64 v210; // [rsp+58h] [rbp-D8h]
  __int64 v211; // [rsp+60h] [rbp-D0h]
  __int64 v212; // [rsp+68h] [rbp-C8h]
  int v213; // [rsp+70h] [rbp-C0h]
  char v214; // [rsp+78h] [rbp-B8h]
  char v216; // [rsp+B1h] [rbp-7Fh]
  bool v217; // [rsp+B2h] [rbp-7Eh] BYREF
  BOOLEAN v218; // [rsp+B3h] [rbp-7Dh] BYREF
  char v219; // [rsp+B4h] [rbp-7Ch]
  BOOLEAN DominatesTrust[3]; // [rsp+B5h] [rbp-7Bh] BYREF
  PVOID Object; // [rsp+B8h] [rbp-78h]
  char v222; // [rsp+C0h] [rbp-70h]
  char v223; // [rsp+C1h] [rbp-6Fh]
  char v224; // [rsp+C2h] [rbp-6Eh]
  PSECURITY_SUBJECT_CONTEXT SubjectContexta; // [rsp+C8h] [rbp-68h]
  int v226; // [rsp+D0h] [rbp-60h]
  __int64 v227; // [rsp+D8h] [rbp-58h]
  char v228[4]; // [rsp+E0h] [rbp-50h] BYREF
  int v229; // [rsp+E4h] [rbp-4Ch]
  unsigned int v230; // [rsp+E8h] [rbp-48h]
  int v231; // [rsp+ECh] [rbp-44h]
  PVOID P; // [rsp+F0h] [rbp-40h] BYREF
  int v233; // [rsp+F8h] [rbp-38h]
  int v234; // [rsp+FCh] [rbp-34h] BYREF
  int v235; // [rsp+100h] [rbp-30h]
  __int64 v236; // [rsp+108h] [rbp-28h]
  int v237; // [rsp+110h] [rbp-20h] BYREF
  int v238; // [rsp+114h] [rbp-1Ch]
  __int64 v239; // [rsp+118h] [rbp-18h]
  __int64 v240; // [rsp+120h] [rbp-10h]
  int v241; // [rsp+128h] [rbp-8h] BYREF
  int v242; // [rsp+12Ch] [rbp-4h]
  int v243; // [rsp+130h] [rbp+0h] BYREF
  int v244; // [rsp+134h] [rbp+4h]
  __int128 v245; // [rsp+138h] [rbp+8h] BYREF
  int v246; // [rsp+148h] [rbp+18h] BYREF
  int v247; // [rsp+150h] [rbp+20h] BYREF
  _OWORD SecurityDescriptor[2]; // [rsp+158h] [rbp+28h] BYREF
  __int64 v249; // [rsp+178h] [rbp+48h]
  _OWORD v250[2]; // [rsp+180h] [rbp+50h] BYREF
  __int64 v251; // [rsp+1A0h] [rbp+70h]
  _OWORD v252[2]; // [rsp+1A8h] [rbp+78h] BYREF
  __int128 v253; // [rsp+1C8h] [rbp+98h] BYREF
  __int128 v254; // [rsp+1D8h] [rbp+A8h]
  __int128 v255; // [rsp+1E8h] [rbp+B8h]
  _BYTE v256[128]; // [rsp+200h] [rbp+D0h] BYREF
  _BYTE v257[128]; // [rsp+280h] [rbp+150h] BYREF
  _BYTE v258[128]; // [rsp+300h] [rbp+1D0h] BYREF

  v236 = a3;
  v7 = 0;
  SubjectContexta = SubjectContext;
  v239 = 0LL;
  v249 = 0LL;
  v251 = 0LL;
  v241 = 0;
  v245 = 0LL;
  v246 = 0;
  memset(v252, 0, 28);
  v227 = 0LL;
  memset(SecurityDescriptor, 0, sizeof(SecurityDescriptor));
  v219 = 0;
  P = 0LL;
  memset(v250, 0, sizeof(v250));
  v237 = 0;
  v217 = 0;
  v228[0] = 0;
  memset_0(v256, 0, sizeof(v256));
  memset_0(v257, 0, sizeof(v257));
  memset_0(v258, 0, sizeof(v258));
  v222 = 0;
  v11 = -1;
  v247 = -1;
  v223 = 0;
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
  v234 = 0;
  v243 = -1073741790;
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
    v103 = *(_DWORD *)(a3 + 16);
    if ( (v103 & 0x2000000) != 0 )
    {
      **(_DWORD **)(a4 + 8) = *(_DWORD *)(*(_QWORD *)(a3 + 32) + 12LL);
      **(_DWORD **)(a4 + 8) |= *(_DWORD *)(a3 + 16) & 0xFDFFFFFF;
      **(_DWORD **)(a4 + 8) |= *(_DWORD *)(a3 + 20);
    }
    else
    {
      **(_DWORD **)(a4 + 8) = *(_DWORD *)(a3 + 20) | v103;
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
    v91 = *(_DWORD *)(a3 + 20);
    if ( v91 )
    {
      **(_DWORD **)(a4 + 8) = v91;
      **(_DWORD **)(a4 + 16) = 0;
      v120 = *(_QWORD **)(a4 + 32);
      if ( v120 )
        *v120 = 0LL;
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
  v218 = 0;
  DominatesTrust[0] = 0;
  TrustLabelAce = SeGetTrustLabelAce(*(_QWORD *)(v23 + 8));
  if ( TrustLabelAce )
  {
    v26 = *(_DWORD *)(TrustLabelAce + 4);
    v27 = (void *)(TrustLabelAce + 8);
    if ( TrustLabelAce != -8 )
    {
      v107 = SubjectContexta;
      if ( SubjectContexta->ClientToken )
      {
        PrimaryToken = (PSID *)SubjectContexta->PrimaryToken;
        Object = (PVOID)*((_QWORD *)SubjectContexta->ClientToken + 138);
        v24 = RtlSidDominatesForTrust(PrimaryToken[138], Object, DominatesTrust);
        if ( v24 < 0 )
          goto LABEL_27;
        if ( DominatesTrust[0] )
        {
          v109 = Object;
          goto LABEL_163;
        }
        v107 = SubjectContexta;
      }
      v109 = (PVOID)*((_QWORD *)v107->PrimaryToken + 138);
LABEL_163:
      v24 = RtlSidDominatesForTrust(v109, v27, &v218);
      if ( v24 >= 0 && !v218 )
        v11 = v26 | 0x1000000;
    }
  }
LABEL_27:
  **(_DWORD **)(a4 + 16) = v24;
  v28 = *(_QWORD *)(a4 + 16);
  if ( *(int *)v28 < 0 )
    goto LABEL_78;
  v29 = v236;
  v30 = 0;
  v31 = SubjectContexta;
  if ( (v11 & *(_DWORD *)(v236 + 16) & 0xFDFFFFFF) != (*(_DWORD *)(v236 + 16) & 0xFDFFFFFF) )
    v30 = -1073741790;
  *(_DWORD *)v28 = v30;
  v32 = *(int **)(a4 + 16);
  ClientToken = v31->ClientToken;
  Object = v31->ClientToken;
  if ( *v32 < 0 )
  {
    if ( !ClientToken )
      ClientToken = v31->PrimaryToken;
    v134 = *(_DWORD *)(v29 + 16) | *(_DWORD *)(v29 + 20);
    v135 = *(_QWORD *)(v29 + 8);
    SepLocateTokenTrustLevel(v31);
    SeLogAccessFailure(ClientToken, *(_QWORD *)(v135 + 8), v134, 0);
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
  v34 = *(_QWORD *)(v29 + 8);
  if ( (*(_DWORD *)(v34 + 4) & 4) == 0 )
  {
    **(_DWORD **)(a4 + 16) = SepFilterCheck(*(_QWORD *)(v34 + 8), &P, (__int64)ClientToken, 0, (__int64)&v247);
    v28 = *(_QWORD *)(a4 + 16);
    if ( *(int *)v28 < 0 )
      goto LABEL_78;
    v70 = v247;
    v71 = -1073741790;
    if ( (v247 & *(_DWORD *)(v29 + 16) & 0xFDFFFFFF) == (*(_DWORD *)(v29 + 16) & 0xFDFFFFFF) )
      v71 = 0;
    *(_DWORD *)v28 = v71;
    if ( **(int **)(a4 + 16) < 0 )
    {
      SeLogAccessFailure(
        Object,
        *(_QWORD *)(*(_QWORD *)(v29 + 8) + 8LL),
        *(_BYTE *)(v29 + 16) | *(_BYTE *)(v29 + 20),
        0);
      if ( !a2 )
        SeUnlockSubjectContext(SubjectContexta);
      AuthzBasepSetAccessReasons(v19 & v70, 10485760, 0, *(_QWORD *)(a4 + 24), 0);
      return 0;
    }
    v31 = SubjectContexta;
  }
  v35 = *(_QWORD *)(v29 + 8);
  v36 = (__int64)Object;
  v37 = *(_DWORD *)(v35 + 4);
  v38 = v37 & 1;
  if ( (v37 & 2) != 0 )
  {
    v28 = 1LL;
    if ( (*((_DWORD *)Object + 50) & 0x2000) != 0 )
    {
      v39 = 1;
      goto LABEL_37;
    }
  }
  else
  {
    LOBYTE(v28) = 0;
  }
  v39 = 0;
LABEL_37:
  v224 = v39;
  if ( !SepAllowAccessUponLogoff && (*((_DWORD *)Object + 50) & 0x20) == 0 )
  {
    v121 = *((_QWORD *)Object + 27);
    if ( v121 )
    {
      if ( (*(_DWORD *)(v121 + 32) & 0x20) != 0 )
      {
        **(_DWORD **)(a4 + 8) = 0;
        **(_DWORD **)(a4 + 16) = -1073741790;
        if ( !a2 )
          SeUnlockSubjectContext(v31);
        return 0;
      }
    }
  }
  LOBYTE(v235) = 0;
  if ( v39 )
    goto LABEL_39;
  **(_DWORD **)(a4 + 16) = SepMandatoryIntegrityCheck(
                             *(_DWORD **)(v29 + 32),
                             *(_QWORD *)(v35 + 8),
                             v28,
                             (__int64)Object,
                             0,
                             (__int64)&v245);
  v72 = *(int **)(a4 + 16);
  if ( *v72 < 0 )
  {
LABEL_78:
    if ( !a2 )
      SeUnlockSubjectContext(SubjectContexta);
    return 0;
  }
  v73 = *(_DWORD *)(v29 + 16);
  v74 = v245;
  v75 = v73 & 0xFDFFFFFF;
  if ( DWORD2(v245) )
  {
    v28 = 3221225506LL;
    if ( ((unsigned int)v245 & v75) == v75 )
      v28 = 0LL;
  }
  else
  {
    v28 = 0LL;
  }
  *v72 = v28;
  v40 = Object;
  if ( **(int **)(a4 + 16) < 0 )
  {
    if ( (*((_DWORD *)Object + 50) & 0x4000) == 0 || HIDWORD(v245) > 0x2000 )
    {
      if ( !a2 )
        SeUnlockSubjectContext(SubjectContexta);
      v118 = *(_QWORD *)(a4 + 24);
      v119 = v19 & ~v74;
      if ( v118 )
      {
        while ( v16 )
        {
          if ( (v16 & v119) != 0 && !*(_DWORD *)(v118 + 4LL * v7) )
            *(_DWORD *)(v118 + 4LL * v7) = 3145728;
          ++v7;
          v16 *= 2;
        }
      }
      return 0;
    }
    v29 = v236;
    LOBYTE(v235) = 1;
  }
  else
  {
    v29 = v236;
    if ( (*(_DWORD *)(v236 + 16) & 0x2000000) != 0 && (*((_DWORD *)Object + 50) & 0x4000) != 0 )
    {
      v76 = (unsigned __int8)v235;
      if ( HIDWORD(v245) <= 0x2000 )
        v76 = 1;
      v235 = v76;
LABEL_39:
      v40 = Object;
    }
  }
  if ( !SepRmEnforceCap )
  {
LABEL_41:
    LOBYTE(v36) = 0;
    goto LABEL_42;
  }
  v122 = *(_QWORD *)(*(_QWORD *)(v29 + 8) + 8LL);
  v123 = *(unsigned __int16 *)(v122 + 2);
  if ( (v123 & 0x10) == 0 || KeGetCurrentIrql() >= 2u )
  {
LABEL_260:
    v40 = Object;
    goto LABEL_41;
  }
  if ( (v123 & 0x8000u) == 0LL )
  {
    v136 = *(_QWORD *)(v122 + 24);
  }
  else
  {
    v124 = *(unsigned int *)(v122 + 12);
    if ( !(_DWORD)v124 )
    {
      v239 = 0LL;
      goto LABEL_260;
    }
    v136 = v122 + v124;
  }
  v239 = v136;
  if ( !v136 )
    goto LABEL_260;
  ScopedPolicySid = (void *)SepGetScopedPolicySid(v136, v123, v28, v36);
  if ( !ScopedPolicySid )
    goto LABEL_260;
  Cap = SepRmReferenceFindCap(ScopedPolicySid);
  v139 = v227;
  v40 = Object;
  v36 = 1LL;
  if ( Cap < 0 )
    v139 = SepRmDefaultCap;
  v227 = v139;
  v219 = 1;
LABEL_42:
  if ( v38 && (*(_DWORD *)(v29 + 16) & 0x2060000) == 0 && !(_BYTE)v36 )
  {
    v44 = 0;
    v42 = *(_DWORD *)(v29 + 16);
    v216 = 0;
    goto LABEL_45;
  }
  IsOwner = SepTokenIsOwner(v40, *(_QWORD *)(*(_QWORD *)(v29 + 8) + 8LL), v28, v36);
  v42 = *(_DWORD *)(v29 + 16);
  v43 = IsOwner;
  v216 = IsOwner;
  v44 = IsOwner;
  if ( !IsOwner || (v216 = IsOwner, (v42 & 0x2060000) == 0) )
  {
    LOBYTE(v36) = v219;
LABEL_45:
    v45 = v236;
    goto LABEL_46;
  }
  v113 = v38 == 0;
  v45 = v236;
  if ( !v113 )
    goto LABEL_106;
  v216 = IsOwner;
  v77 = *(_QWORD *)(*(_QWORD *)(v236 + 8) + 8LL);
  v78 = *(_WORD *)(v77 + 2);
  if ( (v78 & 4) != 0 )
  {
    if ( v78 >= 0 )
    {
      v79 = *(_QWORD *)(v77 + 32);
      v216 = v43;
    }
    else
    {
      v90 = *(unsigned int *)(v77 + 16);
      v79 = 0LL;
      if ( (_DWORD)v90 )
        v79 = v77 + v90;
    }
  }
  else
  {
    v79 = 0LL;
  }
  v80 = RtlpOwnerAcesPresent(0LL, v79);
  v44 = v216;
  if ( v80 )
  {
    LOBYTE(v36) = v219;
  }
  else
  {
LABEL_106:
    v81 = *(_DWORD *)(v45 + 16);
    v82 = *(_DWORD *)(v45 + 20);
    v216 = v44;
    if ( (v81 & 0x2000000) != 0 )
    {
      v42 = 393216;
      v83 = 393216;
      *(_DWORD *)(v45 + 20) = v82 | 0x60000;
    }
    else
    {
      v42 = v81 & 0x60000;
      v216 = v44;
      *(_DWORD *)(v45 + 20) = v82 | v42;
      v83 = v19 & 0x60000;
    }
    v84 = *(_QWORD *)(a4 + 24);
    v85 = 1;
    v86 = 0;
    if ( v84 )
    {
      while ( v85 )
      {
        if ( (v85 & v83) != 0 && !*(_DWORD *)(v84 + 4LL * v86) )
          *(_DWORD *)(v84 + 4LL * v86) = 0x400000;
        ++v86;
        v85 *= 2;
      }
    }
    *(_DWORD *)(v45 + 16) &= 0xFFF9FFFF;
    LOBYTE(v36) = v219;
    if ( !v219 )
    {
      v44 = 0;
      v216 = 0;
    }
  }
LABEL_46:
  v46 = *(_DWORD *)(v45 + 16);
  if ( !v46 && !(_BYTE)v36 && ((*((_DWORD *)Object + 50) & 0x2000) != 0 || !v42) )
  {
    if ( !a2 )
      SeUnlockSubjectContext(SubjectContexta);
    **(_DWORD **)(a4 + 8) = *(_DWORD *)(v45 + 20);
    **(_DWORD **)(a4 + 16) = 0;
    return 1;
  }
  v47 = *(_QWORD *)(v45 + 8);
  v214 = v44;
  v212 = *(_QWORD *)(a4 + 24);
  v211 = *(_QWORD *)(a4 + 16);
  v210 = *(_QWORD *)(a4 + 32);
  v209 = *(_QWORD *)(a4 + 8);
  v208 = *(_DWORD *)(v45 + 20);
  v205 = *(_QWORD *)(v45 + 32);
  memset((char *)v252 + 4, 0, 24);
  v48 = SubjectContexta->ClientToken;
  v49 = SubjectContexta->PrimaryToken;
  LODWORD(v252[0]) = v42;
  v50 = SepAccessCheckEx(
          *(_QWORD *)(v47 + 8),
          0,
          (_DWORD)v49,
          (_DWORD)v48,
          v46,
          0LL,
          0,
          v205,
          v208,
          a6,
          v209,
          v210,
          v211,
          v212,
          0,
          v214,
          a7,
          (__int64)v252,
          (__int64)&P,
          (__int64)&v217);
  v54 = v50;
  v55 = v227;
  DominatesTrust[0] = v50;
  if ( !SepRmEnforceCap )
    goto LABEL_48;
  v92 = **(_DWORD **)(a4 + 16);
  v242 = v92;
  if ( v92 < 0 || !v219 )
  {
    v54 = v50;
LABEL_48:
    if ( v224 || (*(_DWORD *)(v45 + 16) & 0x2000000) == 0 )
    {
      v56 = Object;
      if ( (_BYTE)v235 && !*(_WORD *)((char *)&v252[1] + 5) )
      {
        if ( (*((_DWORD *)Object + 50) & 0x3000000) != 0x3000000 || HIDWORD(v252[0]) )
        {
          v116 = 1;
          v51 = 0LL;
          **(_DWORD **)(a4 + 16) = -1073741790;
          **(_DWORD **)(a4 + 8) = 0;
          v117 = *(_DWORD **)(a4 + 8);
          v53 = *(_QWORD *)(a4 + 24);
          v217 = 0;
          v52 = (unsigned int)~*v117;
          if ( v53 )
          {
            while ( v116 )
            {
              if ( (v116 & (unsigned int)v52) != 0 && !*(_DWORD *)(v53 + 4LL * (unsigned int)v51) )
                *(_DWORD *)(v53 + 4LL * (unsigned int)v51) = 3145728;
              v51 = (unsigned int)(v51 + 1);
              v116 *= 2;
            }
          }
        }
        else
        {
          v132 = *(_DWORD **)(a4 + 16);
          BYTE7(v252[1]) = 1;
          *v132 = 0;
          **(_DWORD **)(a4 + 8) = *(_DWORD *)(v45 + 16);
          v217 = 1;
        }
      }
    }
    else
    {
      v87 = *(_DWORD **)(a4 + 8);
      v51 = (unsigned int)*v87;
      if ( !(_BYTE)v235 || !*(_WORD *)((char *)&v252[1] + 5) && (*((_DWORD *)Object + 50) & 0x3000000) != 0x3000000 )
      {
        v88 = *(int **)(a4 + 16);
        if ( DWORD2(v245) && (!BYTE4(v245) || !BYTE6(v245) || !BYTE5(v245)) )
        {
          v114 = v51 & v245;
          if ( ((unsigned int)v51 & (unsigned int)v245) != (_DWORD)v51 )
          {
            *v87 = v114;
            v115 = -1073741790;
            if ( v114 )
              v115 = 0;
            *v88 = v115;
            v217 = v114 != 0;
          }
        }
        v89 = 1;
        v53 = *(_QWORD *)(a4 + 24);
        v52 = (unsigned int)v51 & ~**(_DWORD **)(a4 + 8);
        v51 = 0LL;
        if ( v53 )
        {
          while ( v89 )
          {
            if ( (v89 & (unsigned int)v52) != 0 && !*(_DWORD *)(v53 + 4LL * (unsigned int)v51) )
              *(_DWORD *)(v53 + 4LL * (unsigned int)v51) = 3145728;
            v51 = (unsigned int)(v51 + 1);
            v89 *= 2;
          }
        }
      }
      v56 = Object;
    }
    if ( (*(_DWORD *)(v45 + 16) & 0x2000000) != 0 )
    {
      v57 = *(int **)(a4 + 8);
      v58 = *(_DWORD **)(a4 + 16);
      v222 = 0;
      v59 = *v57;
      if ( v11 == -1 )
      {
        v60 = -1073741790;
      }
      else
      {
        v111 = v11 & v59;
        v60 = -1073741790;
        if ( v111 != v59 )
        {
          v222 = 1;
          *v57 = v111;
          if ( v111 )
          {
            *v58 = 0;
            v217 = 1;
          }
          else
          {
            *v58 = -1073741790;
            v217 = 0;
          }
        }
      }
      v61 = 0;
      v62 = *(_QWORD *)(a4 + 24);
      v63 = v59 & ~**(_DWORD **)(a4 + 8);
      v64 = 1;
      if ( v62 )
      {
        while ( v64 )
        {
          if ( (v64 & v63) != 0 && !*(_DWORD *)(v62 + 4LL * v61) )
            *(_DWORD *)(v62 + 4LL * v61) = 9437184;
          ++v61;
          v64 *= 2;
        }
      }
      v65 = *(_DWORD **)(a4 + 8);
      v66 = *(int **)(a4 + 16);
      v53 = *(unsigned int *)(v45 + 16);
      v52 = (unsigned int)*v65;
      v223 = 0;
      if ( v247 != -1 )
      {
        v112 = v247 & v52;
        if ( (v247 & (unsigned int)v52) != (_DWORD)v52 )
        {
          v223 = 1;
          *v65 = v112;
          if ( (v53 & 0x2000000) != 0 )
          {
            v113 = v112 == 0;
            if ( v112 )
              v60 = 0;
            *v66 = v60;
          }
          else
          {
            *v66 = -1073741790;
            v113 = *v65 == 0;
          }
          v217 = !v113;
        }
      }
      v51 = *(_QWORD *)(a4 + 24);
      v67 = v52 & ~**(_DWORD **)(a4 + 8);
      if ( v51 )
      {
        while ( v16 )
        {
          if ( (v16 & v67) != 0 && !*(_DWORD *)(v51 + 4LL * v7) )
            *(_DWORD *)(v51 + 4LL * v7) = 10485760;
          ++v7;
          v16 *= 2;
        }
      }
    }
    if ( v56 )
    {
      if ( v222
        || v223
        || (v68 = HIDWORD(v252[0])) == 0 && (v56[50] & 0x4000) != 0 && (**(int **)(a4 + 16) < 0 || BYTE7(v252[1])) )
      {
        v104 = *(_DWORD *)(v45 + 16) | *(_DWORD *)(v45 + 20);
        v105 = *(_QWORD *)(v45 + 8);
        v106 = **(_DWORD **)(a4 + 16) >= 0;
        SepLocateTokenTrustLevel(SubjectContexta);
        SeLogAccessFailure(v56, *(_QWORD *)(v105 + 8), v104, v106);
        v68 = HIDWORD(v252[0]);
        v55 = v227;
      }
      if ( **(int **)(a4 + 16) < 0 && !v68 && (v56[50] & 0x4000) != 0 )
      {
        if ( BYTE8(v252[1]) )
        {
          v110 = *(_DWORD *)(v45 + 16) & ~(DWORD1(v252[0]) | DWORD2(v252[0]) | 0x2000000u);
          if ( ((unsigned int)v110 & v252[1]) == (_DWORD)v110 )
          {
            SepLogLpacAccessFailure(v110, v51, v52);
            v55 = v227;
          }
        }
      }
    }
    if ( v219 )
    {
      v133 = *(_QWORD *)(v55 + 32);
      if ( v133 )
        SepRmDereferenceCapTable(v133, v51, v52, v53);
    }
    if ( !a2 )
      SeUnlockSubjectContext(SubjectContexta);
    SepFreeResourceInfo((char *)P);
    return v54 && v217;
  }
  v93 = *(int **)(a4 + 8);
  Pool2 = 0LL;
  LOBYTE(v231) = 0;
  v95 = *v93;
  v96 = 0;
  v238 = v95;
  v229 = v95;
  v97 = *(unsigned int ***)(a4 + 32);
  v233 = 0;
  if ( v97 )
  {
    v125 = *v97;
    if ( *v97 )
    {
      v126 = *v125;
      if ( *v125 )
      {
        v127 = v125 + 3;
        v128 = v126;
        do
        {
          if ( (int)v127[1] < 0 )
          {
            if ( *(v127 - 1) == SeSecurityPrivilege.LowPart && *v127 == SeSecurityPrivilege.HighPart )
            {
              v96 |= 0x1000000u;
            }
            else if ( *(_QWORD *)(v127 - 1) == SeTakeOwnershipPrivilege || *(_QWORD *)(v127 - 1) == SeRelabelPrivilege )
            {
              v96 |= 0x80000u;
            }
          }
          v127 += 3;
          --v128;
        }
        while ( v128 );
        v233 = v96;
      }
    }
  }
  v244 = **(_DWORD **)(a4 + 8);
  v98 = SepAdtAuditThisEventWithContext(130LL, 1LL, 1LL, SubjectContexta);
  v218 = v98;
  if ( v98 )
  {
    Pool2 = (char *)ExAllocatePool2(0x40uLL);
    if ( !Pool2 )
    {
      if ( !a2 )
        SeUnlockSubjectContext(SubjectContexta);
      v102 = *(_QWORD *)(v227 + 32);
      if ( v102 )
        SepRmDereferenceCapTable(v102, v99, v100, v101);
      **(_DWORD **)(a4 + 8) = 0;
      **(_DWORD **)(a4 + 16) = -1073741801;
      SepFreeResourceInfo((char *)P);
      return 0;
    }
    memset_0(Pool2, 0, 8LL * *(unsigned int *)(v227 + 60));
    v98 = v218;
  }
  v129 = v229;
  v130 = 0;
  v131 = Object;
  while ( 1 )
  {
    v230 = v130;
    v140 = *(_DWORD *)(v227 + 60);
    LODWORD(v240) = v140;
    if ( v130 >= v140 )
    {
      if ( v98 )
      {
        if ( v129 != v238 )
        {
          v197 = v129 & (v238 ^ v129);
          v198 = v238 & (v238 ^ v129);
          v231 = v198;
          if ( v140 )
          {
            v199 = (__int64)Pool2;
            v200 = 0;
            v239 = (__int64)Pool2;
            do
            {
              if ( !v197 && !v198 )
                break;
              if ( *(_BYTE *)(v199 + 4) )
              {
                v201 = *(_DWORD *)v199;
                v202 = v198 & (v198 ^ *(_DWORD *)v199);
                if ( v202 )
                {
                  AuthzBasepSetAccessReasons(v202, 0x80000000, v200 << 24, (unsigned int)v257, 0);
                  v198 = v231;
                }
                v231 = ~v202 & v198;
                v203 = v197 & v201;
                if ( v203 )
                  AuthzBasepSetAccessReasons(v203, 0x80000000, v200 << 24, (unsigned int)v257, 0);
                v197 &= ~v203;
                AuthzBasepMergeAccessReasons(v256, v257, 4278190080LL);
                v198 = v231;
                v199 = v239;
                v140 = v240;
              }
              v199 += 8LL;
              ++v200;
              v239 = v199;
            }
            while ( v200 < v140 );
            v92 = v242;
          }
        }
      }
      if ( Pool2 )
        ExFreePoolWithTag(Pool2, 0);
      v204 = v238;
      **(_DWORD **)(a4 + 16) = v92;
      **(_DWORD **)(a4 + 8) &= v204;
      if ( **(int **)(a4 + 16) < 0 )
        v217 = 0;
      AuthzBasepMergeAccessReasons(*(_QWORD *)(a4 + 24), v256, 0LL);
      AuthzBasepMergeAccessReasons(*(_QWORD *)(a4 + 24), v256, 4278190080LL);
      v55 = v227;
      v45 = v236;
      v54 = DominatesTrust[0];
      goto LABEL_48;
    }
    v253 = 0LL;
    v254 = 0LL;
    v255 = 0LL;
    v141 = *(_QWORD *)(v227 + 8LL * v130 + 64);
    v240 = v141;
    if ( !*(_QWORD *)(v141 + 24) )
      goto LABEL_290;
    v142 = P;
    if ( !P )
    {
      v143 = AuthzBasepInitializeResourceClaimsFromSacl(v239, (__int64 *)&P);
      v141 = v240;
      v131 = Object;
      v144 = (unsigned __int8)v231;
      if ( v143 < 0 )
        v144 = 1;
      v231 = v144;
      v142 = P;
    }
    v145 = (_QWORD *)v131[137];
    if ( v145 )
    {
      v146 = (void *)v145[72];
      v147 = (void *)v145[74];
      v148 = (void *)v145[73];
      v149 = (void *)v145[75];
    }
    else
    {
      v146 = 0LL;
      v147 = 0LL;
      v148 = 0LL;
      v149 = 0LL;
    }
    v150 = AuthzBasepEvaluateAceCondition(
             Object,
             *((void **)Object + 97),
             v142,
             v146,
             v147,
             v148,
             v149,
             *(_DWORD **)(v141 + 24),
             *(_DWORD *)(v141 + 16),
             1u,
             0,
             &v237);
    v154 = v237;
    v226 = v150;
    if ( v237 == 1 )
      goto LABEL_290;
    if ( v150 < 0 )
    {
      if ( !a2 )
        SeUnlockSubjectContext(SubjectContexta);
      v192 = *(_QWORD *)(v227 + 32);
      if ( v192 )
        SepRmDereferenceCapTable(v192, v151, v152, v153);
      v193 = v226;
      **(_DWORD **)(a4 + 8) = 0;
      **(_DWORD **)(a4 + 16) = v193;
      SepFreeResourceInfo((char *)P);
      if ( Pool2 )
        goto LABEL_339;
      return 0;
    }
    v131 = Object;
    if ( (*((_DWORD *)Object + 50) & 0x10) != 0 )
      break;
LABEL_287:
    if ( !(_BYTE)v231 && v154 != 1 )
    {
      v98 = v218;
      v129 = v229;
      v163 = v230;
      goto LABEL_315;
    }
LABEL_290:
    v167 = SepBuildCapeSecurityDescriptor(SecurityDescriptor);
    if ( v167 < 0 )
    {
      if ( !a2 )
        SeUnlockSubjectContext(SubjectContexta);
      v196 = *(_QWORD *)(v227 + 32);
      if ( v196 )
        SepRmDereferenceCapTable(v196, v164, v165, v166);
      **(_DWORD **)(a4 + 8) = 0;
      **(_DWORD **)(a4 + 16) = v167;
      SepFreeResourceInfo((char *)P);
      if ( !Pool2 )
        return 0;
      goto LABEL_339;
    }
    v168 = *(_DWORD *)(v236 + 16);
    if ( (*(_DWORD *)(v240 + 48) & 1) != 0 )
    {
      if ( (v168 & 0x2000000) == 0 )
        v168 |= *(_DWORD *)(v236 + 20);
      v169 = 0;
    }
    else
    {
      v169 = *(_DWORD *)(v236 + 20);
    }
    LOBYTE(v213) = 0;
    v206 = *(_QWORD *)(v236 + 32);
    v253 = 0LL;
    v170 = SubjectContexta->ClientToken;
    v171 = SubjectContexta->PrimaryToken;
    v254 = 0LL;
    v255 = 0LL;
    v172 = SepAccessCheckEx(
             (unsigned int)SecurityDescriptor,
             0,
             (_DWORD)v171,
             (_DWORD)v170,
             v168 | 0x2000000u,
             (__int64)&v253,
             1,
             v206,
             v169,
             a6,
             (__int64)&v234,
             0LL,
             (__int64)&v243,
             (__int64)v258,
             v213,
             v216,
             a7,
             (__int64)v252,
             (__int64)&P,
             (__int64)&v217);
    v173 = v233;
    v174 = v233 | HIDWORD(v254);
    DominatesTrust[0] = v172;
    v175 = v234 & (**(_DWORD **)(a4 + 8) | v169);
    v234 = v175;
    if ( v216 )
      v174 |= v175 & 0x60000;
    v176 = v230;
    v177 = ~(_DWORD)v255 & v174;
    v113 = (v175 & v238) == 0;
    v238 &= v175;
    v92 = v243;
    if ( v113 )
      v92 = -1073741790;
    v226 = v177;
    v242 = v92;
    v178 = v244 & (v244 ^ v177);
    if ( v178 )
    {
      AuthzBasepSetAccessReasons(v178, 327680, v230, (unsigned int)v256, 0);
      v173 = v233;
      v244 = v226 & v179;
    }
    v98 = v218;
    if ( v218 )
    {
      if ( *(_QWORD *)(v240 + 40) )
      {
        v226 = SepBuildCapeSecurityDescriptor(v250);
        if ( v226 >= 0 )
        {
          v183 = *(_DWORD *)(v236 + 16);
          if ( (*(_DWORD *)(v240 + 48) & 0x100) != 0 )
          {
            if ( (v183 & 0x2000000) == 0 )
              v183 |= *(_DWORD *)(v236 + 20);
            v184 = 0;
          }
          else
          {
            v184 = *(_DWORD *)(v236 + 20);
          }
          LOBYTE(v213) = 0;
          v207 = *(_QWORD *)(v236 + 32);
          v185 = SubjectContexta->ClientToken;
          v186 = SubjectContexta->PrimaryToken;
          v253 = 0LL;
          v254 = 0LL;
          v255 = 0LL;
          SepAccessCheckEx(
            (unsigned int)v250,
            0,
            (_DWORD)v186,
            (_DWORD)v185,
            v183,
            0LL,
            0,
            v207,
            v184,
            a6,
            (__int64)&v241,
            0LL,
            (__int64)&v246,
            (__int64)v258,
            v213,
            v216,
            a7,
            (__int64)v252,
            (__int64)&P,
            (__int64)v228);
          v163 = v230;
          v187 = v233;
          v188 = &Pool2[8 * v230];
          v188[4] = 1;
          *(_DWORD *)v188 = v241 | v187;
          v129 = v241 & v229;
          v98 = v218;
          v229 &= v241;
          goto LABEL_314;
        }
        if ( !a2 )
          SeUnlockSubjectContext(SubjectContexta);
        v194 = *(_QWORD *)(v227 + 32);
        if ( v194 )
          SepRmDereferenceCapTable(v194, v180, v181, v182);
        v195 = v226;
        **(_DWORD **)(a4 + 8) = 0;
        **(_DWORD **)(a4 + 16) = v195;
        SepFreeResourceInfo((char *)P);
        if ( !Pool2 )
          return 0;
LABEL_339:
        ExFreePoolWithTag(Pool2, 0);
        return 0;
      }
      v189 = &Pool2[8 * v176];
      v98 = v218;
      v189[4] = 1;
      *(_DWORD *)v189 = v234 | v173;
      v129 = v234 & v229;
      v229 &= v234;
    }
    else
    {
      v129 = v229;
    }
    v163 = v230;
LABEL_314:
    v131 = Object;
LABEL_315:
    v130 = v163 + 1;
  }
  v155 = (_QWORD *)*((_QWORD *)Object + 137);
  if ( v155 )
  {
    v156 = (void *)v155[72];
    v157 = (void *)v155[74];
    v158 = (void *)v155[73];
    v159 = (void *)v155[75];
  }
  else
  {
    v156 = 0LL;
    v157 = 0LL;
    v158 = 0LL;
    v159 = 0LL;
  }
  v226 = AuthzBasepEvaluateAceCondition(
           Object,
           *((void **)Object + 97),
           P,
           v156,
           v157,
           v158,
           v159,
           *(_DWORD **)(v240 + 24),
           *(_DWORD *)(v240 + 16),
           1u,
           1u,
           &v237);
  if ( v226 >= 0 )
  {
    v154 = v237;
    v131 = Object;
    goto LABEL_287;
  }
  if ( !a2 )
    SeUnlockSubjectContext(SubjectContexta);
  v190 = *(_QWORD *)(v227 + 32);
  if ( v190 )
    SepRmDereferenceCapTable(v190, v160, v161, v162);
  v191 = v226;
  **(_DWORD **)(a4 + 8) = 0;
  **(_DWORD **)(a4 + 16) = v191;
  SepFreeResourceInfo((char *)P);
  if ( Pool2 )
    goto LABEL_339;
  return 0;
}
