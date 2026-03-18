/*
 * XREFs of AdtpPackageParameters @ 0x140451F80
 * Callers:
 *     AdtpWriteToEtwEx @ 0x140451C08 (AdtpWriteToEtwEx.c)
 *     AdtpWriteToEtw @ 0x140AD5F20 (AdtpWriteToEtw.c)
 * Callees:
 *     AdtpBuildAccessReasonAuditString @ 0x1404037E0 (AdtpBuildAccessReasonAuditString.c)
 *     AdtpIsCorrectlyFormedUnicodeString @ 0x140452980 (AdtpIsCorrectlyFormedUnicodeString.c)
 *     AdtpBuildMultiSzStringListString @ 0x14045299C (AdtpBuildMultiSzStringListString.c)
 *     AdtpBuildSidListString @ 0x140801258 (AdtpBuildSidListString.c)
 *     AdtpBuildUserAccountControlString @ 0x140801738 (AdtpBuildUserAccountControlString.c)
 *     RtlValidSid @ 0x140918DF0 (RtlValidSid.c)
 *     AdtpBuildMessageString @ 0x140A06004 (AdtpBuildMessageString.c)
 *     AdtpBuildSockAddrString @ 0x140A15A28 (AdtpBuildSockAddrString.c)
 *     AdtpEtwBuildString @ 0x140A2E330 (AdtpEtwBuildString.c)
 *     AdtpSubstituteDriveLetter @ 0x140A3A944 (AdtpSubstituteDriveLetter.c)
 *     AdtpBuildLogonIdStrings @ 0x140A465C0 (AdtpBuildLogonIdStrings.c)
 *     AdtpBuildPrivilegeAuditString @ 0x140A4C4BC (AdtpBuildPrivilegeAuditString.c)
 *     AdtpBuildSecurityDescriptorChangeString @ 0x140A50644 (AdtpBuildSecurityDescriptorChangeString.c)
 *     AdtpBuildSecurityDescriptorUnicodeString @ 0x140A50714 (AdtpBuildSecurityDescriptorUnicodeString.c)
 *     AdtpBuildAccessesString @ 0x140A70050 (AdtpBuildAccessesString.c)
 *     AdtpEtwBuildDashString @ 0x140A90C78 (AdtpEtwBuildDashString.c)
 *     AdtpBuildUlongString @ 0x140A976F4 (AdtpBuildUlongString.c)
 *     AdtpBuildObjectTypeStrings @ 0x140AB33A8 (AdtpBuildObjectTypeStrings.c)
 *     AdtpBuildStringListString @ 0x140AB8264 (AdtpBuildStringListString.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall AdtpPackageParameters(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        unsigned __int16 *a7,
        __int64 a8)
{
  __int64 v8; // rdi
  UNICODE_STRING *v9; // r9
  unsigned __int16 v10; // r14
  unsigned __int16 v11; // r11
  unsigned int v12; // esi
  unsigned int v13; // eax
  __int64 v14; // r15
  __int64 v15; // r13
  void *v16; // r10
  int v17; // edx
  unsigned int v18; // ecx
  __int64 v19; // r8
  __int64 v20; // r12
  int v21; // ebx
  int v22; // eax
  __int64 v23; // rbx
  unsigned int v24; // edi
  BOOLEAN valid; // al
  __int64 v26; // rax
  int v27; // ecx
  __int64 v28; // r8
  unsigned __int16 *v29; // rdi
  int v30; // eax
  __int64 v31; // rbx
  __int64 v32; // r10
  int v33; // ecx
  unsigned __int16 v34; // r14
  unsigned __int16 v35; // r11
  __int64 v36; // rcx
  __int64 v37; // rax
  int v38; // ebx
  int v39; // ebx
  int v40; // ebx
  int v41; // ebx
  int v42; // ebx
  int v43; // ebx
  __int64 v44; // rcx
  __int64 v45; // rcx
  int v46; // edx
  bool v47; // zf
  int v49; // ecx
  UNICODE_STRING *v50; // rdx
  unsigned __int16 *v51; // rdi
  int v52; // eax
  unsigned __int8 *v53; // r8
  char v54; // r9
  int v55; // eax
  __int64 v56; // rdx
  unsigned int v57; // ecx
  unsigned __int8 **v58; // rax
  __int64 v59; // rax
  __int64 v60; // r9
  int v61; // edx
  unsigned __int16 v62; // r11
  unsigned __int16 v63; // r14
  __int64 v64; // r10
  __int64 v65; // rcx
  __int64 v66; // rcx
  __int64 v67; // rax
  int v68; // edx
  __int64 v69; // rax
  __int64 v70; // rbx
  unsigned int v71; // eax
  __int64 v72; // rdx
  int v73; // ecx
  int v74; // ecx
  int v75; // eax
  int v76; // ecx
  unsigned int *v77; // r10
  unsigned int v78; // ecx
  unsigned int v79; // eax
  __int64 v80; // rcx
  unsigned __int16 v81; // r14
  int v82; // eax
  __int64 v83; // rdx
  __int64 v84; // rax
  void *v85; // rcx
  __int64 v86; // rax
  unsigned int v87; // eax
  __int64 v88; // r10
  unsigned __int16 *v89; // rbx
  __int64 v90; // rdi
  __int16 v91; // r11
  int v92; // ecx
  __int64 v93; // r8
  __int64 v94; // rax
  __int64 v95; // rax
  __int64 v96; // rdx
  int v97; // eax
  __int64 v98; // r8
  __int64 v99; // r10
  __int64 v100; // rax
  __int64 v101; // rcx
  int v102; // edx
  unsigned __int16 *v103; // rdi
  int v104; // eax
  __int64 v105; // rbx
  unsigned int v106; // ecx
  PUNICODE_STRING Destination; // [rsp+20h] [rbp-60h]
  PUNICODE_STRING DestinationString; // [rsp+30h] [rbp-50h]
  char v109; // [rsp+60h] [rbp-20h] BYREF
  __int16 v110; // [rsp+62h] [rbp-1Eh]
  int v111; // [rsp+64h] [rbp-1Ch] BYREF
  unsigned int v112; // [rsp+68h] [rbp-18h]
  unsigned int v113; // [rsp+6Ch] [rbp-14h]
  __int64 v114; // [rsp+70h] [rbp-10h]
  unsigned __int8 *v115; // [rsp+78h] [rbp-8h] BYREF
  char v116; // [rsp+C0h] [rbp+40h] BYREF
  int v117; // [rsp+D0h] [rbp+50h] BYREF
  __int64 v118; // [rsp+D8h] [rbp+58h]

  v118 = a4;
  v117 = a3;
  v8 = a4;
  v9 = 0LL;
  v110 = 0;
  v10 = 0;
  v111 = 0;
  v11 = 0;
  v12 = 0;
  if ( a1 )
  {
    if ( !a2 )
    {
      v13 = *(_DWORD *)(a1 + 8);
      v14 = a1 + 24;
LABEL_4:
      v15 = a6;
      v16 = &AdtpNullSid;
      v17 = 2;
      v114 = v14;
      v113 = v13;
      v18 = 2;
      LODWORD(v19) = 1;
      while ( 1 )
      {
        v112 = v18;
        if ( v18 >= v13 )
          goto LABEL_52;
        if ( v11 >= 0xEu || v10 >= 0x2Au )
          break;
        v20 = 32LL * v18;
        v21 = *(_DWORD *)(v20 + v14);
        if ( v21 <= 16 )
        {
          if ( v21 == 16 )
          {
            v22 = AdtpBuildStringListString(
                    *(_QWORD *)(v20 + v14 + 24),
                    v17,
                    (unsigned int)v15 + 16 * v10,
                    v8,
                    (__int64)&v111,
                    v10 + a8);
LABEL_17:
            v9 = 0LL;
            v12 = v22;
            if ( v22 < 0 )
              goto LABEL_52;
            v11 = v110;
            LODWORD(v19) = 1;
            ++v10;
            v17 = 2;
            goto LABEL_19;
          }
          if ( v21 > 8 )
          {
            v38 = v21 - 9;
            if ( !v38 )
            {
              v87 = *(_DWORD *)(v20 + v14 + 16);
              if ( v87 >= v18 )
                break;
              v88 = 32LL * v87;
              if ( *(_DWORD *)(v88 + v14) != (_DWORD)v19 )
                break;
              v89 = (unsigned __int16 *)(a5 + 16LL * v11);
              LODWORD(Destination) = a5 + 16 * v11;
              AdtpBuildObjectTypeStrings(
                *(_QWORD *)(v14 + 56),
                *(_QWORD *)(v88 + v14 + 24),
                *(_QWORD *)(v20 + v14 + 24),
                *(_DWORD *)(v20 + v14 + 4) / 0x18u);
              v90 = 2LL * v10;
              v17 = 2;
              v91 = v110;
              v92 = *v89 + 2;
              v9 = 0LL;
              *(_QWORD *)(v15 + 8 * v90) = *((_QWORD *)v89 + 1);
              LODWORD(v19) = 1;
              *(_DWORD *)(v15 + 8 * v90 + 8) = v92;
              v11 = v91 + 1;
              *(_DWORD *)(v15 + 8 * v90 + 12) = 0;
              ++v10;
              goto LABEL_37;
            }
            v39 = v38 - 1;
            if ( v39 )
            {
              v40 = v39 - 1;
              if ( v40 )
              {
                v41 = v40 - 1;
                if ( v41 )
                {
                  v42 = v41 - 1;
                  if ( !v42 )
                  {
                    v85 = &AdtpNullGuid;
                    if ( *(_QWORD *)(v20 + v14 + 24) )
                      v85 = *(void **)(v20 + v14 + 24);
                    v86 = 2LL * v10;
                    *(_QWORD *)(v15 + 8 * v86) = v85;
                    *(_QWORD *)(v15 + 8 * v86 + 8) = 16LL;
                    goto LABEL_45;
                  }
                  v43 = v42 - 1;
                  if ( v43 && v43 != 1 )
                    break;
                }
              }
              v44 = 2LL * v10;
              *(_QWORD *)(v15 + 8 * v44) = v20 + v14 + 8;
              *(_QWORD *)(v15 + 8 * v44 + 8) = 8LL;
            }
            else
            {
LABEL_46:
              v45 = 2LL * v10;
              *(_QWORD *)(v15 + 8 * v45) = v20 + v14 + 8;
              *(_QWORD *)(v15 + 8 * v45 + 8) = 4LL;
            }
LABEL_45:
            v10 += v19;
            goto LABEL_20;
          }
          switch ( v21 )
          {
            case 8:
              v77 = *(unsigned int **)(v20 + v14 + 24);
              if ( !v77 )
                goto LABEL_51;
              v78 = *v77;
              v79 = *v77 ? 12 * v78 + 8 : 8;
              if ( *(_DWORD *)(v20 + v14 + 4) < v79 || v78 > 0x42 )
                goto LABEL_51;
              v22 = AdtpBuildPrivilegeAuditString(
                      *(_QWORD *)(v20 + v14 + 24),
                      0LL,
                      v15 + 16LL * v10,
                      v8,
                      &v111,
                      v10 + a8);
              goto LABEL_17;
            case 0:
              AdtpEtwBuildDashString(v15 + 16LL * v10);
              goto LABEL_45;
            case 1:
              if ( !(unsigned __int8)AdtpIsCorrectlyFormedUnicodeString(*(_QWORD *)(v20 + v14 + 24)) )
                goto LABEL_51;
LABEL_48:
              v22 = AdtpEtwBuildString((unsigned int)v15 + 16 * v10, v46, v8, (unsigned int)&v111, v10 + a8);
              goto LABEL_17;
            case 2:
              v70 = *(_QWORD *)(v20 + v14 + 24);
              if ( !(unsigned __int8)AdtpIsCorrectlyFormedUnicodeString(v70) )
                goto LABEL_51;
              AdtpSubstituteDriveLetter();
              v46 = v70;
              goto LABEL_48;
            case 3:
              v22 = AdtpBuildUlongString(*(_DWORD *)(v20 + v14 + 8), (__int64)&v111, v10 + a8);
              goto LABEL_17;
            case 4:
              v23 = *(_QWORD *)(v20 + v14 + 24);
              v24 = 4 * *(unsigned __int8 *)(v23 + 1) + 8;
              if ( *(_DWORD *)(v20 + v14 + 4) < v24
                || (valid = RtlValidSid(*(PSID *)(v20 + v14 + 24)), v9 = 0LL, !valid) )
              {
                v12 = -1073741704;
                goto LABEL_52;
              }
              v11 = v110;
              LODWORD(v19) = 1;
              v17 = 2;
              v26 = 2LL * v10++;
              *(_QWORD *)(v15 + 8 * v26) = v23;
              *(_DWORD *)(v15 + 8 * v26 + 8) = v24;
              *(_DWORD *)(v15 + 8 * v26 + 12) = 0;
LABEL_32:
              v8 = v118;
LABEL_19:
              v16 = &AdtpNullSid;
              goto LABEL_20;
            case 5:
              goto LABEL_58;
          }
          if ( v21 != 6 )
          {
            if ( v21 != 7 )
              break;
            v71 = *(_DWORD *)(v20 + v14 + 16);
            if ( v71 >= v112 )
              break;
            v72 = 32LL * v71;
            if ( *(_DWORD *)(v72 + v14) != (_DWORD)v19 )
              break;
            v22 = AdtpBuildAccessesString(
                    *(_QWORD *)(v14 + 56),
                    *(_QWORD *)(v72 + v14 + 24),
                    *(_DWORD *)(v20 + v14 + 8),
                    0,
                    v9,
                    v15 + 16LL * v10,
                    v8,
                    (__int64)&v111,
                    v10 + a8);
            goto LABEL_17;
          }
          v80 = 2LL * v10;
          v81 = v19 + v10;
          v82 = 4 * (unsigned __int8)byte_140FD8ED9 + 8;
          *(_QWORD *)(v15 + 8 * v80) = v16;
          *(_DWORD *)(v15 + 8 * v80 + 8) = v82;
          *(_DWORD *)(v15 + 8 * v80 + 12) = (_DWORD)v9;
          do
          {
            AdtpEtwBuildDashString(v15 + 16LL * v81);
            v81 += v19;
          }
          while ( v83 != v19 );
          v84 = 2LL * v81;
          v10 = v19 + v81;
          *(_QWORD *)(v15 + 8 * v84) = &AdtpNullLuid;
          *(_QWORD *)(v15 + 8 * v84 + 8) = 8LL;
        }
        else
        {
          if ( v21 == 27 )
            goto LABEL_46;
          if ( v21 > 27 )
          {
            if ( v21 == 28 )
            {
              LODWORD(Destination) = (_DWORD)v9;
              v103 = (unsigned __int16 *)(a5 + 16LL * v11);
              v104 = AdtpBuildSockAddrString(*(_QWORD *)(v20 + v14 + 24), v103, v10 + a8, 0LL);
              v9 = 0LL;
              v12 = v104;
              if ( v104 < 0 )
                goto LABEL_52;
              LODWORD(v19) = 1;
              v17 = 2;
              v105 = 2LL * v10;
              v106 = *v103 + 2;
              ++v10;
              v11 = v110 + 1;
              *(_QWORD *)(v15 + 8 * v105) = *((_QWORD *)v103 + 1);
              *(_QWORD *)(v15 + 8 * v105 + 8) = v106;
              goto LABEL_37;
            }
            if ( v21 != 29 )
            {
              if ( v21 != 30 )
              {
                if ( v21 == 31 )
                {
                  if ( *(_DWORD *)(v20 + v14 + 8) != 32 || *(UNICODE_STRING **)(v20 + v14 + 16) != v9 )
                    break;
                  v22 = AdtpBuildSecurityDescriptorUnicodeString(
                          32,
                          *(_QWORD *)(v20 + v14 + 24),
                          0,
                          (unsigned int)v15 + 16 * v10,
                          v8,
                          (__int64)&v111,
                          v10 + a8);
                  goto LABEL_17;
                }
                v49 = v21 - 31 - v17;
                if ( v49 )
                {
                  v76 = v49 - 1;
                  if ( !v76 )
                  {
                    v22 = AdtpBuildMultiSzStringListString(*(_QWORD *)(v20 + v14 + 24), v15 + 16LL * v10, v10 + a8);
                    goto LABEL_17;
                  }
                  v47 = v76 == 1;
                  goto LABEL_50;
                }
LABEL_58:
                DestinationString = (PUNICODE_STRING)&v109;
                v50 = (UNICODE_STRING *)&v115;
                v51 = (unsigned __int16 *)(a5 + 16LL * v11);
                LOBYTE(v117) = (_BYTE)v9;
                v116 = (char)v9;
                v109 = (char)v9;
                v115 = (unsigned __int8 *)v9;
                if ( v21 != 35 )
                  v50 = v9;
                Destination = (PUNICODE_STRING)&v116;
                v52 = AdtpBuildLogonIdStrings(v20 + v14 + 8, v50, &v117, a5 + 16LL * v11);
                v12 = v52;
                if ( v21 == 35 )
                {
                  v54 = v117;
                  v53 = v115;
                }
                else
                {
                  v53 = *(unsigned __int8 **)(v14 + 24);
                  v54 = 0;
                }
                if ( v52 < 0 )
                  goto LABEL_52;
                v55 = *(_DWORD *)(v20 + v14);
                if ( v55 == 5 || v55 == 35 )
                {
                  if ( !v53 )
                  {
                    v53 = (unsigned __int8 *)&AdtpNullSid;
                    v54 = 0;
                  }
LABEL_66:
                  v56 = v10;
                  v57 = 4 * v53[1] + 8;
                  v58 = (unsigned __int8 **)(v15 + 16LL * v10);
                  *v58 = v53;
                  v58[1] = (unsigned __int8 *)v57;
                  ++v10;
                  *(_BYTE *)(v56 + a8) = v54;
                }
                else
                {
                  if ( v21 == 33 )
                  {
                    v53 = *(unsigned __int8 **)(v20 + v14 + 24);
                    goto LABEL_66;
                  }
                  if ( v54 && v53 )
                    ExFreePoolWithTag(v53, 0);
                }
                v59 = *((_QWORD *)v51 + 1);
                v60 = a8;
                v61 = *v51 + 2;
                v19 = v10;
                v62 = v110 + 1;
                v63 = v10 + 1;
                v64 = a5;
                v65 = v15 + 16LL * (unsigned int)v19;
                *(_DWORD *)(v65 + 12) = 0;
                *(_QWORD *)v65 = v59;
                LOBYTE(v59) = v116;
                *(_DWORD *)(v65 + 8) = v61;
                *(_BYTE *)(v19 + v60) = v59;
                v66 = v15 + 16LL * v63;
                v67 = *(_QWORD *)(v64 + 16LL * v62 + 8);
                v68 = *(unsigned __int16 *)(v64 + 16LL * v62) + 2;
                *(_DWORD *)(v66 + 12) = 0;
                *(_QWORD *)v66 = v67;
                LOBYTE(v67) = v109;
                *(_DWORD *)(v66 + 8) = v68;
                *(_BYTE *)(v63 + v60) = v67;
                LODWORD(v19) = 1;
                v34 = v63 + 1;
                v11 = v62 + 1;
                v69 = 2LL * v34;
                v9 = 0LL;
                *(_QWORD *)(v15 + 8 * v69) = v20 + v14 + 8;
                *(_QWORD *)(v15 + 8 * v69 + 8) = 8LL;
                goto LABEL_36;
              }
              if ( *(UNICODE_STRING **)(v20 + v14 + 8) != v9 || *(UNICODE_STRING **)(v20 + v14 + 16) != v9 )
                break;
            }
            v93 = *(_QWORD *)(v20 + v14 + 24);
            v94 = *(unsigned int *)(v93 + 132);
            if ( (unsigned int)v94 >= v112 || *(_DWORD *)(32 * v94 + v14) != 1 )
              break;
            v22 = AdtpBuildAccessReasonAuditString(
                    *(_QWORD *)(v14 + 56),
                    *(_QWORD *)(32 * v94 + v14 + 24),
                    v93,
                    v21 == 30,
                    (int)Destination,
                    v15 + 16LL * v10,
                    v8,
                    &v111,
                    (char *)(v10 + a8));
            goto LABEL_17;
          }
          switch ( v21 )
          {
            case 17:
              v22 = AdtpBuildSidListString(
                      *(_QWORD *)(v20 + v14 + 24),
                      v17,
                      (unsigned int)v15 + 16 * v10,
                      v8,
                      (__int64)&v111,
                      v10 + a8);
              goto LABEL_17;
            case 18:
              v95 = 2LL * v10;
              *(_QWORD *)(v15 + 8 * v95) = &v116;
              *(_QWORD *)(v15 + 8 * v95 + 8) = 8LL;
              goto LABEL_45;
            case 19:
              v97 = AdtpBuildUserAccountControlString(
                      *(_DWORD *)(v20 + v14 + 8),
                      (PUNICODE_STRING)(a5 + 16LL * ((unsigned int)v11 + 1)),
                      a8 + (unsigned int)v10 + 1,
                      (PUNICODE_STRING)(a5 + 16LL * ((unsigned int)v11 + 2)),
                      a8 + (unsigned int)v10 + 2);
              v9 = 0LL;
              v12 = v97;
              if ( v97 < 0 )
                goto LABEL_52;
              v11 = v110;
              v98 = 3LL;
              v99 = a5;
              do
              {
                v100 = v11++;
                v100 *= 2LL;
                v101 = 2LL * v10++;
                v102 = *(unsigned __int16 *)(v99 + 8 * v100);
                *(_QWORD *)(v15 + 8 * v101) = *(_QWORD *)(v99 + 8 * v100 + 8);
                *(_QWORD *)(v15 + 8 * v101 + 8) = (unsigned int)(v102 + 2);
                --v98;
              }
              while ( v98 );
              v14 = v114;
              v17 = 2;
              LODWORD(v19) = 1;
              goto LABEL_37;
          }
          if ( v21 != 20 )
          {
            if ( v21 == 21 )
            {
              v22 = AdtpBuildMessageString(
                      *(_DWORD *)(v20 + v14 + 8),
                      v17,
                      (unsigned int)v15 + 16 * v10,
                      v8,
                      (__int64)&v111,
                      v10 + a8);
              goto LABEL_17;
            }
            v27 = v21 - 21 - v17;
            if ( !v27 )
            {
              v28 = v10 + a8;
              v29 = (unsigned __int16 *)(a5 + 16LL * v11);
              LODWORD(Destination) = v28 + 1;
              v30 = AdtpBuildSockAddrString(*(_QWORD *)(v20 + v14 + 24), v29, v28, v29 + 8);
              v9 = 0LL;
              v12 = v30;
              if ( v30 < 0 )
                goto LABEL_52;
              LODWORD(v19) = 1;
              v31 = 2LL * v10;
              v32 = a5;
              v33 = *v29 + 2;
              v34 = v10 + 1;
              v35 = v110 + 1;
              *(_QWORD *)(v15 + 8 * v31) = *((_QWORD *)v29 + 1);
              *(_DWORD *)(v15 + 8 * v31 + 8) = v33;
              *(_DWORD *)(v15 + 8 * v31 + 12) = 0;
              v36 = 2LL * v34;
              v37 = *(_QWORD *)(v32 + 16LL * v35 + 8);
              *(_DWORD *)(v15 + 8 * v36 + 8) = *(unsigned __int16 *)(v32 + 16LL * v35) + 2;
              v11 = v35 + 1;
              *(_QWORD *)(v15 + 8 * v36) = v37;
              *(_DWORD *)(v15 + 8 * v36 + 12) = 0;
LABEL_36:
              v10 = v34 + 1;
              v17 = 2;
LABEL_37:
              v110 = v11;
              goto LABEL_32;
            }
            v73 = v27 - 1;
            if ( !v73 )
            {
              v74 = *(_DWORD *)(v20 + v14 + 8);
              ++v112;
              v8 = v118;
              v75 = AdtpBuildSecurityDescriptorChangeString(
                      v74,
                      *(_QWORD *)(v20 + v14 + 24),
                      *(_QWORD *)(32LL * v112 + v14 + 24),
                      (unsigned int)v15 + 16 * (v10 + 1),
                      v15 + 16LL * v10,
                      v10 + a8,
                      (_DWORD)DestinationString,
                      v15 + 16 * (v10 + 1LL),
                      v10 + 1LL + a8,
                      v118,
                      (__int64)&v111);
              v9 = 0LL;
              v12 = v75;
              if ( v75 < 0 )
                goto LABEL_52;
              v11 = v110;
              v17 = 2;
              v10 += 2;
              LODWORD(v19) = 1;
              goto LABEL_19;
            }
            v47 = v73 == v17;
LABEL_50:
            if ( !v47 )
              break;
            goto LABEL_58;
          }
          do
          {
            AdtpEtwBuildDashString(v15 + 16LL * v10);
            v10 += v19;
          }
          while ( v96 != v19 );
        }
        v17 = 2;
LABEL_20:
        v13 = v113;
        v18 = v19 + v112;
      }
    }
  }
  else if ( a2 )
  {
    v13 = *(_DWORD *)(a2 + 12);
    v14 = a2 + 32;
    goto LABEL_4;
  }
LABEL_51:
  v12 = -1073741811;
LABEL_52:
  *a7 = v10;
  return v12;
}
