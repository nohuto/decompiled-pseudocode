/*
 * XREFs of PspBuildCreateProcessContext @ 0x1408F9210
 * Callers:
 *     PsCreateMinimalProcess @ 0x1407798C4 (PsCreateMinimalProcess.c)
 *     NtCreateThreadEx @ 0x1408F8F00 (NtCreateThreadEx.c)
 *     NtCreateUserProcess @ 0x140AC9930 (NtCreateUserProcess.c)
 * Callees:
 *     KeIsEmptyGroupMask @ 0x14032FF20 (KeIsEmptyGroupMask.c)
 *     KeGetProcessorIndexFromNumber @ 0x140370440 (KeGetProcessorIndexFromNumber.c)
 *     KeVerifyGroupAffinity @ 0x140469BC0 (KeVerifyGroupAffinity.c)
 *     IsTrustletCreateAttributeWellFormed @ 0x1404CBA58 (IsTrustletCreateAttributeWellFormed.c)
 *     RtlCopyFromUser @ 0x1404F96D8 (RtlCopyFromUser.c)
 *     qsort @ 0x1404FC5E0 (qsort.c)
 *     Feature_DecoupleAppContainerAndIntegrityLevel__private_IsEnabledDeviceUsageNoInline @ 0x1405E2C90 (Feature_DecoupleAppContainerAndIntegrityLevel__private_IsEnabledDeviceUsageNoInline.c)
 *     SeCaptureHandles @ 0x140607B70 (SeCaptureHandles.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x1406B6C90 (RtlCopyVolatileMemory.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x140847AA0 (ObpReferenceObjectByHandleWithTag.c)
 *     SeCaptureSid @ 0x140869508 (SeCaptureSid.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408A3890 (ExRaiseDatatypeMisalignment.c)
 *     PspDeleteCreateProcessContext @ 0x1408FAD80 (PspDeleteCreateProcessContext.c)
 *     SeCaptureSidAndAttributesArray @ 0x140985730 (SeCaptureSidAndAttributesArray.c)
 *     PspValidateMitigationOptions @ 0x140A175FC (PspValidateMitigationOptions.c)
 *     RtlValidProcessProtection @ 0x140A7D5C0 (RtlValidProcessProtection.c)
 *     PspValidateMitigationAuditOptions @ 0x140A979C0 (PspValidateMitigationAuditOptions.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

__int64 __fastcall PspBuildCreateProcessContext(__int64 *a1, char a2, int a3, __int64 a4)
{
  char v4; // r12
  __int64 v5; // r14
  _QWORD *v7; // rdi
  unsigned __int64 v8; // rax
  int v9; // ebx
  __int64 v10; // rcx
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rax
  _QWORD *v18; // rax
  __int64 v19; // rax
  _DWORD *v20; // rax
  _BYTE *v21; // rax
  ULONG_PTR v22; // rbx
  char *v23; // r15
  void *v24; // rax
  ULONG_PTR v25; // rbx
  char *v26; // r15
  void *v27; // rax
  unsigned __int64 v28; // rcx
  unsigned __int64 v29; // rcx
  unsigned __int64 v30; // rcx
  unsigned __int64 v31; // rcx
  unsigned __int64 v32; // rcx
  unsigned __int64 v33; // rcx
  ULONG_PTR v34; // rbx
  char *v35; // r15
  void *v36; // rax
  unsigned __int64 v37; // rax
  unsigned __int64 v38; // rax
  unsigned __int64 v39; // rax
  unsigned __int64 v40; // rax
  unsigned __int64 v41; // rax
  unsigned __int64 v42; // rax
  unsigned __int64 v43; // rbx
  _QWORD *v44; // rax
  _DWORD *v45; // rcx
  _DWORD *v46; // rax
  _DWORD *v47; // rax
  ULONG_PTR v48; // rbx
  ULONG_PTR v49; // r12
  __int64 v50; // rax
  unsigned __int64 v51; // r15
  ULONG_PTR v52; // rbx
  char *v53; // r15
  void *v54; // rax
  char valid; // al
  bool v56; // zf
  size_t v57; // r8
  unsigned __int64 v58; // rdx
  __int128 v59; // xmm2
  __int64 v60; // xmm3_8
  unsigned __int16 *v61; // rax
  __int64 v62; // rbx
  ULONG_PTR v63; // rbx
  char *v64; // r15
  void *v65; // rax
  unsigned __int64 v66; // rax
  unsigned __int64 v67; // rax
  unsigned __int64 v68; // rax
  unsigned __int64 v69; // rax
  unsigned __int64 v70; // rax
  unsigned __int64 v71; // rax
  _PROCESSOR_NUMBER *v72; // rax
  ULONG ProcessorIndexFromNumber; // eax
  _OWORD *v74; // rax
  void *v75; // rdx
  _DWORD *v76; // rax
  __int64 v77; // r8
  __int64 v78; // r9
  __int64 v79; // r8
  unsigned __int64 v80; // rcx
  size_t v81; // r8
  unsigned __int64 v82; // rdx
  __int128 v83; // xmm2
  __int64 v84; // xmm3_8
  _DWORD *v85; // rax
  ULONG_PTR v86; // r12
  const void *v87; // r15
  void *Pool2; // rax
  __int64 v89; // r10
  __int64 v90; // r15
  char *v91; // r13
  const void *v92; // r12
  __int64 v93; // rax
  char v94; // r9
  __int64 v95; // rdx
  __int64 v96; // rax
  __int64 v97; // rdx
  unsigned __int64 v98; // rdx
  char *v99; // rbx
  __int64 v100; // rdx
  unsigned int v101; // eax
  __int64 v102; // rax
  _QWORD *v103; // rax
  __int64 v104; // rdx
  unsigned __int64 v105; // rax
  unsigned __int64 v106; // rax
  unsigned __int64 v107; // rax
  unsigned __int64 v108; // rax
  unsigned __int64 v109; // rax
  unsigned __int64 v110; // rax
  PS_PROTECTION v111; // cl
  ULONG Tag; // [rsp+20h] [rbp-2B8h]
  _QWORD *v113; // [rsp+58h] [rbp-280h]
  __int64 v114; // [rsp+60h] [rbp-278h]
  __int64 v115; // [rsp+70h] [rbp-268h]
  unsigned __int64 v116; // [rsp+70h] [rbp-268h]
  unsigned __int64 v117; // [rsp+70h] [rbp-268h]
  unsigned __int64 v118; // [rsp+78h] [rbp-260h]
  unsigned __int64 v119; // [rsp+78h] [rbp-260h]
  unsigned __int64 v120; // [rsp+78h] [rbp-260h]
  _PROCESSOR_NUMBER ProcNumber; // [rsp+80h] [rbp-258h] BYREF
  int v122; // [rsp+84h] [rbp-254h]
  int v123; // [rsp+88h] [rbp-250h]
  int v124; // [rsp+8Ch] [rbp-24Ch]
  __int16 v125; // [rsp+90h] [rbp-248h]
  int v126; // [rsp+94h] [rbp-244h]
  char *v127; // [rsp+98h] [rbp-240h]
  void *Src[2]; // [rsp+A0h] [rbp-238h] BYREF
  __int64 v129; // [rsp+B0h] [rbp-228h]
  unsigned int v130; // [rsp+B8h] [rbp-220h]
  __int128 v131; // [rsp+C0h] [rbp-218h] BYREF
  void *v132[2]; // [rsp+D0h] [rbp-208h]
  __int128 v133; // [rsp+E0h] [rbp-1F8h]
  __int64 v134; // [rsp+F0h] [rbp-1E8h]
  __int64 v135; // [rsp+100h] [rbp-1D8h]
  __int64 v136; // [rsp+108h] [rbp-1D0h] BYREF
  __int64 v137; // [rsp+110h] [rbp-1C8h]
  char *v138; // [rsp+118h] [rbp-1C0h]
  const void *v139; // [rsp+120h] [rbp-1B8h]
  __int64 v140; // [rsp+128h] [rbp-1B0h]
  char *v141; // [rsp+130h] [rbp-1A8h]
  _DWORD *v142; // [rsp+138h] [rbp-1A0h]
  _BYTE *v143; // [rsp+140h] [rbp-198h]
  char *v144; // [rsp+148h] [rbp-190h]
  char *v145; // [rsp+150h] [rbp-188h]
  unsigned __int64 v146; // [rsp+158h] [rbp-180h]
  unsigned __int64 v147; // [rsp+160h] [rbp-178h]
  unsigned __int64 v148; // [rsp+168h] [rbp-170h]
  unsigned __int64 v149; // [rsp+170h] [rbp-168h]
  _DWORD *v150; // [rsp+178h] [rbp-160h]
  _DWORD *v151; // [rsp+180h] [rbp-158h]
  unsigned __int64 v152; // [rsp+188h] [rbp-150h]
  char *v153; // [rsp+190h] [rbp-148h]
  unsigned __int16 *v154; // [rsp+198h] [rbp-140h]
  char *v155; // [rsp+1A0h] [rbp-138h]
  _PROCESSOR_NUMBER *v156; // [rsp+1A8h] [rbp-130h]
  _OWORD *v157; // [rsp+1B0h] [rbp-128h]
  unsigned __int64 v158; // [rsp+1B8h] [rbp-120h]
  _DWORD *v159; // [rsp+1C0h] [rbp-118h]
  const void *v160; // [rsp+1C8h] [rbp-110h]
  _QWORD *v161; // [rsp+1D8h] [rbp-100h]
  _QWORD *v162; // [rsp+1E8h] [rbp-F0h]
  void *v163; // [rsp+1F0h] [rbp-E8h]
  void *v164; // [rsp+1F8h] [rbp-E0h]
  unsigned __int64 v165; // [rsp+200h] [rbp-D8h]
  __int128 v166; // [rsp+210h] [rbp-C8h] BYREF
  __int64 v167; // [rsp+220h] [rbp-B8h]
  __int128 v168; // [rsp+230h] [rbp-A8h] BYREF
  __int64 v169; // [rsp+240h] [rbp-98h]
  __int64 v170; // [rsp+250h] [rbp-88h]
  __int64 v171; // [rsp+258h] [rbp-80h]
  __int128 v172; // [rsp+260h] [rbp-78h] BYREF
  __int64 v173; // [rsp+270h] [rbp-68h]
  __int128 v174; // [rsp+278h] [rbp-60h] BYREF
  __int64 v175; // [rsp+288h] [rbp-50h]
  int v177; // [rsp+2F0h] [rbp+18h]

  v177 = a3;
  v137 = a4;
  v4 = a2;
  v126 = a3;
  v5 = a4;
  v134 = a4;
  v114 = a4;
  v131 = 0LL;
  *(_OWORD *)v132 = 0LL;
  v133 = 0LL;
  *(_OWORD *)Src = 0LL;
  v129 = 0LL;
  v130 = 0;
  v174 = 0LL;
  v175 = 0LL;
  v172 = 0LL;
  v173 = 0LL;
  ProcNumber = 0;
  v123 = 0;
  v136 = 0LL;
  v135 = 0LL;
  v122 = 0;
  *(_BYTE *)a4 = a2;
  if ( a2 && ((unsigned __int8)a1 & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  v115 = *a1;
  if ( (unsigned __int64)*a1 < 0x28 )
    return 3221225485LL;
  if ( a2 && v115 != 40 && ((unsigned __int8)a1 & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  v116 = v115 - 8;
  if ( (v116 & 0x1F) != 0 )
    return 3221225485LL;
  v117 = v116 >> 5;
  v7 = a1 + 1;
  v113 = a1 + 1;
  while ( v117 )
  {
    v8 = *v7;
    v165 = *v7;
    if ( a3 && (v8 & 0x10000) == 0 )
      goto LABEL_14;
    if ( (v8 & 0x20000) != 0 && v7[3] )
      goto LABEL_14;
    v170 = 1LL << v8;
    v10 = *(_QWORD *)(v5 + 8);
    if ( (v10 & (1LL << v8)) != 0 )
      goto LABEL_14;
    *(_QWORD *)(v5 + 8) = (1LL << v8) | v10;
    if ( v8 > 0x20017 )
    {
      if ( v8 > 0x3001E )
      {
        v105 = v8 - 393216;
        if ( v105 )
        {
          v106 = v105 - 1;
          if ( v106 )
          {
            v107 = v106 - 1;
            if ( v107 )
            {
              v108 = v107 - 15;
              if ( !v108 )
              {
                if ( v7[1] != 1LL )
                  goto LABEL_14;
                v111.Level = *((_BYTE *)v7 + 16);
                *(PS_PROTECTION *)(v5 + 1) = v111;
                valid = RtlValidProcessProtection(v111);
                goto LABEL_172;
              }
              v109 = v108 - 9;
              if ( v109 )
              {
                v110 = v109 - 2;
                if ( v110 )
                {
                  if ( v110 != 3 || v7[1] != 4LL || (v7[2] & 0xFFFFFFFFFFFFFFF8uLL) != 0 )
                    goto LABEL_14;
                  *(_DWORD *)(v5 + 488) = *((_DWORD *)v7 + 4);
                }
                else
                {
                  if ( v7[1] != 2LL )
                    goto LABEL_14;
                  *(_WORD *)(v5 + 168) = *((_WORD *)v7 + 8);
                }
              }
              else
              {
                if ( v7[1] != 1LL )
                  goto LABEL_14;
                *(_BYTE *)(v5 + 17) = *(_BYTE *)(v5 + 17) & 0x7F | (v7[2] != 0LL ? 0x80 : 0);
              }
            }
            else
            {
              if ( v7[1] != 8LL )
                goto LABEL_14;
              *(_QWORD *)(v5 + 152) = v7[2];
            }
          }
          else
          {
            if ( v7[1] != 8LL )
              goto LABEL_14;
            *(_QWORD *)(v5 + 144) = v7[2];
          }
        }
        else
        {
          if ( v7[1] != 8LL )
            goto LABEL_14;
          *(_QWORD *)(v5 + 128) = v7[2];
        }
      }
      else if ( v8 == 196638 )
      {
        if ( !a3 || v7[1] != 8LL )
          goto LABEL_14;
        v103 = (_QWORD *)v7[2];
        v161 = v103;
        if ( v4 )
        {
          if ( ((unsigned __int8)v103 & 3) != 0 )
            ExRaiseDatatypeMisalignment();
          v7 = v113;
          v103 = v161;
        }
        v104 = *v103;
        *(_QWORD *)(v5 + 480) = *v103;
        v171 = MEMORY[0xFFFFF780000003D8] | MEMORY[0xFFFFF78000000708];
        if ( (~(MEMORY[0xFFFFF780000003D8] | MEMORY[0xFFFFF78000000708]) & v104) != 0 )
        {
LABEL_14:
          v9 = -1073741811;
          goto LABEL_330;
        }
        *(_QWORD *)(v5 + 480) = v104 & 0x40000;
      }
      else
      {
        v66 = v8 - 131096;
        if ( !v66 )
        {
          v86 = v7[1];
          if ( v86 != 40 )
            goto LABEL_14;
          v87 = (const void *)v7[2];
          v160 = v87;
          if ( a2 )
          {
            if ( ((unsigned __int8)v87 & 3) != 0 )
              ExRaiseDatatypeMisalignment();
            v7 = v113;
            v86 = 40LL;
            v87 = v160;
          }
          Pool2 = (void *)ExAllocatePool2(0x41uLL, v86, 0x70426E50u);
          *(_QWORD *)(v5 + 408) = Pool2;
          if ( !Pool2 )
            goto LABEL_62;
          v124 = 0;
          memmove(Pool2, v87, v86);
          v89 = v137;
          v90 = *(_QWORD *)(v5 + 408);
          v140 = v90;
          v91 = *(char **)(v90 + 8);
          v138 = v91;
          v92 = *(const void **)(v90 + 24);
          v139 = v92;
          *(_QWORD *)(v90 + 8) = 0LL;
          *(_QWORD *)(*(_QWORD *)(v5 + 408) + 24LL) = 0LL;
          v93 = *(unsigned __int16 *)(v90 + 2);
          if ( (_WORD)v93 )
          {
            if ( *(_WORD *)v90 > (unsigned __int16)v93
              || (*(_WORD *)v90 & 1) != 0
              || (v93 & 1) != 0
              || (_WORD)v93 == 0xFFFF
              || !v91 )
            {
              goto LABEL_14;
            }
            v94 = a2;
            if ( a2 && ((unsigned __int64)&v91[v93] > 0x7FFFFFFF0000LL || &v91[v93] < v91) )
            {
              v7 = v113;
              v91 = v138;
              v92 = v139;
              v90 = v140;
            }
          }
          else
          {
            v94 = a2;
          }
          v95 = *(unsigned int *)(*(_QWORD *)(v5 + 408) + 16LL);
          v96 = *(_QWORD *)(v5 + 408);
          if ( (_DWORD)v95 )
          {
            if ( !v92 || (unsigned int)v95 > 0xFFFF )
              goto LABEL_14;
            if ( v94 )
            {
              v97 = 8 * v95;
              if ( v97 )
              {
                if ( ((unsigned __int8)v92 & 3) != 0 )
                  ExRaiseDatatypeMisalignment();
                v98 = (unsigned __int64)v92 + v97;
                if ( v98 > 0x7FFFFFFF0000LL || v98 < (unsigned __int64)v92 )
                {
                  v96 = *(_QWORD *)(v89 + 408);
                  v7 = v113;
                  v91 = v138;
                  v92 = v139;
                  v90 = v140;
                }
              }
            }
          }
          v99 = 0LL;
          v141 = 0LL;
          v100 = *(unsigned __int16 *)(v90 + 2);
          if ( (_WORD)v100 || *(_DWORD *)(v96 + 16) )
          {
            v99 = (char *)ExAllocatePool2(0x41uLL, v100 + 8LL * *(unsigned int *)(v96 + 16), 0x70426E50u);
            v141 = v99;
          }
          v101 = *(unsigned __int16 *)(v90 + 2);
          if ( (_WORD)v101 )
          {
            *(_QWORD *)(v90 + 8) = v99;
            memmove(v99, v91, v101);
            v99 += *(unsigned __int16 *)(v90 + 2);
            v141 = v99;
          }
          v102 = *(_QWORD *)(v5 + 408);
          if ( *(_DWORD *)(v102 + 16) )
          {
            *(_QWORD *)(v102 + 24) = v99;
            memmove(
              *(void **)(*(_QWORD *)(v5 + 408) + 24LL),
              v92,
              8LL * *(unsigned int *)(*(_QWORD *)(v5 + 408) + 16LL));
          }
LABEL_299:
          v4 = a2;
          goto LABEL_58;
        }
        v67 = v66 - 1;
        if ( v67 )
        {
          v68 = v67 - 2;
          if ( !v68 )
          {
            v81 = v7[1];
            if ( v81 > 0x18 )
              goto LABEL_14;
            v174 = 0LL;
            v175 = 0LL;
            v7 = v113;
            v82 = v113[2];
            if ( v4 )
            {
              if ( v82 >= 0x7FFFFFFF0000LL )
                v82 = 0x7FFFFFFF0000LL;
              RtlCopyVolatileMemory(&v174, (const void *)v82, v81);
            }
            else
            {
              memmove(&v174, (const void *)v82, v81);
            }
            v83 = v174;
            v168 = v174;
            v84 = v175;
            v169 = v175;
            v9 = PspValidateMitigationAuditOptions(&v168);
            if ( v9 < 0 )
              goto LABEL_330;
            *(_OWORD *)(v5 + 448) = v83;
            *(_QWORD *)(v5 + 464) = v84;
            goto LABEL_58;
          }
          v69 = v68 - 2;
          if ( v69 )
          {
            v70 = v69 - 4;
            if ( v70 )
            {
              v71 = v70 - 65515;
              if ( !v71 )
              {
                if ( !a3 || v7[1] != 16LL )
                  goto LABEL_14;
                v74 = (_OWORD *)v7[2];
                v157 = v74;
                if ( v4 )
                {
                  if ( ((unsigned __int8)v74 & 3) != 0 )
                    ExRaiseDatatypeMisalignment();
                  v7 = v113;
                  v74 = v157;
                }
                *(_OWORD *)(v5 + 320) = *v74;
                valid = KeVerifyGroupAffinity(v5 + 320, 1);
LABEL_172:
                v56 = valid == 0;
                goto LABEL_173;
              }
              if ( v71 != 2 || !a3 || v7[1] != 4LL )
                goto LABEL_14;
              v72 = (_PROCESSOR_NUMBER *)v7[2];
              v156 = v72;
              if ( v4 )
              {
                if ( ((unsigned __int8)v72 & 1) != 0 )
                  ExRaiseDatatypeMisalignment();
                v7 = v113;
                v72 = v156;
              }
              ProcNumber = *v72;
              ProcessorIndexFromNumber = KeGetProcessorIndexFromNumber(&ProcNumber);
              *(_DWORD *)(v5 + 20) = ProcessorIndexFromNumber;
              v56 = ProcessorIndexFromNumber == -1;
LABEL_173:
              if ( v56 )
                goto LABEL_14;
            }
            else
            {
              if ( !(unsigned int)Feature_DecoupleAppContainerAndIntegrityLevel__private_IsEnabledDeviceUsageNoInline()
                || v7[1] < 0x20uLL )
              {
                goto LABEL_14;
              }
              v75 = (void *)v7[2];
              v164 = v75;
              if ( v4 )
              {
                if ( ((unsigned __int8)v75 & 3) != 0 )
                  ExRaiseDatatypeMisalignment();
                RtlCopyFromUser(Src, v75, 0x20uLL);
              }
              else
              {
                RtlCopyVolatileMemory(Src, v75, 0x20uLL);
              }
              if ( !LODWORD(Src[0]) )
                goto LABEL_14;
              if ( v4 )
              {
                if ( ((__int64)Src[1] & 3) != 0 )
                  ExRaiseDatatypeMisalignment();
                RtlCopyFromUser(&v131, Src[1], 0x30uLL);
              }
              else
              {
                RtlCopyVolatileMemory(&v131, Src[1], 0x30uLL);
              }
              if ( (unsigned int)v131 > 0x30 || !v132[0] )
                goto LABEL_14;
              if ( (_DWORD)v133 )
              {
                if ( !v132[1] )
                {
LABEL_236:
                  v9 = -1073741776;
                  goto LABEL_330;
                }
              }
              else if ( v132[1] )
              {
                goto LABEL_236;
              }
              v76 = (_DWORD *)ExAllocatePool2(0x100uLL, 0x30uLL, 0x63437350u);
              *(_QWORD *)(v5 + 504) = v76;
              if ( !v76 )
                goto LABEL_135;
              *(_DWORD *)(v5 + 496) = Src[0];
              *v76 = v131;
              *(_DWORD *)(*(_QWORD *)(v5 + 504) + 4LL) = DWORD1(v131);
              *(_QWORD *)(*(_QWORD *)(v5 + 504) + 8LL) = *((_QWORD *)&v131 + 1);
              *(_DWORD *)(*(_QWORD *)(v5 + 504) + 40LL) = DWORD2(v133);
              v9 = SeCaptureSid((_BYTE *)v132[0], v4, v77, v78, Tag, 1, (PSID *)(*(_QWORD *)(v5 + 504) + 16LL));
              if ( v9 < 0 )
                goto LABEL_330;
              if ( v132[1] )
              {
                Tag = 0;
                LOBYTE(v79) = v4;
                v9 = SeCaptureSidAndAttributesArray(v132[1], (unsigned int)v133, v79, 0LL);
                if ( v9 < 0 )
                  goto LABEL_330;
                *(_DWORD *)(*(_QWORD *)(v5 + 504) + 32LL) = v133;
              }
              v9 = SeCaptureHandles(v130, v129, (__int64 *)(v5 + 512));
              if ( v9 < 0 )
                goto LABEL_330;
              *(_DWORD *)(v5 + 520) = v130;
            }
LABEL_58:
            a4 = v114;
LABEL_59:
            a3 = v177;
            goto LABEL_60;
          }
          if ( v7[1] != 4LL )
            goto LABEL_14;
          v80 = v7[2];
          v158 = v80;
          if ( v4 )
          {
            if ( (v80 & 3) != 0 )
              ExRaiseDatatypeMisalignment();
            if ( v80 + 4 > 0x7FFFFFFF0000LL || v80 + 4 < v80 )
            {
              v7 = v113;
              v80 = v158;
            }
          }
          if ( (*(_DWORD *)v80 & 0xFFFFFFFE) != 0 )
            return 3221225485LL;
          *(_QWORD *)(v5 + 440) = v80;
        }
        else
        {
          if ( v7[1] != 4LL )
            goto LABEL_14;
          v85 = (_DWORD *)v7[2];
          v159 = v85;
          if ( v4 )
          {
            if ( ((unsigned __int8)v85 & 3) != 0 )
              ExRaiseDatatypeMisalignment();
            v7 = v113;
            v85 = v159;
          }
          *(_DWORD *)(v5 + 392) = *v85;
        }
      }
    }
    else
    {
      if ( v8 == 131095 )
      {
        v63 = v7[1];
        if ( v63 != 524 )
          goto LABEL_14;
        v64 = (char *)v7[2];
        v155 = v64;
        if ( v4 && ((unsigned __int64)(v64 + 524) > 0x7FFFFFFF0000LL || v64 + 524 < v64) )
        {
          v7 = v113;
          v63 = 524LL;
          v64 = v155;
        }
        v65 = (void *)ExAllocatePool2(0x41uLL, v63, 0x634F7350u);
        *(_QWORD *)(v5 + 400) = v65;
        if ( !v65 )
          goto LABEL_62;
        memmove(v65, v64, v63);
        *(_DWORD *)(v5 + 396) = v63;
        if ( (**(_DWORD **)(v5 + 400) & 0x40) != 0 )
          goto LABEL_14;
        goto LABEL_58;
      }
      if ( v8 > 0x2000B )
      {
        v37 = v8 - 131085;
        if ( !v37 )
        {
          if ( v7[1] != 2LL )
            goto LABEL_14;
          v61 = (unsigned __int16 *)v7[2];
          v154 = v61;
          if ( v4 )
          {
            if ( ((unsigned __int8)v61 & 1) != 0 )
              ExRaiseDatatypeMisalignment();
            v7 = v113;
            v61 = v154;
          }
          v62 = *v61;
          v125 = v62;
          if ( (unsigned __int16)v62 >= (unsigned __int16)KeNumberNodes
            || (unsigned int)KeIsEmptyGroupMask((unsigned __int64 *)(KeNodeBlock[v62] + 16)) )
          {
            goto LABEL_14;
          }
          *(_WORD *)(v5 + 170) = v62;
          goto LABEL_58;
        }
        v38 = v37 - 3;
        if ( !v38 )
        {
          v57 = v7[1];
          if ( v57 > 0x18 )
            goto LABEL_14;
          v172 = 0LL;
          v173 = 0LL;
          v7 = v113;
          v58 = v113[2];
          if ( v4 )
          {
            if ( v58 >= 0x7FFFFFFF0000LL )
              v58 = 0x7FFFFFFF0000LL;
            RtlCopyVolatileMemory(&v172, (const void *)v58, v57);
          }
          else
          {
            memmove(&v172, (const void *)v58, v57);
          }
          v59 = v172;
          v166 = v172;
          v60 = v173;
          v167 = v173;
          v9 = PspValidateMitigationOptions(&v166, 0LL);
          if ( v9 < 0 )
            goto LABEL_330;
          *(_OWORD *)(v5 + 336) = v59;
          *(_QWORD *)(v5 + 352) = v60;
          goto LABEL_58;
        }
        v39 = v38 - 2;
        if ( !v39 )
        {
          v52 = v7[1];
          if ( !v52 || (v52 & 7) != 0 || v52 > 0x88 )
            goto LABEL_14;
          v53 = (char *)v7[2];
          v153 = v53;
          if ( v4 )
          {
            if ( ((unsigned __int8)v53 & 3) != 0 )
              ExRaiseDatatypeMisalignment();
            if ( (unsigned __int64)&v53[v52] > 0x7FFFFFFF0000LL || &v53[v52] < v53 )
            {
              v7 = v113;
              v53 = v153;
            }
          }
          v54 = (void *)ExAllocatePool2(0x41uLL, v52, 0x61547350u);
          *(_QWORD *)(v5 + 360) = v54;
          if ( !v54 )
          {
LABEL_62:
            v9 = -1073741670;
            goto LABEL_330;
          }
          memmove(v54, v53, v52);
          *(_DWORD *)(v5 + 376) = v52;
          valid = IsTrustletCreateAttributeWellFormed(*(_QWORD **)(v5 + 360), v52);
          goto LABEL_172;
        }
        v40 = v39 - 1;
        if ( !v40 )
        {
          v48 = v7[1];
          if ( !v48 || (v48 & 7) != 0 || (v48 & 0xFFFFFFFFFFFFFFF8uLL) > 0x7FFFFFFF8LL )
            goto LABEL_14;
          v49 = v7[2];
          v127 = (char *)v49;
          if ( a2 )
          {
            if ( (v49 & 3) != 0 )
              ExRaiseDatatypeMisalignment();
            if ( v48 + v49 > 0x7FFFFFFF0000LL || v48 + v49 < v49 )
            {
              v7 = v113;
              v49 = (ULONG_PTR)v127;
            }
          }
          v50 = ExAllocatePool2(0x41uLL, v48, 0x6C4A7350u);
          *(_QWORD *)(v5 + 368) = v50;
          if ( !v50 )
            goto LABEL_62;
          *(_DWORD *)(v5 + 380) = v48 >> 3;
          v51 = 0LL;
          v152 = 0LL;
          while ( v51 < *(unsigned int *)(v5 + 380) )
          {
            v9 = ObpReferenceObjectByHandleWithTag(
                   *(_QWORD *)(v49 + 8 * v51),
                   1,
                   (__int64)PsJobType,
                   a2,
                   0x6C4A7350u,
                   &v136,
                   0LL,
                   0LL);
            if ( v9 < 0 )
              goto LABEL_330;
            *(_QWORD *)(*(_QWORD *)(v5 + 368) + 8 * v51++) = v136;
            v152 = v51;
          }
          goto LABEL_299;
        }
        v41 = v40 - 1;
        if ( v41 )
        {
          v42 = v41 - 1;
          if ( v42 )
          {
            if ( v42 != 1 || v7[1] != 8LL )
              goto LABEL_14;
            v43 = v7[2];
            v149 = v43;
            if ( v4 )
            {
              if ( (v43 & 3) != 0 )
                ExRaiseDatatypeMisalignment();
              if ( v43 + 8 > 0x7FFFFFFF0000LL || v43 + 8 < v43 )
              {
                v7 = v113;
                v43 = v149;
              }
            }
            v44 = (_QWORD *)ExAllocatePool2(0x41uLL, 8uLL, 0x77736350u);
            *(_QWORD *)(v5 + 432) = v44;
            if ( !v44 )
            {
LABEL_135:
              v9 = -1073741801;
              goto LABEL_330;
            }
            *v44 = *(_QWORD *)v43;
            v45 = *(_DWORD **)(v5 + 432);
            if ( (*v45 & 3) == 0 || (unsigned int)(v45[1] - 1) > 5 )
              goto LABEL_14;
            goto LABEL_58;
          }
          if ( v7[1] != 4LL )
            goto LABEL_14;
          v46 = (_DWORD *)v7[2];
          v150 = v46;
          if ( v4 )
          {
            if ( ((unsigned __int8)v46 & 3) != 0 )
              ExRaiseDatatypeMisalignment();
            v7 = v113;
            v46 = v150;
          }
          *(_DWORD *)(v5 + 388) = *v46;
        }
        else
        {
          if ( v7[1] != 4LL )
            goto LABEL_14;
          v47 = (_DWORD *)v7[2];
          v151 = v47;
          if ( v4 )
          {
            if ( ((unsigned __int8)v47 & 3) != 0 )
              ExRaiseDatatypeMisalignment();
            v7 = v113;
            v47 = v151;
          }
          *(_DWORD *)(v5 + 384) = *v47;
        }
      }
      else
      {
        if ( v8 == 131083 )
        {
          v34 = v7[1];
          if ( !v34 || (v34 & 7) != 0 || (v34 & 0xFFFFFFFFFFFFFFF8uLL) > 0x7FFFFFFF8LL )
            goto LABEL_14;
          v35 = (char *)v7[2];
          v127 = v35;
          if ( v4 )
          {
            if ( ((unsigned __int8)v35 & 3) != 0 )
              ExRaiseDatatypeMisalignment();
            if ( (unsigned __int64)&v35[v34] > 0x7FFFFFFF0000LL || &v35[v34] < v35 )
            {
              v7 = v113;
              v35 = v127;
            }
          }
          v36 = (void *)ExAllocatePool2(0x41uLL, v34, 0x6C487350u);
          *(_QWORD *)(v5 + 296) = v36;
          if ( !v36 )
            goto LABEL_62;
          memmove(v36, v35, v34);
          *(_DWORD *)(v5 + 292) = v34 >> 3;
          goto LABEL_58;
        }
        v11 = v8 - 6;
        if ( v11 )
        {
          v12 = v11 - 65533;
          if ( v12 )
          {
            v13 = v12 - 1;
            if ( v13 )
            {
              v14 = v13 - 65537;
              if ( !v14 )
              {
                v25 = v7[1];
                if ( !v25 || (v25 & 1) != 0 || v25 > 0xFFFF )
                  goto LABEL_14;
                v26 = (char *)v7[2];
                v145 = v26;
                if ( v4 && ((unsigned __int64)&v26[v25] > 0x7FFFFFFF0000LL || &v26[v25] < v26) )
                {
                  v7 = v113;
                  v26 = v145;
                }
                v27 = (void *)ExAllocatePool2(0x41uLL, v25, 0x6E467350u);
                v163 = v27;
                if ( !v27 )
                  goto LABEL_62;
                *(_OWORD *)(v5 + 240) = 0LL;
                *(_WORD *)(v5 + 242) = v25;
                *(_QWORD *)(v5 + 248) = v27;
                memmove(v27, v26, v25);
                *(_WORD *)(v5 + 240) = v25;
                goto LABEL_58;
              }
              v15 = v14 - 2;
              if ( !v15 )
              {
                v22 = v7[1];
                if ( !v22 || (v22 & 0xF) != 0 )
                  goto LABEL_14;
                v23 = (char *)v7[2];
                v144 = v23;
                if ( v4 )
                {
                  if ( ((unsigned __int8)v23 & 3) != 0 )
                    ExRaiseDatatypeMisalignment();
                  if ( (unsigned __int64)&v23[v22] > 0x7FFFFFFF0000LL || &v23[v22] < v23 )
                  {
                    v7 = v113;
                    v23 = v144;
                  }
                }
                if ( v22 > 0x10 )
                {
                  v24 = (void *)ExAllocatePool2(0x41uLL, v22, 0x6C527350u);
                  *(_QWORD *)(v114 + 280) = v24;
                  if ( !v24 )
                    goto LABEL_62;
                }
                else
                {
                  v24 = (void *)(v5 + 264);
                  *(_QWORD *)(a4 + 280) = v5 + 264;
                }
                memmove(v24, v23, v22);
                *(_QWORD *)(v5 + 256) = v22 >> 4;
                goto LABEL_58;
              }
              v16 = v15 - 1;
              if ( v16 )
              {
                v17 = v16 - 1;
                if ( v17 )
                {
                  if ( v17 != 1 || v7[1] != 8LL )
                    goto LABEL_14;
                  v18 = (_QWORD *)v7[2];
                  v162 = v18;
                  if ( v4 )
                  {
                    if ( ((unsigned __int8)v18 & 3) != 0 )
                      ExRaiseDatatypeMisalignment();
                    v7 = v113;
                    v18 = v162;
                  }
                  v135 = 0LL;
                  v19 = *v18;
                  v135 = v19;
                  if ( (v19 & 0x1C) != 0 )
                  {
                    v9 = -1073741637;
                    goto LABEL_330;
                  }
                  v122 = v19 & 3;
                  if ( (v19 & 3) == 3 )
                    goto LABEL_14;
                  *(_BYTE *)(v5 + 17) = *(_BYTE *)(v5 + 17) & 0xF3 | (4 * (v19 & 3));
                  if ( (v19 & 3) == 1 )
                    *(_DWORD *)(v5 + 288) = HIDWORD(v19);
                  goto LABEL_59;
                }
                if ( v7[1] != 4LL )
                  goto LABEL_14;
                v20 = (_DWORD *)v7[2];
                v142 = v20;
                if ( v4 )
                {
                  if ( ((unsigned __int8)v20 & 3) != 0 )
                    ExRaiseDatatypeMisalignment();
                  v7 = v113;
                  v20 = v142;
                }
                *(_DWORD *)(v5 + 316) = *v20;
              }
              else
              {
                if ( v7[1] != 1LL )
                  goto LABEL_14;
                v21 = (_BYTE *)v7[2];
                v143 = v21;
                if ( v4 )
                {
                  v7 = v113;
                  v21 = v143;
                }
                *(_BYTE *)(v5 + 2) = *v21;
              }
            }
            else
            {
              if ( v7[1] != 8LL )
                goto LABEL_14;
              v28 = v7[2];
              v146 = v28;
              if ( v4 )
              {
                if ( (v28 & 3) != 0 )
                  ExRaiseDatatypeMisalignment();
                if ( v28 >= 0x7FFFFFFF0000LL )
                  v28 = 0x7FFFFFFF0000LL;
                *(_BYTE *)v28 = *(_BYTE *)v28;
                *(_BYTE *)(v28 + 7) = *(_BYTE *)(v28 + 7);
                v7 = v113;
                v28 = v146;
              }
              *(_QWORD *)(v5 + 32) = v28;
              v29 = v7[3];
              v118 = v29;
              if ( v29 )
              {
                if ( v4 )
                {
                  if ( (v29 & 3) != 0 )
                    ExRaiseDatatypeMisalignment();
                  if ( v29 >= 0x7FFFFFFF0000LL )
                    v29 = 0x7FFFFFFF0000LL;
                  *(_BYTE *)v29 = *(_BYTE *)v29;
                  *(_BYTE *)(v29 + 7) = *(_BYTE *)(v29 + 7);
                  v7 = v113;
                  v29 = v118;
                }
                *(_QWORD *)v29 = 8LL;
              }
            }
          }
          else
          {
            if ( v7[1] != 16LL )
              goto LABEL_14;
            v30 = v7[2];
            v147 = v30;
            if ( v4 )
            {
              if ( (v30 & 3) != 0 )
                ExRaiseDatatypeMisalignment();
              if ( v30 >= 0x7FFFFFFF0000LL )
                v30 = 0x7FFFFFFF0000LL;
              *(_BYTE *)v30 = *(_BYTE *)v30;
              *(_BYTE *)(v30 + 15) = *(_BYTE *)(v30 + 15);
              v30 = v147;
              v7 = v113;
            }
            *(_QWORD *)(v5 + 24) = v30;
            v31 = v7[3];
            v119 = v31;
            if ( v31 )
            {
              if ( v4 )
              {
                if ( (v31 & 3) != 0 )
                  ExRaiseDatatypeMisalignment();
                if ( v31 >= 0x7FFFFFFF0000LL )
                  v31 = 0x7FFFFFFF0000LL;
                *(_BYTE *)v31 = *(_BYTE *)v31;
                *(_BYTE *)(v31 + 7) = *(_BYTE *)(v31 + 7);
                v7 = v113;
                v31 = v119;
              }
              *(_QWORD *)v31 = 16LL;
            }
          }
        }
        else
        {
          if ( v7[1] != 64LL )
            goto LABEL_14;
          v32 = v7[2];
          v148 = v32;
          if ( v4 )
          {
            if ( (v32 & 3) != 0 )
              ExRaiseDatatypeMisalignment();
            if ( v32 >= 0x7FFFFFFF0000LL )
              v32 = 0x7FFFFFFF0000LL;
            *(_BYTE *)v32 = *(_BYTE *)v32;
            *(_BYTE *)(v32 + 63) = *(_BYTE *)(v32 + 63);
            v7 = v113;
            v32 = v148;
          }
          *(_QWORD *)(v5 + 40) = v32;
          v33 = v7[3];
          v120 = v33;
          if ( v33 )
          {
            if ( v4 )
            {
              if ( (v33 & 3) != 0 )
                ExRaiseDatatypeMisalignment();
              if ( v33 >= 0x7FFFFFFF0000LL )
                v33 = 0x7FFFFFFF0000LL;
              *(_BYTE *)v33 = *(_BYTE *)v33;
              *(_BYTE *)(v33 + 7) = *(_BYTE *)(v33 + 7);
              v7 = v113;
              v33 = v120;
            }
            *(_QWORD *)v33 = 64LL;
          }
        }
      }
    }
LABEL_60:
    v7 += 4;
    v113 = v7;
    --v117;
  }
  v9 = 0;
LABEL_330:
  if ( v9 < 0 )
    goto LABEL_336;
  if ( (*(_DWORD *)(v5 + 8) & 0x800LL) != 0 )
  {
    qsort(*(void **)(v5 + 296), *(unsigned int *)(v5 + 292), 8uLL, PspSortHandleList);
    if ( **(int **)(v5 + 296) < 0 )
      v9 = -1073741811;
    *(_BYTE *)(v5 + 16) = *(_BYTE *)(v5 + 16) & 0xFE | (v126 != 0);
  }
  if ( v9 < 0 )
LABEL_336:
    PspDeleteCreateProcessContext(v5);
  return (unsigned int)v9;
}
