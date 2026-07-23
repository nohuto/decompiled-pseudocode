/*
 * XREFs of RtlpSetSecurityObject @ 0x14091A030
 * Callers:
 *     SeSetSecurityDescriptorInfoEx @ 0x140919880 (SeSetSecurityDescriptorInfoEx.c)
 *     SeSetSecurityDescriptorInfo @ 0x1409198D0 (SeSetSecurityDescriptorInfo.c)
 *     ObSetSecurityDescriptorInfo @ 0x140919920 (ObSetSecurityDescriptorInfo.c)
 *     CmpSetSecurityDescriptorInfo @ 0x1409765B8 (CmpSetSecurityDescriptorInfo.c)
 *     IopSetDeviceSecurityDescriptor @ 0x140A573D4 (IopSetDeviceSecurityDescriptor.c)
 * Callees:
 *     ExAcquireResourceSharedLite @ 0x140295130 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x140296E10 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegionThread @ 0x14029B9C0 (KeLeaveCriticalRegionThread.c)
 *     SepLocateTokenTrustLevel @ 0x14035FEB0 (SepLocateTokenTrustLevel.c)
 *     RtlFindAceBySid @ 0x14036B330 (RtlFindAceBySid.c)
 *     RtlSidDominates @ 0x1403F2890 (RtlSidDominates.c)
 *     RtlFindAceByType @ 0x1404052C0 (RtlFindAceByType.c)
 *     SepCopyTokenIntegrity @ 0x14041C6A0 (SepCopyTokenIntegrity.c)
 *     RtlpValidTrustSubjectContext @ 0x14045D468 (RtlpValidTrustSubjectContext.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     SeCaptureSubjectContext @ 0x140858670 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x140858810 (SeReleaseSubjectContext.c)
 *     SeSinglePrivilegeCheckEx @ 0x14089FA50 (SeSinglePrivilegeCheckEx.c)
 *     RtlpNormalizeAcl @ 0x14091B380 (RtlpNormalizeAcl.c)
 *     RtlpValidFilterAclSubjectContext @ 0x14091B890 (RtlpValidFilterAclSubjectContext.c)
 *     RtlpCreateServerAcl @ 0x14091B940 (RtlpCreateServerAcl.c)
 *     SepValidOwnerSubjectContext @ 0x14091C194 (SepValidOwnerSubjectContext.c)
 *     RtlpCombineAcls @ 0x140929C90 (RtlpCombineAcls.c)
 *     RtlpComputeMergedAcl @ 0x140AAC7E4 (RtlpComputeMergedAcl.c)
 *     ExAllocatePoolWithTag @ 0x140B62010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall RtlpSetSecurityObject(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 *a4,
        __int16 a5,
        int a6,
        __int64 a7,
        struct _SECURITY_SUBJECT_CONTEXT *a8)
{
  __int64 v8; // rbx
  __int64 v10; // r13
  _UNKNOWN **v12; // r11
  char *v13; // r15
  __int16 v14; // ax
  ACL *v15; // rsi
  __int64 v16; // rax
  __int16 v17; // cx
  ACL *v18; // r12
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int16 v21; // dx
  int v22; // r8d
  __int64 v23; // r9
  unsigned int v24; // eax
  _BYTE *v25; // r10
  __int64 v26; // rax
  __int64 v27; // rcx
  _BYTE *v28; // rdi
  void *v29; // r15
  unsigned __int16 *v30; // rsi
  unsigned __int16 *v31; // r12
  __int16 v32; // cx
  PSID v33; // r15
  int v34; // edx
  int v35; // r14d
  int v36; // ecx
  int v37; // eax
  unsigned int v38; // edi
  unsigned int v39; // r15d
  __int64 v40; // rsi
  unsigned __int16 *v41; // rbx
  __int16 v42; // cx
  unsigned __int16 *v43; // r13
  __int64 v44; // r14
  void *v45; // rcx
  unsigned __int8 *v46; // rcx
  unsigned int v47; // r9d
  _DWORD *v48; // rsi
  int v49; // r13d
  unsigned int v50; // r8d
  int v51; // edx
  int v52; // edx
  int v53; // eax
  __int64 v54; // rcx
  int v55; // r14d
  __int64 *v56; // r13
  char v57; // r14
  unsigned __int8 *v58; // rcx
  unsigned int v59; // r8d
  _DWORD *v60; // rsi
  int v61; // r9d
  int v62; // edx
  int v63; // edx
  unsigned int v64; // eax
  int v65; // eax
  unsigned int *v66; // rdi
  __int64 v67; // rcx
  __int64 v68; // rdi
  char *v69; // rbx
  int v70; // eax
  char *v71; // rbx
  bool v72; // zf
  int valid; // ebx
  PVOID v74; // r12
  void *v75; // rcx
  void *v76; // r14
  void *v77; // rdi
  void *v78; // rsi
  __int64 v80; // rax
  __int16 v81; // cx
  __int64 v82; // rcx
  char v83; // r13
  _BYTE *AceByType; // rax
  _BYTE *v85; // rdi
  PSID SeMediumMandatorySid; // rsi
  __int64 ClientToken; // rbx
  struct _KTHREAD *CurrentThread; // rax
  _DWORD *TokenTrustLevel; // rax
  void *v90; // rdi
  _DWORD *v91; // rax
  __int64 v92; // r8
  _DWORD *v93; // rbx
  _DWORD *v94; // rax
  __int64 v95; // rcx
  unsigned int v96; // edx
  int v97; // r8d
  int v98; // r11d
  __int16 v99; // ax
  __int64 v100; // rcx
  unsigned __int8 *AceBySid; // rax
  int v102; // esi
  unsigned int v103; // edx
  ACL *v104; // r10
  __int64 v105; // rbx
  int v106; // esi
  unsigned int v107; // edx
  int v108; // esi
  unsigned int v109; // edx
  __int64 v110; // r9
  int v111; // esi
  unsigned int v112; // edx
  int v113; // r8d
  __int16 v114; // cx
  __int64 v115; // rax
  unsigned int v116; // eax
  __int64 v117; // rax
  void *v118; // rax
  void *v119; // rbx
  __int64 v120; // rax
  __int64 v121; // rax
  __int64 v122; // rax
  __int64 v123; // r8
  unsigned __int8 v124; // cl
  int v125; // r14d
  unsigned int v126; // eax
  int v127; // ecx
  int v128; // eax
  __int64 v129; // rax
  __int16 v130; // dx
  __int64 v131; // rcx
  int v132; // ecx
  BOOLEAN Dominates; // [rsp+58h] [rbp-B0h] BYREF
  int v134; // [rsp+5Ch] [rbp-ACh]
  int v135; // [rsp+60h] [rbp-A8h] BYREF
  ULONG Index; // [rsp+64h] [rbp-A4h] BYREF
  int v137; // [rsp+68h] [rbp-A0h] BYREF
  bool v138; // [rsp+6Ch] [rbp-9Ch]
  bool v139; // [rsp+6Dh] [rbp-9Bh]
  __int16 v140; // [rsp+6Eh] [rbp-9Ah]
  int v141; // [rsp+70h] [rbp-98h]
  char v142; // [rsp+74h] [rbp-94h]
  char v143; // [rsp+75h] [rbp-93h]
  size_t v144; // [rsp+78h] [rbp-90h] BYREF
  __int64 v145; // [rsp+80h] [rbp-88h]
  void *v146; // [rsp+88h] [rbp-80h]
  PVOID v147; // [rsp+90h] [rbp-78h]
  void *v148; // [rsp+98h] [rbp-70h]
  PVOID v149; // [rsp+A0h] [rbp-68h]
  int v150[2]; // [rsp+A8h] [rbp-60h]
  PVOID v151; // [rsp+B0h] [rbp-58h]
  PVOID P; // [rsp+B8h] [rbp-50h]
  __int64 *v153; // [rsp+C0h] [rbp-48h]
  __int64 v154; // [rsp+C8h] [rbp-40h]
  unsigned int Size; // [rsp+D0h] [rbp-38h]
  int Size_4; // [rsp+D4h] [rbp-34h]
  void *Src; // [rsp+D8h] [rbp-30h]
  struct _SECURITY_SUBJECT_CONTEXT *p_SubjectContext; // [rsp+E0h] [rbp-28h]
  __int64 v159; // [rsp+E8h] [rbp-20h]
  __int64 PoolWithTag; // [rsp+F0h] [rbp-18h] BYREF
  unsigned int v161; // [rsp+F8h] [rbp-10h]
  PSID Sid1[2]; // [rsp+100h] [rbp-8h] BYREF
  __int64 v163; // [rsp+110h] [rbp+8h] BYREF
  __int64 v164; // [rsp+118h] [rbp+10h] BYREF
  __int64 v165; // [rsp+120h] [rbp+18h] BYREF
  __int64 v166; // [rsp+128h] [rbp+20h] BYREF
  PVOID v167; // [rsp+130h] [rbp+28h] BYREF
  void *v168; // [rsp+138h] [rbp+30h] BYREF
  int v169; // [rsp+140h] [rbp+38h]
  __int64 v170; // [rsp+148h] [rbp+40h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+150h] [rbp+48h] BYREF
  PVOID v172; // [rsp+170h] [rbp+68h]
  _DWORD v173[12]; // [rsp+178h] [rbp+70h] BYREF
  _UNKNOWN *retaddr; // [rsp+1F0h] [rbp+E8h] BYREF

  v12 = &retaddr;
  v8 = a7;
  v10 = a3;
  v169 = a6;
  Dominates = 0;
  LOWORD(v135) = 0;
  v143 = 0;
  v141 = 0;
  v142 = 0;
  LOBYTE(v12) = 0;
  v159 = a3;
  v153 = a4;
  Sid1[0] = 0LL;
  v13 = 0LL;
  PoolWithTag = 0LL;
  v172 = 0LL;
  v170 = 0LL;
  v149 = 0LL;
  v164 = 0LL;
  v145 = 0LL;
  v163 = 0LL;
  v147 = 0LL;
  v165 = 0LL;
  P = 0LL;
  v166 = 0LL;
  LOBYTE(v161) = 0;
  v151 = 0LL;
  v168 = 0LL;
  v14 = *(_WORD *)(a3 + 2);
  v154 = a7;
  p_SubjectContext = a8;
  v140 = 0;
  LODWORD(v144) = 0;
  Src = 0LL;
  v167 = 0LL;
  Size_4 = (int)v12;
  v137 = 0;
  v134 = 0x8000;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  if ( (v14 & 0x10) != 0 )
  {
    if ( v14 < 0 )
    {
      v120 = *(unsigned int *)(a3 + 12);
      if ( (_DWORD)v120 )
        v15 = (ACL *)(v120 + a3);
      else
        v15 = 0LL;
    }
    else
    {
      v15 = *(ACL **)(a3 + 24);
    }
  }
  else
  {
    v15 = 0LL;
  }
  v16 = *a4;
  *(_QWORD *)v150 = v15;
  v17 = *(_WORD *)(v16 + 2);
  if ( (v17 & 0x10) != 0 )
  {
    if ( v17 >= 0 )
    {
      v18 = *(ACL **)(v16 + 24);
    }
    else
    {
      v19 = *(unsigned int *)(v16 + 12);
      if ( (_DWORD)v19 )
        v18 = (ACL *)(v16 + v19);
      else
        v18 = 0LL;
    }
  }
  else
  {
    v18 = 0LL;
  }
  if ( !a8 )
  {
    SeCaptureSubjectContext(&SubjectContext);
    LOBYTE(v12) = Size_4;
    p_SubjectContext = &SubjectContext;
  }
  v20 = *a4;
  if ( *(__int16 *)(*a4 + 2) >= 0 )
  {
    valid = -1073741593;
    goto LABEL_121;
  }
  v21 = *(_WORD *)(v10 + 2);
  v138 = (v21 & 0x80u) != 0;
  v139 = (v21 & 0x40) != 0;
  v22 = a2 & 0x80;
  v23 = a2 & 0x100;
  if ( (a2 & 0x10000) != 0 )
  {
    v125 = a2 | 0x1FF;
    v126 = v125 & 0xFFFFFF7F;
    if ( v22 )
      v126 = v125;
    a2 = v126 & 0xFFFFFEFF;
    if ( (_DWORD)v23 )
      a2 = v126;
    if ( !v18 && !v15 )
    {
      a2 &= 0xFFFFFE07;
      if ( (v21 & 0x10) != 0 )
      {
        a2 |= 8u;
      }
      else
      {
        LODWORD(v12) = (unsigned __int8)v12;
        if ( (v21 & 0x800) != 0 )
          LODWORD(v12) = 1;
        Size_4 = (int)v12;
      }
    }
  }
  if ( (a2 & 1) != 0 )
  {
    v116 = a2 >> 2;
    LOBYTE(v116) = (a2 & 4) == 0;
    v161 = v116;
    if ( v21 >= 0 )
    {
      v118 = *(void **)(v10 + 8);
    }
    else
    {
      v117 = *(unsigned int *)(v10 + 4);
      if ( (_DWORD)v117 )
        v118 = (void *)(v10 + v117);
      else
        v118 = 0LL;
    }
    v146 = v118;
    LOBYTE(v140) = 1;
    if ( (a5 & 8) == 0 && !(unsigned __int8)SepValidOwnerSubjectContext(p_SubjectContext, v118, (v21 & 0x80u) != 0, v23) )
      goto LABEL_229;
    v25 = v146;
  }
  else
  {
    v24 = *(_DWORD *)(v20 + 4);
    if ( !v24 )
      goto LABEL_229;
    v25 = (_BYTE *)(v20 + v24);
    v146 = v25;
    if ( !v25 )
      goto LABEL_229;
  }
  if ( (unsigned __int64)v25 <= 0x7FFFFFFF0000LL || (*v25 & 0xF) != 1 || v25[1] > 0xFu )
  {
LABEL_229:
    valid = -1073741734;
    goto LABEL_121;
  }
  if ( (a2 & 2) != 0 )
  {
    if ( *(__int16 *)(v10 + 2) >= 0 )
    {
      v28 = *(_BYTE **)(v10 + 16);
    }
    else
    {
      v121 = *(unsigned int *)(v10 + 8);
      if ( !(_DWORD)v121 )
      {
        v28 = 0LL;
        HIBYTE(v140) = 1;
        goto LABEL_22;
      }
      v28 = (_BYTE *)(v121 + v10);
    }
    HIBYTE(v140) = 1;
  }
  else
  {
    v26 = *a4;
    if ( *(__int16 *)(*a4 + 2) >= 0 )
    {
      v28 = *(_BYTE **)(v26 + 16);
    }
    else
    {
      v27 = *(unsigned int *)(v26 + 8);
      if ( !(_DWORD)v27 )
      {
LABEL_237:
        valid = -1073741733;
        goto LABEL_121;
      }
      v28 = (_BYTE *)(v26 + v27);
    }
  }
LABEL_22:
  v148 = v28;
  if ( (unsigned __int64)v28 <= 0x7FFFFFFF0000LL || (*v28 & 0xF) != 1 || v28[1] > 0xFu )
    goto LABEL_237;
  if ( (a2 & 0x1F8) == 0 )
  {
    v29 = v149;
    v30 = (unsigned __int16 *)v18;
    Src = v18;
    v31 = 0LL;
    goto LABEL_27;
  }
  Size = a2 & 0x10;
  if ( (a2 & 0x10) != 0 )
  {
    Index = 0;
    v83 = 0;
    do
    {
      AceByType = RtlFindAceByType(v15, 0x11u, &Index);
      v85 = AceByType;
      if ( AceByType )
      {
        v13 = AceByType + 8;
        v83 = AceByType[1];
        if ( (*((_DWORD *)AceByType + 1) & 0xFFFFFFF8) != 0 )
          goto LABEL_209;
      }
      Dominates = 0;
      SeMediumMandatorySid = v13;
      *(_OWORD *)Sid1 = 0LL;
      if ( !v13 )
        SeMediumMandatorySid = SeExports->SeMediumMandatorySid;
      ClientToken = (__int64)p_SubjectContext->ClientToken;
      if ( !p_SubjectContext->ClientToken )
        ClientToken = (__int64)p_SubjectContext->PrimaryToken;
      if ( *(_DWORD *)(ClientToken + 192) == 2 && *(int *)(ClientToken + 196) < 2 )
        goto LABEL_209;
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      ExAcquireResourceSharedLite(*(PERESOURCE *)(ClientToken + 48), 1u);
      SepCopyTokenIntegrity(ClientToken, (__int64)Sid1);
      ExReleaseResourceLite(*(PERESOURCE *)(ClientToken + 48));
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      if ( (v83 & 8) != 0 )
      {
        if ( RtlSidDominates(SeMediumMandatorySid, SeExports->SeMediumMandatorySid, &Dominates) < 0 )
          goto LABEL_209;
        if ( !Dominates )
          SeMediumMandatorySid = SeExports->SeMediumMandatorySid;
      }
      if ( RtlSidDominates(Sid1[0], SeMediumMandatorySid, &Dominates) < 0
        || !Dominates && !(unsigned __int8)SeSinglePrivilegeCheckEx(SeRelabelPrivilege, (__int64)p_SubjectContext, 1) )
      {
LABEL_209:
        valid = -1073740730;
        goto LABEL_121;
      }
      ++Index;
      v15 = *(ACL **)v150;
    }
    while ( v85 );
    Dominates = v135;
    Sid1[0] = (PSID)PoolWithTag;
    v149 = (PVOID)v164;
    v145 = v163;
    v147 = (PVOID)v165;
    P = (PVOID)v166;
    v151 = v168;
  }
  TokenTrustLevel = SepLocateTokenTrustLevel(p_SubjectContext);
  v90 = TokenTrustLevel;
  if ( (a2 & 0x80) != 0 )
  {
    if ( TokenTrustLevel )
    {
      Index = 0;
      while ( 1 )
      {
        v91 = RtlFindAceByType(v15, 0x14u, &Index);
        v93 = v91;
        if ( v91 )
        {
          if ( (v91[1] & 0xFF000000) != 0 )
            goto LABEL_209;
          if ( !RtlpValidTrustSubjectContext(v90, (__int64)(v91 + 2), v92, &v144) )
            break;
        }
        ++Index;
        if ( !v93 )
          goto LABEL_156;
      }
    }
    valid = -1073741790;
    goto LABEL_121;
  }
LABEL_156:
  if ( (a2 & 0x100) == 0 )
    goto LABEL_164;
  WORD2(v172) = 256;
  LODWORD(v144) = 0;
  LODWORD(v172) = 0;
  for ( Index = 0; ; ++Index )
  {
    while ( 1 )
    {
      v94 = RtlFindAceByType(v15, 0x15u, &Index);
      if ( !v94 )
        goto LABEL_159;
      if ( (v94[1] & 0xFF000000) != 0 )
        goto LABEL_302;
      if ( (*((_BYTE *)v94 + 1) & 0x40) != 0 )
        break;
      v127 = *(_DWORD *)((char *)v94 + 10) - (_DWORD)v172;
      if ( !v127 )
        v127 = *((unsigned __int16 *)v94 + 7) - WORD2(v172);
      if ( v127 || *((_BYTE *)v94 + 9) != 1 || v94[4] )
      {
LABEL_302:
        valid = -1073741811;
        goto LABEL_161;
      }
LABEL_159:
      ++Index;
      if ( !v94 )
      {
        valid = v144;
        goto LABEL_161;
      }
    }
    if ( !RtlpValidTrustSubjectContext(v90, (__int64)(v94 + 2), (__int64)v94, &v144) )
      break;
  }
  valid = -1073741790;
LABEL_161:
  if ( valid < 0 )
    goto LABEL_121;
  if ( (a5 & 2) == 0 )
  {
    valid = RtlpValidFilterAclSubjectContext(v18);
    if ( valid < 0 )
      goto LABEL_121;
  }
LABEL_164:
  v95 = v159;
  if ( (a2 & 8) == 0 )
  {
    v98 = (int)v18;
    v172 = v18;
    v97 = 0x8000;
    goto LABEL_182;
  }
  v96 = *(unsigned __int16 *)(v159 + 2);
  if ( (a5 & 2) != 0 )
  {
    valid = RtlpComputeMergedAcl(
              (int)v18,
              (*(_WORD *)(*v153 + 2) & 0x2800 | (*(unsigned __int16 *)(*v153 + 2) >> 1) & 0x18u) >> 1,
              (int)v15,
              (v96 & 0x2800 | (v96 >> 1) & 0x18) >> 1,
              (__int64)v146,
              (__int64)v148,
              v154,
              2,
              (__int64)&v170,
              (__int64)&v137);
    if ( valid >= 0 )
    {
      v98 = v170;
      v95 = v159;
      LOBYTE(v141) = 1;
      v172 = (PVOID)v170;
      v97 = 2 * (v137 & 0x1400 | (2 * (v137 & 8 | 0x2004)));
      v134 = v97;
      goto LABEL_182;
    }
    v75 = (void *)v170;
    v74 = v151;
    goto LABEL_107;
  }
  v172 = v15;
  v97 = v96 & 0x2000 | 0x8010;
  v98 = (int)v15;
  v134 = v97;
  if ( (v96 & 0xA00) == 0xA00 )
  {
    v97 = v96 & 0x2000 | 0x8810;
    v134 = v97;
  }
LABEL_182:
  v102 = v97;
  if ( (a2 & 0x20) == 0 )
  {
    v105 = (__int64)v18;
    goto LABEL_187;
  }
  v103 = *(unsigned __int16 *)(v95 + 2);
  if ( (a5 & 2) != 0 )
  {
    valid = RtlpComputeMergedAcl(
              (int)v18,
              (*(_WORD *)(*v153 + 2) & 0x800 | (*(unsigned __int16 *)(*v153 + 2) >> 1) & 0x18u) >> 1,
              v150[0],
              (v103 & 0x800 | (v103 >> 1) & 0x18) >> 1,
              (__int64)v146,
              (__int64)v148,
              v154,
              2,
              (__int64)&v163,
              (__int64)&v137);
    if ( valid < 0 )
    {
      v76 = (void *)v163;
      v75 = v172;
      v74 = v151;
      goto LABEL_108;
    }
    v105 = v163;
    v95 = v159;
    v98 = (int)v172;
    BYTE1(v141) = 1;
    v97 = v102 | (2 * (v137 & 0x1400 | (2 * (v137 & 8 | 4))));
    v134 = v97;
LABEL_187:
    v104 = *(ACL **)v150;
    v145 = v105;
    goto LABEL_188;
  }
  v104 = *(ACL **)v150;
  LODWORD(v105) = v150[0];
  v97 |= v103 & 0x2000 | 0x10;
  v145 = *(_QWORD *)v150;
  v134 = v97;
  if ( (v103 & 0xA00) == 0xA00 )
  {
    v97 |= 0x800u;
    v134 = v97;
  }
LABEL_188:
  v106 = v97;
  if ( (a2 & 0x40) == 0 )
  {
    v149 = v18;
    goto LABEL_192;
  }
  v107 = *(unsigned __int16 *)(v95 + 2);
  if ( (a5 & 2) != 0 )
  {
    valid = RtlpComputeMergedAcl(
              (int)v18,
              (*(_WORD *)(*v153 + 2) & 0x800 | (*(unsigned __int16 *)(*v153 + 2) >> 1) & 0x18u) >> 1,
              (int)v104,
              (v107 & 0x800 | (v107 >> 1) & 0x18) >> 1,
              (__int64)v146,
              (__int64)v148,
              v154,
              2,
              (__int64)&v164,
              (__int64)&v137);
    if ( valid >= 0 )
    {
      v104 = *(ACL **)v150;
      v98 = (int)v172;
      LODWORD(v105) = v145;
      BYTE2(v141) = 1;
      v149 = (PVOID)v164;
      v97 = v106 | (2 * (v137 & 0x1400 | (2 * (v137 & 8 | 4))));
      v134 = v97;
      goto LABEL_192;
    }
    v29 = (void *)v164;
LABEL_264:
    v75 = v172;
    v76 = (void *)v145;
    v74 = v151;
    goto LABEL_109;
  }
  v149 = v104;
  v97 |= v107 & 0x2000 | 0x10;
  v134 = v97;
  if ( (v107 & 0xA00) == 0xA00 )
  {
    v97 |= 0x800u;
    v134 = v97;
  }
LABEL_192:
  v108 = v97;
  v10 = v159;
  if ( (a2 & 0x80) == 0 )
  {
    v110 = (__int64)v18;
    v147 = v18;
    goto LABEL_197;
  }
  v109 = *(unsigned __int16 *)(v159 + 2);
  if ( (a5 & 2) != 0 )
  {
    valid = RtlpComputeMergedAcl(
              (int)v18,
              (*(_WORD *)(*v153 + 2) & 0x800 | (*(unsigned __int16 *)(*v153 + 2) >> 1) & 0x18u) >> 1,
              (int)v104,
              (v109 & 0x800 | (v109 >> 1) & 0x18) >> 1,
              (__int64)v146,
              (__int64)v148,
              v154,
              2,
              (__int64)&v165,
              (__int64)&v137);
    if ( valid >= 0 )
    {
      v110 = v165;
      v104 = *(ACL **)v150;
      v98 = (int)v172;
      LODWORD(v105) = v145;
      HIBYTE(v141) = 1;
      v147 = (PVOID)v165;
      v97 = v108 | (2 * (v137 & 0x1400 | (2 * (v137 & 8 | 4))));
      v134 = v97;
      goto LABEL_197;
    }
    v77 = (void *)v165;
    v75 = v172;
    v76 = (void *)v145;
    v29 = v149;
    v74 = v151;
    goto LABEL_110;
  }
  v147 = v104;
  v97 |= v109 & 0x2000 | 0x10;
  v110 = (__int64)v104;
  v134 = v97;
  if ( (v109 & 0xA00) == 0xA00 )
  {
    v97 |= 0x800u;
    v134 = v97;
  }
LABEL_197:
  v111 = v97;
  if ( (a2 & 0x100) == 0 )
  {
    v28 = v148;
    v78 = v18;
    P = v18;
    goto LABEL_201;
  }
  v112 = *(unsigned __int16 *)(v10 + 2);
  v28 = v148;
  if ( (a5 & 2) != 0 )
  {
    valid = RtlpComputeMergedAcl(
              (int)v18,
              (*(_WORD *)(*v153 + 2) & 0x800 | (*(unsigned __int16 *)(*v153 + 2) >> 1) & 0x18u) >> 1,
              (int)v104,
              (v112 & 0x800 | (v112 >> 1) & 0x18) >> 1,
              (__int64)v146,
              (__int64)v148,
              v154,
              2,
              (__int64)&v166,
              (__int64)&v137);
    if ( valid >= 0 )
    {
      LODWORD(v104) = v150[0];
      v98 = (int)v172;
      v110 = (__int64)v147;
      LODWORD(v105) = v145;
      v142 = 1;
      v97 = v111 | (2 * (v137 & 0x1400 | (2 * (v137 & 8 | 4))));
      v78 = (void *)v166;
      P = (PVOID)v166;
      v134 = v97;
      goto LABEL_201;
    }
    v78 = (void *)v166;
    v75 = v172;
    v77 = v147;
    v76 = (void *)v145;
    v29 = v149;
    v74 = v151;
    goto LABEL_111;
  }
  P = v104;
  v78 = v104;
  v97 |= v112 & 0x2000 | 0x10;
  v134 = v97;
  if ( (v112 & 0xA00) == 0xA00 )
  {
    v97 |= 0x800u;
    v134 = v97;
  }
LABEL_201:
  if ( Size )
  {
    v113 = *(_WORD *)(v10 + 2) & 0x2000 | 0x10 | v97;
    v114 = *(_WORD *)(v10 + 2) & 0xA00;
    v134 = v113;
    if ( v114 == 2560 )
      v134 = v113 | 0x800;
  }
  else
  {
    LODWORD(v104) = (_DWORD)v18;
  }
  v29 = v149;
  v31 = 0LL;
  valid = RtlpCombineAcls(v98, (_DWORD)v104, v105, (_DWORD)v149, v110, (__int64)v78, (__int64)&v167, 0LL);
  if ( valid < 0 )
  {
    v75 = v172;
    v77 = v147;
    v76 = (void *)v145;
    v74 = v151;
    goto LABEL_111;
  }
  v30 = (unsigned __int16 *)v167;
  Src = v167;
  if ( !v172 && v167 && !*((_WORD *)v167 + 2) )
  {
    ExFreePoolWithTag(v167, 0);
    v30 = 0LL;
    Src = 0LL;
    v167 = 0LL;
  }
  v8 = v154;
  v25 = v146;
  v143 = 1;
LABEL_27:
  if ( (a2 & 4) == 0 )
  {
    v80 = *v153;
    v81 = *(_WORD *)(*v153 + 2);
    if ( (v81 & 4) != 0 )
    {
      if ( v81 < 0 )
      {
        v82 = *(unsigned int *)(v80 + 16);
        v35 = v134;
        if ( (_DWORD)v82 )
          v31 = (unsigned __int16 *)(v80 + v82);
        goto LABEL_36;
      }
      v31 = *(unsigned __int16 **)(v80 + 32);
    }
    v35 = v134;
    goto LABEL_36;
  }
  v32 = *(_WORD *)(v10 + 2);
  if ( (a5 & 1) != 0 )
  {
    if ( (v32 & 4) != 0 )
    {
      if ( v32 >= 0 )
      {
        v123 = *(_QWORD *)(v10 + 32);
      }
      else
      {
        v128 = *(_DWORD *)(v10 + 16);
        if ( v128 )
          LODWORD(v123) = v128 + v10;
        else
          LODWORD(v123) = 0;
      }
    }
    else
    {
      LODWORD(v123) = 0;
    }
    v129 = *v153;
    v130 = *(_WORD *)(*v153 + 2);
    if ( (v130 & 4) != 0 )
    {
      if ( v130 >= 0 )
      {
        v131 = *(_QWORD *)(v129 + 32);
      }
      else
      {
        v132 = *(_DWORD *)(v129 + 16);
        if ( v132 )
          LODWORD(v131) = v129 + v132;
        else
          LODWORD(v131) = 0;
      }
    }
    else
    {
      LODWORD(v131) = 0;
    }
    valid = RtlpComputeMergedAcl(
              v131,
              v130 & 0x140C,
              v123,
              *(_WORD *)(v10 + 2) & 0x140C,
              (__int64)v25,
              (__int64)v28,
              v8,
              1,
              (__int64)&PoolWithTag,
              (__int64)&v137);
    if ( valid >= 0 )
    {
      v33 = (PSID)PoolWithTag;
      v31 = (unsigned __int16 *)PoolWithTag;
      v25 = v146;
      BYTE1(v135) = 1;
      v35 = v137 & 0x1408 | 4 | v134;
      Sid1[0] = (PSID)PoolWithTag;
      v134 = v35;
      goto LABEL_35;
    }
    goto LABEL_264;
  }
  if ( (v32 & 4) != 0 )
  {
    if ( v32 < 0 )
    {
      v115 = *(unsigned int *)(v10 + 16);
      if ( (_DWORD)v115 )
        v31 = (unsigned __int16 *)(v115 + v10);
    }
    else
    {
      v31 = *(unsigned __int16 **)(v10 + 32);
    }
  }
  v33 = Sid1[0];
  v34 = v32 & 0x1000 | 4 | v134;
  v134 = v34;
  if ( (v32 & 0x500) == 0x500 )
    v134 = v34 | 0x400;
  v35 = v134;
LABEL_35:
  if ( v138 )
  {
    valid = RtlpCreateServerAcl(
              (_DWORD)v31,
              v139,
              *(_QWORD *)(*((_QWORD *)p_SubjectContext->PrimaryToken + 19)
                        + 16LL * *((unsigned int *)p_SubjectContext->PrimaryToken + 36)),
              (unsigned int)&v168,
              (__int64)&v135);
    Dominates = v135;
    if ( valid >= 0 )
    {
      v119 = v168;
      v151 = v168;
      if ( (_BYTE)v135 )
      {
        if ( BYTE1(v135) )
          ExFreePoolWithTag(v33, 0);
        Dominates = 0;
        BYTE1(v135) = 1;
        Sid1[0] = v119;
      }
      v25 = v146;
      v31 = (unsigned __int16 *)v119;
      goto LABEL_36;
    }
    v74 = v168;
  }
  else
  {
LABEL_36:
    v36 = 4 * (unsigned __int8)v25[1] + 8;
    v37 = (unsigned __int8)v28[1];
    Size = v36;
    LODWORD(v144) = 4 * v37 + 8;
    if ( v30 )
      v38 = (v30[1] + 3) & 0xFFFFFFFC;
    else
      v38 = 0;
    if ( v31 )
      v39 = (v31[1] + 3) & 0xFFFFFFFC;
    else
      v39 = 0;
    PoolWithTag = (__int64)ExAllocatePoolWithTag(
                             (POOL_TYPE)(v169 | 0x400),
                             v36 + 20 + v39 + v38 + 4 * v37 + 8,
                             0x64536553u);
    v40 = PoolWithTag;
    if ( PoolWithTag )
    {
      v41 = (unsigned __int16 *)(PoolWithTag + 20);
      *(_OWORD *)PoolWithTag = 0LL;
      *(_DWORD *)(v40 + 16) = 0;
      *(_BYTE *)v40 = 1;
      if ( (_BYTE)Size_4 )
      {
        v35 |= 0x800u;
        v134 = v35;
      }
      v42 = *(_WORD *)(v40 + 2) | v35;
      *(_WORD *)(v40 + 2) = v42;
      if ( (*(_WORD *)(v10 + 2) & 0x4000) != 0 )
      {
        *(_BYTE *)(v40 + 1) = *(_BYTE *)(v10 + 1);
        *(_WORD *)(v40 + 2) = v42 | 0x4000;
      }
      v43 = (unsigned __int16 *)Src;
      if ( !Src )
        goto LABEL_219;
      v44 = v40 + 20;
      v45 = (void *)(v40 + 20);
      if ( (a5 & 0x4000) != 0 )
      {
        RtlpNormalizeAcl(v45, Src, v154);
        if ( *(_WORD *)(v40 + 24) )
        {
          v38 = *(unsigned __int16 *)(v40 + 22);
        }
        else
        {
          v44 = 0LL;
          v38 = 0;
        }
      }
      else
      {
        memmove(v45, Src, *((unsigned __int16 *)Src + 1));
        if ( v40 != -20 )
        {
          v46 = (unsigned __int8 *)(v40 + 28);
          v47 = 0;
          if ( *(_WORD *)(v40 + 24) )
          {
            v48 = (_DWORD *)v154;
            v49 = 1651;
            do
            {
              v50 = *v46;
              if ( ((unsigned __int8)v50 <= 0xAu || (unsigned __int8)(v50 - 13) <= 1u) && (v46[1] & 8) == 0 )
              {
                v51 = *((_DWORD *)v46 + 1);
                if ( v51 < 0 )
                  v51 |= *v48;
                if ( (v51 & 0x40000000) != 0 )
                  v51 |= v48[1];
                if ( (v51 & 0x20000000) != 0 )
                  v51 |= v48[2];
                if ( (v51 & 0x10000000) != 0 )
                  v51 |= v48[3];
                v52 = v51 & 0xFFFFFFF;
                *((_DWORD *)v46 + 1) = v52;
                if ( (unsigned __int8)v50 <= 0xAu && _bittest(&v49, v50) )
                  v53 = v48[3];
                else
                  v53 = v48[3] | 0x1000000;
                *((_DWORD *)v46 + 1) = v52 & v53;
              }
              ++v47;
              v46 += *((unsigned __int16 *)v46 + 1);
            }
            while ( v47 < v41[2] );
            v40 = PoolWithTag;
            v43 = (unsigned __int16 *)Src;
          }
        }
        v54 = v43[1];
        if ( v38 > (unsigned int)v54 )
          memset_0((char *)v41 + v54, 0, v38 - (unsigned int)v54);
      }
      if ( v44 )
      {
        v41 = (unsigned __int16 *)((char *)v41 + v38);
        v55 = v44 - v40;
      }
      else
      {
LABEL_219:
        v55 = 0;
      }
      v56 = v153;
      *(_DWORD *)(v40 + 12) = v55;
      v57 = v134;
      if ( (v134 & 0x10) == 0 )
        *(_WORD *)(v40 + 2) |= *(_WORD *)(*v56 + 2) & 0x2830;
      if ( v31 )
      {
        memmove(v41, v31, v31[1]);
        if ( v41 )
        {
          v58 = (unsigned __int8 *)(v41 + 4);
          v59 = 0;
          if ( v41[2] )
          {
            v60 = (_DWORD *)v154;
            v61 = 1651;
            do
            {
              if ( (*v58 <= 0xAu || (unsigned __int8)(*v58 - 13) <= 1u) && (v58[1] & 8) == 0 )
              {
                v62 = *((_DWORD *)v58 + 1);
                if ( v62 < 0 )
                  v62 |= *v60;
                if ( (v62 & 0x40000000) != 0 )
                  v62 |= v60[1];
                if ( (v62 & 0x20000000) != 0 )
                  v62 |= v60[2];
                if ( (v62 & 0x10000000) != 0 )
                  v62 |= v60[3];
                v63 = v62 & 0xFFFFFFF;
                *((_DWORD *)v58 + 1) = v63;
                v64 = *v58;
                if ( (unsigned __int8)v64 <= 0xAu && _bittest(&v61, v64) )
                  v65 = v60[3];
                else
                  v65 = v60[3] | 0x1000000;
                *((_DWORD *)v58 + 1) = v63 & v65;
              }
              ++v59;
              v58 += *((unsigned __int16 *)v58 + 1);
            }
            while ( v59 < v41[2] );
            v40 = PoolWithTag;
          }
        }
        v66 = (unsigned int *)(v40 + 16);
        *(_DWORD *)(v40 + 16) = (_DWORD)v41 - v40;
        v67 = v31[1];
        if ( v39 > (unsigned int)v67 )
          memset_0((char *)v41 + v67, 0, v39 - (unsigned int)v67);
      }
      else
      {
        v66 = (unsigned int *)(v40 + 16);
        *(_DWORD *)(v40 + 16) = 0;
      }
      if ( (v57 & 4) == 0 )
      {
        *(_WORD *)(v40 + 2) |= *(_WORD *)(*v56 + 2) & 0x140C;
        if ( (_BYTE)v161 )
        {
          v173[0] = 257;
          Index = 0;
          v173[1] = 50331648;
          v173[2] = 4;
          while ( 1 )
          {
            v99 = *(_WORD *)(v40 + 2);
            if ( (v99 & 4) != 0 )
            {
              if ( v99 >= 0 )
              {
                v100 = *(_QWORD *)(v40 + 32);
              }
              else
              {
                v122 = *v66;
                v100 = (_DWORD)v122 ? v40 + v122 : 0LL;
              }
            }
            else
            {
              v100 = 0LL;
            }
            AceBySid = RtlFindAceBySid(v100, v173, &Index);
            if ( !AceBySid )
              break;
            v124 = AceBySid[1] & 0xF4 | 8;
            ++Index;
            AceBySid[1] = v124;
          }
          v56 = v153;
        }
      }
      if ( *(_DWORD *)(v40 + 16) && (a5 & 0x4000) != 0 )
      {
        RtlpNormalizeAcl(v41, v41, 0LL);
        v39 = v41[1];
      }
      v68 = Size;
      v69 = (char *)v41 + v39;
      memmove(v69, v146, Size);
      v70 = (int)v69;
      v71 = &v69[v68];
      v72 = (_BYTE)v140 == 0;
      *(_DWORD *)(v40 + 4) = v70 - v40;
      if ( v72 )
        *(_WORD *)(v40 + 2) |= *(_WORD *)(*v56 + 2) & 1;
      memmove(v71, v148, (unsigned int)v144);
      v72 = HIBYTE(v140) == 0;
      *(_DWORD *)(v40 + 8) = (_DWORD)v71 - v40;
      if ( v72 )
        *(_WORD *)(v40 + 2) |= *(_WORD *)(*v56 + 2) & 2;
      *v56 = v40;
      valid = 0;
    }
    else
    {
      valid = -1073741801;
    }
    v74 = v151;
  }
  if ( BYTE1(v135) )
    ExFreePoolWithTag(Sid1[0], 0);
  v75 = v172;
LABEL_107:
  v76 = (void *)v145;
LABEL_108:
  v29 = v149;
LABEL_109:
  v77 = v147;
LABEL_110:
  v78 = P;
LABEL_111:
  if ( v75 && (_BYTE)v141 )
    ExFreePoolWithTag(v75, 0);
  if ( v76 && BYTE1(v141) )
    ExFreePoolWithTag(v76, 0);
  if ( v29 && BYTE2(v141) )
    ExFreePoolWithTag(v29, 0);
  if ( v77 && HIBYTE(v141) )
    ExFreePoolWithTag(v77, 0);
  if ( v78 && v142 )
    ExFreePoolWithTag(v78, 0);
  if ( Src && v143 )
    ExFreePoolWithTag(Src, 0);
  if ( Dominates )
    ExFreePoolWithTag(v74, 0);
LABEL_121:
  if ( p_SubjectContext == &SubjectContext )
    SeReleaseSubjectContext(&SubjectContext);
  return (unsigned int)valid;
}
