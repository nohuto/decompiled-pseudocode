/*
 * XREFs of SeAccessCheckWithHint @ 0x140362560
 * Callers:
 *     SeAccessCheckFromState @ 0x140361D30 (SeAccessCheckFromState.c)
 *     SeAccessCheckFromStateEx @ 0x140362200 (SeAccessCheckFromStateEx.c)
 *     SeAccessCheck @ 0x1403624F0 (SeAccessCheck.c)
 *     RtlpAllowsLowBoxAccess @ 0x140435DDC (RtlpAllowsLowBoxAccess.c)
 *     RtlCheckTokenMembershipEx @ 0x140472DB0 (RtlCheckTokenMembershipEx.c)
 *     RtlCheckTokenCapability @ 0x14048E220 (RtlCheckTokenCapability.c)
 *     ExCpuSetResourceManagerAccessCheck @ 0x1404A9208 (ExCpuSetResourceManagerAccessCheck.c)
 *     PspCheckCpuPartitionCreateAccess @ 0x1407670E4 (PspCheckCpuPartitionCreateAccess.c)
 *     ExCheckFullProcessInformationAccess @ 0x140824EB8 (ExCheckFullProcessInformationAccess.c)
 *     ObpVerifyAccessToBoundaryEntry @ 0x140999270 (ObpVerifyAccessToBoundaryEntry.c)
 *     ExpCheckWakeTimerAccess @ 0x140A95FE8 (ExpCheckWakeTimerAccess.c)
 * Callees:
 *     SepMandatoryIntegrityCheck @ 0x140296910 (SepMandatoryIntegrityCheck.c)
 *     SepLocateTokenTrustLevel @ 0x14035FEB0 (SepLocateTokenTrustLevel.c)
 *     RtlIsValidProcessTrustLabelSid @ 0x1403616D0 (RtlIsValidProcessTrustLabelSid.c)
 *     SepFreeResourceInfo @ 0x140362310 (SepFreeResourceInfo.c)
 *     SepFilterCheck @ 0x140363580 (SepFilterCheck.c)
 *     SepAccessCheck @ 0x1403662B0 (SepAccessCheck.c)
 *     AuthzBasepEvaluateAceCondition @ 0x140367C20 (AuthzBasepEvaluateAceCondition.c)
 *     AuthzBasepInitializeResourceClaimsFromSacl @ 0x14036B400 (AuthzBasepInitializeResourceClaimsFromSacl.c)
 *     SeLogAccessFailure @ 0x1403CF70C (SeLogAccessFailure.c)
 *     SepGetScopedPolicySid @ 0x14045478C (SepGetScopedPolicySid.c)
 *     SepRmReferenceFindCap @ 0x1404547E4 (SepRmReferenceFindCap.c)
 *     SepLogLpacAccessFailure @ 0x14048CCB4 (SepLogLpacAccessFailure.c)
 *     SepBuildCapeSecurityDescriptor @ 0x1404D0670 (SepBuildCapeSecurityDescriptor.c)
 *     SepRmDereferenceCapTable @ 0x1404F2B84 (SepRmDereferenceCapTable.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memcmp @ 0x1406B4C10 (memcmp.c)
 *     SeLockSubjectContext @ 0x1409163C0 (SeLockSubjectContext.c)
 *     SeUnlockSubjectContext @ 0x140916420 (SeUnlockSubjectContext.c)
 */

