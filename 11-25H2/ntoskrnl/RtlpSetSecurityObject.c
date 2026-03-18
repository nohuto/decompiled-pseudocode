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
  void *v15; // rsi
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
  unsigned __int16 *v32; // r12
  __int16 v33; // cx
  PVOID v34; // r15
  int v35; // edx
  int v36; // r14d
  int v37; // ecx
  int v38; // eax
  unsigned int v39; // edi
  unsigned int v40; // r15d
  __int64 v41; // rsi
  unsigned __int16 *v42; // rbx
  __int16 v43; // cx
  unsigned __int16 *v44; // r13
  __int64 v45; // r14
  void *v46; // rcx
  unsigned __int8 *v47; // rcx
  unsigned int v48; // r9d
  _DWORD *v49; // rsi
  int v50; // r13d
  unsigned int v51; // r8d
  int v52; // edx
  int v53; // edx
  int v54; // eax
  __int64 v55; // rcx
  int v56; // r14d
  __int64 *v57; // r13
  char v58; // r14
  unsigned __int8 *v59; // rcx
  unsigned int v60; // r8d
  _DWORD *v61; // rsi
  int v62; // r9d
  int v63; // edx
  int v64; // edx
  unsigned int v65; // eax
  int v66; // eax
  unsigned int *v67; // rdi
  __int64 v68; // rcx
  __int64 v69; // rdi
  char *v70; // rbx
  int v71; // eax
  char *v72; // rbx
  bool v73; // zf
  int valid; // ebx
  PVOID v75; // r12
  void *v76; // rcx
  void *v77; // r14
  void *v78; // rdi
  void *v79; // rsi
  __int64 v81; // rax
  __int16 v82; // cx
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
  unsigned int v97; // edx
  int v98; // r8d
  int v99; // r11d
  __int16 v100; // ax
  __int64 v101; // rcx
  unsigned __int8 *AceBySid; // rax
  int v103; // esi
  unsigned int v104; // edx
  void *v105; // r10
  __int64 v106; // rbx
  int v107; // esi
  unsigned int v108; // edx
  int v109; // esi
  unsigned int v110; // edx
  __int64 v111; // r9
  int v112; // esi
  unsigned int v113; // edx
  int v114; // r8d
  __int16 v115; // cx
  __int64 v116; // rax
  unsigned int v117; // eax
  __int64 v118; // rax
  void *v119; // rax
  void *v120; // rbx
  __int64 v121; // rax
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
  char v134; // [rsp+58h] [rbp-B0h] BYREF
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
  __int64 v146; // [rsp+80h] [rbp-88h]
  void *v147; // [rsp+88h] [rbp-80h]
  PVOID v148; // [rsp+90h] [rbp-78h]
  void *v149; // [rsp+98h] [rbp-70h]
  PVOID v150; // [rsp+A0h] [rbp-68h]
  int v151[2]; // [rsp+A8h] [rbp-60h]
  PVOID v152; // [rsp+B0h] [rbp-58h]
  PVOID P; // [rsp+B8h] [rbp-50h]
  __int64 *v154; // [rsp+C0h] [rbp-48h]
  __int64 v155; // [rsp+C8h] [rbp-40h]
  unsigned int Size; // [rsp+D0h] [rbp-38h]
  int Size_4; // [rsp+D4h] [rbp-34h]
  void *Src; // [rsp+D8h] [rbp-30h]
  struct _SECURITY_SUBJECT_CONTEXT *p_SubjectContext; // [rsp+E0h] [rbp-28h]
  __int64 v160; // [rsp+E8h] [rbp-20h]
  __int64 PoolWithTag; // [rsp+F0h] [rbp-18h] BYREF
  unsigned int v162; // [rsp+F8h] [rbp-10h]
  PVOID Buf1[2]; // [rsp+100h] [rbp-8h] BYREF
  __int64 v164; // [rsp+110h] [rbp+8h] BYREF
  __int64 v165; // [rsp+118h] [rbp+10h] BYREF
  __int64 v166; // [rsp+120h] [rbp+18h] BYREF
  __int64 v167; // [rsp+128h] [rbp+20h] BYREF
  PVOID v168; // [rsp+130h] [rbp+28h] BYREF
  void *v169; // [rsp+138h] [rbp+30h] BYREF
  int v170; // [rsp+140h] [rbp+38h]
  __int64 v171; // [rsp+148h] [rbp+40h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+150h] [rbp+48h] BYREF
  PVOID v173; // [rsp+170h] [rbp+68h]
  _DWORD v174[12]; // [rsp+178h] [rbp+70h] BYREF
  _UNKNOWN *retaddr; // [rsp+1F0h] [rbp+E8h] BYREF

  v12 = &retaddr;
  v8 = a7;
  v10 = a3;
  v170 = a6;
  v134 = 0;
  LOWORD(v136) = 0;
  v144 = 0;
  v142 = 0;
  v143 = 0;
  LOBYTE(v12) = 0;
  v160 = a3;
  v154 = a4;
  Buf1[0] = 0LL;
  v13 = 0LL;
  PoolWithTag = 0LL;
  v173 = 0LL;
  v171 = 0LL;
  v150 = 0LL;
  v165 = 0LL;
  v146 = 0LL;
  v164 = 0LL;
  v148 = 0LL;
  v166 = 0LL;
  P = 0LL;
  v167 = 0LL;
  LOBYTE(v162) = 0;
  v152 = 0LL;
  v169 = 0LL;
  v14 = *(_WORD *)(a3 + 2);
  v155 = a7;
  p_SubjectContext = a8;
  v141 = 0;
  LODWORD(v145) = 0;
  Src = 0LL;
  v168 = 0LL;
  Size_4 = (int)v12;
  v138 = 0;
  v135 = 0x8000;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  if ( (v14 & 0x10) != 0 )
  {
    if ( v14 < 0 )
    {
      v121 = *(unsigned int *)(a3 + 12);
      if ( (_DWORD)v121 )
        v15 = (void *)(v121 + a3);
      else
        v15 = 0LL;
    }
    else
    {
      v15 = *(void **)(a3 + 24);
    }
  }
  else
  {
    v15 = 0LL;
  }
  v16 = *a4;
  *(_QWORD *)v151 = v15;
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
        Size_4 = (int)v12;
      }
    }
  }
  if ( (a2 & 1) != 0 )
  {
    v117 = a2 >> 2;
    LOBYTE(v117) = (a2 & 4) == 0;
    v162 = v117;
    if ( v21 >= 0 )
    {
      v119 = *(void **)(v10 + 8);
    }
    else
    {
      v118 = *(unsigned int *)(v10 + 4);
      if ( (_DWORD)v118 )
        v119 = (void *)(v10 + v118);
      else
        v119 = 0LL;
    }
    v147 = v119;
    LOBYTE(v141) = 1;
    if ( (a5 & 8) == 0 && !(unsigned __int8)SepValidOwnerSubjectContext(p_SubjectContext, v119, (v21 & 0x80u) != 0, v23) )
      goto LABEL_229;
    v25 = v147;
  }
  else
  {
    v24 = *(_DWORD *)(v20 + 4);
    if ( !v24 )
      goto LABEL_229;
    v25 = (_BYTE *)(v20 + v24);
    v147 = v25;
    if ( !v25 )
      goto LABEL_229;
  }
  v26 = 0x7FFFFFFF0000LL;
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
LABEL_237:
        valid = -1073741733;
        goto LABEL_121;
      }
      v29 = (_BYTE *)(v27 + v28);
    }
  }
