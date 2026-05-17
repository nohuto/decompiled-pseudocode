/*
 * XREFs of RtlpSetSecurityObject @ 0x1800C6F30
 * Callers:
 *     RtlSetSecurityObjectEx @ 0x1800C6720 (RtlSetSecurityObjectEx.c)
 *     RtlSetSecurityObject @ 0x1800C6EF0 (RtlSetSecurityObject.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180011260 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x1800269F0 (RtlFreeHeap.c)
 *     RtlValidSid @ 0x180039220 (RtlValidSid.c)
 *     RtlpValidOwnerSubjectContext @ 0x1800C6760 (RtlpValidOwnerSubjectContext.c)
 *     RtlpCreateServerAcl @ 0x1800C69DC (RtlpCreateServerAcl.c)
 *     RtlpComputeMergedAcl @ 0x1800C6C64 (RtlpComputeMergedAcl.c)
 *     RtlpValidLabelSubjectContext @ 0x1800C6DA4 (RtlpValidLabelSubjectContext.c)
 *     RtlpApplyAclToObject @ 0x1800C8430 (RtlpApplyAclToObject.c)
 *     RtlpNormalizeAcl @ 0x1800C84D4 (RtlpNormalizeAcl.c)
 *     RtlSidDominatesForTrust @ 0x1800C87B0 (RtlSidDominatesForTrust.c)
 *     RtlpGetDefaultTrustSubjectContext @ 0x1800C90B0 (RtlpGetDefaultTrustSubjectContext.c)
 *     RtlpValidFilterAclSubjectContext @ 0x1800CAF40 (RtlpValidFilterAclSubjectContext.c)
 *     RtlpCombineAcls @ 0x1800CB040 (RtlpCombineAcls.c)
 *     RtlEqualSid @ 0x1800CE210 (RtlEqualSid.c)
 *     NtClose @ 0x180161E70 (NtClose.c)
 *     NtQueryInformationToken @ 0x1801620B0 (NtQueryInformationToken.c)
 *     NtOpenProcessToken @ 0x1801642E0 (NtOpenProcessToken.c)
 *     __security_check_cookie @ 0x1801659C0 (__security_check_cookie.c)
 *     memmove @ 0x180167400 (memmove.c)
 *     memset$thunk$772440563353939046 @ 0x180172030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlpSetSecurityObject(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        unsigned __int64 *a4,
        __int16 a5,
        int a6,
        __int64 a7,
        void *a8)
{
  __int64 v8; // rbx
  __int16 v10; // dx
  unsigned __int64 v12; // r15
  int v13; // r13d
  __int64 v14; // r11
  unsigned __int64 v15; // rcx
  __int16 v16; // ax
  void *v17; // rsi
  void *ProcessHeap; // r14
  int v19; // r9d
  int v20; // r10d
  __int64 v21; // rax
  bool v22; // zf
  _BYTE *v23; // rax
  unsigned __int64 v24; // rax
  __int64 v25; // rcx
  _BYTE *v26; // rcx
  unsigned __int64 v27; // rsi
  __int16 v28; // cx
  unsigned __int16 *v29; // r12
  int DefaultTrustSubjectContext; // ebx
  int v31; // ecx
  int v32; // r8d
  unsigned int v33; // edi
  unsigned int v34; // r14d
  __int64 v35; // rbx
  unsigned __int16 *v36; // rsi
  __int64 v37; // rax
  __int16 v38; // cx
  __int64 v39; // r15
  void *v40; // rcx
  __int64 v41; // rdx
  int v42; // r15d
  unsigned __int64 *v43; // r15
  __int64 v44; // rcx
  __int64 v45; // rdi
  char *v46; // rsi
  int v47; // eax
  char *v48; // rsi
  unsigned __int64 v49; // r14
  __int64 v50; // rdi
  __int64 v52; // rax
  __int64 v53; // rax
  __int64 v54; // r8
  unsigned __int64 v55; // r14
  void *v56; // rax
  __int64 v57; // r9
  char v58; // bl
  unsigned int v59; // edx
  int v60; // r14d
  unsigned int v61; // edx
  unsigned int v62; // edx
  unsigned int v63; // edx
  __int64 v64; // rcx
  unsigned int v65; // edx
  void *v66; // r14
  unsigned __int64 v67; // rax
  __int16 v68; // cx
  unsigned int v69; // edi
  int v70; // edx
  __int16 v71; // ax
  __int64 v72; // rax
  __int64 v73; // rax
  unsigned __int8 *v74; // r12
  unsigned int v75; // r13d
  unsigned int v76; // eax
  unsigned int v77; // ecx
  __int64 v78; // rcx
  unsigned int v79; // eax
  __int64 v80; // rax
  void *v81; // rax
  __int64 v82; // rax
  unsigned __int8 **Heap; // rdi
  unsigned int v84; // eax
  __int64 v85; // r14
  HANDLE v86; // rcx
  int v87; // edi
  unsigned int v88; // eax
  int v89; // eax
  __int64 v90; // r8
  unsigned __int64 v91; // rax
  __int16 v92; // dx
  __int64 v93; // rcx
  void *v94; // rbx
  unsigned int v95; // edx
  __int64 v96; // rcx
  unsigned int v97; // eax
  unsigned int i; // ecx
  __int64 v99; // r8
  __int16 v100; // cx
  __int64 v101; // rcx
  int v102; // eax
  int v103; // ecx
  __int64 v104; // rax
  char v105; // al
  char v106; // [rsp+50h] [rbp-B0h] BYREF
  char v107; // [rsp+51h] [rbp-AFh]
  char v108[2]; // [rsp+52h] [rbp-AEh] BYREF
  _DWORD Size[3]; // [rsp+54h] [rbp-ACh]
  int v110; // [rsp+60h] [rbp-A0h] BYREF
  char v111; // [rsp+64h] [rbp-9Ch]
  char v112; // [rsp+65h] [rbp-9Bh]
  char v113; // [rsp+66h] [rbp-9Ah]
  char v114; // [rsp+67h] [rbp-99h]
  char v115; // [rsp+68h] [rbp-98h]
  char v116; // [rsp+69h] [rbp-97h]
  char v117; // [rsp+6Ah] [rbp-96h]
  char v118; // [rsp+6Bh] [rbp-95h]
  void *v119; // [rsp+70h] [rbp-90h]
  void *v120; // [rsp+78h] [rbp-88h]
  unsigned __int64 v121; // [rsp+80h] [rbp-80h] BYREF
  char v122; // [rsp+88h] [rbp-78h]
  char v123; // [rsp+89h] [rbp-77h]
  unsigned __int64 v124; // [rsp+90h] [rbp-70h] BYREF
  size_t v125; // [rsp+98h] [rbp-68h] BYREF
  void *Src; // [rsp+A0h] [rbp-60h]
  void *v127; // [rsp+A8h] [rbp-58h]
  __int64 v128; // [rsp+B0h] [rbp-50h]
  unsigned int j; // [rsp+B8h] [rbp-48h]
  __int64 v130; // [rsp+C0h] [rbp-40h]
  __int16 v131; // [rsp+C8h] [rbp-38h]
  int v132; // [rsp+CCh] [rbp-34h]
  HANDLE Handle; // [rsp+D0h] [rbp-30h] BYREF
  int v134; // [rsp+D8h] [rbp-28h] BYREF
  unsigned int v135; // [rsp+DCh] [rbp-24h] BYREF
  unsigned __int16 *v136; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v137; // [rsp+E8h] [rbp-18h] BYREF
  __int64 v138; // [rsp+F0h] [rbp-10h] BYREF
  void **v139; // [rsp+F8h] [rbp-8h] BYREF
  unsigned __int64 v140; // [rsp+100h] [rbp+0h] BYREF
  void *v141; // [rsp+108h] [rbp+8h] BYREF
  unsigned __int64 v142; // [rsp+110h] [rbp+10h] BYREF
  _DWORD *v143; // [rsp+118h] [rbp+18h]
  unsigned __int64 *v144; // [rsp+120h] [rbp+20h]
  __int128 v145; // [rsp+128h] [rbp+28h] BYREF
  __int128 v146; // [rsp+138h] [rbp+38h]
  __int128 v147; // [rsp+148h] [rbp+48h]
  __int64 v148; // [rsp+158h] [rbp+58h]
  _DWORD v149[12]; // [rsp+160h] [rbp+60h] BYREF

  v8 = a3;
  v144 = a4;
  v10 = *(_WORD *)(a3 + 2);
  v130 = a7;
  v128 = a3;
  v12 = 0LL;
  v119 = a8;
  v13 = 0x8000;
  v112 = 0;
  v111 = 0;
  v108[0] = 0;
  v107 = 0;
  v117 = 0;
  v118 = 0;
  v113 = 0;
  v114 = 0;
  v115 = 0;
  v116 = 0;
  v136 = 0LL;
  v140 = 0LL;
  v141 = 0LL;
  v124 = 0LL;
  v121 = 0LL;
  v137 = 0LL;
  v138 = 0LL;
  v143 = 0LL;
  v106 = 0;
  LOBYTE(j) = 0;
  LOBYTE(v132) = 0;
  v110 = 0;
  v142 = 0LL;
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
  v15 = *a4;
  *(_QWORD *)&Size[1] = v14;
  v16 = *(_WORD *)(v15 + 2);
  if ( (v16 & 0x10) != 0 )
  {
    if ( v16 >= 0 )
    {
      v17 = *(void **)(v15 + 24);
    }
    else
    {
      v52 = *(unsigned int *)(v15 + 12);
      if ( (_DWORD)v52 )
        v17 = (void *)(v15 + v52);
      else
        v17 = 0LL;
    }
  }
  else
  {
    v17 = 0LL;
  }
  v134 = 0;
  Handle = 0LL;
  v145 = 0LL;
  v148 = 0LL;
  v146 = 0LL;
  v139 = 0LL;
  v147 = 0LL;
  ProcessHeap = NtCurrentPeb()->ProcessHeap;
  v120 = ProcessHeap;
  if ( *(__int16 *)(v15 + 2) >= 0 )
    return (unsigned int)-1073741593;
  v131 = v10 & 0x80;
  v122 = v131 != 0;
  v19 = a2 & 0x80;
  v20 = a2 & 0x100;
  v123 = (v10 & 0x40) != 0;
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
        v89 = (unsigned __int8)v132;
        if ( (v10 & 0x800) != 0 )
          v89 = 1;
        v132 = v89;
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
  v111 = 1;
  if ( (a5 & 8) == 0 )
  {
    if ( !v119 )
      return (unsigned int)-1073741734;
    LODWORD(v125) = NtQueryInformationToken(v119, 10LL, &v145, 56LL, &v134);
    DefaultTrustSubjectContext = v125;
    if ( (v125 & 0x80000000) != 0LL )
      return (unsigned int)DefaultTrustSubjectContext;
    if ( SHIDWORD(v146) < 1 && DWORD2(v146) == 2 )
      return (unsigned int)-1073741659;
    if ( !RtlpValidOwnerSubjectContext(v119, (__int64)Src, v122, (int *)&v125) )
      return (unsigned int)-1073741734;
    v8 = v128;
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
      v82 = *(unsigned int *)(v8 + 8);
      if ( (_DWORD)v82 )
      {
        v26 = (_BYTE *)(v8 + v82);
        v112 = 1;
        goto LABEL_15;
      }
      v26 = 0LL;
    }
    v112 = 1;
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
  v127 = v26;
  if ( !v26 || !RtlValidSid(v26) )
    return (unsigned int)-1073741733;
  if ( (a2 & 0x1F8) == 0 )
  {
    v12 = (unsigned __int64)v17;
    v119 = v141;
    *(_QWORD *)&Size[1] = v17;
    v27 = v124;
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
        v143 = (_DWORD *)(v85 + 8);
        v106 = *(_BYTE *)(v85 + 1);
        Size[0] = i;
        if ( !v22 )
          return (unsigned int)-1073740730;
      }
      else
      {
LABEL_152:
        v85 = 0LL;
      }
      if ( v119 )
      {
        LODWORD(v125) = NtQueryInformationToken(v119, 10LL, &v145, 56LL, &v134);
        DefaultTrustSubjectContext = v125;
        if ( (v125 & 0x80000000) != 0LL )
          return (unsigned int)DefaultTrustSubjectContext;
        if ( DWORD2(v146) == 2 && SHIDWORD(v146) < 1 )
          return (unsigned int)-1073741659;
        v86 = v119;
      }
      else
      {
        LODWORD(v125) = NtOpenProcessToken(-1LL, 8LL, &Handle);
        DefaultTrustSubjectContext = v125;
        if ( (v125 & 0x80000000) != 0LL )
          return (unsigned int)DefaultTrustSubjectContext;
        v86 = Handle;
      }
      if ( !RtlpValidLabelSubjectContext((__int64)v86, v143, v106, (int *)&v125) )
      {
        NtClose(Handle);
        return (unsigned int)-1073740730;
      }
      NtClose(Handle);
      v84 = ++Size[0];
    }
    while ( v85 );
  }
  DefaultTrustSubjectContext = RtlpGetDefaultTrustSubjectContext(v119, &v139);
  if ( DefaultTrustSubjectContext >= 0 )
  {
    v55 = (unsigned __int64)v139;
    v56 = *v139;
    v119 = *v139;
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
      v96 = v57 + 8;
      v97 = 0;
      Size[0] = 0;
      while ( 1 )
      {
        v139 = (void **)v96;
        if ( v97 >= v95 )
        {
          v56 = v94;
          goto LABEL_80;
        }
        if ( v97 >= (unsigned int)v54 && *(_BYTE *)v96 == 20 )
          break;
        Size[0] = v97 + 1;
        v96 += *(unsigned __int16 *)(v96 + 2);
        ++v97;
      }
      if ( (*(_DWORD *)(v96 + 4) & 0xFF000000) != 0 )
      {
        DefaultTrustSubjectContext = -1073740730;
        RtlFreeHeap((__int64)v120, 0, v55);
        return (unsigned int)DefaultTrustSubjectContext;
      }
      v106 = 0;
      RtlSidDominatesForTrust(v94, v96 + 8, &v106);
      if ( !v106 )
        goto LABEL_274;
      v57 = *(_QWORD *)&Size[1];
      v54 = (unsigned int)(Size[0] + 1);
    }
    while ( v139 );
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
      RtlFreeHeap((__int64)v120, 0, v55);
      return (unsigned int)DefaultTrustSubjectContext;
    }
    v58 = a5;
    if ( (a5 & 2) == 0 )
    {
      DefaultTrustSubjectContext = RtlpValidFilterAclSubjectContext(v17, v119, v99);
      if ( DefaultTrustSubjectContext >= 0 )
        goto LABEL_81;
      goto LABEL_275;
    }
LABEL_82:
    RtlFreeHeap((__int64)v120, 0, v55);
    if ( (a2 & 8) != 0 )
    {
      v59 = *(unsigned __int16 *)(v128 + 2);
      v60 = v58 & 2;
      if ( (v58 & 2) != 0 )
      {
        DefaultTrustSubjectContext = RtlpComputeMergedAcl(
                                       (int)v17,
                                       (*(_WORD *)(*a4 + 2) & 0x2800 | (*(unsigned __int16 *)(*a4 + 2) >> 1) & 0x18u) >> 1,
                                       Size[1],
                                       (v59 & 0x2800 | (v59 >> 1) & 0x18) >> 1,
                                       (__int64)Src,
                                       (__int64)v127,
                                       v130,
                                       2,
                                       (unsigned __int64 *)&v141,
                                       (__int64)&v110);
        if ( DefaultTrustSubjectContext >= 0 )
        {
          v58 = a5;
          v118 = 1;
          v119 = v141;
          v13 = 2 * (v110 & 0x1400 | (2 * (v110 & 8 | 0x2004)));
          goto LABEL_86;
        }
        v119 = v141;
LABEL_57:
        v27 = v124;
LABEL_58:
        v49 = v121;
        v50 = (__int64)v120;
        if ( v119 && v118 )
          RtlFreeHeap((__int64)v120, 0, (unsigned __int64)v119);
        if ( v49 && v113 )
          RtlFreeHeap(v50, 0, v49);
        if ( v27 && v114 )
          RtlFreeHeap(v50, 0, v27);
        if ( v137 && v115 )
          RtlFreeHeap(v50, 0, v137);
        if ( v138 && v116 )
          RtlFreeHeap(v50, 0, v138);
        if ( v12 && v117 )
          RtlFreeHeap(v50, 0, v12);
        if ( v108[0] )
          RtlFreeHeap(v50, 0, v142);
        return (unsigned int)DefaultTrustSubjectContext;
      }
      v119 = *(void **)&Size[1];
      v13 = v59 & 0x2000 | 0x8010;
      if ( (v59 & 0xA00) == 0xA00 )
        v13 = v59 & 0x2000 | 0x8810;
    }
    else
    {
      v119 = v17;
      v60 = v58 & 2;
    }
LABEL_86:
    Size[0] = v13;
    if ( (a2 & 0x20) != 0 )
    {
      v61 = *(unsigned __int16 *)(v128 + 2);
      if ( v60 )
      {
        DefaultTrustSubjectContext = RtlpComputeMergedAcl(
                                       (int)v17,
                                       (*(_WORD *)(*a4 + 2) & 0x800 | (*(unsigned __int16 *)(*a4 + 2) >> 1) & 0x18u) >> 1,
                                       Size[1],
                                       (v61 & 0x800 | (v61 >> 1) & 0x18) >> 1,
                                       (__int64)Src,
                                       (__int64)v127,
                                       v130,
                                       2,
                                       &v121,
                                       (__int64)&v110);
        if ( DefaultTrustSubjectContext < 0 )
          goto LABEL_57;
        v113 = 1;
        v13 = Size[0] | (2 * (v110 & 0x1400 | (2 * (v110 & 8 | 4))));
      }
      else
      {
        v121 = *(_QWORD *)&Size[1];
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
      v121 = (unsigned __int64)v17;
    }
    Size[0] = v13;
    if ( (a2 & 0x40) != 0 )
    {
      v62 = *(unsigned __int16 *)(v128 + 2);
      if ( v60 )
      {
        DefaultTrustSubjectContext = RtlpComputeMergedAcl(
                                       (int)v17,
                                       (*(_WORD *)(*a4 + 2) & 0x800 | (*(unsigned __int16 *)(*a4 + 2) >> 1) & 0x18u) >> 1,
                                       Size[1],
                                       (v62 & 0x800 | (v62 >> 1) & 0x18) >> 1,
                                       (__int64)Src,
                                       (__int64)v127,
                                       v130,
                                       2,
                                       &v124,
                                       (__int64)&v110);
        if ( DefaultTrustSubjectContext < 0 )
          goto LABEL_57;
        v114 = 1;
        v13 = Size[0] | (2 * (v110 & 0x1400 | (2 * (v110 & 8 | 4))));
      }
      else
      {
        v124 = *(_QWORD *)&Size[1];
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
      v124 = (unsigned __int64)v17;
    }
    Size[0] = v13;
    if ( (a2 & 0x80u) == 0 )
    {
      v137 = (__int64)v17;
    }
    else
    {
      v63 = *(unsigned __int16 *)(v128 + 2);
      if ( v60 )
      {
        DefaultTrustSubjectContext = RtlpComputeMergedAcl(
                                       (int)v17,
                                       (*(_WORD *)(*a4 + 2) & 0x800 | (*(unsigned __int16 *)(*a4 + 2) >> 1) & 0x18u) >> 1,
                                       Size[1],
                                       (v63 & 0x800 | (v63 >> 1) & 0x18) >> 1,
                                       (__int64)Src,
                                       (__int64)v127,
                                       v130,
                                       2,
                                       (unsigned __int64 *)&v137,
                                       (__int64)&v110);
        if ( DefaultTrustSubjectContext < 0 )
          goto LABEL_57;
        v115 = 1;
        v13 = Size[0] | (2 * (v110 & 0x1400 | (2 * (v110 & 8 | 4))));
      }
      else
      {
        v137 = *(_QWORD *)&Size[1];
        v13 |= v63 & 0x2000 | 0x10;
        if ( (v63 & 0xA00) == 0xA00 )
        {
          v13 |= 0x800u;
          v60 = a5 & 2;
        }
      }
    }
    v64 = v128;
    Size[0] = v13;
    if ( (a2 & 0x100) != 0 )
    {
      v65 = *(unsigned __int16 *)(v128 + 2);
      if ( v60 )
      {
        DefaultTrustSubjectContext = RtlpComputeMergedAcl(
                                       (int)v17,
                                       (*(_WORD *)(*a4 + 2) & 0x800 | (*(unsigned __int16 *)(*a4 + 2) >> 1) & 0x18u) >> 1,
                                       Size[1],
                                       (v65 & 0x800 | (v65 >> 1) & 0x18) >> 1,
                                       (__int64)Src,
                                       (__int64)v127,
                                       v130,
                                       2,
                                       (unsigned __int64 *)&v138,
                                       (__int64)&v110);
        if ( DefaultTrustSubjectContext < 0 )
          goto LABEL_57;
        v64 = v128;
        v116 = 1;
        LOWORD(v13) = LOWORD(Size[0]) | (2 * (v110 & 0x1400 | (2 * (v110 & 8 | 4))));
      }
      else
      {
        v138 = *(_QWORD *)&Size[1];
        LOWORD(v13) = v65 & 0x2000 | 0x10 | v13;
        if ( (v65 & 0xA00) == 0xA00 )
          LOWORD(v13) = v13 | 0x800;
      }
    }
    else
    {
      v138 = (__int64)v17;
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
    v27 = v124;
    v66 = v119;
    DefaultTrustSubjectContext = RtlpCombineAcls((_DWORD)v119, Size[1], v121, v124, v137, v138, (__int64)&v140, 0LL);
    if ( DefaultTrustSubjectContext < 0 )
      goto LABEL_58;
    v12 = v140;
    *(_QWORD *)&Size[1] = v140;
    if ( v66 || !v140 )
    {
      ProcessHeap = v120;
    }
    else
    {
      ProcessHeap = v120;
      if ( !*(_WORD *)(v140 + 4) )
      {
        RtlFreeHeap((__int64)v120, 0, v140);
        v12 = 0LL;
        v117 = 1;
        *(_QWORD *)&Size[1] = 0LL;
        v140 = 0LL;
LABEL_19:
        if ( (a2 & 4) != 0 )
        {
          v28 = *(_WORD *)(v128 + 2);
          if ( (a5 & 1) != 0 )
          {
            if ( (v28 & 4) != 0 )
            {
              if ( v28 < 0 )
              {
                v102 = *(_DWORD *)(v128 + 16);
                if ( v102 )
                  LODWORD(v90) = v128 + v102;
                else
                  LODWORD(v90) = 0;
              }
              else
              {
                v90 = *(_QWORD *)(v128 + 32);
              }
            }
            else
            {
              LODWORD(v90) = 0;
            }
            v91 = *a4;
            v92 = *(_WORD *)(*a4 + 2);
            if ( (v92 & 4) != 0 )
            {
              if ( v92 < 0 )
              {
                v103 = *(_DWORD *)(v91 + 16);
                if ( v103 )
                  LODWORD(v93) = v91 + v103;
                else
                  LODWORD(v93) = 0;
              }
              else
              {
                v93 = *(_QWORD *)(v91 + 32);
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
                                           *(_WORD *)(v128 + 2) & 0x140C,
                                           (__int64)Src,
                                           (__int64)v127,
                                           v130,
                                           1,
                                           (unsigned __int64 *)&v136,
                                           (__int64)&v110);
            if ( DefaultTrustSubjectContext < 0 )
              goto LABEL_58;
            v29 = v136;
            v107 = 1;
            LOWORD(v13) = v110 & 0x1408 | 4 | v13;
          }
          else
          {
            if ( (v28 & 4) != 0 )
            {
              if ( v28 < 0 )
              {
                v104 = *(unsigned int *)(v128 + 16);
                if ( (_DWORD)v104 )
                  v29 = (unsigned __int16 *)(v128 + v104);
                else
                  v29 = 0LL;
              }
              else
              {
                v29 = *(unsigned __int16 **)(v128 + 32);
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
          if ( v131 )
          {
            v135 = 76;
            Heap = (unsigned __int8 **)RtlAllocateHeap((__int64)ProcessHeap, NtdllBaseTag + 1310720, 0x4CuLL);
            if ( !Heap )
            {
              DefaultTrustSubjectContext = -1073741801;
              goto LABEL_55;
            }
            DefaultTrustSubjectContext = NtOpenProcessToken(-1LL, 8LL, &Handle);
            if ( DefaultTrustSubjectContext < 0
              || (DefaultTrustSubjectContext = NtQueryInformationToken(Handle, 4LL, Heap, v135, &v135),
                  NtClose(Handle),
                  DefaultTrustSubjectContext < 0) )
            {
              RtlFreeHeap((__int64)ProcessHeap, 0, (unsigned __int64)Heap);
              goto LABEL_55;
            }
            DefaultTrustSubjectContext = RtlpCreateServerAcl((__int64)v29, v123, *Heap, (__int64 *)&v142, v108);
            RtlFreeHeap((__int64)ProcessHeap, 0, (unsigned __int64)Heap);
            if ( DefaultTrustSubjectContext < 0 )
              goto LABEL_55;
            if ( v108[0] )
            {
              if ( v107 )
                RtlFreeHeap((__int64)ProcessHeap, 0, (unsigned __int64)v136);
              v136 = (unsigned __int16 *)v142;
              v108[0] = 0;
              v107 = 1;
            }
            v29 = (unsigned __int16 *)v142;
          }
        }
        else
        {
          v67 = *a4;
          v68 = *(_WORD *)(*a4 + 2);
          if ( (v68 & 4) != 0 )
          {
            if ( v68 < 0 )
            {
              v101 = *(unsigned int *)(v67 + 16);
              if ( (_DWORD)v101 )
                v29 = (unsigned __int16 *)(v67 + v101);
              else
                v29 = 0LL;
            }
            else
            {
              v29 = *(unsigned __int16 **)(v67 + 32);
            }
          }
          else
          {
            v29 = 0LL;
          }
        }
        v31 = 4 * *((unsigned __int8 *)Src + 1) + 8;
        Size[0] = v31;
        v32 = 4 * *((unsigned __int8 *)v127 + 1) + 8;
        LODWORD(v125) = v32;
        if ( v12 )
          v33 = (*(unsigned __int16 *)(v12 + 2) + 3) & 0xFFFFFFFC;
        else
          v33 = 0;
        if ( v29 )
          v34 = (v29[1] + 3) & 0xFFFFFFFC;
        else
          v34 = 0;
        v35 = RtlAllocateHeap((__int64)v120, NtdllBaseTag + 1310720, v31 + 20 + v34 + v33 + v32);
        if ( v35 )
        {
          v36 = (unsigned __int16 *)(v35 + 20);
          *(_OWORD *)v35 = 0LL;
          *(_DWORD *)(v35 + 16) = 0;
          *(_BYTE *)v35 = 1;
          if ( (_BYTE)v132 )
            LOWORD(v13) = v13 | 0x800;
          v37 = v128;
          v38 = *(_WORD *)(v35 + 2) | v13;
          *(_WORD *)(v35 + 2) = v38;
          if ( (*(_WORD *)(v37 + 2) & 0x4000) != 0 )
          {
            *(_BYTE *)(v35 + 1) = *(_BYTE *)(v37 + 1);
            *(_WORD *)(v35 + 2) = v38 | 0x4000;
          }
          if ( !v12 )
            goto LABEL_114;
          v39 = v35 + 20;
          v40 = (void *)(v35 + 20);
          if ( (a5 & 0x4000) != 0 )
          {
            RtlpNormalizeAcl(v40, *(_QWORD *)&Size[1], v130);
            if ( *(_WORD *)(v35 + 24) )
            {
              v33 = *(unsigned __int16 *)(v35 + 22);
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
            RtlpApplyAclToObject(v35 + 20, v130);
            v41 = *(unsigned __int16 *)(*(_QWORD *)&Size[1] + 2LL);
            if ( v33 > (unsigned int)v41 )
              memset_thunk_772440563353939046((char *)v36 + v41, 0, v33 - (unsigned int)v41);
          }
          if ( v39 )
          {
            v36 = (unsigned __int16 *)((char *)v36 + v33);
            v42 = v39 - v35;
          }
          else
          {
LABEL_114:
            v42 = 0;
          }
          *(_DWORD *)(v35 + 12) = v42;
          v43 = v144;
          if ( (v13 & 0x10) == 0 )
            *(_WORD *)(v35 + 2) |= *(_WORD *)(*v144 + 2) & 0x2830;
          if ( v29 )
          {
            memmove(v36, v29, v29[1]);
            RtlpApplyAclToObject(v36, v130);
            *(_DWORD *)(v35 + 16) = (_DWORD)v36 - v35;
            v44 = v29[1];
            if ( v34 > (unsigned int)v44 )
              memset_thunk_772440563353939046((char *)v36 + v44, 0, v34 - (unsigned int)v44);
          }
          else
          {
            *(_DWORD *)(v35 + 16) = 0;
          }
          if ( (v13 & 4) == 0 )
          {
            *(_WORD *)(v35 + 2) |= *(_WORD *)(*v43 + 2) & 0x140C;
            if ( (_BYTE)j )
            {
              v149[0] = 257;
              v69 = 0;
              v149[1] = 50331648;
              v70 = 4089359;
              v149[2] = 4;
LABEL_117:
              v71 = *(_WORD *)(v35 + 2);
              if ( (v71 & 4) != 0 )
              {
                if ( v71 >= 0 )
                {
                  v73 = *(_QWORD *)(v35 + 32);
LABEL_121:
                  if ( v73 )
                  {
                    v74 = (unsigned __int8 *)(v73 + 8);
                    v75 = 0;
                    v76 = *(unsigned __int16 *)(v73 + 4);
                    for ( j = v76; ; v76 = j )
                    {
                      if ( v75 >= v76 )
                        goto LABEL_47;
                      v77 = *v74;
                      if ( (unsigned __int8)v77 <= 0x15u && _bittest(&v70, v77) )
                      {
                        v78 = (__int64)(v74 + 8);
                      }
                      else if ( (_BYTE)v77 == 4 )
                      {
                        v78 = (__int64)(v74 + 12);
                      }
                      else
                      {
                        if ( (unsigned __int8)(v77 - 5) > 3u
                          && (unsigned __int8)(v77 - 11) > 1u
                          && (unsigned __int8)(v77 - 15) > 1u )
                        {
                          goto LABEL_292;
                        }
                        v78 = (__int64)&v74[16 * (*((_DWORD *)v74 + 2) & 1) + ((8LL * (*((_DWORD *)v74 + 2) & 2)) | 0xC)];
                      }
                      if ( v78 )
                      {
                        if ( v75 >= v69 )
                        {
                          v105 = RtlEqualSid(v78, v149);
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
                v72 = *(unsigned int *)(v35 + 16);
                if ( (_DWORD)v72 )
                {
                  v73 = v35 + v72;
                  goto LABEL_121;
                }
              }
            }
          }
LABEL_47:
          if ( *(_DWORD *)(v35 + 16) && (a5 & 0x4000) != 0 )
          {
            RtlpNormalizeAcl(v36, v36, 0LL);
            v34 = v36[1];
          }
          v45 = Size[0];
          v46 = (char *)v36 + v34;
          memmove(v46, Src, Size[0]);
          v47 = (int)v46;
          v48 = &v46[v45];
          v22 = v111 == 0;
          *(_DWORD *)(v35 + 4) = v47 - v35;
          if ( v22 )
            *(_WORD *)(v35 + 2) |= *(_WORD *)(*v43 + 2) & 1;
          memmove(v48, v127, (unsigned int)v125);
          v22 = v112 == 0;
          *(_DWORD *)(v35 + 8) = (_DWORD)v48 - v35;
          if ( v22 )
            *(_WORD *)(v35 + 2) |= *(_WORD *)(*v43 + 2) & 2;
          ProcessHeap = v120;
          RtlFreeHeap((__int64)v120, 0, *v43);
          *v43 = v35;
          DefaultTrustSubjectContext = 0;
          v12 = *(_QWORD *)&Size[1];
          goto LABEL_55;
        }
        ProcessHeap = v120;
        DefaultTrustSubjectContext = -1073741801;
LABEL_55:
        if ( v107 )
          RtlFreeHeap((__int64)ProcessHeap, 0, (unsigned __int64)v136);
        goto LABEL_57;
      }
    }
    v117 = 1;
    goto LABEL_19;
  }
  return (unsigned int)DefaultTrustSubjectContext;
}