bool __fastcall SeAccessCheckWithHint(
        __int64 a1,
        int a2,
        int *a3,
        unsigned __int8 a4,
        unsigned int a5,
        int a6,
        _QWORD *a7,
        _DWORD *a8,
        char a9,
        unsigned int *a10,
        int *a11)
{
  unsigned __int8 *v11; // r11
  unsigned int v12; // r15d
  char v13; // al
  unsigned __int64 v14; // rdx
  int v15; // edi
  unsigned __int64 v18; // r8
  __int16 v19; // r10
  __int64 v20; // r9
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rax
  int v24; // ebx
  int v25; // ebx
  __int64 v26; // rsi
  char v27; // al
  int v28; // eax
  char v29; // cl
  int v30; // eax
  char v31; // cl
  __int64 v32; // rax
  unsigned __int8 *v33; // r9
  __int64 v34; // rdx
  __int64 v35; // rax
  __int16 v36; // r11
  unsigned __int64 v37; // rax
  unsigned __int64 v38; // rax
  unsigned __int8 i; // r10
  int v40; // edi
  char v41; // r15
  void *v42; // rcx
  bool v43; // zf
  bool result; // al
  __int64 v45; // rax
  void *v46; // r9
  const void **v47; // rax
  unsigned int v48; // eax
  unsigned int j; // r8d
  __int64 v50; // rdi
  int v51; // r8d
  char v52; // di
  __int64 v53; // rdi
  char v54; // r8
  __int16 v55; // ax
  __int64 v56; // rax
  __int64 v57; // rcx
  _WORD *SeOwnerRightsSid; // rdx
  unsigned int v59; // eax
  char *v60; // rdi
  unsigned int v61; // r9d
  unsigned __int8 v62; // cl
  char *v63; // rcx
  int v64; // edx
  __int64 v65; // r9
  __int64 v66; // r8
  char v67; // al
  __int64 v68; // r9
  _DWORD *v69; // rdx
  _DWORD *v70; // rdi
  __int64 v71; // r8
  char v72; // r10
  __int64 v73; // rcx
  int v74; // eax
  _DWORD *v75; // r9
  __int64 v76; // r10
  int v77; // ecx
  char v78; // di
  __int64 v79; // rdx
  void *v80; // r10
  __int64 v81; // rax
  __int16 v82; // r11
  unsigned __int64 v83; // rax
  unsigned __int64 v84; // rax
  unsigned __int8 k; // r8
  int v86; // edi
  int v87; // ecx
  const void **v88; // rax
  unsigned int v89; // eax
  unsigned int m; // r9d
  void *v91; // rbx
  __int64 v92; // rax
  int v93; // ecx
  __int16 v94; // cx
  __int64 v95; // rax
  int v96; // eax
  __int64 v97; // r11
  unsigned int v98; // r8d
  int v99; // ecx
  __int64 v100; // r8
  int v101; // eax
  char *v102; // rcx
  unsigned __int8 *v103; // rax
  int v104; // ecx
  int v105; // eax
  int v106; // r9d
  int v107; // eax
  __int64 v108; // rcx
  void *ScopedPolicySid; // rax
  int Cap; // eax
  __int64 v111; // rdx
  _QWORD *v112; // rax
  __int64 v113; // r9
  __int64 v114; // rdx
  __int64 v115; // r10
  int v116; // ecx
  _QWORD *v117; // rax
  __int64 v118; // r9
  __int64 v119; // rcx
  __int64 v120; // rdx
  __int64 v121; // r8
  int v122; // ecx
  bool v123; // [rsp+A0h] [rbp-80h] BYREF
  unsigned __int8 v124; // [rsp+A1h] [rbp-7Fh]
  char v125; // [rsp+A2h] [rbp-7Eh]
  char v126; // [rsp+A3h] [rbp-7Dh]
  char v127; // [rsp+A4h] [rbp-7Ch]
  unsigned int v128; // [rsp+A8h] [rbp-78h]
  int v129; // [rsp+ACh] [rbp-74h]
  char v130; // [rsp+B0h] [rbp-70h]
  int v131; // [rsp+B4h] [rbp-6Ch]
  void *Buf1; // [rsp+B8h] [rbp-68h]
  int v133; // [rsp+C0h] [rbp-60h]
  unsigned __int64 v134; // [rsp+C8h] [rbp-58h]
  size_t Size; // [rsp+D0h] [rbp-50h]
  int *v136; // [rsp+D8h] [rbp-48h]
  PVOID P; // [rsp+E0h] [rbp-40h] BYREF
  int v138; // [rsp+E8h] [rbp-38h] BYREF
  BOOL v139; // [rsp+ECh] [rbp-34h]
  __int64 v140; // [rsp+F0h] [rbp-30h]
  int v141; // [rsp+F8h] [rbp-28h] BYREF
  int v142; // [rsp+FCh] [rbp-24h]
  int v143; // [rsp+100h] [rbp-20h] BYREF
  unsigned __int8 *v144; // [rsp+108h] [rbp-18h]
  unsigned __int64 v145; // [rsp+110h] [rbp-10h]
  __int128 v146; // [rsp+118h] [rbp-8h] BYREF
  const void **v147; // [rsp+128h] [rbp+8h]
  _DWORD *v148; // [rsp+130h] [rbp+10h]
  int v149; // [rsp+138h] [rbp+18h] BYREF
  _QWORD *v150; // [rsp+140h] [rbp+20h]
  _OWORD SecurityDescriptor[2]; // [rsp+148h] [rbp+28h] BYREF
  __int64 v152; // [rsp+168h] [rbp+48h]
  _OWORD v153[2]; // [rsp+170h] [rbp+50h] BYREF

  v11 = 0LL;
  v12 = a5;
  v13 = a2;
  v129 = a2;
  v14 = (unsigned __int64)a10;
  v124 = a4;
  v15 = a4;
  v136 = (int *)a10;
  v123 = 0;
  *a10 = 0;
  v18 = (unsigned __int64)a8;
  *a11 = -1073741790;
  v150 = a7;
  v148 = a8;
  v144 = 0LL;
  v152 = 0LL;
  v140 = 0LL;
  v127 = 0;
  v131 = 0;
  P = 0LL;
  v138 = 0;
  v141 = 0;
  v143 = -1073741790;
  v149 = -1;
  v142 = v13 & 8;
  v146 = 0LL;
  memset(v153, 0, 28);
  memset(SecurityDescriptor, 0, sizeof(SecurityDescriptor));
  if ( a7 )
    *a7 = 0LL;
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
  {
LABEL_170:
    *a11 = -1073741790;
    return 0;
  }
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
        *a7 = 0LL;
      return 1;
    }
    goto LABEL_170;
  }
  if ( !a4 )
  {
    SeLockSubjectContext((PSECURITY_SUBJECT_CONTEXT)a3);
    v11 = 0LL;
  }
  v19 = *(_WORD *)(a1 + 2);
  v20 = 0LL;
  if ( (v19 & 0x10) == 0 )
    goto LABEL_22;
  do
  {
    if ( v19 >= 0 )
    {
      v22 = *(_QWORD *)(a1 + 24);
    }
    else
    {
      v21 = *(unsigned int *)(a1 + 12);
      if ( !(_DWORD)v21 )
        goto LABEL_22;
      v22 = v21 + a1;
    }
    if ( !v22 )
      goto LABEL_22;
    v18 = *(unsigned __int16 *)(v22 + 4);
    v23 = v22 + 8;
    v14 = 0LL;
    while ( 1 )
    {
      if ( (unsigned int)v14 >= (unsigned int)v18 )
        goto LABEL_22;
      if ( (unsigned int)v14 >= (unsigned int)v20 && *(_BYTE *)v23 == 20 )
        break;
      v14 = (unsigned int)(v14 + 1);
      v23 += *(unsigned __int16 *)(v23 + 2);
    }
    if ( (*(_BYTE *)(v23 + 1) & 8) == 0 )
      break;
    v20 = (unsigned int)(v14 + 1);
  }
  while ( v23 );
  if ( !v23 )
    goto LABEL_22;
  v24 = *(_DWORD *)(v23 + 4);
  v18 = v23 + 8;
  if ( v23 == -8 )
    goto LABEL_22;
  if ( !*(_QWORD *)a3 )
    goto LABEL_188;
  v45 = *((_QWORD *)a3 + 2);
  v46 = *(void **)(*(_QWORD *)a3 + 1104LL);
  if ( *(_QWORD *)(v45 + 1104) && !RtlIsValidProcessTrustLabelSid(*(PSID *)(v45 + 1104)) )
    goto LABEL_179;
  if ( !v46 )
    goto LABEL_68;
  if ( !RtlIsValidProcessTrustLabelSid(v46) )
    goto LABEL_179;
  if ( !v76 )
  {
    if ( !v75[2] )
      goto LABEL_177;
LABEL_188:
    v75 = *(_DWORD **)(*((_QWORD *)a3 + 2) + 1104LL);
    goto LABEL_177;
  }
  if ( *(_DWORD *)(v76 + 8) < v75[2] || *(_DWORD *)(v76 + 12) < v75[3] )
    goto LABEL_188;
