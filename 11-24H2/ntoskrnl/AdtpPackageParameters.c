/*
 * XREFs of AdtpPackageParameters @ 0x140448568
 * Callers:
 *     AdtpWriteToEtwEx @ 0x1404481F0 (AdtpWriteToEtwEx.c)
 *     AdtpWriteToEtw @ 0x140AEB4C0 (AdtpWriteToEtw.c)
 * Callees:
 *     AdtpBuildAccessReasonAuditString @ 0x140403434 (AdtpBuildAccessReasonAuditString.c)
 *     AdtpIsCorrectlyFormedUnicodeString @ 0x140448F70 (AdtpIsCorrectlyFormedUnicodeString.c)
 *     AdtpBuildMultiSzStringListString @ 0x140448F8C (AdtpBuildMultiSzStringListString.c)
 *     AdtpBuildSidListString @ 0x140811508 (AdtpBuildSidListString.c)
 *     AdtpBuildUserAccountControlString @ 0x1408119E8 (AdtpBuildUserAccountControlString.c)
 *     RtlValidSid @ 0x14086B530 (RtlValidSid.c)
 *     AdtpBuildMessageString @ 0x140A05034 (AdtpBuildMessageString.c)
 *     AdtpBuildSockAddrString @ 0x140A15720 (AdtpBuildSockAddrString.c)
 *     AdtpEtwBuildString @ 0x140A26918 (AdtpEtwBuildString.c)
 *     AdtpSubstituteDriveLetter @ 0x140A32C50 (AdtpSubstituteDriveLetter.c)
 *     AdtpBuildLogonIdStrings @ 0x140A3C34C (AdtpBuildLogonIdStrings.c)
 *     AdtpBuildPrivilegeAuditString @ 0x140A44074 (AdtpBuildPrivilegeAuditString.c)
 *     AdtpBuildSecurityDescriptorChangeString @ 0x140A46368 (AdtpBuildSecurityDescriptorChangeString.c)
 *     AdtpBuildSecurityDescriptorUnicodeString @ 0x140A46438 (AdtpBuildSecurityDescriptorUnicodeString.c)
 *     AdtpBuildAccessesString @ 0x140A6BDDC (AdtpBuildAccessesString.c)
 *     AdtpEtwBuildDashString @ 0x140A90600 (AdtpEtwBuildDashString.c)
 *     AdtpBuildUlongString @ 0x140A98794 (AdtpBuildUlongString.c)
 *     AdtpBuildObjectTypeStrings @ 0x140AB2284 (AdtpBuildObjectTypeStrings.c)
 *     AdtpBuildStringListString @ 0x140AB7404 (AdtpBuildStringListString.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
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
  int v48; // ecx
  UNICODE_STRING *v49; // rdx
  unsigned __int16 *v50; // rdi
  int v51; // eax
  unsigned __int8 *v52; // r8
  char v53; // r9
  int v54; // eax
  __int64 v55; // rdx
  unsigned int v56; // ecx
  unsigned __int8 **v57; // rax
  __int64 v58; // rax
  __int64 v59; // r9
  int v60; // edx
  unsigned __int16 v61; // r11
  unsigned __int16 v62; // r14
  __int64 v63; // r10
  __int64 v64; // rcx
  __int64 v65; // rcx
  __int64 v66; // rax
  int v67; // edx
  __int64 v68; // rax
  __int64 v69; // rbx
  int v70; // ecx
  int v71; // ecx
  int v72; // eax
  unsigned int *v73; // r10
  unsigned int v74; // ecx
  unsigned int v75; // eax
  __int64 v76; // rcx
  unsigned __int16 v77; // r14
  int v78; // eax
  __int64 v79; // rdx
  __int64 v80; // rax
  int v81; // ecx
  void *v82; // rcx
  __int64 v83; // rax
  unsigned int v84; // eax
  __int64 v85; // rdx
  unsigned int v86; // eax
  __int64 v87; // r10
  unsigned __int16 *v88; // rbx
  __int64 v89; // rdi
  __int16 v90; // r11
  int v91; // ecx
  bool v92; // zf
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
          goto LABEL_51;
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
              goto LABEL_51;
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
              v86 = *(_DWORD *)(v20 + v14 + 16);
              if ( v86 >= v18 )
                break;
              v87 = 32LL * v86;
              if ( *(_DWORD *)(v87 + v14) != (_DWORD)v19 )
                break;
              v88 = (unsigned __int16 *)(a5 + 16LL * v11);
              LODWORD(Destination) = a5 + 16 * v11;
              AdtpBuildObjectTypeStrings(
                *(_QWORD *)(v14 + 56),
                *(_QWORD *)(v87 + v14 + 24),
                *(_QWORD *)(v20 + v14 + 24),
                *(_DWORD *)(v20 + v14 + 4) / 0x18u);
              v89 = 2LL * v10;
              v17 = 2;
              v90 = v110;
              v91 = *v88 + 2;
              v9 = 0LL;
              *(_QWORD *)(v15 + 8 * v89) = *((_QWORD *)v88 + 1);
              LODWORD(v19) = 1;
              *(_DWORD *)(v15 + 8 * v89 + 8) = v91;
              v11 = v90 + 1;
              *(_DWORD *)(v15 + 8 * v89 + 12) = 0;
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
                    v82 = &AdtpNullGuid;
                    if ( *(_QWORD *)(v20 + v14 + 24) )
                      v82 = *(void **)(v20 + v14 + 24);
                    v83 = 2LL * v10;
                    *(_QWORD *)(v15 + 8 * v83) = v82;
                    *(_QWORD *)(v15 + 8 * v83 + 8) = 16LL;
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
              v73 = *(unsigned int **)(v20 + v14 + 24);
              if ( !v73 )
                goto LABEL_50;
              v74 = *v73;
              v75 = *v73 ? 12 * v74 + 8 : 8;
              if ( *(_DWORD *)(v20 + v14 + 4) < v75 || v74 > 0x42 )
                goto LABEL_50;
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
                goto LABEL_50;
LABEL_48:
              v22 = AdtpEtwBuildString((unsigned int)v15 + 16 * v10, v46, v8, (unsigned int)&v111, v10 + a8);
              goto LABEL_17;
            case 2:
              v69 = *(_QWORD *)(v20 + v14 + 24);
              if ( !(unsigned __int8)AdtpIsCorrectlyFormedUnicodeString(v69) )
                goto LABEL_50;
              AdtpSubstituteDriveLetter();
              v46 = v69;
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
                goto LABEL_51;
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
              goto LABEL_57;
          }
          if ( v21 != 6 )
          {
            if ( v21 != 7 )
              break;
            v84 = *(_DWORD *)(v20 + v14 + 16);
            if ( v84 >= v112 )
              break;
            v85 = 32LL * v84;
            if ( *(_DWORD *)(v85 + v14) != (_DWORD)v19 )
              break;
            v22 = AdtpBuildAccessesString(
                    *(_QWORD *)(v14 + 56),
                    *(_QWORD *)(v85 + v14 + 24),
                    *(_DWORD *)(v20 + v14 + 8),
                    0,
                    v9,
                    v15 + 16LL * v10,
                    v8,
                    (__int64)&v111,
                    v10 + a8);
            goto LABEL_17;
          }
          v76 = 2LL * v10;
          v77 = v19 + v10;
          v78 = 4 * (unsigned __int8)byte_140FD9EB9 + 8;
          *(_QWORD *)(v15 + 8 * v76) = v16;
          *(_DWORD *)(v15 + 8 * v76 + 8) = v78;
          *(_DWORD *)(v15 + 8 * v76 + 12) = (_DWORD)v9;
          do
          {
            AdtpEtwBuildDashString(v15 + 16LL * v77);
            v77 += v19;
          }
          while ( v79 != v19 );
          v80 = 2LL * v77;
          v10 = v19 + v77;
          *(_QWORD *)(v15 + 8 * v80) = &AdtpNullLuid;
          *(_QWORD *)(v15 + 8 * v80 + 8) = 8LL;
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
                goto LABEL_51;
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
                v48 = v21 - 31 - v17;
                if ( v48 )
                {
                  v81 = v48 - 1;
                  if ( !v81 )
                  {
                    v22 = AdtpBuildMultiSzStringListString(*(_QWORD *)(v20 + v14 + 24), v15 + 16LL * v10, v10 + a8);
                    goto LABEL_17;
                  }
                  v92 = v81 == 1;
                  goto LABEL_106;
                }
LABEL_57:
                DestinationString = (PUNICODE_STRING)&v109;
                v49 = (UNICODE_STRING *)&v115;
                v50 = (unsigned __int16 *)(a5 + 16LL * v11);
                LOBYTE(v117) = (_BYTE)v9;
                v116 = (char)v9;
                v109 = (char)v9;
                v115 = (unsigned __int8 *)v9;
                if ( v21 != 35 )
                  v49 = v9;
                Destination = (PUNICODE_STRING)&v116;
                v51 = AdtpBuildLogonIdStrings(v20 + v14 + 8, v49, &v117, a5 + 16LL * v11);
                v12 = v51;
                if ( v21 == 35 )
                {
                  v53 = v117;
                  v52 = v115;
                }
                else
                {
                  v52 = *(unsigned __int8 **)(v14 + 24);
                  v53 = 0;
                }
                if ( v51 < 0 )
                  goto LABEL_51;
                v54 = *(_DWORD *)(v20 + v14);
                if ( v54 == 5 || v54 == 35 )
                {
                  if ( !v52 )
                  {
                    v52 = (unsigned __int8 *)&AdtpNullSid;
                    v53 = 0;
                  }
LABEL_65:
                  v55 = v10;
                  v56 = 4 * v52[1] + 8;
                  v57 = (unsigned __int8 **)(v15 + 16LL * v10);
                  *v57 = v52;
                  v57[1] = (unsigned __int8 *)v56;
                  ++v10;
                  *(_BYTE *)(v55 + a8) = v53;
                }
                else
                {
                  if ( v21 == 33 )
                  {
                    v52 = *(unsigned __int8 **)(v20 + v14 + 24);
                    goto LABEL_65;
                  }
                  if ( v53 && v52 )
                    ExFreePoolWithTag(v52, 0);
                }
                v58 = *((_QWORD *)v50 + 1);
                v59 = a8;
                v60 = *v50 + 2;
                v19 = v10;
                v61 = v110 + 1;
                v62 = v10 + 1;
                v63 = a5;
                v64 = v15 + 16LL * (unsigned int)v19;
                *(_DWORD *)(v64 + 12) = 0;
                *(_QWORD *)v64 = v58;
                LOBYTE(v58) = v116;
                *(_DWORD *)(v64 + 8) = v60;
                *(_BYTE *)(v19 + v59) = v58;
                v65 = v15 + 16LL * v62;
                v66 = *(_QWORD *)(v63 + 16LL * v61 + 8);
                v67 = *(unsigned __int16 *)(v63 + 16LL * v61) + 2;
                *(_DWORD *)(v65 + 12) = 0;
                *(_QWORD *)v65 = v66;
                LOBYTE(v66) = v109;
                *(_DWORD *)(v65 + 8) = v67;
                *(_BYTE *)(v62 + v59) = v66;
                LODWORD(v19) = 1;
                v34 = v62 + 1;
                v11 = v61 + 1;
                v68 = 2LL * v34;
                v9 = 0LL;
                *(_QWORD *)(v15 + 8 * v68) = v20 + v14 + 8;
                *(_QWORD *)(v15 + 8 * v68 + 8) = 8LL;
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
                goto LABEL_51;
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
                goto LABEL_51;
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
            v70 = v27 - 1;
            if ( !v70 )
            {
              v71 = *(_DWORD *)(v20 + v14 + 8);
              ++v112;
              v8 = v118;
              v72 = AdtpBuildSecurityDescriptorChangeString(
                      v71,
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
              v12 = v72;
              if ( v72 < 0 )
                goto LABEL_51;
              v11 = v110;
              v17 = 2;
              v10 += 2;
              LODWORD(v19) = 1;
              goto LABEL_19;
            }
            v92 = v70 == v17;
LABEL_106:
            if ( !v92 )
              break;
            goto LABEL_57;
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
LABEL_50:
  v12 = -1073741811;
LABEL_51:
  *a7 = v10;
  return v12;
}