LABEL_22:
  v149 = v29;
  if ( (unsigned __int64)v29 <= 0x7FFFFFFF0000LL || (*v29 & 0xF) != 1 || v29[1] > 0xFu )
    goto LABEL_237;
  if ( (a2 & 0x1F8) == 0 )
  {
    v30 = v150;
    v31 = v18;
    Src = v18;
    v32 = 0LL;
    goto LABEL_27;
  }
  Size = a2 & 0x10;
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
          goto LABEL_209;
      }
      v134 = 0;
      SeMediumMandatorySid = v13;
      *(_OWORD *)Buf1 = 0LL;
      if ( !v13 )
        SeMediumMandatorySid = (char *)SeExports->SeMediumMandatorySid;
      ClientToken = (__int64)p_SubjectContext->ClientToken;
      if ( !p_SubjectContext->ClientToken )
        ClientToken = (__int64)p_SubjectContext->PrimaryToken;
      if ( *(_DWORD *)(ClientToken + 192) == 2 && *(int *)(ClientToken + 196) < 2 )
        goto LABEL_209;
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      ExAcquireResourceSharedLite(*(PERESOURCE *)(ClientToken + 48), 1u);
      SepCopyTokenIntegrity(ClientToken, (__int64)Buf1);
      ExReleaseResourceLite(*(PERESOURCE *)(ClientToken + 48));
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      if ( (v84 & 8) != 0 )
      {
        if ( (int)RtlSidDominates(SeMediumMandatorySid, (char *)SeExports->SeMediumMandatorySid, &v134) < 0 )
          goto LABEL_209;
        if ( !v134 )
          SeMediumMandatorySid = (char *)SeExports->SeMediumMandatorySid;
      }
      if ( (int)RtlSidDominates((char *)Buf1[0], SeMediumMandatorySid, &v134) < 0
        || !v134 && !(unsigned __int8)SeSinglePrivilegeCheckEx(SeRelabelPrivilege, (__int64)p_SubjectContext, 1) )
      {
LABEL_209:
        valid = -1073740730;
        goto LABEL_121;
      }
      ++i;
      v15 = *(void **)v151;
    }
    while ( v86 );
    v134 = v136;
    Buf1[0] = (PVOID)PoolWithTag;
    v150 = (PVOID)v165;
    v146 = v164;
    v148 = (PVOID)v166;
    P = (PVOID)v167;
    v152 = v169;
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
            goto LABEL_209;
          if ( !RtlpValidTrustSubjectContext(v91, (__int64)(v92 + 8), v93, &v145) )
            break;
        }
        ++i;
        if ( !v94 )
          goto LABEL_156;
      }
    }
    valid = -1073741790;
    goto LABEL_121;
  }