LABEL_177:
  if ( v75 && !RtlIsValidProcessTrustLabelSid(v75) )
    goto LABEL_179;
LABEL_68:
  if ( !RtlIsValidProcessTrustLabelSid((PSID)v18) )
  {
LABEL_179:
    *a11 = -1073741811;
    goto LABEL_56;
  }
  if ( v20 )
  {
    if ( *(_DWORD *)(v20 + 8) < *(_DWORD *)(v18 + 8) || *(_DWORD *)(v20 + 12) < *(_DWORD *)(v18 + 12) )
      goto LABEL_190;
LABEL_22:
    v25 = -1;
    goto LABEL_23;
  }
  if ( !*(_DWORD *)(v18 + 8) )
    goto LABEL_22;
LABEL_190:
  v25 = v24 | 0x1000000;
LABEL_23:
  if ( (v25 & a5 & 0xFDFFFFFF) != (a5 & 0xFDFFFFFF) )
  {
    v43 = v142 == 0;
    *a11 = -1073741790;
    if ( !v43 )
      goto LABEL_56;
    v91 = *(void **)a3;
    if ( !*(_QWORD *)a3 )
      v91 = (void *)*((_QWORD *)a3 + 2);
    v41 = a6 | a5;
    SepLocateTokenTrustLevel(a3);
    v42 = v91;
    goto LABEL_55;
  }
  *a11 = (int)v11;
  v26 = *(_QWORD *)a3;
  if ( !*(_QWORD *)a3 )
    v26 = *((_QWORD *)a3 + 2);
  v27 = v129;
  if ( (v129 & 4) == 0 )
  {
    v28 = SepFilterCheck(a1, (unsigned int)&P, v26, 0, (__int64)&v149);
    *a11 = v28;
    if ( v28 < 0 )
      goto LABEL_56;
    if ( (v149 & a5 & 0xFDFFFFFF) == (a5 & 0xFDFFFFFF) )
    {
      v27 = v129;
      v11 = 0LL;
      *a11 = 0;
      goto LABEL_30;
    }
    v43 = v142 == 0;
    *a11 = -1073741790;
    if ( !v43 )
    {
LABEL_56:
      v43 = (_BYTE)v15 == 0;
      goto LABEL_57;
    }
    v41 = a6 | a5;
    v42 = (void *)v26;
LABEL_55:
    SeLogAccessFailure(v42, a1, v41, 0);
    goto LABEL_56;
  }
