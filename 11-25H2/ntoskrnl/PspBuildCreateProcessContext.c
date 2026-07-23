/*
 * XREFs of PspBuildCreateProcessContext @ 0x1408F0220
 * Callers:
 *     PsCreateMinimalProcess @ 0x140769B14 (PsCreateMinimalProcess.c)
 *     NtCreateThreadEx @ 0x1408EFF10 (NtCreateThreadEx.c)
 *     NtCreateUserProcess @ 0x1409BC1D0 (NtCreateUserProcess.c)
 * Callees:
 *     KeIsEmptyGroupMask @ 0x140304FE8 (KeIsEmptyGroupMask.c)
 *     KeGetProcessorIndexFromNumber @ 0x1403B30F0 (KeGetProcessorIndexFromNumber.c)
 *     KeVerifyGroupAffinity @ 0x140471198 (KeVerifyGroupAffinity.c)
 *     IsTrustletCreateAttributeWellFormed @ 0x1404D294C (IsTrustletCreateAttributeWellFormed.c)
 *     qsort @ 0x1404FC5A0 (qsort.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x1406AAA20 (RtlCopyVolatileMemory.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x14084FA30 (ObpReferenceObjectByHandleWithTag.c)
 *     ExRaiseDatatypeMisalignment @ 0x14085AF60 (ExRaiseDatatypeMisalignment.c)
 *     PspDeleteCreateProcessContext @ 0x1408F1B10 (PspDeleteCreateProcessContext.c)
 *     PspValidateMitigationOptions @ 0x1409C0E9C (PspValidateMitigationOptions.c)
 *     RtlValidProcessProtection @ 0x140A7EFC0 (RtlValidProcessProtection.c)
 *     PspValidateMitigationAuditOptions @ 0x140A96540 (PspValidateMitigationAuditOptions.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 */

