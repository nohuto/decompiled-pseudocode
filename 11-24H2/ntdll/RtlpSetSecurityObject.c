/*
 * XREFs of RtlpSetSecurityObject @ 0x1800BEAF0
 * Callers:
 *     RtlSetSecurityObjectEx @ 0x1800BE2E0 (RtlSetSecurityObjectEx.c)
 *     RtlSetSecurityObject @ 0x1800BEAB0 (RtlSetSecurityObject.c)
 * Callees:
 *     RtlValidSid @ 0x1800194A0 (RtlValidSid.c)
 *     RtlAllocateHeap @ 0x18003DC60 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x1800533F0 (RtlFreeHeap.c)
 *     RtlpValidOwnerSubjectContext @ 0x1800BE320 (RtlpValidOwnerSubjectContext.c)
 *     RtlpCreateServerAcl @ 0x1800BE59C (RtlpCreateServerAcl.c)
 *     RtlpComputeMergedAcl @ 0x1800BE824 (RtlpComputeMergedAcl.c)
 *     RtlpValidLabelSubjectContext @ 0x1800BE964 (RtlpValidLabelSubjectContext.c)
 *     RtlpApplyAclToObject @ 0x1800BFFF0 (RtlpApplyAclToObject.c)
 *     RtlpNormalizeAcl @ 0x1800C0094 (RtlpNormalizeAcl.c)
 *     RtlSidDominatesForTrust @ 0x1800C0370 (RtlSidDominatesForTrust.c)
 *     RtlpGetDefaultTrustSubjectContext @ 0x1800C0C70 (RtlpGetDefaultTrustSubjectContext.c)
 *     RtlpValidFilterAclSubjectContext @ 0x1800C2B00 (RtlpValidFilterAclSubjectContext.c)
 *     RtlpCombineAcls @ 0x1800C2C00 (RtlpCombineAcls.c)
 *     RtlEqualSid @ 0x1800C5DD0 (RtlEqualSid.c)
 *     NtClose @ 0x180160230 (NtClose.c)
 *     NtQueryInformationToken @ 0x180160470 (NtQueryInformationToken.c)
 *     NtOpenProcessToken @ 0x1801626A0 (NtOpenProcessToken.c)
 *     __security_check_cookie @ 0x180163D80 (__security_check_cookie.c)
 *     memmove @ 0x1801657C0 (memmove.c)
 *     memset$thunk$772440563353939046 @ 0x180171030 (memset$thunk$772440563353939046.c)
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
  __int64 v54; // r8
  PVOID v55; // r14
  PVOID v56; // rax
  __int64 v57; // r9
  char v58; // bl
  unsigned int v59; // edx
  int v60; // r14d
  unsigned int v61; // edx
  unsigned int v62; // edx
  unsigned int v63; // edx
  __int64 v64; // rcx
  unsigned int v65; // edx
  PVOID v66; // r14
  unsigned int *v67; // rax
  __int16 v68; // cx
  unsigned int v69; // edi
  int v70; // edx
  __int16 v71; // ax
  __int64 v72; // rax
  char *v73; // rax
  unsigned __int8 *v74; // r12
  unsigned int v75; // r13d
  unsigned int v76; // eax
  unsigned int v77; // ecx
  unsigned __int8 *v78; // rcx
  unsigned int v79; // eax
  __int64 v80; // rax
  void *v81; // rax
  __int64 v82; // rax
  unsigned __int8 **Heap; // rdi
  unsigned int v84; // eax
  __int64 v85; // r14
  PVOID v86; // rcx
  int v87; // edi
  unsigned int v88; // eax
  int v89; // eax
  __int64 v90; // r8
  _DWORD *v91; // rax
  __int16 v92; // dx
  __int64 v93; // rcx
  void *v94; // rbx
  unsigned int v95; // edx
  _BYTE *v96; // rcx
  unsigned int v97; // eax
  unsigned int i; // ecx
  __int64 v99; // r8
  __int16 v100; // cx
  __int64 v101; // rcx
  int v102; // eax
  int v103; // ecx
  __int64 v104; // rax
  BOOLEAN v105; // al
  BOOLEAN DominatesTrust; // [rsp+50h] [rbp-B0h] BYREF
  char v107; // [rsp+51h] [rbp-AFh]
  char v108[2]; // [rsp+52h] [rbp-AEh] BYREF
  _DWORD Size[3]; // [rsp+54h] [rbp-ACh]
  __int64 v110; // [rsp+60h] [rbp-A0h] BYREF
  char v111; // [rsp+68h] [rbp-98h]
  char v112; // [rsp+69h] [rbp-97h]
  char v113; // [rsp+6Ah] [rbp-96h]
  char v114; // [rsp+6Bh] [rbp-95h]
  PVOID v115; // [rsp+70h] [rbp-90h]
  PVOID HeapHandle; // [rsp+78h] [rbp-88h]
  PVOID v117; // [rsp+80h] [rbp-80h] BYREF
  char v118; // [rsp+88h] [rbp-78h]
  char v119; // [rsp+89h] [rbp-77h]
  PVOID v120; // [rsp+90h] [rbp-70h] BYREF
  size_t v121; // [rsp+98h] [rbp-68h] BYREF
  void *Src; // [rsp+A0h] [rbp-60h]
  void *v123; // [rsp+A8h] [rbp-58h]
  __int64 v124; // [rsp+B0h] [rbp-50h]
  unsigned int j; // [rsp+B8h] [rbp-48h]
  __int64 v126; // [rsp+C0h] [rbp-40h]
  __int16 v127; // [rsp+C8h] [rbp-38h]
  int v128; // [rsp+CCh] [rbp-34h]
  HANDLE TokenHandle; // [rsp+D0h] [rbp-30h] BYREF
  ULONG ReturnLength; // [rsp+D8h] [rbp-28h] BYREF
  ULONG TokenInformationLength; // [rsp+DCh] [rbp-24h] BYREF
  PVOID BaseAddress; // [rsp+E0h] [rbp-20h] BYREF
  PVOID v133; // [rsp+E8h] [rbp-18h] BYREF
  PVOID v134; // [rsp+F0h] [rbp-10h] BYREF
  PVOID v135; // [rsp+F8h] [rbp-8h]
  PVOID v136; // [rsp+100h] [rbp+0h] BYREF
  __int64 v137; // [rsp+108h] [rbp+8h] BYREF
  PVOID v138; // [rsp+110h] [rbp+10h] BYREF
  PSID v139; // [rsp+118h] [rbp+18h]
  PVOID *v140; // [rsp+120h] [rbp+20h]
  __int128 TokenInformation; // [rsp+128h] [rbp+28h] BYREF
  __int128 v142; // [rsp+138h] [rbp+38h]
  __int128 v143; // [rsp+148h] [rbp+48h]
  __int64 v144; // [rsp+158h] [rbp+58h]
  _DWORD Sid2[12]; // [rsp+160h] [rbp+60h] BYREF

  v8 = a3;
  v140 = a4;
  v10 = *(_WORD *)(a3 + 2);
  v126 = a7;
  v124 = a3;
  v12 = 0LL;
  v115 = a8;
  v13 = 0x8000;
  v108[0] = 0;
  v107 = 0;
  v113 = 0;
  v114 = 0;
  v111 = 0;
  v112 = 0;
  BaseAddress = 0LL;
  v136 = 0LL;
  v137 = 0LL;
  v120 = 0LL;
  v117 = 0LL;
  v133 = 0LL;
  v134 = 0LL;
  v139 = 0LL;
  DominatesTrust = 0;
  LOBYTE(j) = 0;
  LOBYTE(v128) = 0;
  v110 = 0LL;
  v138 = 0LL;
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
  v144 = 0LL;
  v142 = 0LL;
  v135 = 0LL;
  v143 = 0LL;
  ProcessHeap = NtCurrentPeb()->ProcessHeap;
  HeapHandle = ProcessHeap;
  if ( *((__int16 *)v15 + 1) >= 0 )
    return (unsigned int)-1073741593;
  v127 = v10 & 0x80;
  v118 = v127 != 0;
  v19 = a2 & 0x80;
  v20 = a2 & 0x100;
  v119 = (v10 & 0x40) != 0;
  if ( (a2 & 0x10000) != 0 )
  {
    v87 = a2 | 0x1FF;
    v88 = v87 & 0xFFFFFF7F;
    if ( v19 )
      v88 = v87;
    a2 = v88 & 0xFFFFFEFF;
    if ( v20 )
      a2 = v88;
    if ( !v17 && !v14 )
    {
      a2 &= 0xFFFFFE07;
      if ( (v10 & 0x10) != 0 )
      {
        a2 |= 8u;
      }
      else
      {
        v89 = (unsigned __int8)v128;
        if ( (v10 & 0x800) != 0 )
          v89 = 1;
        v128 = v89;
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
  v79 = a2 >> 2;
  LOBYTE(v79) = (a2 & 4) == 0;
  j = v79;
  if ( v10 >= 0 )
  {
    v81 = *(void **)(a3 + 8);
  }
  else
  {
    v80 = *(unsigned int *)(a3 + 4);
    if ( !(_DWORD)v80 )
    {
      Src = 0LL;
      goto LABEL_133;
    }
    v81 = (void *)(a3 + v80);
  }
  Src = v81;
LABEL_133:
  BYTE4(v110) = 1;
  if ( (a5 & 8) == 0 )
  {
    if ( !v115 )
      return (unsigned int)-1073741734;
    LODWORD(v121) = NtQueryInformationToken(v115, 0xAu, &TokenInformation, 0x38u, &ReturnLength);
    DefaultTrustSubjectContext = v121;
    if ( (v121 & 0x80000000) != 0LL )
      return (unsigned int)DefaultTrustSubjectContext;
    if ( SHIDWORD(v142) < 1 && DWORD2(v142) == 2 )
      return (unsigned int)-1073741659;
    if ( !RtlpValidOwnerSubjectContext(v115, Src, v118, (NTSTATUS *)&v121) )
      return (unsigned int)-1073741734;
    v8 = v124;
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
      v82 = *(unsigned int *)(v8 + 8);
      if ( (_DWORD)v82 )
      {
        v26 = (char *)(v8 + v82);
        BYTE5(v110) = 1;
        goto LABEL_15;
      }
      v26 = 0LL;
    }
    BYTE5(v110) = 1;
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
  v123 = v26;
  if ( !v26 || !RtlValidSid(v26) )
    return (unsigned int)-1073741733;
  if ( (a2 & 0x1F8) == 0 )
  {
    v12 = v17;
    v115 = (PVOID)v137;
    *(_QWORD *)&Size[1] = v17;
    v27 = v120;
    goto LABEL_19;
  }
  if ( (a2 & 0x10) != 0 )
  {
    v84 = 0;
    Size[0] = 0;
    do
    {
      if ( *(_QWORD *)&Size[1] )
      {
        v85 = *(_QWORD *)&Size[1] + 8LL;
        for ( i = 0; ; ++i )
        {
          if ( i >= *(unsigned __int16 *)(*(_QWORD *)&Size[1] + 4LL) )
            goto LABEL_152;
          if ( i >= v84 && *(_BYTE *)v85 == 17 )
            break;
          v85 += *(unsigned __int16 *)(v85 + 2);
          v84 = Size[0];
        }
        v22 = (*(_DWORD *)(v85 + 4) & 0xFFFFFFF8) == 0;
        v139 = (PSID)(v85 + 8);
        DominatesTrust = *(_BYTE *)(v85 + 1);
        Size[0] = i;
        if ( !v22 )
          return (unsigned int)-1073740730;
      }
      else
      {
LABEL_152:
        v85 = 0LL;
      }
      if ( v115 )
      {
        LODWORD(v121) = NtQueryInformationToken(v115, 0xAu, &TokenInformation, 0x38u, &ReturnLength);
        DefaultTrustSubjectContext = v121;
        if ( (v121 & 0x80000000) != 0LL )
          return (unsigned int)DefaultTrustSubjectContext;
        if ( DWORD2(v142) == 2 && SHIDWORD(v142) < 1 )
          return (unsigned int)-1073741659;
        v86 = v115;
      }
      else
      {
        LODWORD(v121) = NtOpenProcessToken((HANDLE)0xFFFFFFFFFFFFFFFFLL, 8u, &TokenHandle);
        DefaultTrustSubjectContext = v121;
        if ( (v121 & 0x80000000) != 0LL )
          return (unsigned int)DefaultTrustSubjectContext;
        v86 = TokenHandle;
      }
      if ( !RtlpValidLabelSubjectContext(v86, v139, DominatesTrust, (NTSTATUS *)&v121) )
      {
        NtClose(TokenHandle);
        return (unsigned int)-1073740730;
      }
      NtClose(TokenHandle);
      v84 = ++Size[0];
    }
    while ( v85 );
  }
  DefaultTrustSubjectContext = RtlpGetDefaultTrustSubjectContext(v115);
  if ( DefaultTrustSubjectContext >= 0 )
  {
    v55 = v135;
    v56 = *(PVOID *)v135;
    v115 = *(PVOID *)v135;
    if ( (a2 & 0x80u) == 0 )
    {
      v57 = *(_QWORD *)&Size[1];
      goto LABEL_80;
    }
    if ( !v56 )
    {
LABEL_274:
      DefaultTrustSubjectContext = -1073741790;
      goto LABEL_275;
    }
    v57 = *(_QWORD *)&Size[1];
    v54 = 0LL;
    if ( !*(_QWORD *)&Size[1] )
      goto LABEL_80;
    v94 = v56;
    do
    {
      v95 = *(unsigned __int16 *)(v57 + 4);
      v96 = (_BYTE *)(v57 + 8);
      v97 = 0;
      Size[0] = 0;
      while ( 1 )
      {
        v135 = v96;
        if ( v97 >= v95 )
        {
          v56 = v94;
          goto LABEL_80;
        }
        if ( v97 >= (unsigned int)v54 && *v96 == 20 )
          break;
        Size[0] = v97 + 1;
        v96 += *((unsigned __int16 *)v96 + 1);
        ++v97;
      }
      if ( (*((_DWORD *)v96 + 1) & 0xFF000000) != 0 )
      {
        DefaultTrustSubjectContext = -1073740730;
        RtlFreeHeap(HeapHandle, 0, v55);
        return (unsigned int)DefaultTrustSubjectContext;
      }
      DominatesTrust = 0;
      RtlSidDominatesForTrust(v94, v96 + 8, &DominatesTrust);
      if ( !DominatesTrust )
        goto LABEL_274;
      v57 = *(_QWORD *)&Size[1];
      v54 = (unsigned int)(Size[0] + 1);
    }
    while ( v135 );
    v56 = v94;
LABEL_80:
    if ( (a2 & 0x100) == 0 )
    {
LABEL_81:
      v58 = a5;
      goto LABEL_82;
    }
    DefaultTrustSubjectContext = RtlpValidFilterAclSubjectContext(v57, v56, v54);
    if ( DefaultTrustSubjectContext < 0 )
    {
LABEL_275:
      RtlFreeHeap(HeapHandle, 0, v55);
      return (unsigned int)DefaultTrustSubjectContext;
    }
    v58 = a5;
    if ( (a5 & 2) == 0 )
    {
      DefaultTrustSubjectContext = RtlpValidFilterAclSubjectContext(v17, v115, v99);
      if ( DefaultTrustSubjectContext >= 0 )
        goto LABEL_81;
      goto LABEL_275;
    }
LABEL_82:
    RtlFreeHeap(HeapHandle, 0, v55);
    if ( (a2 & 8) != 0 )
    {
      v59 = *(unsigned __int16 *)(v124 + 2);
      v60 = v58 & 2;
      if ( (v58 & 2) != 0 )
      {
        DefaultTrustSubjectContext = RtlpComputeMergedAcl(
                                       (int)v17,
                                       (*((_WORD *)*a4 + 1) & 0x2800 | (*((unsigned __int16 *)*a4 + 1) >> 1) & 0x18u) >> 1,
                                       Size[1],
                                       (v59 & 0x2800 | (v59 >> 1) & 0x18) >> 1,
                                       (__int64)Src,
                                       (__int64)v123,
                                       v126,
                                       2,
                                       (PVOID *)&v137,
                                       (__int64)&v110);
        if ( DefaultTrustSubjectContext >= 0 )
        {
          v58 = a5;
          v114 = 1;
          v115 = (PVOID)v137;
          v13 = 2 * (v110 & 0x1400 | (2 * (v110 & 8 | 0x2004)));
          goto LABEL_86;
        }
        v115 = (PVOID)v137;
LABEL_57:
        v27 = v120;
LABEL_58:
        v49 = v117;
        v50 = HeapHandle;
        if ( v115 && v114 )
          RtlFreeHeap(HeapHandle, 0, v115);
        if ( v49 && BYTE6(v110) )
          RtlFreeHeap(v50, 0, v49);
        if ( v27 && HIBYTE(v110) )
          RtlFreeHeap(v50, 0, v27);
        if ( v133 && v111 )
          RtlFreeHeap(v50, 0, v133);
        if ( v134 && v112 )
          RtlFreeHeap(v50, 0, v134);
        if ( v12 && v113 )
          RtlFreeHeap(v50, 0, v12);
        if ( v108[0] )
          RtlFreeHeap(v50, 0, v138);
        return (unsigned int)DefaultTrustSubjectContext;
      }
      v115 = *(PVOID *)&Size[1];
      v13 = v59 & 0x2000 | 0x8010;
      if ( (v59 & 0xA00) == 0xA00 )
        v13 = v59 & 0x2000 | 0x8810;
    }
    else
    {
      v115 = v17;
      v60 = v58 & 2;
    }
LABEL_86:
    Size[0] = v13;
    if ( (a2 & 0x20) != 0 )
    {
      v61 = *(unsigned __int16 *)(v124 + 2);
      if ( v60 )
      {
        DefaultTrustSubjectContext = RtlpComputeMergedAcl(
                                       (int)v17,
                                       (*((_WORD *)*a4 + 1) & 0x800 | (*((unsigned __int16 *)*a4 + 1) >> 1) & 0x18u) >> 1,
                                       Size[1],
                                       (v61 & 0x800 | (v61 >> 1) & 0x18) >> 1,
                                       (__int64)Src,
                                       (__int64)v123,
                                       v126,
                                       2,
                                       &v117,
                                       (__int64)&v110);
        if ( DefaultTrustSubjectContext < 0 )
          goto LABEL_57;
        BYTE6(v110) = 1;
        v13 = Size[0] | (2 * (v110 & 0x1400 | (2 * (v110 & 8 | 4))));
      }
      else
      {
        v117 = *(PVOID *)&Size[1];
        v13 |= v61 & 0x2000 | 0x10;
        if ( (v61 & 0xA00) == 0xA00 )
        {
          v13 |= 0x800u;
          v60 = v58 & 2;
        }
      }
    }
    else
    {
      v117 = v17;
    }
    Size[0] = v13;
    if ( (a2 & 0x40) != 0 )
    {
      v62 = *(unsigned __int16 *)(v124 + 2);
      if ( v60 )
      {
        DefaultTrustSubjectContext = RtlpComputeMergedAcl(
                                       (int)v17,
                                       (*((_WORD *)*a4 + 1) & 0x800 | (*((unsigned __int16 *)*a4 + 1) >> 1) & 0x18u) >> 1,
                                       Size[1],
                                       (v62 & 0x800 | (v62 >> 1) & 0x18) >> 1,
                                       (__int64)Src,
                                       (__int64)v123,
                                       v126,
                                       2,
                                       &v120,
                                       (__int64)&v110);
        if ( DefaultTrustSubjectContext < 0 )
          goto LABEL_57;
        HIBYTE(v110) = 1;
        v13 = Size[0] | (2 * (v110 & 0x1400 | (2 * (v110 & 8 | 4))));
      }
      else
      {
        v120 = *(PVOID *)&Size[1];
        v13 |= v62 & 0x2000 | 0x10;
        if ( (v62 & 0xA00) == 0xA00 )
        {
          v13 |= 0x800u;
          v60 = a5 & 2;
        }
      }
    }
    else
    {
      v120 = v17;
    }
    Size[0] = v13;
    if ( (a2 & 0x80u) == 0 )
    {
      v133 = v17;
    }
    else
    {
      v63 = *(unsigned __int16 *)(v124 + 2);
      if ( v60 )
      {
        DefaultTrustSubjectContext = RtlpComputeMergedAcl(
                                       (int)v17,
                                       (*((_WORD *)*a4 + 1) & 0x800 | (*((unsigned __int16 *)*a4 + 1) >> 1) & 0x18u) >> 1,
                                       Size[1],
                                       (v63 & 0x800 | (v63 >> 1) & 0x18) >> 1,
                                       (__int64)Src,
                                       (__int64)v123,
                                       v126,
                                       2,
                                       &v133,
                                       (__int64)&v110);
        if ( DefaultTrustSubjectContext < 0 )
          goto LABEL_57;
        v111 = 1;
        v13 = Size[0] | (2 * (v110 & 0x1400 | (2 * (v110 & 8 | 4))));
      }
      else
      {
        v133 = *(PVOID *)&Size[1];
        v13 |= v63 & 0x2000 | 0x10;
        if ( (v63 & 0xA00) == 0xA00 )
        {
          v13 |= 0x800u;
          v60 = a5 & 2;
        }
      }
    }
    v64 = v124;
    Size[0] = v13;
    if ( (a2 & 0x100) != 0 )
    {
      v65 = *(unsigned __int16 *)(v124 + 2);
      if ( v60 )
      {
        DefaultTrustSubjectContext = RtlpComputeMergedAcl(
                                       (int)v17,
                                       (*((_WORD *)*a4 + 1) & 0x800 | (*((unsigned __int16 *)*a4 + 1) >> 1) & 0x18u) >> 1,
                                       Size[1],
                                       (v65 & 0x800 | (v65 >> 1) & 0x18) >> 1,
                                       (__int64)Src,
                                       (__int64)v123,
                                       v126,
                                       2,
                                       &v134,
                                       (__int64)&v110);
        if ( DefaultTrustSubjectContext < 0 )
          goto LABEL_57;
        v64 = v124;
        v112 = 1;
        LOWORD(v13) = LOWORD(Size[0]) | (2 * (v110 & 0x1400 | (2 * (v110 & 8 | 4))));
      }
      else
      {
        v134 = *(PVOID *)&Size[1];
        LOWORD(v13) = v65 & 0x2000 | 0x10 | v13;
        if ( (v65 & 0xA00) == 0xA00 )
          LOWORD(v13) = v13 | 0x800;
      }
    }
    else
    {
      v134 = v17;
    }
    if ( (a2 & 0x10) != 0 )
    {
      v100 = *(_WORD *)(v64 + 2);
      LOWORD(v13) = v100 & 0x2000 | 0x10 | v13;
      if ( (v100 & 0xA00) == 0xA00 )
        LOWORD(v13) = v13 | 0x800;
    }
    else
    {
      *(_QWORD *)&Size[1] = v17;
    }
    v27 = v120;
    v66 = v115;
    DefaultTrustSubjectContext = RtlpCombineAcls(
                                   (_DWORD)v115,
                                   Size[1],
                                   (_DWORD)v117,
                                   (_DWORD)v120,
                                   (__int64)v133,
                                   (__int64)v134,
                                   (__int64)&v136,
                                   0LL);
    if ( DefaultTrustSubjectContext < 0 )
      goto LABEL_58;
    v12 = (unsigned __int16 *)v136;
    *(_QWORD *)&Size[1] = v136;
    if ( v66 || !v136 )
    {
      ProcessHeap = HeapHandle;
    }
    else
    {
      ProcessHeap = HeapHandle;
      if ( !*((_WORD *)v136 + 2) )
      {
        RtlFreeHeap(HeapHandle, 0, v136);
        v12 = 0LL;
        v113 = 1;
        *(_QWORD *)&Size[1] = 0LL;
        v136 = 0LL;
LABEL_19:
        if ( (a2 & 4) != 0 )
        {
          v28 = *(_WORD *)(v124 + 2);
          if ( (a5 & 1) != 0 )
          {
            if ( (v28 & 4) != 0 )
            {
              if ( v28 < 0 )
              {
                v102 = *(_DWORD *)(v124 + 16);
                if ( v102 )
                  LODWORD(v90) = v124 + v102;
                else
                  LODWORD(v90) = 0;
              }
              else
              {
                v90 = *(_QWORD *)(v124 + 32);
              }
            }
            else
            {
              LODWORD(v90) = 0;
            }
            v91 = *a4;
            v92 = *((_WORD *)*a4 + 1);
            if ( (v92 & 4) != 0 )
            {
              if ( v92 < 0 )
              {
                v103 = v91[4];
                if ( v103 )
                  LODWORD(v93) = (_DWORD)v91 + v103;
                else
                  LODWORD(v93) = 0;
              }
              else
              {
                v93 = *((_QWORD *)v91 + 4);
              }
            }
            else
            {
              LODWORD(v93) = 0;
            }
            DefaultTrustSubjectContext = RtlpComputeMergedAcl(
                                           v93,
                                           v92 & 0x140C,
                                           v90,
                                           *(_WORD *)(v124 + 2) & 0x140C,
                                           (__int64)Src,
                                           (__int64)v123,
                                           v126,
                                           1,
                                           &BaseAddress,
                                           (__int64)&v110);
            if ( DefaultTrustSubjectContext < 0 )
              goto LABEL_58;
            v29 = (unsigned __int16 *)BaseAddress;
            v107 = 1;
            LOWORD(v13) = v110 & 0x1408 | 4 | v13;
          }
          else
          {
            if ( (v28 & 4) != 0 )
            {
              if ( v28 < 0 )
              {
                v104 = *(unsigned int *)(v124 + 16);
                if ( (_DWORD)v104 )
                  v29 = (unsigned __int16 *)(v124 + v104);
                else
                  v29 = 0LL;
              }
              else
              {
                v29 = *(unsigned __int16 **)(v124 + 32);
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
          if ( v127 )
          {
            TokenInformationLength = 76;
            Heap = (unsigned __int8 **)RtlAllocateHeap(ProcessHeap, NtdllBaseTag + 1310720, 0x4CuLL);
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
            DefaultTrustSubjectContext = RtlpCreateServerAcl((__int64)v29, v119, *Heap, (ACL **)&v138, v108);
            RtlFreeHeap(ProcessHeap, 0, Heap);
            if ( DefaultTrustSubjectContext < 0 )
              goto LABEL_55;
            if ( v108[0] )
            {
              if ( v107 )
                RtlFreeHeap(ProcessHeap, 0, BaseAddress);
              BaseAddress = v138;
              v108[0] = 0;
              v107 = 1;
            }
            v29 = (unsigned __int16 *)v138;
          }
        }
        else
        {
          v67 = (unsigned int *)*a4;
          v68 = *((_WORD *)*a4 + 1);
          if ( (v68 & 4) != 0 )
          {
            if ( v68 < 0 )
            {
              v101 = v67[4];
              if ( (_DWORD)v101 )
                v29 = (unsigned __int16 *)((char *)v67 + v101);
              else
                v29 = 0LL;
            }
            else
            {
              v29 = (unsigned __int16 *)*((_QWORD *)v67 + 4);
            }
          }
          else
          {
            v29 = 0LL;
          }
        }
        v31 = 4 * *((unsigned __int8 *)Src + 1) + 8;
        Size[0] = v31;
        v32 = 4 * *((unsigned __int8 *)v123 + 1) + 8;
        LODWORD(v121) = v32;
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
          if ( (_BYTE)v128 )
            LOWORD(v13) = v13 | 0x800;
          v37 = v124;
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
            RtlpNormalizeAcl(v40, *(_QWORD *)&Size[1], v126);
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
            RtlpApplyAclToObject(v35 + 20, v126);
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
          v43 = v140;
          if ( (v13 & 0x10) == 0 )
            *((_WORD *)v35 + 1) |= *((_WORD *)*v140 + 1) & 0x2830;
          if ( v29 )
          {
            memmove(v36, v29, v29[1]);
            RtlpApplyAclToObject(v36, v126);
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
              v69 = 0;
              Sid2[1] = 50331648;
              v70 = 4089359;
              Sid2[2] = 4;
LABEL_117:
              v71 = *((_WORD *)v35 + 1);
              if ( (v71 & 4) != 0 )
              {
                if ( v71 >= 0 )
                {
                  v73 = (char *)*((_QWORD *)v35 + 4);
LABEL_121:
                  if ( v73 )
                  {
                    v74 = (unsigned __int8 *)(v73 + 8);
                    v75 = 0;
                    v76 = *((unsigned __int16 *)v73 + 2);
                    for ( j = v76; ; v76 = j )
                    {
                      if ( v75 >= v76 )
                        goto LABEL_47;
                      v77 = *v74;
                      if ( (unsigned __int8)v77 <= 0x15u && _bittest(&v70, v77) )
                      {
                        v78 = v74 + 8;
                      }
                      else if ( (_BYTE)v77 == 4 )
                      {
                        v78 = v74 + 12;
                      }
                      else
                      {
                        if ( (unsigned __int8)(v77 - 5) > 3u
                          && (unsigned __int8)(v77 - 11) > 1u
                          && (unsigned __int8)(v77 - 15) > 1u )
                        {
                          goto LABEL_292;
                        }
                        v78 = &v74[16 * (*((_DWORD *)v74 + 2) & 1) + ((8LL * (*((_DWORD *)v74 + 2) & 2)) | 0xC)];
                      }
                      if ( v78 )
                      {
                        if ( v75 >= v69 )
                        {
                          v105 = RtlEqualSid(v78, Sid2);
                          v70 = 4089359;
                          if ( v105 )
                          {
                            v69 = v75 + 1;
                            v74[1] = v74[1] & 0xF4 | 8;
                            goto LABEL_117;
                          }
                        }
                      }
LABEL_292:
                      ++v75;
                      v74 += *((unsigned __int16 *)v74 + 1);
                    }
                  }
                  goto LABEL_47;
                }
                v72 = *((unsigned int *)v35 + 4);
                if ( (_DWORD)v72 )
                {
                  v73 = &v35[v72];
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
          v22 = BYTE4(v110) == 0;
          *((_DWORD *)v35 + 1) = v47 - (_DWORD)v35;
          if ( v22 )
            *((_WORD *)v35 + 1) |= *((_WORD *)*v43 + 1) & 1;
          memmove(v48, v123, (unsigned int)v121);
          v22 = BYTE5(v110) == 0;
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
        if ( v107 )
          RtlFreeHeap(ProcessHeap, 0, BaseAddress);
        goto LABEL_57;
      }
    }
    v113 = 1;
    goto LABEL_19;
  }
  return (unsigned int)DefaultTrustSubjectContext;
}