LABEL_30:
  if ( (v27 & 2) != 0 )
  {
    LOBYTE(v18) = 1;
    if ( (*(_DWORD *)(v26 + 200) & 0x2000) != 0 )
    {
      v29 = 1;
      goto LABEL_33;
    }
  }
  else
  {
    LOBYTE(v18) = 0;
  }
  v29 = 0;
LABEL_33:
  LOBYTE(v15) = 0;
  v130 = v29;
  v139 = v15;
  if ( !SepAllowAccessUponLogoff && (*(_DWORD *)(v26 + 200) & 0x20) == 0 )
  {
    v92 = *(_QWORD *)(v26 + 216);
    if ( v92 )
    {
      if ( (*(_DWORD *)(v92 + 32) & 0x20) != 0 )
      {
        *v136 = (int)v11;
        *a11 = -1073741790;
LABEL_169:
        v43 = v124 == 0;
LABEL_57:
        if ( !v43 )
          return 0;
LABEL_58:
        SeUnlockSubjectContext((PSECURITY_SUBJECT_CONTEXT)a3);
        return 0;
      }
    }
  }
  if ( !v29 )
  {
    v30 = SepMandatoryIntegrityCheck(v148, a1, v18, v26, 0, (__int64)&v146);
    *a11 = v30;
    if ( v30 < 0 )
    {
      if ( v124 )
        return 0;
      goto LABEL_58;
    }
    if ( DWORD2(v146) && (a5 & 0xFDFFFFFF & (unsigned int)v146) != (a5 & 0xFDFFFFFF) )
    {
      *a11 = -1073741790;
      if ( (*(_DWORD *)(v26 + 200) & 0x4000) == 0 || HIDWORD(v146) > 0x2000 )
        goto LABEL_169;
      LOBYTE(v139) = 1;
      v11 = 0LL;
    }
    else
    {
      v11 = 0LL;
      *a11 = 0;
      if ( (a5 & 0x2000000) != 0 && (*(_DWORD *)(v26 + 200) & 0x4000) != 0 )
        v139 = HIDWORD(v146) <= 0x2000;
    }
  }
  if ( !SepRmEnforceCap )
    goto LABEL_40;
  v94 = *(_WORD *)(a1 + 2);
  if ( (v94 & 0x10) == 0 || KeGetCurrentIrql() >= 2u )
    goto LABEL_40;
  if ( v94 >= 0 )
  {
    v103 = *(unsigned __int8 **)(a1 + 24);
  }
  else
  {
    v95 = *(unsigned int *)(a1 + 12);
    if ( !(_DWORD)v95 )
    {
      v144 = v11;
LABEL_40:
      v31 = 0;
      goto LABEL_41;
    }
    v103 = (unsigned __int8 *)(a1 + v95);
  }
  v144 = v103;
  if ( !v103 )
    goto LABEL_40;
  ScopedPolicySid = (void *)SepGetScopedPolicySid(v103, v14, v18, v20);
  if ( !ScopedPolicySid )
    goto LABEL_40;
  Cap = SepRmReferenceFindCap(ScopedPolicySid);
  v111 = v140;
  v31 = 1;
  if ( Cap < 0 )
    v111 = SepRmDefaultCap;
  v11 = 0LL;
  v140 = v111;
  v127 = 1;
