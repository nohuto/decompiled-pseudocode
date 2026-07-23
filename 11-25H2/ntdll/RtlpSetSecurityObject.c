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
        PVOID *a4,
        __int16 a5,
        int a6,
        __int64 a7,
        void *a8)
{
  __int64 v8; // rbx
  __int16 v10; // dx
  unsigned __int16 *v12; // r15
  int v13; // r13d
  __int64 v14; // r11
  unsigned int *v15; // rcx
  __int16 v16; // ax
  unsigned __int16 *v17; // rsi
  void *ProcessHeap; // r14
  int v19; // r9d
  int v20; // r10d
  __int64 v21; // rax
  bool v22; // zf
  char *v23; // rax
  _QWORD *v24; // rax
  __int64 v25; // rcx
  char *v26; // rcx
  PVOID v27; // rsi
  __int16 v28; // cx
  unsigned __int16 *v29; // r12
  int DefaultTrustSubjectContext; // ebx
  int v31; // ecx
  int v32; // r8d
  unsigned int v33; // edi
  unsigned int v34; // r14d
  char *v35; // rbx
  unsigned __int16 *v36; // rsi
  __int64 v37; // rax
  __int16 v38; // cx
  char *v39; // r15
  void *v40; // rcx
  __int64 v41; // rdx
  int v42; // r15d
  PVOID *v43; // r15
  __int64 v44; // rcx
  __int64 v45; // rdi
  char *v46; // rsi
  int v47; // eax
  char *v48; // rsi
  PVOID v49; // r14
  PVOID v50; // rdi
  __int64 v52; // rax
  __int64 v53; // rax
  PVOID v54; // r14
  PVOID v55; // rax
  __int64 v56; // r9
  char v57; // bl
  unsigned int v58; // edx
  int v59; // r14d
  unsigned int v60; // edx
  unsigned int v61; // edx
  unsigned int v62; // edx
  __int64 v63; // rcx
  unsigned int v64; // edx
  PVOID v65; // r14
  unsigned int *v66; // rax
  __int16 v67; // cx
  unsigned int v68; // edi
  int v69; // edx
  __int16 v70; // ax
  __int64 v71; // rax
  char *v72; // rax
  unsigned __int8 *v73; // r12
  unsigned int v74; // r13d
  unsigned int v75; // eax
  unsigned int v76; // ecx
  unsigned __int8 *v77; // rcx
  unsigned int v78; // eax
  __int64 v79; // rax
  void *v80; // rax
  __int64 v81; // rax
  _QWORD *Heap; // rdi
  unsigned int v83; // eax
  __int64 v84; // r14
  PVOID v85; // rcx
  int v86; // edi
  unsigned int v87; // eax
  int v88; // eax
  __int64 v89; // r8
  _DWORD *v90; // rax
  __int16 v91; // dx
  __int64 v92; // rcx
  unsigned int v93; // r8d
  void *v94; // rbx
  unsigned int v95; // edx
  _BYTE *v96; // rcx
  unsigned int v97; // eax
  unsigned int i; // ecx
  __int16 v99; // cx
  __int64 v100; // rcx
  int v101; // eax
  int v102; // ecx
  __int64 v103; // rax
  BOOLEAN v104; // al
  BOOLEAN DominatesTrust; // [rsp+50h] [rbp-B0h] BYREF
  char v106; // [rsp+51h] [rbp-AFh]
  char v107[2]; // [rsp+52h] [rbp-AEh] BYREF
  _DWORD Size[3]; // [rsp+54h] [rbp-ACh]
  __int64 v109; // [rsp+60h] [rbp-A0h] BYREF
  char v110; // [rsp+68h] [rbp-98h]
  char v111; // [rsp+69h] [rbp-97h]
  char v112; // [rsp+6Ah] [rbp-96h]
  char v113; // [rsp+6Bh] [rbp-95h]
  PVOID v114; // [rsp+70h] [rbp-90h]
  PVOID HeapHandle; // [rsp+78h] [rbp-88h]
  PVOID v116; // [rsp+80h] [rbp-80h] BYREF
  bool v117; // [rsp+88h] [rbp-78h]
  bool v118; // [rsp+89h] [rbp-77h]
  PVOID v119; // [rsp+90h] [rbp-70h] BYREF
  size_t v120; // [rsp+98h] [rbp-68h] BYREF
  void *Src; // [rsp+A0h] [rbp-60h]
  void *v122; // [rsp+A8h] [rbp-58h]
  __int64 v123; // [rsp+B0h] [rbp-50h]
  unsigned int j; // [rsp+B8h] [rbp-48h]
  __int64 v125; // [rsp+C0h] [rbp-40h]
  __int16 v126; // [rsp+C8h] [rbp-38h]
  int v127; // [rsp+CCh] [rbp-34h]
  HANDLE TokenHandle; // [rsp+D0h] [rbp-30h] BYREF
  ULONG ReturnLength; // [rsp+D8h] [rbp-28h] BYREF
  ULONG TokenInformationLength; // [rsp+DCh] [rbp-24h] BYREF
  PVOID BaseAddress; // [rsp+E0h] [rbp-20h] BYREF
  PVOID v132; // [rsp+E8h] [rbp-18h] BYREF
  PVOID v133; // [rsp+F0h] [rbp-10h] BYREF
  PVOID v134; // [rsp+F8h] [rbp-8h] BYREF
  PVOID v135; // [rsp+100h] [rbp+0h] BYREF
  __int64 v136; // [rsp+108h] [rbp+8h] BYREF
  PVOID v137; // [rsp+110h] [rbp+10h] BYREF
  PSID v138; // [rsp+118h] [rbp+18h]
  PVOID *v139; // [rsp+120h] [rbp+20h]
  __int128 TokenInformation; // [rsp+128h] [rbp+28h] BYREF
  __int128 v141; // [rsp+138h] [rbp+38h]
  __int128 v142; // [rsp+148h] [rbp+48h]
  __int64 v143; // [rsp+158h] [rbp+58h]
  _DWORD Sid2[12]; // [rsp+160h] [rbp+60h] BYREF

  v8 = a3;
  v139 = a4;
  v10 = *(_WORD *)(a3 + 2);
  v125 = a7;
  v123 = a3;
  v12 = 0LL;
  v114 = a8;
  v13 = 0x8000;
  v107[0] = 0;
  v106 = 0;
  v112 = 0;
  v113 = 0;
  v110 = 0;
  v111 = 0;
  BaseAddress = 0LL;
  v135 = 0LL;
  v136 = 0LL;
  v119 = 0LL;
  v116 = 0LL;
  v132 = 0LL;
  v133 = 0LL;
  v138 = 0LL;
  DominatesTrust = 0;
  LOBYTE(j) = 0;
  LOBYTE(v127) = 0;
  v109 = 0LL;
  v137 = 0LL;
  if ( (v10 & 0x10) != 0 )
  {
    if ( v10 >= 0 )
    {
      v14 = *(_QWORD *)(a3 + 24);
    }
    else
    {
      v53 = *(unsigned int *)(a3 + 12);
      if ( (_DWORD)v53 )
        v14 = a3 + v53;
      else
        v14 = 0LL;
    }
  }
  else
  {
    v14 = 0LL;
  }
  v15 = (unsigned int *)*a4;
  *(_QWORD *)&Size[1] = v14;
  v16 = *((_WORD *)v15 + 1);
  if ( (v16 & 0x10) != 0 )
  {
    if ( v16 >= 0 )
    {
      v17 = (unsigned __int16 *)*((_QWORD *)v15 + 3);
    }
    else
    {
      v52 = v15[3];
      if ( (_DWORD)v52 )
        v17 = (unsigned __int16 *)((char *)v15 + v52);
      else
        v17 = 0LL;
    }
  }
  else
  {
    v17 = 0LL;
  }
  ReturnLength = 0;
  TokenHandle = 0LL;
  TokenInformation = 0LL;
  v143 = 0LL;
  v141 = 0LL;
  v134 = 0LL;
  v142 = 0LL;
  ProcessHeap = NtCurrentPeb()->ProcessHeap;
  HeapHandle = ProcessHeap;
  if ( *((__int16 *)v15 + 1) >= 0 )
    return (unsigned int)-1073741593;
  v126 = v10 & 0x80;
  v117 = v126 != 0;
  v19 = a2 & 0x80;
  v20 = a2 & 0x100;
  v118 = (v10 & 0x40) != 0;
  if ( (a2 & 0x10000) != 0 )
  {
    v86 = a2 | 0x1FF;
    v87 = v86 & 0xFFFFFF7F;
    if ( v19 )
      v87 = v86;
    a2 = v87 & 0xFFFFFEFF;
    if ( v20 )
      a2 = v87;
    if ( !v17 && !v14 )
    {
      a2 &= 0xFFFFFE07;
      if ( (v10 & 0x10) != 0 )
      {
        a2 |= 8u;
      }
      else
      {
        v88 = (unsigned __int8)v127;
        if ( (v10 & 0x800) != 0 )
          v88 = 1;
        v127 = v88;
      }
    }
  }
  if ( (a2 & 1) == 0 )
  {
    v21 = v15[1];
    if ( !(_DWORD)v21 )
      return (unsigned int)-1073741734;
    v22 = (unsigned int *)((char *)v15 + v21) == 0LL;
    v23 = (char *)v15 + v21;
    Src = v23;
    if ( v22 )
      return (unsigned int)-1073741734;
    goto LABEL_10;
  }
  v78 = a2 >> 2;
  LOBYTE(v78) = (a2 & 4) == 0;
  j = v78;
  if ( v10 >= 0 )
  {
    v80 = *(void **)(a3 + 8);
  }
  else
  {
    v79 = *(unsigned int *)(a3 + 4);
    if ( !(_DWORD)v79 )
    {
      Src = 0LL;
      goto LABEL_133;
    }
    v80 = (void *)(a3 + v79);
  }
  Src = v80;
LABEL_133:
  BYTE4(v109) = 1;
  if ( (a5 & 8) == 0 )
  {
    if ( !v114 )
      return (unsigned int)-1073741734;
    LODWORD(v120) = NtQueryInformationToken(v114, 0xAu, &TokenInformation, 0x38u, &ReturnLength);
    DefaultTrustSubjectContext = v120;
    if ( (v120 & 0x80000000) != 0LL )
      return (unsigned int)DefaultTrustSubjectContext;
    if ( SHIDWORD(v141) < 1 && DWORD2(v141) == 2 )
      return (unsigned int)-1073741659;
    if ( !(unsigned __int8)RtlpValidOwnerSubjectContext(v114, Src, v117, &v120) )
      return (unsigned int)-1073741734;
    v8 = v123;
  }
  v23 = (char *)Src;
LABEL_10:
  if ( !RtlValidSid(v23) )
    return (unsigned int)-1073741734;
  if ( (a2 & 2) != 0 )
  {
    if ( *(__int16 *)(v8 + 2) >= 0 )
    {
      v26 = *(char **)(v8 + 16);
    }
    else
    {
      v81 = *(unsigned int *)(v8 + 8);
      if ( (_DWORD)v81 )
      {
        v26 = (char *)(v8 + v81);
        BYTE5(v109) = 1;
        goto LABEL_15;
      }
      v26 = 0LL;
    }
    BYTE5(v109) = 1;
    goto LABEL_15;
  }
  v24 = *a4;
  if ( *((__int16 *)*a4 + 1) >= 0 )
  {
    v26 = (char *)v24[2];
  }
  else
  {
    v25 = *((unsigned int *)v24 + 2);
    if ( !(_DWORD)v25 )
      return (unsigned int)-1073741733;
    v26 = (char *)v24 + v25;
  }
LABEL_15:
  v122 = v26;
  if ( !v26 || !RtlValidSid(v26) )
    return (unsigned int)-1073741733;
  if ( (a2 & 0x1F8) == 0 )
  {
    v12 = v17;
    v114 = (PVOID)v136;
    *(_QWORD *)&Size[1] = v17;
    v27 = v119;
    goto LABEL_19;
  }
  if ( (a2 & 0x10) != 0 )
  {
    v83 = 0;
    Size[0] = 0;
    do
    {
      if ( *(_QWORD *)&Size[1] )
      {
        v84 = *(_QWORD *)&Size[1] + 8LL;
        for ( i = 0; ; ++i )
        {
          if ( i >= *(unsigned __int16 *)(*(_QWORD *)&Size[1] + 4LL) )
            goto LABEL_152;
          if ( i >= v83 && *(_BYTE *)v84 == 17 )
            break;
          v84 += *(unsigned __int16 *)(v84 + 2);
          v83 = Size[0];
        }
        v22 = (*(_DWORD *)(v84 + 4) & 0xFFFFFFF8) == 0;
        v138 = (PSID)(v84 + 8);
        DominatesTrust = *(_BYTE *)(v84 + 1);
        Size[0] = i;
        if ( !v22 )
          return (unsigned int)-1073740730;
      }
      else
      {
LABEL_152:
        v84 = 0LL;
      }
      if ( v114 )
      {
        LODWORD(v120) = NtQueryInformationToken(v114, 0xAu, &TokenInformation, 0x38u, &ReturnLength);
        DefaultTrustSubjectContext = v120;
        if ( (v120 & 0x80000000) != 0LL )
          return (unsigned int)DefaultTrustSubjectContext;
        if ( DWORD2(v141) == 2 && SHIDWORD(v141) < 1 )
          return (unsigned int)-1073741659;
        v85 = v114;
      }
      else
      {
        LODWORD(v120) = NtOpenProcessToken((HANDLE)0xFFFFFFFFFFFFFFFFLL, 8u, &TokenHandle);
        DefaultTrustSubjectContext = v120;
        if ( (v120 & 0x80000000) != 0LL )
          return (unsigned int)DefaultTrustSubjectContext;
        v85 = TokenHandle;
      }
      if ( !(unsigned __int8)RtlpValidLabelSubjectContext(v85, v138) )
      {
        NtClose(TokenHandle);
        return (unsigned int)-1073740730;
      }
      NtClose(TokenHandle);
      v83 = ++Size[0];
    }
    while ( v84 );
  }
  DefaultTrustSubjectContext = RtlpGetDefaultTrustSubjectContext(v114, &v134);
  if ( DefaultTrustSubjectContext >= 0 )
  {
    v54 = v134;
    v55 = *(PVOID *)v134;
    v114 = *(PVOID *)v134;
    if ( (a2 & 0x80u) == 0 )
    {
      v56 = *(_QWORD *)&Size[1];
      goto LABEL_80;
    }
    if ( !v55 )
    {
LABEL_274:
      DefaultTrustSubjectContext = -1073741790;
      goto LABEL_275;
    }
    v56 = *(_QWORD *)&Size[1];
    v93 = 0;
    if ( !*(_QWORD *)&Size[1] )
      goto LABEL_80;
    v94 = v55;
    do
    {
      v95 = *(unsigned __int16 *)(v56 + 4);
      v96 = (_BYTE *)(v56 + 8);
      v97 = 0;
      Size[0] = 0;
      while ( 1 )
      {
        v134 = v96;
        if ( v97 >= v95 )
        {
          v55 = v94;
          goto LABEL_80;
        }
        if ( v97 >= v93 && *v96 == 20 )
          break;
        Size[0] = v97 + 1;
        v96 += *((unsigned __int16 *)v96 + 1);
        ++v97;
      }
      if ( (*((_DWORD *)v96 + 1) & 0xFF000000) != 0 )
      {
        DefaultTrustSubjectContext = -1073740730;
        RtlFreeHeap(HeapHandle, 0, v54);
        return (unsigned int)DefaultTrustSubjectContext;
      }
      DominatesTrust = 0;
      RtlSidDominatesForTrust(v94, v96 + 8, &DominatesTrust);
      if ( !DominatesTrust )
        goto LABEL_274;
      v56 = *(_QWORD *)&Size[1];
      v93 = Size[0] + 1;
    }
    while ( v134 );
    v55 = v94;
LABEL_80:
    if ( (a2 & 0x100) == 0 )
    {
LABEL_81:
      v57 = a5;
      goto LABEL_82;
    }
    DefaultTrustSubjectContext = RtlpValidFilterAclSubjectContext(v56, v55);
    if ( DefaultTrustSubjectContext < 0 )
    {
LABEL_275:
      RtlFreeHeap(HeapHandle, 0, v54);
      return (unsigned int)DefaultTrustSubjectContext;
    }
    v57 = a5;
    if ( (a5 & 2) == 0 )
    {
      DefaultTrustSubjectContext = RtlpValidFilterAclSubjectContext((__int64)v17, v114);
      if ( DefaultTrustSubjectContext >= 0 )
        goto LABEL_81;
      goto LABEL_275;
    }
LABEL_82:
    RtlFreeHeap(HeapHandle, 0, v54);
    if ( (a2 & 8) != 0 )
    {
      v58 = *(unsigned __int16 *)(v123 + 2);
      v59 = v57 & 2;
      if ( (v57 & 2) != 0 )
      {
        DefaultTrustSubjectContext = RtlpComputeMergedAcl(
                                       (int)v17,
                                       (*((_WORD *)*a4 + 1) & 0x2800 | (*((unsigned __int16 *)*a4 + 1) >> 1) & 0x18u) >> 1,
                                       Size[1],
                                       (v58 & 0x2800 | (v58 >> 1) & 0x18) >> 1,
                                       (__int64)Src,
                                       (__int64)v122,
                                       v125,
                                       2,
                                       (__int64)&v136,
                                       (__int64)&v109);
        if ( DefaultTrustSubjectContext >= 0 )
        {
          v57 = a5;
          v113 = 1;
          v114 = (PVOID)v136;
          v13 = 2 * (v109 & 0x1400 | (2 * (v109 & 8 | 0x2004)));
          goto LABEL_86;
        }
        v114 = (PVOID)v136;
LABEL_57:
        v27 = v119;
LABEL_58:
        v49 = v116;
        v50 = HeapHandle;
        if ( v114 && v113 )
          RtlFreeHeap(HeapHandle, 0, v114);
        if ( v49 && BYTE6(v109) )
          RtlFreeHeap(v50, 0, v49);
        if ( v27 && HIBYTE(v109) )
          RtlFreeHeap(v50, 0, v27);
        if ( v132 && v110 )
          RtlFreeHeap(v50, 0, v132);
        if ( v133 && v111 )
          RtlFreeHeap(v50, 0, v133);
        if ( v12 && v112 )
          RtlFreeHeap(v50, 0, v12);
        if ( v107[0] )
          RtlFreeHeap(v50, 0, v137);
        return (unsigned int)DefaultTrustSubjectContext;
      }
      v114 = *(PVOID *)&Size[1];
      v13 = v58 & 0x2000 | 0x8010;
      if ( (v58 & 0xA00) == 0xA00 )
        v13 = v58 & 0x2000 | 0x8810;
    }
    else
    {
      v114 = v17;
      v59 = v57 & 2;
    }
LABEL_86:
    Size[0] = v13;
    if ( (a2 & 0x20) != 0 )
    {
      v60 = *(unsigned __int16 *)(v123 + 2);
      if ( v59 )
      {
        DefaultTrustSubjectContext = RtlpComputeMergedAcl(
                                       (int)v17,
                                       (*((_WORD *)*a4 + 1) & 0x800 | (*((unsigned __int16 *)*a4 + 1) >> 1) & 0x18u) >> 1,
                                       Size[1],
                                       (v60 & 0x800 | (v60 >> 1) & 0x18) >> 1,
                                       (__int64)Src,
                                       (__int64)v122,
                                       v125,
                                       2,
                                       (__int64)&v116,
                                       (__int64)&v109);
        if ( DefaultTrustSubjectContext < 0 )
          goto LABEL_57;
        BYTE6(v109) = 1;
        v13 = Size[0] | (2 * (v109 & 0x1400 | (2 * (v109 & 8 | 4))));
      }
      else
      {
        v116 = *(PVOID *)&Size[1];
        v13 |= v60 & 0x2000 | 0x10;
        if ( (v60 & 0xA00) == 0xA00 )
        {
          v13 |= 0x800u;
          v59 = v57 & 2;
        }
      }
    }
    else
    {
      v116 = v17;
    }
    Size[0] = v13;
    if ( (a2 & 0x40) != 0 )
    {
      v61 = *(unsigned __int16 *)(v123 + 2);
      if ( v59 )
      {
        DefaultTrustSubjectContext = RtlpComputeMergedAcl(
                                       (int)v17,
                                       (*((_WORD *)*a4 + 1) & 0x800 | (*((unsigned __int16 *)*a4 + 1) >> 1) & 0x18u) >> 1,
                                       Size[1],
                                       (v61 & 0x800 | (v61 >> 1) & 0x18) >> 1,
                                       (__int64)Src,
                                       (__int64)v122,
                                       v125,
                                       2,
                                       (__int64)&v119,
                                       (__int64)&v109);
        if ( DefaultTrustSubjectContext < 0 )
          goto LABEL_57;
        HIBYTE(v109) = 1;
        v13 = Size[0] | (2 * (v109 & 0x1400 | (2 * (v109 & 8 | 4))));
      }
      else
      {
        v119 = *(PVOID *)&Size[1];
        v13 |= v61 & 0x2000 | 0x10;
        if ( (v61 & 0xA00) == 0xA00 )
        {
          v13 |= 0x800u;
          v59 = a5 & 2;
        }
      }
    }
    else
    {
      v119 = v17;
    }
    Size[0] = v13;
    if ( (a2 & 0x80u) == 0 )
    {
      v132 = v17;
    }
    else
    {
      v62 = *(unsigned __int16 *)(v123 + 2);
      if ( v59 )
      {
        DefaultTrustSubjectContext = RtlpComputeMergedAcl(
                                       (int)v17,
                                       (*((_WORD *)*a4 + 1) & 0x800 | (*((unsigned __int16 *)*a4 + 1) >> 1) & 0x18u) >> 1,
                                       Size[1],
                                       (v62 & 0x800 | (v62 >> 1) & 0x18) >> 1,
                                       (__int64)Src,
                                       (__int64)v122,
                                       v125,
                                       2,
                                       (__int64)&v132,
                                       (__int64)&v109);
        if ( DefaultTrustSubjectContext < 0 )
          goto LABEL_57;
        v110 = 1;
        v13 = Size[0] | (2 * (v109 & 0x1400 | (2 * (v109 & 8 | 4))));
      }
      else
      {
        v132 = *(PVOID *)&Size[1];
        v13 |= v62 & 0x2000 | 0x10;
        if ( (v62 & 0xA00) == 0xA00 )
        {
          v13 |= 0x800u;
          v59 = a5 & 2;
        }
      }
    }
    v63 = v123;
    Size[0] = v13;
    if ( (a2 & 0x100) != 0 )
    {
      v64 = *(unsigned __int16 *)(v123 + 2);
      if ( v59 )
      {
        DefaultTrustSubjectContext = RtlpComputeMergedAcl(
                                       (int)v17,
                                       (*((_WORD *)*a4 + 1) & 0x800 | (*((unsigned __int16 *)*a4 + 1) >> 1) & 0x18u) >> 1,
                                       Size[1],
                                       (v64 & 0x800 | (v64 >> 1) & 0x18) >> 1,
                                       (__int64)Src,
                                       (__int64)v122,
                                       v125,
                                       2,
                                       (__int64)&v133,
                                       (__int64)&v109);
        if ( DefaultTrustSubjectContext < 0 )
          goto LABEL_57;
        v63 = v123;
        v111 = 1;
        LOWORD(v13) = LOWORD(Size[0]) | (2 * (v109 & 0x1400 | (2 * (v109 & 8 | 4))));
      }
      else
      {
        v133 = *(PVOID *)&Size[1];
        LOWORD(v13) = v64 & 0x2000 | 0x10 | v13;
        if ( (v64 & 0xA00) == 0xA00 )
          LOWORD(v13) = v13 | 0x800;
      }
    }
    else
    {
      v133 = v17;
    }
    if ( (a2 & 0x10) != 0 )
    {
      v99 = *(_WORD *)(v63 + 2);
      LOWORD(v13) = v99 & 0x2000 | 0x10 | v13;
      if ( (v99 & 0xA00) == 0xA00 )
        LOWORD(v13) = v13 | 0x800;
    }
    else
    {
      *(_QWORD *)&Size[1] = v17;
    }
    v27 = v119;
    v65 = v114;
    DefaultTrustSubjectContext = RtlpCombineAcls(
                                   (unsigned __int8 *)v114,
                                   *(unsigned __int8 **)&Size[1],
                                   (unsigned __int8 *)v116,
                                   (unsigned __int8 *)v119,
                                   (unsigned __int64)v132,
                                   (unsigned __int64)v133,
                                   (unsigned __int16 **)&v135,
                                   0LL);
    if ( DefaultTrustSubjectContext < 0 )
      goto LABEL_58;
    v12 = (unsigned __int16 *)v135;
    *(_QWORD *)&Size[1] = v135;
    if ( v65 || !v135 )
    {
      ProcessHeap = HeapHandle;
    }
    else
    {
      ProcessHeap = HeapHandle;
      if ( !*((_WORD *)v135 + 2) )
      {
        RtlFreeHeap(HeapHandle, 0, v135);
        v12 = 0LL;
        v112 = 1;
        *(_QWORD *)&Size[1] = 0LL;
        v135 = 0LL;
LABEL_19:
        if ( (a2 & 4) != 0 )
        {
          v28 = *(_WORD *)(v123 + 2);
          if ( (a5 & 1) != 0 )
          {
            if ( (v28 & 4) != 0 )
            {
              if ( v28 < 0 )
              {
                v101 = *(_DWORD *)(v123 + 16);
                if ( v101 )
                  LODWORD(v89) = v123 + v101;
                else
                  LODWORD(v89) = 0;
              }
              else
              {
                v89 = *(_QWORD *)(v123 + 32);
              }
            }
            else
            {
              LODWORD(v89) = 0;
            }
            v90 = *a4;
            v91 = *((_WORD *)*a4 + 1);
            if ( (v91 & 4) != 0 )
            {
              if ( v91 < 0 )
              {
                v102 = v90[4];
                if ( v102 )
                  LODWORD(v92) = (_DWORD)v90 + v102;
                else
                  LODWORD(v92) = 0;
              }
              else
              {
                v92 = *((_QWORD *)v90 + 4);
              }
            }
            else
            {
              LODWORD(v92) = 0;
            }
            DefaultTrustSubjectContext = RtlpComputeMergedAcl(
                                           v92,
                                           v91 & 0x140C,
                                           v89,
                                           *(_WORD *)(v123 + 2) & 0x140C,
                                           (__int64)Src,
                                           (__int64)v122,
                                           v125,
                                           1,
                                           (__int64)&BaseAddress,
                                           (__int64)&v109);
            if ( DefaultTrustSubjectContext < 0 )
              goto LABEL_58;
            v29 = (unsigned __int16 *)BaseAddress;
            v106 = 1;
            LOWORD(v13) = v109 & 0x1408 | 4 | v13;
          }
          else
          {
            if ( (v28 & 4) != 0 )
            {
              if ( v28 < 0 )
              {
                v103 = *(unsigned int *)(v123 + 16);
                if ( (_DWORD)v103 )
                  v29 = (unsigned __int16 *)(v123 + v103);
                else
                  v29 = 0LL;
              }
              else
              {
                v29 = *(unsigned __int16 **)(v123 + 32);
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
          if ( v126 )
          {
            TokenInformationLength = 76;
            Heap = RtlAllocateHeap(ProcessHeap, NtdllBaseTag + 1310720, 0x4CuLL);
            if ( !Heap )
            {
              DefaultTrustSubjectContext = -1073741801;
              goto LABEL_55;
            }
            DefaultTrustSubjectContext = NtOpenProcessToken((HANDLE)0xFFFFFFFFFFFFFFFFLL, 8u, &TokenHandle);
            if ( DefaultTrustSubjectContext < 0
              || (DefaultTrustSubjectContext = NtQueryInformationToken(
                                                 TokenHandle,
                                                 4u,
                                                 Heap,
                                                 TokenInformationLength,
                                                 &TokenInformationLength),
                  NtClose(TokenHandle),
                  DefaultTrustSubjectContext < 0) )
            {
              RtlFreeHeap(ProcessHeap, 0, Heap);
              goto LABEL_55;
            }
            DefaultTrustSubjectContext = RtlpCreateServerAcl(
                                           (_DWORD)v29,
                                           v118,
                                           *Heap,
                                           (unsigned int)&v137,
                                           (__int64)v107);
            RtlFreeHeap(ProcessHeap, 0, Heap);
            if ( DefaultTrustSubjectContext < 0 )
              goto LABEL_55;
            if ( v107[0] )
            {
              if ( v106 )
                RtlFreeHeap(ProcessHeap, 0, BaseAddress);
              BaseAddress = v137;
              v107[0] = 0;
              v106 = 1;
            }
            v29 = (unsigned __int16 *)v137;
          }
        }
        else
        {
          v66 = (unsigned int *)*a4;
          v67 = *((_WORD *)*a4 + 1);
          if ( (v67 & 4) != 0 )
          {
            if ( v67 < 0 )
            {
              v100 = v66[4];
              if ( (_DWORD)v100 )
                v29 = (unsigned __int16 *)((char *)v66 + v100);
              else
                v29 = 0LL;
            }
            else
            {
              v29 = (unsigned __int16 *)*((_QWORD *)v66 + 4);
            }
          }
          else
          {
            v29 = 0LL;
          }
        }
        v31 = 4 * *((unsigned __int8 *)Src + 1) + 8;
        Size[0] = v31;
        v32 = 4 * *((unsigned __int8 *)v122 + 1) + 8;
        LODWORD(v120) = v32;
        if ( v12 )
          v33 = (v12[1] + 3) & 0xFFFFFFFC;
        else
          v33 = 0;
        if ( v29 )
          v34 = (v29[1] + 3) & 0xFFFFFFFC;
        else
          v34 = 0;
        v35 = (char *)RtlAllocateHeap(HeapHandle, NtdllBaseTag + 1310720, v31 + 20 + v34 + v33 + v32);
        if ( v35 )
        {
          v36 = (unsigned __int16 *)(v35 + 20);
          *(_OWORD *)v35 = 0LL;
          *((_DWORD *)v35 + 4) = 0;
          *v35 = 1;
          if ( (_BYTE)v127 )
            LOWORD(v13) = v13 | 0x800;
          v37 = v123;
          v38 = *((_WORD *)v35 + 1) | v13;
          *((_WORD *)v35 + 1) = v38;
          if ( (*(_WORD *)(v37 + 2) & 0x4000) != 0 )
          {
            v35[1] = *(_BYTE *)(v37 + 1);
            *((_WORD *)v35 + 1) = v38 | 0x4000;
          }
          if ( !v12 )
            goto LABEL_114;
          v39 = v35 + 20;
          v40 = v35 + 20;
          if ( (a5 & 0x4000) != 0 )
          {
            RtlpNormalizeAcl(v40, *(_QWORD *)&Size[1], v125);
            if ( *((_WORD *)v35 + 12) )
            {
              v33 = *((unsigned __int16 *)v35 + 11);
            }
            else
            {
              v39 = 0LL;
              v33 = 0;
            }
          }
          else
          {
            memmove(v40, *(const void **)&Size[1], *(unsigned __int16 *)(*(_QWORD *)&Size[1] + 2LL));
            RtlpApplyAclToObject(v35 + 20, v125);
            v41 = *(unsigned __int16 *)(*(_QWORD *)&Size[1] + 2LL);
            if ( v33 > (unsigned int)v41 )
              memset_thunk_772440563353939046((char *)v36 + v41, 0, v33 - (unsigned int)v41);
          }
          if ( v39 )
          {
            v36 = (unsigned __int16 *)((char *)v36 + v33);
            v42 = (_DWORD)v39 - (_DWORD)v35;
          }
          else
          {
LABEL_114:
            v42 = 0;
          }
          *((_DWORD *)v35 + 3) = v42;
          v43 = v139;
          if ( (v13 & 0x10) == 0 )
            *((_WORD *)v35 + 1) |= *((_WORD *)*v139 + 1) & 0x2830;
          if ( v29 )
          {
            memmove(v36, v29, v29[1]);
            RtlpApplyAclToObject(v36, v125);
            *((_DWORD *)v35 + 4) = (_DWORD)v36 - (_DWORD)v35;
            v44 = v29[1];
            if ( v34 > (unsigned int)v44 )
              memset_thunk_772440563353939046((char *)v36 + v44, 0, v34 - (unsigned int)v44);
          }
          else
          {
            *((_DWORD *)v35 + 4) = 0;
          }
          if ( (v13 & 4) == 0 )
          {
            *((_WORD *)v35 + 1) |= *((_WORD *)*v43 + 1) & 0x140C;
            if ( (_BYTE)j )
            {
              Sid2[0] = 257;
              v68 = 0;
              Sid2[1] = 50331648;
              v69 = 4089359;
              Sid2[2] = 4;
LABEL_117:
              v70 = *((_WORD *)v35 + 1);
              if ( (v70 & 4) != 0 )
              {
                if ( v70 >= 0 )
                {
                  v72 = (char *)*((_QWORD *)v35 + 4);
LABEL_121:
                  if ( v72 )
                  {
                    v73 = (unsigned __int8 *)(v72 + 8);
                    v74 = 0;
                    v75 = *((unsigned __int16 *)v72 + 2);
                    for ( j = v75; ; v75 = j )
                    {
                      if ( v74 >= v75 )
                        goto LABEL_47;
                      v76 = *v73;
                      if ( (unsigned __int8)v76 <= 0x15u && _bittest(&v69, v76) )
                      {
                        v77 = v73 + 8;
                      }
                      else if ( (_BYTE)v76 == 4 )
                      {
                        v77 = v73 + 12;
                      }
                      else
                      {
                        if ( (unsigned __int8)(v76 - 5) > 3u
                          && (unsigned __int8)(v76 - 11) > 1u
                          && (unsigned __int8)(v76 - 15) > 1u )
                        {
                          goto LABEL_292;
                        }
                        v77 = &v73[16 * (*((_DWORD *)v73 + 2) & 1) + ((8LL * (*((_DWORD *)v73 + 2) & 2)) | 0xC)];
                      }
                      if ( v77 )
                      {
                        if ( v74 >= v68 )
                        {
                          v104 = RtlEqualSid(v77, Sid2);
                          v69 = 4089359;
                          if ( v104 )
                          {
                            v68 = v74 + 1;
                            v73[1] = v73[1] & 0xF4 | 8;
                            goto LABEL_117;
                          }
                        }
                      }
LABEL_292:
                      ++v74;
                      v73 += *((unsigned __int16 *)v73 + 1);
                    }
                  }
                  goto LABEL_47;
                }
                v71 = *((unsigned int *)v35 + 4);
                if ( (_DWORD)v71 )
                {
                  v72 = &v35[v71];
                  goto LABEL_121;
                }
              }
            }
          }
LABEL_47:
          if ( *((_DWORD *)v35 + 4) && (a5 & 0x4000) != 0 )
          {
            RtlpNormalizeAcl(v36, v36, 0LL);
            v34 = v36[1];
          }
          v45 = Size[0];
          v46 = (char *)v36 + v34;
          memmove(v46, Src, Size[0]);
          v47 = (int)v46;
          v48 = &v46[v45];
          v22 = BYTE4(v109) == 0;
          *((_DWORD *)v35 + 1) = v47 - (_DWORD)v35;
          if ( v22 )
            *((_WORD *)v35 + 1) |= *((_WORD *)*v43 + 1) & 1;
          memmove(v48, v122, (unsigned int)v120);
          v22 = BYTE5(v109) == 0;
          *((_DWORD *)v35 + 2) = (_DWORD)v48 - (_DWORD)v35;
          if ( v22 )
            *((_WORD *)v35 + 1) |= *((_WORD *)*v43 + 1) & 2;
          ProcessHeap = HeapHandle;
          RtlFreeHeap(HeapHandle, 0, *v43);
          *v43 = v35;
          DefaultTrustSubjectContext = 0;
          v12 = *(unsigned __int16 **)&Size[1];
          goto LABEL_55;
        }
        ProcessHeap = HeapHandle;
        DefaultTrustSubjectContext = -1073741801;
LABEL_55:
        if ( v106 )
          RtlFreeHeap(ProcessHeap, 0, BaseAddress);
        goto LABEL_57;
      }
    }
    v112 = 1;
    goto LABEL_19;
  }
  return (unsigned int)DefaultTrustSubjectContext;
}