LABEL_156:
  if ( (a2 & 0x100) == 0 )
    goto LABEL_164;
  WORD2(v173) = 256;
  LODWORD(v145) = 0;
  LODWORD(v173) = 0;
  for ( i = 0; ; ++i )
  {
    while ( 1 )
    {
      v95 = RtlFindAceByType((__int64)v15, 21, &i);
      if ( !v95 )
        goto LABEL_159;
      if ( (*((_DWORD *)v95 + 1) & 0xFF000000) != 0 )
        goto LABEL_302;
      if ( (v95[1] & 0x40) != 0 )
        break;
      v128 = *(_DWORD *)(v95 + 10) - (_DWORD)v173;
      if ( !v128 )
        v128 = *((unsigned __int16 *)v95 + 7) - WORD2(v173);
      if ( v128 || v95[9] != 1 || *((_DWORD *)v95 + 4) )
      {
LABEL_302:
        valid = -1073741811;
        goto LABEL_161;
      }
LABEL_159:
      ++i;
      if ( !v95 )
      {
        valid = v145;
        goto LABEL_161;
      }
    }
    if ( !RtlpValidTrustSubjectContext(v91, (__int64)(v95 + 8), (__int64)v95, &v145) )
      break;
  }
  valid = -1073741790;
LABEL_161:
  if ( valid < 0 )
    goto LABEL_121;
  if ( (a5 & 2) == 0 )
  {
    valid = RtlpValidFilterAclSubjectContext(v18, v91);
    if ( valid < 0 )
      goto LABEL_121;
  }