LABEL_41:
  if ( (v129 & 1) != 0 )
  {
    v126 = 1;
    if ( (a5 & 0x2060000) == 0 && !v31 )
    {
LABEL_92:
      v51 = v131;
      v52 = 0;
      goto LABEL_125;
    }
  }
  else
  {
    v126 = 0;
  }
  if ( *(__int16 *)(a1 + 2) >= 0 )
  {
    v33 = *(unsigned __int8 **)(a1 + 8);
  }
  else
  {
    v32 = *(unsigned int *)(a1 + 4);
    if ( (_DWORD)v32 )
      v33 = (unsigned __int8 *)(v32 + a1);
    else
      v33 = v11;
  }
  v34 = v26 + 232;
  Buf1 = v33;
  if ( v26 == -232 || !v33 )
    goto LABEL_92;
  v35 = v33[1];
  v36 = *(_WORD *)v33;
  LOWORD(v129) = *(_WORD *)v33;
  LODWORD(Size) = 4 * v35 + 8;
  v37 = v33[4 * v35 + 4];
  v38 = *(_QWORD *)(v34 + 8 * (v37 & 0xF) + 16) & *(_QWORD *)(v34 + 8 * (v37 >> 4) + 144);
  for ( i = 0; ; i += 8 )
  {
    v125 = i;
    v134 = v38;
    if ( !v38 )
      break;
    LOBYTE(v40) = v38;
    while ( (_BYTE)v40 )
    {
      v145 = *(_QWORD *)(v34 + 8);
      v128 = *((unsigned __int8 *)SidHashByteToIndexLookupTable + (unsigned __int8)v40);
      v47 = (const void **)(v145 + 16LL * (v128 + i));
      v147 = v47;
      if ( *(_WORD *)*v47 == v36 )
      {
        if ( !memcmp(v33, *v47, (unsigned int)Size) )
        {
          v50 = (__int64)v147;
          v133 = 64;
          goto LABEL_201;
        }
        v33 = (unsigned __int8 *)Buf1;
        v34 = v26 + 232;
        i = v125;
        v36 = v129;
      }
      v40 = (unsigned __int8)v40 ^ (1 << v128);
    }
    v38 = v134 >> 8;
  }
  v48 = *(_DWORD *)v34;
  LODWORD(v134) = v48;
  if ( v48 <= 0x40 )
    goto LABEL_92;
  v133 = 64;
  for ( j = 64; ; ++j )
  {
    v128 = j;
    if ( j >= v48 )
      goto LABEL_92;
    v50 = *(_QWORD *)(v34 + 8) + 16LL * j;
    v145 = *(_QWORD *)(v34 + 8);
    if ( **(_WORD **)v50 == v36 )
      break;
LABEL_87:
    ;
  }
  if ( memcmp(v33, *(const void **)v50, (unsigned int)Size) )
  {
    v48 = v134;
    v34 = v26 + 232;
    v33 = (unsigned __int8 *)Buf1;
    j = v128;
    v36 = v129;
    goto LABEL_87;
  }
LABEL_201:
  if ( (v50 != v145 || (*(_DWORD *)(v50 + 8) & 0x10) != 0) && (*(_DWORD *)(v50 + 8) & 4) == 0 )
  {
    v51 = v131;
    v52 = 0;
    goto LABEL_125;
  }
  v52 = 1;
  if ( *(_DWORD *)(v26 + 128) )
  {
    v79 = v26 + 504;
    if ( v26 != -504 )
    {
      v80 = Buf1;
      v81 = *((unsigned __int8 *)Buf1 + 1);
      v82 = *(_WORD *)Buf1;
      LOWORD(v129) = *(_WORD *)Buf1;
      v128 = 4 * v81 + 8;
      v83 = *((unsigned __int8 *)Buf1 + 4 * v81 + 4);
      v84 = *(_QWORD *)(v79 + 8 * (v83 & 0xF) + 16) & *(_QWORD *)(v79 + 8 * (v83 >> 4) + 144);
      for ( k = 0; ; k += 8 )
      {
        v125 = k;
        v145 = v84;
        if ( !v84 )
          break;
        LOBYTE(v86) = v84;
        while ( (_BYTE)v86 )
        {
          v87 = *((unsigned __int8 *)SidHashByteToIndexLookupTable + (unsigned __int8)v86);
          LODWORD(v134) = v87;
          v88 = (const void **)(*(_QWORD *)(v79 + 8) + 16LL * (v87 + (unsigned int)k));
          v147 = v88;
          if ( *(_WORD *)*v88 == v82 )
          {
            if ( !memcmp(v80, *v88, v128) )
            {
              v53 = (__int64)v147;
              goto LABEL_94;
            }
            LOBYTE(v87) = v134;
            v79 = v26 + 504;
            k = v125;
            v80 = Buf1;
            v82 = v129;
          }
          v86 = (unsigned __int8)v86 ^ (1 << v87);
        }
        v84 = v145 >> 8;
      }
      v89 = *(_DWORD *)v79;
      LODWORD(v134) = v89;
      if ( v89 > 0x40 )
      {
        for ( m = 64; m < v89; v133 = m )
        {
          v53 = *(_QWORD *)(v79 + 8) + 16LL * m;
          if ( **(_WORD **)v53 == v82 )
          {
            if ( !memcmp(v80, *(const void **)v53, v128) )
            {
LABEL_94:
              if ( (*(_DWORD *)(v53 + 8) & 4) == 0 )
                break;
              v52 = 1;
              goto LABEL_96;
            }
            v80 = Buf1;
            v79 = v26 + 504;
            v89 = v134;
            v82 = v129;
            m = v133;
          }
          ++m;
        }
      }
    }
    v52 = 0;
  }
