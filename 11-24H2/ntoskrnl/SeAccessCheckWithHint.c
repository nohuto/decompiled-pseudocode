/*
 * XREFs of SeAccessCheckWithHint @ 0x1403B6970
 * Callers:
 *     ExCpuSetResourceManagerAccessCheck @ 0x1403B5184 (ExCpuSetResourceManagerAccessCheck.c)
 *     RtlCheckTokenCapability @ 0x1403B5260 (RtlCheckTokenCapability.c)
 *     RtlCheckTokenMembershipEx @ 0x1403B5770 (RtlCheckTokenMembershipEx.c)
 *     SeAccessCheckFromState @ 0x1403B6390 (SeAccessCheckFromState.c)
 *     SeAccessCheckFromStateEx @ 0x1403B6860 (SeAccessCheckFromStateEx.c)
 *     SeAccessCheck @ 0x1403B6900 (SeAccessCheck.c)
 *     RtlpAllowsLowBoxAccess @ 0x14042492C (RtlpAllowsLowBoxAccess.c)
 *     PspCheckCpuPartitionCreateAccess @ 0x140776CD4 (PspCheckCpuPartitionCreateAccess.c)
 *     ExCheckFullProcessInformationAccess @ 0x1409470EC (ExCheckFullProcessInformationAccess.c)
 *     ObpVerifyAccessToBoundaryEntry @ 0x140A40460 (ObpVerifyAccessToBoundaryEntry.c)
 *     ExpCheckWakeTimerAccess @ 0x140A92B48 (ExpCheckWakeTimerAccess.c)
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
 *     SepAccessCheck @ 0x1404E76E0 (SepAccessCheck.c)
 *     Feature_DecoupleAppContainerAndIntegrityLevel__private_IsEnabledDeviceUsageNoInline @ 0x1405E2C90 (Feature_DecoupleAppContainerAndIntegrityLevel__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     SepRmDestroyCapTable @ 0x140796324 (SepRmDestroyCapTable.c)
 *     SeLockSubjectContext @ 0x14086C760 (SeLockSubjectContext.c)
 *     SeUnlockSubjectContext @ 0x14086C7C0 (SeUnlockSubjectContext.c)
 *     RtlSetDaclSecurityDescriptor @ 0x1409DFF30 (RtlSetDaclSecurityDescriptor.c)
 *     RtlCreateSecurityDescriptor @ 0x1409E16D0 (RtlCreateSecurityDescriptor.c)
 *     RtlSetSaclSecurityDescriptor @ 0x140A04030 (RtlSetSaclSecurityDescriptor.c)
 */

