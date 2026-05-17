/*
 * XREFs of RtlpNewSecurityObject @ 0x1800C9280
 * Callers:
 *     RtlNewSecurityObjectEx @ 0x1800C8BD0 (RtlNewSecurityObjectEx.c)
 *     RtlpNewSecurityObject @ 0x1800C9280 (RtlpNewSecurityObject.c)
 *     RtlNewSecurityObjectWithMultipleInheritance @ 0x18010B170 (RtlNewSecurityObjectWithMultipleInheritance.c)
 *     RtlNewSecurityObject @ 0x18010DF90 (RtlNewSecurityObject.c)
 *     RtlCreateUserSecurityObject @ 0x180133850 (RtlCreateUserSecurityObject.c)
 *     RtlNewInstanceSecurityObject @ 0x1801338F0 (RtlNewInstanceSecurityObject.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180011260 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x1800269F0 (RtlFreeHeap.c)
 *     RtlpValidOwnerSubjectContext @ 0x1800C6760 (RtlpValidOwnerSubjectContext.c)
 *     RtlpCreateServerAcl @ 0x1800C69DC (RtlpCreateServerAcl.c)
 *     RtlpApplyAclToObject @ 0x1800C8430 (RtlpApplyAclToObject.c)
 *     RtlpNormalizeAcl @ 0x1800C84D4 (RtlpNormalizeAcl.c)
 *     RtlSidDominatesForTrust @ 0x1800C87B0 (RtlSidDominatesForTrust.c)
 *     RtlSidDominates @ 0x1800C88C0 (RtlSidDominates.c)
 *     RtlAddMandatoryAce @ 0x1800C89E0 (RtlAddMandatoryAce.c)
 *     RtlpGetDefaultsSubjectContext @ 0x1800C8C40 (RtlpGetDefaultsSubjectContext.c)
 *     RtlpNewSecurityObject @ 0x1800C9280 (RtlpNewSecurityObject.c)
 *     RtlpValidFilterAclSubjectContext @ 0x1800CAF40 (RtlpValidFilterAclSubjectContext.c)
 *     RtlpCombineAcls @ 0x1800CB040 (RtlpCombineAcls.c)
 *     RtlpInheritAcl2 @ 0x1800CB980 (RtlpInheritAcl2.c)
 *     RtlpOwnerAcesPresent @ 0x1800E8EB0 (RtlpOwnerAcesPresent.c)
 *     ZwAccessCheck @ 0x180161C90 (ZwAccessCheck.c)
 *     NtClose @ 0x180161E70 (NtClose.c)
 *     NtQueryInformationToken @ 0x1801620B0 (NtQueryInformationToken.c)
 *     NtDuplicateToken @ 0x1801624D0 (NtDuplicateToken.c)
 *     ZwPrivilegeCheck @ 0x1801644C0 (ZwPrivilegeCheck.c)
 *     __security_check_cookie @ 0x1801659C0 (__security_check_cookie.c)
 *     memmove @ 0x180167400 (memmove.c)
 *     memset$thunk$772440563353939046 @ 0x180172030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlpNewSecurityObject(
        __int64 a1,
        _OWORD *a2,
        _QWORD *a3,
        __int64 a4,
        int a5,
        unsigned __int8 a6,
        unsigned int a7,
        void *a8,
        _DWORD *a9)
{
  _OWORD *v9; // r14
  unsigned __int64 v10; // r13
  unsigned __int16 *v11; // rsi
  unsigned __int8 *v12; // rbx
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
  void *v36; // r15
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
  void *v49; // rsi
  unsigned int v50; // ecx
  unsigned int v51; // r14d
  unsigned __int64 v52; // rdx
  unsigned __int64 v53; // rax
  __int16 v54; // cx
  unsigned __int64 v55; // r13
  __int64 v56; // rsi
  unsigned int v57; // ebx
  __int16 v58; // ax
  char *v59; // rax
  char *v60; // rdi
  unsigned int i; // ecx
  __int64 v62; // rdx
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
  void *v82; // r12
  unsigned int v83; // ecx
  unsigned int v84; // r15d
  unsigned __int64 v85; // rdi
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
  __int16 v97; // ax
  __int64 v98; // rsi
  __int64 v99; // r10
  __int16 v100; // ax
  __int64 v101; // rdi
  void *v102; // r13
  int v103; // r14d
  unsigned __int64 v104; // r8
  unsigned int v105; // r12d
  void *v106; // rax
  __int16 v107; // r13
  void *v108; // r15
  bool v109; // al
  unsigned __int8 *v110; // r14
  unsigned __int16 *v111; // rcx
  __int64 v112; // rdi
  unsigned int v113; // r15d
  unsigned int v114; // r14d
  unsigned int v115; // esi
  unsigned int v116; // ebx
  unsigned __int16 *v117; // rdi
  __int64 v118; // rcx
  int v119; // eax
  char *v120; // rdi
  int v121; // eax
  void *v122; // rbx
  unsigned __int8 *v123; // rax
  __int64 v124; // rcx
  __int64 v125; // rcx
  __int64 v126; // rax
  __int64 v127; // rax
  __int64 v128; // rax
  _DWORD *v129; // r14
  __int64 v130; // rcx
  __int64 v131; // rdx
  HANDLE v132; // rdx
  __int64 v133; // rax
  char *v134; // rdx
  int v135; // eax
  __int16 v136; // cx
  unsigned __int16 *v137; // r8
  unsigned int v138; // edx
  char *v139; // r12
  __int64 v140; // rcx
  _OWORD *v141; // rax
  int v142; // r12d
  bool v143; // zf
  __int64 v144; // rax
  _DWORD *v145; // r8
  int v146; // ecx
  int v147; // ecx
  bool v148; // cf
  __int64 v149; // rax
  __int64 v150; // rax
  __int64 v151; // rax
  void *v152; // rax
  _DWORD *v153; // r8
  __int64 v154; // rax
  unsigned __int16 *v155; // rax
  unsigned int v156; // ecx
  __int16 v157; // r9
  unsigned int v158; // r10d
  __int64 v159; // rax
  char *v160; // rax
  __int64 v161; // rax
  char *v162; // rdx
  unsigned int j; // ecx
  __int64 v164; // [rsp+20h] [rbp-F0h]
  __int64 v165; // [rsp+28h] [rbp-E8h]
  __int64 v166; // [rsp+40h] [rbp-D0h]
  unsigned __int16 *v167; // [rsp+90h] [rbp-80h]
  unsigned __int16 *v168; // [rsp+90h] [rbp-80h]
  char v169; // [rsp+98h] [rbp-78h]
  char v170; // [rsp+99h] [rbp-77h]
  char v171; // [rsp+9Ah] [rbp-76h] BYREF
  char v172; // [rsp+9Bh] [rbp-75h] BYREF
  _BYTE v173[4]; // [rsp+9Ch] [rbp-74h] BYREF
  void *Src; // [rsp+A0h] [rbp-70h]
  void *v175; // [rsp+A8h] [rbp-68h]
  int v176; // [rsp+B0h] [rbp-60h] BYREF
  _OWORD *v177; // [rsp+B8h] [rbp-58h]
  char v178; // [rsp+C0h] [rbp-50h] BYREF
  char v179; // [rsp+C1h] [rbp-4Fh]
  int v180; // [rsp+C4h] [rbp-4Ch] BYREF
  char v181; // [rsp+C8h] [rbp-48h] BYREF
  char v182; // [rsp+C9h] [rbp-47h]
  char v183; // [rsp+CAh] [rbp-46h] BYREF
  char v184; // [rsp+CBh] [rbp-45h]
  char v185; // [rsp+CCh] [rbp-44h]
  int v186; // [rsp+D0h] [rbp-40h] BYREF
  char v187; // [rsp+D4h] [rbp-3Ch]
  char v188; // [rsp+D5h] [rbp-3Bh] BYREF
  char v189; // [rsp+D6h] [rbp-3Ah] BYREF
  char v190; // [rsp+D7h] [rbp-39h]
  __int16 v191; // [rsp+D8h] [rbp-38h]
  unsigned __int64 v192; // [rsp+E0h] [rbp-30h]
  void *v193; // [rsp+E8h] [rbp-28h]
  int v194; // [rsp+F0h] [rbp-20h] BYREF
  void *v195; // [rsp+F8h] [rbp-18h]
  int v196; // [rsp+100h] [rbp-10h] BYREF
  int v197; // [rsp+104h] [rbp-Ch] BYREF
  void *Buf2; // [rsp+108h] [rbp-8h]
  __int64 v199; // [rsp+110h] [rbp+0h]
  _DWORD *v200; // [rsp+118h] [rbp+8h]
  HANDLE Handle; // [rsp+120h] [rbp+10h]
  void *Buf1; // [rsp+128h] [rbp+18h]
  unsigned __int8 *v203; // [rsp+130h] [rbp+20h]
  __int64 v204; // [rsp+138h] [rbp+28h]
  int v205; // [rsp+140h] [rbp+30h]
  __int64 v206; // [rsp+148h] [rbp+38h]
  _OWORD *v207; // [rsp+150h] [rbp+40h]
  void *v208; // [rsp+158h] [rbp+48h]
  int v209; // [rsp+160h] [rbp+50h] BYREF
  __int64 v210; // [rsp+168h] [rbp+58h]
  unsigned __int64 v211; // [rsp+170h] [rbp+60h] BYREF
  unsigned __int16 *v212; // [rsp+178h] [rbp+68h] BYREF
  unsigned __int16 *v213; // [rsp+180h] [rbp+70h] BYREF
  __int64 v214; // [rsp+188h] [rbp+78h]
  int v215; // [rsp+190h] [rbp+80h]
  void **v216; // [rsp+198h] [rbp+88h] BYREF
  __int64 *v217; // [rsp+1A0h] [rbp+90h] BYREF
  void **v218; // [rsp+1A8h] [rbp+98h] BYREF
  __int64 *v219; // [rsp+1B0h] [rbp+A0h] BYREF
  unsigned __int8 **v220; // [rsp+1B8h] [rbp+A8h] BYREF
  __int64 *v221; // [rsp+1C0h] [rbp+B0h] BYREF
  unsigned __int8 **v222; // [rsp+1C8h] [rbp+B8h] BYREF
  __int64 v223; // [rsp+1D0h] [rbp+C0h]
  _QWORD *v224; // [rsp+1D8h] [rbp+C8h]
  _OWORD v225[2]; // [rsp+1E0h] [rbp+D0h] BYREF
  __int64 v226; // [rsp+200h] [rbp+F0h]
  __int128 v227; // [rsp+208h] [rbp+F8h] BYREF
  int v228; // [rsp+218h] [rbp+108h]
  _DWORD v229[4]; // [rsp+220h] [rbp+110h] BYREF
  __int128 v230; // [rsp+230h] [rbp+120h] BYREF
  __int128 v231; // [rsp+240h] [rbp+130h]
  __int128 v232; // [rsp+250h] [rbp+140h]
  __int64 v233; // [rsp+260h] [rbp+150h]
  _QWORD v234[16]; // [rsp+270h] [rbp+160h] BYREF

  v200 = a9;
  v9 = a2;
  v207 = a2;
  v226 = 0LL;
  v173[0] = 0;
  v10 = 0LL;
  v228 = 0;
  v11 = 0LL;
  v169 = 0;
  v12 = 0LL;
  v185 = 0;
  v13 = 0LL;
  v184 = 0;
  v14 = 0LL;
  v170 = 0;
  v179 = 0;
  v172 = 0;
  v188 = 0;
  v189 = 0;
  v178 = 0;
  LOBYTE(v205) = 0;
  v183 = 0;
  memset(v225, 0, sizeof(v225));
  v196 = 0;
  v213 = 0LL;
  v227 = 0LL;
  v211 = 0LL;
  Handle = v234;
  v199 = a1;
  v15 = (__int64)a8;
  v210 = a4;
  ProcessHeap = NtCurrentPeb()->ProcessHeap;
  v175 = ProcessHeap;
  v224 = a3;
  v208 = a8;
  v192 = 0LL;
  Src = 0LL;
  v212 = 0LL;
  Buf1 = 0LL;
  v214 = 0LL;
  v203 = 0LL;
  v206 = 0LL;
  v204 = 0LL;
  v177 = 0LL;
  v186 = 0;
  v194 = 0;
  v223 = 0LL;
  Buf2 = 0LL;
  v181 = 1;
  v209 = 0;
  LOBYTE(v197) = 1;
  v222 = 0LL;
  v218 = 0LL;
  v219 = 0LL;
  v216 = 0LL;
  v217 = 0LL;
  v220 = 0LL;
  v221 = 0LL;
  if ( a8 )
  {
    v197 = 0;
    v233 = 0LL;
    v230 = 0LL;
    v231 = 0LL;
    v232 = 0LL;
    result = NtQueryInformationToken(a8, 10LL, &v230, 56LL, &v197);
    if ( (int)result < 0 )
      return result;
    v197 = DWORD2(v231);
    if ( DWORD2(v231) == 2 && SHIDWORD(v231) < 1 )
      return 3221225637LL;
    v15 = (__int64)v208;
  }
  if ( v9 )
  {
    v182 = 1;
  }
  else
  {
    v9 = v225;
    v182 = 0;
    v207 = v225;
    LOBYTE(v225[0]) = 1;
  }
  v18 = *((unsigned __int16 *)v9 + 1);
  v191 = *((_WORD *)v9 + 1) & 0x80;
  v19 = v191;
  LOBYTE(v18) = (v18 & 0x40) != 0;
  v190 = v191 != 0;
  v215 = v18;
  if ( v15 || v191 )
  {
    result = RtlpGetDefaultsSubjectContext(
               v15,
               v191 != 0,
               (unsigned __int64 *)&v222,
               (unsigned __int64 *)&v218,
               (unsigned __int64 *)&v219,
               (unsigned __int64 *)&v220,
               (unsigned __int64 *)&v216,
               (unsigned __int64 *)&v217,
               (unsigned __int64 *)&v221);
    if ( (int)result < 0 )
      return result;
    v12 = *v222;
    v13 = *v218;
    v204 = *v219;
    Buf1 = *v216;
    v214 = *v217;
    if ( v220 )
      v203 = *v220;
    else
      v203 = 0LL;
    if ( v221 )
    {
      v20 = *v221;
      v19 = v191;
      v206 = *v221;
    }
    else
    {
      v19 = v191;
      v20 = 0LL;
      v206 = 0LL;
    }
  }
  else
  {
    v20 = 0LL;
  }
  v21 = *((unsigned __int16 *)v9 + 1);
  if ( (v21 & 0x8000u) != 0 )
  {
    v127 = *((unsigned int *)v9 + 1);
    if ( !(_DWORD)v127 )
      goto LABEL_198;
    v22 = (char *)v9 + v127;
  }
  else
  {
    v22 = (char *)*((_QWORD *)v9 + 1);
  }
  v193 = v22;
  if ( v22 )
  {
    v179 = 1;
LABEL_17:
    v23 = v199;
    goto LABEL_18;
  }
LABEL_198:
  if ( (a7 & 0x20) == 0 )
  {
    v123 = v12;
    if ( v19 )
      v123 = v203;
    v193 = v123;
    if ( !v123 )
    {
      valid = -1073741700;
      goto LABEL_175;
    }
    goto LABEL_17;
  }
  v23 = v199;
  if ( !v199 )
  {
    valid = -1073741734;
    goto LABEL_175;
  }
  if ( *(__int16 *)(v199 + 2) >= 0 )
  {
    v152 = *(void **)(v199 + 8);
  }
  else
  {
    v151 = *(unsigned int *)(v199 + 4);
    if ( !(_DWORD)v151 )
    {
LABEL_387:
      valid = -1073741734;
      goto LABEL_175;
    }
    v152 = (void *)(v199 + v151);
  }
  v193 = v152;
  v179 = 1;
  if ( !v152 )
    goto LABEL_387;
LABEL_18:
  if ( (v21 & 0x8000u) != 0 )
  {
    v128 = *((unsigned int *)v9 + 2);
    if ( !(_DWORD)v128 )
      goto LABEL_193;
    v24 = (char *)v9 + v128;
  }
  else
  {
    v24 = (char *)*((_QWORD *)v9 + 2);
  }
  v195 = v24;
  if ( v24 )
    goto LABEL_21;
LABEL_193:
  if ( (a7 & 0x40) == 0 )
  {
    v122 = v13;
    if ( v19 )
      v122 = (void *)v20;
LABEL_196:
    v195 = v122;
    if ( v122 )
    {
LABEL_21:
      v25 = a7 & 4;
      v176 = v25;
      v187 = v25 != 0;
      v26 = a7 & 2;
      v171 = v26 != 0;
      v27 = (v21 >> 2) & 8;
      v28 = (v21 >> 1) & 0x400;
      v29 = (v21 >> 1) & 0x1000;
      v30 = (v21 & 0x10) != 0 ? 4 : 0;
      if ( (v21 & 0x10) != 0 )
      {
        if ( (v21 & 0x8000u) != 0 )
        {
          v146 = *((_DWORD *)v9 + 3);
          v31 = 0LL;
          if ( v146 )
            LODWORD(v10) = (_DWORD)v9 + v146;
          goto LABEL_25;
        }
        v10 = *((_QWORD *)v9 + 3);
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
      v124 = *(unsigned int *)(v23 + 12);
      if ( (_DWORD)v124 )
        v33 = v23 + v124;
      else
LABEL_27:
        v33 = 0LL;
LABEL_28:
      valid = 0;
      v35 = v30 | v27 | v28 | v29;
      v36 = NtCurrentPeb()->ProcessHeap;
      if ( v35 || v33 )
      {
        v37 = 200;
        v38 = 0;
        v180 = 200;
        while ( v38 < 2 )
        {
          Heap = RtlAllocateHeap((__int64)v36, NtdllBaseTag + 1310720, v37);
          v167 = (unsigned __int16 *)Heap;
          if ( !Heap )
          {
            ProcessHeap = v175;
            valid = -1073741801;
            v11 = (unsigned __int16 *)Src;
            v10 = 0LL;
            v14 = v177;
            goto LABEL_175;
          }
          valid = RtlpInheritAcl2(
                    v33,
                    v10,
                    v35,
                    a6,
                    v171,
                    v187,
                    (__int64)v193,
                    (__int64)v195,
                    (__int64)v203,
                    v206,
                    (__int64)v200,
                    2,
                    v210,
                    a5,
                    (__int64)&v180,
                    Heap,
                    (__int64)&v172,
                    (__int64)&v186);
          if ( valid >= 0 )
          {
            if ( v180 )
            {
              v31 = v167;
            }
            else
            {
              RtlFreeHeap((__int64)v36, 0, (unsigned __int64)v167);
              v31 = 0LL;
            }
            break;
          }
          RtlFreeHeap((__int64)v36, 0, (unsigned __int64)v167);
          v31 = 0LL;
          if ( valid != -1073741789 )
            break;
          v37 = v180;
          ++v38;
        }
        v168 = v31;
        if ( valid < 0 )
        {
          v168 = v31;
          if ( valid == -2147483637 )
          {
            v25 = v176;
            v9 = v207;
            v23 = v199;
            goto LABEL_38;
          }
          ProcessHeap = v175;
          v10 = (unsigned __int64)v31;
          v11 = (unsigned __int16 *)Src;
          v14 = v177;
          goto LABEL_175;
        }
        v25 = v176;
        v9 = v207;
        v23 = v199;
        v169 = 1;
        v180 = 2 * (v186 & 0x1400 | (2 * (v186 & 8 | 0x2004)));
        goto LABEL_42;
      }
      v172 = 0;
      v168 = 0LL;
      v186 = v26 != 0 ? 0x400 : 0;
LABEL_38:
      v40 = *((_WORD *)v9 + 1);
      v41 = 34816;
      if ( (a7 & 2) == 0 )
        v41 = 0x8000;
      if ( (v40 & 0x30) != 0x30 )
      {
        v180 = v41;
LABEL_42:
        v42 = *((_WORD *)v9 + 1);
        v43 = v25 != 0;
        v44 = (v42 & 0x10) != 0 ? 4 : 0;
        if ( (v42 & 0x10) != 0 )
        {
          if ( v42 < 0 )
          {
            v147 = *((_DWORD *)v9 + 3);
            if ( v147 )
              LODWORD(v45) = (_DWORD)v9 + v147;
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
        v125 = *(unsigned int *)(v23 + 12);
        if ( (_DWORD)v125 )
          v47 = v23 + v125;
        else
LABEL_46:
          v47 = 0LL;
LABEL_47:
        valid = 0;
        v48 = v44 | (*((unsigned __int16 *)v9 + 1) >> 2) & 8 | (*((unsigned __int16 *)v9 + 1) >> 1) & 0x400;
        v49 = NtCurrentPeb()->ProcessHeap;
        if ( v48 || v47 )
        {
          v50 = 200;
          v51 = 0;
          v176 = 200;
          while ( 1 )
          {
            v52 = 0LL;
            if ( v51 >= 2 )
              break;
            v53 = RtlAllocateHeap((__int64)v49, NtdllBaseTag + 1310720, v50);
            v192 = v53;
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
                      v171,
                      v43,
                      (__int64)v193,
                      (__int64)v195,
                      (__int64)v203,
                      v206,
                      (__int64)v200,
                      2,
                      v210,
                      a5,
                      (__int64)&v176,
                      v53,
                      (__int64)&v188,
                      (__int64)&v194);
            if ( valid >= 0 )
            {
              if ( v176 )
              {
                v52 = v192;
              }
              else
              {
                RtlFreeHeap((__int64)v49, 0, v192);
                v52 = 0LL;
              }
              break;
            }
            RtlFreeHeap((__int64)v49, 0, v192);
            v52 = 0LL;
            if ( valid != -1073741789 )
              break;
            v50 = v176;
            ++v51;
          }
          v192 = v52;
          if ( valid >= 0 )
          {
            v9 = v207;
            v55 = v52;
            v185 = 1;
            goto LABEL_59;
          }
          v192 = v52;
          if ( valid != -2147483637 )
            goto LABEL_277;
          v9 = v207;
        }
        else
        {
          v192 = 0LL;
        }
        v54 = *((_WORD *)v9 + 1);
        if ( (v54 & 0x30) == 0x30 )
        {
          if ( (v54 & 0x10) != 0 )
          {
            if ( v54 >= 0 )
            {
              v55 = *((_QWORD *)v9 + 3);
              v192 = v55;
            }
            else
            {
              v149 = *((unsigned int *)v9 + 3);
              if ( (_DWORD)v149 )
              {
                v55 = (unsigned __int64)v9 + v149;
                v192 = (unsigned __int64)v9 + v149;
              }
              else
              {
                v55 = 0LL;
                v192 = 0LL;
              }
            }
          }
          else
          {
            v55 = 0LL;
            v192 = 0LL;
          }
        }
        else
        {
          v55 = v192;
        }
LABEL_59:
        v56 = v214;
        v57 = 0;
LABEL_60:
        v58 = *((_WORD *)v9 + 1);
        if ( (v58 & 0x10) != 0 )
        {
          if ( v58 < 0 )
          {
            v144 = *((unsigned int *)v9 + 3);
            if ( !(_DWORD)v144 )
              goto LABEL_72;
            v59 = (char *)v9 + v144;
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
                v62 = (__int64)(v60 + 8);
                v63 = i;
                if ( !v60 )
                  v62 = 0LL;
                if ( v62 )
                {
                  v171 = 0;
                  if ( !v56 || (RtlSidDominatesForTrust(v56, v62, (bool *)&v171), !v171) )
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
        v156 = 0;
        v157 = *((_WORD *)v9 + 1);
        if ( (v157 & 0x10) != 0 )
        {
LABEL_407:
          v158 = v156;
          if ( v157 >= 0 )
          {
            v160 = (char *)*((_QWORD *)v9 + 3);
          }
          else
          {
            v159 = *((unsigned int *)v9 + 3);
            if ( !(_DWORD)v159 )
              goto LABEL_411;
            v160 = (char *)v9 + v159;
          }
          if ( v160 )
          {
            v44 = *((unsigned __int16 *)v160 + 2);
            v162 = v160 + 8;
            for ( j = 0; j < (unsigned int)v44; ++j )
            {
              if ( j >= v158 && *v162 == 20 )
              {
                v156 = j + 1;
                if ( !v162 )
                  break;
                if ( (v162[1] & 8) == 0 )
                {
                  ProcessHeap = v175;
                  valid = -1073741811;
                  v10 = (unsigned __int64)v168;
                  v11 = 0LL;
                  v14 = v177;
                  goto LABEL_175;
                }
                goto LABEL_407;
              }
              v162 += *((unsigned __int16 *)v162 + 1);
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
        valid = RtlpValidFilterAclSubjectContext(v66, v64, v44);
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
          v72 = (char *)v223;
          v75 = 0;
          v74 = Buf1;
          v76 = v223;
LABEL_90:
          if ( !v68 )
          {
            if ( !v74 || v74[2] >= 0x2000u )
              goto LABEL_104;
            v68 = 1;
          }
          if ( !v72 )
          {
            if ( !v208 )
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
            v234[0] = 8388610LL;
            valid = RtlAddMandatoryAce((__int64)v234, 2u, v75, v76, 17, v68);
            if ( valid < 0 )
              goto LABEL_277;
            v78 = v234;
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
          if ( !v199 )
            goto LABEL_112;
          v80 = *(_WORD *)(v199 + 2);
          if ( (v80 & 0x10) == 0 )
            goto LABEL_112;
          if ( v80 >= 0 )
          {
            v81 = *(_QWORD *)(v199 + 24);
          }
          else
          {
            v133 = *(unsigned int *)(v199 + 12);
            if ( !(_DWORD)v133 )
            {
LABEL_112:
              v81 = 0LL;
              goto LABEL_113;
            }
            v81 = v199 + v133;
          }
LABEL_113:
          valid = 0;
          v82 = NtCurrentPeb()->ProcessHeap;
          if ( !v79 && !v81 )
            goto LABEL_122;
          v83 = 200;
          v84 = 0;
          v176 = 200;
          while ( 1 )
          {
            v85 = 0LL;
            if ( v84 >= 2 )
              break;
            v86 = RtlAllocateHeap((__int64)v82, NtdllBaseTag + 1310720, v83);
            v85 = v86;
            if ( !v86 )
              goto LABEL_276;
            valid = RtlpInheritAcl2(
                      v81,
                      (_DWORD)Handle,
                      v79,
                      a6,
                      1,
                      0,
                      (__int64)v193,
                      (__int64)v195,
                      (__int64)v203,
                      v206,
                      (__int64)v200,
                      3,
                      v210,
                      a5,
                      (__int64)&v176,
                      v86,
                      (__int64)&v189,
                      (__int64)&v186);
            if ( valid >= 0 )
            {
              if ( !v176 )
              {
                RtlFreeHeap((__int64)v82, 0, v85);
                v85 = 0LL;
              }
              break;
            }
            RtlFreeHeap((__int64)v82, 0, v85);
            v85 = 0LL;
            if ( valid != -1073741789 )
              break;
            v83 = v176;
            ++v84;
          }
          if ( valid == -2147483637 )
          {
            v78 = Handle;
LABEL_122:
            v85 = (unsigned __int64)v78;
            v186 = 0;
            v87 = 0;
LABEL_123:
            v88 = v55;
            v89 = v55;
            v165 = v55;
            v164 = v55;
            v10 = (unsigned __int64)v168;
            v90 = RtlpCombineAcls((_DWORD)v168, v85, v89, v88, v164, v165, (__int64)&v213, (__int64)&v196);
            v91 = v180;
            valid = v90;
            v196 |= (v180 & 0x2000) << 17;
            if ( v85 )
            {
              v143 = v85 == (_QWORD)v78;
              ProcessHeap = v175;
              if ( !v143 )
                RtlFreeHeap((__int64)v175, 0, v85);
            }
            else
            {
              ProcessHeap = v175;
            }
            if ( valid < 0 )
              goto LABEL_279;
            v92 = v213;
            if ( v213 )
            {
              if ( v169 && v168 )
              {
                RtlFreeHeap((__int64)ProcessHeap, 0, (unsigned __int64)v168);
                v92 = v213;
              }
              v93 = v92;
              v168 = v92;
              v184 = 1;
              v94 = 0;
              v213 = 0LL;
              v180 = (2 * (v87 & 0x1400 | (2 * (v87 & 8 | 4)))) | v91;
            }
            else
            {
              v93 = v168;
              v94 = 0;
            }
            v95 = a7;
            if ( (a7 & 8) != 0 )
              goto LABEL_129;
            if ( v93 )
            {
              v137 = v93 + 4;
              v138 = v93[2];
              while ( v94 < v138 )
              {
                if ( *(_BYTE *)v137 == 17 )
                {
                  v134 = (char *)(v137 + 4);
                  goto LABEL_255;
                }
                ++v94;
                v137 = (unsigned __int16 *)((char *)v137 + v137[1]);
              }
            }
            v134 = (char *)Buf2;
LABEL_255:
            if ( !v134 )
            {
LABEL_129:
              v96 = v207;
              v194 = a7 & 1;
              v97 = *((_WORD *)v207 + 1);
              if ( (v97 & 4) != 0 )
              {
                if ( v97 >= 0 )
                {
                  v98 = *((_QWORD *)v207 + 4);
                }
                else
                {
                  v121 = *((_DWORD *)v207 + 4);
                  if ( v121 )
                    LODWORD(v98) = (_DWORD)v207 + v121;
                  else
                    LODWORD(v98) = 0;
                }
              }
              else
              {
                LODWORD(v98) = 0;
              }
              v99 = v199;
              if ( !v199 )
                goto LABEL_133;
              v100 = *(_WORD *)(v199 + 2);
              if ( (v100 & 4) == 0 )
                goto LABEL_133;
              if ( v100 >= 0 )
              {
                v101 = *(_QWORD *)(v199 + 32);
              }
              else
              {
                v126 = *(unsigned int *)(v199 + 16);
                if ( !(_DWORD)v126 )
                {
LABEL_133:
                  v101 = 0LL;
                  goto LABEL_134;
                }
                v101 = v199 + v126;
              }
LABEL_134:
              valid = 0;
              v102 = NtCurrentPeb()->ProcessHeap;
              v103 = *((_WORD *)v207 + 1) & 0x140C;
              if ( (*((_WORD *)v207 + 1) & 0x140C) != 0 || v101 )
              {
                v104 = 200LL;
                v105 = 0;
                v176 = 200;
                while ( 1 )
                {
                  if ( v105 >= 2 )
                  {
LABEL_141:
                    v11 = 0LL;
                    goto LABEL_142;
                  }
                  v106 = (void *)RtlAllocateHeap((__int64)v102, NtdllBaseTag + 1310720, v104);
                  Src = v106;
                  if ( !v106 )
                  {
                    ProcessHeap = v175;
                    valid = -1073741801;
                    v10 = (unsigned __int64)v168;
                    v11 = 0LL;
                    v14 = v177;
                    goto LABEL_175;
                  }
                  valid = RtlpInheritAcl2(
                            v101,
                            v98,
                            v103,
                            a6,
                            v194,
                            (a7 & 4) != 0,
                            (__int64)v193,
                            (__int64)v195,
                            (__int64)v203,
                            v206,
                            (__int64)v200,
                            1,
                            v210,
                            a5,
                            (__int64)&v176,
                            (__int64)v106,
                            (__int64)&v178,
                            (__int64)&v186);
                  if ( valid >= 0 )
                    break;
                  RtlFreeHeap((__int64)v102, 0, (unsigned __int64)Src);
                  if ( valid != -1073741789 )
                    goto LABEL_141;
                  v104 = (unsigned int)v176;
                  ++v105;
                }
                if ( v176 )
                {
                  v11 = (unsigned __int16 *)Src;
                }
                else
                {
                  RtlFreeHeap((__int64)v102, 0, (unsigned __int64)Src);
                  v11 = 0LL;
                }
LABEL_142:
                Src = v11;
                if ( valid >= 0 )
                {
                  LOBYTE(v101) = v178;
                  v99 = v199;
                  v107 = v186 & 0x1408 | 4 | v180;
                  v95 = a7;
                  v170 = 1;
                  goto LABEL_144;
                }
                Src = v11;
                if ( valid != -2147483637 )
                  goto LABEL_306;
                LOBYTE(v101) = v178;
                v96 = v207;
                v99 = v199;
                v95 = a7;
              }
              else
              {
                v11 = 0LL;
                Src = 0LL;
              }
              v107 = v180;
              if ( (v95 & 1) != 0 )
                v107 = v180 | 0x400;
              v136 = *((_WORD *)v96 + 1);
              if ( (v136 & 0xC) == 0xC )
              {
                if ( (v136 & 4) != 0 )
                {
                  if ( v136 < 0 )
                  {
                    v161 = *((unsigned int *)v96 + 4);
                    if ( (_DWORD)v161 )
                      v11 = (unsigned __int16 *)((char *)v96 + v161);
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
                LOBYTE(v101) = 1;
                v107 |= v136 & 0x1000 | 4;
              }
              else if ( v204 )
              {
                v11 = (unsigned __int16 *)v204;
                Src = (void *)v204;
                v107 |= 4u;
              }
LABEL_144:
              v108 = v208;
              if ( (v95 & 0x1000) == 0 && v182 && v208 && v99 )
              {
                v129 = v200;
                v194 = 0;
                v176 = 0;
                valid = RtlpNewSecurityObject(
                          v99,
                          0,
                          (unsigned int)&v211,
                          v210,
                          a5,
                          a6,
                          v95 | 1,
                          (__int64)v208,
                          (__int64)v200);
                if ( valid < 0 )
                  goto LABEL_306;
                v130 = *(unsigned __int16 *)(v211 + 2);
                if ( (v130 & 4) != 0 )
                {
                  if ( (v130 & 0x8000u) == 0LL )
                  {
                    v131 = *(_QWORD *)(v211 + 32);
                  }
                  else
                  {
                    v130 = *(unsigned int *)(v211 + 16);
                    if ( (_DWORD)v130 )
                      v131 = v211 + v130;
                    else
                      v131 = 0LL;
                  }
                }
                else
                {
                  v131 = 0LL;
                }
                LOBYTE(v130) = 16;
                if ( (unsigned __int8)RtlpOwnerAcesPresent(v130, v131) )
                {
                  Handle = 0LL;
                  v180 = 20;
                  if ( (_BYTE)v197 != 1 )
                    goto LABEL_236;
                  v230 = 0x30uLL;
                  v229[2] = 1;
                  *((_QWORD *)&v232 + 1) = v229;
                  v229[0] = 12;
                  v229[1] = 2;
                  v231 = 0uLL;
                  *(_QWORD *)&v232 = 0LL;
                  valid = NtDuplicateToken(v108, 8LL, &v230);
                  if ( valid < 0 )
                    goto LABEL_306;
                  v132 = Handle;
                  if ( !Handle )
LABEL_236:
                    v132 = v108;
                  valid = ZwAccessCheck(v211, v132, 0x40000LL, v129, &v227, &v180, &v194, &v176, v166);
                  if ( Handle )
                    NtClose(Handle);
                  if ( valid < 0 )
                    goto LABEL_306;
                  valid = v176;
                  if ( v176 < 0 )
                    goto LABEL_306;
                }
              }
              if ( (v95 & 1) != 0 && !v11 )
                v107 |= 0x1000u;
              v109 = !v196 || (v196 & 0x1B0) != v196;
              if ( v172 && (v95 & 8) == 0 && v109 )
              {
                if ( !v108 )
                {
                  valid = -1073741700;
                  goto LABEL_306;
                }
                v204 = 8LL;
                *(_QWORD *)&v227 = 0x100000001LL;
                *((_QWORD *)&v227 + 1) = 8LL;
                v228 = 0;
                valid = ZwPrivilegeCheck(v108, &v227, v173);
                if ( valid < 0 )
                {
LABEL_306:
                  ProcessHeap = v175;
                  v10 = (unsigned __int64)v168;
                  v14 = v177;
                  goto LABEL_175;
                }
                if ( !v173[0] )
                {
                  ProcessHeap = v175;
                  valid = -1073741727;
                  v10 = (unsigned __int64)v168;
                  v14 = v177;
                  goto LABEL_175;
                }
              }
              if ( !(_BYTE)v205 || (v95 & 8) != 0 )
              {
LABEL_150:
                if ( !v179 || (v95 & 0x10) != 0 )
                {
                  v110 = (unsigned __int8 *)v193;
                }
                else
                {
                  if ( !v108 )
                  {
                    ProcessHeap = v175;
                    valid = -1073741700;
                    v10 = (unsigned __int64)v168;
                    v14 = v177;
                    goto LABEL_175;
                  }
                  v110 = (unsigned __int8 *)v193;
                  if ( !RtlpValidOwnerSubjectContext(v108, (__int64)v193, v190, &v209) )
                  {
                    valid = v209;
                    ProcessHeap = v175;
                    v10 = (unsigned __int64)v168;
                    v14 = v177;
                    goto LABEL_175;
                  }
                }
                if ( !(_BYTE)v101 || !v191 )
                {
                  v111 = (unsigned __int16 *)Src;
                  v112 = (__int64)v175;
LABEL_155:
                  v113 = 4 * v110[1] + 8;
                  if ( v195 )
                    v114 = 4 * *((unsigned __int8 *)v195 + 1) + 8;
                  else
                    v114 = 0;
                  if ( (v107 & 0x10) != 0 && v168 )
                    v115 = (v168[1] + 3) & 0xFFFFFFFC;
                  else
                    v115 = 0;
                  if ( (v107 & 4) != 0 && v111 )
                    v116 = (v111[1] + 3) & 0xFFFFFFFC;
                  else
                    v116 = 0;
                  v177 = (_OWORD *)RtlAllocateHeap(v112, NtdllBaseTag + 1310720, v113 + v114 + v115 + v116 + 20);
                  v14 = v177;
                  if ( v177 )
                  {
                    v117 = (unsigned __int16 *)v177 + 10;
                    *v177 = 0LL;
                    *((_DWORD *)v14 + 4) = 0;
                    *((_WORD *)v14 + 1) |= v107;
                    *(_BYTE *)v14 = 1;
                    if ( (v107 & 0x10) != 0 && v168 )
                    {
                      v139 = (char *)v14 + 20;
                      if ( (a7 & 0x4000) != 0 )
                      {
                        v153 = v200;
                        if ( v169 )
                          v153 = 0LL;
                        RtlpNormalizeAcl((__int64)v117, (__int64)v168, v153);
                        if ( v117[2] )
                        {
                          v115 = v117[1];
                        }
                        else
                        {
                          v139 = 0LL;
                          v115 = 0;
                        }
                      }
                      else
                      {
                        memmove(v117, v168, v168[1]);
                        if ( !v169 )
                          RtlpApplyAclToObject((__int64)v117, v200);
                        v140 = v168[1];
                        if ( v115 > (unsigned int)v140 )
                          memset_thunk_772440563353939046((char *)v117 + v140, 0, v115 - (unsigned int)v140);
                      }
                      if ( v139 )
                      {
                        v117 = (unsigned __int16 *)((char *)v117 + v115);
                        v141 = v177;
                        v142 = (_DWORD)v139 - (_DWORD)v177;
                      }
                      else
                      {
                        v142 = 0;
                        v141 = v177;
                      }
                      *((_DWORD *)v141 + 3) = v142;
                      v14 = v177;
                    }
                    v11 = (unsigned __int16 *)Src;
                    if ( (v107 & 4) != 0 )
                    {
                      if ( Src )
                      {
                        if ( (a7 & 0x4000) != 0 )
                        {
                          v145 = v200;
                          if ( v170 )
                            v145 = 0LL;
                          RtlpNormalizeAcl((__int64)v117, (__int64)Src, v145);
                          v116 = v117[1];
                        }
                        else
                        {
                          memmove(v117, Src, *((unsigned __int16 *)Src + 1));
                          if ( !v170 )
                            RtlpApplyAclToObject((__int64)v117, v200);
                          v118 = v11[1];
                          if ( v116 > (unsigned int)v118 )
                            memset_thunk_772440563353939046((char *)v117 + v118, 0, v116 - (unsigned int)v118);
                        }
                        *((_DWORD *)v14 + 4) = (_DWORD)v117 - (_DWORD)v14;
                        v117 = (unsigned __int16 *)((char *)v117 + v116);
                      }
                      else
                      {
                        *((_DWORD *)v14 + 4) = 0;
                      }
                    }
                    memmove(v117, v193, v113);
                    v119 = (int)v117;
                    v120 = (char *)v117 + v113;
                    *((_DWORD *)v14 + 1) = v119 - (_DWORD)v14;
                    if ( v195 )
                    {
                      memmove(v120, v195, v114);
                      *((_DWORD *)v14 + 2) = (_DWORD)v120 - (_DWORD)v14;
                    }
                    ProcessHeap = v175;
                    valid = 0;
                    v10 = (unsigned __int64)v168;
                  }
                  else
                  {
                    ProcessHeap = v175;
                    valid = -1073741801;
                    v10 = (unsigned __int64)v168;
                    v11 = (unsigned __int16 *)Src;
                  }
                  goto LABEL_175;
                }
                valid = RtlpCreateServerAcl((__int64)v11, v215, v203, (__int64 *)&v212, &v183);
                if ( valid >= 0 )
                {
                  v112 = (__int64)v175;
                  if ( v170 && v11 )
                    RtlFreeHeap((__int64)v175, 0, (unsigned __int64)v11);
                  v111 = v212;
                  Src = v212;
                  v212 = 0LL;
                  goto LABEL_155;
                }
                goto LABEL_306;
              }
              if ( v108 )
              {
                v204 = 32LL;
                *(_QWORD *)&v227 = 0x100000001LL;
                *((_QWORD *)&v227 + 1) = 32LL;
                v228 = 0;
                valid = ZwPrivilegeCheck(v108, &v227, v173);
                if ( valid < 0 )
                  goto LABEL_306;
                if ( !v173[0] )
                {
                  ProcessHeap = v175;
                  valid = -1073741727;
                  v10 = (unsigned __int64)v168;
                  v14 = v177;
                  goto LABEL_175;
                }
                goto LABEL_150;
              }
              ProcessHeap = v175;
              valid = -1073741700;
              v10 = (unsigned __int64)v168;
              goto LABEL_280;
            }
            if ( !v208 )
            {
              v10 = (unsigned __int64)v168;
              valid = -1073741700;
              v11 = (unsigned __int16 *)Src;
              v14 = v177;
              goto LABEL_175;
            }
            valid = RtlSidDominates((char *)Buf1, v134, &v181);
            if ( valid >= 0 )
            {
              v135 = (unsigned __int8)v205;
              if ( !v181 )
                v135 = 1;
              v205 = v135;
              goto LABEL_129;
            }
LABEL_278:
            v10 = (unsigned __int64)v168;
LABEL_279:
            v11 = (unsigned __int16 *)Src;
LABEL_280:
            v14 = v177;
            goto LABEL_175;
          }
          if ( valid >= 0 )
          {
            v87 = v186;
            v78 = Handle;
            goto LABEL_123;
          }
LABEL_277:
          ProcessHeap = v175;
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
                      v148 = *((_DWORD *)Buf1 + 2) < 0x2000u;
                      Buf2 = v72 + 8;
                      if ( v148 )
                      {
                        ProcessHeap = v175;
                        valid = -1073740730;
                        v10 = (unsigned __int64)v168;
                        v11 = 0LL;
                        v14 = v177;
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
          v155 = (unsigned __int16 *)*((_QWORD *)v9 + 3);
        }
        else
        {
          v154 = *((unsigned int *)v9 + 3);
          if ( !(_DWORD)v154 )
          {
            v168 = 0LL;
            goto LABEL_382;
          }
          v155 = (unsigned __int16 *)((char *)v9 + v154);
        }
        v168 = v155;
      }
      else
      {
        v168 = 0LL;
      }
LABEL_382:
      v172 = 1;
      v180 = v41 | v40 & 0x2000 | 0x10;
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
    v122 = *(void **)(v23 + 16);
    goto LABEL_196;
  }
  v150 = *(unsigned int *)(v23 + 8);
  if ( (_DWORD)v150 )
  {
    v122 = (void *)(v23 + v150);
    goto LABEL_196;
  }
LABEL_197:
  valid = -1073741733;
LABEL_175:
  if ( v211 )
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v211);
  if ( v183 && v212 )
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)v212);
  RtlFreeHeap((__int64)ProcessHeap, 0, (unsigned __int64)v222);
  RtlFreeHeap((__int64)ProcessHeap, 0, (unsigned __int64)v216);
  RtlFreeHeap((__int64)ProcessHeap, 0, (unsigned __int64)v217);
  RtlFreeHeap((__int64)ProcessHeap, 0, (unsigned __int64)v218);
  RtlFreeHeap((__int64)ProcessHeap, 0, (unsigned __int64)v219);
  if ( v220 )
    RtlFreeHeap((__int64)ProcessHeap, 0, (unsigned __int64)v220);
  if ( v221 )
    RtlFreeHeap((__int64)ProcessHeap, 0, (unsigned __int64)v221);
  if ( (v169 || v184) && v10 )
    RtlFreeHeap((__int64)ProcessHeap, 0, v10);
  if ( v185 && v192 )
    RtlFreeHeap((__int64)ProcessHeap, 0, v192);
  if ( v170 )
  {
    if ( v11 )
      RtlFreeHeap((__int64)ProcessHeap, 0, (unsigned __int64)v11);
  }
  *v224 = v14;
  return (unsigned int)valid;
}
