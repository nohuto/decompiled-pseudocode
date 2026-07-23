/*
 * XREFs of SeAccessCheckByType @ 0x14042DC70
 * Callers:
 *     NtAccessCheckByType @ 0x14042DB90 (NtAccessCheckByType.c)
 *     NtAccessCheck @ 0x14042DC00 (NtAccessCheck.c)
 *     NtAccessCheckByTypeResultList @ 0x140605E30 (NtAccessCheckByTypeResultList.c)
 * Callees:
 *     SepLogLpacAccessFailure @ 0x140231454 (SepLogLpacAccessFailure.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140289BD0 (KiLeaveCriticalRegionUnsafe.c)
 *     SepMandatoryIntegrityCheck @ 0x14028A540 (SepMandatoryIntegrityCheck.c)
 *     ExReleaseResourceLite @ 0x14028AA60 (ExReleaseResourceLite.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     ExAcquireResourceSharedLite @ 0x140321360 (ExAcquireResourceSharedLite.c)
 *     AuthzBasepEvaluateAceCondition @ 0x140323B60 (AuthzBasepEvaluateAceCondition.c)
 *     SepRmReferenceFindCap @ 0x1403B562C (SepRmReferenceFindCap.c)
 *     SepGetScopedPolicySid @ 0x1403B56EC (SepGetScopedPolicySid.c)
 *     SepFreeResourceInfo @ 0x1403B9940 (SepFreeResourceInfo.c)
 *     SepFilterCheck @ 0x1403B9AB0 (SepFilterCheck.c)
 *     AuthzBasepInitializeResourceClaimsFromSacl @ 0x1403BADD4 (AuthzBasepInitializeResourceClaimsFromSacl.c)
 *     SepTokenIsOwner @ 0x1403D9F70 (SepTokenIsOwner.c)
 *     SepTrustLevelCheck @ 0x1403E33C0 (SepTrustLevelCheck.c)
 *     SepReferenceTokenByHandle @ 0x1403E36B0 (SepReferenceTokenByHandle.c)
 *     RtlpOwnerAcesPresent @ 0x1403ECFB0 (RtlpOwnerAcesPresent.c)
 *     SePrivilegePolicyCheck @ 0x140415500 (SePrivilegePolicyCheck.c)
 *     SeCaptureObjectTypeList @ 0x14041E500 (SeCaptureObjectTypeList.c)
 *     SeLogAccessFailure @ 0x140438750 (SeLogAccessFailure.c)
 *     SepAccessCheck @ 0x1404E76E0 (SepAccessCheck.c)
 *     Feature_DecoupleAppContainerAndIntegrityLevel__private_IsEnabledDeviceUsageNoInline @ 0x1405E2C90 (Feature_DecoupleAppContainerAndIntegrityLevel__private_IsEnabledDeviceUsageNoInline.c)
 *     SepCopyObjectTypeList @ 0x140605ED0 (SepCopyObjectTypeList.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     SepRmDestroyCapTable @ 0x140796324 (SepRmDestroyCapTable.c)
 *     SeReleaseSubjectContext @ 0x140849AA0 (SeReleaseSubjectContext.c)
 *     SeCaptureSubjectContext @ 0x140849BB0 (SeCaptureSubjectContext.c)
 *     SeCaptureSid @ 0x140869508 (SeCaptureSid.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408A3890 (ExRaiseDatatypeMisalignment.c)
 *     ProbeForWrite @ 0x1408BDF50 (ProbeForWrite.c)
 *     SeCaptureSecurityDescriptor @ 0x1409108D0 (SeCaptureSecurityDescriptor.c)
 *     SeReleaseSecurityDescriptor @ 0x140912CC0 (SeReleaseSecurityDescriptor.c)
 *     RtlSetDaclSecurityDescriptor @ 0x1409DFF30 (RtlSetDaclSecurityDescriptor.c)
 *     RtlCreateSecurityDescriptor @ 0x1409E16D0 (RtlCreateSecurityDescriptor.c)
 *     RtlSetSaclSecurityDescriptor @ 0x140A04030 (RtlSetSaclSecurityDescriptor.c)
 *     SeReleaseSid @ 0x140A18990 (SeReleaseSid.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SeAccessCheckByType(
        __int64 a1,
        void *a2,
        void *a3,
        unsigned int a4,
        __int64 a5,
        unsigned int a6,
        _OWORD *a7,
        volatile void *a8,
        _DWORD *a9,
        _DWORD *a10,
        _DWORD *a11,
        char a12)
{
  int v13; // eax
  int *v14; // r9
  int v15; // r15d
  unsigned __int64 PreviousMode; // r8
  unsigned int v17; // eax
  __int64 v18; // rax
  __int64 result; // rax
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // rcx
  int v23; // ebx
  char v24; // r13
  __int16 v25; // cx
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  _DWORD *v30; // rax
  PVOID v31; // r14
  __int64 v32; // rsi
  unsigned int v33; // r12d
  int v34; // edx
  unsigned __int8 v35; // r12
  char v36; // si
  unsigned int v37; // ecx
  PVOID v38; // rsi
  int v39; // ecx
  int v40; // eax
  int v41; // r8d
  unsigned int v42; // edx
  unsigned int v43; // eax
  struct _KTHREAD *CurrentThread; // rax
  PVOID v45; // rbx
  unsigned __int8 IsOwner; // al
  _RTL_DYNAMIC_HASH_TABLE_ENTRY *v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // rax
  unsigned int v50; // ecx
  _DWORD *v51; // r8
  _DWORD *v52; // r9
  __int64 v53; // r14
  __int16 v54; // cx
  __int64 v55; // rax
  ACL *v56; // rax
  void *ScopedPolicySid; // rax
  int Cap; // eax
  unsigned int v59; // r12d
  __int16 v60; // ax
  __int64 v61; // rdx
  __int64 v62; // rax
  int v63; // eax
  unsigned int v64; // ebx
  PERESOURCE *v65; // rsi
  unsigned int v66; // ecx
  _DWORD *v67; // rdx
  _DWORD *v68; // r8
  unsigned int v69; // ecx
  _DWORD *v70; // rdx
  _DWORD *v71; // r8
  ULONG_PTR v72; // r13
  int *Pool2; // rcx
  int *v74; // rdx
  __int64 v75; // rbx
  int *v76; // r12
  char *v77; // rax
  char *v78; // r8
  int v79; // r13d
  char *v80; // r14
  int v81; // r9d
  unsigned int v82; // ecx
  PRTL_DYNAMIC_HASH_TABLE_ENTRY v83; // rdx
  __int64 v84; // rsi
  PVOID v85; // r8
  int v86; // eax
  int v87; // edx
  _DWORD *v88; // rbx
  _QWORD *v89; // rax
  void *v90; // r10
  void *v91; // rdx
  void *v92; // rcx
  void *v93; // r9
  int v94; // eax
  int v95; // ecx
  _QWORD *v96; // rax
  void *v97; // r8
  void *v98; // rdx
  void *v99; // rcx
  void *v100; // r9
  unsigned __int8 *v101; // rbx
  NTSTATUS v102; // eax
  __int16 v103; // ax
  BOOLEAN v104; // r9
  ACL *v105; // r8
  __int64 v106; // rax
  unsigned int v107; // eax
  unsigned int v108; // ecx
  int *v109; // r13
  int *v110; // rsi
  _DWORD *v111; // rcx
  signed __int64 v112; // r8
  __int64 v113; // rdx
  struct _ERESOURCE *v114; // rcx
  unsigned int v115; // ecx
  unsigned int v116; // eax
  int v117; // ecx
  int v118; // eax
  int *v119; // rdx
  signed __int64 v120; // r9
  __int64 v121; // r8
  int v122; // r10d
  int v123; // eax
  int v124; // ecx
  int v125; // eax
  unsigned int v126; // edx
  __int64 v127; // rax
  unsigned int v128; // r9d
  __m128 v129; // xmm1
  unsigned int v130; // r10d
  __int64 v131; // rax
  __int64 v132; // rax
  unsigned int v133; // r8d
  unsigned int *v134; // rcx
  __int64 v135; // rdx
  unsigned int v136; // ecx
  int v137; // eax
  unsigned int v138; // edx
  int v139; // eax
  int *v140; // r8
  signed __int64 v141; // r10
  __int64 v142; // r9
  int v143; // edx
  int v144; // ecx
  unsigned int v145; // r11d
  int v146; // r10d
  int v147; // ecx
  int *v148; // rdx
  signed __int64 v149; // r9
  __int64 v150; // r8
  int v151; // ecx
  int v152; // eax
  _DWORD *v153; // rdx
  __int64 v154; // rax
  __int64 v155; // rcx
  _DWORD *v156; // rdx
  struct _KTHREAD *v157; // rax
  PERESOURCE *v158; // rbx
  volatile signed __int64 *Blink; // rcx
  signed __int64 v160; // rax
  bool v161; // cc
  signed __int64 v162; // rax
  int v163; // [rsp+20h] [rbp-2C8h]
  unsigned int v164; // [rsp+40h] [rbp-2A8h]
  unsigned __int8 v165; // [rsp+A0h] [rbp-248h]
  unsigned __int8 v166; // [rsp+A1h] [rbp-247h]
  int v167; // [rsp+A4h] [rbp-244h]
  char v168; // [rsp+A9h] [rbp-23Fh]
  char v169; // [rsp+AAh] [rbp-23Eh]
  char v170; // [rsp+ABh] [rbp-23Dh]
  char v171; // [rsp+ACh] [rbp-23Ch]
  unsigned int v172; // [rsp+B0h] [rbp-238h]
  unsigned int v173; // [rsp+B8h] [rbp-230h] BYREF
  int v174; // [rsp+C0h] [rbp-228h]
  char v175; // [rsp+C4h] [rbp-224h] BYREF
  int v176; // [rsp+C8h] [rbp-220h]
  int v177; // [rsp+CCh] [rbp-21Ch]
  PVOID Object; // [rsp+D0h] [rbp-218h] BYREF
  unsigned int v179; // [rsp+D8h] [rbp-210h] BYREF
  char v180; // [rsp+DCh] [rbp-20Ch]
  BOOL v181; // [rsp+E0h] [rbp-208h]
  unsigned int v182; // [rsp+E8h] [rbp-200h]
  volatile void *v183; // [rsp+F0h] [rbp-1F8h]
  __int64 v184; // [rsp+F8h] [rbp-1F0h] BYREF
  volatile void *Address; // [rsp+100h] [rbp-1E8h]
  int v186; // [rsp+108h] [rbp-1E0h]
  unsigned int Length; // [rsp+10Ch] [rbp-1DCh]
  unsigned int Length_4; // [rsp+110h] [rbp-1D8h]
  int v189; // [rsp+114h] [rbp-1D4h] BYREF
  unsigned int v190; // [rsp+118h] [rbp-1D0h]
  int *v191; // [rsp+120h] [rbp-1C8h]
  PVOID v192; // [rsp+128h] [rbp-1C0h] BYREF
  PACL Sacl; // [rsp+130h] [rbp-1B8h]
  PVOID v194; // [rsp+138h] [rbp-1B0h]
  void *Src; // [rsp+140h] [rbp-1A8h]
  volatile void *v196; // [rsp+148h] [rbp-1A0h]
  PRTL_DYNAMIC_HASH_TABLE_ENTRY v197; // [rsp+150h] [rbp-198h] BYREF
  _OWORD *v198; // [rsp+158h] [rbp-190h] BYREF
  __int64 v199; // [rsp+160h] [rbp-188h] BYREF
  PVOID v200; // [rsp+168h] [rbp-180h]
  PVOID v201; // [rsp+170h] [rbp-178h] BYREF
  __int128 v202; // [rsp+178h] [rbp-170h] BYREF
  PVOID P; // [rsp+188h] [rbp-160h] BYREF
  __int64 v204; // [rsp+190h] [rbp-158h] BYREF
  PVOID v205; // [rsp+198h] [rbp-150h] BYREF
  int v206; // [rsp+1A0h] [rbp-148h] BYREF
  int v207; // [rsp+1A4h] [rbp-144h] BYREF
  int *v208; // [rsp+1A8h] [rbp-140h]
  int v209; // [rsp+1B0h] [rbp-138h] BYREF
  __int64 v210; // [rsp+1B8h] [rbp-130h] BYREF
  int v211; // [rsp+1C0h] [rbp-128h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+1C8h] [rbp-120h] BYREF
  void *v213; // [rsp+1F8h] [rbp-F0h]
  void *v214; // [rsp+200h] [rbp-E8h]
  _DWORD *v215; // [rsp+208h] [rbp-E0h]
  _DWORD *v216; // [rsp+210h] [rbp-D8h]
  _OWORD *v217; // [rsp+218h] [rbp-D0h]
  _DWORD *v218; // [rsp+220h] [rbp-C8h]
  _DWORD *v219; // [rsp+228h] [rbp-C0h]
  _DWORD *v220; // [rsp+230h] [rbp-B8h]
  __int64 v221; // [rsp+238h] [rbp-B0h]
  __int64 v222; // [rsp+240h] [rbp-A8h]
  _OWORD SecurityDescriptor[2]; // [rsp+248h] [rbp-A0h] BYREF
  __int64 v224; // [rsp+268h] [rbp-80h]
  __int128 v225; // [rsp+270h] [rbp-78h] BYREF
  __int64 v226; // [rsp+280h] [rbp-68h]
  int v227; // [rsp+288h] [rbp-60h]
  __int128 v228; // [rsp+290h] [rbp-58h] BYREF

  Src = a2;
  Length_4 = a6;
  v217 = a7;
  v220 = a10;
  v219 = a11;
  v218 = a9;
  v222 = a1;
  v213 = a2;
  v214 = a3;
  v173 = a4;
  v13 = a5;
  v221 = a5;
  v14 = (int *)a6;
  v182 = a6;
  v190 = a6;
  v198 = a7;
  v196 = a8;
  v208 = a9;
  v183 = a10;
  v215 = a10;
  Address = a11;
  v216 = a11;
  v209 = 0;
  v200 = 0LL;
  v211 = 0;
  v206 = 0;
  v194 = 0LL;
  v207 = 0;
  v191 = 0LL;
  Object = 0LL;
  v184 = 0LL;
  v199 = 0LL;
  v179 = 0;
  v177 = 0;
  v228 = 0LL;
  v201 = 0LL;
  P = 0LL;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  v202 = 0LL;
  LOBYTE(v13) = 0;
  v181 = v13;
  v180 = 0;
  v192 = 0LL;
  v225 = 0LL;
  v226 = 0LL;
  v227 = 0;
  Sacl = 0LL;
  memset(SecurityDescriptor, 0, sizeof(SecurityDescriptor));
  v224 = 0LL;
  v197 = 0LL;
  v171 = 0;
  v168 = 0;
  v189 = 0;
  v205 = 0LL;
  v175 = 0;
  v169 = 0;
  v170 = 0;
  v210 = 0LL;
  v204 = 0LL;
  v15 = -1073741790;
  v174 = -1073741790;
  Length = 0;
  PreviousMode = (unsigned __int8)KeGetCurrentThread()->PreviousMode;
  v165 = PreviousMode;
  if ( (_BYTE)PreviousMode )
  {
    v18 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)a9 < 0x7FFFFFFF0000LL )
      v18 = (__int64)a9;
    v17 = *(_DWORD *)v18;
  }
  else
  {
    v17 = *a9;
  }
  Length = v17;
  LODWORD(v198) = -1;
  LODWORD(v204) = -1;
  if ( !(_BYTE)PreviousMode )
  {
    *a11 = 0;
    *a10 = v173;
    return 0LL;
  }
  if ( a12 )
  {
    if ( !a6 )
    {
      result = 3221225485LL;
      goto LABEL_24;
    }
    ProbeForWrite(Address, 4LL * a6, 4u);
    ProbeForWrite(v183, 4LL * a6, 4u);
  }
  else
  {
    v20 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)a11 < 0x7FFFFFFF0000LL )
      v20 = (__int64)a11;
    *(_DWORD *)v20 = *(_DWORD *)v20;
    v21 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)a10 < 0x7FFFFFFF0000LL )
      v21 = (__int64)a10;
    *(_DWORD *)v21 = *(_DWORD *)v21;
  }
  v22 = 0x7FFFFFFF0000LL;
  if ( (unsigned __int64)v208 < 0x7FFFFFFF0000LL )
    v22 = (__int64)a9;
  *(_DWORD *)v22 = *(_DWORD *)v22;
  ProbeForWrite(v196, Length, 4u);
  if ( v196 && Length >= 0x14 )
    *(_DWORD *)v196 = 0;
  if ( ((unsigned __int8)a7 & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  v228 = *a7;
  result = 0LL;
  PreviousMode = v165;
LABEL_24:
  if ( (int)result < 0 )
    return result;
  if ( (v173 & 0xF0000000) != 0 )
  {
    v23 = -1073741594;
LABEL_352:
    v167 = v23;
    goto LABEL_353;
  }
  v23 = SepReferenceTokenByHandle(a3, 8u, PreviousMode, (int)v14, &Object, &v175, &v210);
  v167 = v23;
  if ( v23 < 0 )
  {
    Object = 0LL;
    goto LABEL_353;
  }
  if ( (unsigned __int64)a3 + 6 > 2 )
  {
    if ( *((_DWORD *)Object + 48) != 2 )
    {
      v23 = -1073741732;
      goto LABEL_352;
    }
    if ( *((int *)Object + 49) < 1 )
    {
      v23 = -1073741659;
      goto LABEL_352;
    }
  }
  v23 = SeCaptureObjectTypeList(v221, v182, v165, &v201);
  v167 = v23;
  if ( v23 < 0 )
    goto LABEL_353;
  v24 = 1;
  v23 = SeCaptureSecurityDescriptor(v222, v165, 1, 0, (__int64)&v184);
  v167 = v23;
  if ( v23 < 0 )
    goto LABEL_353;
  if ( !v184 )
    goto LABEL_351;
  v25 = *(_WORD *)(v184 + 2);
  if ( v25 >= 0 )
  {
    v27 = *(_QWORD *)(v184 + 8);
  }
  else
  {
    v26 = *(unsigned int *)(v184 + 4);
    if ( !(_DWORD)v26 )
      goto LABEL_351;
    v27 = v184 + v26;
  }
  if ( !v27 )
    goto LABEL_351;
  if ( v25 < 0 )
  {
    v28 = *(unsigned int *)(v184 + 8);
    if ( (_DWORD)v28 )
    {
      v29 = v184 + v28;
      goto LABEL_46;
    }
LABEL_351:
    v23 = -1073741703;
    goto LABEL_352;
  }
  v29 = *(_QWORD *)(v184 + 16);
LABEL_46:
  if ( !v29 )
    goto LABEL_351;
  if ( v175 )
    v30 = (_DWORD *)v210;
  else
    v30 = (_DWORD *)*((_QWORD *)Object + 138);
  v31 = Object;
  v32 = v184;
  v23 = SepTrustLevelCheck((__int64)&v198, v184, 0LL, (__int64)Object, v30, 1, (int *)&v198);
  v167 = v23;
  if ( v23 < 0 )
    goto LABEL_353;
  v33 = v173 & 0xFDFFFFFF;
  if ( ((unsigned int)v198 & v173 & 0xFDFFFFFF) != (v173 & 0xFDFFFFFF) )
  {
    v169 = 1;
    goto LABEL_69;
  }
  v23 = SepFilterCheck(v32, &v192, (__int64)v31, 1, (__int64)&v204);
  v167 = v23;
  if ( v23 < 0 )
    goto LABEL_353;
  if ( ((unsigned int)v204 & v33) != v33 )
  {
    v170 = 1;
LABEL_69:
    PreviousMode = v181;
    v34 = -1073741790;
LABEL_70:
    v35 = v165;
LABEL_71:
    v24 = 0;
    goto LABEL_72;
  }
  v23 = SepMandatoryIntegrityCheck(&v228, v32, 0, (__int64)v31, 1, (__int64)&v202);
  v167 = v23;
  if ( v23 < 0 )
    goto LABEL_353;
  LOBYTE(PreviousMode) = 0;
  v181 = PreviousMode;
  if ( DWORD2(v202) && (v33 & (unsigned int)v202) != v33 )
  {
    v34 = -1073741790;
  }
  else
  {
    v34 = 0;
    if ( (v173 & 0x2000000) == 0 )
      goto LABEL_62;
  }
  if ( (*((_DWORD *)Object + 50) & 0x4000) != 0 )
  {
    PreviousMode = HIDWORD(v202) <= 0x2000;
    v181 = HIDWORD(v202) <= 0x2000;
  }
LABEL_62:
  if ( v34 < 0 && !(_BYTE)PreviousMode )
    goto LABEL_70;
  v35 = v165;
  v34 = SePrivilegePolicyCheck(&v173, &v179, 0LL, (__int64)Object, (__int64)&P, v165);
  PreviousMode = v181;
  if ( v173 || !v179 )
    goto LABEL_71;
LABEL_72:
  if ( v34 < 0 && !(_BYTE)PreviousMode )
  {
    v36 = a12;
    if ( a12 )
    {
      v37 = 0;
      PreviousMode = (unsigned __int64)v183;
      v14 = (int *)Address;
      while ( 1 )
      {
        v176 = v37;
        if ( v37 >= v182 )
          break;
        v14[v37] = v34;
        *(_DWORD *)(PreviousMode + 4LL * v37++) = 0;
      }
    }
    else
    {
      *(_DWORD *)Address = v34;
      *(_DWORD *)v183 = 0;
    }
    v174 = v34;
    v23 = 0;
    v167 = 0;
    goto LABEL_355;
  }
  v38 = P;
  if ( P )
  {
    v39 = *(_DWORD *)P;
    v40 = 12 * *(_DWORD *)P;
    v41 = 8;
    v42 = v40 + 8;
    if ( !*(_DWORD *)P )
      v42 = 8;
    if ( v42 > Length )
    {
      if ( v39 )
        v41 = v40 + 8;
      *v208 = v41;
      v23 = -1073741789;
      v167 = -1073741789;
      ExFreePoolWithTag(v38, 0);
      goto LABEL_354;
    }
    if ( v39 )
      v43 = v40 + 8;
    else
      v43 = 8;
    memmove((void *)v196, P, v43);
    ExFreePoolWithTag(v38, 0);
  }
  else
  {
    if ( Length < 0x14 )
    {
      *v208 = 20;
      v23 = -1073741789;
      v167 = -1073741789;
      v36 = a12;
      goto LABEL_355;
    }
    *(_QWORD *)v196 = 0LL;
  }
  if ( Src )
  {
    v23 = SeCaptureSid(Src, v163, 1, (__int64)&v199);
    v167 = v23;
    if ( v23 < 0 )
    {
      v199 = 0LL;
      goto LABEL_354;
    }
  }
  SeCaptureSubjectContext(&SubjectContext);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v45 = Object;
  ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
  IsOwner = SepTokenIsOwner((__int64)v45, v184);
  v48 = IsOwner;
  v166 = IsOwner;
  if ( !SepAllowAccessUponLogoff && (*((_DWORD *)v45 + 50) & 0x20) == 0 )
  {
    v49 = *((_QWORD *)v45 + 27);
    if ( v49 )
    {
      if ( (*(_DWORD *)(v49 + 40) & 0x20) != 0 )
      {
        v36 = a12;
        if ( a12 )
        {
          v50 = 0;
          v51 = v183;
          v52 = Address;
          while ( 1 )
          {
            v176 = v50;
            if ( v50 >= v182 )
              break;
            v52[v50] = -1073741790;
            v51[v50++] = 0;
          }
        }
        else
        {
          *(_DWORD *)Address = -1073741790;
          *(_DWORD *)v183 = 0;
        }
        v174 = -1073741790;
        v167 = 0;
        ExReleaseResourceLite(*((PERESOURCE *)v45 + 6));
        KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
        SeReleaseSubjectContext(&SubjectContext);
        v23 = 0;
        goto LABEL_355;
      }
    }
  }
  v53 = v184;
  if ( SepRmEnforceCap )
  {
    v54 = *(_WORD *)(v184 + 2);
    if ( (v54 & 0x10) == 0 || KeGetCurrentIrql() >= 2u )
      goto LABEL_120;
    if ( v54 >= 0 )
    {
      v56 = *(ACL **)(v184 + 24);
    }
    else
    {
      v55 = *(unsigned int *)(v184 + 12);
      if ( !(_DWORD)v55 )
      {
        Sacl = 0LL;
LABEL_120:
        v48 = v166;
        goto LABEL_121;
      }
      v56 = (ACL *)(v184 + v55);
    }
    Sacl = v56;
    if ( v56 )
    {
      ScopedPolicySid = (void *)SepGetScopedPolicySid((__int64)v56);
      if ( ScopedPolicySid )
      {
        Cap = SepRmReferenceFindCap(ScopedPolicySid, &v197);
        v47 = v197;
        if ( Cap < 0 )
          v47 = (_RTL_DYNAMIC_HASH_TABLE_ENTRY *)SepRmDefaultCap;
        v197 = v47;
        v171 = 1;
      }
    }
    goto LABEL_120;
  }
LABEL_121:
  v59 = v173;
  if ( (v173 & 0x2060000) != 0
    && (_BYTE)v48
    && ((v60 = *(_WORD *)(v53 + 2), (v60 & 4) != 0)
      ? (v60 >= 0
       ? (v61 = *(_QWORD *)(v53 + 32))
       : (v62 = *(unsigned int *)(v53 + 16), (_DWORD)v62)
       ? (v61 = v53 + v62)
       : (v61 = 0LL))
      : (v61 = 0LL),
        !RtlpOwnerAcesPresent(0, v61)) )
  {
    if ( (v59 & 0x2000000) != 0 )
    {
      v63 = 393216;
      v64 = v179 | 0x60000;
    }
    else
    {
      v48 = 393216LL;
      v63 = v59 & 0x60000;
      v64 = v179 | v59 & 0x60000;
    }
    v177 = v63;
    v179 = v64;
    v59 &= 0xFFF9FFFF;
    v173 = v59;
  }
  else
  {
    v64 = v179;
  }
  if ( (unsigned int)Feature_DecoupleAppContainerAndIntegrityLevel__private_IsEnabledDeviceUsageNoInline(v48, v47) )
  {
    if ( !v59 && (!v171 || v24) )
    {
      v65 = (PERESOURCE *)Object;
      if ( (*((_DWORD *)Object + 50) & 0x6000) == 0x2000 || !v177 )
      {
        if ( a12 )
        {
          v66 = 0;
          v67 = v215;
          v68 = v216;
          while ( 1 )
          {
            v176 = v66;
            if ( v66 >= v182 )
              break;
            if ( v64 )
            {
              v68[v66] = 0;
              v174 = 0;
              v67[v66] = v64;
            }
            else
            {
              v68[v66] = -1073741790;
              v174 = -1073741790;
              v67[v66] = 0;
            }
            ++v66;
          }
        }
        else if ( v64 )
        {
          *(_DWORD *)Address = 0;
          v174 = 0;
          *(_DWORD *)v183 = v64;
        }
        else
        {
          *(_DWORD *)Address = -1073741790;
          v174 = -1073741790;
          *(_DWORD *)v183 = 0;
        }
        v167 = 0;
        v35 = v165;
LABEL_153:
        ExReleaseResourceLite(v65[6]);
        KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
        SeReleaseSubjectContext(&SubjectContext);
        v23 = 0;
        goto LABEL_354;
      }
      goto LABEL_171;
    }
LABEL_170:
    v65 = (PERESOURCE *)Object;
    goto LABEL_171;
  }
  if ( v59 || v171 && !v24 )
    goto LABEL_170;
  v65 = (PERESOURCE *)Object;
  if ( (*((_DWORD *)Object + 50) & 0x2000) != 0 || !v177 )
  {
    if ( a12 )
    {
      v69 = 0;
      v70 = v215;
      v71 = v216;
      while ( 1 )
      {
        v176 = v69;
        if ( v69 >= v182 )
          break;
        if ( v64 )
        {
          v71[v69] = 0;
          v174 = 0;
          v70[v69] = v64;
        }
        else
        {
          v71[v69] = -1073741790;
          v174 = -1073741790;
          v70[v69] = 0;
        }
        ++v69;
      }
    }
    else if ( v64 )
    {
      *(_DWORD *)Address = 0;
      v174 = 0;
      *(_DWORD *)v183 = v64;
    }
    else
    {
      *(_DWORD *)Address = -1073741790;
      v174 = -1073741790;
      *(_DWORD *)v183 = 0;
    }
    v167 = 0;
    v35 = v165;
    goto LABEL_153;
  }
LABEL_171:
  v72 = 8LL * v190;
  if ( a12 )
  {
    Pool2 = (int *)ExAllocatePool2(0x100uLL, 8LL * v190, 0x61476553u);
    v200 = Pool2;
    if ( !Pool2 )
    {
      ExReleaseResourceLite(v65[6]);
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
      SeReleaseSubjectContext(&SubjectContext);
      v23 = -1073741670;
      goto LABEL_352;
    }
    v74 = &Pool2[v190];
  }
  else
  {
    Pool2 = &v209;
    v200 = &v209;
    v74 = &v211;
  }
  Src = v74;
  LODWORD(v225) = v177;
  v164 = v64;
  v75 = v182;
  SepAccessCheck(
    v53,
    v199,
    SubjectContext.PrimaryToken,
    (_DWORD)v65,
    v59,
    (__int64)v201,
    v182,
    (__int64)&v228,
    v164,
    v165,
    (__int64)Pool2,
    0LL,
    (__int64)v74,
    a12,
    v166,
    (__int64)&v225,
    (__int64)&v192,
    0LL,
    0LL);
  v76 = (int *)Src;
  if ( !SepRmEnforceCap || *(int *)Src < 0 || !v171 )
  {
    v80 = (char *)v200;
LABEL_260:
    ExReleaseResourceLite(*((PERESOURCE *)Object + 6));
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    SeReleaseSubjectContext(&SubjectContext);
    if ( (v173 & 0x2000000) != 0 )
    {
      if ( !v181 || !*(_WORD *)((char *)&v226 + 5) && (*((_DWORD *)Object + 50) & 0x3000000) != 0x3000000 )
      {
        v115 = a6;
        v116 = a6;
        v36 = a12;
        if ( !a12 )
          v116 = 0;
        if ( !DWORD2(v202) || BYTE5(v202) && BYTE4(v202) && BYTE6(v202) )
          goto LABEL_307;
        if ( v116 )
        {
          v119 = v76;
          v120 = v80 - (char *)v76;
          v121 = v116;
          v122 = v202;
          do
          {
            v123 = *(int *)((char *)v119 + v120);
            v124 = v123 & v122;
            if ( (v123 & v122) != v123 )
            {
              *(int *)((char *)v119 + v120) = v124;
              v125 = 0;
              if ( !v124 )
                v125 = -1073741790;
              *v119 = v125;
            }
            ++v119;
            --v121;
          }
          while ( v121 );
        }
        else
        {
          v117 = *(_DWORD *)v80 & v202;
          if ( v117 != *(_DWORD *)v80 )
          {
            *(_DWORD *)v80 = v117;
            v118 = -1073741790;
            if ( v117 )
              v118 = 0;
            *v76 = v118;
          }
        }
LABEL_306:
        v115 = a6;
LABEL_307:
        if ( (v173 & 0x2000000) != 0 )
        {
          if ( !v36 )
            v115 = 0;
          v172 = v115;
          v169 = 0;
          v137 = (int)v198;
          if ( (_DWORD)v198 != -1 )
          {
            if ( v115 )
            {
              v140 = v76;
              v141 = v80 - (char *)v76;
              v142 = v115;
              do
              {
                v143 = v137 & *(int *)((char *)v140 + v141);
                if ( v143 != *(int *)((char *)v140 + v141) )
                {
                  v169 = 1;
                  *(int *)((char *)v140 + v141) = v143;
                  v144 = 0;
                  if ( !v143 )
                    v144 = -1073741790;
                  *v140 = v144;
                }
                ++v140;
                --v142;
              }
              while ( v142 );
              v115 = v172;
            }
            else
            {
              v138 = (unsigned int)v198 & *(_DWORD *)v80;
              if ( v138 != *(_DWORD *)v80 )
              {
                v169 = 1;
                *(_DWORD *)v80 = v138;
                v139 = -1073741790;
                if ( v138 )
                  v139 = 0;
                *v76 = v139;
              }
            }
          }
          v145 = v173;
          v146 = v204;
          v170 = 0;
          if ( (_DWORD)v204 != -1 )
          {
            if ( v115 )
            {
              v148 = (int *)v80;
              v149 = (char *)v76 - v80;
              v150 = v115;
              do
              {
                v151 = *v148 & v146;
                if ( v151 != *v148 )
                {
                  v170 = 1;
                  *v148 = v151;
                  if ( (v145 & 0x2000000) != 0 )
                  {
                    v152 = -1073741790;
                    if ( v151 )
                      v152 = 0;
                    *(int *)((char *)v148 + v149) = v152;
                  }
                  else
                  {
                    *(int *)((char *)v148 + v149) = -1073741790;
                  }
                }
                ++v148;
                --v150;
              }
              while ( v150 );
            }
            else
            {
              v147 = v204 & *(_DWORD *)v80;
              if ( v147 != *(_DWORD *)v80 )
              {
                v170 = 1;
                *(_DWORD *)v80 = v147;
                if ( (v145 & 0x2000000) != 0 && v147 )
                  v15 = 0;
                *v76 = v15;
              }
            }
          }
        }
        PreviousMode = (unsigned __int64)Address;
        *(_DWORD *)Address = *v76;
        v153 = v183;
        *(_DWORD *)v183 = *(_DWORD *)v80;
        v174 = *v76;
        v14 = v191;
        if ( SepRmEnforceCap && v168 && *v76 >= 0 )
        {
          *(_DWORD *)PreviousMode = *v191;
          *v153 &= *(_DWORD *)v194;
          v174 = *v14;
        }
        if ( v36 )
        {
          v154 = 1LL;
          while ( 1 )
          {
            v176 = v154;
            if ( (unsigned int)v154 >= (unsigned int)v75 )
              break;
            v155 = v154;
            *(_DWORD *)(PreviousMode + 4 * v154) = v76[v154];
            v156 = &v153[v154];
            *v156 = *(_DWORD *)&v80[4 * v154];
            if ( SepRmEnforceCap && v168 && v76[v155] >= 0 )
            {
              *(_DWORD *)(PreviousMode + 4 * v154) = v14[v154];
              *v156 &= *(_DWORD *)((char *)v194 + v155 * 4);
            }
            v154 = (unsigned int)(v176 + 1);
            v153 = v183;
          }
        }
        v23 = 0;
        v167 = 0;
        v35 = v165;
        goto LABEL_355;
      }
    }
    else if ( v181 && !*(_WORD *)((char *)&v226 + 5) )
    {
      if ( (*((_DWORD *)Object + 50) & 0x3000000) != 0x3000000 || HIDWORD(v225) )
      {
        v36 = a12;
        if ( a12 )
        {
          v136 = 0;
          PreviousMode = (unsigned __int64)v183;
          v14 = (int *)Address;
          while ( 1 )
          {
            v176 = v136;
            if ( v136 >= (unsigned int)v75 )
              break;
            v14[v136] = -1073741790;
            *(_DWORD *)(PreviousMode + 4LL * v136++) = 0;
          }
        }
        else
        {
          *(_DWORD *)Address = -1073741790;
          *(_DWORD *)v183 = 0;
        }
        v174 = -1073741790;
        v23 = 0;
        v167 = 0;
        v35 = v165;
        goto LABEL_355;
      }
      HIBYTE(v226) = 1;
      v36 = a12;
      if ( a12 )
      {
        v126 = 0;
        v176 = 0;
        if ( (unsigned int)v75 < 0x10
          || (v176 = 0, v127 = (unsigned int)(v75 - 1), v80 <= (char *)&v76[v127]) && &v80[4 * v127] >= (char *)v76 )
        {
          v128 = v179;
        }
        else
        {
          v128 = v179;
          v129 = _mm_or_ps(
                   (__m128)_mm_shuffle_epi32(_mm_cvtsi32_si128(v173), 0),
                   (__m128)_mm_shuffle_epi32(_mm_cvtsi32_si128(v179), 0));
          v130 = 8;
          do
          {
            *(_OWORD *)&v76[v126] = 0LL;
            *(__m128 *)&v80[4 * v126] = v129;
            v131 = v130 - 4;
            *(_OWORD *)&v76[v131] = 0LL;
            *(__m128 *)&v80[4 * v131] = v129;
            *(_OWORD *)&v76[v130] = 0LL;
            *(__m128 *)&v80[4 * v130] = v129;
            v132 = v130 + 4;
            *(_OWORD *)&v76[v132] = 0LL;
            *(__m128 *)&v80[4 * v132] = v129;
            v126 += 16;
            v176 = v126;
            v130 += 16;
          }
          while ( v126 < (a6 & 0xFFFFFFF0) );
        }
        if ( v126 < (unsigned int)v75 )
        {
          v133 = v128 | v173;
          v134 = (unsigned int *)&v80[4 * v126];
          v135 = (unsigned int)v75 - v126;
          do
          {
            *(unsigned int *)((char *)v134 + (char *)v76 - v80) = 0;
            *v134++ = v133;
            --v135;
          }
          while ( v135 );
        }
      }
      else
      {
        *v76 = 0;
        *(_DWORD *)v80 = v179 | v173;
      }
      goto LABEL_306;
    }
    v36 = a12;
    goto LABEL_306;
  }
  v36 = a12;
  if ( a12 )
  {
    v77 = (char *)ExAllocatePool2(0x100uLL, v72, 0x61476553u);
    v194 = v77;
    if ( !v77 )
    {
      ExReleaseResourceLite(*((PERESOURCE *)Object + 6));
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
      SeReleaseSubjectContext(&SubjectContext);
      v23 = -1073741670;
      v167 = -1073741670;
      v35 = v165;
      goto LABEL_355;
    }
    v78 = &v77[4 * v75];
  }
  else
  {
    v194 = &v206;
    v78 = (char *)&v207;
  }
  v191 = (int *)v78;
  v79 = *v76;
  v80 = (char *)v200;
  v81 = *(_DWORD *)v200;
  v177 = *(_DWORD *)v200;
  LOBYTE(v186) = 0;
  if ( (_DWORD)v75 )
  {
    v23 = SepCopyObjectTypeList(v201, (unsigned int)v75, &v205);
    v167 = v23;
    if ( v23 < 0 )
    {
      v35 = v165;
      goto LABEL_355;
    }
    LODWORD(v75) = v182;
    v81 = v177;
  }
  v82 = 0;
  Length_4 = 0;
  v83 = v197;
  if ( !HIDWORD(v197[2].Linkage.Blink) )
  {
LABEL_252:
    *v76 = v79;
    *(_DWORD *)v80 &= v81;
    goto LABEL_260;
  }
  while ( 1 )
  {
    v84 = *(&v83[2].Signature + v82);
    if ( !*(_QWORD *)(v84 + 24) )
      break;
    v85 = v192;
    if ( !v192 )
    {
      v86 = AuthzBasepInitializeResourceClaimsFromSacl((__int64)Sacl, (__int64 *)&v192);
      v87 = (unsigned __int8)v186;
      if ( v86 < 0 )
        v87 = 1;
      v186 = v87;
      v85 = v192;
    }
    v88 = Object;
    v89 = (_QWORD *)*((_QWORD *)Object + 137);
    v90 = v89 ? (void *)v89[75] : 0LL;
    v91 = v89 ? (void *)v89[73] : 0LL;
    v92 = v89 ? (void *)v89[74] : 0LL;
    v93 = v89 ? (void *)v89[72] : 0LL;
    v94 = AuthzBasepEvaluateAceCondition(
            Object,
            *((void **)Object + 97),
            v85,
            v93,
            v92,
            v91,
            v90,
            *(_DWORD **)(v84 + 24),
            *(_DWORD *)(v84 + 16),
            1u,
            0,
            &v189);
    v167 = v94;
    v95 = v189;
    if ( v189 == 1 )
      break;
    if ( v94 < 0 )
      goto LABEL_256;
    if ( (v88[50] & 0x10) != 0 )
    {
      v96 = (_QWORD *)*((_QWORD *)v88 + 137);
      if ( v96 )
        v97 = (void *)v96[75];
      else
        v97 = 0LL;
      if ( v96 )
        v98 = (void *)v96[73];
      else
        v98 = 0LL;
      if ( v96 )
        v99 = (void *)v96[74];
      else
        v99 = 0LL;
      if ( v96 )
        v100 = (void *)v96[72];
      else
        v100 = 0LL;
      v167 = AuthzBasepEvaluateAceCondition(
               v88,
               *((void **)v88 + 97),
               v192,
               v100,
               v99,
               v98,
               v97,
               *(_DWORD **)(v84 + 24),
               *(_DWORD *)(v84 + 16),
               1u,
               1u,
               &v189);
      if ( v167 < 0 )
      {
LABEL_256:
        v114 = (struct _ERESOURCE *)*((_QWORD *)v88 + 6);
        goto LABEL_257;
      }
      v95 = v189;
    }
    if ( (_BYTE)v186 || v95 == 1 )
      break;
    LODWORD(v75) = v182;
    v81 = v177;
LABEL_254:
    v82 = Length_4 + 1;
    Length_4 = v82;
    v83 = v197;
    if ( v82 >= HIDWORD(v197[2].Linkage.Blink) )
    {
      *v76 = v79;
      *(_DWORD *)v80 &= v81;
      goto LABEL_260;
    }
  }
  v101 = *(unsigned __int8 **)(v84 + 32);
  v102 = RtlCreateSecurityDescriptor(SecurityDescriptor, *v101);
  if ( v102 >= 0 )
  {
    WORD1(SecurityDescriptor[0]) |= 3u;
    v103 = *((_WORD *)v101 + 1);
    v104 = (v103 & 8) != 0;
    if ( (v103 & 4) != 0 )
    {
      if ( v103 >= 0 )
      {
        v105 = (ACL *)*((_QWORD *)v101 + 4);
      }
      else
      {
        v106 = *((unsigned int *)v101 + 4);
        v105 = (_DWORD)v106 ? (ACL *)&v101[v106] : 0LL;
      }
    }
    else
    {
      v105 = 0LL;
    }
    v102 = RtlSetDaclSecurityDescriptor(SecurityDescriptor, (*((_WORD *)v101 + 1) & 4) != 0, v105, v104);
    if ( v102 >= 0 )
      v102 = RtlSetSaclSecurityDescriptor(SecurityDescriptor, 1u, Sacl, 0);
  }
  v167 = v102;
  if ( v102 >= 0 )
  {
    v107 = v173;
    if ( (*(_DWORD *)(v84 + 48) & 1) != 0 )
    {
      if ( (v173 & 0x2000000) == 0 )
        v107 = v179 | v173;
      v108 = 0;
    }
    else
    {
      v108 = v179;
    }
    v109 = v191;
    v110 = (int *)v194;
    v75 = v182;
    SepAccessCheck(
      (unsigned int)SecurityDescriptor,
      v199,
      SubjectContext.PrimaryToken,
      (_DWORD)Object,
      v107,
      (__int64)v205,
      v182,
      (__int64)&v228,
      v108,
      v165,
      (__int64)v194,
      0LL,
      (__int64)v191,
      a12,
      v166,
      (__int64)&v225,
      (__int64)&v192,
      0LL,
      0LL);
    if ( v168 )
      v81 = *v110 & v177;
    else
      v81 = *v110;
    v177 = v81;
    if ( v81 )
      v79 = *v109;
    else
      v79 = -1073741790;
    v168 = 1;
    if ( v205 && (_DWORD)v75 )
    {
      v111 = (char *)v201 + 28;
      v112 = (_BYTE *)v205 - (_BYTE *)v201;
      v113 = v75;
      do
      {
        *v111 &= *(_DWORD *)((char *)v111 + v112);
        v111[1] |= *(_DWORD *)((char *)v111 + v112 + 4);
        v111 += 12;
        --v113;
      }
      while ( v113 );
    }
    if ( v79 < 0 )
      goto LABEL_252;
    goto LABEL_254;
  }
  v114 = (struct _ERESOURCE *)*((_QWORD *)Object + 6);
LABEL_257:
  ExReleaseResourceLite(v114);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  SeReleaseSubjectContext(&SubjectContext);
  v23 = v167;
LABEL_353:
  v35 = v165;
LABEL_354:
  v36 = a12;
LABEL_355:
  if ( v184 && Object )
  {
    if ( v169 || v170 )
    {
LABEL_364:
      v157 = KeGetCurrentThread();
      --v157->KernelApcDisable;
      v158 = (PERESOURCE *)Object;
      ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
      SeLogAccessFailure(v158, v184, v179 | v173, v174 >= 0);
      ExReleaseResourceLite(v158[6]);
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
      v23 = v167;
      goto LABEL_365;
    }
    if ( HIDWORD(v225) || (*((_DWORD *)Object + 50) & 0x4000) == 0 )
      goto LABEL_365;
    if ( v23 >= 0 )
    {
      if ( v174 < 0 || HIBYTE(v226) )
        goto LABEL_364;
LABEL_365:
      if ( v23 >= 0
        && v174 < 0
        && !HIDWORD(v225)
        && (*((_DWORD *)Object + 50) & 0x4000) != 0
        && (_BYTE)v227
        && ((unsigned int)v226 & v173 & ~(DWORD1(v225) | DWORD2(v225) | 0x2000000)) == (v173 & ~(DWORD1(v225) | DWORD2(v225) | 0x2000000)) )
      {
        SepLogLpacAccessFailure();
      }
    }
  }
  if ( v36 )
  {
    if ( v200 )
      ExFreePoolWithTag(v200, 0);
    if ( v194 )
      ExFreePoolWithTag(v194, 0);
  }
  if ( Object )
    ObfDereferenceObjectWithTag(Object, 0x74726853u);
  if ( v201 )
    ExFreePoolWithTag(v201, 0);
  if ( v199 )
  {
    LOBYTE(PreviousMode) = 1;
    SeReleaseSid(v199, v35, PreviousMode, v14);
  }
  if ( v184 )
    SeReleaseSecurityDescriptor(v184, v35, 0LL, v14);
  if ( v171 )
  {
    Blink = (volatile signed __int64 *)v197[1].Linkage.Blink;
    if ( Blink )
    {
      v160 = _InterlockedExchangeAdd64(Blink + 5, 0xFFFFFFFFFFFFFFFFuLL);
      v161 = v160 <= 1;
      v162 = v160 - 1;
      if ( v161 )
      {
        if ( v162 )
          __fastfail(0xEu);
        SepRmDestroyCapTable((PVOID)Blink);
      }
      v23 = v167;
    }
  }
  if ( v205 )
    ExFreePoolWithTag(v205, 0);
  SepFreeResourceInfo((char *)v192);
  return (unsigned int)v23;
}
