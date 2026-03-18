/*
 * XREFs of ProcessPendingIoCommands @ 0x140014BB0
 * Callers:
 *     IoTimeoutCallback @ 0x140011F50 (IoTimeoutCallback.c)
 *     NVMeCompletionDpcRoutine @ 0x140012F10 (NVMeCompletionDpcRoutine.c)
 *     ProcessForwardIoControl @ 0x140014560 (ProcessForwardIoControl.c)
 *     ProcessIrpCommand @ 0x140014990 (ProcessIrpCommand.c)
 *     ResumeIrpCommands @ 0x14002D47C (ResumeIrpCommands.c)
 * Callees:
 *     ProcessCommandTrace @ 0x14000B440 (ProcessCommandTrace.c)
 *     Feature_FixKcsanRacyAccessesInStorNVMe__private_IsEnabledDeviceUsageNoInline @ 0x1400176D8 (Feature_FixKcsanRacyAccessesInStorNVMe__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x140030FC0 (__security_check_cookie.c)
 *     memset @ 0x1400314C0 (memset.c)
 */

__int64 __fastcall ProcessPendingIoCommands(__int64 a1, __int64 a2, __int64 a3, _OWORD *a4)
{
  __int64 result; // rax
  __int64 v7; // r13
  __int64 v8; // r13
  __int64 v9; // rsi
  int v10; // r14d
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  unsigned __int8 v14; // al
  __int64 v15; // r8
  __int64 v16; // rax
  unsigned __int16 v17; // r14
  _WORD *v18; // r12
  unsigned __int16 v19; // bx
  unsigned __int16 *v20; // rsi
  _QWORD *v21; // r13
  unsigned __int16 *v22; // rdi
  __int64 v23; // rax
  unsigned int v24; // r10d
  unsigned __int16 v25; // dx
  unsigned __int16 v26; // cx
  unsigned __int16 v27; // dx
  unsigned __int16 v28; // dx
  unsigned __int16 v29; // cx
  __int16 v30; // r14
  unsigned int v31; // r14d
  bool v32; // zf
  __int64 v33; // r12
  __int64 v34; // rcx
  unsigned int v35; // edi
  __int64 v36; // rcx
  int v37; // r8d
  _OWORD *v38; // r11
  int v39; // eax
  int v40; // edx
  __int64 v41; // rcx
  int v42; // ebx
  _OWORD *v43; // rcx
  unsigned int v44; // edx
  unsigned int v45; // r14d
  __int64 v46; // r10
  unsigned int v47; // eax
  int v48; // eax
  unsigned int v49; // r13d
  unsigned int v50; // ecx
  __int64 v51; // r9
  __int64 *v52; // r13
  __m128i *v53; // r12
  unsigned int v54; // esi
  __int64 v55; // rcx
  int v56; // edi
  __int64 v57; // r9
  __int64 v58; // rcx
  int v59; // edx
  unsigned int v60; // eax
  void *v61; // rcx
  size_t v62; // r8
  __m128i **v63; // rax
  unsigned int v64; // edx
  unsigned int v65; // r9d
  __int64 v66; // rsi
  unsigned int v67; // r8d
  unsigned int v68; // edi
  _QWORD *v69; // r10
  unsigned int v70; // eax
  __int64 v71; // r14
  unsigned int v72; // edi
  __int64 v73; // r10
  __m128i *v74; // r8
  unsigned int v75; // r9d
  __int64 v76; // rdx
  __int64 v77; // rax
  __m128i v78; // xmm0
  __int64 v79; // rax
  __int64 PhysicalAddress; // rax
  _OWORD *v81; // r9
  __int64 *v82; // r13
  __m128i *v83; // r12
  int v84; // r14d
  unsigned int v85; // edi
  __int64 v86; // rcx
  __int64 v87; // r9
  __int64 v88; // rcx
  int v89; // edx
  unsigned int v90; // eax
  void *v91; // rcx
  size_t v92; // r8
  __m128i **v93; // rax
  unsigned int v94; // r8d
  unsigned int v95; // edx
  __int64 v96; // rsi
  unsigned int v97; // r9d
  __int64 v98; // r14
  __int64 v99; // rax
  unsigned int v100; // edi
  _QWORD *v101; // r10
  unsigned int v102; // r10d
  __m128i *v103; // r8
  unsigned int v104; // r9d
  __int64 v105; // rdx
  __int64 v106; // rdx
  __int64 v107; // rax
  __m128i v108; // xmm0
  __int64 v109; // rax
  __int64 v110; // rax
  unsigned __int16 v111; // di
  _OWORD *v112; // r11
  __int64 v113; // r14
  __int64 v114; // r8
  __int64 v115; // r9
  unsigned int v116; // ecx
  unsigned int v117; // edx
  unsigned int v118; // ecx
  int v119; // r10d
  __int64 v120; // rax
  __int64 v121; // r8
  int v122; // ecx
  __int64 v123; // rax
  __int64 v124; // rcx
  unsigned __int16 v125; // r12
  __int64 v126; // rax
  unsigned __int16 v127; // r14
  _WORD *v128; // r13
  unsigned __int16 v129; // di
  unsigned __int16 *v130; // rsi
  __int64 *v131; // r12
  unsigned __int16 *v132; // rbx
  __int64 v133; // rax
  __int64 v134; // r9
  __int64 v135; // r10
  unsigned __int16 v136; // dx
  unsigned __int16 v137; // cx
  unsigned __int16 v138; // dx
  unsigned __int16 v139; // dx
  unsigned __int16 v140; // cx
  __int16 v141; // r14
  __m128i *v142; // r12
  unsigned int v143; // r8d
  bool v144; // zf
  __int64 v145; // r9
  __int64 v146; // rdx
  int v147; // ecx
  int v148; // ebx
  _OWORD *v149; // rcx
  unsigned int v150; // ecx
  _OWORD *v151; // r8
  unsigned int v152; // r13d
  __int64 v153; // r11
  signed __int64 v154; // rdi
  unsigned int v155; // eax
  __int64 v156; // r14
  _QWORD **v157; // r10
  unsigned int v158; // edi
  __int64 v159; // rcx
  __int64 v160; // rcx
  __int64 v161; // r9
  __int64 v162; // rcx
  int v163; // edx
  unsigned int v164; // eax
  void *v165; // rcx
  size_t v166; // r8
  _QWORD **v167; // rax
  __int64 v168; // r14
  unsigned int v169; // edx
  unsigned int v170; // r8d
  __int64 v171; // r11
  unsigned int v172; // edi
  __int64 v173; // rsi
  unsigned int v174; // edi
  int v175; // eax
  __int64 v176; // r10
  __m128i *v177; // rax
  __int64 v178; // r8
  __int64 v179; // rcx
  __m128i v180; // xmm0
  __int64 v181; // rcx
  __int64 *v182; // rdi
  __int64 v183; // rax
  _OWORD *v184; // r10
  __int64 v185; // r14
  __int64 v186; // r8
  __int64 v187; // r9
  unsigned int v188; // ecx
  unsigned int v189; // edx
  unsigned int v190; // ecx
  signed __int64 v191; // rax
  __int64 v192; // r8
  unsigned int v193; // ecx
  __int64 v194; // rax
  __int64 v195; // rcx
  unsigned __int16 v196; // r8
  __int16 v197; // ax
  unsigned __int16 v198; // r8
  __int16 v199; // ax
  int v200; // edx
  __int64 v201; // r9
  __int64 v202; // rcx
  __int64 v203; // rax
  unsigned __int64 v204; // rdx
  unsigned __int64 v205; // rax
  __int64 v206; // r9
  __int64 v207; // r8
  signed __int32 v208[8]; // [rsp+0h] [rbp-100h] BYREF
  __int64 *v209; // [rsp+20h] [rbp-E0h]
  __int64 v210; // [rsp+28h] [rbp-D8h]
  __int64 v211; // [rsp+30h] [rbp-D0h]
  unsigned __int16 v212; // [rsp+40h] [rbp-C0h]
  unsigned __int16 v213; // [rsp+42h] [rbp-BEh]
  __int64 v214; // [rsp+48h] [rbp-B8h]
  unsigned int v215; // [rsp+50h] [rbp-B0h]
  int v216; // [rsp+54h] [rbp-ACh]
  unsigned int v217; // [rsp+58h] [rbp-A8h]
  char v218; // [rsp+5Ch] [rbp-A4h] BYREF
  __int64 v219; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v220; // [rsp+68h] [rbp-98h] BYREF
  __int64 v221; // [rsp+70h] [rbp-90h] BYREF
  __int64 v222; // [rsp+78h] [rbp-88h]
  __int64 v223; // [rsp+80h] [rbp-80h] BYREF
  _OWORD *v224; // [rsp+88h] [rbp-78h]
  _QWORD *v225; // [rsp+90h] [rbp-70h]
  unsigned int v226; // [rsp+98h] [rbp-68h]
  int v227; // [rsp+9Ch] [rbp-64h]
  int v228; // [rsp+A0h] [rbp-60h]
  __int64 v229; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v230; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v231; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v232; // [rsp+C0h] [rbp-40h]
  unsigned __int64 v233; // [rsp+C8h] [rbp-38h]
  int v234; // [rsp+D0h] [rbp-30h]
  __m128i *v235; // [rsp+D8h] [rbp-28h] BYREF
  __m128i *v236; // [rsp+E0h] [rbp-20h] BYREF
  __m128i *v237; // [rsp+E8h] [rbp-18h] BYREF
  int v238; // [rsp+F0h] [rbp-10h] BYREF
  int v239; // [rsp+F4h] [rbp-Ch] BYREF
  int v240; // [rsp+F8h] [rbp-8h] BYREF
  _OWORD v241[2]; // [rsp+100h] [rbp+0h] BYREF
  _OWORD *v242; // [rsp+120h] [rbp+20h]
  _OWORD v243[4]; // [rsp+130h] [rbp+30h] BYREF
  __int128 v244; // [rsp+170h] [rbp+70h] BYREF

  result = *(unsigned __int16 *)(a2 + 58);
  v242 = a4;
  memset(v241, 0, sizeof(v241));
  v229 = a3;
  v7 = *(_QWORD *)(a1 + 944) - 392LL;
  v214 = a2;
  v8 = 392 * result + v7;
  v231 = 0LL;
  v230 = v8;
  v9 = a2;
  v228 = 0;
  v10 = 0;
  v212 = 0;
  v213 = 0;
  if ( a3 )
  {
    v209 = (__int64 *)v241;
    StorPortExtendedFunction(93LL, a1, 1LL, a2 + 64);
    if ( (*(_DWORD *)(a1 + 24) & 0x10) != 0 )
    {
      v14 = *(_BYTE *)(a3 + 2);
      if ( v14 >= 4u )
      {
        StorPortNotification(4100LL, a1, v241);
        result = StorPortNotification(0x2000LL, a1, a3);
      }
      else
      {
        *(_QWORD *)(a3 + 8) = 0LL;
        *(_BYTE *)(a3 + 2) = v14 + 1;
        *(_DWORD *)(a3 + 16) = *(_DWORD *)(a1 + 4284);
        if ( *(_QWORD *)(v9 + 160) )
          *(_QWORD *)(*(_QWORD *)(v9 + 168) + 8LL) = a3;
        else
          *(_QWORD *)(v9 + 160) = a3;
        *(_QWORD *)(v9 + 168) = a3;
        result = StorPortNotification(4100LL, a1, v241);
      }
      goto LABEL_12;
    }
    *(_QWORD *)(a3 + 8) = 0LL;
    *(_DWORD *)(a3 + 16) = *(_DWORD *)(a1 + 4284);
    v12 = *(_QWORD *)(a1 + 8LL * *(unsigned __int8 *)(a3 + 3) + 1672);
    if ( (*(_DWORD *)(v12 + 20) & 0x200) != 0 )
    {
      if ( *(_QWORD *)(v9 + 176) )
        *(_QWORD *)(*(_QWORD *)(v9 + 184) + 8LL) = a3;
      else
        *(_QWORD *)(v9 + 176) = a3;
      *(_QWORD *)(v9 + 184) = a3;
    }
    else
    {
      if ( *(_QWORD *)(v9 + 144) )
        *(_QWORD *)(*(_QWORD *)(v9 + 152) + 8LL) = a3;
      else
        *(_QWORD *)(v9 + 144) = a3;
      *(_QWORD *)(v9 + 152) = a3;
    }
  }
  else
  {
    if ( !*(_QWORD *)(a2 + 144)
      || *(unsigned __int16 *)(a2 + 54) == *(unsigned __int16 *)(a2 + 52) + 1
      || (*(_DWORD *)(a1 + 24) & 0x110) != 0 )
    {
      goto LABEL_12;
    }
    v209 = (__int64 *)v241;
    StorPortExtendedFunction(93LL, a1, 1LL, a2 + 64);
  }
  if ( !*(_QWORD *)(v9 + 144) )
  {
LABEL_317:
    result = StorPortNotification(4100LL, a1, v241);
    if ( v10 )
      goto LABEL_318;
LABEL_12:
    if ( *(_QWORD *)(v9 + 144) || *(_QWORD *)(v9 + 160) || *(_QWORD *)(v9 + 176) )
      goto LABEL_15;
    return result;
  }
  while ( 1 )
  {
    if ( (*(_DWORD *)(a1 + 24) & 0x100) != 0 )
      goto LABEL_309;
    v16 = *(unsigned __int16 *)(v9 + 48);
    if ( (_WORD)v16 )
    {
      v17 = *(_WORD *)(a1 + 326);
      v19 = *(_WORD *)(a1 + 328);
      v12 = 208 * v16;
      v23 = *(_QWORD *)(a1 + 936);
      v18 = (_WORD *)(v12 + v23 - 156);
      v20 = (unsigned __int16 *)(v12 + v23 - 152);
      v21 = (_QWORD *)(v12 + v23 - 176);
      v22 = (unsigned __int16 *)(v12 + v23 - 154);
    }
    else
    {
      v17 = *(_WORD *)(a1 + 324);
      v18 = (_WORD *)(a1 + 388);
      v19 = v17;
      v20 = (unsigned __int16 *)(a1 + 392);
      v21 = (_QWORD *)(a1 + 368);
      v22 = (unsigned __int16 *)(a1 + 390);
    }
    Feature_FixKcsanRacyAccessesInStorNVMe__private_IsEnabledDeviceUsageNoInline(v12, v11, v13);
    v24 = (unsigned __int16)*v18;
    v25 = *v22;
    v215 = v24;
    if ( v25 == v24 + 1 || !v25 && v24 == v17 - 1 )
      break;
    *v18 = v24 + 1;
    if ( (_WORD)v24 + 1 == v17 )
      *v18 = 0;
    v26 = *v20;
    if ( *v20 >= v19 )
    {
LABEL_42:
      v28 = 0;
      if ( !*v20 )
      {
LABEL_45:
        if ( *v18 )
          v30 = *v18 - 1;
        else
          v30 = v17 - 1;
        v111 = v212;
        *v18 = v30;
        v9 = v214;
        v125 = v213;
        goto LABEL_310;
      }
      while ( 1 )
      {
        v29 = v28 + 1;
        if ( !*(_QWORD *)(32LL * v28 + *v21 + 16) )
          break;
        ++v28;
        if ( v29 >= *v20 )
          goto LABEL_45;
      }
      v31 = v28;
      v32 = v29 == v19;
      *v20 = v29;
    }
    else
    {
      while ( 1 )
      {
        v27 = v26 + 1;
        if ( !*(_QWORD *)(32LL * v26 + *v21 + 16) )
          break;
        ++v26;
        if ( v27 >= v19 )
          goto LABEL_42;
      }
      v31 = v26;
      v32 = v27 == v19;
      *v20 = v27;
    }
    v217 = v31;
    if ( v32 )
      *v20 = 0;
    v9 = v214;
    memset(v243, 0, sizeof(v243));
    v226 = 0;
    v33 = *(_QWORD *)(v214 + 144);
    v222 = v33;
    v244 = 0LL;
    v34 = *(unsigned __int8 *)(v33 + 3);
    v35 = *(_DWORD *)(*(_QWORD *)(a1 + 8 * v34 + 1672) + 52LL);
    if ( (unsigned int)v34 < *(_DWORD *)(a1 + 224) && (_mm_lfence(), (v36 = *(_QWORD *)(a1 + 8 * v34 + 1672)) != 0) )
      v227 = *(_DWORD *)(v36 + 16);
    else
      v227 = 0;
    v37 = *(_DWORD *)(a1 + 4284);
    *(_QWORD *)(v214 + 144) = *(_QWORD *)(v33 + 8);
    v32 = *(_QWORD *)(v9 + 144) == 0LL;
    v234 = v37;
    if ( v32 )
      *(_QWORD *)(v9 + 152) = 0LL;
    *(_DWORD *)(v33 + 16) = 1;
    if ( v33 == v229 && v242 )
    {
      v38 = v242;
      v224 = v242;
    }
    else
    {
      LOWORD(v244) = 1;
      DWORD1(v244) = 4;
      BYTE10(v244) = *(_BYTE *)(v33 + 3);
      *(_QWORD *)&v243[0] = &v244;
      StorPortNotification(8193LL, a1, v33);
      LOWORD(v24) = v215;
      v38 = v243;
      v37 = v234;
      v224 = v243;
    }
    v39 = *(_DWORD *)(a1 + 120);
    if ( v39 && *((_QWORD *)v38 + 1) )
    {
      *((_DWORD *)v38 + 11) += v39;
      v40 = *(_DWORD *)(*(_QWORD *)(a1 + 8LL * *(unsigned __int8 *)(v33 + 3) + 1672) + 52LL);
      *((_DWORD *)v38 + 4) -= -v40 & (v40 + *(_DWORD *)(a1 + 120) - 1);
    }
    v41 = 32LL * (unsigned __int16)v31;
    *(_QWORD *)(v41 + *(_QWORD *)(v9 + 32) + 16) = v33;
    *(_WORD *)(*(_QWORD *)(v9 + 32) + v41 + 24) = v24;
    *(_DWORD *)(*(_QWORD *)(v9 + 32) + v41 + 4) = v37;
    v42 = (*(unsigned __int8 *)(v33 + 3) << 8) | 0x48;
    v43 = *(_OWORD **)(*(_QWORD *)(v9 + 24) + 16LL * (unsigned __int16)v24);
    *v43 = 0LL;
    v43[1] = 0LL;
    v43[2] = 0LL;
    v43[3] = 0LL;
    *(_WORD *)(*(_QWORD *)(*(_QWORD *)(v9 + 24) + 16LL * (unsigned __int16)v24) + 2LL) = v31;
    v44 = *(_DWORD *)(v33 + 4);
    v45 = *(_DWORD *)(a1 + 208);
    v46 = *((_QWORD *)v38 + 1) + *((_DWORD *)v38 + 4) - v44;
    v232 = v46;
    if ( v44 > 0x200000 )
      v44 = 0x200000;
    v47 = *(_DWORD *)(a1 + 32);
    if ( v44 <= v45 )
      v45 = v44;
    v216 = v45;
    if ( v47 )
    {
      if ( v45 > v47 )
        v45 = v47;
      v216 = v45;
    }
    v48 = *(unsigned __int16 *)(*(_QWORD *)(a1 + 8LL * *(unsigned __int8 *)(v33 + 3) + 1672) + 92LL);
    if ( (_WORD)v48 )
    {
      v49 = v35 * v48;
    }
    else
    {
      v50 = *(_DWORD *)(a1 + 52);
      if ( v50 < v35 || v50 % v35 )
        goto LABEL_80;
      v49 = *(_DWORD *)(a1 + 52);
    }
    v226 = v49;
    if ( v49 )
    {
      v51 = v46 % v49;
      if ( v46 / v49 != (v46 + v45) / v49 )
      {
        v45 = v49 - v51;
        v216 = v49 - v51;
      }
    }
LABEL_80:
    *(_QWORD *)(v33 + 8) = 0LL;
    v52 = 0LL;
    v223 = 0LL;
    v235 = 0LL;
    if ( !*((_QWORD *)v38 + 4) || !*((_DWORD *)v38 + 10) || !v45 )
      goto LABEL_299;
    v53 = 0LL;
    v54 = (v45 >> 12)
        + (((((_WORD)v46 + *((_WORD *)v38 + 22) - *((_WORD *)v38 + 4)) & 0xFFF) + (v45 & 0xFFF) + 4095) >> 12);
    if ( v54 <= 2 )
      goto LABEL_98;
    v55 = *(_QWORD *)(v214 + 192);
    if ( v55 )
      goto LABEL_87;
    if ( *(_QWORD *)(v214 + 200) )
    {
      v55 = _InterlockedExchange64((volatile __int64 *)(v214 + 200), 0LL);
LABEL_87:
      v223 = v55;
      *(_QWORD *)(v214 + 192) = *(_QWORD *)(v55 + 24);
      *(_QWORD *)(v55 + 24) = 0LL;
      goto LABEL_92;
    }
    v209 = (__int64 *)&v235;
    v56 = StorPortExtendedFunction(0LL, a1, 4096LL, 1349350990LL);
    if ( v56 )
      goto LABEL_126;
    v209 = &v223;
    v56 = StorPortExtendedFunction(0LL, a1, 32LL, 1349350990LL);
    if ( v56 )
    {
      StorPortExtendedFunction(1LL, a1, v235, v57);
      goto LABEL_126;
    }
    *(_QWORD *)v223 = v235;
    *(_QWORD *)(v223 + 8) = 0LL;
    *(_DWORD *)(v223 + 16) = 512;
    *(_QWORD *)(v223 + 24) = 0LL;
LABEL_92:
    v58 = v223;
    v59 = *(_DWORD *)(v223 + 16);
    if ( (unsigned int)(v59 - 1) > 0x1FE )
    {
      v61 = *(void **)v223;
      v62 = 4096LL;
      goto LABEL_96;
    }
    v60 = (unsigned int)(8 * v59) >> 2;
    if ( v60 )
    {
      v61 = *(void **)v223;
      v62 = 4LL * v60;
LABEL_96:
      memset(v61, 0, v62);
      v58 = v223;
    }
    LODWORD(v46) = v232;
    v38 = v224;
    *(_DWORD *)(v58 + 16) = v54 - 1;
    v63 = (__m128i **)v223;
    v52 = (__int64 *)(v223 + 8);
    *(_QWORD *)(v222 + 8) = v223;
    v53 = *v63;
    v235 = *v63;
LABEL_98:
    v64 = v46 + *((_DWORD *)v38 + 11) - *((_DWORD *)v38 + 2);
    v65 = *((_DWORD *)v38 + 10);
    v66 = *((_QWORD *)v38 + 4);
    v67 = ((_WORD)v46 + *((_WORD *)v38 + 22) - *((_WORD *)v38 + 4)) & 0xFFF;
    v68 = (v67 + (v45 & 0xFFF) + 4095) >> 12;
    v69 = *(_QWORD **)(*(_QWORD *)(v214 + 24) + 16LL * (unsigned __int16)v215);
    v70 = v45 >> 12;
    v71 = v64 >> 12;
    v225 = v69;
    if ( v64 < 0x1000 )
    {
      v71 = 0LL;
      v67 = v64;
    }
    v72 = v70 + v68;
    if ( v72 )
    {
      if ( (unsigned int)v71 + v72 <= v65 )
      {
        v69[3] = v67 + (*(_QWORD *)(v66 + 8 * v71) << 12);
        if ( v72 != 1 )
        {
          if ( v72 == 2 )
          {
            v69[4] = *(_QWORD *)(v66 + 8LL * (unsigned int)(v71 + 1)) << 12;
            if ( v53 )
            {
              if ( !v52 )
              {
                memset(v53, 0, 0x1000uLL);
                v69 = v225;
              }
              v53->m128i_i64[0] = v69[4];
            }
          }
          else
          {
            v238 = 0;
            if ( !v52 )
              memset(v53, 0, 0x1000uLL);
            v73 = v72 - 1;
            v74 = v53;
            v75 = 1;
            if ( (unsigned int)v73 < 8 )
              goto LABEL_327;
            v233 = v66 + 8LL * (unsigned int)(v71 + 1);
            if ( (unsigned __int64)&v53->m128i_u64[1] <= v66 + 8 * (unsigned __int64)(unsigned int)(v71 + v73)
              && (unsigned __int64)v53 + 8 * v73 >= v233 )
            {
              goto LABEL_327;
            }
            v76 = (unsigned int)(v71 + 5);
            do
            {
              v75 += 8;
              *v74 = _mm_slli_epi64(_mm_loadu_si128((const __m128i *)(v66 + 8LL * (unsigned int)(v76 - 4))), 0xCu);
              v77 = (unsigned int)(v76 + 2);
              v74[1] = _mm_slli_epi64(_mm_loadu_si128((const __m128i *)(v66 + 8LL * (unsigned int)(v76 - 2))), 0xCu);
              v78 = _mm_loadu_si128((const __m128i *)(v66 + 8 * v76));
              v76 = (unsigned int)(v76 + 8);
              v74[2] = _mm_slli_epi64(v78, 0xCu);
              v74[3] = _mm_slli_epi64(_mm_loadu_si128((const __m128i *)(v66 + 8 * v77)), 0xCu);
              v74 += 4;
            }
            while ( v75 < v72 - (((_BYTE)v72 - 1) & 7) );
            if ( v75 < v72 )
            {
LABEL_327:
              do
              {
                v79 = (unsigned int)v71 + v75++;
                v74 = (__m128i *)((char *)v74 + 8);
                v74[-1].m128i_i64[1] = *(_QWORD *)(v66 + 8 * v79) << 12;
              }
              while ( v75 < v72 );
            }
            if ( !v52 || (PhysicalAddress = *v52) == 0 )
            {
              PhysicalAddress = StorPortGetPhysicalAddress(a1, 0LL, v53, &v238);
              if ( v52 )
                *v52 = PhysicalAddress;
            }
            v225[4] = PhysicalAddress;
          }
        }
        v56 = 0;
      }
      else
      {
        v56 = -1056964607;
      }
    }
    else
    {
      v56 = -1056964607;
    }
    v45 = v216;
LABEL_126:
    if ( v56 != -1056964605 )
      goto LABEL_173;
    if ( v45 <= 0x1000
      || (v81 = v224, v216 = 4096, v82 = 0LL, v219 = 0LL, v236 = 0LL, !*((_QWORD *)v224 + 4))
      || !*((_DWORD *)v224 + 10) )
    {
      v9 = v214;
LABEL_298:
      v33 = v222;
LABEL_299:
      v198 = v217;
      *(_DWORD *)(32LL * (unsigned __int16)v217 + *(_QWORD *)(v9 + 32)) = 0;
      *(_QWORD *)(32LL * v198 + *(_QWORD *)(v9 + 32) + 16) = 0LL;
      v199 = *(_WORD *)(v9 + 52);
      *(_WORD *)(v9 + 56) = v198;
      if ( !v199 )
        v199 = *(_WORD *)(a1 + 326);
      *(_WORD *)(v9 + 52) = v199 - 1;
      StorPortNotification(4100LL, a1, v241);
      StorPortNotification(0x2000LL, a1, v33);
      v209 = (__int64 *)v241;
      StorPortExtendedFunction(93LL, a1, 1LL, v9 + 64);
      v111 = v212;
      v125 = v213;
      goto LABEL_304;
    }
    v83 = 0LL;
    v84 = v232;
    v85 = (((((_WORD)v232 + *((_WORD *)v224 + 22) - *((_WORD *)v224 + 4)) & 0xFFFu) + 4095) >> 12) + 1;
    if ( v85 > 2 )
    {
      v9 = v214;
      v86 = *(_QWORD *)(v214 + 192);
      if ( v86 )
        goto LABEL_134;
      if ( *(_QWORD *)(v214 + 200) )
      {
        v86 = _InterlockedExchange64((volatile __int64 *)(v214 + 200), 0LL);
LABEL_134:
        v219 = v86;
        *(_QWORD *)(v214 + 192) = *(_QWORD *)(v86 + 24);
        *(_QWORD *)(v86 + 24) = 0LL;
      }
      else
      {
        v209 = (__int64 *)&v236;
        if ( (unsigned int)StorPortExtendedFunction(0LL, a1, 4096LL, 1349350990LL) )
          goto LABEL_298;
        v209 = &v219;
        if ( (unsigned int)StorPortExtendedFunction(0LL, a1, 32LL, 1349350990LL) )
        {
          StorPortExtendedFunction(1LL, a1, v236, v87);
          v33 = v222;
          goto LABEL_299;
        }
        *(_QWORD *)v219 = v236;
        *(_QWORD *)(v219 + 8) = 0LL;
        *(_DWORD *)(v219 + 16) = 512;
        *(_QWORD *)(v219 + 24) = 0LL;
      }
      v88 = v219;
      v89 = *(_DWORD *)(v219 + 16);
      if ( (unsigned int)(v89 - 1) > 0x1FE )
      {
        v91 = *(void **)v219;
        v92 = 4096LL;
LABEL_143:
        memset(v91, 0, v92);
        v88 = v219;
      }
      else
      {
        v90 = (unsigned int)(8 * v89) >> 2;
        if ( v90 )
        {
          v91 = *(void **)v219;
          v92 = 4LL * v90;
          goto LABEL_143;
        }
      }
      v81 = v224;
      *(_DWORD *)(v88 + 16) = v85 - 1;
      v93 = (__m128i **)v219;
      v82 = (__int64 *)(v219 + 8);
      *(_QWORD *)(v222 + 8) = v219;
      v83 = *v93;
      v236 = *v93;
    }
    v94 = *((_DWORD *)v81 + 10);
    v95 = v84 + *((_DWORD *)v81 + 11) - *((_DWORD *)v81 + 2);
    v96 = *((_QWORD *)v81 + 4);
    v97 = ((_WORD)v84 + *((_WORD *)v81 + 22) - *((_WORD *)v81 + 4)) & 0xFFF;
    v98 = v95 >> 12;
    v99 = *(_QWORD *)(v214 + 24);
    v100 = ((v97 + 4095) >> 12) + 1;
    v101 = *(_QWORD **)(v99 + 16LL * (unsigned __int16)v215);
    if ( v95 < 0x1000 )
      v98 = 0LL;
    v225 = *(_QWORD **)(v99 + 16LL * (unsigned __int16)v215);
    if ( v95 < 0x1000 )
      v97 = v95;
    if ( (unsigned int)v98 + v100 <= v94 )
    {
      v101[3] = v97 + (*(_QWORD *)(v96 + 8 * v98) << 12);
      if ( v100 != 1 )
      {
        if ( v100 == 2 )
        {
          v101[4] = *(_QWORD *)(v96 + 8LL * (unsigned int)(v98 + 1)) << 12;
          if ( v83 )
          {
            if ( !v82 )
            {
              memset(v83, 0, 0x1000uLL);
              v101 = v225;
            }
            v83->m128i_i64[0] = v101[4];
          }
        }
        else
        {
          v239 = 0;
          if ( !v82 )
            memset(v83, 0, 0x1000uLL);
          v102 = v100 - 1;
          v103 = v83;
          v104 = 1;
          if ( v100 > 1 )
          {
            if ( v102 < 8 )
              goto LABEL_328;
            v105 = v100 - 1;
            v233 = v96 + 8LL * (unsigned int)(v98 + 1);
            if ( (unsigned __int64)&v83->m128i_u64[1] <= v96 + 8 * (unsigned __int64)(unsigned int)(v98 + v105)
              && (unsigned __int64)v83 + 8 * v105 >= v233 )
            {
              goto LABEL_328;
            }
            v106 = (unsigned int)(v98 + 5);
            do
            {
              v104 += 8;
              *v103 = _mm_slli_epi64(_mm_loadu_si128((const __m128i *)(v96 + 8LL * (unsigned int)(v106 - 4))), 0xCu);
              v107 = (unsigned int)(v106 + 2);
              v103[1] = _mm_slli_epi64(_mm_loadu_si128((const __m128i *)(v96 + 8LL * (unsigned int)(v106 - 2))), 0xCu);
              v108 = _mm_loadu_si128((const __m128i *)(v96 + 8 * v106));
              v106 = (unsigned int)(v106 + 8);
              v103[2] = _mm_slli_epi64(v108, 0xCu);
              v103[3] = _mm_slli_epi64(_mm_loadu_si128((const __m128i *)(v96 + 8 * v107)), 0xCu);
              v103 += 4;
            }
            while ( v104 < v100 - (v102 & 7) );
            if ( v104 < v100 )
            {
LABEL_328:
              do
              {
                v109 = (unsigned int)v98 + v104++;
                v103 = (__m128i *)((char *)v103 + 8);
                v103[-1].m128i_i64[1] = *(_QWORD *)(v96 + 8 * v109) << 12;
              }
              while ( v104 < v100 );
            }
          }
          if ( !v82 || (v110 = *v82) == 0 )
          {
            v110 = StorPortGetPhysicalAddress(a1, 0LL, v83, &v239);
            if ( v82 )
              *v82 = v110;
          }
          v225[4] = v110;
        }
      }
      v56 = 0;
    }
    else
    {
      v56 = -1056964607;
    }
LABEL_173:
    v9 = v214;
    if ( v56 )
      goto LABEL_298;
    v111 = v215;
    v112 = v224;
    v113 = v222;
    v114 = *(unsigned __int8 *)(v222 + 3);
    v115 = *(_QWORD *)(*(_QWORD *)(v214 + 24) + 16LL * (unsigned __int16)v215);
    if ( (*((_DWORD *)v224 + 14) & 0xF) != 0 )
    {
      *(_BYTE *)v115 = 1;
      if ( (*(_BYTE *)(a1 + 3728) & 3) == 3 && *(_BYTE *)(a1 + 3729) == (_BYTE)v114 )
      {
        v116 = *(unsigned __int16 *)(a1 + 3732);
        if ( (_WORD)v116 )
        {
          if ( (*((_DWORD *)v112 + 14) & 0x80u) != 0 )
          {
            v117 = *((_DWORD *)v112 + 5);
            if ( v117 - 1 <= 0xFFFE && v117 <= v116 && (_WORD)v117 )
            {
              v118 = *(_DWORD *)(v115 + 48) & 0xFF1FFFFF;
              *(_WORD *)(v115 + 54) = v117;
              *(_DWORD *)(v115 + 48) = v118 | 0x100000;
            }
          }
        }
      }
    }
    else
    {
      *(_BYTE *)v115 = 2;
    }
    *(_DWORD *)v115 &= 0xFFFFFCFF;
    v119 = v216;
    *(_DWORD *)(v115 + 4) = v227;
    v120 = v232;
    *(_QWORD *)(v115 + 16) = 0LL;
    v121 = *(unsigned int *)(*(_QWORD *)(a1 + 8 * v114 + 1672) + 52LL);
    *(_QWORD *)(v115 + 40) = v120 / v121;
    *(_WORD *)(v115 + 48) = ((int)v121 + v119 - 1) / (unsigned int)v121 - 1;
    *(_DWORD *)(v115 + 48) &= 0xC3FFFFFF;
    v122 = *((_DWORD *)v112 + 14) & 0x20;
    LODWORD(v120) = *(_DWORD *)(v115 + 48) & 0x3FFFFFFF;
    *(_BYTE *)(v115 + 52) = 0;
    *(_QWORD *)(v115 + 56) = 0LL;
    *(_DWORD *)(v115 + 48) = v120 | (v122 << 25);
    *(_DWORD *)(v113 + 4) -= v119;
    ProcessCommandTrace(a1, 0LL, *(_DWORD **)(*(_QWORD *)(v9 + 24) + 16LL * v111));
    if ( (*(_BYTE *)(a1 + 21) & 0x10) != 0 || (*(_DWORD *)(a1 + 108) & 2) != 0 )
    {
      StorPortExtendedFunction(47LL, a1, 0LL, &v231);
      v13 = v217;
      v11 = 32LL * (unsigned __int16)v217;
      *(_QWORD *)(v11 + *(_QWORD *)(v9 + 32) + 8) = v231;
      v123 = *(_QWORD *)(v9 + 40);
      if ( v123 )
      {
        v124 = 2LL * (unsigned __int16)v13;
        *(_QWORD *)(v123 + 8 * v124) = 0LL;
        *(_QWORD *)(*(_QWORD *)(v9 + 40) + 8 * v124 + 8) = 0LL;
      }
      v42 |= 0x20u;
    }
    else
    {
      v13 = v217;
    }
    v12 = 32LL * (unsigned __int16)v13;
    *(_DWORD *)(v12 + *(_QWORD *)(v9 + 32)) = v42;
    _InterlockedIncrement16((volatile signed __int16 *)(v9 + 136));
    ++v228;
    v125 = v13;
    v32 = *(_DWORD *)(v113 + 4) == 0;
    v212 = v111;
    v213 = v13;
    if ( !v32 )
    {
      while ( 1 )
      {
        v221 = 0LL;
        v209 = &v221;
        if ( (unsigned int)StorPortExtendedFunction(0LL, a1, 24LL, 1131247182LL) )
        {
          v111 = v212;
LABEL_303:
          v125 = v213;
          goto LABEL_304;
        }
        v126 = *(unsigned __int16 *)(v9 + 48);
        if ( (_WORD)v126 )
        {
          v127 = *(_WORD *)(a1 + 326);
          v129 = *(_WORD *)(a1 + 328);
          v12 = 208 * v126;
          v133 = *(_QWORD *)(a1 + 936);
          v128 = (_WORD *)(v12 + v133 - 156);
          v130 = (unsigned __int16 *)(v12 + v133 - 152);
          v131 = (__int64 *)(v12 + v133 - 176);
          v132 = (unsigned __int16 *)(v12 + v133 - 154);
        }
        else
        {
          v127 = *(_WORD *)(a1 + 324);
          v128 = (_WORD *)(a1 + 388);
          v129 = v127;
          v130 = (unsigned __int16 *)(a1 + 392);
          v131 = (__int64 *)(a1 + 368);
          v132 = (unsigned __int16 *)(a1 + 390);
        }
        Feature_FixKcsanRacyAccessesInStorNVMe__private_IsEnabledDeviceUsageNoInline(v12, v11, v13);
        v135 = (unsigned __int16)*v128;
        v136 = *v132;
        v216 = v135;
        if ( v136 == (_DWORD)v135 + 1 || !v136 && (_DWORD)v135 == v127 - 1 )
          goto LABEL_296;
        v134 = 0LL;
        *v128 = v135 + 1;
        if ( (_WORD)v135 + 1 == v127 )
          *v128 = 0;
        v137 = *v130;
        if ( *v130 >= v129 )
        {
LABEL_203:
          v139 = 0;
          if ( !*v130 )
          {
LABEL_207:
            if ( *v128 )
              v141 = *v128 - 1;
            else
              v141 = v127 - 1;
            *v128 = v141;
LABEL_296:
            StorPortExtendedFunction(1LL, a1, v221, v134);
            v9 = v214;
            v111 = v212;
            v125 = v213;
            goto LABEL_304;
          }
          v134 = *v131;
          while ( 1 )
          {
            v140 = v139 + 1;
            if ( !*(_QWORD *)(32LL * v139 + v134 + 16) )
              break;
            ++v139;
            if ( v140 >= *v130 )
              goto LABEL_207;
          }
          v142 = 0LL;
          v143 = v139;
          v144 = v140 == v129;
          *v130 = v140;
        }
        else
        {
          while ( 1 )
          {
            v138 = v137 + 1;
            if ( !*(_QWORD *)(32LL * v137 + *v131 + 16) )
              break;
            ++v137;
            if ( v138 >= v129 )
              goto LABEL_203;
          }
          v142 = 0LL;
          v143 = v137;
          v144 = v138 == v129;
          *v130 = v138;
        }
        v215 = v143;
        if ( v144 )
          *v130 = 0;
        v145 = v222;
        v9 = v214;
        v146 = 32LL * (unsigned __int16)v143;
        *(_BYTE *)(v221 + 3) = *(_BYTE *)(v222 + 3);
        *(_WORD *)v221 = 0;
        *(_BYTE *)(v221 + 2) = 0;
        *(_DWORD *)(v221 + 4) = 0;
        *(_QWORD *)(v221 + 8) = 0LL;
        *(_QWORD *)(v221 + 16) = v145;
        *(_QWORD *)(*(_QWORD *)(v9 + 32) + v146 + 16) = v221;
        v147 = v234;
        *(_WORD *)(*(_QWORD *)(v9 + 32) + v146 + 24) = v135;
        *(_DWORD *)(*(_QWORD *)(v9 + 32) + v146 + 4) = v147;
        v148 = (*(unsigned __int8 *)(v145 + 3) << 8) | 0xC8;
        v149 = *(_OWORD **)(*(_QWORD *)(v9 + 24) + 16 * v135);
        *v149 = 0LL;
        v149[1] = 0LL;
        v149[2] = 0LL;
        v149[3] = 0LL;
        *(_WORD *)(*(_QWORD *)(*(_QWORD *)(v9 + 24) + 16 * v135) + 2LL) = v143;
        v150 = *(_DWORD *)(v145 + 4);
        v151 = v224;
        v152 = *(_DWORD *)(a1 + 208);
        v153 = *((_QWORD *)v224 + 1);
        v154 = v153 + *((_DWORD *)v224 + 4) - v150;
        v233 = v154;
        if ( v150 > 0x200000 )
          v150 = 0x200000;
        v155 = *(_DWORD *)(a1 + 32);
        if ( v150 <= v152 )
          v152 = v150;
        v217 = v152;
        if ( v155 )
        {
          if ( v152 > v155 )
            v152 = v155;
          v217 = v152;
        }
        if ( v226 )
        {
          v145 = v154 % v226;
          if ( v154 / v226 != (v154 + v152) / v226 )
          {
            v152 = v226 - v145;
            v217 = v226 - v145;
          }
        }
        v156 = v221;
        v157 = 0LL;
        v220 = 0LL;
        v237 = 0LL;
        v225 = 0LL;
        if ( !v221 || !*((_QWORD *)v224 + 4) || !*((_DWORD *)v224 + 10) || !v152 )
        {
LABEL_291:
          v196 = v215;
          *(_DWORD *)(32LL * (unsigned __int16)v215 + *(_QWORD *)(v9 + 32)) = 0;
          *(_QWORD *)(32LL * v196 + *(_QWORD *)(v9 + 32) + 16) = 0LL;
          v197 = *(_WORD *)(v9 + 52);
          *(_WORD *)(v9 + 56) = v196;
          if ( !v197 )
            v197 = *(_WORD *)(a1 + 326);
          *(_WORD *)(v9 + 52) = v197 - 1;
          StorPortExtendedFunction(1LL, a1, v221, v145);
          v111 = v212;
          v125 = v213;
          goto LABEL_304;
        }
        v158 = (v152 >> 12)
             + (((((_WORD)v154 + (unsigned __int16)*((_DWORD *)v224 + 11) - (_WORD)v153) & 0xFFF) + (v152 & 0xFFF) + 4095) >> 12);
        if ( v158 > 2 )
          break;
LABEL_242:
        v145 = *((unsigned int *)v151 + 10);
        v168 = *((_QWORD *)v151 + 4);
        v169 = v233 + *((_DWORD *)v151 + 11) - *((_DWORD *)v151 + 2);
        v170 = ((_WORD)v233 + *((_WORD *)v151 + 22) - *((_WORD *)v151 + 4)) & 0xFFF;
        v171 = *(_QWORD *)(*(_QWORD *)(v9 + 24) + 16LL * (unsigned __int16)v216);
        v172 = (v170 + (v152 & 0xFFF) + 4095) >> 12;
        v232 = v171;
        if ( v169 < 0x1000 )
          v170 = v169;
        v173 = v169 >> 12;
        if ( v169 < 0x1000 )
          v173 = 0LL;
        v174 = (v152 >> 12) + v172;
        if ( v174 )
        {
          if ( (unsigned int)v173 + v174 <= (unsigned int)v145 )
          {
            *(_QWORD *)(v171 + 24) = v170 + (*(_QWORD *)(v168 + 8 * v173) << 12);
            if ( v174 != 1 )
            {
              if ( v174 == 2 )
              {
                *(_QWORD *)(v171 + 32) = *(_QWORD *)(v168 + 8LL * (unsigned int)(v173 + 1)) << 12;
                if ( v142 )
                {
                  if ( !v157 )
                  {
                    memset(v142, 0, 0x1000uLL);
                    v171 = v232;
                  }
                  v142->m128i_i64[0] = *(_QWORD *)(v171 + 32);
                }
              }
              else
              {
                v240 = 0;
                if ( !v157 )
                  memset(v142, 0, 0x1000uLL);
                v176 = v174 - 1;
                v177 = v142;
                LODWORD(v145) = 1;
                if ( (unsigned int)v176 < 8
                  || (unsigned __int64)&v142->m128i_u64[1] <= v168 + 8 * (unsigned __int64)(unsigned int)(v173 + v176)
                  && (unsigned __int64)v142 + 8 * v176 >= v168 + 8 * (unsigned __int64)(unsigned int)(v173 + 1) )
                {
                  goto LABEL_329;
                }
                v178 = (unsigned int)(v173 + 5);
                do
                {
                  v145 = (unsigned int)(v145 + 8);
                  *v177 = _mm_slli_epi64(
                            _mm_loadu_si128((const __m128i *)(v168 + 8LL * (unsigned int)(v178 - 4))),
                            0xCu);
                  v179 = (unsigned int)(v178 + 2);
                  v177[1] = _mm_slli_epi64(
                              _mm_loadu_si128((const __m128i *)(v168 + 8LL * (unsigned int)(v178 - 2))),
                              0xCu);
                  v180 = _mm_loadu_si128((const __m128i *)(v168 + 8 * v178));
                  v178 = (unsigned int)(v178 + 8);
                  v177[2] = _mm_slli_epi64(v180, 0xCu);
                  v177[3] = _mm_slli_epi64(_mm_loadu_si128((const __m128i *)(v168 + 8 * v179)), 0xCu);
                  v177 += 4;
                }
                while ( (unsigned int)v145 < v174 - (((_BYTE)v174 - 1) & 7) );
                if ( (unsigned int)v145 < v174 )
                {
LABEL_329:
                  do
                  {
                    v181 = (unsigned int)(v173 + v145);
                    v145 = (unsigned int)(v145 + 1);
                    v177 = (__m128i *)((char *)v177 + 8);
                    v177[-1].m128i_i64[1] = *(_QWORD *)(v168 + 8 * v181) << 12;
                  }
                  while ( (unsigned int)v145 < v174 );
                }
                v182 = v225;
                if ( !v225 || (v183 = *v225) == 0 )
                {
                  v183 = StorPortGetPhysicalAddress(a1, 0LL, v142, &v240);
                  if ( v182 )
                    *v182 = v183;
                }
                v152 = v217;
                *(_QWORD *)(v232 + 32) = v183;
              }
            }
            v175 = 0;
          }
          else
          {
            v175 = -1056964607;
          }
        }
        else
        {
          v175 = -1056964607;
        }
        v9 = v214;
        if ( v175 )
          goto LABEL_291;
        v111 = v216;
        v184 = v224;
        v185 = v222;
        v186 = *(unsigned __int8 *)(v222 + 3);
        v187 = *(_QWORD *)(*(_QWORD *)(v214 + 24) + 16LL * (unsigned __int16)v216);
        if ( (*((_DWORD *)v224 + 14) & 0xF) != 0 )
        {
          *(_BYTE *)v187 = 1;
          if ( (*(_BYTE *)(a1 + 3728) & 3) == 3 && *(_BYTE *)(a1 + 3729) == (_BYTE)v186 )
          {
            v188 = *(unsigned __int16 *)(a1 + 3732);
            if ( (_WORD)v188 )
            {
              if ( (*((_DWORD *)v184 + 14) & 0x80u) != 0 )
              {
                v189 = *((_DWORD *)v184 + 5);
                if ( v189 - 1 <= 0xFFFE && v189 <= v188 && (_WORD)v189 )
                {
                  v190 = *(_DWORD *)(v187 + 48) & 0xFF1FFFFF;
                  *(_WORD *)(v187 + 54) = v189;
                  *(_DWORD *)(v187 + 48) = v190 | 0x100000;
                }
              }
            }
          }
        }
        else
        {
          *(_BYTE *)v187 = 2;
        }
        *(_DWORD *)v187 &= 0xFFFFFCFF;
        *(_DWORD *)(v187 + 4) = v227;
        v191 = v233;
        *(_QWORD *)(v187 + 16) = 0LL;
        v192 = *(unsigned int *)(*(_QWORD *)(a1 + 8 * v186 + 1672) + 52LL);
        *(_QWORD *)(v187 + 40) = v191 / v192;
        *(_WORD *)(v187 + 48) = (v152 + (_DWORD)v192 - 1) / (unsigned int)v192 - 1;
        v193 = *(_DWORD *)(v187 + 48) & 0xC3FFFFFF;
        *(_DWORD *)(v187 + 48) = v193;
        LODWORD(v191) = *((_DWORD *)v184 + 14) & 0xFFFFFFE0;
        *(_BYTE *)(v187 + 52) = 0;
        *(_QWORD *)(v187 + 56) = 0LL;
        *(_DWORD *)(v187 + 48) = (v193 & 0x3FFFFFFF ^ ((_DWORD)v191 << 25)) & 0x7FFFFFFF;
        ProcessCommandTrace(a1, 0LL, *(_DWORD **)(*(_QWORD *)(v9 + 24) + 16LL * v111));
        if ( (*(_BYTE *)(a1 + 21) & 0x10) != 0 || (*(_DWORD *)(a1 + 108) & 2) != 0 )
        {
          StorPortExtendedFunction(47LL, a1, 0LL, &v231);
          v13 = v215;
          v11 = 32LL * (unsigned __int16)v215;
          *(_QWORD *)(v11 + *(_QWORD *)(v9 + 32) + 8) = v231;
          v194 = *(_QWORD *)(v9 + 40);
          if ( v194 )
          {
            v195 = 2LL * (unsigned __int16)v13;
            *(_QWORD *)(v194 + 8 * v195) = 0LL;
            *(_QWORD *)(*(_QWORD *)(v9 + 40) + 8 * v195 + 8) = 0LL;
          }
          v148 |= 0x20u;
        }
        else
        {
          v13 = v215;
        }
        *(_DWORD *)(v185 + 4) -= v152;
        ++*(_WORD *)v185;
        v12 = 32LL * (unsigned __int16)v13;
        *(_DWORD *)(v12 + *(_QWORD *)(v9 + 32)) = v148;
        _InterlockedIncrement16((volatile signed __int16 *)(v9 + 136));
        v32 = *(_DWORD *)(v185 + 4) == 0;
        v212 = v111;
        if ( v32 )
          goto LABEL_303;
      }
      v159 = *(_QWORD *)(v9 + 192);
      if ( v159 )
      {
        v220 = *(_QWORD *)(v9 + 192);
        *(_QWORD *)(v9 + 192) = *(_QWORD *)(v159 + 24);
        *(_QWORD *)(v159 + 24) = 0LL;
      }
      else if ( *(_QWORD *)(v9 + 200) )
      {
        v160 = _InterlockedExchange64((volatile __int64 *)(v9 + 200), 0LL);
        v220 = v160;
        *(_QWORD *)(v9 + 192) = *(_QWORD *)(v160 + 24);
        *(_QWORD *)(v160 + 24) = 0LL;
      }
      else
      {
        v209 = (__int64 *)&v237;
        if ( (unsigned int)StorPortExtendedFunction(0LL, a1, 4096LL, 1349350990LL) )
          goto LABEL_291;
        v209 = &v220;
        if ( (unsigned int)StorPortExtendedFunction(0LL, a1, 32LL, 1349350990LL) )
        {
          StorPortExtendedFunction(1LL, a1, v237, v161);
          goto LABEL_291;
        }
        *(_QWORD *)v220 = v237;
        *(_QWORD *)(v220 + 8) = 0LL;
        *(_DWORD *)(v220 + 16) = 512;
        *(_QWORD *)(v220 + 24) = 0LL;
      }
      v162 = v220;
      v163 = *(_DWORD *)(v220 + 16);
      if ( (unsigned int)(v163 - 1) > 0x1FE )
      {
        v165 = *(void **)v220;
        v166 = 4096LL;
LABEL_240:
        memset(v165, 0, v166);
        v162 = v220;
      }
      else
      {
        v164 = (unsigned int)(8 * v163) >> 2;
        if ( v164 )
        {
          v165 = *(void **)v220;
          v166 = 4LL * v164;
          goto LABEL_240;
        }
      }
      v151 = v224;
      *(_DWORD *)(v162 + 16) = v158 - 1;
      v167 = (_QWORD **)v220;
      *(_QWORD *)(v156 + 8) = v220;
      v142 = (__m128i *)*v167;
      v157 = v167 + 1;
      v237 = (__m128i *)*v167;
      v225 = v167 + 1;
      goto LABEL_242;
    }
LABEL_304:
    if ( !*(_QWORD *)(v9 + 144) )
      goto LABEL_310;
  }
  v9 = v214;
LABEL_309:
  v125 = v213;
  v111 = v212;
LABEL_310:
  v10 = v228;
  if ( !v228 )
    goto LABEL_316;
  v200 = 0;
  if ( (unsigned __int16)(v111 + 1) != *(unsigned __int16 *)(a1 + 326) )
    v200 = (unsigned __int16)(v111 + 1);
  **(_DWORD **)(v9 + 16) = v200;
  _InterlockedOr(v208, 0);
  if ( (*(_DWORD *)(a1 + 108) & 2) == 0 || !*(_QWORD *)(v9 + 40) )
  {
LABEL_316:
    v8 = v230;
    goto LABEL_317;
  }
  StorPortExtendedFunction(47LL, a1, 0LL, &v231);
  *(_QWORD *)(*(_QWORD *)(v9 + 40) + 16LL * v125) = v231;
  result = StorPortNotification(4100LL, a1, v241);
  v8 = v230;
LABEL_318:
  if ( *(_BYTE *)(v8 + 248) )
  {
    LODWORD(v229) = 0;
    StorPortExtendedFunction(92LL, a1, &v229, v201);
    v202 = *(_QWORD *)(v8 + 256);
    if ( v202 )
    {
      v206 = -10LL * *(unsigned int *)(v8 + 252);
      v218 = 0;
      v207 = *(_QWORD *)(v202 + 8LL * (unsigned int)v229);
      v211 = (__int64)&v218;
      v210 = 0LL;
      v209 = 0LL;
      result = StorPortExtendedFunction(89LL, a1, v207, v206);
    }
    else
    {
      if ( (*(_DWORD *)(a1 + 3764) & 0x10) != 0 )
      {
        v203 = *(_QWORD *)(a1 + 264);
        v204 = *(_QWORD *)(v203 + 72LL * (unsigned int)v229 + 8);
        if ( v204 )
        {
          LODWORD(v214) = 0;
          LOWORD(v214) = *(_WORD *)(v203 + 72LL * (unsigned int)v229 + 16);
          _BitScanForward64(&v205, v204);
          *(_DWORD *)((char *)&v214 + 2) = v205;
          StorPortNotification(4107LL, a1, v8 + 264);
        }
      }
      v210 = (__int64)&v230;
      v209 = 0LL;
      LODWORD(v230) = 0;
      result = StorPortNotification(4098LL, a1, v8 + 264);
    }
  }
LABEL_15:
  if ( *(_QWORD *)(a1 + 4272) )
  {
    result = *(unsigned int *)(a1 + 4280);
    if ( !(_DWORD)result && !_InterlockedExchange((volatile __int32 *)(a1 + 4280), 1) )
    {
      v15 = *(_QWORD *)(a1 + 4272);
      v211 = 250000LL;
      v210 = 1000000LL;
      v209 = 0LL;
      return StorPortExtendedFunction(33LL, a1, v15, IoTimeoutCallback);
    }
  }
  return result;
}