LABEL_96:
  v54 = v52;
  if ( !v52 || (a5 & 0x2060000) == 0 )
  {
LABEL_97:
    v51 = v131;
    goto LABEL_125;
  }
  if ( !v126 )
  {
    v55 = *(_WORD *)(a1 + 2);
    if ( (v55 & 4) != 0 )
    {
      if ( v55 >= 0 )
      {
        v57 = *(_QWORD *)(a1 + 32);
      }
      else
      {
        v56 = *(unsigned int *)(a1 + 16);
        if ( !(_DWORD)v56 )
          goto LABEL_120;
        v57 = v56 + a1;
      }
      SeOwnerRightsSid = SeExports->SeOwnerRightsSid;
      Buf1 = SeOwnerRightsSid;
      if ( v57 )
      {
        v59 = *(unsigned __int16 *)(v57 + 4);
        v60 = (char *)(v57 + 8);
        LODWORD(v134) = v59;
        v61 = 0;
        v126 = v54;
        while ( 1 )
        {
          v128 = v61;
          if ( v61 >= v59 )
          {
            v52 = v126;
            goto LABEL_120;
          }
          if ( (v60[1] & 8) == 0 )
            break;
LABEL_118:
          ++v61;
          SeOwnerRightsSid = Buf1;
          v60 += *((unsigned __int16 *)v60 + 1);
          v59 = v134;
        }
        v62 = *v60;
        if ( (unsigned __int8)(*v60 - 5) > 3u && (unsigned __int8)(v62 - 11) > 1u )
        {
          if ( v62 < 0xFu )
          {
            if ( v62 == 4 )
            {
              v63 = v60 + 12;
              goto LABEL_114;
            }
            Buf1 = SeOwnerRightsSid;
            if ( v62 <= 8u || (Buf1 = SeOwnerRightsSid, v62 <= 0xAu) )
            {
LABEL_113:
              v63 = v60 + 8;
LABEL_114:
              if ( v63 && *(_WORD *)v63 == *SeOwnerRightsSid )
              {
                if ( !memcmp(v63, SeOwnerRightsSid, 4 * ((unsigned __int64)*(unsigned __int16 *)v63 >> 8) + 8) )
                {
                  v52 = v126;
                  goto LABEL_97;
                }
                v61 = v128;
              }
              goto LABEL_118;
            }
LABEL_270:
            if ( (unsigned __int8)(v62 - 13) > 1u )
              goto LABEL_118;
            goto LABEL_113;
          }
          if ( v62 > 0x10u )
            goto LABEL_270;
        }
        v63 = &v60[16 * (*((_DWORD *)v60 + 2) & 1) + ((8LL * (*((_DWORD *)v60 + 2) & 2)) | 0xC)];
        goto LABEL_114;
      }
    }
  }