bool __fastcall SeAccessCheckWithHint(
        __int64 a1,
        char a2,
        int *a3,
        char a4,
        unsigned int a5,
        int a6,
        PRTL_DYNAMIC_HASH_TABLE_ENTRY a7,
        _DWORD *a8,
        char a9,
        unsigned int *a10,
        int *a11)
{
  unsigned int v12; // esi
  int v15; // r12d
  bool result; // al
  int v17; // eax
  __int64 v18; // rcx
  _DWORD *v19; // r13
  int v20; // eax
  bool v21; // zf
  char v22; // r8
  __int64 v23; // rax
  char v24; // di
  int v25; // eax
  __int64 v26; // rdx
  __int64 v27; // rax
  ACL *v28; // rax
  void *ScopedPolicySid; // rax
  int Cap; // eax
  _RTL_DYNAMIC_HASH_TABLE_ENTRY *v31; // rdx
  bool v32; // sf
  char v33; // al
  int v34; // ebx
  int v35; // ebx
  char v36; // di
  char IsOwner; // al
  __int16 v38; // cx
  __int64 v39; // rdx
  __int64 v40; // rax
  int v41; // eax
  int IsEnabledDeviceUsageNoInline; // eax
  _DWORD *v43; // r9
  __int64 v44; // r8
  _DWORD *v45; // r12
  char v46; // al
  PRTL_DYNAMIC_HASH_TABLE_ENTRY v47; // rdx
  int v48; // r12d
  void *v49; // r10
  int v50; // ecx
  __int64 v51; // rax
  __int64 v52; // r13
  PVOID v53; // r8
  int v54; // eax
  _DWORD *v55; // rdi
  _QWORD *v56; // rax
  void *v57; // r9
  void *v58; // rcx
  void *v59; // rdx
  int v60; // eax
  int v61; // ecx
  int v62; // ebx
  _QWORD *v63; // rax
  void *v64; // r9
  void *v65; // rcx
  void *v66; // rdx
  void *v67; // r8
  unsigned __int8 *v68; // rbx
  NTSTATUS v69; // edi
  __int16 v70; // dx
  ACL *v71; // r8
  __int64 v72; // rax
  int v73; // eax
  int v74; // ecx
  volatile signed __int64 *Blink; // rcx
  signed __int64 v76; // rax
  bool v77; // cc
  signed __int64 v78; // rax
  PVOID v79; // rcx
  volatile signed __int64 *v80; // rcx
  signed __int64 v81; // rax
  signed __int64 v82; // rax
  PVOID v83; // rcx
  int v84; // r8d
  int v85; // ecx
  int v86; // r9d
  int v87; // eax
  int v88; // edx
  char v89; // al
  int v90; // ecx
  char v91; // di
  volatile signed __int64 *v92; // rcx
  signed __int64 v93; // rax
  signed __int64 v94; // rax
  _DWORD *v95; // rbx
  bool v97; // [rsp+A1h] [rbp-7Fh] BYREF
  char v98; // [rsp+A2h] [rbp-7Eh]
  char v99; // [rsp+A3h] [rbp-7Dh]
  char v100; // [rsp+A4h] [rbp-7Ch]
  char v101; // [rsp+A5h] [rbp-7Bh]
  char v102; // [rsp+A6h] [rbp-7Ah]
  char v103; // [rsp+A7h] [rbp-79h]
  __int64 v104; // [rsp+A8h] [rbp-78h]
  int v105; // [rsp+B0h] [rbp-70h]
  PVOID P; // [rsp+B8h] [rbp-68h] BYREF
  int v107; // [rsp+C0h] [rbp-60h] BYREF
  int v108; // [rsp+C4h] [rbp-5Ch]
  int *v109; // [rsp+C8h] [rbp-58h]
  int v110; // [rsp+D0h] [rbp-50h] BYREF
  int v111; // [rsp+D4h] [rbp-4Ch]
  int v112; // [rsp+D8h] [rbp-48h] BYREF
  int v113; // [rsp+DCh] [rbp-44h]
  PRTL_DYNAMIC_HASH_TABLE_ENTRY v114; // [rsp+E0h] [rbp-40h]
  int v115; // [rsp+E8h] [rbp-38h] BYREF
  int v116; // [rsp+ECh] [rbp-34h]
  PACL Sacl; // [rsp+F0h] [rbp-30h]
  _DWORD *v118; // [rsp+F8h] [rbp-28h]
  __int128 v119; // [rsp+100h] [rbp-20h] BYREF
  PRTL_DYNAMIC_HASH_TABLE_ENTRY v120; // [rsp+110h] [rbp-10h] BYREF
  _DWORD *v121; // [rsp+118h] [rbp-8h]
  int v122; // [rsp+120h] [rbp+0h] BYREF
  _OWORD SecurityDescriptor[2]; // [rsp+128h] [rbp+8h] BYREF
  __int64 v124; // [rsp+148h] [rbp+28h]
  int v125; // [rsp+150h] [rbp+30h] BYREF
  __int128 v126; // [rsp+154h] [rbp+34h]
  __int64 v127; // [rsp+164h] [rbp+44h]

  v12 = a5;
  v124 = 0LL;
  v99 = 0;
  v100 = 0;
  *a10 = 0;
  v104 = a1;
  v15 = 0;
  v114 = a7;
  v121 = a8;
  v109 = (int *)a10;
  v97 = 0;
  v127 = 0LL;
  Sacl = 0LL;
  v120 = 0LL;
  P = 0LL;
  v107 = 0;
  *a11 = -1073741790;
  v110 = 0;
  v115 = -1073741790;
  v112 = -1;
  v122 = -1;
  v113 = a2 & 8;
  v119 = 0LL;
  v126 = 0LL;
  memset(SecurityDescriptor, 0, sizeof(SecurityDescriptor));
  if ( a7 )
    a7->Linkage.Flink = 0LL;
  if ( !a9 )
  {
    if ( (a5 & 0x2000000) != 0 )
      v12 = a8[3] | a5 & 0xFDFFFFFF;
    result = 1;
    *a10 = a6 | v12;
    *a11 = 0;
    return result;
  }
  if ( !a1 )
    goto LABEL_237;
  if ( *(_QWORD *)a3 && a3[2] < 2 )
  {
    *a11 = -1073741659;
    return 0;
  }
  if ( !a5 )
  {
    if ( a6 )
    {
      *a10 = a6;
      *a11 = 0;
      if ( a7 )
        a7->Linkage.Flink = 0LL;
      return 1;
    }
LABEL_237:
    *a11 = -1073741790;
    return 0;
  }
  if ( !a4 )
  {
    SeLockSubjectContext((PSECURITY_SUBJECT_CONTEXT)a3);
    a1 = v104;
  }
  v17 = SepTrustLevelCheck(a1, a1, a3, 0LL, 0LL, 0, &v112);
  *a11 = v17;
  if ( v17 < 0 )
    goto LABEL_234;
  v18 = a5;
  LODWORD(v18) = a5 & 0xFDFFFFFF;
  if ( (v112 & a5 & 0xFDFFFFFF) != (a5 & 0xFDFFFFFF) )
  {
    *a11 = -1073741790;
    if ( !v113 )
    {
      v95 = *(_DWORD **)a3;
      if ( !*(_QWORD *)a3 )
        v95 = (_DWORD *)*((_QWORD *)a3 + 2);
      SepLocateTokenTrustLevel(a3);
      SeLogAccessFailure(v95, v104, a6 | a5, 0);
    }
LABEL_234:
    v21 = a4 == 0;
    goto LABEL_235;
  }
  *a11 = 0;
  v19 = *(_DWORD **)a3;
  v118 = v19;
  if ( !v19 )
  {
    v19 = (_DWORD *)*((_QWORD *)a3 + 2);
    v118 = v19;
  }
  if ( (a2 & 4) == 0 )
  {
    v20 = SepFilterCheck(v104, (unsigned int)&P, (_DWORD)v19, 0, (__int64)&v122);
    *a11 = v20;
    if ( v20 < 0 )
    {
LABEL_24:
      v21 = a4 == 0;
      goto LABEL_235;
    }
    v18 = a5;
    LODWORD(v18) = a5 & 0xFDFFFFFF;
    if ( (v122 & a5 & 0xFDFFFFFF) == (a5 & 0xFDFFFFFF) )
    {
      *a11 = 0;
      goto LABEL_27;
    }
    *a11 = -1073741790;
    if ( v113 )
      goto LABEL_24;
    SeLogAccessFailure(v19, v104, a6 | a5, 0);
    v21 = a4 == 0;
LABEL_235:
    if ( v21 )
      SeUnlockSubjectContext((PSECURITY_SUBJECT_CONTEXT)a3);
    return 0;
  }
LABEL_27:
  if ( (a2 & 2) == 0 )
  {
    v22 = 0;
    goto LABEL_33;
  }
  v22 = 1;
  if ( (v19[50] & 0x2000) == 0 )
  {
LABEL_33:
    LOBYTE(v18) = 0;
    goto LABEL_34;
  }
  v18 = 1LL;
LABEL_34:
  v102 = v18;
  LOBYTE(v105) = 0;
  if ( !SepAllowAccessUponLogoff && (v19[50] & 0x20) == 0 )
  {
    v23 = *((_QWORD *)v19 + 27);
    if ( v23 )
    {
      if ( (*(_DWORD *)(v23 + 40) & 0x20) != 0 )
      {
        v21 = a4 == 0;
        *a10 = 0;
        *a11 = -1073741790;
        goto LABEL_235;
      }
    }
  }
  v24 = 1;
  if ( !(_BYTE)v18 )
  {
    v25 = SepMandatoryIntegrityCheck(v121, v104, v22, (__int64)v19, 0, (__int64)&v119);
    *a11 = v25;
    if ( v25 < 0 )
    {
      v21 = a4 == 0;
      goto LABEL_235;
    }
    v18 = a5;
    LODWORD(v18) = a5 & 0xFDFFFFFF;
    if ( !DWORD2(v119) || ((unsigned int)v18 & (unsigned int)v119) == (_DWORD)v18 )
    {
      *a11 = 0;
      if ( (a5 & 0x2000000) != 0 && (v19[50] & 0x4000) != 0 )
      {
        v18 = (unsigned __int8)v105;
        if ( HIDWORD(v119) <= 0x2000 )
          v18 = 1LL;
        v105 = v18;
      }
    }
    else
    {
      *a11 = -1073741790;
      if ( (v19[50] & 0x4000) == 0 || HIDWORD(v119) > 0x2000 )
        goto LABEL_24;
      LOBYTE(v105) = 1;
    }
  }
  v26 = v104;
  if ( !SepRmEnforceCap )
    goto LABEL_66;
  v18 = *(unsigned __int16 *)(v104 + 2);
  if ( (v18 & 0x10) == 0 || KeGetCurrentIrql() >= 2u )
    goto LABEL_66;
  if ( (v18 & 0x8000u) == 0LL )
  {
    v28 = *(ACL **)(v104 + 24);
  }
  else
  {
    v27 = *(unsigned int *)(v104 + 12);
    if ( !(_DWORD)v27 )
    {
      Sacl = 0LL;
LABEL_66:
      v33 = 0;
      goto LABEL_67;
    }
    v28 = (ACL *)(v104 + v27);
  }
  Sacl = v28;
  if ( !v28 )
    goto LABEL_66;
  ScopedPolicySid = (void *)SepGetScopedPolicySid((__int64)v28);
  if ( !ScopedPolicySid )
  {
    v26 = v104;
    goto LABEL_66;
  }
  Cap = SepRmReferenceFindCap(ScopedPolicySid, &v120);
  v31 = v120;
  v32 = Cap < 0;
  v33 = 1;
  if ( v32 )
    v31 = (_RTL_DYNAMIC_HASH_TABLE_ENTRY *)SepRmDefaultCap;
  v120 = v31;
  v26 = v104;
  v99 = 1;
LABEL_67:
  if ( (a2 & 1) == 0 )
  {
    v24 = 0;
    v34 = a5 & 0x2060000;
    goto LABEL_72;
  }
  v34 = a5 & 0x2060000;
  if ( (a5 & 0x2060000) != 0 || v33 )
  {
LABEL_72:
    IsOwner = SepTokenIsOwner(v19, v26);
    v98 = IsOwner;
    if ( !IsOwner || !v34 )
    {
      v35 = a6;
      v36 = IsOwner;
      goto LABEL_89;
    }
    if ( !v24
      && ((v38 = *(_WORD *)(v104 + 2), (v38 & 4) != 0)
        ? (v38 >= 0
         ? (v39 = *(_QWORD *)(v104 + 32))
         : (v40 = *(unsigned int *)(v104 + 16), (_DWORD)v40)
         ? (v39 = v104 + v40)
         : (v39 = 0LL))
        : (v39 = 0LL),
          (unsigned __int8)RtlpOwnerAcesPresent(0LL, v39)) )
    {
      v35 = a6;
    }
    else
    {
      v15 = 393216;
      if ( (a5 & 0x2000000) == 0 )
        v15 = a5 & 0x60000;
      v12 = a5 & 0xFFF9FFFF;
      v41 = a6 | v15;
      v35 = a6 | v15;
      a6 |= v15;
      if ( !v99 )
      {
        v36 = 0;
        a6 = v41;
        v98 = 0;
        goto LABEL_89;
      }
    }
    v36 = v98;
    goto LABEL_89;
  }
  v35 = a6;
  v36 = 0;
  v98 = 0;
LABEL_89:
  IsEnabledDeviceUsageNoInline = Feature_DecoupleAppContainerAndIntegrityLevel__private_IsEnabledDeviceUsageNoInline(
                                   v18,
                                   v26);
  if ( !v12 && !v99 )
  {
    if ( IsEnabledDeviceUsageNoInline )
    {
      if ( (v19[50] & 0x6000) == 0x2000 || !v15 )
        goto LABEL_99;
    }
    else if ( (v19[50] & 0x2000) != 0 || !v15 )
    {
      goto LABEL_99;
    }
    if ( (v19[50] & 0x6000) == 0x2000 )
    {
LABEL_99:
      if ( !a4 )
        SeUnlockSubjectContext((PSECURITY_SUBJECT_CONTEXT)a3);
      *v109 = v35;
      result = 1;
      *a11 = 0;
      return result;
    }
  }
  v43 = *(_DWORD **)a3;
  v44 = *((_QWORD *)a3 + 2);
  v127 = 0LL;
  v125 = v15;
  v45 = v109;
  v126 = 0LL;
  v46 = SepAccessCheck(
          v104,
          0,
          v44,
          (_DWORD)v43,
          v12,
          0LL,
          0,
          (__int64)v121,
          v35,
          a9,
          (__int64)v109,
          (__int64)v114,
          (__int64)a11,
          0,
          v36,
          (__int64)&v125,
          (__int64)&P,
          (__int64)&v97,
          0LL);
  v47 = v120;
  v114 = v120;
  v103 = v46;
  if ( SepRmEnforceCap )
  {
    v48 = *a11;
    if ( *a11 >= 0 && v99 )
    {
      v49 = 0LL;
      LOBYTE(v35) = 0;
      v101 = 0;
      v111 = v35;
      v50 = *v109;
      v51 = 0LL;
      v116 = 0;
      v108 = v50;
      if ( HIDWORD(v120[2].Linkage.Blink) )
      {
        while ( 1 )
        {
          v52 = *(&v47[2].Signature + v51);
          if ( !*(_QWORD *)(v52 + 24) )
            goto LABEL_124;
          v53 = P;
          if ( !P )
          {
            v54 = AuthzBasepInitializeResourceClaimsFromSacl(Sacl, &P);
            v53 = P;
            v35 = (unsigned __int8)v35;
            if ( v54 < 0 )
              v35 = 1;
            v49 = 0LL;
            v111 = v35;
          }
          v55 = v118;
          v56 = (_QWORD *)*((_QWORD *)v118 + 137);
          if ( v56 )
          {
            v57 = (void *)v56[72];
            v58 = (void *)v56[74];
            v59 = (void *)v56[73];
            v49 = (void *)v56[75];
          }
          else
          {
            v57 = 0LL;
            v58 = 0LL;
            v59 = 0LL;
          }
          v60 = AuthzBasepEvaluateAceCondition(
                  v118,
                  *((void **)v118 + 97),
                  v53,
                  v57,
                  v58,
                  v59,
                  v49,
                  *(_DWORD **)(v52 + 24),
                  *(_DWORD *)(v52 + 16),
                  1u,
                  0,
                  &v107);
          v61 = v107;
          v62 = v60;
          if ( v107 == 1 )
            goto LABEL_124;
          if ( v60 < 0 )
            goto LABEL_148;
          if ( (v55[50] & 0x10) != 0 )
          {
            v63 = (_QWORD *)*((_QWORD *)v55 + 137);
            if ( v63 )
            {
              v64 = (void *)v63[72];
              v65 = (void *)v63[74];
              v66 = (void *)v63[73];
              v67 = (void *)v63[75];
            }
            else
            {
              v64 = 0LL;
              v65 = 0LL;
              v66 = 0LL;
              v67 = 0LL;
            }
            v62 = AuthzBasepEvaluateAceCondition(
                    v55,
                    *((void **)v55 + 97),
                    P,
                    v64,
                    v65,
                    v66,
                    v67,
                    *(_DWORD **)(v52 + 24),
                    *(_DWORD *)(v52 + 16),
                    1u,
                    1u,
                    &v107);
            if ( v62 < 0 )
            {
LABEL_148:
              if ( !a4 )
                SeUnlockSubjectContext((PSECURITY_SUBJECT_CONTEXT)a3);
              Blink = (volatile signed __int64 *)v114[1].Linkage.Blink;
              if ( Blink )
              {
                v76 = _InterlockedExchangeAdd64(Blink + 5, 0xFFFFFFFFFFFFFFFFuLL);
                v77 = v76 <= 1;
                v78 = v76 - 1;
                if ( v77 )
                {
                  if ( v78 )
                    __fastfail(0xEu);
                  SepRmDestroyCapTable((PVOID)Blink);
                }
              }
              v79 = P;
              *v109 = 0;
              *a11 = v62;
              SepFreeResourceInfo(v79);
              return 0;
            }
            v61 = v107;
          }
          LOBYTE(v35) = v111;
          if ( (_BYTE)v111 || v61 == 1 )
          {
LABEL_124:
            v68 = *(unsigned __int8 **)(v52 + 32);
            v69 = RtlCreateSecurityDescriptor(SecurityDescriptor, *v68);
            if ( v69 < 0
              || ((WORD1(SecurityDescriptor[0]) |= 3u, v70 = *((_WORD *)v68 + 1), (v70 & 4) != 0)
                ? (v70 >= 0
                 ? (v71 = (ACL *)*((_QWORD *)v68 + 4))
                 : (v72 = *((unsigned int *)v68 + 4), (_DWORD)v72)
                 ? (v71 = (ACL *)&v68[v72])
                 : (v71 = 0LL))
                : (v71 = 0LL),
                  (v69 = RtlSetDaclSecurityDescriptor(SecurityDescriptor, (v70 & 4) != 0, v71, (v70 & 8) != 0), v69 < 0)
               || (v69 = RtlSetSaclSecurityDescriptor(SecurityDescriptor, 1u, Sacl, 0), v69 < 0)) )
            {
              if ( !a4 )
                SeUnlockSubjectContext((PSECURITY_SUBJECT_CONTEXT)a3);
              v80 = (volatile signed __int64 *)v114[1].Linkage.Blink;
              if ( v80 )
              {
                v81 = _InterlockedExchangeAdd64(v80 + 5, 0xFFFFFFFFFFFFFFFFuLL);
                v77 = v81 <= 1;
                v82 = v81 - 1;
                if ( v77 )
                {
                  if ( v82 )
                    __fastfail(0xEu);
                  SepRmDestroyCapTable((PVOID)v80);
                }
              }
              v83 = P;
              *v109 = 0;
              *a11 = v69;
              SepFreeResourceInfo(v83);
              return 0;
            }
            v73 = v12;
            if ( (*(_DWORD *)(v52 + 48) & 1) != 0 )
            {
              v73 = a6 | v12;
              v74 = 0;
              if ( (v12 & 0x2000000) != 0 )
                v73 = v12;
            }
            else
            {
              v74 = a6;
            }
            v103 = SepAccessCheck(
                     (unsigned int)SecurityDescriptor,
                     0,
                     *((_QWORD *)a3 + 2),
                     *(_QWORD *)a3,
                     v73,
                     0LL,
                     0,
                     (__int64)v121,
                     v74,
                     a9,
                     (__int64)&v110,
                     0LL,
                     (__int64)&v115,
                     0,
                     v98,
                     (__int64)&v125,
                     (__int64)&P,
                     (__int64)&v97,
                     0LL);
            if ( v101 )
              v50 = v110 & v108;
            else
              v50 = v110;
            v108 = v50;
            if ( !v50 )
            {
              v48 = -1073741790;
LABEL_157:
              v19 = v118;
              break;
            }
            v48 = v115;
            v101 = 1;
            if ( v115 < 0 )
              goto LABEL_157;
            LOBYTE(v35) = v111;
          }
          else
          {
            v50 = v108;
          }
          v47 = v114;
          v51 = (unsigned int)(v116 + 1);
          v116 = v51;
          if ( (unsigned int)v51 >= HIDWORD(v114[2].Linkage.Blink) )
            goto LABEL_157;
          v49 = 0LL;
        }
      }
      v35 = a6;
      *a11 = v48;
      v45 = v109;
      *v109 &= v50;
      if ( *a11 < 0 )
        v97 = 0;
    }
    else
    {
      v45 = v109;
    }
  }
  v84 = DWORD2(v126);
  if ( v102 || (v12 & 0x2000000) == 0 )
  {
    if ( (_BYTE)v105 && !*(_WORD *)((char *)&v127 + 1) )
    {
      if ( (v19[50] & 0x3000000) != 0x3000000 || DWORD2(v126) )
      {
        v86 = -1073741790;
        v97 = 0;
        *a11 = -1073741790;
        *v45 = 0;
LABEL_189:
        if ( (v12 & 0x2000000) == 0 )
          goto LABEL_203;
        goto LABEL_190;
      }
      *a11 = 0;
      BYTE3(v127) = 1;
      *v45 = v35 | v12;
      v97 = 1;
    }
    v86 = -1073741790;
    goto LABEL_189;
  }
  if ( (_BYTE)v105 && (*(_WORD *)((char *)&v127 + 1) || (v19[50] & 0x3000000) == 0x3000000)
    || !DWORD2(v119)
    || BYTE5(v119) && BYTE4(v119) && BYTE6(v119)
    || (v85 = *v45 & v119, v85 == *v45) )
  {
    v86 = -1073741790;
  }
  else
  {
    *v45 = v85;
    v86 = -1073741790;
    v87 = -1073741790;
    if ( v85 )
      v87 = 0;
    *a11 = v87;
    v97 = v85 != 0;
  }
LABEL_190:
  v100 = 0;
  if ( v112 != -1 )
  {
    v88 = v112 & *v45;
    if ( v88 != *v45 )
    {
      v100 = 1;
      *v45 = v88;
      if ( v88 )
      {
        *a11 = 0;
        v97 = 1;
      }
      else
      {
        *a11 = -1073741790;
        v97 = 0;
      }
    }
  }
  v89 = 0;
  if ( v122 == -1 )
    goto LABEL_204;
  v90 = v122 & *v45;
  if ( v90 != *v45 )
  {
    *v45 = v90;
    v89 = 1;
    if ( (v12 & 0x2000000) != 0 )
    {
      if ( v90 )
        v86 = 0;
      *a11 = v86;
      v97 = v90 != 0;
    }
    else
    {
      *a11 = -1073741790;
      v97 = *v45 != 0;
    }
    goto LABEL_204;
  }
LABEL_203:
  v89 = 0;
LABEL_204:
  if ( v19 )
  {
    if ( (v100 || v89 || !v84 && (v19[50] & 0x4000) != 0 && (*a11 < 0 || BYTE3(v127))) && !v113 )
    {
      v91 = *a11 >= 0;
      SepLocateTokenTrustLevel(a3);
      SeLogAccessFailure(v19, v104, a6 | v12, v91);
      v84 = DWORD2(v126);
    }
    if ( *a11 < 0
      && !v84
      && (v19[50] & 0x4000) != 0
      && BYTE4(v127)
      && (HIDWORD(v126) & v12 & ~(DWORD1(v126) | (unsigned int)v126 | 0x2000000)) == (v12 & ~(DWORD1(v126) | (unsigned int)v126 | 0x2000000)) )
    {
      SepLogLpacAccessFailure();
    }
  }
  if ( v99 )
  {
    v92 = (volatile signed __int64 *)v114[1].Linkage.Blink;
    if ( v92 )
    {
      v93 = _InterlockedExchangeAdd64(v92 + 5, 0xFFFFFFFFFFFFFFFFuLL);
      v77 = v93 <= 1;
      v94 = v93 - 1;
      if ( v77 )
      {
        if ( v94 )
          __fastfail(0xEu);
        SepRmDestroyCapTable((PVOID)v92);
      }
    }
  }
  if ( !a4 )
    SeUnlockSubjectContext((PSECURITY_SUBJECT_CONTEXT)a3);
  SepFreeResourceInfo(P);
  return v103 && v97;
}
