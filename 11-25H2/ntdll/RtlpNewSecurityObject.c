/*
 * XREFs of RtlpNewSecurityObject @ 0x180061400
 * Callers:
 *     RtlNewSecurityObjectEx @ 0x180060D50 (RtlNewSecurityObjectEx.c)
 *     RtlpNewSecurityObject @ 0x180061400 (RtlpNewSecurityObject.c)
 *     RtlNewSecurityObjectWithMultipleInheritance @ 0x18010D810 (RtlNewSecurityObjectWithMultipleInheritance.c)
 *     RtlNewSecurityObject @ 0x180110A60 (RtlNewSecurityObject.c)
 *     RtlCreateUserSecurityObject @ 0x180135330 (RtlCreateUserSecurityObject.c)
 *     RtlNewInstanceSecurityObject @ 0x1801353D0 (RtlNewInstanceSecurityObject.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180050340 (RtlAllocateHeap.c)
 *     RtlAddMandatoryAce @ 0x180060B20 (RtlAddMandatoryAce.c)
 *     RtlpGetDefaultsSubjectContext @ 0x180060DC0 (RtlpGetDefaultsSubjectContext.c)
 *     RtlpNewSecurityObject @ 0x180061400 (RtlpNewSecurityObject.c)
 *     RtlpValidFilterAclSubjectContext @ 0x1800630C0 (RtlpValidFilterAclSubjectContext.c)
 *     RtlpCombineAcls @ 0x1800631C0 (RtlpCombineAcls.c)
 *     RtlpInheritAcl2 @ 0x180063B00 (RtlpInheritAcl2.c)
 *     RtlFreeHeap @ 0x180080DD0 (RtlFreeHeap.c)
 *     RtlSidDominates @ 0x1800DD780 (RtlSidDominates.c)
 *     RtlpApplyAclToObject @ 0x1800E7FA0 (RtlpApplyAclToObject.c)
 *     RtlpNormalizeAcl @ 0x1800E8044 (RtlpNormalizeAcl.c)
 *     RtlpCreateServerAcl @ 0x1800E85A8 (RtlpCreateServerAcl.c)
 *     RtlSidDominatesForTrust @ 0x1800E8830 (RtlSidDominatesForTrust.c)
 *     RtlpValidOwnerSubjectContext @ 0x1800E8934 (RtlpValidOwnerSubjectContext.c)
 *     RtlpOwnerAcesPresent @ 0x1800EA220 (RtlpOwnerAcesPresent.c)
 *     ZwAccessCheck @ 0x180163220 (ZwAccessCheck.c)
 *     NtClose @ 0x180163400 (NtClose.c)
 *     NtQueryInformationToken @ 0x180163640 (NtQueryInformationToken.c)
 *     NtDuplicateToken @ 0x180163A60 (NtDuplicateToken.c)
 *     ZwPrivilegeCheck @ 0x180165A50 (ZwPrivilegeCheck.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 *     memmove @ 0x180168980 (memmove.c)
 *     memset$thunk$772440563353939046 @ 0x180174030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlpNewSecurityObject(
        __int64 a1,
        _OWORD *a2,
        _QWORD *a3,
        __int64 a4,
        int a5,
        unsigned __int8 a6,
        unsigned int a7,
        __int64 a8,
        __int64 a9)
{
  _OWORD *v9; // r14
  unsigned __int16 *v10; // r13
  unsigned __int16 *v11; // rsi
  void *v12; // rbx
  void *v13; // rdi
  _OWORD *v14; // r12
  __int64 v15; // rcx
  void *ProcessHeap; // r15
  __int64 result; // rax
  int v18; // eax
  __int16 v19; // r8
  __int64 v20; // r9
  unsigned int v21; // edx
  char *v22; // rax
  __int64 v23; // r11
  char *v24; // rbx
  int v25; // r10d
  int v26; // r12d
  int v27; // eax
  int v28; // r8d
  int v29; // edi
  int v30; // r9d
  unsigned __int16 *v31; // rdx
  __int16 v32; // cx
  __int64 v33; // rsi
  int valid; // ebx
  int v35; // edi
  char *v36; // r15
  unsigned int v37; // ecx
  unsigned int v38; // r14d
  __int64 Heap; // rax
  __int16 v40; // r9
  int v41; // ecx
  __int16 v42; // dx
  char v43; // r13
  __int64 v44; // r8
  __int64 v45; // r12
  __int16 v46; // cx
  __int64 v47; // r15
  int v48; // edi
  char *v49; // rsi
  unsigned int v50; // ecx
  unsigned int v51; // r14d
  char *v52; // rdx
  __int64 v53; // rax
  __int16 v54; // cx
  char *v55; // r13
  __int64 v56; // rsi
  unsigned int v57; // ebx
  __int16 v58; // ax
  char *v59; // rax
  char *v60; // rdi
  unsigned int i; // ecx
  char *v62; // rdx
  unsigned int v63; // ebx
  __int64 v64; // rdx
  __int16 v65; // ax
  char *v66; // rcx
  int v67; // edx
  int v68; // ecx
  __int16 v69; // ax
  __int64 v70; // rax
  char *v71; // rax
  char *v72; // rsi
  unsigned int k; // edx
  _DWORD *v74; // rdx
  unsigned __int8 v75; // al
  __int64 v76; // r9
  __int64 v77; // rax
  _QWORD *v78; // r15
  unsigned int v79; // esi
  __int16 v80; // ax
  __int64 v81; // r14
  char *v82; // r12
  unsigned int v83; // ecx
  unsigned int v84; // r15d
  _QWORD *v85; // rdi
  __int64 v86; // rax
  __int16 v87; // si
  int v88; // r9d
  int v89; // r8d
  int v90; // eax
  int v91; // r14d
  unsigned __int16 *v92; // rax
  unsigned __int16 *v93; // rdx
  unsigned int v94; // ecx
  unsigned int v95; // r12d
  _OWORD *v96; // rdx
  __int64 v97; // r9
  __int16 v98; // ax
  __int64 v99; // rsi
  __int64 v100; // r10
  __int16 v101; // ax
  __int64 v102; // rdi
  char *v103; // r13
  int v104; // r14d
  unsigned __int64 v105; // r8
  unsigned int v106; // r12d
  void *v107; // rax
  __int16 v108; // r13
  __int64 v109; // r15
  bool v110; // al
  unsigned __int8 *v111; // r14
  unsigned __int16 *v112; // rcx
  char *v113; // rdi
  unsigned int v114; // r15d
  unsigned int v115; // r14d
  unsigned int v116; // esi
  unsigned int v117; // ebx
  unsigned __int16 *v118; // rdi
  __int64 v119; // rcx
  int v120; // eax
  char *v121; // rdi
  int v122; // eax
  void *v123; // rbx
  void *v124; // rax
  __int64 v125; // rcx
  __int64 v126; // rcx
  __int64 v127; // rax
  __int64 v128; // rax
  __int64 v129; // rax
  __int64 v130; // r14
  __int64 v131; // rcx
  __int64 v132; // rdx
  __int64 v133; // rdx
  __int64 v134; // rax
  void *v135; // rdx
  int v136; // eax
  __int16 v137; // cx
  unsigned __int16 *v138; // r8
  unsigned int v139; // edx
  char *v140; // r12
  __int64 v141; // rcx
  _OWORD *v142; // rax
  int v143; // r12d
  bool v144; // zf
  __int64 v145; // rax
  __int64 v146; // r8
  int v147; // ecx
  int v148; // ecx
  bool v149; // cf
  __int64 v150; // rax
  __int64 v151; // rax
  __int64 v152; // rax
  void *v153; // rax
  __int64 v154; // r8
  __int64 v155; // rax
  unsigned __int16 *v156; // rax
  unsigned int v157; // ecx
  __int16 v158; // r9
  unsigned int v159; // r10d
  __int64 v160; // rax
  char *v161; // rax
  __int64 v162; // rax
  char *v163; // rdx
  unsigned int j; // ecx
  __int64 v165; // [rsp+20h] [rbp-F0h]
  __int64 v166; // [rsp+28h] [rbp-E8h]
  __int64 v167; // [rsp+40h] [rbp-D0h]
  unsigned __int16 *v168; // [rsp+90h] [rbp-80h]
  unsigned __int16 *v169; // [rsp+90h] [rbp-80h]
  char v170; // [rsp+98h] [rbp-78h]
  char v171; // [rsp+99h] [rbp-77h]
  char v172; // [rsp+9Ah] [rbp-76h] BYREF
  char v173; // [rsp+9Bh] [rbp-75h] BYREF
  _BYTE v174[4]; // [rsp+9Ch] [rbp-74h] BYREF
  void *Src; // [rsp+A0h] [rbp-70h]
  void *v176; // [rsp+A8h] [rbp-68h]
  int v177; // [rsp+B0h] [rbp-60h] BYREF
  _OWORD *v178; // [rsp+B8h] [rbp-58h]
  char v179; // [rsp+C0h] [rbp-50h] BYREF
  char v180; // [rsp+C1h] [rbp-4Fh]
  int v181; // [rsp+C4h] [rbp-4Ch] BYREF
  char v182; // [rsp+C8h] [rbp-48h]
  char v183; // [rsp+C9h] [rbp-47h]
  char v184; // [rsp+CAh] [rbp-46h] BYREF
  char v185; // [rsp+CBh] [rbp-45h]
  char v186; // [rsp+CCh] [rbp-44h]
  int v187; // [rsp+D0h] [rbp-40h] BYREF
  char v188; // [rsp+D4h] [rbp-3Ch]
  char v189; // [rsp+D5h] [rbp-3Bh] BYREF
  char v190; // [rsp+D6h] [rbp-3Ah] BYREF
  bool v191; // [rsp+D7h] [rbp-39h]
  __int16 v192; // [rsp+D8h] [rbp-38h]
  char *v193; // [rsp+E0h] [rbp-30h]
  void *v194; // [rsp+E8h] [rbp-28h]
  int v195; // [rsp+F0h] [rbp-20h] BYREF
  void *v196; // [rsp+F8h] [rbp-18h]
  int v197; // [rsp+100h] [rbp-10h] BYREF
  int v198; // [rsp+104h] [rbp-Ch] BYREF
  void *Buf2; // [rsp+108h] [rbp-8h]
  __int64 v200; // [rsp+110h] [rbp+0h]
  __int64 v201; // [rsp+118h] [rbp+8h]
  HANDLE Handle; // [rsp+120h] [rbp+10h]
  void *Buf1; // [rsp+128h] [rbp+18h]
  void *v204; // [rsp+130h] [rbp+20h]
  __int64 v205; // [rsp+138h] [rbp+28h]
  int v206; // [rsp+140h] [rbp+30h]
  __int64 v207; // [rsp+148h] [rbp+38h]
  _OWORD *v208; // [rsp+150h] [rbp+40h]
  __int64 v209; // [rsp+158h] [rbp+48h]
  int v210; // [rsp+160h] [rbp+50h] BYREF
  __int64 v211; // [rsp+168h] [rbp+58h]
  __int64 v212; // [rsp+170h] [rbp+60h] BYREF
  unsigned __int16 *v213; // [rsp+178h] [rbp+68h] BYREF
  unsigned __int16 *v214; // [rsp+180h] [rbp+70h] BYREF
  __int64 v215; // [rsp+188h] [rbp+78h]
  int v216; // [rsp+190h] [rbp+80h]
  void **v217; // [rsp+198h] [rbp+88h] BYREF
  __int64 *v218; // [rsp+1A0h] [rbp+90h] BYREF
  void **v219; // [rsp+1A8h] [rbp+98h] BYREF
  __int64 *v220; // [rsp+1B0h] [rbp+A0h] BYREF
  __int64 *v221; // [rsp+1B8h] [rbp+A8h] BYREF
  __int64 *v222; // [rsp+1C0h] [rbp+B0h] BYREF
  void **v223; // [rsp+1C8h] [rbp+B8h] BYREF
  __int64 v224; // [rsp+1D0h] [rbp+C0h]
  _QWORD *v225; // [rsp+1D8h] [rbp+C8h]
  _OWORD v226[2]; // [rsp+1E0h] [rbp+D0h] BYREF
  __int64 v227; // [rsp+200h] [rbp+F0h]
  __int128 v228; // [rsp+208h] [rbp+F8h] BYREF
  int v229; // [rsp+218h] [rbp+108h]
  _DWORD v230[4]; // [rsp+220h] [rbp+110h] BYREF
  __int128 v231; // [rsp+230h] [rbp+120h] BYREF
  __int128 v232; // [rsp+240h] [rbp+130h]
  __int128 v233; // [rsp+250h] [rbp+140h]
  __int64 v234; // [rsp+260h] [rbp+150h]
  _QWORD v235[16]; // [rsp+270h] [rbp+160h] BYREF

  v201 = a9;
  v9 = a2;
  v208 = a2;
  v227 = 0LL;
  v174[0] = 0;
  v10 = 0LL;
  v229 = 0;
  v11 = 0LL;
  v170 = 0;
  v12 = 0LL;
  v186 = 0;
  v13 = 0LL;
  v185 = 0;
  v14 = 0LL;
  v171 = 0;
  v180 = 0;
  v173 = 0;
  v189 = 0;
  v190 = 0;
  v179 = 0;
  LOBYTE(v206) = 0;
  v184 = 0;
  memset(v226, 0, sizeof(v226));
  v197 = 0;
  v214 = 0LL;
  v228 = 0LL;
  v212 = 0LL;
  Handle = v235;
  v200 = a1;
  v15 = a8;
  v211 = a4;
  ProcessHeap = NtCurrentPeb()->ProcessHeap;
  v176 = ProcessHeap;
  v225 = a3;
  v209 = a8;
  v193 = 0LL;
  Src = 0LL;
  v213 = 0LL;
  Buf1 = 0LL;
  v215 = 0LL;
  v204 = 0LL;
  v207 = 0LL;
  v205 = 0LL;
  v178 = 0LL;
  v187 = 0;
  v195 = 0;
  v224 = 0LL;
  Buf2 = 0LL;
  v182 = 1;
  v210 = 0;
  LOBYTE(v198) = 1;
  v223 = 0LL;
  v219 = 0LL;
  v220 = 0LL;
  v217 = 0LL;
  v218 = 0LL;
  v221 = 0LL;
  v222 = 0LL;
  if ( a8 )
  {
    v198 = 0;
    v234 = 0LL;
    v231 = 0LL;
    v232 = 0LL;
    v233 = 0LL;
    result = NtQueryInformationToken(a8, 10LL, &v231, 56LL, &v198);
    if ( (int)result < 0 )
      return result;
    v198 = DWORD2(v232);
    if ( DWORD2(v232) == 2 && SHIDWORD(v232) < 1 )
      return 3221225637LL;
    v15 = v209;
  }
  if ( v9 )
  {
    v183 = 1;
  }
  else
  {
    v9 = v226;
    v183 = 0;
    v208 = v226;
    LOBYTE(v226[0]) = 1;
  }
  v18 = *((unsigned __int16 *)v9 + 1);
  v192 = *((_WORD *)v9 + 1) & 0x80;
  v19 = v192;
  LOBYTE(v18) = (v18 & 0x40) != 0;
  v191 = v192 != 0;
  v216 = v18;
  if ( v15 || v192 )
  {
    result = RtlpGetDefaultsSubjectContext(
               v15,
               v192 != 0,
               (__int64 *)&v223,
               (__int64 *)&v219,
               (__int64 *)&v220,
               (__int64 *)&v221,
               (__int64 *)&v217,
               &v218,
               (__int64 *)&v222);
    if ( (int)result < 0 )
      return result;
    v12 = *v223;
    v13 = *v219;
    v205 = *v220;
    Buf1 = *v217;
    v215 = *v218;
    if ( v221 )
      v204 = (void *)*v221;
    else
      v204 = 0LL;
    if ( v222 )
    {
      v20 = *v222;
      v19 = v192;
      v207 = *v222;
    }
    else
    {
      v19 = v192;
      v20 = 0LL;
      v207 = 0LL;
    }
  }
  else
  {
    v20 = 0LL;
  }
  v21 = *((unsigned __int16 *)v9 + 1);
  if ( (v21 & 0x8000u) != 0 )
  {
    v128 = *((unsigned int *)v9 + 1);
    if ( !(_DWORD)v128 )
      goto LABEL_198;
    v22 = (char *)v9 + v128;
  }
  else
  {
    v22 = (char *)*((_QWORD *)v9 + 1);
  }
  v194 = v22;
  if ( v22 )
  {
    v180 = 1;
LABEL_17:
    v23 = v200;
    goto LABEL_18;
  }
LABEL_198:
  if ( (a7 & 0x20) == 0 )
  {
    v124 = v12;
    if ( v19 )
      v124 = v204;
    v194 = v124;
    if ( !v124 )
    {
      valid = -1073741700;
      goto LABEL_175;
    }
    goto LABEL_17;
  }
  v23 = v200;
  if ( !v200 )
  {
    valid = -1073741734;
    goto LABEL_175;
  }
  if ( *(__int16 *)(v200 + 2) >= 0 )
  {
    v153 = *(void **)(v200 + 8);
  }
  else
  {
    v152 = *(unsigned int *)(v200 + 4);
    if ( !(_DWORD)v152 )
    {
LABEL_387:
      valid = -1073741734;
      goto LABEL_175;
    }
    v153 = (void *)(v200 + v152);
  }
  v194 = v153;
  v180 = 1;
  if ( !v153 )
    goto LABEL_387;
LABEL_18:
  if ( (v21 & 0x8000u) != 0 )
  {
    v129 = *((unsigned int *)v9 + 2);
    if ( !(_DWORD)v129 )
      goto LABEL_193;
    v24 = (char *)v9 + v129;
  }
  else
  {
    v24 = (char *)*((_QWORD *)v9 + 2);
  }
  v196 = v24;
  if ( v24 )
    goto LABEL_21;
LABEL_193:
  if ( (a7 & 0x40) == 0 )
  {
    v123 = v13;
    if ( v19 )
      v123 = (void *)v20;
LABEL_196:
    v196 = v123;
    if ( v123 )
    {
LABEL_21:
      v25 = a7 & 4;
      v177 = v25;
      v188 = v25 != 0;
      v26 = a7 & 2;
      v172 = v26 != 0;
      v27 = (v21 >> 2) & 8;
      v28 = (v21 >> 1) & 0x400;
      v29 = (v21 >> 1) & 0x1000;
      v30 = (v21 & 0x10) != 0 ? 4 : 0;
      if ( (v21 & 0x10) != 0 )
      {
        if ( (v21 & 0x8000u) != 0 )
        {
          v147 = *((_DWORD *)v9 + 3);
          v31 = 0LL;
          if ( v147 )
            LODWORD(v10) = (_DWORD)v9 + v147;
          goto LABEL_25;
        }
        v10 = (unsigned __int16 *)*((_QWORD *)v9 + 3);
      }
      v31 = 0LL;
LABEL_25:
      if ( !v23 )
        goto LABEL_27;
      v32 = *(_WORD *)(v23 + 2);
      if ( (v32 & 0x10) == 0 )
        goto LABEL_27;
      if ( v32 >= 0 )
      {
        v33 = *(_QWORD *)(v23 + 24);
        goto LABEL_28;
      }
      v125 = *(unsigned int *)(v23 + 12);
      if ( (_DWORD)v125 )
        v33 = v23 + v125;
      else
LABEL_27:
        v33 = 0LL;
LABEL_28:
      valid = 0;
      v35 = v30 | v27 | v28 | v29;
      v36 = (char *)NtCurrentPeb()->ProcessHeap;
      if ( v35 || v33 )
      {
        v37 = 200;
        v38 = 0;
        v181 = 200;
        while ( v38 < 2 )
        {
          Heap = RtlAllocateHeap(v36, NtdllBaseTag + 1310720, v37);
          v168 = (unsigned __int16 *)Heap;
          if ( !Heap )
          {
            ProcessHeap = v176;
            valid = -1073741801;
            v11 = (unsigned __int16 *)Src;
            v10 = 0LL;
            v14 = v178;
            goto LABEL_175;
          }
          valid = RtlpInheritAcl2(
                    v33,
                    (_DWORD)v10,
                    v35,
                    a6,
                    v172,
                    v188,
                    (__int64)v194,
                    (__int64)v196,
                    (__int64)v204,
                    v207,
                    v201,
                    2,
                    v211,
                    a5,
                    (__int64)&v181,
                    Heap,
                    (__int64)&v173,
                    (__int64)&v187);
          if ( valid >= 0 )
          {
            if ( v181 )
            {
              v31 = v168;
            }
            else
            {
              RtlFreeHeap(v36, 0LL, v168);
              v31 = 0LL;
            }
            break;
          }
          RtlFreeHeap(v36, 0LL, v168);
          v31 = 0LL;
          if ( valid != -1073741789 )
            break;
          v37 = v181;
          ++v38;
        }
        v169 = v31;
        if ( valid < 0 )
        {
          v169 = v31;
          if ( valid == -2147483637 )
          {
            v25 = v177;
            v9 = v208;
            v23 = v200;
            goto LABEL_38;
          }
          ProcessHeap = v176;
          v10 = v31;
          v11 = (unsigned __int16 *)Src;
          v14 = v178;
          goto LABEL_175;
        }
        v25 = v177;
        v9 = v208;
        v23 = v200;
        v170 = 1;
        v181 = 2 * (v187 & 0x1400 | (2 * (v187 & 8 | 0x2004)));
        goto LABEL_42;
      }
      v173 = 0;
      v169 = 0LL;
      v187 = v26 != 0 ? 0x400 : 0;
LABEL_38:
      v40 = *((_WORD *)v9 + 1);
      v41 = 34816;
      if ( (a7 & 2) == 0 )
        v41 = 0x8000;
      if ( (v40 & 0x30) != 0x30 )
      {
        v181 = v41;
LABEL_42:
        v42 = *((_WORD *)v9 + 1);
        v43 = v25 != 0;
        v44 = (v42 & 0x10) != 0 ? 4 : 0;
        if ( (v42 & 0x10) != 0 )
        {
          if ( v42 < 0 )
          {
            v148 = *((_DWORD *)v9 + 3);
            if ( v148 )
              LODWORD(v45) = (_DWORD)v9 + v148;
            else
              LODWORD(v45) = 0;
          }
          else
          {
            v45 = *((_QWORD *)v9 + 3);
          }
        }
        else
        {
          LODWORD(v45) = 0;
        }
        if ( !v23 )
          goto LABEL_46;
        v46 = *(_WORD *)(v23 + 2);
        if ( (v46 & 0x10) == 0 )
          goto LABEL_46;
        if ( v46 >= 0 )
        {
          v47 = *(_QWORD *)(v23 + 24);
          goto LABEL_47;
        }
        v126 = *(unsigned int *)(v23 + 12);
        if ( (_DWORD)v126 )
          v47 = v23 + v126;
        else
LABEL_46:
          v47 = 0LL;
LABEL_47:
        valid = 0;
        v48 = v44 | (*((unsigned __int16 *)v9 + 1) >> 2) & 8 | (*((unsigned __int16 *)v9 + 1) >> 1) & 0x400;
        v49 = (char *)NtCurrentPeb()->ProcessHeap;
        if ( v48 || v47 )
        {
          v50 = 200;
          v51 = 0;
          v177 = 200;
          while ( 1 )
          {
            v52 = 0LL;
            if ( v51 >= 2 )
              break;
            v53 = RtlAllocateHeap(v49, NtdllBaseTag + 1310720, v50);
            v193 = (char *)v53;
            if ( !v53 )
            {
LABEL_276:
              valid = -1073741801;
              goto LABEL_277;
            }
            valid = RtlpInheritAcl2(
                      v47,
                      v45,
                      v48,
                      a6,
                      v172,
                      v43,
                      (__int64)v194,
                      (__int64)v196,
                      (__int64)v204,
                      v207,
                      v201,
                      2,
                      v211,
                      a5,
                      (__int64)&v177,
                      v53,
                      (__int64)&v189,
                      (__int64)&v195);
            if ( valid >= 0 )
            {
              if ( v177 )
              {
                v52 = v193;
              }
              else
              {
                RtlFreeHeap(v49, 0LL, v193);
                v52 = 0LL;
              }
              break;
            }
            RtlFreeHeap(v49, 0LL, v193);
            v52 = 0LL;
            if ( valid != -1073741789 )
              break;
            v50 = v177;
            ++v51;
          }
          v193 = v52;
          if ( valid >= 0 )
          {
            v9 = v208;
            v55 = v52;
            v186 = 1;
            goto LABEL_59;
          }
          v193 = v52;
          if ( valid != -2147483637 )
            goto LABEL_277;
          v9 = v208;
        }
        else
        {
          v193 = 0LL;
        }
        v54 = *((_WORD *)v9 + 1);
        if ( (v54 & 0x30) == 0x30 )
        {
          if ( (v54 & 0x10) != 0 )
          {
            if ( v54 >= 0 )
            {
              v55 = (char *)*((_QWORD *)v9 + 3);
              v193 = v55;
            }
            else
            {
              v150 = *((unsigned int *)v9 + 3);
              if ( (_DWORD)v150 )
              {
                v55 = (char *)v9 + v150;
                v193 = (char *)v9 + v150;
              }
              else
              {
                v55 = 0LL;
                v193 = 0LL;
              }
            }
          }
          else
          {
            v55 = 0LL;
            v193 = 0LL;
          }
        }
        else
        {
          v55 = v193;
        }
LABEL_59:
        v56 = v215;
        v57 = 0;
LABEL_60:
        v58 = *((_WORD *)v9 + 1);
        if ( (v58 & 0x10) != 0 )
        {
          if ( v58 < 0 )
          {
            v145 = *((unsigned int *)v9 + 3);
            if ( !(_DWORD)v145 )
              goto LABEL_72;
            v59 = (char *)v9 + v145;
          }
          else
          {
            v59 = (char *)*((_QWORD *)v9 + 3);
          }
          if ( v59 )
          {
            v60 = v59 + 8;
            for ( i = 0; i < *((unsigned __int16 *)v59 + 2); ++i )
            {
              if ( i >= v57 && *v60 == 20 )
              {
                v62 = v60 + 8;
                v63 = i;
                if ( !v60 )
                  v62 = 0LL;
                if ( v62 )
                {
                  v172 = 0;
                  if ( !v56 || (RtlSidDominatesForTrust(v56, v62, &v172, 0LL), !v172) )
                  {
                    valid = -1073741790;
                    goto LABEL_277;
                  }
                }
                v57 = v63 + 1;
                if ( v60 )
                  goto LABEL_60;
                break;
              }
              v60 += *((unsigned __int16 *)v60 + 1);
            }
          }
        }
LABEL_72:
        if ( (a7 & 0x800) == 0 )
        {
          v64 = v56;
          goto LABEL_74;
        }
        v157 = 0;
        v158 = *((_WORD *)v9 + 1);
        if ( (v158 & 0x10) != 0 )
        {
LABEL_407:
          v159 = v157;
          if ( v158 >= 0 )
          {
            v161 = (char *)*((_QWORD *)v9 + 3);
          }
          else
          {
            v160 = *((unsigned int *)v9 + 3);
            if ( !(_DWORD)v160 )
              goto LABEL_411;
            v161 = (char *)v9 + v160;
          }
          if ( v161 )
          {
            v44 = *((unsigned __int16 *)v161 + 2);
            v163 = v161 + 8;
            for ( j = 0; j < (unsigned int)v44; ++j )
            {
              if ( j >= v159 && *v163 == 20 )
              {
                v157 = j + 1;
                if ( !v163 )
                  break;
                if ( (v163[1] & 8) == 0 )
                {
                  ProcessHeap = v176;
                  valid = -1073741811;
                  v10 = v169;
                  v11 = 0LL;
                  v14 = v178;
                  goto LABEL_175;
                }
                goto LABEL_407;
              }
              v163 += *((unsigned __int16 *)v163 + 1);
            }
          }
        }
LABEL_411:
        v64 = v56;
        if ( v56 )
        {
          valid = -1073741811;
          goto LABEL_277;
        }
LABEL_74:
        v65 = *((_WORD *)v9 + 1);
        if ( (v65 & 0x10) != 0 )
        {
          if ( v65 >= 0 )
          {
            v66 = (char *)*((_QWORD *)v9 + 3);
          }
          else
          {
            v77 = *((unsigned int *)v9 + 3);
            if ( (_DWORD)v77 )
              v66 = (char *)v9 + v77;
            else
              v66 = 0LL;
          }
        }
        else
        {
          v66 = 0LL;
        }
        valid = RtlpValidFilterAclSubjectContext(v66, v64, v44, 0LL);
        if ( valid < 0 )
          goto LABEL_277;
        v67 = (a7 >> 8) & 1 | 2;
        if ( (a7 & 0x200) == 0 )
          v67 = (a7 >> 8) & 1;
        v68 = v67 | 4;
        if ( (a7 & 0x400) == 0 )
          v68 = v67;
        if ( v68 )
        {
          v72 = (char *)v224;
          v75 = 0;
          v74 = Buf1;
          v76 = v224;
LABEL_90:
          if ( !v68 )
          {
            if ( !v74 || v74[2] >= 0x2000u )
              goto LABEL_104;
            v68 = 1;
          }
          if ( !v72 )
          {
            if ( !v209 )
            {
              valid = -1073741700;
              goto LABEL_277;
            }
            v76 = (__int64)v74;
            Buf2 = v74;
            v75 = 0;
          }
LABEL_104:
          if ( v76 )
          {
            v235[0] = 8388610LL;
            valid = RtlAddMandatoryAce((__int64)v235, 2u, v75, v76, 17, v68);
            if ( valid < 0 )
              goto LABEL_277;
            v78 = v235;
          }
          else
          {
            v78 = 0LL;
            Handle = 0LL;
          }
          if ( (a7 & 0x700) != 0 )
          {
            v79 = 4;
          }
          else if ( !v72 && v78 )
          {
            v79 = 0;
          }
          else
          {
            v79 = (*((_WORD *)v9 + 1) & 0x2800 | (*((unsigned __int16 *)v9 + 1) >> 1) & 0x18u) >> 1;
          }
          if ( !v200 )
            goto LABEL_112;
          v80 = *(_WORD *)(v200 + 2);
          if ( (v80 & 0x10) == 0 )
            goto LABEL_112;
          if ( v80 >= 0 )
          {
            v81 = *(_QWORD *)(v200 + 24);
          }
          else
          {
            v134 = *(unsigned int *)(v200 + 12);
            if ( !(_DWORD)v134 )
            {
LABEL_112:
              v81 = 0LL;
              goto LABEL_113;
            }
            v81 = v200 + v134;
          }
LABEL_113:
          valid = 0;
          v82 = (char *)NtCurrentPeb()->ProcessHeap;
          if ( !v79 && !v81 )
            goto LABEL_122;
          v83 = 200;
          v84 = 0;
          v177 = 200;
          while ( 1 )
          {
            v85 = 0LL;
            if ( v84 >= 2 )
              break;
            v86 = RtlAllocateHeap(v82, NtdllBaseTag + 1310720, v83);
            v85 = (_QWORD *)v86;
            if ( !v86 )
              goto LABEL_276;
            valid = RtlpInheritAcl2(
                      v81,
                      (_DWORD)Handle,
                      v79,
                      a6,
                      1,
                      0,
                      (__int64)v194,
                      (__int64)v196,
                      (__int64)v204,
                      v207,
                      v201,
                      3,
                      v211,
                      a5,
                      (__int64)&v177,
                      v86,
                      (__int64)&v190,
                      (__int64)&v187);
            if ( valid >= 0 )
            {
              if ( !v177 )
              {
                RtlFreeHeap(v82, 0LL, v85);
                v85 = 0LL;
              }
              break;
            }
            RtlFreeHeap(v82, 0LL, v85);
            v85 = 0LL;
            if ( valid != -1073741789 )
              break;
            v83 = v177;
            ++v84;
          }
          if ( valid == -2147483637 )
          {
            v78 = Handle;
LABEL_122:
            v85 = v78;
            v187 = 0;
            v87 = 0;
LABEL_123:
            v88 = (int)v55;
            v89 = (int)v55;
            v166 = (__int64)v55;
            v165 = (__int64)v55;
            v10 = v169;
            v90 = RtlpCombineAcls((_DWORD)v169, (_DWORD)v85, v89, v88, v165, v166, (__int64)&v214, (__int64)&v197);
            v91 = v181;
            valid = v90;
            v197 |= (v181 & 0x2000) << 17;
            if ( v85 )
            {
              v144 = v85 == v78;
              ProcessHeap = v176;
              if ( !v144 )
                RtlFreeHeap(v176, 0LL, v85);
            }
            else
            {
              ProcessHeap = v176;
            }
            if ( valid < 0 )
              goto LABEL_279;
            v92 = v214;
            if ( v214 )
            {
              if ( v170 && v169 )
              {
                RtlFreeHeap(ProcessHeap, 0LL, v169);
                v92 = v214;
              }
              v93 = v92;
              v169 = v92;
              v185 = 1;
              v94 = 0;
              v214 = 0LL;
              v181 = (2 * (v87 & 0x1400 | (2 * (v87 & 8 | 4)))) | v91;
            }
            else
            {
              v93 = v169;
              v94 = 0;
            }
            v95 = a7;
            if ( (a7 & 8) != 0 )
              goto LABEL_129;
            if ( v93 )
            {
              v138 = v93 + 4;
              v139 = v93[2];
              while ( v94 < v139 )
              {
                if ( *(_BYTE *)v138 == 17 )
                {
                  v135 = v138 + 4;
                  goto LABEL_255;
                }
                ++v94;
                v138 = (unsigned __int16 *)((char *)v138 + v138[1]);
              }
            }
            v135 = Buf2;
LABEL_255:
            if ( !v135 )
            {
LABEL_129:
              v96 = v208;
              v97 = 0LL;
              v195 = a7 & 1;
              v98 = *((_WORD *)v208 + 1);
              if ( (v98 & 4) != 0 )
              {
                if ( v98 >= 0 )
                {
                  v99 = *((_QWORD *)v208 + 4);
                }
                else
                {
                  v122 = *((_DWORD *)v208 + 4);
                  if ( v122 )
                    LODWORD(v99) = (_DWORD)v208 + v122;
                  else
                    LODWORD(v99) = 0;
                }
              }
              else
              {
                LODWORD(v99) = 0;
              }
              v100 = v200;
              if ( !v200 )
                goto LABEL_133;
              v101 = *(_WORD *)(v200 + 2);
              if ( (v101 & 4) == 0 )
                goto LABEL_133;
              if ( v101 >= 0 )
              {
                v102 = *(_QWORD *)(v200 + 32);
              }
              else
              {
                v127 = *(unsigned int *)(v200 + 16);
                if ( !(_DWORD)v127 )
                {
LABEL_133:
                  v102 = 0LL;
                  goto LABEL_134;
                }
                v102 = v200 + v127;
              }
LABEL_134:
              valid = 0;
              v103 = (char *)NtCurrentPeb()->ProcessHeap;
              v104 = *((_WORD *)v208 + 1) & 0x140C;
              if ( (*((_WORD *)v208 + 1) & 0x140C) != 0 || v102 )
              {
                v105 = 200LL;
                v106 = 0;
                v177 = 200;
                while ( 1 )
                {
                  if ( v106 >= 2 )
                  {
LABEL_141:
                    v11 = 0LL;
                    goto LABEL_142;
                  }
                  v107 = (void *)RtlAllocateHeap(v103, NtdllBaseTag + 1310720, v105);
                  Src = v107;
                  if ( !v107 )
                  {
                    ProcessHeap = v176;
                    valid = -1073741801;
                    v10 = v169;
                    v11 = 0LL;
                    v14 = v178;
                    goto LABEL_175;
                  }
                  valid = RtlpInheritAcl2(
                            v102,
                            v99,
                            v104,
                            a6,
                            v195,
                            (a7 & 4) != 0,
                            (__int64)v194,
                            (__int64)v196,
                            (__int64)v204,
                            v207,
                            v201,
                            1,
                            v211,
                            a5,
                            (__int64)&v177,
                            (__int64)v107,
                            (__int64)&v179,
                            (__int64)&v187);
                  if ( valid >= 0 )
                    break;
                  RtlFreeHeap(v103, 0LL, Src);
                  v97 = 0LL;
                  if ( valid != -1073741789 )
                    goto LABEL_141;
                  v105 = (unsigned int)v177;
                  ++v106;
                }
                if ( v177 )
                {
                  v11 = (unsigned __int16 *)Src;
                  v97 = 0LL;
                }
                else
                {
                  RtlFreeHeap(v103, 0LL, Src);
                  v97 = 0LL;
                  v11 = 0LL;
                }
LABEL_142:
                Src = v11;
                if ( valid >= 0 )
                {
                  LOBYTE(v102) = v179;
                  v100 = v200;
                  v108 = v187 & 0x1408 | 4 | v181;
                  v95 = a7;
                  v171 = 1;
                  goto LABEL_144;
                }
                Src = v11;
                if ( valid != -2147483637 )
                  goto LABEL_306;
                LOBYTE(v102) = v179;
                v96 = v208;
                v100 = v200;
                v95 = a7;
              }
              else
              {
                v11 = 0LL;
                Src = 0LL;
              }
              v108 = v181;
              if ( (v95 & 1) != 0 )
                v108 = v181 | 0x400;
              v137 = *((_WORD *)v96 + 1);
              if ( (v137 & 0xC) == 0xC )
              {
                if ( (v137 & 4) != 0 )
                {
                  if ( v137 < 0 )
                  {
                    v162 = *((unsigned int *)v96 + 4);
                    if ( (_DWORD)v162 )
                      v11 = (unsigned __int16 *)((char *)v96 + v162);
                    else
                      v11 = 0LL;
                  }
                  else
                  {
                    v11 = (unsigned __int16 *)*((_QWORD *)v96 + 4);
                  }
                }
                else
                {
                  v11 = 0LL;
                }
                Src = v11;
                LOBYTE(v102) = 1;
                v108 |= v137 & 0x1000 | 4;
              }
              else if ( v205 )
              {
                v11 = (unsigned __int16 *)v205;
                Src = (void *)v205;
                v108 |= 4u;
              }
LABEL_144:
              v109 = v209;
              if ( (v95 & 0x1000) == 0 && v183 && v209 && v100 )
              {
                v130 = v201;
                v195 = 0;
                v177 = 0;
                valid = RtlpNewSecurityObject(v100, 0, (unsigned int)&v212, v211, a5, a6, v95 | 1, v209, v201);
                if ( valid < 0 )
                  goto LABEL_306;
                v131 = *(unsigned __int16 *)(v212 + 2);
                if ( (v131 & 4) != 0 )
                {
                  if ( (v131 & 0x8000u) == 0LL )
                  {
                    v132 = *(_QWORD *)(v212 + 32);
                  }
                  else
                  {
                    v131 = *(unsigned int *)(v212 + 16);
                    if ( (_DWORD)v131 )
                      v132 = v212 + v131;
                    else
                      v132 = 0LL;
                  }
                }
                else
                {
                  v132 = 0LL;
                }
                LOBYTE(v131) = 16;
                if ( (unsigned __int8)RtlpOwnerAcesPresent(v131, v132) )
                {
                  Handle = 0LL;
                  v181 = 20;
                  if ( (_BYTE)v198 != 1 )
                    goto LABEL_236;
                  v231 = 0x30uLL;
                  v230[2] = 1;
                  *((_QWORD *)&v233 + 1) = v230;
                  v230[0] = 12;
                  v230[1] = 2;
                  v232 = 0uLL;
                  *(_QWORD *)&v233 = 0LL;
                  valid = NtDuplicateToken(v109, 8LL, &v231);
                  if ( valid < 0 )
                    goto LABEL_306;
                  v133 = (__int64)Handle;
                  if ( !Handle )
LABEL_236:
                    v133 = v109;
                  valid = ZwAccessCheck(v212, v133, 0x40000LL, v130, &v228, &v181, &v195, &v177, v167);
                  if ( Handle )
                    NtClose(Handle);
                  if ( valid < 0 )
                    goto LABEL_306;
                  valid = v177;
                  if ( v177 < 0 )
                    goto LABEL_306;
                }
              }
              if ( (v95 & 1) != 0 && !v11 )
                v108 |= 0x1000u;
              v110 = !v197 || (v197 & 0x1B0) != v197;
              if ( v173 && (v95 & 8) == 0 && v110 )
              {
                if ( !v109 )
                {
                  valid = -1073741700;
                  goto LABEL_306;
                }
                v205 = 8LL;
                *(_QWORD *)&v228 = 0x100000001LL;
                *((_QWORD *)&v228 + 1) = 8LL;
                v229 = 0;
                valid = ZwPrivilegeCheck(v109, &v228, v174, v97);
                if ( valid < 0 )
                {
LABEL_306:
                  ProcessHeap = v176;
                  v10 = v169;
                  v14 = v178;
                  goto LABEL_175;
                }
                if ( !v174[0] )
                {
                  ProcessHeap = v176;
                  valid = -1073741727;
                  v10 = v169;
                  v14 = v178;
                  goto LABEL_175;
                }
              }
              if ( !(_BYTE)v206 || (v95 & 8) != 0 )
              {
LABEL_150:
                if ( !v180 || (v95 & 0x10) != 0 )
                {
                  v111 = (unsigned __int8 *)v194;
                }
                else
                {
                  if ( !v109 )
                  {
                    ProcessHeap = v176;
                    valid = -1073741700;
                    v10 = v169;
                    v14 = v178;
                    goto LABEL_175;
                  }
                  v111 = (unsigned __int8 *)v194;
                  if ( !(unsigned __int8)RtlpValidOwnerSubjectContext(v109, v194, v191, &v210) )
                  {
                    valid = v210;
                    ProcessHeap = v176;
                    v10 = v169;
                    v14 = v178;
                    goto LABEL_175;
                  }
                }
                if ( !(_BYTE)v102 || !v192 )
                {
                  v112 = (unsigned __int16 *)Src;
                  v113 = (char *)v176;
LABEL_155:
                  v114 = 4 * v111[1] + 8;
                  if ( v196 )
                    v115 = 4 * *((unsigned __int8 *)v196 + 1) + 8;
                  else
                    v115 = 0;
                  if ( (v108 & 0x10) != 0 && v169 )
                    v116 = (v169[1] + 3) & 0xFFFFFFFC;
                  else
                    v116 = 0;
                  if ( (v108 & 4) != 0 && v112 )
                    v117 = (v112[1] + 3) & 0xFFFFFFFC;
                  else
                    v117 = 0;
                  v178 = (_OWORD *)RtlAllocateHeap(v113, NtdllBaseTag + 1310720, v114 + v115 + v116 + v117 + 20);
                  v14 = v178;
                  if ( v178 )
                  {
                    v118 = (unsigned __int16 *)v178 + 10;
                    *v178 = 0LL;
                    *((_DWORD *)v14 + 4) = 0;
                    *((_WORD *)v14 + 1) |= v108;
                    *(_BYTE *)v14 = 1;
                    if ( (v108 & 0x10) != 0 && v169 )
                    {
                      v140 = (char *)v14 + 20;
                      if ( (a7 & 0x4000) != 0 )
                      {
                        v154 = v201;
                        if ( v170 )
                          v154 = 0LL;
                        RtlpNormalizeAcl(v118, v169, v154);
                        if ( v118[2] )
                        {
                          v116 = v118[1];
                        }
                        else
                        {
                          v140 = 0LL;
                          v116 = 0;
                        }
                      }
                      else
                      {
                        memmove(v118, v169, v169[1]);
                        if ( !v170 )
                          RtlpApplyAclToObject(v118, v201);
                        v141 = v169[1];
                        if ( v116 > (unsigned int)v141 )
                          memset_thunk_772440563353939046((char *)v118 + v141, 0, v116 - (unsigned int)v141);
                      }
                      if ( v140 )
                      {
                        v118 = (unsigned __int16 *)((char *)v118 + v116);
                        v142 = v178;
                        v143 = (_DWORD)v140 - (_DWORD)v178;
                      }
                      else
                      {
                        v143 = 0;
                        v142 = v178;
                      }
                      *((_DWORD *)v142 + 3) = v143;
                      v14 = v178;
                    }
                    v11 = (unsigned __int16 *)Src;
                    if ( (v108 & 4) != 0 )
                    {
                      if ( Src )
                      {
                        if ( (a7 & 0x4000) != 0 )
                        {
                          v146 = v201;
                          if ( v171 )
                            v146 = 0LL;
                          RtlpNormalizeAcl(v118, Src, v146);
                          v117 = v118[1];
                        }
                        else
                        {
                          memmove(v118, Src, *((unsigned __int16 *)Src + 1));
                          if ( !v171 )
                            RtlpApplyAclToObject(v118, v201);
                          v119 = v11[1];
                          if ( v117 > (unsigned int)v119 )
                            memset_thunk_772440563353939046((char *)v118 + v119, 0, v117 - (unsigned int)v119);
                        }
                        *((_DWORD *)v14 + 4) = (_DWORD)v118 - (_DWORD)v14;
                        v118 = (unsigned __int16 *)((char *)v118 + v117);
                      }
                      else
                      {
                        *((_DWORD *)v14 + 4) = 0;
                      }
                    }
                    memmove(v118, v194, v114);
                    v120 = (int)v118;
                    v121 = (char *)v118 + v114;
                    *((_DWORD *)v14 + 1) = v120 - (_DWORD)v14;
                    if ( v196 )
                    {
                      memmove(v121, v196, v115);
                      *((_DWORD *)v14 + 2) = (_DWORD)v121 - (_DWORD)v14;
                    }
                    ProcessHeap = v176;
                    valid = 0;
                    v10 = v169;
                  }
                  else
                  {
                    ProcessHeap = v176;
                    valid = -1073741801;
                    v10 = v169;
                    v11 = (unsigned __int16 *)Src;
                  }
                  goto LABEL_175;
                }
                valid = RtlpCreateServerAcl(
                          (_DWORD)v11,
                          (unsigned __int8)v216,
                          (_DWORD)v204,
                          (unsigned int)&v213,
                          (__int64)&v184);
                if ( valid >= 0 )
                {
                  v113 = (char *)v176;
                  if ( v171 && v11 )
                    RtlFreeHeap(v176, 0LL, v11);
                  v112 = v213;
                  Src = v213;
                  v213 = 0LL;
                  goto LABEL_155;
                }
                goto LABEL_306;
              }
              if ( v109 )
              {
                v205 = 32LL;
                *(_QWORD *)&v228 = 0x100000001LL;
                *((_QWORD *)&v228 + 1) = 32LL;
                v229 = 0;
                valid = ZwPrivilegeCheck(v109, &v228, v174, v97);
                if ( valid < 0 )
                  goto LABEL_306;
                if ( !v174[0] )
                {
                  ProcessHeap = v176;
                  valid = -1073741727;
                  v10 = v169;
                  v14 = v178;
                  goto LABEL_175;
                }
                goto LABEL_150;
              }
              ProcessHeap = v176;
              valid = -1073741700;
              v10 = v169;
              goto LABEL_280;
            }
            if ( !v209 )
            {
              v10 = v169;
              valid = -1073741700;
              v11 = (unsigned __int16 *)Src;
              v14 = v178;
              goto LABEL_175;
            }
            valid = RtlSidDominates(Buf1, v135);
            if ( valid >= 0 )
            {
              v136 = (unsigned __int8)v206;
              if ( !v182 )
                v136 = 1;
              v206 = v136;
              goto LABEL_129;
            }
LABEL_278:
            v10 = v169;
LABEL_279:
            v11 = (unsigned __int16 *)Src;
LABEL_280:
            v14 = v178;
            goto LABEL_175;
          }
          if ( valid >= 0 )
          {
            v87 = v187;
            v78 = Handle;
            goto LABEL_123;
          }
LABEL_277:
          ProcessHeap = v176;
          goto LABEL_278;
        }
        v69 = *((_WORD *)v9 + 1);
        if ( (v69 & 0x10) != 0 )
        {
          if ( v69 >= 0 )
          {
            v71 = (char *)*((_QWORD *)v9 + 3);
LABEL_86:
            if ( v71 )
            {
              v72 = v71 + 8;
              for ( k = 0; k < *((unsigned __int16 *)v71 + 2); ++k )
              {
                if ( *v72 == 17 )
                {
                  if ( !v72 )
                  {
                    v74 = Buf1;
                    v76 = 0LL;
                    v75 = 0;
                    goto LABEL_90;
                  }
                  v75 = v72[1];
                  v76 = (__int64)(v72 + 8);
                  v68 = *((_DWORD *)v72 + 1);
                  Buf2 = v72 + 8;
                  if ( v75 == 8 || (v75 & 0x10) != 0 )
                  {
                    v74 = Buf1;
                    v72 = 0LL;
                    Buf2 = 0LL;
                    v76 = 0LL;
                    v68 = 0;
                    v75 = 0;
                  }
                  else
                  {
                    v74 = Buf1;
                    if ( (v75 & 8) != 0 )
                    {
                      v149 = *((_DWORD *)Buf1 + 2) < 0x2000u;
                      Buf2 = v72 + 8;
                      if ( v149 )
                      {
                        ProcessHeap = v176;
                        valid = -1073740730;
                        v10 = v169;
                        v11 = 0LL;
                        v14 = v178;
                        goto LABEL_175;
                      }
                    }
                  }
                  goto LABEL_90;
                }
                v72 += *((unsigned __int16 *)v72 + 1);
              }
            }
            goto LABEL_89;
          }
          v70 = *((unsigned int *)v9 + 3);
          if ( (_DWORD)v70 )
          {
            v71 = (char *)v9 + v70;
            goto LABEL_86;
          }
        }
LABEL_89:
        v74 = Buf1;
        v72 = 0LL;
        v75 = 0;
        v76 = 0LL;
        goto LABEL_90;
      }
      if ( (v40 & 0x10) != 0 )
      {
        if ( v40 >= 0 )
        {
          v156 = (unsigned __int16 *)*((_QWORD *)v9 + 3);
        }
        else
        {
          v155 = *((unsigned int *)v9 + 3);
          if ( !(_DWORD)v155 )
          {
            v169 = 0LL;
            goto LABEL_382;
          }
          v156 = (unsigned __int16 *)((char *)v9 + v155);
        }
        v169 = v156;
      }
      else
      {
        v169 = 0LL;
      }
LABEL_382:
      v173 = 1;
      v181 = v41 | v40 & 0x2000 | 0x10;
      goto LABEL_42;
    }
    goto LABEL_197;
  }
  if ( !v23 )
  {
    valid = -1073741733;
    goto LABEL_175;
  }
  if ( *(__int16 *)(v23 + 2) >= 0 )
  {
    v123 = *(void **)(v23 + 16);
    goto LABEL_196;
  }
  v151 = *(unsigned int *)(v23 + 8);
  if ( (_DWORD)v151 )
  {
    v123 = (void *)(v23 + v151);
    goto LABEL_196;
  }
LABEL_197:
  valid = -1073741733;
LABEL_175:
  if ( v212 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, v212);
  if ( v184 && v213 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, v213);
  RtlFreeHeap(ProcessHeap, 0LL, v223);
  RtlFreeHeap(ProcessHeap, 0LL, v217);
  RtlFreeHeap(ProcessHeap, 0LL, v218);
  RtlFreeHeap(ProcessHeap, 0LL, v219);
  RtlFreeHeap(ProcessHeap, 0LL, v220);
  if ( v221 )
    RtlFreeHeap(ProcessHeap, 0LL, v221);
  if ( v222 )
    RtlFreeHeap(ProcessHeap, 0LL, v222);
  if ( (v170 || v185) && v10 )
    RtlFreeHeap(ProcessHeap, 0LL, v10);
  if ( v186 && v193 )
    RtlFreeHeap(ProcessHeap, 0LL, v193);
  if ( v171 )
  {
    if ( v11 )
      RtlFreeHeap(ProcessHeap, 0LL, v11);
  }
  *v225 = v14;
  return (unsigned int)valid;
}