LABEL_164:
  v96 = v160;
  if ( (a2 & 8) == 0 )
  {
    v99 = (int)v18;
    v173 = v18;
    v98 = 0x8000;
    goto LABEL_182;
  }
  v97 = *(unsigned __int16 *)(v160 + 2);
  if ( (a5 & 2) != 0 )
  {
    valid = RtlpComputeMergedAcl(
              (int)v18,
              (*(_WORD *)(*v154 + 2) & 0x2800 | (*(unsigned __int16 *)(*v154 + 2) >> 1) & 0x18u) >> 1,
              (int)v15,
              (v97 & 0x2800 | (v97 >> 1) & 0x18) >> 1,
              (__int64)v147,
              (__int64)v149,
              v155,
              2,
              (__int64)&v171,
              (__int64)&v138);
    if ( valid >= 0 )
    {
      v99 = v171;
      v96 = v160;
      LOBYTE(v142) = 1;
      v173 = (PVOID)v171;
      v98 = 2 * (v138 & 0x1400 | (2 * (v138 & 8 | 0x2004)));
      v135 = v98;
      goto LABEL_182;
    }
    v76 = (void *)v171;
    v75 = v152;
    goto LABEL_107;
  }
  v173 = v15;
  v98 = v97 & 0x2000 | 0x8010;
  v99 = (int)v15;
  v135 = v98;
  if ( (v97 & 0xA00) == 0xA00 )
  {
    v98 = v97 & 0x2000 | 0x8810;
    v135 = v98;
  }
LABEL_182:
  v103 = v98;
  if ( (a2 & 0x20) == 0 )
  {
    v106 = (__int64)v18;
    goto LABEL_187;
  }
  v104 = *(unsigned __int16 *)(v96 + 2);
  if ( (a5 & 2) != 0 )
  {
    valid = RtlpComputeMergedAcl(
              (int)v18,
              (*(_WORD *)(*v154 + 2) & 0x800 | (*(unsigned __int16 *)(*v154 + 2) >> 1) & 0x18u) >> 1,
              v151[0],
              (v104 & 0x800 | (v104 >> 1) & 0x18) >> 1,
              (__int64)v147,
              (__int64)v149,
              v155,
              2,
              (__int64)&v164,
              (__int64)&v138);
    if ( valid < 0 )
    {
      v77 = (void *)v164;
      v76 = v173;
      v75 = v152;
      goto LABEL_108;
    }
    v106 = v164;
    v96 = v160;
    v99 = (int)v173;
    BYTE1(v142) = 1;
    v98 = v103 | (2 * (v138 & 0x1400 | (2 * (v138 & 8 | 4))));
    v135 = v98;
LABEL_187:
    v105 = *(void **)v151;
    v146 = v106;
    goto LABEL_188;
  }
  v105 = *(void **)v151;
  LODWORD(v106) = v151[0];
  v98 |= v104 & 0x2000 | 0x10;
  v146 = *(_QWORD *)v151;
  v135 = v98;
  if ( (v104 & 0xA00) == 0xA00 )
  {
    v98 |= 0x800u;
    v135 = v98;
  }
LABEL_188:
  v107 = v98;
  if ( (a2 & 0x40) == 0 )
  {
    v150 = v18;
    goto LABEL_192;
  }
  v108 = *(unsigned __int16 *)(v96 + 2);
  if ( (a5 & 2) != 0 )
  {
    valid = RtlpComputeMergedAcl(
              (int)v18,
              (*(_WORD *)(*v154 + 2) & 0x800 | (*(unsigned __int16 *)(*v154 + 2) >> 1) & 0x18u) >> 1,
              (int)v105,
              (v108 & 0x800 | (v108 >> 1) & 0x18) >> 1,
              (__int64)v147,
              (__int64)v149,
              v155,
              2,
              (__int64)&v165,
              (__int64)&v138);
    if ( valid >= 0 )
    {
      v105 = *(void **)v151;
      v99 = (int)v173;
      LODWORD(v106) = v146;
      BYTE2(v142) = 1;
      v150 = (PVOID)v165;
      v98 = v107 | (2 * (v138 & 0x1400 | (2 * (v138 & 8 | 4))));
      v135 = v98;
      goto LABEL_192;
    }
    v30 = (void *)v165;
LABEL_264:
    v76 = v173;
    v77 = (void *)v146;
    v75 = v152;
    goto LABEL_109;
  }
  v150 = v105;
  v98 |= v108 & 0x2000 | 0x10;
  v135 = v98;
  if ( (v108 & 0xA00) == 0xA00 )
  {
    v98 |= 0x800u;
    v135 = v98;
  }