__int64 __fastcall PspBuildCreateProcessContext(__int64 *a1, char a2, int a3, char *a4)
{
  char v4; // r9
  char *v5; // r14
  char *v6; // r12
  _QWORD *v7; // rdi
  unsigned __int64 v8; // rax
  __int64 v9; // rcx
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // rcx
  int v17; // ebx
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // rax
  size_t v22; // rbx
  char *v23; // r15
  void *v24; // rax
  unsigned __int64 v25; // rax
  unsigned __int64 v26; // rax
  unsigned __int64 v27; // rax
  size_t v28; // r8
  unsigned __int64 v29; // rdx
  __int128 v30; // xmm2
  __int64 v31; // xmm3_8
  unsigned __int64 v32; // rcx
  unsigned __int64 v33; // rcx
  unsigned __int64 v34; // rax
  unsigned __int64 v35; // rax
  unsigned __int64 v36; // rax
  unsigned __int64 v37; // rax
  unsigned __int64 v38; // rax
  unsigned __int64 v39; // rax
  unsigned __int64 v40; // rax
  unsigned __int64 v41; // rcx
  size_t v42; // rbx
  char *v43; // r15
  void *v44; // rax
  unsigned __int64 v45; // rax
  unsigned __int64 v46; // rax
  unsigned __int64 v47; // rbx
  char *v48; // r12
  __int64 v49; // rax
  unsigned __int64 v50; // r15
  unsigned __int64 v51; // rax
  _QWORD *v52; // rax
  __int64 v53; // rax
  unsigned __int64 v54; // rax
  _DWORD *v55; // rax
  unsigned __int64 v56; // rax
  _PROCESSOR_NUMBER *v57; // rax
  ULONG ProcessorIndexFromNumber; // eax
  bool v59; // zf
  unsigned __int16 *v60; // rax
  __int64 v61; // rbx
  unsigned __int64 v63; // rax
  unsigned __int64 v64; // rax
  _DWORD *v65; // rax
  _BYTE *v66; // rax
  size_t v67; // rbx
  char *v68; // r15
  void *v69; // rax
  _DWORD *v70; // rax
  size_t v71; // rbx
  char *v72; // r15
  void *v73; // rax
  char valid; // al
  PS_PROTECTION v75; // cl
  unsigned __int64 v76; // rbx
  _QWORD *v77; // rax
  _DWORD *v78; // rcx
  _OWORD *v79; // rax
  size_t v80; // r8
  unsigned __int64 v81; // rdx
  __int128 v82; // xmm2
  __int64 v83; // xmm3_8
  _DWORD *v84; // rax
  size_t v85; // r12
  const void *v86; // r15
  void *v87; // rax
  char *v88; // r10
  __int64 v89; // r15
  char *v90; // r13
  const void *v91; // r12
  __int64 v92; // rax
  char v93; // r9
  __int64 v94; // rdx
  __int64 v95; // rax
  __int64 v96; // rdx
  unsigned __int64 v97; // rdx
  char *v98; // rbx
  unsigned int v99; // eax
  __int64 v100; // rax
  size_t v101; // rbx
  char *v102; // r15
  void *Pool2; // rax
  _QWORD *v104; // rax
  __int64 v105; // rdx
  _QWORD *v106; // [rsp+48h] [rbp-220h]
  __int64 v107; // [rsp+58h] [rbp-210h]
  unsigned __int64 v108; // [rsp+58h] [rbp-210h]
  unsigned __int64 v109; // [rsp+58h] [rbp-210h]
  _PROCESSOR_NUMBER ProcNumber; // [rsp+60h] [rbp-208h] BYREF
  unsigned __int64 v111; // [rsp+68h] [rbp-200h]
  __int16 v112; // [rsp+70h] [rbp-1F8h]
  int v113; // [rsp+74h] [rbp-1F4h]
  int v114; // [rsp+78h] [rbp-1F0h]
  int v115; // [rsp+7Ch] [rbp-1ECh]
  char *v116; // [rsp+80h] [rbp-1E8h]
  char *v117; // [rsp+88h] [rbp-1E0h]
  char *v118; // [rsp+90h] [rbp-1D8h]
  __int64 v119; // [rsp+A0h] [rbp-1C8h]
  __int64 v120; // [rsp+A8h] [rbp-1C0h] BYREF
  char *v121; // [rsp+B0h] [rbp-1B8h]
  char *v122; // [rsp+B8h] [rbp-1B0h]
  const void *v123; // [rsp+C0h] [rbp-1A8h]
  __int64 v124; // [rsp+C8h] [rbp-1A0h]
  char *v125; // [rsp+D0h] [rbp-198h]
  _DWORD *v126; // [rsp+E0h] [rbp-188h]
  _BYTE *v127; // [rsp+E8h] [rbp-180h]
  char *v128; // [rsp+F0h] [rbp-178h]
  char *v129; // [rsp+F8h] [rbp-170h]
  unsigned __int64 v130; // [rsp+100h] [rbp-168h]
  unsigned __int64 v131; // [rsp+108h] [rbp-160h]
  unsigned __int64 v132; // [rsp+110h] [rbp-158h]
  _QWORD *v133; // [rsp+118h] [rbp-150h]
  _DWORD *v134; // [rsp+120h] [rbp-148h]
  _DWORD *v135; // [rsp+128h] [rbp-140h]
  unsigned __int64 v136; // [rsp+130h] [rbp-138h]
  char *v137; // [rsp+138h] [rbp-130h]
  unsigned __int16 *v138; // [rsp+140h] [rbp-128h]
  unsigned __int64 v139; // [rsp+148h] [rbp-120h]
  _PROCESSOR_NUMBER *v140; // [rsp+150h] [rbp-118h]
  _OWORD *v141; // [rsp+158h] [rbp-110h]
  unsigned __int64 v142; // [rsp+160h] [rbp-108h]
  _DWORD *v143; // [rsp+168h] [rbp-100h]
  const void *v144; // [rsp+170h] [rbp-F8h]
  char *v145; // [rsp+180h] [rbp-E8h]
  _QWORD *v146; // [rsp+188h] [rbp-E0h]
  unsigned __int64 v147; // [rsp+190h] [rbp-D8h]
  __int64 v148; // [rsp+198h] [rbp-D0h]
  void *v149; // [rsp+1A0h] [rbp-C8h]
  __int64 v150; // [rsp+1A8h] [rbp-C0h]
  __int128 v151; // [rsp+1B0h] [rbp-B8h] BYREF
  __int64 v152; // [rsp+1C0h] [rbp-A8h]
  __int128 v153; // [rsp+1D0h] [rbp-98h] BYREF
  __int64 v154; // [rsp+1E0h] [rbp-88h]
  __int128 v155; // [rsp+1F0h] [rbp-78h] BYREF
  __int64 v156; // [rsp+200h] [rbp-68h]
  __int128 v157; // [rsp+208h] [rbp-60h] BYREF
  __int64 v158; // [rsp+218h] [rbp-50h]
  int v160; // [rsp+280h] [rbp+18h]

  v160 = a3;
  v121 = a4;
  v4 = a2;
  v115 = a3;
  v5 = v121;
  v118 = v121;
  v6 = v121;
  v116 = v121;
  v157 = 0LL;
  v158 = 0LL;
  v155 = 0LL;
  v156 = 0LL;
  ProcNumber = 0;
  v120 = 0LL;
  v119 = 0LL;
  v113 = 0;
  *v121 = a2;
  if ( a2 && ((unsigned __int8)a1 & 3) != 0 )
LABEL_36:
    ExRaiseDatatypeMisalignment();
  v107 = *a1;
  if ( (unsigned __int64)*a1 < 0x28 )
    return 3221225485LL;
  if ( a2 && v107 != 40 && ((unsigned __int8)a1 & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  v108 = v107 - 8;
  if ( (v108 & 0x1F) != 0 )
    return 3221225485LL;
  v109 = v108 >> 5;
  v7 = a1 + 1;
  v106 = a1 + 1;
  while ( 1 )
  {
    if ( !v109 )
    {
      v17 = 0;
      goto LABEL_315;
    }
    v8 = *v7;
    v147 = *v7;
    if ( a3 && (v8 & 0x10000) == 0
      || (v8 & 0x20000) != 0 && v7[3]
      || (v148 = 1LL << v8, v9 = *((_QWORD *)v5 + 1), (v9 & (1LL << v8)) != 0) )
    {
LABEL_47:
      v17 = -1073741811;
      goto LABEL_315;
    }
    *((_QWORD *)v5 + 1) = (1LL << v8) | v9;
    if ( v8 > 0x20016 )
    {
      if ( v8 <= 0x3001E )
      {
        if ( v8 == 196638 )
        {
          if ( !a3 || v7[1] != 8LL )
            goto LABEL_47;
          v104 = (_QWORD *)v7[2];
          v146 = v104;
          if ( v4 )
          {
            if ( ((unsigned __int8)v104 & 3) != 0 )
              goto LABEL_36;
            v7 = v106;
            v104 = v146;
          }
          v105 = *v104;
          *((_QWORD *)v5 + 60) = *v104;
          v150 = MEMORY[0xFFFFF780000003D8] | MEMORY[0xFFFFF78000000708];
          if ( (~(MEMORY[0xFFFFF780000003D8] | MEMORY[0xFFFFF78000000708]) & v105) != 0 )
            goto LABEL_47;
          *((_QWORD *)v5 + 60) = v105 & 0x40000;
        }
        else
        {
          v36 = v8 - 131095;
          if ( !v36 )
          {
            v101 = v7[1];
            if ( v101 != 524 )
              goto LABEL_47;
            v102 = (char *)v7[2];
            v145 = v102;
            if ( v4 && ((unsigned __int64)(v102 + 524) > 0x7FFFFFFF0000LL || v102 + 524 < v102) )
            {
              v7 = v106;
              v101 = 524LL;
              v102 = v145;
            }
            Pool2 = (void *)ExAllocatePool2(0x41uLL);
            *((_QWORD *)v5 + 50) = Pool2;
            if ( !Pool2 )
              goto LABEL_191;
            memmove(Pool2, v102, v101);
            *((_DWORD *)v5 + 99) = v101;
            if ( (**((_DWORD **)v5 + 50) & 0x40) != 0 )
              goto LABEL_47;
            goto LABEL_67;
          }
          v37 = v36 - 1;
          if ( !v37 )
          {
            v85 = v7[1];
            if ( v85 != 40 )
              goto LABEL_47;
            v86 = (const void *)v7[2];
            v144 = v86;
            if ( v4 )
            {
              if ( ((unsigned __int8)v86 & 3) != 0 )
                goto LABEL_36;
              v7 = v106;
              v85 = 40LL;
              v86 = v144;
            }
            v87 = (void *)ExAllocatePool2(0x41uLL);
            *((_QWORD *)v5 + 51) = v87;
            if ( !v87 )
              goto LABEL_191;
            v114 = 0;
            memmove(v87, v86, v85);
            v88 = v121;
            v89 = *((_QWORD *)v5 + 51);
            v124 = v89;
            v90 = *(char **)(v89 + 8);
            v122 = v90;
            v91 = *(const void **)(v89 + 24);
            v123 = v91;
            *(_QWORD *)(v89 + 8) = 0LL;
            *(_QWORD *)(*((_QWORD *)v5 + 51) + 24LL) = 0LL;
            v92 = *(unsigned __int16 *)(v89 + 2);
            if ( (_WORD)v92 )
            {
              if ( *(_WORD *)v89 > (unsigned __int16)v92
                || (((unsigned __int16)v92 | *(_WORD *)v89) & 1) != 0
                || (_WORD)v92 == 0xFFFF
                || !v90 )
              {
                goto LABEL_47;
              }
              v93 = a2;
              if ( a2 && ((unsigned __int64)&v90[v92] > 0x7FFFFFFF0000LL || &v90[v92] < v90) )
              {
                v7 = v106;
                v90 = v122;
                v91 = v123;
                v89 = v124;
              }
            }
            else
            {
              v93 = a2;
            }
            v94 = *(unsigned int *)(*((_QWORD *)v5 + 51) + 16LL);
            v95 = *((_QWORD *)v5 + 51);
            if ( (_DWORD)v94 )
            {
              if ( !v91 || (unsigned int)v94 > 0xFFFF )
                goto LABEL_47;
              if ( v93 )
              {
                v96 = 8 * v94;
                if ( v96 )
                {
                  if ( ((unsigned __int8)v91 & 3) != 0 )
                    ExRaiseDatatypeMisalignment();
                  v97 = (unsigned __int64)v91 + v96;
                  if ( v97 > 0x7FFFFFFF0000LL || v97 < (unsigned __int64)v91 )
                  {
                    v95 = *((_QWORD *)v88 + 51);
                    v7 = v106;
                    v90 = v122;
                    v91 = v123;
                    v89 = v124;
                  }
                }
              }
            }
            v98 = 0LL;
            v125 = 0LL;
            if ( *(_WORD *)(v89 + 2) || *(_DWORD *)(v95 + 16) )
            {
              v98 = (char *)ExAllocatePool2(0x41uLL);
              v125 = v98;
            }
            v99 = *(unsigned __int16 *)(v89 + 2);
            if ( (_WORD)v99 )
            {
              *(_QWORD *)(v89 + 8) = v98;
              memmove(v98, v90, v99);
              v98 += *(unsigned __int16 *)(v89 + 2);
              v125 = v98;
            }
            v100 = *((_QWORD *)v5 + 51);
            if ( *(_DWORD *)(v100 + 16) )
            {
              *(_QWORD *)(v100 + 24) = v98;
              memmove(
                *(void **)(*((_QWORD *)v5 + 51) + 24LL),
                v91,
                8LL * *(unsigned int *)(*((_QWORD *)v5 + 51) + 16LL));
            }
LABEL_130:
            v6 = v116;
            goto LABEL_67;
          }
          v38 = v37 - 1;
          if ( v38 )
          {
            v39 = v38 - 2;
            if ( !v39 )
            {
              v80 = v7[1];
              if ( v80 > 0x18 )
                goto LABEL_47;
              v157 = 0LL;
              v158 = 0LL;
              v7 = v106;
              v81 = v106[2];
              if ( v4 )
              {
                if ( v81 >= 0x7FFFFFFF0000LL )
                  v81 = 0x7FFFFFFF0000LL;
                RtlCopyVolatileMemory(&v157, (const void *)v81, v80);
              }
              else
              {
                memmove(&v157, (const void *)v81, v80);
              }
              v82 = v157;
              v153 = v157;
              v83 = v158;
              v154 = v158;
              v17 = PspValidateMitigationAuditOptions(&v153);
              if ( v17 < 0 )
                goto LABEL_315;
              *((_OWORD *)v5 + 28) = v82;
              *((_QWORD *)v5 + 58) = v83;
              goto LABEL_67;
            }
            v40 = v39 - 2;
            if ( v40 )
            {
              v56 = v40 - 65519;
              if ( !v56 )
              {
                if ( !a3 || v7[1] != 16LL )
                  goto LABEL_47;
                v79 = (_OWORD *)v7[2];
                v141 = v79;
                if ( v4 )
                {
                  if ( ((unsigned __int8)v79 & 3) != 0 )
                    goto LABEL_36;
                  v7 = v106;
                  v79 = v141;
                }
                *((_OWORD *)v5 + 20) = *v79;
                valid = KeVerifyGroupAffinity((__int64)(v5 + 320), 1);
                goto LABEL_216;
              }
              if ( v56 != 2 || !a3 || v7[1] != 4LL )
                goto LABEL_47;
              v57 = (_PROCESSOR_NUMBER *)v7[2];
              v140 = v57;
              if ( v4 )
              {
                if ( ((unsigned __int8)v57 & 1) != 0 )
                  goto LABEL_36;
                v7 = v106;
                v57 = v140;
              }
              ProcNumber = *v57;
              ProcessorIndexFromNumber = KeGetProcessorIndexFromNumber(&ProcNumber);
              *((_DWORD *)v5 + 5) = ProcessorIndexFromNumber;
              v59 = ProcessorIndexFromNumber == -1;
LABEL_153:
              if ( v59 )
                goto LABEL_47;
              goto LABEL_67;
            }
            if ( v7[1] != 4LL )
              goto LABEL_47;
            v41 = v7[2];
            v142 = v41;
            if ( v4 )
            {
              if ( (v41 & 3) != 0 )
                ExRaiseDatatypeMisalignment();
              if ( v41 + 4 > 0x7FFFFFFF0000LL || v41 + 4 < v41 )
              {
                v7 = v106;
                v41 = v142;
              }
            }
            if ( (*(_DWORD *)v41 & 0xFFFFFFFE) != 0 )
              return 3221225485LL;
            *((_QWORD *)v5 + 55) = v41;
          }
          else
          {
            if ( v7[1] != 4LL )
              goto LABEL_47;
            v84 = (_DWORD *)v7[2];
            v143 = v84;
            if ( v4 )
            {
              if ( ((unsigned __int8)v84 & 3) != 0 )
                goto LABEL_36;
              v7 = v106;
              v84 = v143;
            }
            *((_DWORD *)v5 + 98) = *v84;
          }
        }
      }
      else
      {
        v18 = v8 - 393216;
        if ( v18 )
        {
          v19 = v18 - 1;
          if ( v19 )
          {
            v20 = v19 - 1;
            if ( v20 )
            {
              v34 = v20 - 15;
              if ( !v34 )
              {
                if ( v7[1] != 1LL )
                  goto LABEL_47;
                v75.Level = *((_BYTE *)v7 + 16);
                v5[1] = v75.Level;
                valid = RtlValidProcessProtection(v75);
                goto LABEL_216;
              }
              v35 = v34 - 9;
              if ( v35 )
              {
                v51 = v35 - 2;
                if ( v51 )
                {
                  if ( v51 != 3 || v7[1] != 4LL || (v7[2] & 0xFFFFFFFFFFFFFFF8uLL) != 0 )
                    goto LABEL_47;
                  *((_DWORD *)v5 + 122) = *((_DWORD *)v7 + 4);
                }
                else
                {
                  if ( v7[1] != 2LL )
                    goto LABEL_47;
                  *((_WORD *)v5 + 84) = *((_WORD *)v7 + 8);
                }
              }
              else
              {
                if ( v7[1] != 1LL )
                  goto LABEL_47;
                v5[17] = v5[17] & 0x7F | (v7[2] != 0LL ? 0x80 : 0);
              }
            }
            else
            {
              if ( v7[1] != 8LL )
                goto LABEL_47;
              *((_QWORD *)v5 + 19) = v7[2];
            }
          }
          else
          {
            if ( v7[1] != 8LL )
              goto LABEL_47;
            *((_QWORD *)v5 + 18) = v7[2];
          }
        }
        else
        {
          if ( v7[1] != 8LL )
            goto LABEL_47;
          *((_QWORD *)v5 + 16) = v7[2];
        }
      }
      goto LABEL_19;
    }
    if ( v8 == 131094 )
      break;
    if ( v8 > 0x2000A )
    {
      v25 = v8 - 131083;
      if ( !v25 )
      {
        v42 = v7[1];
        if ( !v42 || (v42 & 7) != 0 || (v42 & 0xFFFFFFFFFFFFFFF8uLL) > 0x7FFFFFFF8LL )
          goto LABEL_47;
        v43 = (char *)v7[2];
        v117 = v43;
        if ( v4 )
        {
          if ( ((unsigned __int8)v43 & 3) != 0 )
            ExRaiseDatatypeMisalignment();
          if ( (unsigned __int64)&v43[v42] > 0x7FFFFFFF0000LL || &v43[v42] < v43 )
          {
            v7 = v106;
            v43 = v117;
          }
        }
        v44 = (void *)ExAllocatePool2(0x41uLL);
        *((_QWORD *)v5 + 37) = v44;
        if ( !v44 )
        {
LABEL_191:
          v17 = -1073741670;
          goto LABEL_315;
        }
        memmove(v44, v43, v42);
        *((_DWORD *)v5 + 73) = v42 >> 3;
LABEL_67:
        v4 = a2;
LABEL_68:
        a3 = v160;
        goto LABEL_19;
      }
      v26 = v25 - 2;
      if ( !v26 )
      {
        if ( v7[1] != 2LL )
          goto LABEL_47;
        v60 = (unsigned __int16 *)v7[2];
        v138 = v60;
        if ( v4 )
        {
          if ( ((unsigned __int8)v60 & 1) != 0 )
            goto LABEL_36;
          v7 = v106;
          v60 = v138;
        }
        v61 = *v60;
        v112 = v61;
        if ( (unsigned __int16)v61 >= (unsigned __int16)KeNumberNodes || KeIsEmptyGroupMask(KeNodeBlock[v61] + 16) )
          goto LABEL_47;
        *((_WORD *)v5 + 85) = v61;
        goto LABEL_67;
      }
      v27 = v26 - 3;
      if ( !v27 )
      {
        v28 = v7[1];
        if ( v28 > 0x18 )
          goto LABEL_47;
        v155 = 0LL;
        v156 = 0LL;
        v7 = v106;
        v29 = v106[2];
        if ( v4 )
        {
          if ( v29 >= 0x7FFFFFFF0000LL )
            v29 = 0x7FFFFFFF0000LL;
          RtlCopyVolatileMemory(&v155, (const void *)v29, v28);
        }
        else
        {
          memmove(&v155, (const void *)v29, v28);
        }
        v30 = v155;
        v151 = v155;
        v31 = v156;
        v152 = v156;
        v17 = PspValidateMitigationOptions(&v151, 0LL);
        if ( v17 < 0 )
          goto LABEL_315;
        *((_OWORD *)v5 + 21) = v30;
        *((_QWORD *)v5 + 44) = v31;
        goto LABEL_67;
      }
      v45 = v27 - 2;
      if ( !v45 )
      {
        v71 = v7[1];
        if ( !v71 || (v71 & 7) != 0 || v71 > 0x88 )
          goto LABEL_47;
        v72 = (char *)v7[2];
        v137 = v72;
        if ( v4 )
        {
          if ( ((unsigned __int8)v72 & 3) != 0 )
            ExRaiseDatatypeMisalignment();
          if ( (unsigned __int64)&v72[v71] > 0x7FFFFFFF0000LL || &v72[v71] < v72 )
          {
            v7 = v106;
            v72 = v137;
          }
        }
        v73 = (void *)ExAllocatePool2(0x41uLL);
        *((_QWORD *)v5 + 45) = v73;
        if ( !v73 )
          goto LABEL_191;
        memmove(v73, v72, v71);
        *((_DWORD *)v5 + 94) = v71;
        valid = IsTrustletCreateAttributeWellFormed(*((_QWORD **)v5 + 45), v71);
LABEL_216:
        v59 = valid == 0;
        goto LABEL_153;
      }
      v46 = v45 - 1;
      if ( !v46 )
      {
        v47 = v7[1];
        if ( !v47 || (v47 & 7) != 0 || (v47 & 0xFFFFFFFFFFFFFFF8uLL) > 0x7FFFFFFF8LL )
          goto LABEL_47;
        v48 = (char *)v7[2];
        v117 = v48;
        if ( v4 )
        {
          if ( ((unsigned __int8)v48 & 3) != 0 )
            ExRaiseDatatypeMisalignment();
          if ( (unsigned __int64)&v48[v47] > 0x7FFFFFFF0000LL || &v48[v47] < v48 )
          {
            v7 = v106;
            v48 = v117;
          }
        }
        v49 = ExAllocatePool2(0x41uLL);
        *((_QWORD *)v5 + 46) = v49;
        if ( !v49 )
          goto LABEL_191;
        *((_DWORD *)v5 + 95) = v47 >> 3;
        v50 = 0LL;
        v136 = 0LL;
        while ( v50 < *((unsigned int *)v5 + 95) )
        {
          v17 = ObpReferenceObjectByHandleWithTag(
                  *(_QWORD *)&v48[8 * v50],
                  1,
                  (__int64)PsJobType,
                  a2,
                  0x6C4A7350u,
                  &v120,
                  0LL,
                  0LL);
          if ( v17 < 0 )
            goto LABEL_315;
          *(_QWORD *)(*((_QWORD *)v5 + 46) + 8 * v50++) = v120;
          v136 = v50;
        }
        goto LABEL_130;
      }
      v54 = v46 - 1;
      if ( v54 )
      {
        if ( v54 != 1 || v7[1] != 4LL )
          goto LABEL_47;
        v70 = (_DWORD *)v7[2];
        v134 = v70;
        if ( v4 )
        {
          if ( ((unsigned __int8)v70 & 3) != 0 )
            goto LABEL_36;
          v7 = v106;
          v70 = v134;
        }
        *((_DWORD *)v5 + 97) = *v70;
      }
      else
      {
        if ( v7[1] != 4LL )
          goto LABEL_47;
        v55 = (_DWORD *)v7[2];
        v135 = v55;
        if ( v4 )
        {
          if ( ((unsigned __int8)v55 & 3) != 0 )
            goto LABEL_36;
          v7 = v106;
          v55 = v135;
        }
        *((_DWORD *)v5 + 96) = *v55;
      }
    }
    else
    {
      if ( v8 == 131082 )
      {
        if ( v7[1] != 8LL )
          goto LABEL_47;
        v52 = (_QWORD *)v7[2];
        v133 = v52;
        if ( v4 )
        {
          if ( ((unsigned __int8)v52 & 3) != 0 )
            goto LABEL_36;
          v7 = v106;
          v52 = v133;
        }
        v119 = 0LL;
        v53 = *v52;
        v119 = v53;
        if ( (v53 & 0x1C) != 0 )
        {
          v17 = -1073741637;
          goto LABEL_315;
        }
        v113 = v53 & 3;
        if ( (v53 & 3) == 3 )
          goto LABEL_47;
        v5[17] = v5[17] & 0xF3 | (4 * (v53 & 3));
        if ( (v53 & 3) == 1 )
          *((_DWORD *)v5 + 72) = HIDWORD(v53);
        goto LABEL_68;
      }
      v10 = v8 - 6;
      if ( v10 )
      {
        v11 = v10 - 65533;
        if ( v11 )
        {
          v14 = v11 - 1;
          if ( v14 )
          {
            v21 = v14 - 65537;
            if ( !v21 )
            {
              v22 = v7[1];
              if ( !v22 || (v22 & 1) != 0 || v22 > 0xFFFF )
                goto LABEL_47;
              v23 = (char *)v7[2];
              v129 = v23;
              if ( v4 && ((unsigned __int64)&v23[v22] > 0x7FFFFFFF0000LL || &v23[v22] < v23) )
              {
                v7 = v106;
                v23 = v129;
              }
              v24 = (void *)ExAllocatePool2(0x41uLL);
              v149 = v24;
              if ( !v24 )
                goto LABEL_191;
              *((_OWORD *)v5 + 15) = 0LL;
              *((_WORD *)v5 + 121) = v22;
              *((_QWORD *)v5 + 31) = v24;
              memmove(v24, v23, v22);
              *((_WORD *)v5 + 120) = v22;
              goto LABEL_67;
            }
            v63 = v21 - 2;
            if ( !v63 )
            {
              v67 = v7[1];
              if ( !v67 || (v67 & 0xF) != 0 )
                goto LABEL_47;
              v68 = (char *)v7[2];
              v128 = v68;
              if ( v4 )
              {
                if ( ((unsigned __int8)v68 & 3) != 0 )
                  ExRaiseDatatypeMisalignment();
                if ( (unsigned __int64)&v68[v67] > 0x7FFFFFFF0000LL || &v68[v67] < v68 )
                {
                  v7 = v106;
                  v68 = v128;
                }
              }
              if ( v67 > 0x10 )
              {
                v69 = (void *)ExAllocatePool2(0x41uLL);
                *((_QWORD *)v6 + 35) = v69;
                if ( !v69 )
                  goto LABEL_191;
              }
              else
              {
                v69 = v5 + 264;
                *((_QWORD *)v6 + 35) = v5 + 264;
              }
              memmove(v69, v68, v67);
              *((_QWORD *)v5 + 32) = v67 >> 4;
              goto LABEL_67;
            }
            v64 = v63 - 1;
            if ( v64 )
            {
              if ( v64 != 1 || v7[1] != 4LL )
                goto LABEL_47;
              v65 = (_DWORD *)v7[2];
              v126 = v65;
              if ( v4 )
              {
                if ( ((unsigned __int8)v65 & 3) != 0 )
                  goto LABEL_36;
                v7 = v106;
                v65 = v126;
              }
              *((_DWORD *)v5 + 79) = *v65;
            }
            else
            {
              if ( v7[1] != 1LL )
                goto LABEL_47;
              v66 = (_BYTE *)v7[2];
              v127 = v66;
              if ( v4 )
              {
                v7 = v106;
                v66 = v127;
              }
              v5[2] = *v66;
            }
          }
          else
          {
            if ( v7[1] != 8LL )
              goto LABEL_47;
            v15 = v7[2];
            v130 = v15;
            if ( v4 )
            {
              if ( (v15 & 3) != 0 )
                goto LABEL_36;
              if ( v15 >= 0x7FFFFFFF0000LL )
                v15 = 0x7FFFFFFF0000LL;
              *(_BYTE *)v15 = *(_BYTE *)v15;
              *(_BYTE *)(v15 + 7) = *(_BYTE *)(v15 + 7);
              v7 = v106;
              v15 = v130;
            }
            *((_QWORD *)v5 + 4) = v15;
            v16 = v7[3];
            v111 = v16;
            if ( v16 )
            {
              if ( v4 )
              {
                if ( (v16 & 3) != 0 )
                  goto LABEL_36;
                if ( v16 >= 0x7FFFFFFF0000LL )
                  v16 = 0x7FFFFFFF0000LL;
                *(_BYTE *)v16 = *(_BYTE *)v16;
                *(_BYTE *)(v16 + 7) = *(_BYTE *)(v16 + 7);
                v7 = v106;
                v16 = v111;
              }
              *(_QWORD *)v16 = 8LL;
            }
          }
        }
        else
        {
          if ( v7[1] != 16LL )
            goto LABEL_47;
          v12 = v7[2];
          v131 = v12;
          if ( v4 )
          {
            if ( (v12 & 3) != 0 )
              goto LABEL_36;
            if ( v12 >= 0x7FFFFFFF0000LL )
              v12 = 0x7FFFFFFF0000LL;
            *(_BYTE *)v12 = *(_BYTE *)v12;
            *(_BYTE *)(v12 + 15) = *(_BYTE *)(v12 + 15);
            v12 = v131;
            v7 = v106;
          }
          *((_QWORD *)v5 + 3) = v12;
          v13 = v7[3];
          v111 = v13;
          if ( v13 )
          {
            if ( v4 )
            {
              if ( (v13 & 3) != 0 )
                goto LABEL_36;
              if ( v13 >= 0x7FFFFFFF0000LL )
                v13 = 0x7FFFFFFF0000LL;
              *(_BYTE *)v13 = *(_BYTE *)v13;
              *(_BYTE *)(v13 + 7) = *(_BYTE *)(v13 + 7);
              v7 = v106;
              v13 = v111;
            }
            *(_QWORD *)v13 = 16LL;
          }
        }
      }
      else
      {
        if ( v7[1] != 64LL )
          goto LABEL_47;
        v32 = v7[2];
        v132 = v32;
        if ( v4 )
        {
          if ( (v32 & 3) != 0 )
            goto LABEL_36;
          if ( v32 >= 0x7FFFFFFF0000LL )
            v32 = 0x7FFFFFFF0000LL;
          *(_BYTE *)v32 = *(_BYTE *)v32;
          *(_BYTE *)(v32 + 63) = *(_BYTE *)(v32 + 63);
          v7 = v106;
          v32 = v132;
        }
        *((_QWORD *)v5 + 5) = v32;
        v33 = v7[3];
        v111 = v33;
        if ( v33 )
        {
          if ( v4 )
          {
            if ( (v33 & 3) != 0 )
              goto LABEL_36;
            if ( v33 >= 0x7FFFFFFF0000LL )
              v33 = 0x7FFFFFFF0000LL;
            *(_BYTE *)v33 = *(_BYTE *)v33;
            *(_BYTE *)(v33 + 7) = *(_BYTE *)(v33 + 7);
            v7 = v106;
            v33 = v111;
          }
          *(_QWORD *)v33 = 64LL;
        }
      }
    }
LABEL_19:
    v7 += 4;
    v106 = v7;
    --v109;
  }
  if ( v7[1] != 8LL )
    goto LABEL_47;
  v76 = v7[2];
  v139 = v76;
  if ( v4 )
  {
    if ( (v76 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( v76 + 8 > 0x7FFFFFFF0000LL || v76 + 8 < v76 )
    {
      v7 = v106;
      v76 = v139;
    }
  }
  v77 = (_QWORD *)ExAllocatePool2(0x41uLL);
  *((_QWORD *)v5 + 54) = v77;
  if ( v77 )
  {
    *v77 = *(_QWORD *)v76;
    v78 = (_DWORD *)*((_QWORD *)v5 + 54);
    if ( (*v78 & 3) == 0 || (unsigned int)(v78[1] - 1) > 5 )
      goto LABEL_47;
    goto LABEL_67;
  }
  v17 = -1073741801;
LABEL_315:
  if ( v17 < 0 )
    goto LABEL_316;
  if ( (*((_DWORD *)v5 + 2) & 0x800LL) != 0 )
  {
    qsort(*((void **)v5 + 37), *((unsigned int *)v5 + 73), 8uLL, PspSortHandleList);
    if ( **((int **)v5 + 37) < 0 )
      v17 = -1073741811;
    v5[16] = v5[16] & 0xFE | (v115 != 0);
  }
  if ( v17 < 0 )
LABEL_316:
    PspDeleteCreateProcessContext(v5);
  return (unsigned int)v17;
}
