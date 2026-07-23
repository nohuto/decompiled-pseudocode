/*
 * XREFs of RtlpSetSecurityObject @ 0x140855250
 * Callers:
 *     CmpSetSecurityDescriptorInfo @ 0x140830F98 (CmpSetSecurityDescriptorInfo.c)
 *     SeSetSecurityDescriptorInfo @ 0x140854B40 (SeSetSecurityDescriptorInfo.c)
 *     ObSetSecurityDescriptorInfo @ 0x140854B90 (ObSetSecurityDescriptorInfo.c)
 *     SeSetSecurityDescriptorInfoEx @ 0x140856C50 (SeSetSecurityDescriptorInfoEx.c)
 *     IopSetDeviceSecurityDescriptor @ 0x140A524DC (IopSetDeviceSecurityDescriptor.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140289BB0 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseResourceLite @ 0x14028AA60 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x140321360 (ExAcquireResourceSharedLite.c)
 *     RtlpValidTrustSubjectContext @ 0x1403E334C (RtlpValidTrustSubjectContext.c)
 *     SepLocateTokenTrustLevel @ 0x1403E3620 (SepLocateTokenTrustLevel.c)
 *     RtlFindAceBySid @ 0x1403EB0D0 (RtlFindAceBySid.c)
 *     RtlSidDominates @ 0x1403EFBC0 (RtlSidDominates.c)
 *     RtlFindAceByType @ 0x140404D90 (RtlFindAceByType.c)
 *     SepCopyTokenIntegrity @ 0x140409240 (SepCopyTokenIntegrity.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     SeReleaseSubjectContext @ 0x140849AA0 (SeReleaseSubjectContext.c)
 *     SeCaptureSubjectContext @ 0x140849BB0 (SeCaptureSubjectContext.c)
 *     SeSinglePrivilegeCheckEx @ 0x14084FF60 (SeSinglePrivilegeCheckEx.c)
 *     RtlpNormalizeAcl @ 0x140856694 (RtlpNormalizeAcl.c)
 *     RtlpValidFilterAclSubjectContext @ 0x140856BA0 (RtlpValidFilterAclSubjectContext.c)
 *     RtlpCreateServerAcl @ 0x140856C98 (RtlpCreateServerAcl.c)
 *     RtlpCombineAcls @ 0x14090FEF0 (RtlpCombineAcls.c)
 *     SepValidOwnerSubjectContext @ 0x140A22078 (SepValidOwnerSubjectContext.c)
 *     RtlpComputeMergedAcl @ 0x140AAC9C4 (RtlpComputeMergedAcl.c)
 *     ExAllocatePoolWithTag @ 0x140B74010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
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
  void *v31; // r12
  __int64 v32; // rax
  __int16 v33; // cx
  unsigned __int16 *v34; // r12
  int v35; // r14d
  int valid; // ebx
  int v37; // edx
  int v38; // edx
  unsigned int v39; // eax
  int v40; // eax
  unsigned int v41; // r8d
  unsigned __int8 *v42; // rcx
  __int64 v43; // rsi
  unsigned int *v44; // rdi
  __int64 v45; // rcx
  unsigned int v46; // r15d
  __int64 v47; // rdi
  char *v48; // rbx
  int v49; // eax
  char *v50; // rbx
  bool v51; // zf
  PVOID v52; // r13
  void *v53; // rsi
  void *v54; // rdi
  void *v55; // r14
  int v57; // edx
  int v58; // edx
  int v59; // eax
  unsigned int v60; // r9d
  unsigned __int8 *v61; // rcx
  __int64 v62; // r13
  __int64 v63; // rcx
  unsigned __int16 *v64; // rbx
  int v65; // r14d
  __int64 *v66; // r13
  char v67; // r14
  _DWORD *v68; // rsi
  int v69; // r9d
  int v70; // ecx
  int v71; // eax
  unsigned int v72; // edi
  __int16 v73; // cx
  __int64 v74; // r14
  void *v75; // rcx
  _DWORD *v76; // rsi
  int v77; // r13d
  unsigned int v78; // r8d
  __int16 v79; // cx
  PSID v80; // r15
  int v81; // edx
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
  unsigned __int16 v96; // dx
  int v97; // r9d
  __int16 v98; // ax
  __int64 v99; // rcx
  unsigned __int8 *AceBySid; // rax
  int v101; // esi
  unsigned int v102; // edx
  ACL *v103; // r8
  int v104; // esi
  unsigned int v105; // edx
  int v106; // esi
  unsigned int v107; // edx
  ACL *v108; // r10
  ACL *v109; // r11
  int v110; // esi
  unsigned int v111; // edx
  __int64 v112; // r8
  __int16 v113; // ax
  int v114; // r9d
  __int64 v115; // rax
  __int64 v116; // rax
  void *v117; // rbx
  unsigned int v118; // eax
  __int64 v119; // rax
  void *v120; // rax
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
  BOOLEAN Dominates[4]; // [rsp+58h] [rbp-B0h] BYREF
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
  int v145[2]; // [rsp+80h] [rbp-88h]
  void *v146; // [rsp+88h] [rbp-80h]
  void *Src; // [rsp+90h] [rbp-78h]
  PVOID v148; // [rsp+98h] [rbp-70h]
  PVOID v149; // [rsp+A0h] [rbp-68h]
  PVOID v150; // [rsp+A8h] [rbp-60h]
  PVOID P; // [rsp+B0h] [rbp-58h]
  PVOID v152; // [rsp+B8h] [rbp-50h]
  __int64 *v153; // [rsp+C0h] [rbp-48h]
  __int64 v154; // [rsp+C8h] [rbp-40h]
  int v155; // [rsp+D0h] [rbp-38h]
  _DWORD Size[3]; // [rsp+D4h] [rbp-34h]
  struct _SECURITY_SUBJECT_CONTEXT *p_SubjectContext; // [rsp+E0h] [rbp-28h]
  __int64 v158; // [rsp+E8h] [rbp-20h]
  __int64 PoolWithTag; // [rsp+F0h] [rbp-18h] BYREF
  unsigned int v160; // [rsp+F8h] [rbp-10h]
  PSID Sid1[2]; // [rsp+100h] [rbp-8h] BYREF
  __int64 v162; // [rsp+110h] [rbp+8h] BYREF
  __int64 v163; // [rsp+118h] [rbp+10h] BYREF
  __int64 v164; // [rsp+120h] [rbp+18h] BYREF
  __int64 v165; // [rsp+128h] [rbp+20h] BYREF
  PVOID v166; // [rsp+130h] [rbp+28h] BYREF
  void *v167; // [rsp+138h] [rbp+30h] BYREF
  int v168; // [rsp+140h] [rbp+38h]
  __int64 v169; // [rsp+148h] [rbp+40h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+150h] [rbp+48h] BYREF
  PVOID v171; // [rsp+170h] [rbp+68h]
  _DWORD v172[12]; // [rsp+178h] [rbp+70h] BYREF
  _UNKNOWN *retaddr; // [rsp+1F0h] [rbp+E8h] BYREF

  v12 = &retaddr;
  v8 = a7;
  v10 = a3;
  v168 = a6;
  Dominates[0] = 0;
  LOWORD(v135) = 0;
  v143 = 0;
  v141 = 0;
  v142 = 0;
  LOBYTE(v12) = 0;
  v158 = a3;
  v153 = a4;
  Sid1[0] = 0LL;
  v13 = 0LL;
  PoolWithTag = 0LL;
  v171 = 0LL;
  v169 = 0LL;
  v150 = 0LL;
  v163 = 0LL;
  v149 = 0LL;
  v162 = 0LL;
  v148 = 0LL;
  v164 = 0LL;
  P = 0LL;
  v165 = 0LL;
  LOBYTE(v160) = 0;
  v152 = 0LL;
  v167 = 0LL;
  v14 = *(_WORD *)(a3 + 2);
  v154 = a7;
  p_SubjectContext = a8;
  v140 = 0;
  LODWORD(v144) = 0;
  *(_QWORD *)&Size[1] = 0LL;
  v166 = 0LL;
  v155 = (int)v12;
  v137 = 0;
  v134 = 0x8000;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  if ( (v14 & 0x10) != 0 )
  {
    if ( v14 < 0 )
    {
      v115 = *(unsigned int *)(a3 + 12);
      if ( (_DWORD)v115 )
        v15 = (ACL *)(v115 + a3);
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
  *(_QWORD *)v145 = v15;
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
    LOBYTE(v12) = v155;
    p_SubjectContext = &SubjectContext;
  }
  v20 = *a4;
  if ( *(__int16 *)(*a4 + 2) >= 0 )
  {
    valid = -1073741593;
    goto LABEL_71;
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
        v155 = (int)v12;
      }
    }
  }
  if ( (a2 & 1) != 0 )
  {
    v118 = a2 >> 2;
    LOBYTE(v118) = (a2 & 4) == 0;
    v160 = v118;
    if ( v21 >= 0 )
    {
      v120 = *(void **)(v10 + 8);
    }
    else
    {
      v119 = *(unsigned int *)(v10 + 4);
      if ( (_DWORD)v119 )
        v120 = (void *)(v10 + v119);
      else
        v120 = 0LL;
    }
    Src = v120;
    LOBYTE(v140) = 1;
    if ( (a5 & 8) == 0 && !(unsigned __int8)SepValidOwnerSubjectContext(p_SubjectContext, v120, (v21 & 0x80u) != 0, v23) )
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
LABEL_238:
        valid = -1073741733;
        goto LABEL_71;
      }
      v28 = (_BYTE *)(v26 + v27);
    }
  }
LABEL_22:
  v146 = v28;
  if ( (unsigned __int64)v28 <= 0x7FFFFFFF0000LL || (*v28 & 0xF) != 1 || v28[1] > 0xFu )
    goto LABEL_238;
  if ( (a2 & 0x1F8) == 0 )
  {
    v29 = v149;
    v30 = (unsigned __int16 *)v18;
    *(_QWORD *)&Size[1] = v18;
    v31 = v150;
    goto LABEL_27;
  }
  Size[0] = a2 & 0x10;
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
          goto LABEL_174;
      }
      Dominates[0] = 0;
      SeMediumMandatorySid = v13;
      *(_OWORD *)Sid1 = 0LL;
      if ( !v13 )
        SeMediumMandatorySid = SeExports->SeMediumMandatorySid;
      ClientToken = (__int64)p_SubjectContext->ClientToken;
      if ( !p_SubjectContext->ClientToken )
        ClientToken = (__int64)p_SubjectContext->PrimaryToken;
      if ( *(_DWORD *)(ClientToken + 192) == 2 && *(int *)(ClientToken + 196) < 2 )
        goto LABEL_174;
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      ExAcquireResourceSharedLite(*(PERESOURCE *)(ClientToken + 48), 1u);
      SepCopyTokenIntegrity(ClientToken, (__int64)Sid1);
      ExReleaseResourceLite(*(PERESOURCE *)(ClientToken + 48));
      KeLeaveCriticalRegionThread();
      if ( (v83 & 8) != 0 )
      {
        if ( RtlSidDominates(SeMediumMandatorySid, SeExports->SeMediumMandatorySid, Dominates) < 0 )
          goto LABEL_174;
        if ( !Dominates[0] )
          SeMediumMandatorySid = SeExports->SeMediumMandatorySid;
      }
      if ( RtlSidDominates(Sid1[0], SeMediumMandatorySid, Dominates) < 0
        || !Dominates[0] && !(unsigned __int8)SeSinglePrivilegeCheckEx(SeRelabelPrivilege, (__int64)p_SubjectContext, 1) )
      {
LABEL_174:
        valid = -1073740730;
        goto LABEL_71;
      }
      ++Index;
      v15 = *(ACL **)v145;
    }
    while ( v85 );
    Dominates[0] = v135;
    Sid1[0] = (PSID)PoolWithTag;
    v149 = (PVOID)v162;
    v148 = (PVOID)v164;
    v150 = (PVOID)v163;
    v152 = v167;
    P = (PVOID)v165;
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
            goto LABEL_174;
          if ( !RtlpValidTrustSubjectContext(v90, (__int64)(v91 + 2), v92, &v144) )
            break;
        }
        ++Index;
        if ( !v93 )
          goto LABEL_155;
      }
    }
    valid = -1073741790;
    goto LABEL_71;
  }
LABEL_155:
  if ( (a2 & 0x100) == 0 )
    goto LABEL_163;
  WORD2(v171) = 256;
  LODWORD(v144) = 0;
  LODWORD(v171) = 0;
  for ( Index = 0; ; ++Index )
  {
    while ( 1 )
    {
      v94 = RtlFindAceByType(v15, 0x15u, &Index);
      if ( !v94 )
        goto LABEL_158;
      if ( (v94[1] & 0xFF000000) != 0 )
        goto LABEL_281;
      if ( (*((_BYTE *)v94 + 1) & 0x40) != 0 )
        break;
      v127 = *(_DWORD *)((char *)v94 + 10) - (_DWORD)v171;
      if ( !v127 )
        v127 = *((unsigned __int16 *)v94 + 7) - WORD2(v171);
      if ( v127 || *((_BYTE *)v94 + 9) != 1 || v94[4] )
      {
LABEL_281:
        valid = -1073741811;
        goto LABEL_160;
      }
LABEL_158:
      ++Index;
      if ( !v94 )
      {
        valid = v144;
        goto LABEL_160;
      }
    }
    if ( !RtlpValidTrustSubjectContext(v90, (__int64)(v94 + 2), (__int64)v94, &v144) )
      break;
  }
  valid = -1073741790;
LABEL_160:
  if ( valid < 0 )
    goto LABEL_71;
  if ( (a5 & 2) == 0 )
  {
    valid = RtlpValidFilterAclSubjectContext(v18);
    if ( valid < 0 )
      goto LABEL_71;
  }
LABEL_163:
  v95 = v158;
  if ( (a2 & 8) == 0 )
  {
    v171 = v18;
    v97 = 0x8000;
    goto LABEL_182;
  }
  v96 = *(_WORD *)(v158 + 2);
  if ( (a5 & 2) != 0 )
  {
    valid = RtlpComputeMergedAcl(
              (int)v18,
              (*(_WORD *)(*v153 + 2) & 0x2800 | (*(unsigned __int16 *)(*v153 + 2) >> 1) & 0x18u) >> 1,
              (int)v15,
              (v96 & 0x2800 | (v96 >> 1) & 0x18u) >> 1,
              (__int64)Src,
              (__int64)v146,
              v154,
              2,
              (__int64)&v169,
              (__int64)&v137);
    if ( valid >= 0 )
    {
      v95 = v158;
      LOBYTE(v141) = 1;
      v97 = 2 * (v137 & 0x1400 | (2 * (v137 & 8 | 0x2004)));
      v171 = (PVOID)v169;
      v134 = v97;
      goto LABEL_182;
    }
    v53 = (void *)v169;
    v29 = v149;
    goto LABEL_271;
  }
  v171 = v15;
  v97 = v96 & 0x2000 | 0x8010;
  v134 = v97;
  if ( (v96 & 0xA00) == 0xA00 )
  {
    v97 = v96 & 0x2000 | 0x8810;
    v134 = v97;
  }
LABEL_182:
  v101 = v97;
  if ( (a2 & 0x20) == 0 )
  {
    v149 = v18;
    goto LABEL_187;
  }
  v102 = *(unsigned __int16 *)(v95 + 2);
  v103 = *(ACL **)v145;
  if ( (a5 & 2) != 0 )
  {
    valid = RtlpComputeMergedAcl(
              (int)v18,
              (*(_WORD *)(*v153 + 2) & 0x800 | (*(unsigned __int16 *)(*v153 + 2) >> 1) & 0x18u) >> 1,
              v145[0],
              (v102 & 0x800 | (v102 >> 1) & 0x18) >> 1,
              (__int64)Src,
              (__int64)v146,
              v154,
              2,
              (__int64)&v162,
              (__int64)&v137);
    if ( valid < 0 )
    {
      v29 = (void *)v162;
      v53 = v171;
LABEL_271:
      v31 = v150;
LABEL_272:
      v55 = v148;
LABEL_273:
      v54 = P;
LABEL_274:
      v52 = v152;
      goto LABEL_61;
    }
    v95 = v158;
    BYTE1(v141) = 1;
    v149 = (PVOID)v162;
    v97 = v101 | (2 * (v137 & 0x1400 | (2 * (v137 & 8 | 4))));
    v134 = v97;
LABEL_187:
    v103 = *(ACL **)v145;
    goto LABEL_188;
  }
  v149 = *(PVOID *)v145;
  v97 |= v102 & 0x2000 | 0x10;
  v134 = v97;
  if ( (v102 & 0xA00) == 0xA00 )
  {
    v97 |= 0x800u;
    v134 = v97;
  }
LABEL_188:
  v104 = v97;
  if ( (a2 & 0x40) == 0 )
  {
    v150 = v18;
    goto LABEL_192;
  }
  v105 = *(unsigned __int16 *)(v95 + 2);
  if ( (a5 & 2) != 0 )
  {
    valid = RtlpComputeMergedAcl(
              (int)v18,
              (*(_WORD *)(*v153 + 2) & 0x800 | (*(unsigned __int16 *)(*v153 + 2) >> 1) & 0x18u) >> 1,
              (int)v103,
              (v105 & 0x800 | (v105 >> 1) & 0x18) >> 1,
              (__int64)Src,
              (__int64)v146,
              v154,
              2,
              (__int64)&v163,
              (__int64)&v137);
    if ( valid >= 0 )
    {
      BYTE2(v141) = 1;
      v150 = (PVOID)v163;
      v97 = v104 | (2 * (v137 & 0x1400 | (2 * (v137 & 8 | 4))));
      v134 = v97;
      goto LABEL_192;
    }
    v31 = (void *)v163;
    v53 = v171;
    v29 = v149;
    goto LABEL_272;
  }
  v150 = v103;
  v97 |= v105 & 0x2000 | 0x10;
  v134 = v97;
  if ( (v105 & 0xA00) == 0xA00 )
  {
    v97 |= 0x800u;
    v134 = v97;
  }
LABEL_192:
  v106 = v97;
  v10 = v158;
  if ( (a2 & 0x80) == 0 )
  {
    v109 = v18;
    v148 = v18;
    goto LABEL_198;
  }
  v107 = *(unsigned __int16 *)(v158 + 2);
  if ( (a5 & 2) != 0 )
  {
    valid = RtlpComputeMergedAcl(
              (int)v18,
              (*(_WORD *)(*v153 + 2) & 0x800 | (*(unsigned __int16 *)(*v153 + 2) >> 1) & 0x18u) >> 1,
              v145[0],
              (v107 & 0x800 | (v107 >> 1) & 0x18) >> 1,
              (__int64)Src,
              (__int64)v146,
              v154,
              2,
              (__int64)&v164,
              (__int64)&v137);
    if ( valid < 0 )
    {
      v55 = (void *)v164;
      v53 = v171;
      v29 = v149;
      v31 = v150;
      goto LABEL_273;
    }
    v109 = (ACL *)v164;
    HIBYTE(v141) = 1;
    v148 = (PVOID)v164;
    v97 = v106 | (2 * (v137 & 0x1400 | (2 * (v137 & 8 | 4))));
    v134 = v97;
LABEL_198:
    v108 = *(ACL **)v145;
    goto LABEL_199;
  }
  v108 = *(ACL **)v145;
  v148 = *(PVOID *)v145;
  v97 |= v107 & 0x2000 | 0x10;
  v109 = *(ACL **)v145;
  v134 = v97;
  if ( (v107 & 0xA00) == 0xA00 )
  {
    v97 |= 0x800u;
    v134 = v97;
  }
LABEL_199:
  v110 = v97;
  if ( (a2 & 0x100) == 0 )
  {
    v28 = v146;
    v112 = (__int64)v18;
    P = v18;
    goto LABEL_203;
  }
  v111 = *(unsigned __int16 *)(v10 + 2);
  v28 = v146;
  v112 = (__int64)v108;
  if ( (a5 & 2) != 0 )
  {
    valid = RtlpComputeMergedAcl(
              (int)v18,
              (*(_WORD *)(*v153 + 2) & 0x800 | (*(unsigned __int16 *)(*v153 + 2) >> 1) & 0x18u) >> 1,
              (int)v108,
              (v111 & 0x800 | (v111 >> 1) & 0x18) >> 1,
              (__int64)Src,
              (__int64)v146,
              v154,
              2,
              (__int64)&v165,
              (__int64)&v137);
    if ( valid >= 0 )
    {
      v112 = v165;
      LODWORD(v108) = v145[0];
      v109 = (ACL *)v148;
      v142 = 1;
      P = (PVOID)v165;
      v97 = v110 | (2 * (v137 & 0x1400 | (2 * (v137 & 8 | 4))));
      v134 = v97;
      goto LABEL_203;
    }
    v54 = (void *)v165;
    v53 = v171;
    v55 = v148;
    v29 = v149;
    v31 = v150;
    goto LABEL_274;
  }
  P = v108;
  v97 |= v111 & 0x2000 | 0x10;
  v134 = v97;
  if ( (v111 & 0xA00) == 0xA00 )
  {
    v97 |= 0x800u;
    v134 = v97;
  }
LABEL_203:
  if ( Size[0] )
  {
    v113 = *(_WORD *)(v10 + 2);
    v114 = v113 & 0x2000 | 0x10 | v97;
    v134 = v114;
    if ( (v113 & 0xA00) == 0xA00 )
      v134 = v114 | 0x800;
  }
  else
  {
    LODWORD(v108) = (_DWORD)v18;
  }
  v31 = v150;
  v29 = v149;
  v53 = v171;
  valid = RtlpCombineAcls(
            (_DWORD)v171,
            (_DWORD)v108,
            (_DWORD)v149,
            (_DWORD)v150,
            (__int64)v109,
            v112,
            (__int64)&v166,
            0LL);
  if ( valid < 0 )
    goto LABEL_272;
  v30 = (unsigned __int16 *)v166;
  *(_QWORD *)&Size[1] = v166;
  if ( !v171 && v166 && !*((_WORD *)v166 + 2) )
  {
    ExFreePoolWithTag(v166, 0);
    v30 = 0LL;
    *(_QWORD *)&Size[1] = 0LL;
    v166 = 0LL;
  }
  v8 = v154;
  v25 = Src;
  v143 = 1;
LABEL_27:
  if ( (a2 & 4) == 0 )
  {
    v32 = *v153;
    v33 = *(_WORD *)(*v153 + 2);
    if ( (v33 & 4) == 0 )
    {
      v34 = 0LL;
      goto LABEL_30;
    }
    if ( v33 >= 0 )
    {
      v34 = *(unsigned __int16 **)(v32 + 32);
LABEL_30:
      v35 = v134;
    }
    else
    {
      v82 = *(unsigned int *)(v32 + 16);
      v35 = v134;
      if ( (_DWORD)v82 )
        v34 = (unsigned __int16 *)(v32 + v82);
      else
        v34 = 0LL;
    }
LABEL_104:
    v70 = 4 * (unsigned __int8)v25[1] + 8;
    v71 = (unsigned __int8)v28[1];
    Size[0] = v70;
    LODWORD(v144) = 4 * v71 + 8;
    if ( v30 )
      v72 = (v30[1] + 3) & 0xFFFFFFFC;
    else
      v72 = 0;
    if ( v34 )
      v46 = (v34[1] + 3) & 0xFFFFFFFC;
    else
      v46 = 0;
    PoolWithTag = (__int64)ExAllocatePoolWithTag(
                             (POOL_TYPE)(v168 | 0x400),
                             v70 + 20 + v46 + v72 + 4 * v71 + 8,
                             0x64536553u);
    v43 = PoolWithTag;
    if ( PoolWithTag )
    {
      v64 = (unsigned __int16 *)(PoolWithTag + 20);
      *(_OWORD *)PoolWithTag = 0LL;
      *(_DWORD *)(v43 + 16) = 0;
      *(_BYTE *)v43 = 1;
      if ( (_BYTE)v155 )
      {
        v35 |= 0x800u;
        v134 = v35;
      }
      v73 = *(_WORD *)(v43 + 2) | v35;
      *(_WORD *)(v43 + 2) = v73;
      if ( (*(_WORD *)(v10 + 2) & 0x4000) != 0 )
      {
        *(_BYTE *)(v43 + 1) = *(_BYTE *)(v10 + 1);
        *(_WORD *)(v43 + 2) = v73 | 0x4000;
      }
      v62 = *(_QWORD *)&Size[1];
      if ( !*(_QWORD *)&Size[1] )
        goto LABEL_217;
      v74 = v43 + 20;
      v75 = (void *)(v43 + 20);
      if ( (a5 & 0x4000) != 0 )
      {
        RtlpNormalizeAcl(v75, *(_QWORD *)&Size[1], v154);
        if ( *(_WORD *)(v43 + 24) )
        {
          v72 = *(unsigned __int16 *)(v43 + 22);
        }
        else
        {
          v74 = 0LL;
          v72 = 0;
        }
      }
      else
      {
        memmove(v75, *(const void **)&Size[1], *(unsigned __int16 *)(*(_QWORD *)&Size[1] + 2LL));
        if ( v43 != -20 )
        {
          v61 = (unsigned __int8 *)(v43 + 28);
          v60 = 0;
          if ( *(_WORD *)(v43 + 24) )
          {
            v76 = (_DWORD *)v154;
            v77 = 1651;
            do
            {
              v78 = *v61;
              if ( ((unsigned __int8)v78 <= 0xAu || (unsigned __int8)(v78 - 13) <= 1u) && (v61[1] & 8) == 0 )
              {
                v57 = *((_DWORD *)v61 + 1);
                if ( v57 < 0 )
                  v57 |= *v76;
                if ( (v57 & 0x40000000) != 0 )
                  v57 |= v76[1];
                if ( (v57 & 0x20000000) != 0 )
                  v57 |= v76[2];
                if ( (v57 & 0x10000000) != 0 )
                  v57 |= v76[3];
                v58 = v57 & 0xFFFFFFF;
                *((_DWORD *)v61 + 1) = v58;
                if ( (unsigned __int8)v78 <= 0xAu && _bittest(&v77, v78) )
                  v59 = v76[3];
                else
                  v59 = v76[3] | 0x1000000;
                *((_DWORD *)v61 + 1) = v58 & v59;
              }
              ++v60;
              v61 += *((unsigned __int16 *)v61 + 1);
            }
            while ( v60 < v64[2] );
            v43 = PoolWithTag;
            v62 = *(_QWORD *)&Size[1];
          }
        }
        v63 = *(unsigned __int16 *)(v62 + 2);
        if ( v72 > (unsigned int)v63 )
          memset_0((char *)v64 + v63, 0, v72 - (unsigned int)v63);
      }
      if ( v74 )
      {
        v64 = (unsigned __int16 *)((char *)v64 + v72);
        v65 = v74 - v43;
      }
      else
      {
LABEL_217:
        v65 = 0;
      }
      v66 = v153;
      *(_DWORD *)(v43 + 12) = v65;
      v67 = v134;
      if ( (v134 & 0x10) == 0 )
        *(_WORD *)(v43 + 2) |= *(_WORD *)(*v66 + 2) & 0x2830;
      if ( v34 )
      {
        memmove(v64, v34, v34[1]);
        if ( v64 )
        {
          v42 = (unsigned __int8 *)(v64 + 4);
          v41 = 0;
          if ( v64[2] )
          {
            v68 = (_DWORD *)v154;
            v69 = 1651;
            do
            {
              if ( (*v42 <= 0xAu || (unsigned __int8)(*v42 - 13) <= 1u) && (v42[1] & 8) == 0 )
              {
                v37 = *((_DWORD *)v42 + 1);
                if ( v37 < 0 )
                  v37 |= *v68;
                if ( (v37 & 0x40000000) != 0 )
                  v37 |= v68[1];
                if ( (v37 & 0x20000000) != 0 )
                  v37 |= v68[2];
                if ( (v37 & 0x10000000) != 0 )
                  v37 |= v68[3];
                v38 = v37 & 0xFFFFFFF;
                *((_DWORD *)v42 + 1) = v38;
                v39 = *v42;
                if ( (unsigned __int8)v39 <= 0xAu && _bittest(&v69, v39) )
                  v40 = v68[3];
                else
                  v40 = v68[3] | 0x1000000;
                *((_DWORD *)v42 + 1) = v38 & v40;
              }
              ++v41;
              v42 += *((unsigned __int16 *)v42 + 1);
            }
            while ( v41 < v64[2] );
            v43 = PoolWithTag;
          }
        }
        v44 = (unsigned int *)(v43 + 16);
        *(_DWORD *)(v43 + 16) = (_DWORD)v64 - v43;
        v45 = v34[1];
        if ( v46 > (unsigned int)v45 )
          memset_0((char *)v64 + v45, 0, v46 - (unsigned int)v45);
      }
      else
      {
        v44 = (unsigned int *)(v43 + 16);
        *(_DWORD *)(v43 + 16) = 0;
      }
      if ( (v67 & 4) == 0 )
      {
        *(_WORD *)(v43 + 2) |= *(_WORD *)(*v66 + 2) & 0x140C;
        if ( (_BYTE)v160 )
        {
          v172[0] = 257;
          Index = 0;
          v172[1] = 50331648;
          v172[2] = 4;
          while ( 1 )
          {
            v98 = *(_WORD *)(v43 + 2);
            if ( (v98 & 4) != 0 )
            {
              if ( v98 >= 0 )
              {
                v99 = *(_QWORD *)(v43 + 32);
              }
              else
              {
                v122 = *v44;
                v99 = (_DWORD)v122 ? v43 + v122 : 0LL;
              }
            }
            else
            {
              v99 = 0LL;
            }
            AceBySid = RtlFindAceBySid(v99, v172, &Index);
            if ( !AceBySid )
              break;
            v124 = AceBySid[1] & 0xF4 | 8;
            ++Index;
            AceBySid[1] = v124;
          }
          v66 = v153;
        }
      }
      if ( *(_DWORD *)(v43 + 16) && (a5 & 0x4000) != 0 )
      {
        RtlpNormalizeAcl(v64, v64, 0LL);
        v46 = v64[1];
      }
      v47 = Size[0];
      v48 = (char *)v64 + v46;
      memmove(v48, Src, Size[0]);
      v49 = (int)v48;
      v50 = &v48[v47];
      v51 = (_BYTE)v140 == 0;
      *(_DWORD *)(v43 + 4) = v49 - v43;
      if ( v51 )
        *(_WORD *)(v43 + 2) |= *(_WORD *)(*v66 + 2) & 1;
      memmove(v50, v146, (unsigned int)v144);
      v51 = HIBYTE(v140) == 0;
      *(_DWORD *)(v43 + 8) = (_DWORD)v50 - v43;
      if ( v51 )
        *(_WORD *)(v43 + 2) |= *(_WORD *)(*v66 + 2) & 2;
      *v66 = v43;
      valid = 0;
    }
    else
    {
      valid = -1073741801;
    }
    v52 = v152;
    goto LABEL_58;
  }
  v79 = *(_WORD *)(v10 + 2);
  if ( (a5 & 1) == 0 )
  {
    if ( (v79 & 4) != 0 )
    {
      if ( v79 < 0 )
      {
        v116 = *(unsigned int *)(v10 + 16);
        if ( (_DWORD)v116 )
          v34 = (unsigned __int16 *)(v116 + v10);
        else
          v34 = 0LL;
      }
      else
      {
        v34 = *(unsigned __int16 **)(v10 + 32);
      }
    }
    else
    {
      v34 = 0LL;
    }
    v80 = Sid1[0];
    v81 = v79 & 0x1000 | 4 | v134;
    v134 = v81;
    if ( (v79 & 0x500) == 0x500 )
      v134 = v81 | 0x400;
    v35 = v134;
    goto LABEL_103;
  }
  if ( (v79 & 4) != 0 )
  {
    if ( v79 >= 0 )
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
  if ( valid < 0 )
  {
    v53 = v171;
    goto LABEL_272;
  }
  v80 = (PSID)PoolWithTag;
  v34 = (unsigned __int16 *)PoolWithTag;
  v25 = Src;
  BYTE1(v135) = 1;
  v35 = v137 & 0x1408 | 4 | v134;
  Sid1[0] = (PSID)PoolWithTag;
  v134 = v35;
LABEL_103:
  if ( !v138 )
    goto LABEL_104;
  valid = RtlpCreateServerAcl(
            (_DWORD)v34,
            v139,
            *(_QWORD *)(*((_QWORD *)p_SubjectContext->PrimaryToken + 19)
                      + 16LL * *((unsigned int *)p_SubjectContext->PrimaryToken + 36)),
            (unsigned int)&v167,
            (__int64)&v135);
  Dominates[0] = v135;
  if ( valid >= 0 )
  {
    v117 = v167;
    v152 = v167;
    if ( (_BYTE)v135 )
    {
      if ( BYTE1(v135) )
        ExFreePoolWithTag(v80, 0);
      Dominates[0] = 0;
      BYTE1(v135) = 1;
      Sid1[0] = v117;
    }
    v25 = Src;
    v34 = (unsigned __int16 *)v117;
    goto LABEL_104;
  }
  v52 = v167;
LABEL_58:
  if ( BYTE1(v135) )
    ExFreePoolWithTag(Sid1[0], 0);
  v53 = v171;
  v54 = P;
  v55 = v148;
  v29 = v149;
  v31 = v150;
LABEL_61:
  if ( v53 && (_BYTE)v141 )
    ExFreePoolWithTag(v53, 0);
  if ( v29 && BYTE1(v141) )
    ExFreePoolWithTag(v29, 0);
  if ( v31 && BYTE2(v141) )
    ExFreePoolWithTag(v31, 0);
  if ( v55 && HIBYTE(v141) )
    ExFreePoolWithTag(v55, 0);
  if ( v54 && v142 )
    ExFreePoolWithTag(v54, 0);
  if ( *(_QWORD *)&Size[1] && v143 )
    ExFreePoolWithTag(*(PVOID *)&Size[1], 0);
  if ( Dominates[0] )
    ExFreePoolWithTag(v52, 0);
LABEL_71:
  if ( p_SubjectContext == &SubjectContext )
    SeReleaseSubjectContext(&SubjectContext);
  return (unsigned int)valid;
}