LABEL_192:
  v109 = v98;
  v10 = v160;
  if ( (a2 & 0x80) == 0 )
  {
    v111 = (__int64)v18;
    v148 = v18;
    goto LABEL_197;
  }
  v110 = *(unsigned __int16 *)(v160 + 2);
  if ( (a5 & 2) != 0 )
  {
    valid = RtlpComputeMergedAcl(
              (int)v18,
              (*(_WORD *)(*v154 + 2) & 0x800 | (*(unsigned __int16 *)(*v154 + 2) >> 1) & 0x18u) >> 1,
              (int)v105,
              (v110 & 0x800 | (v110 >> 1) & 0x18) >> 1,
              (__int64)v147,
              (__int64)v149,
              v155,
              2,
              (__int64)&v166,
              (__int64)&v138);
    if ( valid >= 0 )
    {
      v111 = v166;
      v105 = *(void **)v151;
      v99 = (int)v173;
      LODWORD(v106) = v146;
      HIBYTE(v142) = 1;
      v148 = (PVOID)v166;
      v98 = v109 | (2 * (v138 & 0x1400 | (2 * (v138 & 8 | 4))));
      v135 = v98;
      goto LABEL_197;
    }
    v78 = (void *)v166;
    v76 = v173;
    v77 = (void *)v146;
    v30 = v150;
    v75 = v152;
    goto LABEL_110;
  }
  v148 = v105;
  v98 |= v110 & 0x2000 | 0x10;
  v111 = (__int64)v105;
  v135 = v98;
  if ( (v110 & 0xA00) == 0xA00 )
  {
    v98 |= 0x800u;
    v135 = v98;
  }
LABEL_197:
  v112 = v98;
  if ( (a2 & 0x100) == 0 )
  {
    v29 = v149;
    v79 = v18;
    P = v18;
    goto LABEL_201;
  }
  v113 = *(unsigned __int16 *)(v10 + 2);
  v29 = v149;
  if ( (a5 & 2) != 0 )
  {
    valid = RtlpComputeMergedAcl(
              (int)v18,
              (*(_WORD *)(*v154 + 2) & 0x800 | (*(unsigned __int16 *)(*v154 + 2) >> 1) & 0x18u) >> 1,
              (int)v105,
              (v113 & 0x800 | (v113 >> 1) & 0x18) >> 1,
              (__int64)v147,
              (__int64)v149,
              v155,
              2,
              (__int64)&v167,
              (__int64)&v138);
    if ( valid >= 0 )
    {
      LODWORD(v105) = v151[0];
      v99 = (int)v173;
      v111 = (__int64)v148;
      LODWORD(v106) = v146;
      v143 = 1;
      v98 = v112 | (2 * (v138 & 0x1400 | (2 * (v138 & 8 | 4))));
      v79 = (void *)v167;
      P = (PVOID)v167;
      v135 = v98;
      goto LABEL_201;
    }
    v79 = (void *)v167;
    v76 = v173;
    v78 = v148;
    v77 = (void *)v146;
    v30 = v150;
    v75 = v152;
    goto LABEL_111;
  }
  P = v105;
  v79 = v105;
  v98 |= v113 & 0x2000 | 0x10;
  v135 = v98;
  if ( (v113 & 0xA00) == 0xA00 )
  {
    v98 |= 0x800u;
    v135 = v98;
  }
LABEL_201:
  if ( Size )
  {
    v114 = *(_WORD *)(v10 + 2) & 0x2000 | 0x10 | v98;
    v115 = *(_WORD *)(v10 + 2) & 0xA00;
    v135 = v114;
    if ( v115 == 2560 )
      v135 = v114 | 0x800;
  }
  else
  {
    LODWORD(v105) = (_DWORD)v18;
  }
  v30 = v150;
  v32 = 0LL;
  valid = RtlpCombineAcls(v99, (_DWORD)v105, v106, (_DWORD)v150, v111, (__int64)v79, (__int64)&v168, 0LL);
  if ( valid < 0 )
  {
    v76 = v173;
    v78 = v148;
    v77 = (void *)v146;
    v75 = v152;
    goto LABEL_111;
  }
  v31 = (unsigned __int16 *)v168;
  Src = v168;
  if ( !v173 && v168 && !*((_WORD *)v168 + 2) )
  {
    ExFreePoolWithTag(v168, 0);
    v31 = 0LL;
    Src = 0LL;
    v168 = 0LL;
  }
  v8 = v155;
  v25 = v147;
  v144 = 1;
