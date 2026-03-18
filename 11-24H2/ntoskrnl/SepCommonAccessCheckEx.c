/*
 * XREFs of SepCommonAccessCheckEx @ 0x140360470
 * Callers:
 *     SeSrpAccessCheck @ 0x140360410 (SeSrpAccessCheck.c)
 *     SeAccessCheckEx @ 0x140360440 (SeAccessCheckEx.c)
 * Callees:
 *     SepMandatoryIntegrityCheck @ 0x140259F30 (SepMandatoryIntegrityCheck.c)
 *     SepLogLpacAccessFailure @ 0x14027BEC4 (SepLogLpacAccessFailure.c)
 *     AuthzBasepEvaluateAceCondition @ 0x1403450F0 (AuthzBasepEvaluateAceCondition.c)
 *     SepLocateTokenTrustLevel @ 0x1403581B0 (SepLocateTokenTrustLevel.c)
 *     RtlSidDominatesForTrust @ 0x140359950 (RtlSidDominatesForTrust.c)
 *     SepFilterCheck @ 0x14035B6A0 (SepFilterCheck.c)
 *     SeLogAccessFailure @ 0x14035F070 (SeLogAccessFailure.c)
 *     SeGetTrustLabelAce @ 0x1403613D0 (SeGetTrustLabelAce.c)
 *     SepTokenIsOwner @ 0x140361440 (SepTokenIsOwner.c)
 *     SepAccessCheckEx @ 0x140361710 (SepAccessCheckEx.c)
 *     SepFreeResourceInfo @ 0x1403620C0 (SepFreeResourceInfo.c)
 *     RtlpOwnerAcesPresent @ 0x140362230 (RtlpOwnerAcesPresent.c)
 *     AuthzBasepInitializeResourceClaimsFromSacl @ 0x1403642B0 (AuthzBasepInitializeResourceClaimsFromSacl.c)
 *     AuthzBasepSetAccessReasons @ 0x140427320 (AuthzBasepSetAccessReasons.c)
 *     SepGetScopedPolicySid @ 0x140454F4C (SepGetScopedPolicySid.c)
 *     SepRmReferenceFindCap @ 0x140454FA4 (SepRmReferenceFindCap.c)
 *     SepBuildCapeSecurityDescriptor @ 0x1404D060C (SepBuildCapeSecurityDescriptor.c)
 *     SepRmDereferenceCapTable @ 0x1404F5488 (SepRmDereferenceCapTable.c)
 *     AuthzBasepMergeAccessReasons @ 0x140696D18 (AuthzBasepMergeAccessReasons.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     SepAdtAuditThisEventWithContext @ 0x140852C10 (SepAdtAuditThisEventWithContext.c)
 *     SeLockSubjectContext @ 0x140868470 (SeLockSubjectContext.c)
 *     SeUnlockSubjectContext @ 0x1408684D0 (SeUnlockSubjectContext.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
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
  __int64 v28; // r8
  __int64 v29; // r12
  PSECURITY_SUBJECT_CONTEXT v30; // r10
  int v31; // eax
  __int64 v32; // rdx
  int *v33; // rax
  const void ***ClientToken; // r15
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
  __int64 v51; // rdx
  __int64 v52; // r8
  __int64 v53; // r9
  char v54; // r12
  const void ***v55; // r14
  int v56; // r11d
  int *v57; // rax
  _DWORD *v58; // rdx
  int v59; // ecx
  unsigned int v60; // edx
  __int64 v61; // r9
  int v62; // r8d
  int v63; // ecx
  _DWORD *v64; // rax
  int *v65; // rdx
  char v66; // bl
  int v67; // ecx
  int v68; // ecx
  int v70; // r15d
  int v71; // eax
  int *v72; // rcx
  int v73; // edx
  int v74; // r12d
  unsigned int v75; // edx
  int v76; // ecx
  bool v77; // zf
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
  ULONGLONG v108; // rax
  PSECURITY_SUBJECT_CONTEXT v109; // rcx
  _QWORD *PrimaryToken; // rcx
  PVOID v111; // rcx
  int v112; // ecx
  int v113; // r8d
  int v114; // r10d
  int v115; // r9d
  int v116; // eax
  int v117; // ecx
  _DWORD *v118; // rax
  __int64 v119; // rcx
  int v120; // r12d
  _QWORD *v121; // rax
  __int64 v122; // rax
  __int64 v123; // rcx
  __int16 v124; // dx
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
  ULONGLONG TokenTrustLevel; // rax
  char *v138; // rax
  void *ScopedPolicySid; // rax
  int Cap; // eax
  __int64 v141; // rdx
  unsigned int v142; // r8d
  __int64 v143; // r8
  PVOID v144; // rcx
  int v145; // eax
  int v146; // ecx
  _QWORD *v147; // rax
  void *v148; // r9
  __int64 v149; // rdx
  __int64 v150; // r10
  __int64 v151; // r11
  int v152; // eax
  __int64 v153; // rdx
  __int64 v154; // r8
  __int64 v155; // r9
  int v156; // ecx
  _QWORD *v157; // rax
  void *v158; // r9
  __int64 v159; // rdx
  __int64 v160; // r8
  __int64 v161; // r10
  __int64 v162; // rdx
  __int64 v163; // r8
  __int64 v164; // r9
  unsigned int v165; // edx
  __int64 v166; // rdx
  __int64 v167; // r8
  __int64 v168; // r9
  int v169; // r12d
  int v170; // ecx
  int v171; // r12d
  PACCESS_TOKEN v172; // r9
  PACCESS_TOKEN v173; // r8
  char v174; // al
  int v175; // edx
  int v176; // ecx
  int v177; // r12d
  unsigned int v178; // r8d
  int v179; // ecx
  int v180; // ecx
  int v181; // r11d
  __int64 v182; // rdx
  __int64 v183; // r8
  __int64 v184; // r9
  int v185; // ecx
  int v186; // eax
  PACCESS_TOKEN v187; // r9
  PACCESS_TOKEN v188; // r8
  int v189; // eax
  char *v190; // rcx
  char *v191; // rcx
  __int64 v192; // rcx
  int v193; // ecx
  __int64 v194; // rcx
  int v195; // ecx
  __int64 v196; // rcx
  int v197; // ecx
  __int64 v198; // rcx
  int v199; // r14d
  int v200; // edx
  char *v201; // rax
  unsigned int v202; // r12d
  int v203; // r11d
  int v204; // ecx
  int v205; // r11d
  int v206; // ecx
  __int64 v207; // [rsp+38h] [rbp-F8h]
  __int64 v208; // [rsp+38h] [rbp-F8h]
  __int64 v209; // [rsp+38h] [rbp-F8h]
  int v210; // [rsp+40h] [rbp-F0h]
  __int64 v211; // [rsp+50h] [rbp-E0h]
  __int64 v212; // [rsp+58h] [rbp-D8h]
  __int64 v213; // [rsp+60h] [rbp-D0h]
  __int64 v214; // [rsp+68h] [rbp-C8h]
  int v215; // [rsp+70h] [rbp-C0h]
  char v216; // [rsp+78h] [rbp-B8h]
  char v218; // [rsp+B1h] [rbp-7Fh]
  bool v219; // [rsp+B2h] [rbp-7Eh] BYREF
  char v220; // [rsp+B3h] [rbp-7Dh] BYREF
  char v221; // [rsp+B4h] [rbp-7Ch]
  char v222; // [rsp+B5h] [rbp-7Bh] BYREF
  PVOID Object; // [rsp+B8h] [rbp-78h]
  char v224; // [rsp+C0h] [rbp-70h]
  char v225; // [rsp+C1h] [rbp-6Fh]
  PSECURITY_SUBJECT_CONTEXT SubjectContexta; // [rsp+C8h] [rbp-68h]
  int v227; // [rsp+D0h] [rbp-60h]
  char v228[4]; // [rsp+D4h] [rbp-5Ch] BYREF
  int v229; // [rsp+D8h] [rbp-58h]
  unsigned int v230; // [rsp+DCh] [rbp-54h]
  int v231; // [rsp+E0h] [rbp-50h]
  PVOID P; // [rsp+E8h] [rbp-48h] BYREF
  __int64 v233; // [rsp+F0h] [rbp-40h]
  int v234; // [rsp+F8h] [rbp-38h]
  int v235; // [rsp+FCh] [rbp-34h] BYREF
  int v236; // [rsp+100h] [rbp-30h]
  __int64 v237; // [rsp+108h] [rbp-28h]
  int v238; // [rsp+110h] [rbp-20h] BYREF
  int v239; // [rsp+114h] [rbp-1Ch]
  char *v240; // [rsp+118h] [rbp-18h]
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
  v233 = 0LL;
  memset(SecurityDescriptor, 0, sizeof(SecurityDescriptor));
  v221 = 0;
  P = 0LL;
  memset(v251, 0, sizeof(v251));
  v238 = 0;
  v219 = 0;
  v228[0] = 0;
  memset_0(v257, 0, sizeof(v257));
  memset_0(v258, 0, sizeof(v258));
  memset_0(v259, 0, sizeof(v259));
  v224 = 0;
  v11 = -1;
  v248 = -1;
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
    goto LABEL_143;
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
LABEL_143:
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
  v220 = 0;
  v222 = 0;
  TrustLabelAce = SeGetTrustLabelAce(*(_QWORD *)(v23 + 8));
  if ( TrustLabelAce )
  {
    v26 = *(_DWORD *)(TrustLabelAce + 4);
    v27 = TrustLabelAce + 8;
    if ( TrustLabelAce != -8 )
    {
      v109 = SubjectContexta;
      if ( SubjectContexta->ClientToken )
      {
        PrimaryToken = SubjectContexta->PrimaryToken;
        Object = (PVOID)*((_QWORD *)SubjectContexta->ClientToken + 138);
        v24 = RtlSidDominatesForTrust(PrimaryToken[138], (__int64)Object, (bool *)&v222);
        if ( v24 < 0 )
          goto LABEL_27;
        if ( v222 )
        {
          v111 = Object;
          goto LABEL_170;
        }
        v109 = SubjectContexta;
      }
      v111 = (PVOID)*((_QWORD *)v109->PrimaryToken + 138);
LABEL_170:
      v24 = RtlSidDominatesForTrust((__int64)v111, v27, (bool *)&v220);
      if ( v24 >= 0 && !v220 )
        v11 = v26 | 0x1000000;
    }
  }
LABEL_27:
  **(_DWORD **)(a4 + 16) = v24;
  v28 = *(_QWORD *)(a4 + 16);
  if ( *(int *)v28 < 0 )
    goto LABEL_80;
  v29 = v237;
  v30 = SubjectContexta;
  v31 = -1073741790;
  v32 = *(unsigned int *)(v237 + 16);
  LODWORD(v32) = v32 & 0xFDFFFFFF;
  if ( (v11 & (unsigned int)v32) == (_DWORD)v32 )
    v31 = 0;
  *(_DWORD *)v28 = v31;
  v33 = *(int **)(a4 + 16);
  ClientToken = (const void ***)v30->ClientToken;
  Object = v30->ClientToken;
  if ( *v33 < 0 )
  {
    if ( !ClientToken )
      ClientToken = (const void ***)v30->PrimaryToken;
    v135 = *(_DWORD *)(v29 + 16) | *(_DWORD *)(v29 + 20);
    v136 = *(_QWORD *)(v29 + 8);
    TokenTrustLevel = SepLocateTokenTrustLevel(v30, v32);
    SeLogAccessFailure(ClientToken, 0LL, 0LL, TokenTrustLevel, *(_QWORD *)(v136 + 8), v135, 0);
    if ( !a2 )
      SeUnlockSubjectContext(SubjectContexta);
    AuthzBasepSetAccessReasons(v19 & ~v11, 9437184, 0, *(_QWORD *)(a4 + 24), 0);
    return 0;
  }
  if ( !ClientToken )
  {
    ClientToken = (const void ***)v30->PrimaryToken;
    Object = ClientToken;
  }
  v35 = *(_QWORD *)(v29 + 8);
  if ( (*(_DWORD *)(v35 + 4) & 4) == 0 )
  {
    **(_DWORD **)(a4 + 16) = SepFilterCheck(*(_QWORD *)(v35 + 8), &P, (__int64)ClientToken, 0, (__int64)&v248);
    v28 = *(_QWORD *)(a4 + 16);
    if ( *(int *)v28 < 0 )
      goto LABEL_80;
    v70 = v248;
    v71 = -1073741790;
    if ( (v248 & *(_DWORD *)(v29 + 16) & 0xFDFFFFFF) == (*(_DWORD *)(v29 + 16) & 0xFDFFFFFF) )
      v71 = 0;
    *(_DWORD *)v28 = v71;
    if ( **(int **)(a4 + 16) < 0 )
    {
      SeLogAccessFailure(
        (const void ***)Object,
        0LL,
        0LL,
        0LL,
        *(_QWORD *)(*(_QWORD *)(v29 + 8) + 8LL),
        *(_BYTE *)(v29 + 16) | *(_BYTE *)(v29 + 20),
        0);
      if ( !a2 )
        SeUnlockSubjectContext(SubjectContexta);
      AuthzBasepSetAccessReasons(v19 & v70, 10485760, 0, *(_QWORD *)(a4 + 24), 0);
      return 0;
    }
    v30 = SubjectContexta;
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
      if ( (*(_DWORD *)(v122 + 40) & 0x20) != 0 )
      {
        **(_DWORD **)(a4 + 8) = 0;
        **(_DWORD **)(a4 + 16) = -1073741790;
        if ( !a2 )
          SeUnlockSubjectContext(v30);
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
  v72 = *(int **)(a4 + 16);
  if ( *v72 < 0 )
  {
LABEL_80:
    if ( !a2 )
      SeUnlockSubjectContext(SubjectContexta);
    return 0;
  }
  v73 = *(_DWORD *)(v29 + 16);
  v74 = v246;
  v75 = v73 & 0xFDFFFFFF;
  if ( DWORD2(v246) )
  {
    v28 = 3221225506LL;
    if ( ((unsigned int)v246 & v75) == v75 )
      v28 = 0LL;
  }
  else
  {
    v28 = 0LL;
  }
  *v72 = v28;
  v41 = Object;
  if ( **(int **)(a4 + 16) < 0 )
  {
    if ( (*((_DWORD *)Object + 50) & 0x4000) == 0 || HIDWORD(v246) > 0x2000 )
    {
      if ( !a2 )
        SeUnlockSubjectContext(SubjectContexta);
      v119 = *(_QWORD *)(a4 + 24);
      v120 = v19 & ~v74;
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
      v76 = (unsigned __int8)v236;
      if ( HIDWORD(v246) <= 0x2000 )
        v76 = 1;
      v236 = v76;
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
  v124 = *(_WORD *)(v123 + 2);
  if ( (v124 & 0x10) == 0 || KeGetCurrentIrql() >= 2u )
  {
LABEL_261:
    v41 = Object;
    goto LABEL_41;
  }
  if ( v124 >= 0 )
  {
    v138 = *(char **)(v123 + 24);
  }
  else
  {
    v125 = *(unsigned int *)(v123 + 12);
    if ( !(_DWORD)v125 )
    {
      v240 = 0LL;
      goto LABEL_261;
    }
    v138 = (char *)(v123 + v125);
  }
  v240 = v138;
  if ( !v138 )
    goto LABEL_261;
  ScopedPolicySid = (void *)SepGetScopedPolicySid(v138);
  if ( !ScopedPolicySid )
    goto LABEL_261;
  Cap = SepRmReferenceFindCap(ScopedPolicySid);
  v141 = v233;
  v41 = Object;
  v37 = 1LL;
  if ( Cap < 0 )
    v141 = SepRmDefaultCap;
  v233 = v141;
  v221 = 1;
LABEL_42:
  if ( v39 && (*(_DWORD *)(v29 + 16) & 0x2060000) == 0 && !(_BYTE)v37 )
  {
    v45 = 0;
    v43 = *(_DWORD *)(v29 + 16);
    v218 = 0;
    goto LABEL_45;
  }
  IsOwner = SepTokenIsOwner(v41, *(_QWORD *)(*(_QWORD *)(v29 + 8) + 8LL), v28, v37);
  v43 = *(_DWORD *)(v29 + 16);
  v44 = IsOwner;
  v218 = IsOwner;
  v45 = IsOwner;
  if ( !IsOwner || (v218 = IsOwner, (v43 & 0x2060000) == 0) )
  {
    LOBYTE(v37) = v221;
LABEL_45:
    v46 = v237;
    goto LABEL_46;
  }
  v77 = v39 == 0;
  v46 = v237;
  if ( !v77 )
    goto LABEL_108;
  v218 = IsOwner;
  v78 = *(_QWORD *)(*(_QWORD *)(v237 + 8) + 8LL);
  v79 = *(_WORD *)(v78 + 2);
  if ( (v79 & 4) != 0 )
  {
    if ( v79 >= 0 )
    {
      v80 = *(_QWORD *)(v78 + 32);
      v218 = v44;
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
  v45 = v218;
  if ( v81 )
  {
    LOBYTE(v37) = v221;
  }
  else
  {
LABEL_108:
    v82 = *(_DWORD *)(v46 + 16);
    v83 = *(_DWORD *)(v46 + 20);
    v218 = v45;
    if ( (v82 & 0x2000000) != 0 )
    {
      v43 = 393216;
      v84 = 393216;
      *(_DWORD *)(v46 + 20) = v83 | 0x60000;
    }
    else
    {
      v43 = v82 & 0x60000;
      v218 = v45;
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
    LOBYTE(v37) = v221;
    if ( !v221 )
    {
      v45 = 0;
      v218 = 0;
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
  v216 = v45;
  v214 = *(_QWORD *)(a4 + 24);
  v213 = *(_QWORD *)(a4 + 16);
  v212 = *(_QWORD *)(a4 + 32);
  v211 = *(_QWORD *)(a4 + 8);
  v210 = *(_DWORD *)(v46 + 20);
  v207 = *(_QWORD *)(v46 + 32);
  memset((char *)v253 + 4, 0, 24);
  v49 = SubjectContexta->ClientToken;
  v50 = SubjectContexta->PrimaryToken;
  LODWORD(v253[0]) = v43;
  v54 = SepAccessCheckEx(
          *(_QWORD *)(v48 + 8),
          0,
          (_DWORD)v50,
          (_DWORD)v49,
          v47,
          0LL,
          0,
          v207,
          v210,
          a6,
          v211,
          v212,
          v213,
          v214,
          0,
          v216,
          a7,
          (__int64)v253,
          (__int64)&P,
          (__int64)&v219);
  v222 = v54;
  if ( !SepRmEnforceCap )
  {
LABEL_48:
    if ( v225 || (*(_DWORD *)(v46 + 16) & 0x2000000) == 0 )
    {
      v55 = (const void ***)Object;
      if ( (_BYTE)v236 && !*(_WORD *)((char *)&v253[1] + 5) )
      {
        if ( (*((_DWORD *)Object + 50) & 0x3000000) != 0x3000000 || HIDWORD(v253[0]) )
        {
          v56 = -1073741790;
          v117 = 1;
          v51 = 0LL;
          **(_DWORD **)(a4 + 16) = -1073741790;
          **(_DWORD **)(a4 + 8) = 0;
          v118 = *(_DWORD **)(a4 + 8);
          v53 = *(_QWORD *)(a4 + 24);
          v219 = 0;
          v52 = (unsigned int)~*v118;
          if ( v53 )
          {
            while ( v117 )
            {
              if ( (v117 & (unsigned int)v52) != 0 && !*(_DWORD *)(v53 + 4LL * (unsigned int)v51) )
                *(_DWORD *)(v53 + 4LL * (unsigned int)v51) = 3145728;
              v51 = (unsigned int)(v51 + 1);
              v117 *= 2;
            }
          }
          goto LABEL_51;
        }
        v133 = *(_DWORD **)(a4 + 16);
        BYTE7(v253[1]) = 1;
        *v133 = 0;
        **(_DWORD **)(a4 + 8) = *(_DWORD *)(v46 + 16);
        v219 = 1;
      }
    }
    else
    {
      v88 = *(_DWORD **)(a4 + 8);
      v51 = (unsigned int)*v88;
      if ( !(_BYTE)v236 || !*(_WORD *)((char *)&v253[1] + 5) && (*((_DWORD *)Object + 50) & 0x3000000) != 0x3000000 )
      {
        v89 = *(int **)(a4 + 16);
        if ( DWORD2(v246) && (!BYTE6(v246) || !BYTE4(v246) || !BYTE5(v246)) )
        {
          v115 = v51 & v246;
          if ( ((unsigned int)v51 & (unsigned int)v246) != (_DWORD)v51 )
          {
            *v88 = v115;
            v116 = -1073741790;
            if ( v115 )
              v116 = 0;
            *v89 = v116;
            v219 = v115 != 0;
          }
        }
        v90 = 1;
        v53 = *(_QWORD *)(a4 + 24);
        v52 = (unsigned int)v51 & ~**(_DWORD **)(a4 + 8);
        v51 = 0LL;
        if ( v53 )
        {
          while ( v90 )
          {
            if ( (v90 & (unsigned int)v52) != 0 && !*(_DWORD *)(v53 + 4LL * (unsigned int)v51) )
              *(_DWORD *)(v53 + 4LL * (unsigned int)v51) = 3145728;
            v51 = (unsigned int)(v51 + 1);
            v90 *= 2;
          }
        }
      }
      v55 = (const void ***)Object;
    }
    v56 = -1073741790;
LABEL_51:
    if ( (*(_DWORD *)(v46 + 16) & 0x2000000) != 0 )
    {
      v57 = *(int **)(a4 + 8);
      v58 = *(_DWORD **)(a4 + 16);
      v224 = 0;
      v59 = *v57;
      if ( v11 != -1 )
      {
        v113 = v11 & v59;
        if ( (v11 & v59) != v59 )
        {
          v224 = 1;
          *v57 = v113;
          if ( v113 )
          {
            *v58 = 0;
            v219 = 1;
          }
          else
          {
            *v58 = -1073741790;
            v219 = 0;
          }
        }
      }
      v60 = 0;
      v61 = *(_QWORD *)(a4 + 24);
      v62 = v59 & ~**(_DWORD **)(a4 + 8);
      v63 = 1;
      if ( v61 )
      {
        while ( v63 )
        {
          if ( (v63 & v62) != 0 && !*(_DWORD *)(v61 + 4LL * v60) )
            *(_DWORD *)(v61 + 4LL * v60) = 9437184;
          ++v60;
          v63 *= 2;
        }
      }
      v64 = *(_DWORD **)(a4 + 8);
      v65 = *(int **)(a4 + 16);
      v53 = *(unsigned int *)(v46 + 16);
      v52 = (unsigned int)*v64;
      if ( v248 == -1 || (v114 = v248 & v52, (v248 & (unsigned int)v52) == (_DWORD)v52) )
      {
        v66 = 0;
      }
      else
      {
        *v64 = v114;
        v66 = 1;
        if ( (v53 & 0x2000000) != 0 )
        {
          if ( v114 )
            v56 = 0;
          *v65 = v56;
          v219 = v114 != 0;
        }
        else
        {
          *v65 = -1073741790;
          v219 = *v64 != 0;
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
    else
    {
      v66 = 0;
    }
    if ( v55 )
    {
      if ( v224
        || v66
        || (v68 = HIDWORD(v253[0])) == 0
        && ((_DWORD)v55[25] & 0x4000) != 0
        && (**(int **)(a4 + 16) < 0 || BYTE7(v253[1])) )
      {
        v105 = *(_DWORD *)(v46 + 16) | *(_DWORD *)(v46 + 20);
        v106 = *(_QWORD *)(v46 + 8);
        v107 = **(_DWORD **)(a4 + 16) >= 0;
        v108 = SepLocateTokenTrustLevel(SubjectContexta, v51);
        SeLogAccessFailure(v55, 0LL, 0LL, v108, *(_QWORD *)(v106 + 8), v105, v107);
        v68 = HIDWORD(v253[0]);
      }
      if ( **(int **)(a4 + 16) < 0 && !v68 && ((_DWORD)v55[25] & 0x4000) != 0 )
      {
        if ( BYTE8(v253[1]) )
        {
          v112 = *(_DWORD *)(v46 + 16) & ~(DWORD1(v253[0]) | DWORD2(v253[0]) | 0x2000000);
          if ( (v112 & v253[1]) == v112 )
            SepLogLpacAccessFailure();
        }
      }
    }
    if ( v221 )
    {
      v134 = *(_QWORD *)(v233 + 32);
      if ( v134 )
        SepRmDereferenceCapTable(v134, v51, v52, v53);
    }
    if ( !a2 )
      SeUnlockSubjectContext(SubjectContexta);
    SepFreeResourceInfo(P);
    return v54 && v219;
  }
  v93 = **(_DWORD **)(a4 + 16);
  v243 = v93;
  if ( v93 < 0 || !v221 )
  {
LABEL_241:
    v54 = v222;
    goto LABEL_48;
  }
  v94 = *(int **)(a4 + 8);
  Pool2 = 0LL;
  LOBYTE(v231) = 0;
  v96 = *v94;
  v97 = 0;
  v239 = v96;
  v229 = v96;
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
  v220 = v99;
  if ( v99 )
  {
    Pool2 = (char *)ExAllocatePool2(0x40uLL);
    if ( !Pool2 )
    {
      if ( !a2 )
        SeUnlockSubjectContext(SubjectContexta);
      v103 = *(_QWORD *)(v233 + 32);
      if ( v103 )
        SepRmDereferenceCapTable(v103, v100, v101, v102);
      **(_DWORD **)(a4 + 8) = 0;
      **(_DWORD **)(a4 + 16) = -1073741801;
      SepFreeResourceInfo(P);
      return 0;
    }
    memset_0(Pool2, 0, 8LL * *(unsigned int *)(v233 + 60));
    v99 = v220;
  }
  v130 = v229;
  v131 = 0;
  v132 = Object;
  while ( 1 )
  {
    v230 = v131;
    v142 = *(_DWORD *)(v233 + 60);
    LODWORD(v241) = v142;
    if ( v131 >= v142 )
    {
      if ( v99 )
      {
        if ( v130 != v239 )
        {
          v199 = v130 & (v239 ^ v130);
          v200 = v239 & (v239 ^ v130);
          v231 = v200;
          if ( v142 )
          {
            v201 = Pool2;
            v202 = 0;
            v240 = Pool2;
            do
            {
              if ( !v199 && !v200 )
                break;
              if ( v201[4] )
              {
                v203 = *(_DWORD *)v201;
                v204 = v200 & (v200 ^ *(_DWORD *)v201);
                if ( v204 )
                {
                  AuthzBasepSetAccessReasons(v204, 0x80000000, v202 << 24, (unsigned int)v258, 0);
                  v200 = v231;
                }
                v231 = ~v204 & v200;
                v205 = v199 & v203;
                if ( v205 )
                  AuthzBasepSetAccessReasons(v205, 0x80000000, v202 << 24, (unsigned int)v258, 0);
                v199 &= ~v205;
                AuthzBasepMergeAccessReasons(v257, v258, 4278190080LL);
                v200 = v231;
                v201 = v240;
                v142 = v241;
              }
              v201 += 8;
              ++v202;
              v240 = v201;
            }
            while ( v202 < v142 );
            v93 = v243;
          }
        }
      }
      if ( Pool2 )
        ExFreePoolWithTag(Pool2, 0);
      v206 = v239;
      **(_DWORD **)(a4 + 16) = v93;
      **(_DWORD **)(a4 + 8) &= v206;
      if ( **(int **)(a4 + 16) < 0 )
        v219 = 0;
      AuthzBasepMergeAccessReasons(*(_QWORD *)(a4 + 24), v257, 0LL);
      AuthzBasepMergeAccessReasons(*(_QWORD *)(a4 + 24), v257, 4278190080LL);
      v46 = v237;
      goto LABEL_241;
    }
    v254 = 0LL;
    v255 = 0LL;
    v256 = 0LL;
    v143 = *(_QWORD *)(v233 + 8LL * v131 + 64);
    v241 = v143;
    if ( !*(_QWORD *)(v143 + 24) )
      goto LABEL_291;
    v144 = P;
    if ( !P )
    {
      v145 = AuthzBasepInitializeResourceClaimsFromSacl(v240, &P);
      v143 = v241;
      v132 = Object;
      v146 = (unsigned __int8)v231;
      if ( v145 < 0 )
        v146 = 1;
      v231 = v146;
      v144 = P;
    }
    v147 = (_QWORD *)v132[137];
    if ( v147 )
    {
      v148 = (void *)v147[72];
      v149 = v147[74];
      v150 = v147[73];
      v151 = v147[75];
    }
    else
    {
      v148 = 0LL;
      v149 = 0LL;
      v150 = 0LL;
      v151 = 0LL;
    }
    v152 = AuthzBasepEvaluateAceCondition(
             Object,
             *((void **)Object + 97),
             v144,
             v148,
             v149,
             v150,
             v151,
             *(_DWORD **)(v143 + 24),
             *(_DWORD *)(v143 + 16),
             1,
             0,
             &v238);
    v156 = v238;
    v227 = v152;
    if ( v238 == 1 )
      goto LABEL_291;
    if ( v152 < 0 )
    {
      if ( !a2 )
        SeUnlockSubjectContext(SubjectContexta);
      v194 = *(_QWORD *)(v233 + 32);
      if ( v194 )
        SepRmDereferenceCapTable(v194, v153, v154, v155);
      v195 = v227;
      **(_DWORD **)(a4 + 8) = 0;
      **(_DWORD **)(a4 + 16) = v195;
      SepFreeResourceInfo(P);
      if ( Pool2 )
        goto LABEL_340;
      return 0;
    }
    v132 = Object;
    if ( (*((_DWORD *)Object + 50) & 0x10) != 0 )
      break;
LABEL_288:
    if ( !(_BYTE)v231 && v156 != 1 )
    {
      v99 = v220;
      v130 = v229;
      v165 = v230;
      goto LABEL_316;
    }
LABEL_291:
    v169 = SepBuildCapeSecurityDescriptor(SecurityDescriptor);
    if ( v169 < 0 )
    {
      if ( !a2 )
        SeUnlockSubjectContext(SubjectContexta);
      v198 = *(_QWORD *)(v233 + 32);
      if ( v198 )
        SepRmDereferenceCapTable(v198, v166, v167, v168);
      **(_DWORD **)(a4 + 8) = 0;
      **(_DWORD **)(a4 + 16) = v169;
      SepFreeResourceInfo(P);
      if ( !Pool2 )
        return 0;
      goto LABEL_340;
    }
    v170 = *(_DWORD *)(v237 + 16);
    if ( (*(_DWORD *)(v241 + 48) & 1) != 0 )
    {
      if ( (v170 & 0x2000000) == 0 )
        v170 |= *(_DWORD *)(v237 + 20);
      v171 = 0;
    }
    else
    {
      v171 = *(_DWORD *)(v237 + 20);
    }
    LOBYTE(v215) = 0;
    v208 = *(_QWORD *)(v237 + 32);
    v254 = 0LL;
    v172 = SubjectContexta->ClientToken;
    v173 = SubjectContexta->PrimaryToken;
    v255 = 0LL;
    v256 = 0LL;
    v174 = SepAccessCheckEx(
             (unsigned int)SecurityDescriptor,
             0,
             (_DWORD)v173,
             (_DWORD)v172,
             v170 | 0x2000000u,
             (__int64)&v254,
             1,
             v208,
             v171,
             a6,
             (__int64)&v235,
             0LL,
             (__int64)&v244,
             (__int64)v259,
             v215,
             v218,
             a7,
             (__int64)v253,
             (__int64)&P,
             (__int64)&v219);
    v175 = v234;
    v176 = v234 | HIDWORD(v255);
    v222 = v174;
    v177 = v235 & (**(_DWORD **)(a4 + 8) | v171);
    v235 = v177;
    if ( v218 )
      v176 |= v177 & 0x60000;
    v178 = v230;
    v179 = ~(_DWORD)v256 & v176;
    v77 = (v177 & v239) == 0;
    v239 &= v177;
    v93 = v244;
    if ( v77 )
      v93 = -1073741790;
    v227 = v179;
    v243 = v93;
    v180 = v245 & (v245 ^ v179);
    if ( v180 )
    {
      AuthzBasepSetAccessReasons(v180, 327680, v230, (unsigned int)v257, 0);
      v175 = v234;
      v245 = v227 & v181;
    }
    v99 = v220;
    if ( v220 )
    {
      if ( *(_QWORD *)(v241 + 40) )
      {
        v227 = SepBuildCapeSecurityDescriptor(v251);
        if ( v227 >= 0 )
        {
          v185 = *(_DWORD *)(v237 + 16);
          if ( (*(_DWORD *)(v241 + 48) & 0x100) != 0 )
          {
            if ( (v185 & 0x2000000) == 0 )
              v185 |= *(_DWORD *)(v237 + 20);
            v186 = 0;
          }
          else
          {
            v186 = *(_DWORD *)(v237 + 20);
          }
          LOBYTE(v215) = 0;
          v209 = *(_QWORD *)(v237 + 32);
          v187 = SubjectContexta->ClientToken;
          v188 = SubjectContexta->PrimaryToken;
          v254 = 0LL;
          v255 = 0LL;
          v256 = 0LL;
          SepAccessCheckEx(
            (unsigned int)v251,
            0,
            (_DWORD)v188,
            (_DWORD)v187,
            v185,
            0LL,
            0,
            v209,
            v186,
            a6,
            (__int64)&v242,
            0LL,
            (__int64)&v247,
            (__int64)v259,
            v215,
            v218,
            a7,
            (__int64)v253,
            (__int64)&P,
            (__int64)v228);
          v165 = v230;
          v189 = v234;
          v190 = &Pool2[8 * v230];
          v190[4] = 1;
          *(_DWORD *)v190 = v242 | v189;
          v130 = v242 & v229;
          v99 = v220;
          v229 &= v242;
          goto LABEL_315;
        }
        if ( !a2 )
          SeUnlockSubjectContext(SubjectContexta);
        v196 = *(_QWORD *)(v233 + 32);
        if ( v196 )
          SepRmDereferenceCapTable(v196, v182, v183, v184);
        v197 = v227;
        **(_DWORD **)(a4 + 8) = 0;
        **(_DWORD **)(a4 + 16) = v197;
        SepFreeResourceInfo(P);
        if ( !Pool2 )
          return 0;
LABEL_340:
        ExFreePoolWithTag(Pool2, 0);
        return 0;
      }
      v191 = &Pool2[8 * v178];
      v99 = v220;
      v191[4] = 1;
      *(_DWORD *)v191 = v235 | v175;
      v130 = v235 & v229;
      v229 &= v235;
    }
    else
    {
      v130 = v229;
    }
    v165 = v230;
LABEL_315:
    v132 = Object;
LABEL_316:
    v131 = v165 + 1;
  }
  v157 = (_QWORD *)*((_QWORD *)Object + 137);
  if ( v157 )
  {
    v158 = (void *)v157[72];
    v159 = v157[74];
    v160 = v157[73];
    v161 = v157[75];
  }
  else
  {
    v158 = 0LL;
    v159 = 0LL;
    v160 = 0LL;
    v161 = 0LL;
  }
  v227 = AuthzBasepEvaluateAceCondition(
           Object,
           *((void **)Object + 97),
           P,
           v158,
           v159,
           v160,
           v161,
           *(_DWORD **)(v241 + 24),
           *(_DWORD *)(v241 + 16),
           1,
           1,
           &v238);
  if ( v227 >= 0 )
  {
    v156 = v238;
    v132 = Object;
    goto LABEL_288;
  }
  if ( !a2 )
    SeUnlockSubjectContext(SubjectContexta);
  v192 = *(_QWORD *)(v233 + 32);
  if ( v192 )
    SepRmDereferenceCapTable(v192, v162, v163, v164);
  v193 = v227;
  **(_DWORD **)(a4 + 8) = 0;
  **(_DWORD **)(a4 + 16) = v193;
  SepFreeResourceInfo(P);
  if ( Pool2 )
    goto LABEL_340;
  return 0;
}