LABEL_120:
  v51 = 393216;
  if ( (a5 & 0x2000000) == 0 )
    v51 = a5 & 0x60000;
  v12 = a5 & 0xFFF9FFFF;
  v64 = a6 | v51;
  LODWORD(v134) = a6 | v51;
  if ( !v127 )
    v52 = 0;
  a6 |= v51;
  if ( v12 || (a6 = v64, v127) || (*(_DWORD *)(v26 + 200) & 0x2000) == 0 && (a6 = v64, v51) )
  {
LABEL_125:
    v65 = *(_QWORD *)a3;
    LODWORD(v153[0]) = v51;
    v66 = *((_QWORD *)a3 + 2);
    memset((char *)v153 + 4, 0, 24);
    v67 = SepAccessCheck(
            a1,
            0,
            v66,
            v65,
            v12,
            0LL,
            0,
            (__int64)v148,
            a6,
            a9,
            (__int64)v136,
            (__int64)v150,
            (__int64)a11,
            0,
            v52,
            (__int64)v153,
            (__int64)&P,
            (__int64)&v123,
            0LL);
    v69 = (_DWORD *)v140;
    Buf1 = (void *)v140;
    v125 = v67;
    if ( !SepRmEnforceCap || (v96 = *a11, v128 = v96, v96 < 0) || (v97 = 0LL, !v127) )
    {
      v70 = v136;
      goto LABEL_127;
    }
    v98 = 0;
    v126 = 0;
    LOBYTE(v133) = 0;
    v99 = *v136;
    v131 = *v136;
    while ( 1 )
    {
      LODWORD(Size) = v98;
      if ( v98 >= v69[15] )
        goto LABEL_286;
      v100 = *(_QWORD *)&v69[2 * v98 + 16];
      v140 = v100;
      if ( !*(_QWORD *)(v100 + 24) )
        goto LABEL_259;
      v104 = (int)P;
      if ( !P )
      {
        v105 = AuthzBasepInitializeResourceClaimsFromSacl(v144, &P);
        v104 = (int)P;
        v100 = v140;
        v106 = (unsigned __int8)v133;
        if ( v105 < 0 )
          v106 = 1;
        v97 = 0LL;
        v133 = v106;
      }
      v112 = *(_QWORD **)(v26 + 1096);
      if ( v112 )
      {
        v113 = v112[72];
        v114 = v112[74];
        v115 = v112[73];
        v97 = v112[75];
      }
      else
      {
        LODWORD(v113) = 0;
        v114 = 0LL;
        v115 = 0LL;
      }
      v101 = AuthzBasepEvaluateAceCondition(
               v26,
               *(_QWORD *)(v26 + 776),
               v104,
               v113,
               v114,
               v115,
               v97,
               *(_QWORD *)(v100 + 24),
               *(_DWORD *)(v100 + 16),
               1,
               0,
               (__int64)&v138);
      v116 = v138;
      v129 = v101;
      if ( v138 == 1 )
        goto LABEL_259;
      if ( v101 < 0 )
      {
        if ( !v124 )
          goto LABEL_320;
        goto LABEL_321;
      }
      if ( (*(_DWORD *)(v26 + 200) & 0x10) != 0 )
      {
        v117 = *(_QWORD **)(v26 + 1096);
        if ( v117 )
        {
          v118 = v117[72];
          v119 = v117[74];
          v120 = v117[73];
          v121 = v117[75];
        }
        else
        {
          LODWORD(v118) = 0;
          v119 = 0LL;
          v120 = 0LL;
          v121 = 0LL;
        }
        v101 = AuthzBasepEvaluateAceCondition(
                 v26,
                 *(_QWORD *)(v26 + 776),
                 (_DWORD)P,
                 v118,
                 v119,
                 v120,
                 v121,
                 *(_QWORD *)(v140 + 24),
                 *(_DWORD *)(v140 + 16),
                 1,
                 1,
                 (__int64)&v138);
        v129 = v101;
        if ( v101 < 0 )
        {
          if ( v124 )
            goto LABEL_321;
LABEL_320:
          SeUnlockSubjectContext((PSECURITY_SUBJECT_CONTEXT)a3);
          v101 = v129;
LABEL_321:
          if ( *((_QWORD *)Buf1 + 4) )
          {
            ((void (*)(void))SepRmDereferenceCapTable)();
            v101 = v129;
          }
LABEL_264:
          *v136 = 0;
          v102 = (char *)P;
          *a11 = v101;
          SepFreeResourceInfo(v102);
          return 0;
        }
        v116 = v138;
      }
      if ( (_BYTE)v133 || v116 == 1 )
      {
LABEL_259:
        v101 = SepBuildCapeSecurityDescriptor(SecurityDescriptor);
        v128 = v101;
        if ( v101 < 0 )
        {
          if ( !v124 )
          {
            SeUnlockSubjectContext((PSECURITY_SUBJECT_CONTEXT)a3);
            v101 = v128;
          }
          if ( *((_QWORD *)Buf1 + 4) )
          {
            ((void (*)(void))SepRmDereferenceCapTable)();
            v101 = v128;
          }
          goto LABEL_264;
        }
        v107 = v12;
        if ( (*(_DWORD *)(v140 + 48) & 1) != 0 )
        {
          if ( (v12 & 0x2000000) == 0 )
            v107 = a6 | v12;
          v122 = 0;
        }
        else
        {
          v122 = a6;
        }
        v125 = SepAccessCheck(
                 (unsigned int)SecurityDescriptor,
                 0,
                 *((_QWORD *)a3 + 2),
                 *(_QWORD *)a3,
                 v107,
                 0LL,
                 0,
                 (__int64)v148,
                 v122,
                 a9,
                 (__int64)&v141,
                 0LL,
                 (__int64)&v143,
                 0,
                 v52,
                 (__int64)v153,
                 (__int64)&P,
                 (__int64)&v123,
                 0LL);
        if ( v126 )
          v99 = v141 & v131;
        else
          v99 = v141;
        v131 = v99;
        if ( !v99 )
        {
          v96 = -1073741790;
LABEL_286:
          v70 = v136;
          *a11 = v96;
          *v70 &= v99;
          if ( *a11 < 0 )
            v123 = 0;
LABEL_127:
          if ( !v130 && (v12 & 0x2000000) != 0 )
          {
            if ( v139 && (*(_WORD *)((char *)&v153[1] + 5) || (*(_DWORD *)(v26 + 200) & 0x3000000) == 0x3000000)
              || !DWORD2(v146)
              || BYTE4(v146) && BYTE6(v146) && BYTE5(v146)
              || (v77 = *v70 & v146, v77 == *v70) )
            {
              v71 = 3221225506LL;
            }
            else
            {
              *v70 = v77;
              v71 = 3221225506LL;
              v74 = -1073741790;
              if ( v77 )
                v74 = 0;
              *a11 = v74;
              v123 = v77 != 0;
            }
LABEL_157:
            v72 = 0;
            if ( v25 != -1 )
            {
              v93 = v25 & *v70;
              if ( v93 != *v70 )
              {
                *v70 = v93;
                v72 = 1;
                if ( v93 )
                {
                  *a11 = 0;
                  v123 = 1;
                }
                else
                {
                  *a11 = -1073741790;
                  v123 = 0;
                }
              }
            }
            LOBYTE(v68) = 0;
            if ( v149 != -1 )
            {
              v69 = (_DWORD *)((unsigned int)v149 & *v70);
              if ( (_DWORD)v69 != *v70 )
              {
                *v70 = (_DWORD)v69;
                LOBYTE(v68) = 1;
                if ( (v12 & 0x2000000) != 0 )
                {
                  if ( (_DWORD)v69 )
                    v71 = 0LL;
                  *a11 = v71;
                  v123 = (_DWORD)v69 != 0;
                }
                else
                {
                  *a11 = -1073741790;
                  v123 = *v70 != 0;
                }
              }
            }
            goto LABEL_132;
          }
          if ( !v139 || *(_WORD *)((char *)&v153[1] + 5) )
          {
LABEL_129:
            v71 = 3221225506LL;
          }
          else
          {
            if ( (*(_DWORD *)(v26 + 200) & 0x3000000) == 0x3000000 && !HIDWORD(v153[0]) )
            {
              *a11 = 0;
              *v70 = a6 | v12;
              BYTE7(v153[1]) = 1;
              v123 = 1;
              goto LABEL_129;
            }
            v71 = 3221225506LL;
            v123 = 0;
            *a11 = -1073741790;
            *v70 = 0;
          }
          if ( (v12 & 0x2000000) != 0 )
            goto LABEL_157;
          LOBYTE(v68) = 0;
          v72 = 0;
LABEL_132:
          if ( v26 )
          {
            if ( (v72
               || (_BYTE)v68
               || !HIDWORD(v153[0]) && (*(_DWORD *)(v26 + 200) & 0x4000) != 0 && (*a11 < 0 || BYTE7(v153[1])))
              && !v142 )
            {
              v78 = *a11 >= 0;
              SepLocateTokenTrustLevel(a3);
              SeLogAccessFailure((PVOID)v26, a1, a6 | v12, v78);
            }
            if ( *a11 < 0 && !HIDWORD(v153[0]) && (*(_DWORD *)(v26 + 200) & 0x4000) != 0 )
            {
              if ( BYTE8(v153[1]) )
              {
                v73 = v12 & ~(DWORD1(v153[0]) | DWORD2(v153[0]) | 0x2000000);
                if ( ((unsigned int)v73 & v153[1]) == (_DWORD)v73 )
                  SepLogLpacAccessFailure(v73, v69, v71);
              }
            }
          }
          if ( v127 )
          {
            v108 = *((_QWORD *)Buf1 + 4);
            if ( v108 )
              SepRmDereferenceCapTable(v108, v69, v71, v68);
          }
          if ( !v124 )
            SeUnlockSubjectContext((PSECURITY_SUBJECT_CONTEXT)a3);
          SepFreeResourceInfo((char *)P);
          return v125 && v123;
        }
        v96 = v143;
        v128 = v143;
        v126 = 1;
        if ( v143 < 0 )
          goto LABEL_286;
      }
      else
      {
        v96 = v128;
        v99 = v131;
      }
      v69 = Buf1;
      v98 = Size + 1;
      v97 = 0LL;
    }
  }
  if ( !v124 )
  {
    SeUnlockSubjectContext((PSECURITY_SUBJECT_CONTEXT)a3);
    v64 = v134;
  }
  *v136 = v64;
  result = 1;
  *a11 = 0;
  return result;
}