LABEL_27:
  if ( (a2 & 4) == 0 )
  {
    v81 = *v154;
    v82 = *(_WORD *)(*v154 + 2);
    if ( (v82 & 4) != 0 )
    {
      if ( v82 < 0 )
      {
        v83 = *(unsigned int *)(v81 + 16);
        v36 = v135;
        if ( (_DWORD)v83 )
          v32 = (unsigned __int16 *)(v81 + v83);
        goto LABEL_36;
      }
      v32 = *(unsigned __int16 **)(v81 + 32);
    }
    v36 = v135;
    goto LABEL_36;
  }
  v33 = *(_WORD *)(v10 + 2);
  if ( (a5 & 1) != 0 )
  {
    if ( (v33 & 4) != 0 )
    {
      if ( v33 >= 0 )
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
    if ( valid >= 0 )
    {
      v34 = (PVOID)PoolWithTag;
      v32 = (unsigned __int16 *)PoolWithTag;
      v25 = v147;
      BYTE1(v136) = 1;
      v36 = v138 & 0x1408 | 4 | v135;
      Buf1[0] = (PVOID)PoolWithTag;
      v135 = v36;
      goto LABEL_35;
    }
    goto LABEL_264;
  }
  if ( (v33 & 4) != 0 )
  {
    if ( v33 < 0 )
    {
      v116 = *(unsigned int *)(v10 + 16);
      if ( (_DWORD)v116 )
        v32 = (unsigned __int16 *)(v116 + v10);
    }
    else
    {
      v32 = *(unsigned __int16 **)(v10 + 32);
    }
  }
  v34 = Buf1[0];
  v35 = v33 & 0x1000 | 4 | v135;
  v135 = v35;
  if ( (v33 & 0x500) == 0x500 )
    v135 = v35 | 0x400;
  v36 = v135;
LABEL_35:
  if ( v139 )
  {
    valid = RtlpCreateServerAcl(
              (_DWORD)v32,
              v140,
              *(_QWORD *)(*((_QWORD *)p_SubjectContext->PrimaryToken + 19)
                        + 16LL * *((unsigned int *)p_SubjectContext->PrimaryToken + 36)),
              (unsigned int)&v169,
              (__int64)&v136);
    v134 = v136;
    if ( valid >= 0 )
    {
      v120 = v169;
      v152 = v169;
      if ( (_BYTE)v136 )
      {
        if ( BYTE1(v136) )
          ExFreePoolWithTag(v34, 0);
        v134 = 0;
        BYTE1(v136) = 1;
        Buf1[0] = v120;
      }
      v25 = v147;
      v32 = (unsigned __int16 *)v120;
      goto LABEL_36;
    }
    v75 = v169;
  }
  else
  {
LABEL_36:
    v37 = 4 * (unsigned __int8)v25[1] + 8;
    v38 = (unsigned __int8)v29[1];
    Size = v37;
    LODWORD(v145) = 4 * v38 + 8;
    if ( v31 )
      v39 = (v31[1] + 3) & 0xFFFFFFFC;
    else
      v39 = 0;
    if ( v32 )
      v40 = (v32[1] + 3) & 0xFFFFFFFC;
    else
      v40 = 0;
    PoolWithTag = (__int64)ExAllocatePoolWithTag(
                             (POOL_TYPE)(v170 | 0x400),
                             v37 + 20 + v40 + v39 + 4 * v38 + 8,
                             0x64536553u);
    v41 = PoolWithTag;
    if ( PoolWithTag )
    {
      v42 = (unsigned __int16 *)(PoolWithTag + 20);
      *(_OWORD *)PoolWithTag = 0LL;
      *(_DWORD *)(v41 + 16) = 0;
      *(_BYTE *)v41 = 1;
      if ( (_BYTE)Size_4 )
      {
        v36 |= 0x800u;
        v135 = v36;
      }
      v43 = *(_WORD *)(v41 + 2) | v36;
      *(_WORD *)(v41 + 2) = v43;
      if ( (*(_WORD *)(v10 + 2) & 0x4000) != 0 )
      {
        *(_BYTE *)(v41 + 1) = *(_BYTE *)(v10 + 1);
        *(_WORD *)(v41 + 2) = v43 | 0x4000;
      }
      v44 = (unsigned __int16 *)Src;
      if ( !Src )
        goto LABEL_219;
      v45 = v41 + 20;
      v46 = (void *)(v41 + 20);
      if ( (a5 & 0x4000) != 0 )
      {
        RtlpNormalizeAcl(v46, Src, v155);
        if ( *(_WORD *)(v41 + 24) )
        {
          v39 = *(unsigned __int16 *)(v41 + 22);
        }
        else
        {
          v45 = 0LL;
          v39 = 0;
        }
      }
      else
      {
        memmove(v46, Src, *((unsigned __int16 *)Src + 1));
        if ( v41 != -20 )
        {
          v47 = (unsigned __int8 *)(v41 + 28);
          v48 = 0;
          if ( *(_WORD *)(v41 + 24) )
          {
            v49 = (_DWORD *)v155;
            v50 = 1651;
            do
            {
              v51 = *v47;
              if ( ((unsigned __int8)v51 <= 0xAu || (unsigned __int8)(v51 - 13) <= 1u) && (v47[1] & 8) == 0 )
              {
                v52 = *((_DWORD *)v47 + 1);
                if ( v52 < 0 )
                  v52 |= *v49;
                if ( (v52 & 0x40000000) != 0 )
                  v52 |= v49[1];
                if ( (v52 & 0x20000000) != 0 )
                  v52 |= v49[2];
                if ( (v52 & 0x10000000) != 0 )
                  v52 |= v49[3];
                v53 = v52 & 0xFFFFFFF;
                *((_DWORD *)v47 + 1) = v53;
                if ( (unsigned __int8)v51 <= 0xAu && _bittest(&v50, v51) )
                  v54 = v49[3];
                else
                  v54 = v49[3] | 0x1000000;
                *((_DWORD *)v47 + 1) = v53 & v54;
              }
              ++v48;
              v47 += *((unsigned __int16 *)v47 + 1);
            }
            while ( v48 < v42[2] );
            v41 = PoolWithTag;
            v44 = (unsigned __int16 *)Src;
          }
        }
        v55 = v44[1];
        if ( v39 > (unsigned int)v55 )
          memset_0((char *)v42 + v55, 0, v39 - (unsigned int)v55);
      }
      if ( v45 )
      {
        v42 = (unsigned __int16 *)((char *)v42 + v39);
        v56 = v45 - v41;
      }
      else
      {
LABEL_219:
        v56 = 0;
      }
      v57 = v154;
      *(_DWORD *)(v41 + 12) = v56;
      v58 = v135;
      if ( (v135 & 0x10) == 0 )
        *(_WORD *)(v41 + 2) |= *(_WORD *)(*v57 + 2) & 0x2830;
      if ( v32 )
      {
        memmove(v42, v32, v32[1]);
        if ( v42 )
        {
          v59 = (unsigned __int8 *)(v42 + 4);
          v60 = 0;
          if ( v42[2] )
          {
            v61 = (_DWORD *)v155;
            v62 = 1651;
            do
            {
              if ( (*v59 <= 0xAu || (unsigned __int8)(*v59 - 13) <= 1u) && (v59[1] & 8) == 0 )
              {
                v63 = *((_DWORD *)v59 + 1);
                if ( v63 < 0 )
                  v63 |= *v61;
                if ( (v63 & 0x40000000) != 0 )
                  v63 |= v61[1];
                if ( (v63 & 0x20000000) != 0 )
                  v63 |= v61[2];
                if ( (v63 & 0x10000000) != 0 )
                  v63 |= v61[3];
                v64 = v63 & 0xFFFFFFF;
                *((_DWORD *)v59 + 1) = v64;
                v65 = *v59;
                if ( (unsigned __int8)v65 <= 0xAu && _bittest(&v62, v65) )
                  v66 = v61[3];
                else
                  v66 = v61[3] | 0x1000000;
                *((_DWORD *)v59 + 1) = v64 & v66;
              }
              ++v60;
              v59 += *((unsigned __int16 *)v59 + 1);
            }
            while ( v60 < v42[2] );
            v41 = PoolWithTag;
          }
        }
        v67 = (unsigned int *)(v41 + 16);
        *(_DWORD *)(v41 + 16) = (_DWORD)v42 - v41;
        v68 = v32[1];
        if ( v40 > (unsigned int)v68 )
          memset_0((char *)v42 + v68, 0, v40 - (unsigned int)v68);
      }
      else
      {
        v67 = (unsigned int *)(v41 + 16);
        *(_DWORD *)(v41 + 16) = 0;
      }
      if ( (v58 & 4) == 0 )
      {
        *(_WORD *)(v41 + 2) |= *(_WORD *)(*v57 + 2) & 0x140C;
        if ( (_BYTE)v162 )
        {
          v174[0] = 257;
          i = 0;
          v174[1] = 50331648;
          v174[2] = 4;
          while ( 1 )
          {
            v100 = *(_WORD *)(v41 + 2);
            if ( (v100 & 4) != 0 )
            {
              if ( v100 >= 0 )
              {
                v101 = *(_QWORD *)(v41 + 32);
              }
              else
              {
                v123 = *v67;
                v101 = (_DWORD)v123 ? v41 + v123 : 0LL;
              }
            }
            else
            {
              v101 = 0LL;
            }
            AceBySid = RtlFindAceBySid(v101, v174, &i);
            if ( !AceBySid )
              break;
            v125 = AceBySid[1] & 0xF4 | 8;
            ++i;
            AceBySid[1] = v125;
          }
          v57 = v154;
        }
      }
      if ( *(_DWORD *)(v41 + 16) && (a5 & 0x4000) != 0 )
      {
        RtlpNormalizeAcl(v42, v42, 0LL);
        v40 = v42[1];
      }
      v69 = Size;
      v70 = (char *)v42 + v40;
      memmove(v70, v147, Size);
      v71 = (int)v70;
      v72 = &v70[v69];
      v73 = (_BYTE)v141 == 0;
      *(_DWORD *)(v41 + 4) = v71 - v41;
      if ( v73 )
        *(_WORD *)(v41 + 2) |= *(_WORD *)(*v57 + 2) & 1;
      memmove(v72, v149, (unsigned int)v145);
      v73 = HIBYTE(v141) == 0;
      *(_DWORD *)(v41 + 8) = (_DWORD)v72 - v41;
      if ( v73 )
        *(_WORD *)(v41 + 2) |= *(_WORD *)(*v57 + 2) & 2;
      *v57 = v41;
      valid = 0;
    }
    else
    {
      valid = -1073741801;
    }
    v75 = v152;
  }
  if ( BYTE1(v136) )
    ExFreePoolWithTag(Buf1[0], 0);
  v76 = v173;
LABEL_107:
  v77 = (void *)v146;
LABEL_108:
  v30 = v150;
LABEL_109:
  v78 = v148;
LABEL_110:
  v79 = P;
LABEL_111:
  if ( v76 && (_BYTE)v142 )
    ExFreePoolWithTag(v76, 0);
  if ( v77 && BYTE1(v142) )
    ExFreePoolWithTag(v77, 0);
  if ( v30 && BYTE2(v142) )
    ExFreePoolWithTag(v30, 0);
  if ( v78 && HIBYTE(v142) )
    ExFreePoolWithTag(v78, 0);
  if ( v79 && v143 )
    ExFreePoolWithTag(v79, 0);
  if ( Src && v144 )
    ExFreePoolWithTag(Src, 0);
  if ( v134 )
    ExFreePoolWithTag(v75, 0);
LABEL_121:
  if ( p_SubjectContext == &SubjectContext )
    SeReleaseSubjectContext(&SubjectContext);
  return (unsigned int)valid;
}
