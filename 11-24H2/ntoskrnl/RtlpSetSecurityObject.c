/*
 * XREFs of RtlpSetSecurityObject @ 0x140858F70
 * Callers:
 *     SeSetSecurityDescriptorInfo @ 0x140858860 (SeSetSecurityDescriptorInfo.c)
 *     ObSetSecurityDescriptorInfo @ 0x1408588B0 (ObSetSecurityDescriptorInfo.c)
 *     SeSetSecurityDescriptorInfoEx @ 0x14085A970 (SeSetSecurityDescriptorInfoEx.c)
 *     CmpSetSecurityDescriptorInfo @ 0x1409A0064 (CmpSetSecurityDescriptorInfo.c)
 *     IopSetDeviceSecurityDescriptor @ 0x140A5AC1C (IopSetDeviceSecurityDescriptor.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402595A0 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseResourceLite @ 0x14025A450 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x140341E80 (ExAcquireResourceSharedLite.c)
 *     SepLocateTokenTrustLevel @ 0x1403581B0 (SepLocateTokenTrustLevel.c)
 *     RtlFindAceBySid @ 0x1403641E0 (RtlFindAceBySid.c)
 *     RtlSidDominates @ 0x1403F9CB0 (RtlSidDominates.c)
 *     RtlFindAceByType @ 0x14040C700 (RtlFindAceByType.c)
 *     SepCopyTokenIntegrity @ 0x1404194A0 (SepCopyTokenIntegrity.c)
 *     RtlpValidTrustSubjectContext @ 0x14045B91C (RtlpValidTrustSubjectContext.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     memmove @ 0x1406BFC40 (memmove.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     SeReleaseSubjectContext @ 0x14084D7E0 (SeReleaseSubjectContext.c)
 *     SeCaptureSubjectContext @ 0x14084D8F0 (SeCaptureSubjectContext.c)
 *     SeSinglePrivilegeCheckEx @ 0x140853CA0 (SeSinglePrivilegeCheckEx.c)
 *     RtlpNormalizeAcl @ 0x14085A3B4 (RtlpNormalizeAcl.c)
 *     RtlpValidFilterAclSubjectContext @ 0x14085A8C0 (RtlpValidFilterAclSubjectContext.c)
 *     RtlpCreateServerAcl @ 0x14085A9B8 (RtlpCreateServerAcl.c)
 *     RtlpCombineAcls @ 0x14091C480 (RtlpCombineAcls.c)
 *     SepValidOwnerSubjectContext @ 0x140A2D638 (SepValidOwnerSubjectContext.c)
 *     RtlpComputeMergedAcl @ 0x140AB1A54 (RtlpComputeMergedAcl.c)
 *     ExAllocatePoolWithTag @ 0x140B72010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
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
  PVOID v15; // rsi
  __int64 v16; // rax
  __int16 v17; // cx
  unsigned __int16 *v18; // r12
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int16 v21; // dx
  int v22; // r8d
  __int64 v23; // r9
  unsigned int v24; // eax
  _BYTE *v25; // r10
  __int64 v26; // rdx
  __int64 v27; // rax
  __int64 v28; // rcx
  _BYTE *v29; // rdi
  void *v30; // r15
  unsigned __int16 *v31; // rsi
  void *v32; // r12
  __int64 v33; // rax
  __int16 v34; // cx
  unsigned __int16 *v35; // r12
  int v36; // r14d
  int valid; // ebx
  int v38; // edx
  int v39; // edx
  unsigned int v40; // eax
  int v41; // eax
  unsigned int v42; // r8d
  unsigned __int8 *v43; // rcx
  __int64 v44; // rsi
  unsigned int *v45; // rdi
  __int64 v46; // rcx
  unsigned int v47; // r15d
  __int64 v48; // rdi
  char *v49; // rbx
  int v50; // eax
  char *v51; // rbx
  bool v52; // zf
  PVOID v53; // r13
  void *v54; // rsi
  void *v55; // rdi
  void *v56; // r14
  int v58; // edx
  int v59; // edx
  int v60; // eax
  unsigned int v61; // r9d
  unsigned __int8 *v62; // rcx
  __int64 v63; // r13
  __int64 v64; // rcx
  unsigned __int16 *v65; // rbx
  int v66; // r14d
  __int64 *v67; // r13
  char v68; // r14
  _DWORD *v69; // rsi
  int v70; // r9d
  int v71; // ecx
  int v72; // eax
  unsigned int v73; // edi
  __int16 v74; // cx
  __int64 v75; // r14
  void *v76; // rcx
  _DWORD *v77; // rsi
  int v78; // r13d
  unsigned int v79; // r8d
  __int16 v80; // cx
  PVOID v81; // r15
  int v82; // edx
  __int64 v83; // rcx
  unsigned __int8 v84; // r13
  unsigned __int8 *AceByType; // rax
  unsigned __int8 *v86; // rdi
  char *SeMediumMandatorySid; // rsi
  __int64 ClientToken; // rbx
  struct _KTHREAD *CurrentThread; // rax
  __int64 TokenTrustLevel; // rax
  __int64 v91; // rdi
  unsigned __int8 *v92; // rax
  __int64 v93; // r8
  unsigned __int8 *v94; // rbx
  unsigned __int8 *v95; // rax
  __int64 v96; // rcx
  unsigned __int16 v97; // dx
  int v98; // r9d
  __int16 v99; // ax
  __int64 v100; // rcx
  unsigned __int8 *AceBySid; // rax
  int v102; // esi
  unsigned int v103; // edx
  PVOID v104; // r8
  int v105; // esi
  unsigned int v106; // edx
  int v107; // esi
  unsigned int v108; // edx
  PVOID v109; // r10
  PVOID v110; // r11
  int v111; // esi
  unsigned int v112; // edx
  __int64 v113; // r8
  __int16 v114; // ax
  int v115; // r9d
  __int64 v116; // rax
  __int64 v117; // rax
  void *v118; // rbx
  unsigned int v119; // eax
  __int64 v120; // rax
  void *v121; // rax
  __int64 v122; // rax
  __int64 v123; // rax
  __int64 v124; // r8
  unsigned __int8 v125; // cl
  int v126; // r14d
  unsigned int v127; // eax
  int v128; // ecx
  int v129; // eax
  __int64 v130; // rax
  __int16 v131; // dx
  __int64 v132; // rcx
  int v133; // ecx
  _BYTE v134[4]; // [rsp+58h] [rbp-B0h] BYREF
  int v135; // [rsp+5Ch] [rbp-ACh]
  int v136; // [rsp+60h] [rbp-A8h] BYREF
  unsigned int i; // [rsp+64h] [rbp-A4h] BYREF
  int v138; // [rsp+68h] [rbp-A0h] BYREF
  bool v139; // [rsp+6Ch] [rbp-9Ch]
  bool v140; // [rsp+6Dh] [rbp-9Bh]
  __int16 v141; // [rsp+6Eh] [rbp-9Ah]
  int v142; // [rsp+70h] [rbp-98h]
  char v143; // [rsp+74h] [rbp-94h]
  char v144; // [rsp+75h] [rbp-93h]
  size_t v145; // [rsp+78h] [rbp-90h] BYREF
  int v146[2]; // [rsp+80h] [rbp-88h]
  void *v147; // [rsp+88h] [rbp-80h]
  void *Src; // [rsp+90h] [rbp-78h]
  PVOID v149; // [rsp+98h] [rbp-70h]
  PVOID v150; // [rsp+A0h] [rbp-68h]
  PVOID v151; // [rsp+A8h] [rbp-60h]
  PVOID P; // [rsp+B0h] [rbp-58h]
  PVOID v153; // [rsp+B8h] [rbp-50h]
  __int64 *v154; // [rsp+C0h] [rbp-48h]
  __int64 v155; // [rsp+C8h] [rbp-40h]
  int v156; // [rsp+D0h] [rbp-38h]
  _DWORD Size[3]; // [rsp+D4h] [rbp-34h]
  struct _SECURITY_SUBJECT_CONTEXT *p_SubjectContext; // [rsp+E0h] [rbp-28h]
  __int64 v159; // [rsp+E8h] [rbp-20h]
  __int64 PoolWithTag; // [rsp+F0h] [rbp-18h] BYREF
  unsigned int v161; // [rsp+F8h] [rbp-10h]
  PVOID Buf1[2]; // [rsp+100h] [rbp-8h] BYREF
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
  v134[0] = 0;
  LOWORD(v136) = 0;
  v144 = 0;
  v142 = 0;
  v143 = 0;
  LOBYTE(v12) = 0;
  v159 = a3;
  v154 = a4;
  Buf1[0] = 0LL;
  v13 = 0LL;
  PoolWithTag = 0LL;
  v172 = 0LL;
  v170 = 0LL;
  v151 = 0LL;
  v164 = 0LL;
  v150 = 0LL;
  v163 = 0LL;
  v149 = 0LL;
  v165 = 0LL;
  P = 0LL;
  v166 = 0LL;
  LOBYTE(v161) = 0;
  v153 = 0LL;
  v168 = 0LL;
  v14 = *(_WORD *)(a3 + 2);
  v155 = a7;
  p_SubjectContext = a8;
  v141 = 0;
  LODWORD(v145) = 0;
  *(_QWORD *)&Size[1] = 0LL;
  v167 = 0LL;
  v156 = (int)v12;
  v138 = 0;
  v135 = 0x8000;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  if ( (v14 & 0x10) != 0 )
  {
    if ( v14 < 0 )
    {
      v116 = *(unsigned int *)(a3 + 12);
      if ( (_DWORD)v116 )
        v15 = (PVOID)(v116 + a3);
      else
        v15 = 0LL;
    }
    else
    {
      v15 = *(PVOID *)(a3 + 24);
    }
  }
  else
  {
    v15 = 0LL;
  }
  v16 = *a4;
  *(_QWORD *)v146 = v15;
  v17 = *(_WORD *)(v16 + 2);
  if ( (v17 & 0x10) != 0 )
  {
    if ( v17 >= 0 )
    {
      v18 = *(unsigned __int16 **)(v16 + 24);
    }
    else
    {
      v19 = *(unsigned int *)(v16 + 12);
      if ( (_DWORD)v19 )
        v18 = (unsigned __int16 *)(v16 + v19);
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
    LOBYTE(v12) = v156;
    p_SubjectContext = &SubjectContext;
  }
  v20 = *a4;
  if ( *(__int16 *)(*a4 + 2) >= 0 )
  {
    valid = -1073741593;
    goto LABEL_71;
  }
  v21 = *(_WORD *)(v10 + 2);
  v139 = (v21 & 0x80u) != 0;
  v140 = (v21 & 0x40) != 0;
  v22 = a2 & 0x80;
  v23 = a2 & 0x100;
  if ( (a2 & 0x10000) != 0 )
  {
    v126 = a2 | 0x1FF;
    v127 = v126 & 0xFFFFFF7F;
    if ( v22 )
      v127 = v126;
    a2 = v127 & 0xFFFFFEFF;
    if ( (_DWORD)v23 )
      a2 = v127;
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
        v156 = (int)v12;
      }
    }
  }
  if ( (a2 & 1) != 0 )
  {
    v119 = a2 >> 2;
    LOBYTE(v119) = (a2 & 4) == 0;
    v161 = v119;
    if ( v21 >= 0 )
    {
      v121 = *(void **)(v10 + 8);
    }
    else
    {
      v120 = *(unsigned int *)(v10 + 4);
      if ( (_DWORD)v120 )
        v121 = (void *)(v10 + v120);
      else
        v121 = 0LL;
    }
    Src = v121;
    LOBYTE(v141) = 1;
    if ( (a5 & 8) == 0 && !(unsigned __int8)SepValidOwnerSubjectContext(p_SubjectContext, v121, (v21 & 0x80u) != 0, v23) )
      goto LABEL_237;
    v25 = Src;
  }
  else
  {
    v24 = *(_DWORD *)(v20 + 4);
    if ( !v24 )
      goto LABEL_237;
    v25 = (_BYTE *)(v20 + v24);
    Src = v25;
    if ( !v25 )
      goto LABEL_237;
  }
  v26 = 0x7FFFFFFF0000LL;
  if ( (unsigned __int64)v25 <= 0x7FFFFFFF0000LL || (*v25 & 0xF) != 1 || v25[1] > 0xFu )
  {
LABEL_237:
    valid = -1073741734;
    goto LABEL_71;
  }
  if ( (a2 & 2) != 0 )
  {
    if ( *(__int16 *)(v10 + 2) >= 0 )
    {
      v29 = *(_BYTE **)(v10 + 16);
    }
    else
    {
      v122 = *(unsigned int *)(v10 + 8);
      if ( !(_DWORD)v122 )
      {
        v29 = 0LL;
        HIBYTE(v141) = 1;
        goto LABEL_22;
      }
      v29 = (_BYTE *)(v122 + v10);
    }
    HIBYTE(v141) = 1;
  }
  else
  {
    v27 = *a4;
    if ( *(__int16 *)(*a4 + 2) >= 0 )
    {
      v29 = *(_BYTE **)(v27 + 16);
    }
    else
    {
      v28 = *(unsigned int *)(v27 + 8);
      if ( !(_DWORD)v28 )
      {
LABEL_238:
        valid = -1073741733;
        goto LABEL_71;
      }
      v29 = (_BYTE *)(v27 + v28);
    }
  }
LABEL_22:
  v147 = v29;
  if ( (unsigned __int64)v29 <= 0x7FFFFFFF0000LL || (*v29 & 0xF) != 1 || v29[1] > 0xFu )
    goto LABEL_238;
  if ( (a2 & 0x1F8) == 0 )
  {
    v30 = v150;
    v31 = v18;
    *(_QWORD *)&Size[1] = v18;
    v32 = v151;
    goto LABEL_27;
  }
  Size[0] = a2 & 0x10;
  if ( (a2 & 0x10) != 0 )
  {
    i = 0;
    v84 = 0;
    do
    {
      AceByType = RtlFindAceByType((__int64)v15, 17, &i);
      v86 = AceByType;
      if ( AceByType )
      {
        v13 = (char *)(AceByType + 8);
        v84 = AceByType[1];
        if ( (*((_DWORD *)AceByType + 1) & 0xFFFFFFF8) != 0 )
          goto LABEL_174;
      }
      v134[0] = 0;
      SeMediumMandatorySid = v13;
      *(_OWORD *)Buf1 = 0LL;
      if ( !v13 )
        SeMediumMandatorySid = (char *)SeExports->SeMediumMandatorySid;
      ClientToken = (__int64)p_SubjectContext->ClientToken;
      if ( !p_SubjectContext->ClientToken )
        ClientToken = (__int64)p_SubjectContext->PrimaryToken;
      if ( *(_DWORD *)(ClientToken + 192) == 2 && *(int *)(ClientToken + 196) < 2 )
        goto LABEL_174;
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      ExAcquireResourceSharedLite(*(PERESOURCE *)(ClientToken + 48), 1u);
      SepCopyTokenIntegrity(ClientToken, (__int64)Buf1);
      ExReleaseResourceLite(*(PERESOURCE *)(ClientToken + 48));
      KeLeaveCriticalRegionThread();
      if ( (v84 & 8) != 0 )
      {
        if ( (int)RtlSidDominates(SeMediumMandatorySid, (char *)SeExports->SeMediumMandatorySid, v134) < 0 )
          goto LABEL_174;
        if ( !v134[0] )
          SeMediumMandatorySid = (char *)SeExports->SeMediumMandatorySid;
      }
      if ( (int)RtlSidDominates((char *)Buf1[0], SeMediumMandatorySid, v134) < 0
        || !v134[0] && !(unsigned __int8)SeSinglePrivilegeCheckEx(SeRelabelPrivilege, (__int64)p_SubjectContext, 1) )
      {
LABEL_174:
        valid = -1073740730;
        goto LABEL_71;
      }
      ++i;
      v15 = *(PVOID *)v146;
    }
    while ( v86 );
    v134[0] = v136;
    Buf1[0] = (PVOID)PoolWithTag;
    v150 = (PVOID)v163;
    v149 = (PVOID)v165;
    v151 = (PVOID)v164;
    v153 = v168;
    P = (PVOID)v166;
  }
  TokenTrustLevel = SepLocateTokenTrustLevel(p_SubjectContext, v26);
  v91 = TokenTrustLevel;
  if ( (a2 & 0x80) != 0 )
  {
    if ( TokenTrustLevel )
    {
      i = 0;
      while ( 1 )
      {
        v92 = RtlFindAceByType((__int64)v15, 20, &i);
        v94 = v92;
        if ( v92 )
        {
          if ( (*((_DWORD *)v92 + 1) & 0xFF000000) != 0 )
            goto LABEL_174;
          if ( !RtlpValidTrustSubjectContext(v91, (__int64)(v92 + 8), v93, &v145) )
            break;
        }
        ++i;
        if ( !v94 )
          goto LABEL_155;
      }
    }
    valid = -1073741790;
    goto LABEL_71;
  }
LABEL_155:
  if ( (a2 & 0x100) == 0 )
    goto LABEL_163;
  WORD2(v172) = 256;
  LODWORD(v145) = 0;
  LODWORD(v172) = 0;
  for ( i = 0; ; ++i )
  {
    while ( 1 )
    {
      v95 = RtlFindAceByType((__int64)v15, 21, &i);
      if ( !v95 )
        goto LABEL_158;
      if ( (*((_DWORD *)v95 + 1) & 0xFF000000) != 0 )
        goto LABEL_281;
      if ( (v95[1] & 0x40) != 0 )
        break;
      v128 = *(_DWORD *)(v95 + 10) - (_DWORD)v172;
      if ( !v128 )
        v128 = *((unsigned __int16 *)v95 + 7) - WORD2(v172);
      if ( v128 || v95[9] != 1 || *((_DWORD *)v95 + 4) )
      {
LABEL_281:
        valid = -1073741811;
        goto LABEL_160;
      }
LABEL_158:
      ++i;
      if ( !v95 )
      {
        valid = v145;
        goto LABEL_160;
      }
    }
    if ( !RtlpValidTrustSubjectContext(v91, (__int64)(v95 + 8), (__int64)v95, &v145) )
      break;
  }
  valid = -1073741790;
LABEL_160:
  if ( valid < 0 )
    goto LABEL_71;
  if ( (a5 & 2) == 0 )
  {
    valid = RtlpValidFilterAclSubjectContext(v18, v91);
    if ( valid < 0 )
      goto LABEL_71;
  }
LABEL_163:
  v96 = v159;
  if ( (a2 & 8) == 0 )
  {
    v172 = v18;
    v98 = 0x8000;
    goto LABEL_182;
  }
  v97 = *(_WORD *)(v159 + 2);
  if ( (a5 & 2) != 0 )
  {
    valid = RtlpComputeMergedAcl(
              (int)v18,
              (*(_WORD *)(*v154 + 2) & 0x2800 | (*(unsigned __int16 *)(*v154 + 2) >> 1) & 0x18u) >> 1,
              (int)v15,
              (v97 & 0x2800 | (v97 >> 1) & 0x18u) >> 1,
              (__int64)Src,
              (__int64)v147,
              v155,
              2,
              (__int64)&v170,
              (__int64)&v138);
    if ( valid >= 0 )
    {
      v96 = v159;
      LOBYTE(v142) = 1;
      v98 = 2 * (v138 & 0x1400 | (2 * (v138 & 8 | 0x2004)));
      v172 = (PVOID)v170;
      v135 = v98;
      goto LABEL_182;
    }
    v54 = (void *)v170;
    v30 = v150;
    goto LABEL_271;
  }
  v172 = v15;
  v98 = v97 & 0x2000 | 0x8010;
  v135 = v98;
  if ( (v97 & 0xA00) == 0xA00 )
  {
    v98 = v97 & 0x2000 | 0x8810;
    v135 = v98;
  }
LABEL_182:
  v102 = v98;
  if ( (a2 & 0x20) == 0 )
  {
    v150 = v18;
    goto LABEL_187;
  }
  v103 = *(unsigned __int16 *)(v96 + 2);
  v104 = *(PVOID *)v146;
  if ( (a5 & 2) != 0 )
  {
    valid = RtlpComputeMergedAcl(
              (int)v18,
              (*(_WORD *)(*v154 + 2) & 0x800 | (*(unsigned __int16 *)(*v154 + 2) >> 1) & 0x18u) >> 1,
              v146[0],
              (v103 & 0x800 | (v103 >> 1) & 0x18) >> 1,
              (__int64)Src,
              (__int64)v147,
              v155,
              2,
              (__int64)&v163,
              (__int64)&v138);
    if ( valid < 0 )
    {
      v30 = (void *)v163;
      v54 = v172;
LABEL_271:
      v32 = v151;
LABEL_272:
      v56 = v149;
LABEL_273:
      v55 = P;
LABEL_274:
      v53 = v153;
      goto LABEL_61;
    }
    v96 = v159;
    BYTE1(v142) = 1;
    v150 = (PVOID)v163;
    v98 = v102 | (2 * (v138 & 0x1400 | (2 * (v138 & 8 | 4))));
    v135 = v98;
LABEL_187:
    v104 = *(PVOID *)v146;
    goto LABEL_188;
  }
  v150 = *(PVOID *)v146;
  v98 |= v103 & 0x2000 | 0x10;
  v135 = v98;
  if ( (v103 & 0xA00) == 0xA00 )
  {
    v98 |= 0x800u;
    v135 = v98;
  }
LABEL_188:
  v105 = v98;
  if ( (a2 & 0x40) == 0 )
  {
    v151 = v18;
    goto LABEL_192;
  }
  v106 = *(unsigned __int16 *)(v96 + 2);
  if ( (a5 & 2) != 0 )
  {
    valid = RtlpComputeMergedAcl(
              (int)v18,
              (*(_WORD *)(*v154 + 2) & 0x800 | (*(unsigned __int16 *)(*v154 + 2) >> 1) & 0x18u) >> 1,
              (int)v104,
              (v106 & 0x800 | (v106 >> 1) & 0x18) >> 1,
              (__int64)Src,
              (__int64)v147,
              v155,
              2,
              (__int64)&v164,
              (__int64)&v138);
    if ( valid >= 0 )
    {
      BYTE2(v142) = 1;
      v151 = (PVOID)v164;
      v98 = v105 | (2 * (v138 & 0x1400 | (2 * (v138 & 8 | 4))));
      v135 = v98;
      goto LABEL_192;
    }
    v32 = (void *)v164;
    v54 = v172;
    v30 = v150;
    goto LABEL_272;
  }
  v151 = v104;
  v98 |= v106 & 0x2000 | 0x10;
  v135 = v98;
  if ( (v106 & 0xA00) == 0xA00 )
  {
    v98 |= 0x800u;
    v135 = v98;
  }
LABEL_192:
  v107 = v98;
  v10 = v159;
  if ( (a2 & 0x80) == 0 )
  {
    v110 = v18;
    v149 = v18;
    goto LABEL_198;
  }
  v108 = *(unsigned __int16 *)(v159 + 2);
  if ( (a5 & 2) != 0 )
  {
    valid = RtlpComputeMergedAcl(
              (int)v18,
              (*(_WORD *)(*v154 + 2) & 0x800 | (*(unsigned __int16 *)(*v154 + 2) >> 1) & 0x18u) >> 1,
              v146[0],
              (v108 & 0x800 | (v108 >> 1) & 0x18) >> 1,
              (__int64)Src,
              (__int64)v147,
              v155,
              2,
              (__int64)&v165,
              (__int64)&v138);
    if ( valid < 0 )
    {
      v56 = (void *)v165;
      v54 = v172;
      v30 = v150;
      v32 = v151;
      goto LABEL_273;
    }
    v110 = (PVOID)v165;
    HIBYTE(v142) = 1;
    v149 = (PVOID)v165;
    v98 = v107 | (2 * (v138 & 0x1400 | (2 * (v138 & 8 | 4))));
    v135 = v98;
LABEL_198:
    v109 = *(PVOID *)v146;
    goto LABEL_199;
  }
  v109 = *(PVOID *)v146;
  v149 = *(PVOID *)v146;
  v98 |= v108 & 0x2000 | 0x10;
  v110 = *(PVOID *)v146;
  v135 = v98;
  if ( (v108 & 0xA00) == 0xA00 )
  {
    v98 |= 0x800u;
    v135 = v98;
  }
LABEL_199:
  v111 = v98;
  if ( (a2 & 0x100) == 0 )
  {
    v29 = v147;
    v113 = (__int64)v18;
    P = v18;
    goto LABEL_203;
  }
  v112 = *(unsigned __int16 *)(v10 + 2);
  v29 = v147;
  v113 = (__int64)v109;
  if ( (a5 & 2) != 0 )
  {
    valid = RtlpComputeMergedAcl(
              (int)v18,
              (*(_WORD *)(*v154 + 2) & 0x800 | (*(unsigned __int16 *)(*v154 + 2) >> 1) & 0x18u) >> 1,
              (int)v109,
              (v112 & 0x800 | (v112 >> 1) & 0x18) >> 1,
              (__int64)Src,
              (__int64)v147,
              v155,
              2,
              (__int64)&v166,
              (__int64)&v138);
    if ( valid >= 0 )
    {
      v113 = v166;
      LODWORD(v109) = v146[0];
      v110 = v149;
      v143 = 1;
      P = (PVOID)v166;
      v98 = v111 | (2 * (v138 & 0x1400 | (2 * (v138 & 8 | 4))));
      v135 = v98;
      goto LABEL_203;
    }
    v55 = (void *)v166;
    v54 = v172;
    v56 = v149;
    v30 = v150;
    v32 = v151;
    goto LABEL_274;
  }
  P = v109;
  v98 |= v112 & 0x2000 | 0x10;
  v135 = v98;
  if ( (v112 & 0xA00) == 0xA00 )
  {
    v98 |= 0x800u;
    v135 = v98;
  }
LABEL_203:
  if ( Size[0] )
  {
    v114 = *(_WORD *)(v10 + 2);
    v115 = v114 & 0x2000 | 0x10 | v98;
    v135 = v115;
    if ( (v114 & 0xA00) == 0xA00 )
      v135 = v115 | 0x800;
  }
  else
  {
    LODWORD(v109) = (_DWORD)v18;
  }
  v32 = v151;
  v30 = v150;
  v54 = v172;
  valid = RtlpCombineAcls(
            (_DWORD)v172,
            (_DWORD)v109,
            (_DWORD)v150,
            (_DWORD)v151,
            (__int64)v110,
            v113,
            (__int64)&v167,
            0LL);
  if ( valid < 0 )
    goto LABEL_272;
  v31 = (unsigned __int16 *)v167;
  *(_QWORD *)&Size[1] = v167;
  if ( !v172 && v167 && !*((_WORD *)v167 + 2) )
  {
    ExFreePoolWithTag(v167, 0);
    v31 = 0LL;
    *(_QWORD *)&Size[1] = 0LL;
    v167 = 0LL;
  }
  v8 = v155;
  v25 = Src;
  v144 = 1;
LABEL_27:
  if ( (a2 & 4) == 0 )
  {
    v33 = *v154;
    v34 = *(_WORD *)(*v154 + 2);
    if ( (v34 & 4) == 0 )
    {
      v35 = 0LL;
      goto LABEL_30;
    }
    if ( v34 >= 0 )
    {
      v35 = *(unsigned __int16 **)(v33 + 32);
LABEL_30:
      v36 = v135;
    }
    else
    {
      v83 = *(unsigned int *)(v33 + 16);
      v36 = v135;
      if ( (_DWORD)v83 )
        v35 = (unsigned __int16 *)(v33 + v83);
      else
        v35 = 0LL;
    }
LABEL_104:
    v71 = 4 * (unsigned __int8)v25[1] + 8;
    v72 = (unsigned __int8)v29[1];
    Size[0] = v71;
    LODWORD(v145) = 4 * v72 + 8;
    if ( v31 )
      v73 = (v31[1] + 3) & 0xFFFFFFFC;
    else
      v73 = 0;
    if ( v35 )
      v47 = (v35[1] + 3) & 0xFFFFFFFC;
    else
      v47 = 0;
    PoolWithTag = (__int64)ExAllocatePoolWithTag(
                             (POOL_TYPE)(v169 | 0x400),
                             v71 + 20 + v47 + v73 + 4 * v72 + 8,
                             0x64536553u);
    v44 = PoolWithTag;
    if ( PoolWithTag )
    {
      v65 = (unsigned __int16 *)(PoolWithTag + 20);
      *(_OWORD *)PoolWithTag = 0LL;
      *(_DWORD *)(v44 + 16) = 0;
      *(_BYTE *)v44 = 1;
      if ( (_BYTE)v156 )
      {
        v36 |= 0x800u;
        v135 = v36;
      }
      v74 = *(_WORD *)(v44 + 2) | v36;
      *(_WORD *)(v44 + 2) = v74;
      if ( (*(_WORD *)(v10 + 2) & 0x4000) != 0 )
      {
        *(_BYTE *)(v44 + 1) = *(_BYTE *)(v10 + 1);
        *(_WORD *)(v44 + 2) = v74 | 0x4000;
      }
      v63 = *(_QWORD *)&Size[1];
      if ( !*(_QWORD *)&Size[1] )
        goto LABEL_217;
      v75 = v44 + 20;
      v76 = (void *)(v44 + 20);
      if ( (a5 & 0x4000) != 0 )
      {
        RtlpNormalizeAcl(v76, *(_QWORD *)&Size[1], v155);
        if ( *(_WORD *)(v44 + 24) )
        {
          v73 = *(unsigned __int16 *)(v44 + 22);
        }
        else
        {
          v75 = 0LL;
          v73 = 0;
        }
      }
      else
      {
        memmove(v76, *(const void **)&Size[1], *(unsigned __int16 *)(*(_QWORD *)&Size[1] + 2LL));
        if ( v44 != -20 )
        {
          v62 = (unsigned __int8 *)(v44 + 28);
          v61 = 0;
          if ( *(_WORD *)(v44 + 24) )
          {
            v77 = (_DWORD *)v155;
            v78 = 1651;
            do
            {
              v79 = *v62;
              if ( ((unsigned __int8)v79 <= 0xAu || (unsigned __int8)(v79 - 13) <= 1u) && (v62[1] & 8) == 0 )
              {
                v58 = *((_DWORD *)v62 + 1);
                if ( v58 < 0 )
                  v58 |= *v77;
                if ( (v58 & 0x40000000) != 0 )
                  v58 |= v77[1];
                if ( (v58 & 0x20000000) != 0 )
                  v58 |= v77[2];
                if ( (v58 & 0x10000000) != 0 )
                  v58 |= v77[3];
                v59 = v58 & 0xFFFFFFF;
                *((_DWORD *)v62 + 1) = v59;
                if ( (unsigned __int8)v79 <= 0xAu && _bittest(&v78, v79) )
                  v60 = v77[3];
                else
                  v60 = v77[3] | 0x1000000;
                *((_DWORD *)v62 + 1) = v59 & v60;
              }
              ++v61;
              v62 += *((unsigned __int16 *)v62 + 1);
            }
            while ( v61 < v65[2] );
            v44 = PoolWithTag;
            v63 = *(_QWORD *)&Size[1];
          }
        }
        v64 = *(unsigned __int16 *)(v63 + 2);
        if ( v73 > (unsigned int)v64 )
          memset_0((char *)v65 + v64, 0, v73 - (unsigned int)v64);
      }
      if ( v75 )
      {
        v65 = (unsigned __int16 *)((char *)v65 + v73);
        v66 = v75 - v44;
      }
      else
      {
LABEL_217:
        v66 = 0;
      }
      v67 = v154;
      *(_DWORD *)(v44 + 12) = v66;
      v68 = v135;
      if ( (v135 & 0x10) == 0 )
        *(_WORD *)(v44 + 2) |= *(_WORD *)(*v67 + 2) & 0x2830;
      if ( v35 )
      {
        memmove(v65, v35, v35[1]);
        if ( v65 )
        {
          v43 = (unsigned __int8 *)(v65 + 4);
          v42 = 0;
          if ( v65[2] )
          {
            v69 = (_DWORD *)v155;
            v70 = 1651;
            do
            {
              if ( (*v43 <= 0xAu || (unsigned __int8)(*v43 - 13) <= 1u) && (v43[1] & 8) == 0 )
              {
                v38 = *((_DWORD *)v43 + 1);
                if ( v38 < 0 )
                  v38 |= *v69;
                if ( (v38 & 0x40000000) != 0 )
                  v38 |= v69[1];
                if ( (v38 & 0x20000000) != 0 )
                  v38 |= v69[2];
                if ( (v38 & 0x10000000) != 0 )
                  v38 |= v69[3];
                v39 = v38 & 0xFFFFFFF;
                *((_DWORD *)v43 + 1) = v39;
                v40 = *v43;
                if ( (unsigned __int8)v40 <= 0xAu && _bittest(&v70, v40) )
                  v41 = v69[3];
                else
                  v41 = v69[3] | 0x1000000;
                *((_DWORD *)v43 + 1) = v39 & v41;
              }
              ++v42;
              v43 += *((unsigned __int16 *)v43 + 1);
            }
            while ( v42 < v65[2] );
            v44 = PoolWithTag;
          }
        }
        v45 = (unsigned int *)(v44 + 16);
        *(_DWORD *)(v44 + 16) = (_DWORD)v65 - v44;
        v46 = v35[1];
        if ( v47 > (unsigned int)v46 )
          memset_0((char *)v65 + v46, 0, v47 - (unsigned int)v46);
      }
      else
      {
        v45 = (unsigned int *)(v44 + 16);
        *(_DWORD *)(v44 + 16) = 0;
      }
      if ( (v68 & 4) == 0 )
      {
        *(_WORD *)(v44 + 2) |= *(_WORD *)(*v67 + 2) & 0x140C;
        if ( (_BYTE)v161 )
        {
          v173[0] = 257;
          i = 0;
          v173[1] = 50331648;
          v173[2] = 4;
          while ( 1 )
          {
            v99 = *(_WORD *)(v44 + 2);
            if ( (v99 & 4) != 0 )
            {
              if ( v99 >= 0 )
              {
                v100 = *(_QWORD *)(v44 + 32);
              }
              else
              {
                v123 = *v45;
                v100 = (_DWORD)v123 ? v44 + v123 : 0LL;
              }
            }
            else
            {
              v100 = 0LL;
            }
            AceBySid = RtlFindAceBySid(v100, v173, &i);
            if ( !AceBySid )
              break;
            v125 = AceBySid[1] & 0xF4 | 8;
            ++i;
            AceBySid[1] = v125;
          }
          v67 = v154;
        }
      }
      if ( *(_DWORD *)(v44 + 16) && (a5 & 0x4000) != 0 )
      {
        RtlpNormalizeAcl(v65, v65, 0LL);
        v47 = v65[1];
      }
      v48 = Size[0];
      v49 = (char *)v65 + v47;
      memmove(v49, Src, Size[0]);
      v50 = (int)v49;
      v51 = &v49[v48];
      v52 = (_BYTE)v141 == 0;
      *(_DWORD *)(v44 + 4) = v50 - v44;
      if ( v52 )
        *(_WORD *)(v44 + 2) |= *(_WORD *)(*v67 + 2) & 1;
      memmove(v51, v147, (unsigned int)v145);
      v52 = HIBYTE(v141) == 0;
      *(_DWORD *)(v44 + 8) = (_DWORD)v51 - v44;
      if ( v52 )
        *(_WORD *)(v44 + 2) |= *(_WORD *)(*v67 + 2) & 2;
      *v67 = v44;
      valid = 0;
    }
    else
    {
      valid = -1073741801;
    }
    v53 = v153;
    goto LABEL_58;
  }
  v80 = *(_WORD *)(v10 + 2);
  if ( (a5 & 1) == 0 )
  {
    if ( (v80 & 4) != 0 )
    {
      if ( v80 < 0 )
      {
        v117 = *(unsigned int *)(v10 + 16);
        if ( (_DWORD)v117 )
          v35 = (unsigned __int16 *)(v117 + v10);
        else
          v35 = 0LL;
      }
      else
      {
        v35 = *(unsigned __int16 **)(v10 + 32);
      }
    }
    else
    {
      v35 = 0LL;
    }
    v81 = Buf1[0];
    v82 = v80 & 0x1000 | 4 | v135;
    v135 = v82;
    if ( (v80 & 0x500) == 0x500 )
      v135 = v82 | 0x400;
    v36 = v135;
    goto LABEL_103;
  }
  if ( (v80 & 4) != 0 )
  {
    if ( v80 >= 0 )
    {
      v124 = *(_QWORD *)(v10 + 32);
    }
    else
    {
      v129 = *(_DWORD *)(v10 + 16);
      if ( v129 )
        LODWORD(v124) = v129 + v10;
      else
        LODWORD(v124) = 0;
    }
  }
  else
  {
    LODWORD(v124) = 0;
  }
  v130 = *v154;
  v131 = *(_WORD *)(*v154 + 2);
  if ( (v131 & 4) != 0 )
  {
    if ( v131 >= 0 )
    {
      v132 = *(_QWORD *)(v130 + 32);
    }
    else
    {
      v133 = *(_DWORD *)(v130 + 16);
      if ( v133 )
        LODWORD(v132) = v130 + v133;
      else
        LODWORD(v132) = 0;
    }
  }
  else
  {
    LODWORD(v132) = 0;
  }
  valid = RtlpComputeMergedAcl(
            v132,
            v131 & 0x140C,
            v124,
            *(_WORD *)(v10 + 2) & 0x140C,
            (__int64)v25,
            (__int64)v29,
            v8,
            1,
            (__int64)&PoolWithTag,
            (__int64)&v138);
  if ( valid < 0 )
  {
    v54 = v172;
    goto LABEL_272;
  }
  v81 = (PVOID)PoolWithTag;
  v35 = (unsigned __int16 *)PoolWithTag;
  v25 = Src;
  BYTE1(v136) = 1;
  v36 = v138 & 0x1408 | 4 | v135;
  Buf1[0] = (PVOID)PoolWithTag;
  v135 = v36;
LABEL_103:
  if ( !v139 )
    goto LABEL_104;
  valid = RtlpCreateServerAcl(
            (_DWORD)v35,
            v140,
            *(_QWORD *)(*((_QWORD *)p_SubjectContext->PrimaryToken + 19)
                      + 16LL * *((unsigned int *)p_SubjectContext->PrimaryToken + 36)),
            (unsigned int)&v168,
            (__int64)&v136);
  v134[0] = v136;
  if ( valid >= 0 )
  {
    v118 = v168;
    v153 = v168;
    if ( (_BYTE)v136 )
    {
      if ( BYTE1(v136) )
        ExFreePoolWithTag(v81, 0);
      v134[0] = 0;
      BYTE1(v136) = 1;
      Buf1[0] = v118;
    }
    v25 = Src;
    v35 = (unsigned __int16 *)v118;
    goto LABEL_104;
  }
  v53 = v168;
LABEL_58:
  if ( BYTE1(v136) )
    ExFreePoolWithTag(Buf1[0], 0);
  v54 = v172;
  v55 = P;
  v56 = v149;
  v30 = v150;
  v32 = v151;
LABEL_61:
  if ( v54 && (_BYTE)v142 )
    ExFreePoolWithTag(v54, 0);
  if ( v30 && BYTE1(v142) )
    ExFreePoolWithTag(v30, 0);
  if ( v32 && BYTE2(v142) )
    ExFreePoolWithTag(v32, 0);
  if ( v56 && HIBYTE(v142) )
    ExFreePoolWithTag(v56, 0);
  if ( v55 && v143 )
    ExFreePoolWithTag(v55, 0);
  if ( *(_QWORD *)&Size[1] && v144 )
    ExFreePoolWithTag(*(PVOID *)&Size[1], 0);
  if ( v134[0] )
    ExFreePoolWithTag(v53, 0);
LABEL_71:
  if ( p_SubjectContext == &SubjectContext )
    SeReleaseSubjectContext(&SubjectContext);
  return (unsigned int)valid;
}
