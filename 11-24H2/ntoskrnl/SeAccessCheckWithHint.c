/*
 * XREFs of SeAccessCheckWithHint @ 0x14035A620
 * Callers:
 *     SeAccessCheckFromState @ 0x14035A040 (SeAccessCheckFromState.c)
 *     SeAccessCheckFromStateEx @ 0x14035A510 (SeAccessCheckFromStateEx.c)
 *     SeAccessCheck @ 0x14035A5B0 (SeAccessCheck.c)
 *     RtlpAllowsLowBoxAccess @ 0x1404323F0 (RtlpAllowsLowBoxAccess.c)
 *     RtlCheckTokenMembershipEx @ 0x140471840 (RtlCheckTokenMembershipEx.c)
 *     RtlCheckTokenCapability @ 0x14048DC70 (RtlCheckTokenCapability.c)
 *     ExCpuSetResourceManagerAccessCheck @ 0x1404AA1D4 (ExCpuSetResourceManagerAccessCheck.c)
 *     PspCheckCpuPartitionCreateAccess @ 0x140776AB4 (PspCheckCpuPartitionCreateAccess.c)
 *     ExCheckFullProcessInformationAccess @ 0x14095F62C (ExCheckFullProcessInformationAccess.c)
 *     ObpVerifyAccessToBoundaryEntry @ 0x140A49740 (ObpVerifyAccessToBoundaryEntry.c)
 *     ExpCheckWakeTimerAccess @ 0x140A96318 (ExpCheckWakeTimerAccess.c)
 * Callees:
 *     SepMandatoryIntegrityCheck @ 0x140259F30 (SepMandatoryIntegrityCheck.c)
 *     SepLogLpacAccessFailure @ 0x14027BEC4 (SepLogLpacAccessFailure.c)
 *     AuthzBasepEvaluateAceCondition @ 0x1403450F0 (AuthzBasepEvaluateAceCondition.c)
 *     SepLocateTokenTrustLevel @ 0x1403581B0 (SepLocateTokenTrustLevel.c)
 *     RtlIsValidProcessTrustLabelSid @ 0x1403599E0 (RtlIsValidProcessTrustLabelSid.c)
 *     SepFilterCheck @ 0x14035B6A0 (SepFilterCheck.c)
 *     SepAccessCheck @ 0x14035BC30 (SepAccessCheck.c)
 *     AuthzBasepFreeSecurityAttributesList @ 0x14035C750 (AuthzBasepFreeSecurityAttributesList.c)
 *     SeLogAccessFailure @ 0x14035F070 (SeLogAccessFailure.c)
 *     SepFreeResourceInfo @ 0x1403620C0 (SepFreeResourceInfo.c)
 *     AuthzBasepInitializeResourceClaimsFromSacl @ 0x1403642B0 (AuthzBasepInitializeResourceClaimsFromSacl.c)
 *     SepGetScopedPolicySid @ 0x140454F4C (SepGetScopedPolicySid.c)
 *     SepRmReferenceFindCap @ 0x140454FA4 (SepRmReferenceFindCap.c)
 *     SepBuildCapeSecurityDescriptor @ 0x1404D060C (SepBuildCapeSecurityDescriptor.c)
 *     SepRmDereferenceCapTable @ 0x1404F5488 (SepRmDereferenceCapTable.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     memcmp @ 0x1406BFF10 (memcmp.c)
 *     SeLockSubjectContext @ 0x140868470 (SeLockSubjectContext.c)
 *     SeUnlockSubjectContext @ 0x1408684D0 (SeUnlockSubjectContext.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

bool __fastcall SeAccessCheckWithHint(
        __int64 a1,
        unsigned int a2,
        int *a3,
        char a4,
        unsigned int a5,
        int a6,
        _QWORD *a7,
        _DWORD *a8,
        char a9,
        unsigned int *a10,
        int *a11)
{
  int v11; // r11d
  unsigned int v12; // r15d
  BOOL v15; // edi
  __int64 v16; // rdx
  __int16 v18; // r10
  unsigned int v19; // r9d
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rax
  int v23; // ebx
  __int64 v24; // r8
  int v25; // ebx
  __int64 v26; // rsi
  int v27; // eax
  char v28; // r8
  char v29; // cl
  int v30; // eax
  bool v31; // zf
  bool result; // al
  char v33; // cl
  __int64 v34; // rax
  unsigned __int8 *v35; // r9
  __int64 v36; // rdx
  __int64 v37; // rax
  __int16 v38; // r11
  unsigned __int64 v39; // rax
  unsigned __int64 v40; // rax
  unsigned __int8 i; // r10
  int v42; // edi
  const void **v43; // rax
  unsigned int v44; // eax
  unsigned int j; // r8d
  __int64 v46; // rdi
  __int64 v47; // rax
  __int64 v48; // r9
  __int64 v49; // r8
  __int64 v50; // r9
  int v51; // r8d
  char v52; // di
  __int64 v53; // rdi
  char v54; // al
  char v55; // cl
  __int16 v56; // ax
  int v57; // edx
  __int64 v58; // r9
  __int64 v59; // r8
  char v60; // al
  __int64 v61; // r9
  __int64 v62; // r11
  __int64 v63; // rdx
  _DWORD *v64; // rdi
  __int64 v65; // r8
  char v66; // r10
  PVOID v67; // rbx
  int v68; // eax
  char v69; // di
  __int64 v70; // rax
  __int64 v71; // r9
  _WORD *SeOwnerRightsSid; // rdx
  unsigned int v73; // eax
  char *v74; // rdi
  unsigned int v75; // r8d
  unsigned __int8 v76; // cl
  char *v77; // rcx
  __int64 v78; // r8
  void *v79; // r9
  __int64 v80; // rax
  __int16 v81; // r11
  unsigned __int64 v82; // rax
  unsigned __int64 v83; // rax
  unsigned __int8 k; // dl
  int v85; // edi
  int v86; // ecx
  const void **v87; // rax
  unsigned int v88; // eax
  unsigned int m; // r10d
  __int64 v90; // r9
  __int64 v91; // r10
  int v92; // ecx
  __int64 v93; // rax
  int v94; // ecx
  __int16 v95; // cx
  __int64 v96; // rax
  int v97; // eax
  unsigned int v98; // r8d
  int v99; // ecx
  __int64 v100; // r8
  PVOID v101; // rcx
  void *v102; // rbx
  __int64 v103; // rax
  PVOID v104; // rcx
  int v105; // eax
  int v106; // r9d
  int v107; // eax
  __int64 v108; // rcx
  void *ScopedPolicySid; // rax
  int Cap; // eax
  __int64 v111; // rdx
  _QWORD *v112; // rax
  void *v113; // r9
  __int64 v114; // rdx
  __int64 v115; // r10
  int v116; // eax
  int v117; // ecx
  _QWORD *v118; // rax
  void *v119; // r9
  __int64 v120; // rcx
  __int64 v121; // rdx
  __int64 v122; // r8
  int v123; // ecx
  unsigned __int8 v124; // [rsp+A0h] [rbp-80h]
  char v125; // [rsp+A0h] [rbp-80h]
  char v126; // [rsp+A0h] [rbp-80h]
  char v127; // [rsp+A0h] [rbp-80h]
  unsigned __int8 v128; // [rsp+A0h] [rbp-80h]
  bool v129; // [rsp+A1h] [rbp-7Fh] BYREF
  char v130; // [rsp+A2h] [rbp-7Eh]
  char v131; // [rsp+A3h] [rbp-7Dh]
  char v132; // [rsp+A4h] [rbp-7Ch]
  unsigned int v133; // [rsp+A8h] [rbp-78h]
  char v134; // [rsp+ACh] [rbp-74h]
  __int16 v135; // [rsp+AEh] [rbp-72h]
  int v136; // [rsp+B0h] [rbp-70h]
  unsigned __int64 v137; // [rsp+B8h] [rbp-68h]
  void *Buf1; // [rsp+C0h] [rbp-60h]
  int v139; // [rsp+C8h] [rbp-58h]
  _DWORD Size[3]; // [rsp+CCh] [rbp-54h]
  PVOID P; // [rsp+D8h] [rbp-48h] BYREF
  int v142; // [rsp+E0h] [rbp-40h] BYREF
  BOOL v143; // [rsp+E4h] [rbp-3Ch]
  __int64 v144; // [rsp+E8h] [rbp-38h]
  int v145; // [rsp+F0h] [rbp-30h] BYREF
  int v146; // [rsp+F4h] [rbp-2Ch]
  int v147; // [rsp+F8h] [rbp-28h] BYREF
  __int64 v148; // [rsp+100h] [rbp-20h]
  unsigned __int64 v149; // [rsp+108h] [rbp-18h]
  __int128 v150; // [rsp+110h] [rbp-10h] BYREF
  const void **v151; // [rsp+120h] [rbp+0h]
  _DWORD *v152; // [rsp+128h] [rbp+8h]
  int v153; // [rsp+130h] [rbp+10h] BYREF
  _QWORD *v154; // [rsp+138h] [rbp+18h]
  _OWORD SecurityDescriptor[2]; // [rsp+140h] [rbp+20h] BYREF
  __int64 v156; // [rsp+160h] [rbp+40h]
  _OWORD v157[2]; // [rsp+168h] [rbp+48h] BYREF

  v11 = 0;
  v12 = a5;
  v133 = a2;
  v130 = a4;
  v15 = a2;
  v16 = a2 & 8;
  *(_QWORD *)&v157[1] = 0LL;
  DWORD2(v157[1]) = 0;
  v156 = 0LL;
  v132 = 0;
  *a10 = 0;
  *a11 = -1073741790;
  v154 = a7;
  v152 = a8;
  *(_QWORD *)&Size[1] = a10;
  v129 = 0;
  v148 = 0LL;
  v144 = 0LL;
  v136 = 0;
  P = 0LL;
  v142 = 0;
  v145 = 0;
  v147 = -1073741790;
  v153 = -1;
  v146 = v16;
  v150 = 0LL;
  v157[0] = 0LL;
  memset(SecurityDescriptor, 0, sizeof(SecurityDescriptor));
  if ( a7 )
    *a7 = 0LL;
  if ( !a9 )
  {
    if ( (a5 & 0x2000000) != 0 )
      v12 = a8[3] | a5 & 0xFDFFFFFF;
    *a10 = v12 | a6;
    result = 1;
    *a11 = 0;
    return result;
  }
  if ( !a1 )
  {
LABEL_199:
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
    goto LABEL_199;
  }
  if ( !a4 )
  {
    SeLockSubjectContext((PSECURITY_SUBJECT_CONTEXT)a3);
    v11 = 0;
  }
  v18 = *(_WORD *)(a1 + 2);
  v19 = 0;
  if ( (v18 & 0x10) == 0 )
    goto LABEL_22;
  do
  {
    if ( v18 >= 0 )
    {
      v21 = *(_QWORD *)(a1 + 24);
    }
    else
    {
      v20 = *(unsigned int *)(a1 + 12);
      if ( !(_DWORD)v20 )
        goto LABEL_22;
      v21 = v20 + a1;
    }
    if ( !v21 )
      goto LABEL_22;
    v22 = v21 + 8;
    v16 = 0LL;
    while ( 1 )
    {
      if ( (unsigned int)v16 >= *(unsigned __int16 *)(v21 + 4) )
        goto LABEL_22;
      if ( (unsigned int)v16 >= v19 && *(_BYTE *)v22 == 20 )
        break;
      v16 = (unsigned int)(v16 + 1);
      v22 += *(unsigned __int16 *)(v22 + 2);
    }
    if ( (*(_BYTE *)(v22 + 1) & 8) == 0 )
      break;
    v19 = v16 + 1;
  }
  while ( v22 );
  if ( !v22 )
    goto LABEL_22;
  v23 = *(_DWORD *)(v22 + 4);
  v24 = v22 + 8;
  if ( v22 == -8 )
    goto LABEL_22;
  if ( !*(_QWORD *)a3 )
    goto LABEL_215;
  v47 = *((_QWORD *)a3 + 2);
  v48 = *(_QWORD *)(*(_QWORD *)a3 + 1104LL);
  if ( *(_QWORD *)(v47 + 1104) && !RtlIsValidProcessTrustLabelSid(*(_QWORD *)(v47 + 1104)) )
    goto LABEL_207;
  if ( !v48 )
    goto LABEL_77;
  if ( !RtlIsValidProcessTrustLabelSid(v48) )
    goto LABEL_207;
  if ( !v91 )
  {
    if ( !*(_DWORD *)(v90 + 8) )
      goto LABEL_205;
LABEL_215:
    v90 = *(_QWORD *)(*((_QWORD *)a3 + 2) + 1104LL);
    goto LABEL_205;
  }
  if ( *(_DWORD *)(v91 + 8) < *(_DWORD *)(v90 + 8) || *(_DWORD *)(v91 + 12) < *(_DWORD *)(v90 + 12) )
    goto LABEL_215;
LABEL_205:
  if ( v90 && !RtlIsValidProcessTrustLabelSid(v90) )
    goto LABEL_207;
LABEL_77:
  if ( !RtlIsValidProcessTrustLabelSid(v24) )
  {
LABEL_207:
    *a11 = -1073741811;
LABEL_208:
    v31 = a4 == 0;
    goto LABEL_43;
  }
  if ( v50 )
  {
    if ( *(_DWORD *)(v50 + 8) < *(_DWORD *)(v49 + 8) || *(_DWORD *)(v50 + 12) < *(_DWORD *)(v49 + 12) )
      goto LABEL_217;
LABEL_22:
    v25 = -1;
    goto LABEL_23;
  }
  if ( !*(_DWORD *)(v49 + 8) )
    goto LABEL_22;
LABEL_217:
  v25 = v23 | 0x1000000;
LABEL_23:
  if ( (v25 & a5 & 0xFDFFFFFF) != (a5 & 0xFDFFFFFF) )
  {
    v31 = v146 == 0;
    *a11 = -1073741790;
    if ( v31 )
    {
      v102 = *(void **)a3;
      if ( !*(_QWORD *)a3 )
        v102 = (void *)*((_QWORD *)a3 + 2);
      SepLocateTokenTrustLevel(a3, v16);
      SeLogAccessFailure(v102, a1, a6 | a5, 0);
    }
    goto LABEL_208;
  }
  *a11 = v11;
  v26 = *(_QWORD *)a3;
  if ( !*(_QWORD *)a3 )
    v26 = *((_QWORD *)a3 + 2);
  if ( (v15 & 4) == 0 )
  {
    v27 = SepFilterCheck(a1, (unsigned int)&P, v26, 0, (__int64)&v153);
    *a11 = v27;
    if ( v27 < 0 )
      goto LABEL_42;
    if ( (v153 & a5 & 0xFDFFFFFF) != (a5 & 0xFDFFFFFF) )
    {
      v31 = v146 == 0;
      *a11 = -1073741790;
      if ( v31 )
      {
        SeLogAccessFailure((PVOID)v26, a1, a6 | a5, 0);
        v31 = v130 == 0;
LABEL_43:
        if ( !v31 )
          return 0;
LABEL_44:
        SeUnlockSubjectContext((PSECURITY_SUBJECT_CONTEXT)a3);
        return 0;
      }
      goto LABEL_42;
    }
    v11 = 0;
    *a11 = 0;
  }
  if ( (v15 & 2) != 0 )
  {
    v28 = 1;
    if ( (*(_DWORD *)(v26 + 200) & 0x2000) != 0 )
    {
      v29 = 1;
      goto LABEL_33;
    }
  }
  else
  {
    v28 = 0;
  }
  v29 = 0;
LABEL_33:
  LOBYTE(v15) = 0;
  v134 = v29;
  v143 = v15;
  if ( !SepAllowAccessUponLogoff && (*(_DWORD *)(v26 + 200) & 0x20) == 0 )
  {
    v93 = *(_QWORD *)(v26 + 216);
    if ( v93 )
    {
      if ( (*(_DWORD *)(v93 + 40) & 0x20) != 0 )
      {
        v31 = v130 == 0;
        **(_DWORD **)&Size[1] = v11;
        *a11 = -1073741790;
        goto LABEL_43;
      }
    }
  }
  if ( !v29 )
  {
    v30 = SepMandatoryIntegrityCheck(v152, a1, v28, v26, 0, (__int64)&v150);
    *a11 = v30;
    if ( v30 < 0 )
    {
      if ( v130 )
        return 0;
      goto LABEL_44;
    }
    if ( !DWORD2(v150) || (a5 & 0xFDFFFFFF & (unsigned int)v150) == (a5 & 0xFDFFFFFF) )
    {
      *a11 = 0;
      if ( (a5 & 0x2000000) != 0 && (*(_DWORD *)(v26 + 200) & 0x4000) != 0 )
        v143 = HIDWORD(v150) <= 0x2000;
      goto LABEL_51;
    }
    *a11 = -1073741790;
    if ( (*(_DWORD *)(v26 + 200) & 0x4000) != 0 && HIDWORD(v150) <= 0x2000 )
    {
      LOBYTE(v143) = 1;
      goto LABEL_51;
    }
LABEL_42:
    v31 = v130 == 0;
    goto LABEL_43;
  }
LABEL_51:
  if ( !SepRmEnforceCap )
    goto LABEL_52;
  v95 = *(_WORD *)(a1 + 2);
  if ( (v95 & 0x10) == 0 || KeGetCurrentIrql() >= 2u )
    goto LABEL_52;
  if ( v95 >= 0 )
  {
    v103 = *(_QWORD *)(a1 + 24);
  }
  else
  {
    v96 = *(unsigned int *)(a1 + 12);
    if ( !(_DWORD)v96 )
    {
      v148 = 0LL;
LABEL_52:
      v33 = 0;
      goto LABEL_53;
    }
    v103 = a1 + v96;
  }
  v148 = v103;
  if ( !v103 )
    goto LABEL_52;
  ScopedPolicySid = (void *)SepGetScopedPolicySid(v103);
  if ( ScopedPolicySid )
  {
    Cap = SepRmReferenceFindCap(ScopedPolicySid);
    v111 = v144;
    v33 = 1;
    if ( Cap < 0 )
      v111 = SepRmDefaultCap;
    v144 = v111;
    v132 = 1;
  }
  else
  {
    v33 = 0;
  }
LABEL_53:
  if ( (v133 & 1) != 0 )
  {
    v131 = 1;
    if ( (a5 & 0x2060000) == 0 && !v33 )
    {
LABEL_86:
      v51 = v136;
      v52 = 0;
      goto LABEL_109;
    }
  }
  else
  {
    v131 = 0;
  }
  if ( *(__int16 *)(a1 + 2) >= 0 )
  {
    v35 = *(unsigned __int8 **)(a1 + 8);
  }
  else
  {
    v34 = *(unsigned int *)(a1 + 4);
    if ( (_DWORD)v34 )
      v35 = (unsigned __int8 *)(v34 + a1);
    else
      v35 = 0LL;
  }
  v36 = v26 + 232;
  Buf1 = v35;
  if ( v26 == -232 || !v35 )
    goto LABEL_86;
  v37 = v35[1];
  v38 = *(_WORD *)v35;
  v135 = *(_WORD *)v35;
  Size[0] = 4 * v37 + 8;
  v39 = v35[4 * v37 + 4];
  v40 = *(_QWORD *)(v36 + 8 * (v39 & 0xF) + 16) & *(_QWORD *)(v36 + 8 * (v39 >> 4) + 144);
  for ( i = 0; ; i += 8 )
  {
    v124 = i;
    v137 = v40;
    if ( !v40 )
      break;
    LOBYTE(v42) = v40;
    while ( (_BYTE)v42 )
    {
      v149 = *(_QWORD *)(v36 + 8);
      v133 = *((unsigned __int8 *)SidHashByteToIndexLookupTable + (unsigned __int8)v42);
      v43 = (const void **)(v149 + 16LL * (v133 + i));
      v151 = v43;
      if ( *(_WORD *)*v43 == v38 )
      {
        if ( !memcmp(v35, *v43, Size[0]) )
        {
          v46 = (__int64)v151;
          v139 = 64;
          goto LABEL_178;
        }
        v35 = (unsigned __int8 *)Buf1;
        v36 = v26 + 232;
        i = v124;
        v38 = v135;
      }
      v42 = (unsigned __int8)v42 ^ (1 << v133);
    }
    v40 = v137 >> 8;
  }
  v44 = *(_DWORD *)v36;
  LODWORD(v137) = v44;
  if ( v44 <= 0x40 )
    goto LABEL_86;
  v139 = 64;
  for ( j = 64; ; ++j )
  {
    v133 = j;
    if ( j >= v44 )
      goto LABEL_86;
    v46 = *(_QWORD *)(v36 + 8) + 16LL * j;
    v149 = *(_QWORD *)(v36 + 8);
    if ( **(_WORD **)v46 == v38 )
      break;
LABEL_73:
    ;
  }
  if ( memcmp(v35, *(const void **)v46, Size[0]) )
  {
    v35 = (unsigned __int8 *)Buf1;
    v36 = v26 + 232;
    v44 = v137;
    j = v133;
    v38 = v135;
    goto LABEL_73;
  }
LABEL_178:
  if ( (v46 != v149 || (*(_DWORD *)(v46 + 8) & 0x10) != 0) && (*(_DWORD *)(v46 + 8) & 4) == 0 )
  {
    v51 = v136;
    v52 = 0;
    goto LABEL_109;
  }
  v54 = 1;
  v125 = 1;
  if ( *(_DWORD *)(v26 + 128) )
  {
    v78 = v26 + 504;
    if ( v26 != -504 )
    {
      v79 = Buf1;
      v80 = *((unsigned __int8 *)Buf1 + 1);
      v81 = *(_WORD *)Buf1;
      v135 = *(_WORD *)Buf1;
      v133 = 4 * v80 + 8;
      v82 = *((unsigned __int8 *)Buf1 + 4 * v80 + 4);
      v83 = *(_QWORD *)(v78 + 8 * (v82 & 0xF) + 16) & *(_QWORD *)(v78 + 8 * (v82 >> 4) + 144);
      for ( k = 0; ; k += 8 )
      {
        v128 = k;
        v149 = v83;
        if ( !v83 )
          break;
        LOBYTE(v85) = v83;
        while ( (_BYTE)v85 )
        {
          v86 = *((unsigned __int8 *)SidHashByteToIndexLookupTable + (unsigned __int8)v85);
          LODWORD(v137) = v86;
          v87 = (const void **)(*(_QWORD *)(v78 + 8) + 16LL * (v86 + (unsigned int)k));
          v151 = v87;
          if ( *(_WORD *)*v87 == v81 )
          {
            if ( !memcmp(v79, *v87, v133) )
            {
              v53 = (__int64)v151;
              goto LABEL_94;
            }
            v79 = Buf1;
            v78 = v26 + 504;
            LOBYTE(v86) = v137;
            k = v128;
            v81 = v135;
          }
          v85 = (unsigned __int8)v85 ^ (1 << v86);
        }
        v83 = v149 >> 8;
      }
      v88 = *(_DWORD *)v78;
      LODWORD(v137) = v88;
      if ( v88 > 0x40 )
      {
        for ( m = 64; m < v88; v139 = m )
        {
          v53 = *(_QWORD *)(v78 + 8) + 16LL * m;
          if ( **(_WORD **)v53 == v81 )
          {
            if ( !memcmp(v79, *(const void **)v53, v133) )
            {
LABEL_94:
              if ( (*(_DWORD *)(v53 + 8) & 4) == 0 )
                break;
              v54 = 1;
              goto LABEL_96;
            }
            v79 = Buf1;
            v78 = v26 + 504;
            v88 = v137;
            v81 = v135;
            m = v139;
          }
          ++m;
        }
      }
    }
    v54 = 0;
LABEL_96:
    v125 = v54;
  }
  v52 = v125;
  v55 = v54;
  if ( !v125 || (a5 & 0x2060000) == 0 )
  {
LABEL_98:
    v51 = v136;
    goto LABEL_109;
  }
  if ( v131 )
    goto LABEL_104;
  v56 = *(_WORD *)(a1 + 2);
  if ( (v56 & 4) == 0 )
  {
    v52 = v55;
    goto LABEL_104;
  }
  if ( v56 >= 0 )
  {
    v71 = *(_QWORD *)(a1 + 32);
LABEL_158:
    v52 = v55;
    SeOwnerRightsSid = SeExports->SeOwnerRightsSid;
    Buf1 = SeOwnerRightsSid;
    if ( !v71 )
      goto LABEL_104;
    v73 = *(unsigned __int16 *)(v71 + 4);
    v74 = (char *)(v71 + 8);
    LODWORD(v137) = v73;
    v75 = 0;
    v127 = v55;
    while ( 1 )
    {
      v133 = v75;
      if ( v75 >= v73 )
      {
        v52 = v127;
        goto LABEL_104;
      }
      if ( (v74[1] & 8) == 0 )
        break;
LABEL_172:
      ++v75;
      SeOwnerRightsSid = Buf1;
      v74 += *((unsigned __int16 *)v74 + 1);
      v73 = v137;
    }
    v76 = *v74;
    if ( (unsigned __int8)(*v74 - 5) > 3u && (unsigned __int8)(v76 - 11) > 1u )
    {
      if ( v76 < 0xFu )
      {
        if ( v76 == 4 )
        {
          v77 = v74 + 12;
          goto LABEL_168;
        }
        Buf1 = SeOwnerRightsSid;
        if ( v76 <= 8u || (Buf1 = SeOwnerRightsSid, v76 <= 0xAu) )
        {
LABEL_167:
          v77 = v74 + 8;
LABEL_168:
          if ( v77 && *(_WORD *)v77 == *SeOwnerRightsSid )
          {
            if ( !memcmp(v77, SeOwnerRightsSid, 4 * ((unsigned __int64)*(unsigned __int16 *)v77 >> 8) + 8) )
            {
              v52 = v127;
              goto LABEL_98;
            }
            v75 = v133;
          }
          goto LABEL_172;
        }
LABEL_268:
        if ( (unsigned __int8)(v76 - 13) > 1u )
          goto LABEL_172;
        goto LABEL_167;
      }
      if ( v76 > 0x10u )
        goto LABEL_268;
    }
    v77 = &v74[16 * (*((_DWORD *)v74 + 2) & 1) + ((8LL * (*((_DWORD *)v74 + 2) & 2)) | 0xC)];
    goto LABEL_168;
  }
  v70 = *(unsigned int *)(a1 + 16);
  if ( (_DWORD)v70 )
  {
    v71 = v70 + a1;
    goto LABEL_158;
  }
  v52 = v55;
LABEL_104:
  v51 = 393216;
  if ( (a5 & 0x2000000) == 0 )
    v51 = a5 & 0x60000;
  v12 = a5 & 0xFFF9FFFF;
  v57 = a6 | v51;
  LODWORD(v137) = a6 | v51;
  if ( !v132 )
    v52 = 0;
  a6 |= v51;
  if ( v12 || (a6 = v57, v132) || (*(_DWORD *)(v26 + 200) & 0x2000) == 0 && (a6 = v57, v51) )
  {
LABEL_109:
    v58 = *(_QWORD *)a3;
    LODWORD(v157[0]) = v51;
    v59 = *((_QWORD *)a3 + 2);
    memset((char *)v157 + 4, 0, 24);
    v60 = SepAccessCheck(
            a1,
            0,
            v59,
            v58,
            v12,
            0LL,
            0,
            (__int64)v152,
            a6,
            a9,
            *(__int64 *)&Size[1],
            (__int64)v154,
            (__int64)a11,
            0,
            v52,
            (__int64)v157,
            (__int64)&P,
            (__int64)&v129,
            0LL);
    v62 = 0LL;
    v63 = v144;
    Buf1 = (void *)v144;
    v126 = v60;
    if ( !SepRmEnforceCap || (v97 = *a11, v133 = v97, v97 < 0) || !v132 )
    {
      v64 = *(_DWORD **)&Size[1];
      goto LABEL_111;
    }
    v98 = 0;
    v131 = 0;
    LOBYTE(v139) = 0;
    v99 = **(_DWORD **)&Size[1];
    v136 = **(_DWORD **)&Size[1];
    while ( 1 )
    {
      Size[0] = v98;
      if ( v98 >= *(_DWORD *)(v63 + 60) )
        goto LABEL_291;
      v100 = *(_QWORD *)(v63 + 8LL * v98 + 64);
      v144 = v100;
      if ( !*(_QWORD *)(v100 + 24) )
        goto LABEL_260;
      v104 = P;
      if ( !P )
      {
        v105 = AuthzBasepInitializeResourceClaimsFromSacl(v148, &P);
        v104 = P;
        v100 = v144;
        v106 = (unsigned __int8)v139;
        if ( v105 < 0 )
          v106 = 1;
        v62 = 0LL;
        v139 = v106;
      }
      v112 = *(_QWORD **)(v26 + 1096);
      if ( v112 )
      {
        v113 = (void *)v112[72];
        v114 = v112[74];
        v115 = v112[73];
        v62 = v112[75];
      }
      else
      {
        v113 = 0LL;
        v114 = 0LL;
        v115 = 0LL;
      }
      v116 = AuthzBasepEvaluateAceCondition(
               (_DWORD *)v26,
               *(void **)(v26 + 776),
               v104,
               v113,
               v114,
               v115,
               v62,
               *(_DWORD **)(v100 + 24),
               *(_DWORD *)(v100 + 16),
               1,
               0,
               &v142);
      v117 = v142;
      LODWORD(v137) = v116;
      if ( v142 == 1 )
        goto LABEL_260;
      if ( v116 < 0 )
      {
        if ( v130 )
          goto LABEL_327;
        goto LABEL_326;
      }
      if ( (*(_DWORD *)(v26 + 200) & 0x10) != 0 )
      {
        v118 = *(_QWORD **)(v26 + 1096);
        if ( v118 )
        {
          v119 = (void *)v118[72];
          v120 = v118[74];
          v121 = v118[73];
          v122 = v118[75];
        }
        else
        {
          v119 = 0LL;
          v120 = 0LL;
          v121 = 0LL;
          v122 = 0LL;
        }
        LODWORD(v137) = AuthzBasepEvaluateAceCondition(
                          (_DWORD *)v26,
                          *(void **)(v26 + 776),
                          P,
                          v119,
                          v120,
                          v121,
                          v122,
                          *(_DWORD **)(v144 + 24),
                          *(_DWORD *)(v144 + 16),
                          1,
                          1,
                          &v142);
        if ( (v137 & 0x80000000) != 0LL )
        {
          if ( v130 )
          {
LABEL_327:
            if ( *((_QWORD *)Buf1 + 4) )
              goto LABEL_264;
            goto LABEL_265;
          }
LABEL_326:
          SeUnlockSubjectContext((PSECURITY_SUBJECT_CONTEXT)a3);
          goto LABEL_327;
        }
        v117 = v142;
      }
      if ( (_BYTE)v139 || v117 == 1 )
      {
LABEL_260:
        LODWORD(v137) = SepBuildCapeSecurityDescriptor(SecurityDescriptor);
        if ( (v137 & 0x80000000) != 0LL )
        {
          if ( !v130 )
            SeUnlockSubjectContext((PSECURITY_SUBJECT_CONTEXT)a3);
          if ( *((_QWORD *)Buf1 + 4) )
LABEL_264:
            ((void (*)(void))SepRmDereferenceCapTable)();
LABEL_265:
          v101 = P;
          **(_DWORD **)&Size[1] = 0;
          *a11 = v137;
          SepFreeResourceInfo(v101);
          return 0;
        }
        v107 = v12;
        if ( (*(_DWORD *)(v144 + 48) & 1) != 0 )
        {
          if ( (v12 & 0x2000000) == 0 )
            v107 = a6 | v12;
          v123 = 0;
        }
        else
        {
          v123 = a6;
        }
        v126 = SepAccessCheck(
                 (unsigned int)SecurityDescriptor,
                 0,
                 *((_QWORD *)a3 + 2),
                 *(_QWORD *)a3,
                 v107,
                 0LL,
                 0,
                 (__int64)v152,
                 v123,
                 a9,
                 (__int64)&v145,
                 0LL,
                 (__int64)&v147,
                 0,
                 v52,
                 (__int64)v157,
                 (__int64)&P,
                 (__int64)&v129,
                 0LL);
        if ( v131 )
          v99 = v145 & v136;
        else
          v99 = v145;
        v136 = v99;
        if ( !v99 )
        {
          v97 = -1073741790;
LABEL_291:
          v64 = *(_DWORD **)&Size[1];
          *a11 = v97;
          *v64 &= v99;
          if ( *a11 < 0 )
            v129 = 0;
LABEL_111:
          if ( !v134 && (v12 & 0x2000000) != 0 )
          {
            if ( v143 && (*(_WORD *)((char *)&v157[1] + 5) || (*(_DWORD *)(v26 + 200) & 0x3000000) == 0x3000000)
              || !DWORD2(v150)
              || BYTE6(v150) && BYTE4(v150) && BYTE5(v150)
              || (v94 = *v64 & v150, v94 == *v64) )
            {
              v65 = 3221225506LL;
            }
            else
            {
              *v64 = v94;
              v65 = 3221225506LL;
              v68 = -1073741790;
              if ( v94 )
                v68 = 0;
              *a11 = v68;
              v129 = v94 != 0;
            }
LABEL_128:
            v66 = 0;
            if ( v25 != -1 )
            {
              v92 = v25 & *v64;
              if ( v92 != *v64 )
              {
                *v64 = v92;
                v66 = 1;
                if ( v92 )
                {
                  *a11 = 0;
                  v129 = 1;
                }
                else
                {
                  *a11 = -1073741790;
                  v129 = 0;
                }
              }
            }
            LOBYTE(v61) = 0;
            if ( v153 != -1 )
            {
              v63 = (unsigned int)v153 & *v64;
              if ( (_DWORD)v63 != *v64 )
              {
                *v64 = v63;
                LOBYTE(v61) = 1;
                if ( (v12 & 0x2000000) != 0 )
                {
                  if ( (_DWORD)v63 )
                    v65 = 0LL;
                  *a11 = v65;
                  v129 = (_DWORD)v63 != 0;
                }
                else
                {
                  *a11 = -1073741790;
                  v129 = *v64 != 0;
                }
              }
            }
            goto LABEL_116;
          }
          if ( !v143 || *(_WORD *)((char *)&v157[1] + 5) )
          {
LABEL_113:
            v65 = 3221225506LL;
          }
          else
          {
            if ( (*(_DWORD *)(v26 + 200) & 0x3000000) == 0x3000000 && !HIDWORD(v157[0]) )
            {
              *a11 = 0;
              *v64 = a6 | v12;
              BYTE7(v157[1]) = 1;
              v129 = 1;
              goto LABEL_113;
            }
            v65 = 3221225506LL;
            v129 = 0;
            *a11 = -1073741790;
            *v64 = 0;
          }
          if ( (v12 & 0x2000000) != 0 )
            goto LABEL_128;
          LOBYTE(v61) = 0;
          v66 = 0;
LABEL_116:
          if ( v26 )
          {
            if ( (v66
               || (_BYTE)v61
               || !HIDWORD(v157[0]) && (*(_DWORD *)(v26 + 200) & 0x4000) != 0 && (*a11 < 0 || BYTE7(v157[1])))
              && !v146 )
            {
              v69 = *a11 >= 0;
              SepLocateTokenTrustLevel(a3, v63);
              SeLogAccessFailure((PVOID)v26, a1, a6 | v12, v69);
            }
            if ( *a11 < 0
              && !HIDWORD(v157[0])
              && (*(_DWORD *)(v26 + 200) & 0x4000) != 0
              && BYTE8(v157[1])
              && (v12 & ~(DWORD1(v157[0]) | DWORD2(v157[0]) | 0x2000000) & v157[1]) == (v12 & ~(DWORD1(v157[0]) | DWORD2(v157[0]) | 0x2000000)) )
            {
              SepLogLpacAccessFailure();
            }
          }
          if ( v132 )
          {
            v108 = *((_QWORD *)Buf1 + 4);
            if ( v108 )
              SepRmDereferenceCapTable(v108, v63, v65, v61);
          }
          if ( !v130 )
            SeUnlockSubjectContext((PSECURITY_SUBJECT_CONTEXT)a3);
          v67 = P;
          if ( P )
          {
            AuthzBasepFreeSecurityAttributesList(P, v63, v65, v61);
            ExFreePoolWithTag(v67, 0);
          }
          return v126 && v129;
        }
        v97 = v147;
        v133 = v147;
        v131 = 1;
        if ( v147 < 0 )
          goto LABEL_291;
      }
      else
      {
        v97 = v133;
        v99 = v136;
      }
      v63 = (__int64)Buf1;
      v98 = Size[0] + 1;
      v62 = 0LL;
    }
  }
  if ( !v130 )
  {
    SeUnlockSubjectContext((PSECURITY_SUBJECT_CONTEXT)a3);
    v57 = v137;
  }
  result = 1;
  **(_DWORD **)&Size[1] = v57;
  *a11 = 0;
  return result;
}
