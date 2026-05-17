/*
 * XREFs of RtlpSetSecurityObject @ 0x1800E6AA0
 * Callers:
 *     RtlSetSecurityObjectEx @ 0x1800E68A0 (RtlSetSecurityObjectEx.c)
 *     RtlSetSecurityObject @ 0x1800E6A60 (RtlSetSecurityObject.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180050340 (RtlAllocateHeap.c)
 *     RtlValidSid @ 0x18005FCD0 (RtlValidSid.c)
 *     RtlpGetDefaultTrustSubjectContext @ 0x180061230 (RtlpGetDefaultTrustSubjectContext.c)
 *     RtlpValidFilterAclSubjectContext @ 0x1800630C0 (RtlpValidFilterAclSubjectContext.c)
 *     RtlpCombineAcls @ 0x1800631C0 (RtlpCombineAcls.c)
 *     RtlFreeHeap @ 0x180080DD0 (RtlFreeHeap.c)
 *     RtlEqualSid @ 0x180084E60 (RtlEqualSid.c)
 *     RtlpApplyAclToObject @ 0x1800E7FA0 (RtlpApplyAclToObject.c)
 *     RtlpNormalizeAcl @ 0x1800E8044 (RtlpNormalizeAcl.c)
 *     RtlpValidLabelSubjectContext @ 0x1800E831C (RtlpValidLabelSubjectContext.c)
 *     RtlpComputeMergedAcl @ 0x1800E8468 (RtlpComputeMergedAcl.c)
 *     RtlpCreateServerAcl @ 0x1800E85A8 (RtlpCreateServerAcl.c)
 *     RtlSidDominatesForTrust @ 0x1800E8830 (RtlSidDominatesForTrust.c)
 *     RtlpValidOwnerSubjectContext @ 0x1800E8934 (RtlpValidOwnerSubjectContext.c)
 *     NtClose @ 0x180163400 (NtClose.c)
 *     NtQueryInformationToken @ 0x180163640 (NtQueryInformationToken.c)
 *     NtOpenProcessToken @ 0x180165870 (NtOpenProcessToken.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 *     memmove @ 0x180168980 (memmove.c)
 *     memset$thunk$772440563353939046 @ 0x180174030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlpSetSecurityObject(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 *a4,
        __int16 a5,
        int a6,
        __int64 a7,
        unsigned __int8 *a8)
{
  __int64 v8; // rbx
  __int16 v10; // dx
  unsigned __int16 *v12; // r15
  int v13; // r13d
  __int64 v14; // r11
  __int64 v15; // rcx
  __int16 v16; // ax
  unsigned __int8 *v17; // rsi
  char *ProcessHeap; // r14
  int v19; // r9d
  int v20; // r10d
  __int64 v21; // rax
  bool v22; // zf
  _BYTE *v23; // rax
  __int64 v24; // rax
  __int64 v25; // rcx
  _BYTE *v26; // rcx
  unsigned __int8 *v27; // rsi
  __int16 v28; // cx
  unsigned __int16 *v29; // r12
  int DefaultTrustSubjectContext; // ebx
  int v31; // ecx
  int v32; // r8d
  unsigned int v33; // edi
  unsigned int v34; // r14d
  __int64 v35; // rbx
  __int64 v36; // r9
  unsigned __int16 *v37; // rsi
  __int64 v38; // rax
  __int16 v39; // cx
  __int64 v40; // r15
  void *v41; // rcx
  __int64 v42; // rdx
  int v43; // r15d
  __int64 *v44; // r15
  __int64 v45; // rcx
  __int64 v46; // rdi
  char *v47; // rsi
  int v48; // eax
  char *v49; // rsi
  __int64 v50; // r9
  unsigned __int8 *v51; // r14
  char *v52; // rdi
  __int64 v54; // rax
  __int64 v55; // rax
  __int64 v56; // r8
  __int64 v57; // r9
  __int64 v58; // r14
  unsigned __int8 *v59; // rax
  char v60; // bl
  unsigned int v61; // edx
  int v62; // r14d
  unsigned int v63; // edx
  unsigned int v64; // edx
  unsigned int v65; // edx
  __int64 v66; // rcx
  unsigned int v67; // edx
  unsigned __int8 *v68; // r14
  __int64 v69; // rax
  __int16 v70; // cx
  unsigned int v71; // edi
  int v72; // edx
  __int16 v73; // ax
  __int64 v74; // rax
  __int64 v75; // rax
  unsigned __int8 *v76; // r12
  unsigned int v77; // r13d
  unsigned int v78; // eax
  unsigned int v79; // ecx
  unsigned __int16 *v80; // rcx
  unsigned int v81; // eax
  __int64 v82; // rax
  void *v83; // rax
  __int64 v84; // rax
  _QWORD *Heap; // rdi
  __int64 v86; // r9
  __int64 v87; // r9
  unsigned int v88; // eax
  __int64 v89; // r14
  unsigned __int8 *v90; // rcx
  int v91; // edi
  unsigned int v92; // eax
  int v93; // eax
  __int64 v94; // r8
  __int64 v95; // rax
  __int16 v96; // dx
  __int64 v97; // rcx
  unsigned __int8 *v98; // rbx
  unsigned int v99; // edx
  __int64 v100; // rcx
  unsigned int v101; // eax
  unsigned int i; // ecx
  __int64 v103; // r8
  __int16 v104; // cx
  __int64 v105; // rcx
  int v106; // eax
  int v107; // ecx
  __int64 v108; // rax
  bool v109; // al
  unsigned __int8 v110; // [rsp+50h] [rbp-B0h] BYREF
  char v111; // [rsp+51h] [rbp-AFh]
  char v112[2]; // [rsp+52h] [rbp-AEh] BYREF
  _DWORD Size[3]; // [rsp+54h] [rbp-ACh]
  int v114; // [rsp+60h] [rbp-A0h] BYREF
  char v115; // [rsp+64h] [rbp-9Ch]
  char v116; // [rsp+65h] [rbp-9Bh]
  char v117; // [rsp+66h] [rbp-9Ah]
  char v118; // [rsp+67h] [rbp-99h]
  char v119; // [rsp+68h] [rbp-98h]
  char v120; // [rsp+69h] [rbp-97h]
  char v121; // [rsp+6Ah] [rbp-96h]
  char v122; // [rsp+6Bh] [rbp-95h]
  unsigned __int8 *v123; // [rsp+70h] [rbp-90h]
  char *v124; // [rsp+78h] [rbp-88h]
  unsigned __int8 *v125; // [rsp+80h] [rbp-80h] BYREF
  bool v126; // [rsp+88h] [rbp-78h]
  bool v127; // [rsp+89h] [rbp-77h]
  unsigned __int8 *v128; // [rsp+90h] [rbp-70h] BYREF
  size_t v129; // [rsp+98h] [rbp-68h] BYREF
  void *Src; // [rsp+A0h] [rbp-60h]
  void *v131; // [rsp+A8h] [rbp-58h]
  __int64 v132; // [rsp+B0h] [rbp-50h]
  unsigned int j; // [rsp+B8h] [rbp-48h]
  __int64 v134; // [rsp+C0h] [rbp-40h]
  __int16 v135; // [rsp+C8h] [rbp-38h]
  int v136; // [rsp+CCh] [rbp-34h]
  HANDLE Handle; // [rsp+D0h] [rbp-30h] BYREF
  int v138; // [rsp+D8h] [rbp-28h] BYREF
  unsigned int v139; // [rsp+DCh] [rbp-24h] BYREF
  unsigned __int16 *v140; // [rsp+E0h] [rbp-20h] BYREF
  unsigned __int64 v141; // [rsp+E8h] [rbp-18h] BYREF
  unsigned __int64 v142; // [rsp+F0h] [rbp-10h] BYREF
  unsigned __int8 **v143; // [rsp+F8h] [rbp-8h] BYREF
  unsigned __int16 *v144; // [rsp+100h] [rbp+0h] BYREF
  unsigned __int8 *v145; // [rsp+108h] [rbp+8h] BYREF
  unsigned __int16 *v146; // [rsp+110h] [rbp+10h] BYREF
  __int64 v147; // [rsp+118h] [rbp+18h]
  __int64 *v148; // [rsp+120h] [rbp+20h]
  __int128 v149; // [rsp+128h] [rbp+28h] BYREF
  __int128 v150; // [rsp+138h] [rbp+38h]
  __int128 v151; // [rsp+148h] [rbp+48h]
  __int64 v152; // [rsp+158h] [rbp+58h]
  _DWORD v153[12]; // [rsp+160h] [rbp+60h] BYREF

  v8 = a3;
  v148 = a4;
  v10 = *(_WORD *)(a3 + 2);
  v134 = a7;
  v132 = a3;
  v12 = 0LL;
  v123 = a8;
  v13 = 0x8000;
  v116 = 0;
  v115 = 0;
  v112[0] = 0;
  v111 = 0;
  v121 = 0;
  v122 = 0;
  v117 = 0;
  v118 = 0;
  v119 = 0;
  v120 = 0;
  v140 = 0LL;
  v144 = 0LL;
  v145 = 0LL;
  v128 = 0LL;
  v125 = 0LL;
  v141 = 0LL;
  v142 = 0LL;
  v147 = 0LL;
  v110 = 0;
  LOBYTE(j) = 0;
  LOBYTE(v136) = 0;
  v114 = 0;
  v146 = 0LL;
  if ( (v10 & 0x10) != 0 )
  {
    if ( v10 >= 0 )
    {
      v14 = *(_QWORD *)(a3 + 24);
    }
    else
    {
      v55 = *(unsigned int *)(a3 + 12);
      if ( (_DWORD)v55 )
        v14 = a3 + v55;
      else
        v14 = 0LL;
    }
  }
  else
  {
    v14 = 0LL;
  }
  v15 = *a4;
  *(_QWORD *)&Size[1] = v14;
  v16 = *(_WORD *)(v15 + 2);
  if ( (v16 & 0x10) != 0 )
  {
    if ( v16 >= 0 )
    {
      v17 = *(unsigned __int8 **)(v15 + 24);
    }
    else
    {
      v54 = *(unsigned int *)(v15 + 12);
      if ( (_DWORD)v54 )
        v17 = (unsigned __int8 *)(v15 + v54);
      else
        v17 = 0LL;
    }
  }
  else
  {
    v17 = 0LL;
  }
  v138 = 0;
  Handle = 0LL;
  v149 = 0LL;
  v152 = 0LL;
  v150 = 0LL;
  v143 = 0LL;
  v151 = 0LL;
  ProcessHeap = (char *)NtCurrentPeb()->ProcessHeap;
  v124 = ProcessHeap;
  if ( *(__int16 *)(v15 + 2) >= 0 )
    return (unsigned int)-1073741593;
  v135 = v10 & 0x80;
  v126 = v135 != 0;
  v19 = a2 & 0x80;
  v20 = a2 & 0x100;
  v127 = (v10 & 0x40) != 0;
  if ( (a2 & 0x10000) != 0 )
  {
    v91 = a2 | 0x1FF;
    v92 = v91 & 0xFFFFFF7F;
    if ( v19 )
      v92 = v91;
    a2 = v92 & 0xFFFFFEFF;
    if ( v20 )
      a2 = v92;
    if ( !v17 && !v14 )
    {
      a2 &= 0xFFFFFE07;
      if ( (v10 & 0x10) != 0 )
      {
        a2 |= 8u;
      }
      else
      {
        v93 = (unsigned __int8)v136;
        if ( (v10 & 0x800) != 0 )
          v93 = 1;
        v136 = v93;
      }
    }
  }
  if ( (a2 & 1) == 0 )
  {
    v21 = *(unsigned int *)(v15 + 4);
    if ( !(_DWORD)v21 )
      return (unsigned int)-1073741734;
    v22 = v15 + v21 == 0;
    v23 = (_BYTE *)(v15 + v21);
    Src = v23;
    if ( v22 )
      return (unsigned int)-1073741734;
    goto LABEL_10;
  }
  v81 = a2 >> 2;
  LOBYTE(v81) = (a2 & 4) == 0;
  j = v81;
  if ( v10 >= 0 )
  {
    v83 = *(void **)(a3 + 8);
  }
  else
  {
    v82 = *(unsigned int *)(a3 + 4);
    if ( !(_DWORD)v82 )
    {
      Src = 0LL;
      goto LABEL_133;
    }
    v83 = (void *)(a3 + v82);
  }
  Src = v83;
LABEL_133:
  v115 = 1;
  if ( (a5 & 8) == 0 )
  {
    if ( !v123 )
      return (unsigned int)-1073741734;
    LODWORD(v129) = NtQueryInformationToken(v123, 10LL, &v149, 56LL, &v138);
    DefaultTrustSubjectContext = v129;
    if ( (v129 & 0x80000000) != 0LL )
      return (unsigned int)DefaultTrustSubjectContext;
    if ( SHIDWORD(v150) < 1 && DWORD2(v150) == 2 )
      return (unsigned int)-1073741659;
    if ( !(unsigned __int8)RtlpValidOwnerSubjectContext(v123, Src, v126, &v129) )
      return (unsigned int)-1073741734;
    v8 = v132;
  }
  v23 = Src;
LABEL_10:
  if ( !RtlValidSid(v23) )
    return (unsigned int)-1073741734;
  if ( (a2 & 2) != 0 )
  {
    if ( *(__int16 *)(v8 + 2) >= 0 )
    {
      v26 = *(_BYTE **)(v8 + 16);
    }
    else
    {
      v84 = *(unsigned int *)(v8 + 8);
      if ( (_DWORD)v84 )
      {
        v26 = (_BYTE *)(v8 + v84);
        v116 = 1;
        goto LABEL_15;
      }
      v26 = 0LL;
    }
    v116 = 1;
    goto LABEL_15;
  }
  v24 = *a4;
  if ( *(__int16 *)(*a4 + 2) >= 0 )
  {
    v26 = *(_BYTE **)(v24 + 16);
  }
  else
  {
    v25 = *(unsigned int *)(v24 + 8);
    if ( !(_DWORD)v25 )
      return (unsigned int)-1073741733;
    v26 = (_BYTE *)(v24 + v25);
  }
LABEL_15:
  v131 = v26;
  if ( !v26 || !RtlValidSid(v26) )
    return (unsigned int)-1073741733;
  if ( (a2 & 0x1F8) == 0 )
  {
    v12 = (unsigned __int16 *)v17;
    v123 = v145;
    *(_QWORD *)&Size[1] = v17;
    v27 = v128;
    goto LABEL_19;
  }
  if ( (a2 & 0x10) != 0 )
  {
    v88 = 0;
    Size[0] = 0;
    do
    {
      if ( *(_QWORD *)&Size[1] )
      {
        v89 = *(_QWORD *)&Size[1] + 8LL;
        for ( i = 0; ; ++i )
        {
          if ( i >= *(unsigned __int16 *)(*(_QWORD *)&Size[1] + 4LL) )
            goto LABEL_152;
          if ( i >= v88 && *(_BYTE *)v89 == 17 )
            break;
          v89 += *(unsigned __int16 *)(v89 + 2);
          v88 = Size[0];
        }
        v22 = (*(_DWORD *)(v89 + 4) & 0xFFFFFFF8) == 0;
        v147 = v89 + 8;
        v110 = *(_BYTE *)(v89 + 1);
        Size[0] = i;
        if ( !v22 )
          return (unsigned int)-1073740730;
      }
      else
      {
LABEL_152:
        v89 = 0LL;
      }
      if ( v123 )
      {
        LODWORD(v129) = NtQueryInformationToken(v123, 10LL, &v149, 56LL, &v138);
        DefaultTrustSubjectContext = v129;
        if ( (v129 & 0x80000000) != 0LL )
          return (unsigned int)DefaultTrustSubjectContext;
        if ( DWORD2(v150) == 2 && SHIDWORD(v150) < 1 )
          return (unsigned int)-1073741659;
        v90 = v123;
      }
      else
      {
        LODWORD(v129) = NtOpenProcessToken(-1LL, 8LL, &Handle);
        DefaultTrustSubjectContext = v129;
        if ( (v129 & 0x80000000) != 0LL )
          return (unsigned int)DefaultTrustSubjectContext;
        v90 = (unsigned __int8 *)Handle;
      }
      if ( !(unsigned __int8)RtlpValidLabelSubjectContext(v90, v147, v110, &v129) )
      {
        NtClose(Handle);
        return (unsigned int)-1073740730;
      }
      NtClose(Handle);
      v88 = ++Size[0];
    }
    while ( v89 );
  }
  DefaultTrustSubjectContext = RtlpGetDefaultTrustSubjectContext((__int64)v123, &v143);
  if ( DefaultTrustSubjectContext >= 0 )
  {
    v58 = (__int64)v143;
    v59 = *v143;
    v123 = *v143;
    if ( (a2 & 0x80u) == 0 )
    {
      v57 = *(_QWORD *)&Size[1];
      goto LABEL_80;
    }
    if ( !v59 )
    {
LABEL_274:
      DefaultTrustSubjectContext = -1073741790;
      goto LABEL_275;
    }
    v57 = *(_QWORD *)&Size[1];
    v56 = 0LL;
    if ( !*(_QWORD *)&Size[1] )
      goto LABEL_80;
    v98 = v59;
    do
    {
      v99 = *(unsigned __int16 *)(v57 + 4);
      v100 = v57 + 8;
      v101 = 0;
      Size[0] = 0;
      while ( 1 )
      {
        v143 = (unsigned __int8 **)v100;
        if ( v101 >= v99 )
        {
          v59 = v98;
          goto LABEL_80;
        }
        if ( v101 >= (unsigned int)v56 && *(_BYTE *)v100 == 20 )
          break;
        Size[0] = v101 + 1;
        v100 += *(unsigned __int16 *)(v100 + 2);
        ++v101;
      }
      if ( (*(_DWORD *)(v100 + 4) & 0xFF000000) != 0 )
      {
        DefaultTrustSubjectContext = -1073740730;
        RtlFreeHeap((__int64)v124, 0, v58, v57);
        return (unsigned int)DefaultTrustSubjectContext;
      }
      v110 = 0;
      RtlSidDominatesForTrust(v98, v100 + 8, &v110, v57);
      if ( !v110 )
        goto LABEL_274;
      v57 = *(_QWORD *)&Size[1];
      v56 = (unsigned int)(Size[0] + 1);
    }
    while ( v143 );
    v59 = v98;
LABEL_80:
    if ( (a2 & 0x100) == 0 )
    {
LABEL_81:
      v60 = a5;
      goto LABEL_82;
    }
    DefaultTrustSubjectContext = RtlpValidFilterAclSubjectContext(v57, (__int64)v59, v56, v57);
    if ( DefaultTrustSubjectContext < 0 )
    {
LABEL_275:
      RtlFreeHeap((__int64)v124, 0, v58, v57);
      return (unsigned int)DefaultTrustSubjectContext;
    }
    v60 = a5;
    if ( (a5 & 2) == 0 )
    {
      DefaultTrustSubjectContext = RtlpValidFilterAclSubjectContext((__int64)v17, (__int64)v123, v103, v57);
      if ( DefaultTrustSubjectContext >= 0 )
        goto LABEL_81;
      goto LABEL_275;
    }
LABEL_82:
    RtlFreeHeap((__int64)v124, 0, v58, v57);
    if ( (a2 & 8) != 0 )
    {
      v61 = *(unsigned __int16 *)(v132 + 2);
      v62 = v60 & 2;
      if ( (v60 & 2) != 0 )
      {
        DefaultTrustSubjectContext = RtlpComputeMergedAcl(
                                       (_DWORD)v17,
                                       (*(_WORD *)(*a4 + 2) & 0x2800 | (*(unsigned __int16 *)(*a4 + 2) >> 1) & 0x18u) >> 1,
                                       Size[1],
                                       (v61 & 0x2800 | (v61 >> 1) & 0x18) >> 1,
                                       (__int64)Src,
                                       (__int64)v131,
                                       v134,
                                       2,
                                       (__int64)&v145,
                                       (__int64)&v114);
        if ( DefaultTrustSubjectContext >= 0 )
        {
          v60 = a5;
          v122 = 1;
          v123 = v145;
          v13 = 2 * (v114 & 0x1400 | (2 * (v114 & 8 | 0x2004)));
          goto LABEL_86;
        }
        v123 = v145;
LABEL_57:
        v27 = v128;
LABEL_58:
        v51 = v125;
        v52 = v124;
        if ( v123 && v122 )
          RtlFreeHeap((__int64)v124, 0, (__int64)v123, v36);
        if ( v51 && v117 )
          RtlFreeHeap((__int64)v52, 0, (__int64)v51, v36);
        if ( v27 && v118 )
          RtlFreeHeap((__int64)v52, 0, (__int64)v27, v36);
        if ( v141 && v119 )
          RtlFreeHeap((__int64)v52, 0, v141, v36);
        if ( v142 && v120 )
          RtlFreeHeap((__int64)v52, 0, v142, v36);
        if ( v12 && v121 )
          RtlFreeHeap((__int64)v52, 0, (__int64)v12, v36);
        if ( v112[0] )
          RtlFreeHeap((__int64)v52, 0, (__int64)v146, v36);
        return (unsigned int)DefaultTrustSubjectContext;
      }
      v123 = *(unsigned __int8 **)&Size[1];
      v13 = v61 & 0x2000 | 0x8010;
      if ( (v61 & 0xA00) == 0xA00 )
        v13 = v61 & 0x2000 | 0x8810;
    }
    else
    {
      v123 = v17;
      v62 = v60 & 2;
    }
LABEL_86:
    Size[0] = v13;
    if ( (a2 & 0x20) != 0 )
    {
      v63 = *(unsigned __int16 *)(v132 + 2);
      if ( v62 )
      {
        DefaultTrustSubjectContext = RtlpComputeMergedAcl(
                                       (_DWORD)v17,
                                       (*(_WORD *)(*a4 + 2) & 0x800 | (*(unsigned __int16 *)(*a4 + 2) >> 1) & 0x18u) >> 1,
                                       Size[1],
                                       (v63 & 0x800 | (v63 >> 1) & 0x18) >> 1,
                                       (__int64)Src,
                                       (__int64)v131,
                                       v134,
                                       2,
                                       (__int64)&v125,
                                       (__int64)&v114);
        if ( DefaultTrustSubjectContext < 0 )
          goto LABEL_57;
        v117 = 1;
        v13 = Size[0] | (2 * (v114 & 0x1400 | (2 * (v114 & 8 | 4))));
      }
      else
      {
        v125 = *(unsigned __int8 **)&Size[1];
        v13 |= v63 & 0x2000 | 0x10;
        if ( (v63 & 0xA00) == 0xA00 )
        {
          v13 |= 0x800u;
          v62 = v60 & 2;
        }
      }
    }
    else
    {
      v125 = v17;
    }
    Size[0] = v13;
    if ( (a2 & 0x40) != 0 )
    {
      v64 = *(unsigned __int16 *)(v132 + 2);
      if ( v62 )
      {
        DefaultTrustSubjectContext = RtlpComputeMergedAcl(
                                       (_DWORD)v17,
                                       (*(_WORD *)(*a4 + 2) & 0x800 | (*(unsigned __int16 *)(*a4 + 2) >> 1) & 0x18u) >> 1,
                                       Size[1],
                                       (v64 & 0x800 | (v64 >> 1) & 0x18) >> 1,
                                       (__int64)Src,
                                       (__int64)v131,
                                       v134,
                                       2,
                                       (__int64)&v128,
                                       (__int64)&v114);
        if ( DefaultTrustSubjectContext < 0 )
          goto LABEL_57;
        v118 = 1;
        v13 = Size[0] | (2 * (v114 & 0x1400 | (2 * (v114 & 8 | 4))));
      }
      else
      {
        v128 = *(unsigned __int8 **)&Size[1];
        v13 |= v64 & 0x2000 | 0x10;
        if ( (v64 & 0xA00) == 0xA00 )
        {
          v13 |= 0x800u;
          v62 = a5 & 2;
        }
      }
    }
    else
    {
      v128 = v17;
    }
    Size[0] = v13;
    if ( (a2 & 0x80u) == 0 )
    {
      v141 = (unsigned __int64)v17;
    }
    else
    {
      v65 = *(unsigned __int16 *)(v132 + 2);
      if ( v62 )
      {
        DefaultTrustSubjectContext = RtlpComputeMergedAcl(
                                       (_DWORD)v17,
                                       (*(_WORD *)(*a4 + 2) & 0x800 | (*(unsigned __int16 *)(*a4 + 2) >> 1) & 0x18u) >> 1,
                                       Size[1],
                                       (v65 & 0x800 | (v65 >> 1) & 0x18) >> 1,
                                       (__int64)Src,
                                       (__int64)v131,
                                       v134,
                                       2,
                                       (__int64)&v141,
                                       (__int64)&v114);
        if ( DefaultTrustSubjectContext < 0 )
          goto LABEL_57;
        v119 = 1;
        v13 = Size[0] | (2 * (v114 & 0x1400 | (2 * (v114 & 8 | 4))));
      }
      else
      {
        v141 = *(_QWORD *)&Size[1];
        v13 |= v65 & 0x2000 | 0x10;
        if ( (v65 & 0xA00) == 0xA00 )
        {
          v13 |= 0x800u;
          v62 = a5 & 2;
        }
      }
    }
    v66 = v132;
    Size[0] = v13;
    if ( (a2 & 0x100) != 0 )
    {
      v67 = *(unsigned __int16 *)(v132 + 2);
      if ( v62 )
      {
        DefaultTrustSubjectContext = RtlpComputeMergedAcl(
                                       (_DWORD)v17,
                                       (*(_WORD *)(*a4 + 2) & 0x800 | (*(unsigned __int16 *)(*a4 + 2) >> 1) & 0x18u) >> 1,
                                       Size[1],
                                       (v67 & 0x800 | (v67 >> 1) & 0x18) >> 1,
                                       (__int64)Src,
                                       (__int64)v131,
                                       v134,
                                       2,
                                       (__int64)&v142,
                                       (__int64)&v114);
        if ( DefaultTrustSubjectContext < 0 )
          goto LABEL_57;
        v66 = v132;
        v120 = 1;
        LOWORD(v13) = LOWORD(Size[0]) | (2 * (v114 & 0x1400 | (2 * (v114 & 8 | 4))));
      }
      else
      {
        v142 = *(_QWORD *)&Size[1];
        LOWORD(v13) = v67 & 0x2000 | 0x10 | v13;
        if ( (v67 & 0xA00) == 0xA00 )
          LOWORD(v13) = v13 | 0x800;
      }
    }
    else
    {
      v142 = (unsigned __int64)v17;
    }
    if ( (a2 & 0x10) != 0 )
    {
      v104 = *(_WORD *)(v66 + 2);
      LOWORD(v13) = v104 & 0x2000 | 0x10 | v13;
      if ( (v104 & 0xA00) == 0xA00 )
        LOWORD(v13) = v13 | 0x800;
    }
    else
    {
      *(_QWORD *)&Size[1] = v17;
    }
    v27 = v128;
    v68 = v123;
    DefaultTrustSubjectContext = RtlpCombineAcls(
                                   v123,
                                   *(unsigned __int8 **)&Size[1],
                                   v125,
                                   v128,
                                   v141,
                                   v142,
                                   &v144,
                                   0LL);
    if ( DefaultTrustSubjectContext < 0 )
      goto LABEL_58;
    v12 = v144;
    *(_QWORD *)&Size[1] = v144;
    if ( v68 || !v144 )
    {
      ProcessHeap = v124;
    }
    else
    {
      ProcessHeap = v124;
      if ( !v144[2] )
      {
        RtlFreeHeap((__int64)v124, 0, (__int64)v144, v36);
        v12 = 0LL;
        v121 = 1;
        *(_QWORD *)&Size[1] = 0LL;
        v144 = 0LL;
LABEL_19:
        if ( (a2 & 4) != 0 )
        {
          v28 = *(_WORD *)(v132 + 2);
          if ( (a5 & 1) != 0 )
          {
            if ( (v28 & 4) != 0 )
            {
              if ( v28 < 0 )
              {
                v106 = *(_DWORD *)(v132 + 16);
                if ( v106 )
                  LODWORD(v94) = v132 + v106;
                else
                  LODWORD(v94) = 0;
              }
              else
              {
                v94 = *(_QWORD *)(v132 + 32);
              }
            }
            else
            {
              LODWORD(v94) = 0;
            }
            v95 = *a4;
            v96 = *(_WORD *)(*a4 + 2);
            if ( (v96 & 4) != 0 )
            {
              if ( v96 < 0 )
              {
                v107 = *(_DWORD *)(v95 + 16);
                if ( v107 )
                  LODWORD(v97) = v95 + v107;
                else
                  LODWORD(v97) = 0;
              }
              else
              {
                v97 = *(_QWORD *)(v95 + 32);
              }
            }
            else
            {
              LODWORD(v97) = 0;
            }
            DefaultTrustSubjectContext = RtlpComputeMergedAcl(
                                           v97,
                                           v96 & 0x140C,
                                           v94,
                                           *(_WORD *)(v132 + 2) & 0x140C,
                                           (__int64)Src,
                                           (__int64)v131,
                                           v134,
                                           1,
                                           (__int64)&v140,
                                           (__int64)&v114);
            if ( DefaultTrustSubjectContext < 0 )
              goto LABEL_58;
            v29 = v140;
            v111 = 1;
            LOWORD(v13) = v114 & 0x1408 | 4 | v13;
          }
          else
          {
            if ( (v28 & 4) != 0 )
            {
              if ( v28 < 0 )
              {
                v108 = *(unsigned int *)(v132 + 16);
                if ( (_DWORD)v108 )
                  v29 = (unsigned __int16 *)(v132 + v108);
                else
                  v29 = 0LL;
              }
              else
              {
                v29 = *(unsigned __int16 **)(v132 + 32);
              }
            }
            else
            {
              v29 = 0LL;
            }
            LOWORD(v13) = v28 & 0x1000 | 4 | v13;
            if ( (v28 & 0x500) == 0x500 )
              LOWORD(v13) = v13 | 0x400;
          }
          if ( v135 )
          {
            v139 = 76;
            Heap = (_QWORD *)RtlAllocateHeap(ProcessHeap, NtdllBaseTag + 1310720, 0x4CuLL);
            if ( !Heap )
            {
              DefaultTrustSubjectContext = -1073741801;
              goto LABEL_55;
            }
            DefaultTrustSubjectContext = NtOpenProcessToken(-1LL, 8LL, &Handle);
            if ( DefaultTrustSubjectContext < 0
              || (DefaultTrustSubjectContext = NtQueryInformationToken(Handle, 4LL, Heap, v139, &v139),
                  NtClose(Handle),
                  DefaultTrustSubjectContext < 0) )
            {
              RtlFreeHeap((__int64)ProcessHeap, 0, (__int64)Heap, v86);
              goto LABEL_55;
            }
            DefaultTrustSubjectContext = RtlpCreateServerAcl(
                                           (_DWORD)v29,
                                           v127,
                                           *Heap,
                                           (unsigned int)&v146,
                                           (__int64)v112);
            RtlFreeHeap((__int64)ProcessHeap, 0, (__int64)Heap, v87);
            if ( DefaultTrustSubjectContext < 0 )
              goto LABEL_55;
            if ( v112[0] )
            {
              if ( v111 )
                RtlFreeHeap((__int64)ProcessHeap, 0, (__int64)v140, v36);
              v140 = v146;
              v112[0] = 0;
              v111 = 1;
            }
            v29 = v146;
          }
        }
        else
        {
          v69 = *a4;
          v70 = *(_WORD *)(*a4 + 2);
          if ( (v70 & 4) != 0 )
          {
            if ( v70 < 0 )
            {
              v105 = *(unsigned int *)(v69 + 16);
              if ( (_DWORD)v105 )
                v29 = (unsigned __int16 *)(v69 + v105);
              else
                v29 = 0LL;
            }
            else
            {
              v29 = *(unsigned __int16 **)(v69 + 32);
            }
          }
          else
          {
            v29 = 0LL;
          }
        }
        v31 = 4 * *((unsigned __int8 *)Src + 1) + 8;
        Size[0] = v31;
        v32 = 4 * *((unsigned __int8 *)v131 + 1) + 8;
        LODWORD(v129) = v32;
        if ( v12 )
          v33 = (v12[1] + 3) & 0xFFFFFFFC;
        else
          v33 = 0;
        if ( v29 )
          v34 = (v29[1] + 3) & 0xFFFFFFFC;
        else
          v34 = 0;
        v35 = RtlAllocateHeap(v124, NtdllBaseTag + 1310720, v31 + 20 + v34 + v33 + v32);
        if ( v35 )
        {
          v37 = (unsigned __int16 *)(v35 + 20);
          *(_OWORD *)v35 = 0LL;
          *(_DWORD *)(v35 + 16) = 0;
          *(_BYTE *)v35 = 1;
          if ( (_BYTE)v136 )
            LOWORD(v13) = v13 | 0x800;
          v38 = v132;
          v39 = *(_WORD *)(v35 + 2) | v13;
          *(_WORD *)(v35 + 2) = v39;
          if ( (*(_WORD *)(v38 + 2) & 0x4000) != 0 )
          {
            *(_BYTE *)(v35 + 1) = *(_BYTE *)(v38 + 1);
            *(_WORD *)(v35 + 2) = v39 | 0x4000;
          }
          if ( !v12 )
            goto LABEL_114;
          v40 = v35 + 20;
          v41 = (void *)(v35 + 20);
          if ( (a5 & 0x4000) != 0 )
          {
            RtlpNormalizeAcl(v41, *(_QWORD *)&Size[1], v134);
            if ( *(_WORD *)(v35 + 24) )
            {
              v33 = *(unsigned __int16 *)(v35 + 22);
            }
            else
            {
              v40 = 0LL;
              v33 = 0;
            }
          }
          else
          {
            memmove(v41, *(const void **)&Size[1], *(unsigned __int16 *)(*(_QWORD *)&Size[1] + 2LL));
            RtlpApplyAclToObject(v35 + 20, v134);
            v42 = *(unsigned __int16 *)(*(_QWORD *)&Size[1] + 2LL);
            if ( v33 > (unsigned int)v42 )
              memset_thunk_772440563353939046((char *)v37 + v42, 0, v33 - (unsigned int)v42);
          }
          if ( v40 )
          {
            v37 = (unsigned __int16 *)((char *)v37 + v33);
            v43 = v40 - v35;
          }
          else
          {
LABEL_114:
            v43 = 0;
          }
          *(_DWORD *)(v35 + 12) = v43;
          v44 = v148;
          if ( (v13 & 0x10) == 0 )
            *(_WORD *)(v35 + 2) |= *(_WORD *)(*v148 + 2) & 0x2830;
          if ( v29 )
          {
            memmove(v37, v29, v29[1]);
            RtlpApplyAclToObject(v37, v134);
            *(_DWORD *)(v35 + 16) = (_DWORD)v37 - v35;
            v45 = v29[1];
            if ( v34 > (unsigned int)v45 )
              memset_thunk_772440563353939046((char *)v37 + v45, 0, v34 - (unsigned int)v45);
          }
          else
          {
            *(_DWORD *)(v35 + 16) = 0;
          }
          if ( (v13 & 4) == 0 )
          {
            *(_WORD *)(v35 + 2) |= *(_WORD *)(*v44 + 2) & 0x140C;
            if ( (_BYTE)j )
            {
              v153[0] = 257;
              v71 = 0;
              v153[1] = 50331648;
              v72 = 4089359;
              v153[2] = 4;
LABEL_117:
              v73 = *(_WORD *)(v35 + 2);
              if ( (v73 & 4) != 0 )
              {
                if ( v73 >= 0 )
                {
                  v75 = *(_QWORD *)(v35 + 32);
LABEL_121:
                  if ( v75 )
                  {
                    v76 = (unsigned __int8 *)(v75 + 8);
                    v77 = 0;
                    v78 = *(unsigned __int16 *)(v75 + 4);
                    for ( j = v78; ; v78 = j )
                    {
                      if ( v77 >= v78 )
                        goto LABEL_47;
                      v79 = *v76;
                      if ( (unsigned __int8)v79 <= 0x15u && _bittest(&v72, v79) )
                      {
                        v80 = (unsigned __int16 *)(v76 + 8);
                      }
                      else if ( (_BYTE)v79 == 4 )
                      {
                        v80 = (unsigned __int16 *)(v76 + 12);
                      }
                      else
                      {
                        if ( (unsigned __int8)(v79 - 5) > 3u
                          && (unsigned __int8)(v79 - 11) > 1u
                          && (unsigned __int8)(v79 - 15) > 1u )
                        {
                          goto LABEL_292;
                        }
                        v80 = (unsigned __int16 *)&v76[16 * (*((_DWORD *)v76 + 2) & 1)
                                                     + ((8LL * (*((_DWORD *)v76 + 2) & 2)) | 0xC)];
                      }
                      if ( v80 )
                      {
                        if ( v77 >= v71 )
                        {
                          v109 = RtlEqualSid(v80, v153);
                          v72 = 4089359;
                          if ( v109 )
                          {
                            v71 = v77 + 1;
                            v76[1] = v76[1] & 0xF4 | 8;
                            goto LABEL_117;
                          }
                        }
                      }
LABEL_292:
                      ++v77;
                      v76 += *((unsigned __int16 *)v76 + 1);
                    }
                  }
                  goto LABEL_47;
                }
                v74 = *(unsigned int *)(v35 + 16);
                if ( (_DWORD)v74 )
                {
                  v75 = v35 + v74;
                  goto LABEL_121;
                }
              }
            }
          }
LABEL_47:
          if ( *(_DWORD *)(v35 + 16) && (a5 & 0x4000) != 0 )
          {
            RtlpNormalizeAcl(v37, v37, 0LL);
            v34 = v37[1];
          }
          v46 = Size[0];
          v47 = (char *)v37 + v34;
          memmove(v47, Src, Size[0]);
          v48 = (int)v47;
          v49 = &v47[v46];
          v22 = v115 == 0;
          *(_DWORD *)(v35 + 4) = v48 - v35;
          if ( v22 )
            *(_WORD *)(v35 + 2) |= *(_WORD *)(*v44 + 2) & 1;
          memmove(v49, v131, (unsigned int)v129);
          v22 = v116 == 0;
          *(_DWORD *)(v35 + 8) = (_DWORD)v49 - v35;
          if ( v22 )
            *(_WORD *)(v35 + 2) |= *(_WORD *)(*v44 + 2) & 2;
          ProcessHeap = v124;
          RtlFreeHeap((__int64)v124, 0, *v44, v50);
          *v44 = v35;
          DefaultTrustSubjectContext = 0;
          v12 = *(unsigned __int16 **)&Size[1];
          goto LABEL_55;
        }
        ProcessHeap = v124;
        DefaultTrustSubjectContext = -1073741801;
LABEL_55:
        if ( v111 )
          RtlFreeHeap((__int64)ProcessHeap, 0, (__int64)v140, v36);
        goto LABEL_57;
      }
    }
    v121 = 1;
    goto LABEL_19;
  }
  return (unsigned int)DefaultTrustSubjectContext;
}
