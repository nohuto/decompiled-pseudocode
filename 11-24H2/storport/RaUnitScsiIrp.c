/*
 * XREFs of RaUnitScsiIrp @ 0x140002710
 * Callers:
 *     <none>
 * Callees:
 *     RaUnitQuiesceDeviceSrb @ 0x1400014CC (RaUnitQuiesceDeviceSrb.c)
 *     RaUnitUnlockQueueSrb @ 0x140001EC8 (RaUnitUnlockQueueSrb.c)
 *     RaUnitLockQueueSrb @ 0x140002170 (RaUnitLockQueueSrb.c)
 *     StorEtwIORequestDispatch @ 0x1400023D4 (StorEtwIORequestDispatch.c)
 *     RaidUnitSubmitRequest @ 0x140004620 (RaidUnitSubmitRequest.c)
 *     RaidStartIoPacket @ 0x140004760 (RaidStartIoPacket.c)
 *     RaidNtStatusToSrbStatus @ 0x1400059F0 (RaidNtStatusToSrbStatus.c)
 *     RaidUnitSubmitResetRequest @ 0x140005A88 (RaidUnitSubmitResetRequest.c)
 *     DbgLogRequest @ 0x140015470 (DbgLogRequest.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x140052DF0 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140052EC8 (McTemplateK0pd_EtwWriteTransfer.c)
 *     StorUnitExecuteNvmeSrb @ 0x140053630 (StorUnitExecuteNvmeSrb.c)
 *     WPP_SF_qqD @ 0x140055624 (WPP_SF_qqD.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x1400569AC (McTemplateK0pqd_EtwWriteTransfer.c)
 *     WPP_SF_qq @ 0x140067E84 (WPP_SF_qq.c)
 *     RaUnitCheckRemoveStateForDisabled @ 0x140069070 (RaUnitCheckRemoveStateForDisabled.c)
 *     RaUnitClaimDeviceSrb @ 0x14009220C (RaUnitClaimDeviceSrb.c)
 *     RaUnitFlushQueueSrb @ 0x140093090 (RaUnitFlushQueueSrb.c)
 *     RaUnitReleaseDeviceSrb @ 0x1400956E4 (RaUnitReleaseDeviceSrb.c)
 *     RaUnitReleaseQueueSrb @ 0x140095AA4 (RaUnitReleaseQueueSrb.c)
 *     RaUnitResetBusSrb @ 0x140096298 (RaUnitResetBusSrb.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 *     RaUnitUnknownSrb @ 0x14018B6D0 (RaUnitUnknownSrb.c)
 */

__int64 __fastcall RaUnitScsiIrp(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  _BYTE *v3; // rbx
  __int64 v6; // r13
  __int64 v7; // rdi
  unsigned __int64 v8; // r8
  signed __int32 v9; // eax
  signed __int32 v10; // ett
  int v11; // ecx
  __int64 v12; // rcx
  int v13; // r14d
  _DWORD *v14; // rax
  __int64 v15; // rcx
  int v16; // r14d
  int v17; // r12d
  PDEVICE_OBJECT v18; // rcx
  _BYTE *v19; // r14
  unsigned int v20; // r11d
  unsigned int *v21; // r8
  __int64 v22; // rax
  unsigned __int64 v23; // rdx
  int v24; // r10d
  __int64 v25; // r9
  unsigned __int64 v26; // rcx
  __int64 v27; // rcx
  __int64 v28; // rax
  __int64 v29; // rcx
  unsigned __int64 v30; // r14
  unsigned int v31; // edi
  __int64 v32; // r8
  __int64 v33; // rcx
  bool v35; // zf
  int v36; // edx
  char *v37; // rcx
  char v38; // al
  __int64 v39; // rax
  __int64 v40; // rcx
  unsigned __int64 v41; // r14
  unsigned int v42; // edi
  __int64 v43; // r8
  __int64 v44; // rcx
  unsigned int v45; // edi
  _DWORD *v46; // rax
  __int64 v47; // rax
  __int64 v48; // rdx
  __int64 v49; // rcx
  int v50; // edx
  char *v51; // rcx
  char v52; // al
  unsigned __int64 v53; // r8
  signed __int32 v54; // eax
  signed __int32 v55; // ett
  char v56; // al
  int v57; // edx
  char *v58; // rcx
  char v59; // al
  int v60; // r10d
  __int64 v61; // rcx
  __int64 v62; // rax
  int v63; // eax
  bool v64; // al
  int v65; // edx
  char *v66; // rcx
  char v67; // al
  unsigned __int64 v68; // r8
  signed __int32 v69; // eax
  signed __int32 v70; // ett
  PDEVICE_OBJECT v71; // rcx
  unsigned __int64 v72; // r8
  signed __int32 v73; // eax
  signed __int32 v74; // ett
  char *v75; // rdx
  char *v76; // rcx
  char v77; // al
  unsigned __int64 v78; // r14
  unsigned int v79; // edi
  __int64 v80; // r8
  __int64 v81; // rcx
  _DWORD *DpcData; // rax
  unsigned __int64 v83; // r8
  signed __int32 v84; // eax
  _DWORD *v85; // rax
  _DWORD *v86; // rax
  int *v87; // rax
  int v88; // ecx
  _DWORD *v89; // rax
  _DWORD *v90; // rax
  __int64 v91; // rdx
  char v92; // r12
  unsigned __int8 v93; // r8
  char v94; // r10
  char v95; // si
  char v96; // r11
  unsigned __int8 *v97; // r9
  unsigned int *v98; // r13
  unsigned int v99; // ecx
  __int64 v100; // rcx
  __int64 v101; // rdx
  char v102; // r12
  unsigned __int8 v103; // r8
  char v104; // r10
  char v105; // si
  char v106; // r11
  char *v107; // r9
  unsigned int *v108; // r13
  unsigned int v109; // ecx
  unsigned __int64 v110; // r8
  signed __int32 v111; // eax
  __int64 v112; // rdx
  char v113; // r11
  unsigned __int8 v114; // r8
  char v115; // r10
  char v116; // r12
  char v117; // di
  unsigned __int8 *v118; // r9
  unsigned int *v119; // r13
  unsigned int v120; // ecx
  __int64 v121; // rdx
  char v122; // cl
  __int64 v123; // r8
  char v124; // r13
  unsigned __int8 v125; // r10
  char v126; // r14
  char v127; // r11
  char v128; // r12
  _BYTE *v129; // rdx
  unsigned __int8 *v130; // r9
  unsigned int *v131; // r13
  unsigned int v132; // ecx
  __int64 v133; // rax
  unsigned __int64 v134; // rdi
  int v135; // ecx
  int v136; // ecx
  unsigned __int64 v137; // rcx
  char v138; // r9
  char v139; // dl
  _BYTE *v140; // rax
  char *v141; // r11
  unsigned int v142; // eax
  char v143; // r11
  char v144; // si
  char v145; // r10
  __int64 v146; // rdx
  char v147; // di
  char v148; // r9
  unsigned __int8 v149; // r8
  char v150; // r11
  char v151; // r12
  char v152; // si
  int v153; // eax
  char *v154; // r10
  unsigned int v155; // ecx
  unsigned int *v156; // rax
  unsigned int v157; // r12d
  __int64 v158; // rax
  unsigned __int64 v159; // r12
  int v160; // ecx
  int v161; // ecx
  int v162; // r13d
  char v163; // r10
  _BYTE *v164; // rcx
  _BYTE *v165; // rax
  unsigned int v166; // eax
  unsigned __int64 v167; // rcx
  __int64 v168; // rax
  unsigned __int64 v169; // rdi
  int v170; // ecx
  int v171; // ecx
  char v172; // cl
  char v173; // r9
  _BYTE *v174; // rcx
  _BYTE *v175; // rax
  char *v176; // r11
  unsigned int v177; // eax
  unsigned __int64 v178; // rcx
  char v179; // r11
  char v180; // di
  char v181; // r10
  signed __int32 v182; // ett
  __int64 v183; // rcx
  char *v184; // rdx
  char v185; // al
  _DWORD *v186; // rax
  __int64 v187; // rdx
  char v188; // r12
  unsigned __int8 v189; // r8
  unsigned __int8 *v190; // r9
  unsigned int *v191; // r13
  unsigned int v192; // ecx
  __int64 v193; // rax
  unsigned __int64 v194; // rdi
  int v195; // ecx
  int v196; // ecx
  unsigned __int64 v197; // rcx
  char v198; // r9
  _BYTE *v199; // rax
  char *v200; // r11
  unsigned int v201; // eax
  signed __int32 v202; // ett
  __int64 v203; // rcx
  char *v204; // rdx
  char v205; // al
  _DWORD *v206; // rax
  __int64 v207; // rdx
  char v208; // r14
  unsigned __int8 v209; // r8
  char v210; // r10
  char v211; // di
  char v212; // r11
  char *v213; // r9
  unsigned int *v214; // r13
  unsigned int v215; // ecx
  __int64 v216; // rax
  unsigned __int64 v217; // rsi
  int v218; // ecx
  int v219; // ecx
  char v220; // cl
  char v221; // r9
  _BYTE *v222; // rcx
  _BYTE *v223; // rax
  char *v224; // r11
  unsigned int v225; // eax
  unsigned __int64 v226; // rcx
  __int64 v227; // rax
  unsigned __int64 v228; // r11
  int v229; // ecx
  int v230; // ecx
  unsigned __int64 v231; // rcx
  char v232; // r9
  _BYTE *v233; // rax
  unsigned int v234; // eax
  int v235; // edx
  char *v236; // rcx
  char v237; // al
  _DWORD *v238; // rax
  __int64 v239; // rdx
  char v240; // r13
  unsigned __int8 v241; // r9
  char v242; // r10
  char v243; // r11
  char v244; // r12
  unsigned __int8 *v245; // r8
  unsigned int *v246; // r13
  unsigned int v247; // ecx
  __int64 v248; // rax
  unsigned __int64 v249; // r11
  int v250; // ecx
  int v251; // ecx
  unsigned __int64 v252; // rcx
  char v253; // r8
  _BYTE *v254; // rax
  unsigned int v255; // eax
  unsigned __int64 v256; // r8
  signed __int32 v257; // eax
  signed __int32 v258; // ett
  unsigned __int64 v259; // r8
  signed __int32 v260; // eax
  signed __int32 v261; // ett
  char v262; // al
  __int64 v263; // rdx
  char v264; // r14
  unsigned __int8 v265; // r8
  unsigned __int8 *v266; // r9
  unsigned int *v267; // r12
  unsigned int v268; // ecx
  __int64 v269; // rax
  unsigned __int64 v270; // rsi
  int v271; // ecx
  int v272; // ecx
  unsigned __int64 v273; // rcx
  char v274; // r9
  _BYTE *v275; // rax
  char *v276; // r11
  unsigned int v277; // eax
  unsigned __int8 *v278; // rdx
  char *v279; // rcx
  char v280; // al
  _DWORD *v281; // rax
  __int64 v282; // r8
  char v283; // r13
  unsigned __int8 v284; // r9
  char v285; // r14
  char v286; // r10
  char v287; // r12
  unsigned int *v288; // r13
  unsigned int v289; // ecx
  __int64 v290; // rax
  unsigned __int64 v291; // r10
  int v292; // ecx
  int v293; // ecx
  unsigned __int64 v294; // rcx
  _BYTE *v295; // rax
  unsigned int v296; // eax
  __int64 v297; // rax
  unsigned __int64 v298; // r11
  int v299; // ecx
  int v300; // ecx
  char *v301; // rcx
  char v302; // r9
  char *v303; // rax
  unsigned int v304; // eax
  unsigned __int64 v305; // r9
  unsigned int v306; // [rsp+60h] [rbp-69h]
  int v307; // [rsp+64h] [rbp-65h]
  int v308; // [rsp+64h] [rbp-65h]
  int v309; // [rsp+64h] [rbp-65h]
  int v310; // [rsp+64h] [rbp-65h]
  int v311; // [rsp+64h] [rbp-65h]
  int v312; // [rsp+64h] [rbp-65h]
  int v313; // [rsp+64h] [rbp-65h]
  int v314; // [rsp+64h] [rbp-65h]
  int v315; // [rsp+64h] [rbp-65h]
  int v316; // [rsp+64h] [rbp-65h]
  unsigned int v317; // [rsp+68h] [rbp-61h]
  __int128 v318; // [rsp+70h] [rbp-59h] BYREF
  __int128 v319; // [rsp+80h] [rbp-49h] BYREF
  __int128 v320; // [rsp+90h] [rbp-39h] BYREF
  __int128 v321; // [rsp+A0h] [rbp-29h] BYREF
  __int128 v322; // [rsp+B0h] [rbp-19h] BYREF
  __int128 v323; // [rsp+C0h] [rbp-9h] BYREF
  __int128 v324; // [rsp+D0h] [rbp+7h] BYREF

  v2 = *(_QWORD *)(a2 + 184);
  v3 = 0LL;
  v324 = 0LL;
  v6 = 0LL;
  v7 = *(_QWORD *)(v2 + 8);
  if ( !v7 )
  {
    v35 = StorEtwLoggingEnabled == 0;
    *(_QWORD *)(a2 + 56) = 0LL;
    *(_BYTE *)(a2 + 141) = -84;
    *(_DWORD *)(a2 + 48) = -1073741811;
    if ( v35 )
      goto LABEL_64;
    v319 = 0LL;
    IoGetActivityIdIrp(a2, &v319);
    v37 = *(char **)(a2 + 184);
    v38 = *v37;
    if ( *v37 != 15 )
    {
      if ( v38 == 14 )
      {
        if ( (byte_140171462 & 8) != 0 )
          McTemplateK0pd_EtwWriteTransfer(v37, &EventNonReadWriteRequestComplete, &v319, a2, *(_DWORD *)(a2 + 48));
      }
      else if ( v38 == 27 )
      {
        if ( v37[1] == 7 && !*((_DWORD *)v37 + 2) )
        {
          if ( (byte_140171462 & 0x40) != 0 )
          {
            v85 = *(_DWORD **)(a2 + 56);
            if ( v85 )
              LODWORD(v3) = *v85;
            McTemplateK0pqd_EtwWriteTransfer((_DWORD)v37, v36, (unsigned int)&v319, a2, (char)v3, *(_DWORD *)(a2 + 48));
          }
        }
        else if ( (byte_140171462 & 0x20) != 0 )
        {
          McTemplateK0pd_EtwWriteTransfer(v37, &EventPnpRequestComplete, &v319, a2, *(_DWORD *)(a2 + 48));
        }
      }
      goto LABEL_64;
    }
    if ( byte_140171461 >= 0 )
      goto LABEL_64;
    v91 = *((_QWORD *)v37 + 1);
    v92 = 0;
    v93 = 0;
    v94 = 0;
    v95 = 0;
    v96 = 0;
    if ( *(_BYTE *)(v91 + 2) != 40 )
    {
      LODWORD(v137) = *(unsigned __int8 *)(v91 + 72);
      v3 = *(_BYTE **)(v91 + 32);
      v93 = *(_BYTE *)(v91 + 11);
      v92 = *(_BYTE *)(v91 + 4);
      if ( *(_BYTE *)(v91 + 2) )
        goto LABEL_64;
      goto LABEL_300;
    }
    v97 = 0LL;
    if ( *(_DWORD *)(v91 + 20) )
      goto LABEL_64;
    v308 = 0;
    if ( !*(_DWORD *)(v91 + 56) )
      goto LABEL_291;
    v98 = (unsigned int *)(v91 + 120);
    v99 = *(_DWORD *)(v91 + 56);
    while ( 1 )
    {
      v133 = *v98;
      if ( (unsigned int)v133 >= 0x80 )
      {
        v134 = *(unsigned int *)(v91 + 16);
        if ( (unsigned int)v133 < (unsigned int)v134 )
        {
          v135 = *(_DWORD *)(v133 + v91);
          if ( v135 == 64 )
          {
            if ( v133 + 40 <= v134 )
            {
              if ( !*(_BYTE *)(v133 + v91 + 10) )
                goto LABEL_289;
LABEL_288:
              v97 = (unsigned __int8 *)(v133 + v91 + 24);
LABEL_289:
              v3 = *(_BYTE **)(v133 + v91 + 16);
              goto LABEL_290;
            }
          }
          else
          {
            v136 = v135 - 65;
            if ( v136 )
            {
              if ( v136 == 1 && v133 + 40 <= v134 )
              {
                if ( *(_DWORD *)(v133 + v91 + 12) )
                  v97 = (unsigned __int8 *)(v133 + v91 + 32);
                v3 = *(_BYTE **)(v133 + v91 + 24);
LABEL_290:
                v92 = *(_BYTE *)(v133 + v91 + 8);
                v93 = *(_BYTE *)(v133 + v91 + 9);
LABEL_291:
                if ( !v97 )
                  goto LABEL_64;
                LODWORD(v137) = *v97;
LABEL_300:
                LOBYTE(v137) = v137 - 8;
                if ( (v137 & 0x5D) != 0 )
                  goto LABEL_64;
                v138 = *(_BYTE *)(v91 + 3);
                if ( v138 == 1 || !v3 || !v93 )
                  goto LABEL_317;
                v139 = 0;
                v137 = (unsigned __int64)&v3[v93];
                v140 = v3 + 8;
                if ( (unsigned __int8)((*v3 & 0x7F) - 114) <= 1u )
                {
                  if ( (unsigned __int64)v140 <= v137 )
                  {
                    v95 = v3[2];
                    v94 = v3[1] & 0xF;
                    v96 = v3[3];
                    goto LABEL_315;
                  }
                }
                else if ( (unsigned __int64)v140 <= v137 )
                {
                  v141 = v3 + 13;
                  v94 = v3[2] & 0xF;
                  v142 = v93;
                  if ( (unsigned int)(unsigned __int8)v3[7] + 8 <= v93 )
                    v142 = (unsigned __int8)v3[7] + 8;
                  v137 = (unsigned __int64)&v3[v142];
                  if ( (unsigned __int64)v141 <= v137 )
                    v95 = v3[12];
                  if ( (unsigned __int64)(v3 + 14) > v137 )
                    v96 = 0;
                  else
                    v96 = *v141;
LABEL_315:
                  v139 = 1;
                }
                if ( !v139 )
                {
LABEL_317:
                  v96 = 0;
                  v95 = 0;
                  v94 = 0;
                }
                McTemplateK0pduuuuup_EtwWriteTransfer(
                  v137,
                  *(_DWORD *)(a2 + 48),
                  (unsigned int)&v319,
                  a2,
                  *(_DWORD *)(a2 + 48),
                  v138,
                  v92,
                  v94,
                  v95,
                  v96,
                  a2);
                goto LABEL_64;
              }
            }
            else if ( v133 + 56 <= v134 )
            {
              if ( *(_BYTE *)(v133 + v91 + 10) )
                goto LABEL_288;
              goto LABEL_289;
            }
          }
          v99 = *(_DWORD *)(v91 + 56);
        }
      }
      ++v98;
      if ( ++v308 >= v99 )
        goto LABEL_291;
    }
  }
  v8 = (unsigned __int64)HIDWORD(KeGetPcr()[1].LockArray) << 6;
  v9 = *(_DWORD *)(v8 + *(_QWORD *)(a1 + 40));
  while ( (v9 & 1) == 0 )
  {
    v10 = v9;
    v9 = _InterlockedCompareExchange((volatile signed __int32 *)(v8 + *(_QWORD *)(a1 + 40)), v9 + 2, v9);
    if ( v10 == v9 )
      goto LABEL_5;
  }
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 1032));
LABEL_5:
  v11 = *(_DWORD *)(a1 + 56) - 5;
  if ( *(_DWORD *)(a1 + 56) == 5 )
  {
    v100 = *(_QWORD *)(a2 + 184);
    if ( *(_BYTE *)v100 == 27 || *(_BYTE *)v100 == 14 && *(_DWORD *)(v100 + 24) == 266276 )
      goto LABEL_9;
    goto LABEL_94;
  }
  v12 = (unsigned int)(v11 - 1);
  if ( !(_DWORD)v12 )
  {
LABEL_94:
    v13 = -1073741738;
    goto LABEL_95;
  }
  if ( (_DWORD)v12 == 1 )
  {
    v13 = RaUnitCheckRemoveStateForDisabled(v12, a2);
    if ( v13 < 0 )
    {
LABEL_95:
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 1032), 0xFFFFFFFF) == 1 )
        KeSetEvent((PRKEVENT)(a1 + 520), 0, 0);
      v56 = RaidNtStatusToSrbStatus((unsigned int)v13);
      v35 = StorEtwLoggingEnabled == 0;
      *(_BYTE *)(v7 + 3) = v56;
      *(_QWORD *)(a2 + 56) = 0LL;
      *(_BYTE *)(a2 + 141) = -84;
      *(_DWORD *)(a2 + 48) = v13;
      if ( !v35 )
      {
        v318 = 0LL;
        IoGetActivityIdIrp(a2, &v318);
        v58 = *(char **)(a2 + 184);
        v59 = *v58;
        if ( *v58 != 15 )
        {
          if ( v59 == 14 )
          {
            if ( (byte_140171462 & 8) != 0 )
              McTemplateK0pd_EtwWriteTransfer(v58, &EventNonReadWriteRequestComplete, &v318, a2, *(_DWORD *)(a2 + 48));
          }
          else if ( v59 == 27 )
          {
            if ( v58[1] == 7 && !*((_DWORD *)v58 + 2) )
            {
              if ( (byte_140171462 & 0x40) != 0 )
              {
                v90 = *(_DWORD **)(a2 + 56);
                if ( v90 )
                  LODWORD(v3) = *v90;
                McTemplateK0pqd_EtwWriteTransfer(
                  (_DWORD)v58,
                  v57,
                  (unsigned int)&v318,
                  a2,
                  (char)v3,
                  *(_DWORD *)(a2 + 48));
              }
            }
            else if ( (byte_140171462 & 0x20) != 0 )
            {
              McTemplateK0pd_EtwWriteTransfer(v58, &EventPnpRequestComplete, &v318, a2, *(_DWORD *)(a2 + 48));
            }
          }
          goto LABEL_100;
        }
        if ( byte_140171461 < 0 )
        {
          v146 = *((_QWORD *)v58 + 1);
          v147 = 0;
          v148 = 0;
          v149 = 0;
          v150 = 0;
          v151 = 0;
          v152 = 0;
          v153 = *(unsigned __int8 *)(v146 + 2);
          if ( (_BYTE)v153 != 40 )
          {
            v147 = *(_BYTE *)(v146 + 72);
            v3 = *(_BYTE **)(v146 + 32);
            v149 = *(_BYTE *)(v146 + 11);
            v148 = *(_BYTE *)(v146 + 4);
            goto LABEL_351;
          }
          v153 = *(_DWORD *)(v146 + 20);
          v154 = 0LL;
          if ( !v153 )
          {
            v155 = *(_DWORD *)(v146 + 56);
            v306 = 0;
            v317 = v155;
            if ( !v155 )
              goto LABEL_341;
            v156 = (unsigned int *)(v146 + 120);
            v157 = 0;
            *(_QWORD *)&v319 = v146 + 120;
            while ( 1 )
            {
              v158 = *v156;
              if ( (unsigned int)v158 >= 0x80 )
              {
                v159 = *(unsigned int *)(v146 + 16);
                if ( (unsigned int)v158 < (unsigned int)v159 )
                {
                  v160 = *(_DWORD *)(v146 + v158);
                  if ( v160 == 64 )
                  {
                    if ( v158 + 40 <= v159 )
                    {
                      if ( !*(_BYTE *)(v146 + v158 + 10) )
                        goto LABEL_338;
LABEL_337:
                      v154 = (char *)(v158 + v146 + 24);
LABEL_338:
                      v3 = *(_BYTE **)(v146 + v158 + 16);
                      goto LABEL_339;
                    }
                  }
                  else
                  {
                    v161 = v160 - 65;
                    if ( v161 )
                    {
                      if ( v161 == 1 && v158 + 40 <= v159 )
                      {
                        if ( *(_DWORD *)(v146 + v158 + 12) )
                          v154 = (char *)(v158 + v146 + 32);
                        v3 = *(_BYTE **)(v146 + v158 + 24);
LABEL_339:
                        v148 = *(_BYTE *)(v146 + v158 + 8);
                        v149 = *(_BYTE *)(v146 + v158 + 9);
LABEL_340:
                        v153 = 0;
                        v151 = 0;
LABEL_341:
                        if ( v154 )
                        {
                          v147 = *v154;
                          v162 = v13;
                          goto LABEL_352;
                        }
LABEL_351:
                        v162 = v13;
                        if ( !v153 )
                        {
LABEL_352:
                          if ( ((v147 - 8) & 0x5D) == 0 )
                          {
                            v163 = *(_BYTE *)(v146 + 3);
                            if ( v163 == 1 || !v3 || !v149 )
                              goto LABEL_370;
                            LOBYTE(v146) = 0;
                            v164 = &v3[v149];
                            v165 = v3 + 8;
                            if ( (unsigned __int8)((*v3 & 0x7F) - 114) <= 1u )
                            {
                              if ( v165 <= v164 )
                              {
                                v151 = v3[2];
                                v150 = v3[1] & 0xF;
                                v152 = v3[3];
                                goto LABEL_367;
                              }
                            }
                            else if ( v165 <= v164 )
                            {
                              v166 = v149;
                              v150 = v3[2] & 0xF;
                              if ( (unsigned int)(unsigned __int8)v3[7] + 8 <= v149 )
                                v166 = (unsigned __int8)v3[7] + 8;
                              v167 = (unsigned __int64)&v3[v166];
                              if ( (unsigned __int64)(v3 + 13) > v167 )
                                v151 = 0;
                              else
                                v151 = v3[12];
                              if ( (unsigned __int64)(v3 + 14) <= v167 )
                                v152 = v3[13];
LABEL_367:
                              LOBYTE(v146) = 1;
                            }
                            if ( (_BYTE)v146 )
                            {
                              v13 = v162;
                            }
                            else
                            {
LABEL_370:
                              v152 = 0;
                              v151 = 0;
                              v150 = 0;
                            }
                            McTemplateK0pduuuuup_EtwWriteTransfer(
                              *(_DWORD *)(a2 + 48),
                              v146,
                              (unsigned int)&v318,
                              a2,
                              *(_DWORD *)(a2 + 48),
                              v163,
                              v148,
                              v150,
                              v151,
                              v152,
                              a2);
                          }
                        }
                        break;
                      }
                    }
                    else if ( v158 + 56 <= v159 )
                    {
                      if ( *(_BYTE *)(v146 + v158 + 10) )
                        goto LABEL_337;
                      goto LABEL_338;
                    }
                  }
                  v155 = v317;
                }
                v157 = v306;
              }
              ++v157;
              v156 = (unsigned int *)(v319 + 4);
              v306 = v157;
              *(_QWORD *)&v319 = v319 + 4;
              if ( v157 >= v155 )
                goto LABEL_340;
            }
          }
        }
      }
LABEL_100:
      IofCompleteRequest((PIRP)a2, 0);
      return (unsigned int)v13;
    }
  }
LABEL_9:
  v14 = *(_DWORD **)(a1 + 24);
  if ( *v14 == 1314275652 )
  {
    v15 = (__int64)v14 + 274;
  }
  else if ( *v14 == 1094997074 )
  {
    v15 = (__int64)v14 + 482;
  }
  else
  {
    v15 = 98LL;
  }
  if ( *(_BYTE *)(v7 + 2) != 40 )
  {
    v17 = *(_DWORD *)(v7 + 12);
    v16 = *(unsigned __int8 *)(v7 + 2);
    goto LABEL_17;
  }
  if ( *(_BYTE *)v15 != 1 )
  {
    *(_BYTE *)(v7 + 3) = 6;
    *(_QWORD *)(a2 + 56) = 0LL;
    v72 = (unsigned __int64)HIDWORD(KeGetPcr()[1].LockArray) << 6;
    v73 = *(_DWORD *)(v72 + *(_QWORD *)(a1 + 40));
    while ( (v73 & 1) == 0 )
    {
      v74 = v73;
      v73 = _InterlockedCompareExchange((volatile signed __int32 *)(v72 + *(_QWORD *)(a1 + 40)), v73 - 2, v73);
      if ( v74 == v73 )
        goto LABEL_137;
    }
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 1032), 0xFFFFFFFF) == 1 )
      KeSetEvent((PRKEVENT)(a1 + 520), 0, 0);
LABEL_137:
    v35 = StorEtwLoggingEnabled == 0;
    *(_BYTE *)(a2 + 141) = -84;
    *(_DWORD *)(a2 + 48) = -1073741637;
    if ( v35 )
      goto LABEL_140;
    v318 = 0LL;
    IoGetActivityIdIrp(a2, &v318);
    v76 = *(char **)(a2 + 184);
    v77 = *v76;
    if ( *v76 == 15 )
    {
      if ( byte_140171461 >= 0 )
        goto LABEL_140;
      v101 = *((_QWORD *)v76 + 1);
      v102 = 0;
      v103 = 0;
      v104 = 0;
      v105 = 0;
      v106 = 0;
      if ( *(_BYTE *)(v101 + 2) != 40 )
      {
        v172 = *(_BYTE *)(v101 + 72);
        v3 = *(_BYTE **)(v101 + 32);
        v103 = *(_BYTE *)(v101 + 11);
        v102 = *(_BYTE *)(v101 + 4);
        if ( *(_BYTE *)(v101 + 2) )
          goto LABEL_140;
        goto LABEL_397;
      }
      v107 = 0LL;
      if ( *(_DWORD *)(v101 + 20) )
        goto LABEL_140;
      v309 = 0;
      if ( !*(_DWORD *)(v101 + 56) )
        goto LABEL_388;
      v108 = (unsigned int *)(v101 + 120);
      v109 = *(_DWORD *)(v101 + 56);
      while ( 1 )
      {
        v168 = *v108;
        if ( (unsigned int)v168 >= 0x80 )
        {
          v169 = *(unsigned int *)(v101 + 16);
          if ( (unsigned int)v168 < (unsigned int)v169 )
          {
            v170 = *(_DWORD *)(v101 + v168);
            if ( v170 == 64 )
            {
              if ( v168 + 40 <= v169 )
              {
                if ( !*(_BYTE *)(v101 + v168 + 10) )
                  goto LABEL_386;
LABEL_385:
                v107 = (char *)(v168 + v101 + 24);
LABEL_386:
                v3 = *(_BYTE **)(v101 + v168 + 16);
                goto LABEL_387;
              }
            }
            else
            {
              v171 = v170 - 65;
              if ( v171 )
              {
                if ( v171 == 1 && v168 + 40 <= v169 )
                {
                  if ( *(_DWORD *)(v101 + v168 + 12) )
                    v107 = (char *)(v168 + v101 + 32);
                  v3 = *(_BYTE **)(v101 + v168 + 24);
LABEL_387:
                  v102 = *(_BYTE *)(v101 + v168 + 8);
                  v103 = *(_BYTE *)(v101 + v168 + 9);
LABEL_388:
                  if ( !v107 )
                    goto LABEL_140;
                  v172 = *v107;
LABEL_397:
                  if ( ((v172 - 8) & 0x5D) != 0 )
                    goto LABEL_140;
                  v173 = *(_BYTE *)(v101 + 3);
                  if ( v173 == 1 || !v3 || !v103 )
                    goto LABEL_414;
                  LOBYTE(v101) = 0;
                  v174 = &v3[v103];
                  v175 = v3 + 8;
                  if ( (unsigned __int8)((*v3 & 0x7F) - 114) <= 1u )
                  {
                    if ( v175 <= v174 )
                    {
                      v105 = v3[2];
                      v104 = v3[1] & 0xF;
                      v106 = v3[3];
                      goto LABEL_412;
                    }
                  }
                  else if ( v175 <= v174 )
                  {
                    v176 = v3 + 13;
                    v104 = v3[2] & 0xF;
                    v177 = v103;
                    if ( (unsigned int)(unsigned __int8)v3[7] + 8 <= v103 )
                      v177 = (unsigned __int8)v3[7] + 8;
                    v178 = (unsigned __int64)&v3[v177];
                    if ( (unsigned __int64)v176 <= v178 )
                      v105 = v3[12];
                    if ( (unsigned __int64)(v3 + 14) > v178 )
                      v106 = 0;
                    else
                      v106 = *v176;
LABEL_412:
                    LOBYTE(v101) = 1;
                  }
                  if ( !(_BYTE)v101 )
                  {
LABEL_414:
                    v106 = 0;
                    v105 = 0;
                    v104 = 0;
                  }
                  McTemplateK0pduuuuup_EtwWriteTransfer(
                    *(_DWORD *)(a2 + 48),
                    v101,
                    (unsigned int)&v318,
                    a2,
                    *(_DWORD *)(a2 + 48),
                    v173,
                    v102,
                    v104,
                    v105,
                    v106,
                    a2);
                  goto LABEL_140;
                }
              }
              else if ( v168 + 56 <= v169 )
              {
                if ( *(_BYTE *)(v101 + v168 + 10) )
                  goto LABEL_385;
                goto LABEL_386;
              }
            }
            v109 = *(_DWORD *)(v101 + 56);
          }
        }
        ++v108;
        if ( ++v309 >= v109 )
          goto LABEL_388;
      }
    }
    if ( v77 != 14 )
    {
      if ( v77 != 27 )
        goto LABEL_140;
      if ( v76[1] == 7 && !*((_DWORD *)v76 + 2) )
      {
        if ( (byte_140171462 & 0x40) == 0 )
          goto LABEL_140;
        v89 = *(_DWORD **)(a2 + 56);
        if ( !v89 )
          goto LABEL_373;
        goto LABEL_372;
      }
LABEL_195:
      if ( (byte_140171462 & 0x20) != 0 )
        McTemplateK0pd_EtwWriteTransfer(v76, &EventPnpRequestComplete, &v318, a2, *(_DWORD *)(a2 + 48));
      goto LABEL_140;
    }
LABEL_187:
    if ( (byte_140171462 & 8) != 0 )
      McTemplateK0pd_EtwWriteTransfer(v76, &EventNonReadWriteRequestComplete, &v318, a2, *(_DWORD *)(a2 + 48));
    goto LABEL_140;
  }
  v6 = v7;
  v16 = *(_DWORD *)(v7 + 20);
  v17 = *(_DWORD *)(v7 + 24);
  if ( *(_DWORD *)(v7 + 8) != 1397899864 || *(_DWORD *)(v7 + 48) || *(_QWORD *)(v7 + 72) )
  {
    *(_BYTE *)(v7 + 3) = 6;
    *(_QWORD *)(a2 + 56) = 0LL;
    v110 = (unsigned __int64)HIDWORD(KeGetPcr()[1].LockArray) << 6;
    v111 = *(_DWORD *)(v110 + *(_QWORD *)(a1 + 40));
    while ( (v111 & 1) == 0 )
    {
      v182 = v111;
      v111 = _InterlockedCompareExchange((volatile signed __int32 *)(v110 + *(_QWORD *)(a1 + 40)), v111 - 2, v111);
      if ( v182 == v111 )
        goto LABEL_423;
    }
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 1032), 0xFFFFFFFF) == 1 )
      KeSetEvent((PRKEVENT)(a1 + 520), 0, 0);
LABEL_423:
    v35 = StorEtwLoggingEnabled == 0;
    *(_BYTE *)(a2 + 141) = -84;
    *(_DWORD *)(a2 + 48) = -1073741811;
    if ( v35 )
      goto LABEL_64;
    v318 = 0LL;
    IoGetActivityIdIrp(a2, &v318);
    v184 = *(char **)(a2 + 184);
    v185 = *v184;
    if ( *v184 != 15 )
    {
      if ( v185 == 14 )
      {
        if ( (byte_140171462 & 8) != 0 )
          McTemplateK0pd_EtwWriteTransfer(v183, &EventNonReadWriteRequestComplete, &v318, a2, *(_DWORD *)(a2 + 48));
      }
      else if ( v185 == 27 )
      {
        if ( v184[1] != 7 || *((_DWORD *)v184 + 2) )
        {
          if ( (byte_140171462 & 0x20) != 0 )
            McTemplateK0pd_EtwWriteTransfer(v183, &EventPnpRequestComplete, &v318, a2, *(_DWORD *)(a2 + 48));
        }
        else if ( (byte_140171462 & 0x40) != 0 )
        {
          v186 = *(_DWORD **)(a2 + 56);
          if ( v186 )
            LODWORD(v3) = *v186;
          McTemplateK0pqd_EtwWriteTransfer(v183, (_DWORD)v184, (unsigned int)&v318, a2, (char)v3, *(_DWORD *)(a2 + 48));
        }
      }
      goto LABEL_64;
    }
    if ( byte_140171461 >= 0 )
      goto LABEL_64;
    v187 = *((_QWORD *)v184 + 1);
    v188 = 0;
    v189 = 0;
    v145 = 0;
    v144 = 0;
    v143 = 0;
    if ( *(_BYTE *)(v187 + 2) == 40 )
    {
      v190 = 0LL;
      if ( *(_DWORD *)(v187 + 20) )
        goto LABEL_64;
      v312 = 0;
      if ( !*(_DWORD *)(v187 + 56) )
        goto LABEL_456;
      v191 = (unsigned int *)(v187 + 120);
      v192 = *(_DWORD *)(v187 + 56);
      while ( 1 )
      {
        v193 = *v191;
        if ( (unsigned int)v193 >= 0x80 )
        {
          v194 = *(unsigned int *)(v187 + 16);
          if ( (unsigned int)v193 < (unsigned int)v194 )
          {
            v195 = *(_DWORD *)(v187 + v193);
            if ( v195 == 64 )
            {
              if ( v193 + 40 <= v194 )
              {
                if ( !*(_BYTE *)(v187 + v193 + 10) )
                  goto LABEL_454;
LABEL_453:
                v190 = (unsigned __int8 *)(v193 + v187 + 24);
LABEL_454:
                v3 = *(_BYTE **)(v187 + v193 + 16);
                goto LABEL_455;
              }
            }
            else
            {
              v196 = v195 - 65;
              if ( v196 )
              {
                if ( v196 == 1 && v193 + 40 <= v194 )
                {
                  if ( *(_DWORD *)(v187 + v193 + 12) )
                    v190 = (unsigned __int8 *)(v193 + v187 + 32);
                  v3 = *(_BYTE **)(v187 + v193 + 24);
LABEL_455:
                  v188 = *(_BYTE *)(v187 + v193 + 8);
                  v189 = *(_BYTE *)(v187 + v193 + 9);
LABEL_456:
                  if ( v190 )
                  {
                    LODWORD(v197) = *v190;
                    goto LABEL_465;
                  }
                  goto LABEL_64;
                }
              }
              else if ( v193 + 56 <= v194 )
              {
                if ( *(_BYTE *)(v187 + v193 + 10) )
                  goto LABEL_453;
                goto LABEL_454;
              }
            }
            v192 = *(_DWORD *)(v187 + 56);
          }
        }
        ++v191;
        if ( ++v312 >= v192 )
          goto LABEL_456;
      }
    }
    LODWORD(v197) = *(unsigned __int8 *)(v187 + 72);
    v3 = *(_BYTE **)(v187 + 32);
    v189 = *(_BYTE *)(v187 + 11);
    v188 = *(_BYTE *)(v187 + 4);
    if ( *(_BYTE *)(v187 + 2) )
      goto LABEL_64;
LABEL_465:
    LOBYTE(v197) = v197 - 8;
    if ( (v197 & 0x5D) != 0 )
    {
LABEL_64:
      IofCompleteRequest((PIRP)a2, 0);
      return 3221225485LL;
    }
    v198 = *(_BYTE *)(v187 + 3);
    if ( v198 == 1 || !v3 || !v189 )
    {
LABEL_319:
      v143 = 0;
      v144 = 0;
      v145 = 0;
LABEL_320:
      McTemplateK0pduuuuup_EtwWriteTransfer(
        v197,
        v187,
        (unsigned int)&v318,
        a2,
        *(_DWORD *)(a2 + 48),
        v198,
        v188,
        v145,
        v144,
        v143,
        a2);
      goto LABEL_64;
    }
    LOBYTE(v187) = 0;
    v197 = (unsigned __int64)&v3[v189];
    v199 = v3 + 8;
    if ( (unsigned __int8)((*v3 & 0x7F) - 114) <= 1u )
    {
      if ( (unsigned __int64)v199 > v197 )
        goto LABEL_481;
      v144 = v3[2];
      v145 = v3[1] & 0xF;
      v143 = v3[3];
    }
    else
    {
      if ( (unsigned __int64)v199 > v197 )
        goto LABEL_481;
      v200 = v3 + 13;
      v145 = v3[2] & 0xF;
      v201 = v189;
      if ( (unsigned int)(unsigned __int8)v3[7] + 8 <= v189 )
        v201 = (unsigned __int8)v3[7] + 8;
      v197 = (unsigned __int64)&v3[v201];
      if ( (unsigned __int64)v200 <= v197 )
        v144 = v3[12];
      if ( (unsigned __int64)(v3 + 14) > v197 )
        v143 = 0;
      else
        v143 = *v200;
    }
    LOBYTE(v187) = 1;
LABEL_481:
    if ( (_BYTE)v187 )
      goto LABEL_320;
    goto LABEL_319;
  }
LABEL_17:
  v18 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qqD(WPP_GLOBAL_Control->AttachedDevice, 15LL, &WPP_e6323699744f33baefc587a6e43a33df_Traceguids, a1, a2, v16);
  }
  if ( (v17 & 0x100000) == 0
    || ((v18 = *(PDEVICE_OBJECT *)(a1 + 24), (DpcData = v18[14].Dpc.DpcData) == 0LL) || (DpcData[5] & 1) != 0)
    && (BYTE3(v18->Queue.Wcb.DeviceRoutine) & 4) == 0
    && HIDWORD(v18[1].DriverObject) == 1 )
  {
    switch ( v16 )
    {
      case 0:
        if ( *(_BYTE *)(v7 + 2) != 40 )
        {
          v19 = (_BYTE *)(v7 + 72);
          goto LABEL_34;
        }
        v19 = 0LL;
        if ( *(_BYTE *)(v6 + 2) == 40 && !*(_DWORD *)(v6 + 20) )
        {
          v20 = *(_DWORD *)(v6 + 56);
          v307 = 0;
          if ( v20 )
          {
            v21 = (unsigned int *)(v6 + 120);
            while ( 1 )
            {
              v22 = *v21;
              if ( (unsigned int)v22 < 0x80 )
                goto LABEL_31;
              v23 = *(unsigned int *)(v6 + 16);
              if ( (unsigned int)v22 >= (unsigned int)v23 )
                goto LABEL_31;
              v24 = *(_DWORD *)(v22 + v6);
              v25 = v22 + v6;
              if ( v24 == 64 )
                break;
              v60 = v24 - 65;
              if ( !v60 )
              {
                v26 = (unsigned int)v22 + 56LL;
LABEL_30:
                if ( v26 <= v23 )
                {
                  if ( *(_BYTE *)(v25 + 10) )
                    v19 = (_BYTE *)(v25 + 24);
                  goto LABEL_34;
                }
                goto LABEL_31;
              }
              if ( v60 == 1 && (unsigned __int64)(unsigned int)v22 + 40 <= v23 )
              {
                if ( *(_DWORD *)(v25 + 12) )
                  v19 = (_BYTE *)(v25 + 32);
                goto LABEL_34;
              }
LABEL_31:
              ++v21;
              if ( ++v307 >= v20 )
                goto LABEL_34;
            }
            v26 = (unsigned int)v22 + 40LL;
            goto LABEL_30;
          }
        }
LABEL_34:
        if ( !v19 )
        {
LABEL_38:
          if ( !DisableIEEE1667 || !v19 )
            goto LABEL_39;
          if ( *v19 == 0xA2 )
          {
            if ( v19[1] != 0xEE )
            {
LABEL_39:
              if ( StorEtwLoggingEnabled && (byte_140171461 & 0x1E) != 0 && ((*v19 - 8) & 0x5D) == 0 )
              {
                IoGetActivityIdIrp(a2, &v324);
                StorEtwIORequestDispatch(a2);
              }
              v28 = *(_QWORD *)(a2 + 184);
              v29 = *(_QWORD *)(v28 + 8);
              *(_BYTE *)(v28 + 3) |= 1u;
              *(_BYTE *)(v29 + 3) = 0;
              *(_QWORD *)(*(_QWORD *)(a2 + 184) + 24LL) = 0LL;
              if ( *(_BYTE *)(v29 + 2) == 40 )
              {
                v30 = *(unsigned int *)(v29 + 20);
                v31 = *(_DWORD *)(v29 + 24);
              }
              else
              {
                v31 = *(_DWORD *)(v29 + 12);
                v30 = *(unsigned __int8 *)(v29 + 2);
              }
              if ( (qword_140170460 & 0x20) != 0 )
                DbgLogRequest(
                  *(_QWORD *)(a1 + 24),
                  3,
                  a2,
                  (unsigned __int8)BYTE2(*(_DWORD *)(a1 + 104)) | ((((unsigned __int8)*(_DWORD *)(a1 + 104) << 8) | (unsigned __int8)BYTE1(*(_DWORD *)(a1 + 104))) << 8),
                  0LL,
                  0LL,
                  0LL);
              v32 = (v31 >> 17) & 4 | 2;
              if ( (v31 & 0x10) == 0 )
                v32 = (v31 >> 17) & 4;
              if ( (v31 & 0x102) != 0x102 && (v31 & 0x80010) == 0 )
              {
                if ( (unsigned int)v30 > 0x20 || (v33 = 0x1000D0000LL, !_bittest64(&v33, v30)) )
                  v32 = (unsigned int)v32 | 1;
              }
              RaidStartIoPacket(a1, a2, v32);
              if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                && (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) != 0
                && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
              {
                WPP_SF_qqD(
                  WPP_GLOBAL_Control->AttachedDevice,
                  19LL,
                  &WPP_e6323699744f33baefc587a6e43a33df_Traceguids,
                  a1,
                  a2,
                  259);
              }
              return 259LL;
            }
          }
          else if ( *v19 != 0xB5 || v19[1] != 0xEE )
          {
            goto LABEL_39;
          }
          *(_BYTE *)(v7 + 3) = 4;
          *(_QWORD *)(a2 + 56) = 0LL;
          v259 = (unsigned __int64)HIDWORD(KeGetPcr()[1].LockArray) << 6;
          v260 = *(_DWORD *)(v259 + *(_QWORD *)(a1 + 40));
          while ( (v260 & 1) == 0 )
          {
            v261 = v260;
            v260 = _InterlockedCompareExchange((volatile signed __int32 *)(v259 + *(_QWORD *)(a1 + 40)), v260 - 2, v260);
            if ( v261 == v260 )
              goto LABEL_677;
          }
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 1032), 0xFFFFFFFF) == 1 )
            KeSetEvent((PRKEVENT)(a1 + 520), 0, 0);
LABEL_677:
          v35 = StorEtwLoggingEnabled == 0;
          *(_BYTE *)(a2 + 141) = -84;
          *(_DWORD *)(a2 + 48) = -1073741637;
          if ( v35 )
            goto LABEL_140;
          v318 = 0LL;
          IoGetActivityIdIrp(a2, &v318);
          v75 = *(char **)(a2 + 184);
          v262 = *v75;
          if ( *v75 != 15 )
          {
            if ( v262 != 14 )
            {
              if ( v262 != 27 )
                goto LABEL_140;
              if ( v75[1] == 7 && !*((_DWORD *)v75 + 2) )
              {
                if ( (byte_140171462 & 0x40) == 0 )
                  goto LABEL_140;
                v89 = *(_DWORD **)(a2 + 56);
                if ( !v89 )
                {
LABEL_373:
                  McTemplateK0pqd_EtwWriteTransfer(
                    (_DWORD)v76,
                    (_DWORD)v75,
                    (unsigned int)&v318,
                    a2,
                    (char)v3,
                    *(_DWORD *)(a2 + 48));
                  goto LABEL_140;
                }
LABEL_372:
                LODWORD(v3) = *v89;
                goto LABEL_373;
              }
              goto LABEL_195;
            }
            goto LABEL_187;
          }
          if ( byte_140171461 >= 0 )
            goto LABEL_140;
          v263 = *((_QWORD *)v75 + 1);
          v264 = 0;
          v265 = 0;
          v181 = 0;
          v180 = 0;
          v179 = 0;
          if ( *(_BYTE *)(v263 + 2) == 40 )
          {
            v266 = 0LL;
            if ( *(_DWORD *)(v263 + 20) )
              goto LABEL_140;
            v315 = 0;
            if ( !*(_DWORD *)(v263 + 56) )
              goto LABEL_705;
            v267 = (unsigned int *)(v263 + 120);
            v268 = *(_DWORD *)(v263 + 56);
            while ( 1 )
            {
              v269 = *v267;
              if ( (unsigned int)v269 >= 0x80 )
              {
                v270 = *(unsigned int *)(v263 + 16);
                if ( (unsigned int)v269 < (unsigned int)v270 )
                {
                  v271 = *(_DWORD *)(v263 + v269);
                  if ( v271 == 64 )
                  {
                    if ( v269 + 40 <= v270 )
                    {
                      if ( !*(_BYTE *)(v263 + v269 + 10) )
                        goto LABEL_703;
LABEL_702:
                      v266 = (unsigned __int8 *)(v269 + v263 + 24);
LABEL_703:
                      v3 = *(_BYTE **)(v263 + v269 + 16);
                      goto LABEL_704;
                    }
                  }
                  else
                  {
                    v272 = v271 - 65;
                    if ( v272 )
                    {
                      if ( v272 == 1 && v269 + 40 <= v270 )
                      {
                        if ( *(_DWORD *)(v263 + v269 + 12) )
                          v266 = (unsigned __int8 *)(v269 + v263 + 32);
                        v3 = *(_BYTE **)(v263 + v269 + 24);
LABEL_704:
                        v264 = *(_BYTE *)(v263 + v269 + 8);
                        v265 = *(_BYTE *)(v263 + v269 + 9);
LABEL_705:
                        if ( v266 )
                        {
                          LODWORD(v273) = *v266;
                          goto LABEL_714;
                        }
                        goto LABEL_140;
                      }
                    }
                    else if ( v269 + 56 <= v270 )
                    {
                      if ( *(_BYTE *)(v263 + v269 + 10) )
                        goto LABEL_702;
                      goto LABEL_703;
                    }
                  }
                  v268 = *(_DWORD *)(v263 + 56);
                }
              }
              ++v267;
              if ( ++v315 >= v268 )
                goto LABEL_705;
            }
          }
          LODWORD(v273) = *(unsigned __int8 *)(v263 + 72);
          v3 = *(_BYTE **)(v263 + 32);
          v265 = *(_BYTE *)(v263 + 11);
          v264 = *(_BYTE *)(v263 + 4);
          if ( *(_BYTE *)(v263 + 2) )
            goto LABEL_140;
LABEL_714:
          LOBYTE(v273) = v273 - 8;
          if ( (v273 & 0x5D) != 0 )
          {
LABEL_140:
            IofCompleteRequest((PIRP)a2, 0);
            return 3221225659LL;
          }
          if ( *(_BYTE *)(v263 + 3) == 1 || !v3 || !v265 )
          {
LABEL_416:
            v179 = 0;
            v180 = 0;
            v181 = 0;
LABEL_417:
            McTemplateK0pduuuuup_EtwWriteTransfer(
              v273,
              v263,
              (unsigned int)&v318,
              a2,
              *(_DWORD *)(a2 + 48),
              *(_BYTE *)(v263 + 3),
              v264,
              v181,
              v180,
              v179,
              a2);
            goto LABEL_140;
          }
          v274 = 0;
          v273 = (unsigned __int64)&v3[v265];
          v275 = v3 + 8;
          if ( (unsigned __int8)((*v3 & 0x7F) - 114) <= 1u )
          {
            if ( (unsigned __int64)v275 > v273 )
              goto LABEL_730;
            v180 = v3[2];
            v181 = v3[1] & 0xF;
            v179 = v3[3];
          }
          else
          {
            if ( (unsigned __int64)v275 > v273 )
              goto LABEL_730;
            v276 = v3 + 13;
            v181 = v3[2] & 0xF;
            v277 = v265;
            if ( (unsigned int)(unsigned __int8)v3[7] + 8 <= v265 )
              v277 = (unsigned __int8)v3[7] + 8;
            v273 = (unsigned __int64)&v3[v277];
            if ( (unsigned __int64)v276 <= v273 )
              v180 = v3[12];
            if ( (unsigned __int64)(v3 + 14) > v273 )
              v179 = 0;
            else
              v179 = *v276;
          }
          v274 = 1;
LABEL_730:
          if ( v274 )
            goto LABEL_417;
          goto LABEL_416;
        }
        if ( *v19 == 27 && (v19[4] & 1) == 0 )
        {
          v61 = *(_QWORD *)(a1 + 24);
          if ( *(_DWORD *)v61 == 1094997074 )
          {
            v62 = v61 + 604;
          }
          else
          {
            v62 = v61 + 396;
            if ( *(_DWORD *)v61 != 1314275652 )
              v62 = 228LL;
          }
          if ( (*(_DWORD *)v62 & 2) != 0 )
          {
            if ( (*(_BYTE *)(a1 + 505) & 4) != 0 || (*(_BYTE *)(v61 + 107) & 0x10) != 0 )
              goto LABEL_36;
            v63 = *(_DWORD *)(a1 + 544);
            if ( v63 != 5 )
            {
              if ( v63 == 6 && *(_DWORD *)(a1 + 552) == 5 )
                goto LABEL_120;
              goto LABEL_36;
            }
            v64 = *(_DWORD *)(a1 + 1044) != 0;
          }
          else
          {
            v64 = *(_DWORD *)(a1 + 544) >= 5;
          }
          if ( v64 )
          {
LABEL_120:
            v35 = StorEtwLoggingEnabled == 0;
            *(_BYTE *)(v7 + 3) = 1;
            *(_QWORD *)(a2 + 56) = 0LL;
            *(_BYTE *)(a2 + 141) = -84;
            *(_DWORD *)(a2 + 48) = 0;
            if ( v35 )
              goto LABEL_123;
            v320 = 0LL;
            IoGetActivityIdIrp(a2, &v320);
            v66 = *(char **)(a2 + 184);
            v67 = *v66;
            if ( *v66 != 15 )
            {
              if ( v67 == 14 )
              {
                if ( (byte_140171462 & 8) != 0 )
                  McTemplateK0pd_EtwWriteTransfer(
                    v66,
                    &EventNonReadWriteRequestComplete,
                    &v320,
                    a2,
                    *(_DWORD *)(a2 + 48));
              }
              else if ( v67 == 27 )
              {
                if ( v66[1] == 7 && !*((_DWORD *)v66 + 2) )
                {
                  if ( (byte_140171462 & 0x40) != 0 )
                  {
                    v86 = *(_DWORD **)(a2 + 56);
                    if ( v86 )
                      LODWORD(v3) = *v86;
                    McTemplateK0pqd_EtwWriteTransfer(
                      (_DWORD)v66,
                      v65,
                      (unsigned int)&v320,
                      a2,
                      (char)v3,
                      *(_DWORD *)(a2 + 48));
                  }
                }
                else if ( (byte_140171462 & 0x20) != 0 )
                {
                  McTemplateK0pd_EtwWriteTransfer(v66, &EventPnpRequestComplete, &v320, a2, *(_DWORD *)(a2 + 48));
                }
              }
              goto LABEL_123;
            }
            if ( byte_140171461 >= 0 )
            {
LABEL_123:
              IofCompleteRequest((PIRP)a2, 0);
              v68 = (unsigned __int64)HIDWORD(KeGetPcr()[1].LockArray) << 6;
              v69 = *(_DWORD *)(v68 + *(_QWORD *)(a1 + 40));
              while ( (v69 & 1) == 0 )
              {
                v70 = v69;
                v69 = _InterlockedCompareExchange((volatile signed __int32 *)(v68 + *(_QWORD *)(a1 + 40)), v69 - 2, v69);
                if ( v70 == v69 )
                  goto LABEL_126;
              }
              if ( _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 1032), 0xFFFFFFFF) == 1 )
                KeSetEvent((PRKEVENT)(a1 + 520), 0, 0);
LABEL_126:
              v71 = WPP_GLOBAL_Control;
              if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                || (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) == 0
                || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
              {
                return 0LL;
              }
              v121 = 16LL;
              goto LABEL_668;
            }
            v112 = *((_QWORD *)v66 + 1);
            v113 = 0;
            v114 = 0;
            v115 = 0;
            v116 = 0;
            v117 = 0;
            if ( *(_BYTE *)(v112 + 2) == 40 )
            {
              v118 = 0LL;
              if ( *(_DWORD *)(v112 + 20) )
                goto LABEL_123;
              v310 = 0;
              if ( !*(_DWORD *)(v112 + 56) )
                goto LABEL_564;
              v119 = (unsigned int *)(v112 + 120);
              v120 = *(_DWORD *)(v112 + 56);
              while ( 1 )
              {
                v227 = *v119;
                if ( (unsigned int)v227 >= 0x80 )
                {
                  v228 = *(unsigned int *)(v112 + 16);
                  if ( (unsigned int)v227 < (unsigned int)v228 )
                  {
                    v229 = *(_DWORD *)(v112 + v227);
                    if ( v229 == 64 )
                    {
                      if ( v227 + 40 <= v228 )
                      {
LABEL_561:
                        if ( *(_BYTE *)(v112 + v227 + 10) )
                          v118 = (unsigned __int8 *)(v227 + v112 + 24);
                        v113 = *(_BYTE *)(v112 + v227 + 8);
                        v3 = *(_BYTE **)(v112 + v227 + 16);
                        v114 = *(_BYTE *)(v112 + v227 + 9);
LABEL_564:
                        if ( v118 )
                        {
                          LODWORD(v231) = *v118;
                          goto LABEL_571;
                        }
                        goto LABEL_123;
                      }
                    }
                    else
                    {
                      v230 = v229 - 65;
                      if ( v230 )
                      {
                        if ( v230 == 1 && v227 + 40 <= v228 )
                        {
                          if ( *(_DWORD *)(v112 + v227 + 12) )
                            v118 = (unsigned __int8 *)(v227 + v112 + 32);
                          v113 = *(_BYTE *)(v112 + v227 + 8);
                          v3 = *(_BYTE **)(v112 + v227 + 24);
                          v114 = *(_BYTE *)(v112 + v227 + 9);
                          goto LABEL_564;
                        }
                      }
                      else if ( v227 + 56 <= v228 )
                      {
                        goto LABEL_561;
                      }
                    }
                    v120 = *(_DWORD *)(v112 + 56);
                  }
                }
                ++v119;
                if ( ++v310 >= v120 )
                {
                  v113 = 0;
                  goto LABEL_564;
                }
              }
            }
            LODWORD(v231) = *(unsigned __int8 *)(v112 + 72);
            v3 = *(_BYTE **)(v112 + 32);
            v114 = *(_BYTE *)(v112 + 11);
            v113 = *(_BYTE *)(v112 + 4);
            if ( *(_BYTE *)(v112 + 2) )
              goto LABEL_123;
LABEL_571:
            LOBYTE(v231) = v231 - 8;
            if ( (v231 & 0x5D) != 0 )
              goto LABEL_123;
            if ( *(_BYTE *)(v112 + 3) == 1 || !v3 || !v114 )
              goto LABEL_587;
            v232 = 0;
            v231 = (unsigned __int64)&v3[v114];
            v233 = v3 + 8;
            if ( (unsigned __int8)((*v3 & 0x7F) - 114) <= 1u )
            {
              if ( (unsigned __int64)v233 > v231 )
                goto LABEL_586;
              v116 = v3[2];
              v115 = v3[1] & 0xF;
              v117 = v3[3];
            }
            else
            {
              if ( (unsigned __int64)v233 > v231 )
                goto LABEL_586;
              v234 = v114;
              v115 = v3[2] & 0xF;
              if ( (unsigned int)(unsigned __int8)v3[7] + 8 <= v114 )
                v234 = (unsigned __int8)v3[7] + 8;
              v231 = (unsigned __int64)&v3[v234];
              if ( (unsigned __int64)(v3 + 13) <= v231 )
                v116 = v3[12];
              if ( (unsigned __int64)(v3 + 14) <= v231 )
                v117 = v3[13];
            }
            v232 = 1;
LABEL_586:
            if ( v232 )
            {
LABEL_588:
              McTemplateK0pduuuuup_EtwWriteTransfer(
                v231,
                v112,
                (unsigned int)&v320,
                a2,
                *(_DWORD *)(a2 + 48),
                *(_BYTE *)(v112 + 3),
                v113,
                v115,
                v116,
                v117,
                a2);
              goto LABEL_123;
            }
LABEL_587:
            v117 = 0;
            v116 = 0;
            v115 = 0;
            goto LABEL_588;
          }
        }
LABEL_36:
        v27 = *(_QWORD *)(a1 + 24);
        if ( (*(_DWORD *)(v27 + 128) & 4) == 0 && !*(_DWORD *)(v27 + 328) )
          goto LABEL_38;
        v122 = 0;
        if ( (v17 & 0x800) != 0 && (*(_DWORD *)(a1 + 512) & 0x40) != 0 )
        {
          if ( *v19 != 53 )
          {
            if ( *v19 != 27 )
              goto LABEL_38;
            if ( (v19[4] & 1) != 0 )
              goto LABEL_592;
          }
          v122 = 1;
        }
        if ( *v19 != 27 || (v19[4] & 1) == 0 )
        {
LABEL_593:
          if ( !v122 )
            goto LABEL_38;
LABEL_594:
          v35 = StorEtwLoggingEnabled == 0;
          *(_BYTE *)(v7 + 3) = 1;
          *(_QWORD *)(a2 + 56) = 0LL;
          *(_BYTE *)(a2 + 141) = -84;
          *(_DWORD *)(a2 + 48) = 0;
          if ( v35 )
            goto LABEL_652;
          v321 = 0LL;
          IoGetActivityIdIrp(a2, &v321);
          v236 = *(char **)(a2 + 184);
          v237 = *v236;
          if ( *v236 != 15 )
          {
            if ( v237 == 14 )
            {
              if ( (byte_140171462 & 8) != 0 )
                McTemplateK0pd_EtwWriteTransfer(
                  v236,
                  &EventNonReadWriteRequestComplete,
                  &v321,
                  a2,
                  *(_DWORD *)(a2 + 48));
            }
            else if ( v237 == 27 )
            {
              if ( v236[1] != 7 || *((_DWORD *)v236 + 2) )
              {
                if ( (byte_140171462 & 0x20) != 0 )
                  McTemplateK0pd_EtwWriteTransfer(v236, &EventPnpRequestComplete, &v321, a2, *(_DWORD *)(a2 + 48));
              }
              else if ( (byte_140171462 & 0x40) != 0 )
              {
                v238 = *(_DWORD **)(a2 + 56);
                if ( v238 )
                  LODWORD(v3) = *v238;
                McTemplateK0pqd_EtwWriteTransfer(
                  (_DWORD)v236,
                  v235,
                  (unsigned int)&v321,
                  a2,
                  (char)v3,
                  *(_DWORD *)(a2 + 48));
              }
            }
            goto LABEL_652;
          }
          if ( byte_140171461 >= 0 )
          {
LABEL_652:
            IofCompleteRequest((PIRP)a2, 0);
            v256 = (unsigned __int64)HIDWORD(KeGetPcr()[1].LockArray) << 6;
            v257 = *(_DWORD *)(v256 + *(_QWORD *)(a1 + 40));
            while ( (v257 & 1) == 0 )
            {
              v258 = v257;
              v257 = _InterlockedCompareExchange(
                       (volatile signed __int32 *)(v256 + *(_QWORD *)(a1 + 40)),
                       v257 - 2,
                       v257);
              if ( v258 == v257 )
                goto LABEL_658;
            }
            if ( _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 1032), 0xFFFFFFFF) == 1 )
              KeSetEvent((PRKEVENT)(a1 + 520), 0, 0);
LABEL_658:
            if ( *v19 == 53 )
            {
              v71 = WPP_GLOBAL_Control;
              if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                || (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) == 0
                || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
              {
                return 0LL;
              }
              v121 = 17LL;
            }
            else
            {
              if ( *v19 != 27 )
                return 0LL;
              v71 = WPP_GLOBAL_Control;
              if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                || (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) == 0
                || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
              {
                return 0LL;
              }
              v121 = 18LL;
            }
LABEL_668:
            WPP_SF_qq(v71->AttachedDevice, v121, &WPP_e6323699744f33baefc587a6e43a33df_Traceguids, a1, a2);
            return 0LL;
          }
          v239 = *((_QWORD *)v236 + 1);
          v240 = 0;
          v241 = 0;
          v242 = 0;
          v243 = 0;
          v244 = 0;
          if ( *(_BYTE *)(v239 + 2) == 40 )
          {
            v245 = 0LL;
            if ( *(_DWORD *)(v239 + 20) )
              goto LABEL_652;
            v314 = 0;
            if ( !*(_DWORD *)(v239 + 56) )
              goto LABEL_626;
            v246 = (unsigned int *)(v239 + 120);
            v247 = *(_DWORD *)(v239 + 56);
            while ( 1 )
            {
              v248 = *v246;
              if ( (unsigned int)v248 >= 0x80 )
              {
                v249 = *(unsigned int *)(v239 + 16);
                if ( (unsigned int)v248 < (unsigned int)v249 )
                {
                  v250 = *(_DWORD *)(v239 + v248);
                  if ( v250 == 64 )
                  {
                    if ( v248 + 40 <= v249 )
                    {
LABEL_623:
                      if ( *(_BYTE *)(v239 + v248 + 10) )
                        v245 = (unsigned __int8 *)(v248 + v239 + 24);
                      v240 = *(_BYTE *)(v239 + v248 + 8);
                      v243 = 0;
                      v3 = *(_BYTE **)(v239 + v248 + 16);
                      v241 = *(_BYTE *)(v239 + v248 + 9);
LABEL_626:
                      if ( v245 )
                      {
                        LODWORD(v252) = *v245;
                        goto LABEL_633;
                      }
                      goto LABEL_652;
                    }
                  }
                  else
                  {
                    v251 = v250 - 65;
                    if ( v251 )
                    {
                      if ( v251 == 1 && v248 + 40 <= v249 )
                      {
                        if ( *(_DWORD *)(v239 + v248 + 12) )
                          v245 = (unsigned __int8 *)(v248 + v239 + 32);
                        v240 = *(_BYTE *)(v239 + v248 + 8);
                        v243 = 0;
                        v3 = *(_BYTE **)(v239 + v248 + 24);
                        v241 = *(_BYTE *)(v239 + v248 + 9);
                        goto LABEL_626;
                      }
                    }
                    else if ( v248 + 56 <= v249 )
                    {
                      goto LABEL_623;
                    }
                  }
                  v247 = *(_DWORD *)(v239 + 56);
                }
              }
              ++v246;
              if ( ++v314 >= v247 )
              {
                v243 = 0;
                v240 = 0;
                goto LABEL_626;
              }
            }
          }
          LODWORD(v252) = *(unsigned __int8 *)(v239 + 72);
          v3 = *(_BYTE **)(v239 + 32);
          v241 = *(_BYTE *)(v239 + 11);
          v240 = *(_BYTE *)(v239 + 4);
          if ( *(_BYTE *)(v239 + 2) )
            goto LABEL_652;
LABEL_633:
          LOBYTE(v252) = v252 - 8;
          if ( (v252 & 0x5D) != 0 )
            goto LABEL_652;
          if ( *(_BYTE *)(v239 + 3) == 1 || !v3 || !v241 )
            goto LABEL_650;
          v253 = 0;
          v252 = (unsigned __int64)&v3[v241];
          v254 = v3 + 8;
          if ( (unsigned __int8)((*v3 & 0x7F) - 114) <= 1u )
          {
            if ( (unsigned __int64)v254 > v252 )
              goto LABEL_649;
            v243 = v3[2];
            v242 = v3[1] & 0xF;
            v244 = v3[3];
          }
          else
          {
            if ( (unsigned __int64)v254 > v252 )
              goto LABEL_649;
            v255 = v241;
            v242 = v3[2] & 0xF;
            if ( (unsigned int)(unsigned __int8)v3[7] + 8 <= v241 )
              v255 = (unsigned __int8)v3[7] + 8;
            v252 = (unsigned __int64)&v3[v255];
            if ( (unsigned __int64)(v3 + 13) > v252 )
              v243 = 0;
            else
              v243 = v3[12];
            if ( (unsigned __int64)(v3 + 14) <= v252 )
              v244 = v3[13];
          }
          v253 = 1;
LABEL_649:
          if ( v253 )
          {
LABEL_651:
            McTemplateK0pduuuuup_EtwWriteTransfer(
              v252,
              v239,
              (unsigned int)&v321,
              a2,
              *(_DWORD *)(a2 + 48),
              *(_BYTE *)(v239 + 3),
              v240,
              v242,
              v243,
              v244,
              a2);
            goto LABEL_652;
          }
LABEL_650:
          v244 = 0;
          v243 = 0;
          v242 = 0;
          goto LABEL_651;
        }
LABEL_592:
        if ( (*(_DWORD *)(a1 + 512) & 0x20) != 0 )
          goto LABEL_594;
        goto LABEL_593;
      case 10:
        return StorUnitExecuteNvmeSrb(a1, a2);
      case 7:
        v39 = *(_QWORD *)(a2 + 184);
        v40 = *(_QWORD *)(v39 + 8);
        *(_BYTE *)(v39 + 3) |= 1u;
        *(_BYTE *)(v40 + 3) = 0;
        *(_QWORD *)(*(_QWORD *)(a2 + 184) + 24LL) = 0LL;
        if ( *(_BYTE *)(v40 + 2) == 40 )
        {
          v41 = *(unsigned int *)(v40 + 20);
          v42 = *(_DWORD *)(v40 + 24);
        }
        else
        {
          v42 = *(_DWORD *)(v40 + 12);
          v41 = *(unsigned __int8 *)(v40 + 2);
        }
        if ( (qword_140170460 & 0x20) != 0 )
          DbgLogRequest(
            *(_QWORD *)(a1 + 24),
            3,
            a2,
            (unsigned __int8)BYTE2(*(_DWORD *)(a1 + 104)) | ((((unsigned __int8)*(_DWORD *)(a1 + 104) << 8) | (unsigned __int8)BYTE1(*(_DWORD *)(a1 + 104))) << 8),
            0LL,
            0LL,
            0LL);
        v43 = (v42 >> 17) & 4 | 2;
        if ( (v42 & 0x10) == 0 )
          v43 = (v42 >> 17) & 4;
        if ( (v42 & 0x102) != 0x102 && (v42 & 0x80010) == 0 )
        {
          if ( (unsigned int)v41 > 0x20 || (v44 = 0x1000D0000LL, !_bittest64(&v44, v41)) )
            v43 = (unsigned int)v43 | 1;
        }
        RaidStartIoPacket(a1, a2, v43);
        v45 = 259;
        goto LABEL_88;
      case 8:
        v46 = *(_DWORD **)(a1 + 24);
        if ( *v46 == 1094997074 )
        {
          v47 = (__int64)v46 + 467;
        }
        else if ( *v46 == 1314275652 )
        {
          v47 = (__int64)v46 + 259;
        }
        else
        {
          v47 = 91LL;
        }
        v48 = *(_QWORD *)(a2 + 184);
        v49 = *(_QWORD *)(v48 + 8);
        if ( *(_BYTE *)v47 )
        {
          *(_BYTE *)(v48 + 3) |= 1u;
          *(_BYTE *)(v49 + 3) = 0;
          *(_QWORD *)(*(_QWORD *)(a2 + 184) + 24LL) = 0LL;
          if ( *(_BYTE *)(v49 + 2) == 40 )
          {
            v78 = *(unsigned int *)(v49 + 20);
            v79 = *(_DWORD *)(v49 + 24);
          }
          else
          {
            v79 = *(_DWORD *)(v49 + 12);
            v78 = *(unsigned __int8 *)(v49 + 2);
          }
          if ( (qword_140170460 & 0x20) != 0 )
            DbgLogRequest(
              *(_QWORD *)(a1 + 24),
              3,
              a2,
              (unsigned __int8)BYTE2(*(_DWORD *)(a1 + 104)) | ((((unsigned __int8)*(_DWORD *)(a1 + 104) << 8) | (unsigned __int8)BYTE1(*(_DWORD *)(a1 + 104))) << 8),
              0LL,
              0LL,
              0LL);
          v80 = (v79 >> 17) & 4 | 2;
          if ( (v79 & 0x10) == 0 )
            v80 = (v79 >> 17) & 4;
          if ( (v79 & 0x102) != 0x102 && (v79 & 0x80010) == 0 )
          {
            if ( (unsigned int)v78 > 0x20 || (v81 = 0x1000D0000LL, !_bittest64(&v81, v78)) )
              v80 = (unsigned int)v80 | 1;
          }
          RaidStartIoPacket(a1, a2, v80);
          v45 = 259;
        }
        else
        {
          v35 = StorEtwLoggingEnabled == 0;
          *(_BYTE *)(v49 + 3) = 1;
          *(_QWORD *)(a2 + 56) = 0LL;
          *(_BYTE *)(a2 + 141) = -84;
          *(_DWORD *)(a2 + 48) = 0;
          if ( v35 )
            goto LABEL_86;
          v323 = 0LL;
          IoGetActivityIdIrp(a2, &v323);
          v51 = *(char **)(a2 + 184);
          v52 = *v51;
          if ( *v51 != 15 )
          {
            if ( v52 == 14 )
            {
              if ( (byte_140171462 & 8) != 0 )
                McTemplateK0pd_EtwWriteTransfer(v51, &EventNonReadWriteRequestComplete, &v323, a2, *(_DWORD *)(a2 + 48));
            }
            else if ( v52 == 27 )
            {
              if ( v51[1] == 7 && !*((_DWORD *)v51 + 2) )
              {
                if ( (byte_140171462 & 0x40) != 0 )
                {
                  v87 = *(int **)(a2 + 56);
                  if ( v87 )
                    v88 = *v87;
                  else
                    v88 = 0;
                  McTemplateK0pqd_EtwWriteTransfer(v88, v50, (unsigned int)&v323, a2, v88, *(_DWORD *)(a2 + 48));
                }
              }
              else if ( (byte_140171462 & 0x20) != 0 )
              {
                McTemplateK0pd_EtwWriteTransfer(v51, &EventPnpRequestComplete, &v323, a2, *(_DWORD *)(a2 + 48));
              }
            }
            goto LABEL_86;
          }
          if ( byte_140171461 >= 0 )
            goto LABEL_86;
          v123 = *((_QWORD *)v51 + 1);
          v124 = 0;
          v125 = 0;
          v126 = 0;
          v127 = 0;
          v128 = 0;
          v129 = 0LL;
          if ( *(_BYTE *)(v123 + 2) == 40 )
          {
            v130 = 0LL;
            if ( *(_DWORD *)(v123 + 20) )
              goto LABEL_86;
            v311 = 0;
            if ( !*(_DWORD *)(v123 + 56) )
              goto LABEL_807;
            v131 = (unsigned int *)(v123 + 120);
            v132 = *(_DWORD *)(v123 + 56);
            while ( 1 )
            {
              v297 = *v131;
              if ( (unsigned int)v297 >= 0x80 )
              {
                v298 = *(unsigned int *)(v123 + 16);
                if ( (unsigned int)v297 < (unsigned int)v298 )
                {
                  v299 = *(_DWORD *)(v297 + v123);
                  if ( v299 == 64 )
                  {
                    if ( v297 + 40 <= v298 )
                    {
LABEL_804:
                      if ( *(_BYTE *)(v297 + v123 + 10) )
                        v130 = (unsigned __int8 *)(v297 + v123 + 24);
                      v124 = *(_BYTE *)(v297 + v123 + 8);
                      v127 = 0;
                      v129 = *(_BYTE **)(v297 + v123 + 16);
                      v125 = *(_BYTE *)(v297 + v123 + 9);
LABEL_807:
                      if ( v130 )
                      {
                        LODWORD(v301) = *v130;
                        goto LABEL_814;
                      }
                      goto LABEL_86;
                    }
                  }
                  else
                  {
                    v300 = v299 - 65;
                    if ( v300 )
                    {
                      if ( v300 == 1 && v297 + 40 <= v298 )
                      {
                        if ( *(_DWORD *)(v297 + v123 + 12) )
                          v130 = (unsigned __int8 *)(v297 + v123 + 32);
                        v124 = *(_BYTE *)(v297 + v123 + 8);
                        v127 = 0;
                        v129 = *(_BYTE **)(v297 + v123 + 24);
                        v125 = *(_BYTE *)(v297 + v123 + 9);
                        goto LABEL_807;
                      }
                    }
                    else if ( v297 + 56 <= v298 )
                    {
                      goto LABEL_804;
                    }
                  }
                  v132 = *(_DWORD *)(v123 + 56);
                }
              }
              ++v131;
              if ( ++v311 >= v132 )
              {
                v127 = 0;
                v124 = 0;
                goto LABEL_807;
              }
            }
          }
          LODWORD(v301) = *(unsigned __int8 *)(v123 + 72);
          v129 = *(_BYTE **)(v123 + 32);
          v125 = *(_BYTE *)(v123 + 11);
          v124 = *(_BYTE *)(v123 + 4);
          if ( *(_BYTE *)(v123 + 2) )
            goto LABEL_86;
LABEL_814:
          LOBYTE(v301) = (_BYTE)v301 - 8;
          if ( ((unsigned __int8)v301 & 0x5D) == 0 )
          {
            if ( *(_BYTE *)(v123 + 3) == 1 || !v129 || !v125 )
              goto LABEL_831;
            v302 = 0;
            v301 = &v129[v125];
            v303 = v129 + 8;
            if ( (unsigned __int8)((*v129 & 0x7F) - 114) <= 1u )
            {
              if ( v303 > v301 )
                goto LABEL_830;
              v127 = v129[2];
              v126 = v129[1] & 0xF;
              v128 = v129[3];
            }
            else
            {
              if ( v303 > v301 )
                goto LABEL_830;
              v126 = v129[2] & 0xF;
              v304 = v125;
              if ( (unsigned int)(unsigned __int8)v129[7] + 8 <= v125 )
                v304 = (unsigned __int8)v129[7] + 8;
              v301 = v129 + 13;
              v305 = (unsigned __int64)&v129[v304];
              if ( (unsigned __int64)(v129 + 13) > v305 )
                v127 = 0;
              else
                v127 = v129[12];
              if ( (unsigned __int64)(v129 + 14) <= v305 )
                v128 = *v301;
            }
            v302 = 1;
LABEL_830:
            if ( v302 )
            {
LABEL_832:
              McTemplateK0pduuuuup_EtwWriteTransfer(
                (_DWORD)v301,
                (_DWORD)v129,
                (unsigned int)&v323,
                a2,
                *(_DWORD *)(a2 + 48),
                *(_BYTE *)(v123 + 3),
                v124,
                v126,
                v127,
                v128,
                a2);
              goto LABEL_86;
            }
LABEL_831:
            v128 = 0;
            v127 = 0;
            v126 = 0;
            goto LABEL_832;
          }
LABEL_86:
          IofCompleteRequest((PIRP)a2, 0);
          v45 = 0;
        }
        LOBYTE(v3) = v45 != 259;
LABEL_88:
        if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          && (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) != 0
          && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
        {
          WPP_SF_qqD(
            WPP_GLOBAL_Control->AttachedDevice,
            20LL,
            &WPP_e6323699744f33baefc587a6e43a33df_Traceguids,
            a1,
            a2,
            v45);
        }
        if ( (_BYTE)v3 )
        {
          v53 = (unsigned __int64)HIDWORD(KeGetPcr()[1].LockArray) << 6;
          v54 = *(_DWORD *)(v53 + *(_QWORD *)(a1 + 40));
          while ( (v54 & 1) == 0 )
          {
            v55 = v54;
            v54 = _InterlockedCompareExchange((volatile signed __int32 *)(v53 + *(_QWORD *)(a1 + 40)), v54 - 2, v54);
            if ( v55 == v54 )
              return v45;
          }
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 1032), 0xFFFFFFFF) == 1 )
            KeSetEvent((PRKEVENT)(a1 + 520), 0, 0);
        }
        return v45;
    }
    switch ( v16 )
    {
      case 1:
        v45 = RaUnitClaimDeviceSrb(a1, a2);
        LOBYTE(v3) = 1;
        goto LABEL_88;
      case 2:
      case 9:
        v45 = RaidUnitSubmitRequest(a1, a2);
        goto LABEL_88;
      case 4:
        v45 = RaUnitReleaseQueueSrb(a1, a2);
        LOBYTE(v3) = 1;
        goto LABEL_88;
      case 6:
        v45 = RaUnitReleaseDeviceSrb(a1, a2);
        LOBYTE(v3) = 1;
        goto LABEL_88;
      case 16:
      case 19:
      case 32:
        v45 = RaidUnitSubmitResetRequest(a1, a2);
        LOBYTE(v3) = 1;
        goto LABEL_88;
      case 18:
        v45 = RaUnitResetBusSrb(a1, a2);
        LOBYTE(v3) = 1;
        goto LABEL_88;
      case 21:
        v45 = RaUnitFlushQueueSrb(a1, a2);
        LOBYTE(v3) = 1;
        goto LABEL_88;
      case 23:
        v35 = StorEtwLoggingEnabled == 0;
        v45 = -1073741808;
        *(_DWORD *)(a2 + 48) = -1073741808;
        *(_BYTE *)(a2 + 141) = -84;
        if ( v35 )
          goto LABEL_790;
        v322 = 0LL;
        IoGetActivityIdIrp(a2, &v322);
        v279 = *(char **)(a2 + 184);
        v280 = *v279;
        if ( *v279 != 15 )
        {
          if ( v280 == 14 )
          {
            if ( (byte_140171462 & 8) != 0 )
              McTemplateK0pd_EtwWriteTransfer(v279, &EventNonReadWriteRequestComplete, &v322, a2, *(_DWORD *)(a2 + 48));
          }
          else if ( v280 == 27 )
          {
            if ( v279[1] != 7 || *((_DWORD *)v279 + 2) )
            {
              if ( (byte_140171462 & 0x20) != 0 )
                McTemplateK0pd_EtwWriteTransfer(v279, &EventPnpRequestComplete, &v322, a2, *(_DWORD *)(a2 + 48));
            }
            else if ( (byte_140171462 & 0x40) != 0 )
            {
              v281 = *(_DWORD **)(a2 + 56);
              if ( v281 )
                LODWORD(v3) = *v281;
              McTemplateK0pqd_EtwWriteTransfer(
                (_DWORD)v279,
                (_DWORD)v278,
                (unsigned int)&v322,
                a2,
                (char)v3,
                *(_DWORD *)(a2 + 48));
            }
          }
          goto LABEL_790;
        }
        if ( byte_140171461 >= 0 )
          goto LABEL_790;
        v282 = *((_QWORD *)v279 + 1);
        v283 = 0;
        v284 = 0;
        v285 = 0;
        v286 = 0;
        v287 = 0;
        if ( *(_BYTE *)(v282 + 2) == 40 )
        {
          v278 = 0LL;
          if ( *(_DWORD *)(v282 + 20) )
            goto LABEL_790;
          v316 = 0;
          if ( !*(_DWORD *)(v282 + 56) )
            goto LABEL_764;
          v288 = (unsigned int *)(v282 + 120);
          v289 = *(_DWORD *)(v282 + 56);
          while ( 1 )
          {
            v290 = *v288;
            if ( (unsigned int)v290 >= 0x80 )
            {
              v291 = *(unsigned int *)(v282 + 16);
              if ( (unsigned int)v290 < (unsigned int)v291 )
              {
                v292 = *(_DWORD *)(v290 + v282);
                if ( v292 == 64 )
                {
                  if ( v290 + 40 <= v291 )
                  {
LABEL_761:
                    if ( *(_BYTE *)(v290 + v282 + 10) )
                      v278 = (unsigned __int8 *)(v290 + v282 + 24);
                    v283 = *(_BYTE *)(v290 + v282 + 8);
                    v286 = 0;
                    v3 = *(_BYTE **)(v290 + v282 + 16);
                    v284 = *(_BYTE *)(v290 + v282 + 9);
LABEL_764:
                    if ( v278 )
                    {
                      LODWORD(v294) = *v278;
                      goto LABEL_771;
                    }
                    goto LABEL_790;
                  }
                }
                else
                {
                  v293 = v292 - 65;
                  if ( v293 )
                  {
                    if ( v293 == 1 && v290 + 40 <= v291 )
                    {
                      if ( *(_DWORD *)(v290 + v282 + 12) )
                        v278 = (unsigned __int8 *)(v290 + v282 + 32);
                      v283 = *(_BYTE *)(v290 + v282 + 8);
                      v286 = 0;
                      v3 = *(_BYTE **)(v290 + v282 + 24);
                      v284 = *(_BYTE *)(v290 + v282 + 9);
                      goto LABEL_764;
                    }
                  }
                  else if ( v290 + 56 <= v291 )
                  {
                    goto LABEL_761;
                  }
                }
                v289 = *(_DWORD *)(v282 + 56);
              }
            }
            ++v288;
            if ( ++v316 >= v289 )
            {
              v286 = 0;
              v283 = 0;
              goto LABEL_764;
            }
          }
        }
        LODWORD(v294) = *(unsigned __int8 *)(v282 + 72);
        v3 = *(_BYTE **)(v282 + 32);
        v284 = *(_BYTE *)(v282 + 11);
        v283 = *(_BYTE *)(v282 + 4);
        if ( *(_BYTE *)(v282 + 2) )
          goto LABEL_790;
LABEL_771:
        LOBYTE(v294) = v294 - 8;
        if ( (v294 & 0x5D) != 0 )
        {
LABEL_790:
          IofCompleteRequest((PIRP)a2, 0);
          LOBYTE(v3) = 1;
          goto LABEL_88;
        }
        if ( *(_BYTE *)(v282 + 3) == 1 || !v3 || !v284 )
          goto LABEL_788;
        LOBYTE(v278) = 0;
        v294 = (unsigned __int64)&v3[v284];
        v295 = v3 + 8;
        if ( (unsigned __int8)((*v3 & 0x7F) - 114) <= 1u )
        {
          if ( (unsigned __int64)v295 > v294 )
            goto LABEL_787;
          v286 = v3[2];
          v285 = v3[1] & 0xF;
          v287 = v3[3];
        }
        else
        {
          if ( (unsigned __int64)v295 > v294 )
            goto LABEL_787;
          v296 = v284;
          v285 = v3[2] & 0xF;
          if ( (unsigned int)(unsigned __int8)v3[7] + 8 <= v284 )
            v296 = (unsigned __int8)v3[7] + 8;
          v294 = (unsigned __int64)&v3[v296];
          if ( (unsigned __int64)(v3 + 13) > v294 )
            v286 = 0;
          else
            v286 = v3[12];
          if ( (unsigned __int64)(v3 + 14) <= v294 )
            v287 = v3[13];
        }
        LOBYTE(v278) = 1;
LABEL_787:
        if ( !(_BYTE)v278 )
        {
LABEL_788:
          v287 = 0;
          v286 = 0;
          v285 = 0;
        }
        McTemplateK0pduuuuup_EtwWriteTransfer(
          v294,
          (_DWORD)v278,
          (unsigned int)&v322,
          a2,
          *(_DWORD *)(a2 + 48),
          *(_BYTE *)(v282 + 3),
          v283,
          v285,
          v286,
          v287,
          a2);
        goto LABEL_790;
      case 24:
        v45 = RaUnitLockQueueSrb(a1, a2);
        LOBYTE(v3) = 1;
        goto LABEL_88;
      case 25:
        v45 = RaUnitUnlockQueueSrb(a1, a2);
        LOBYTE(v3) = 1;
        goto LABEL_88;
      case 26:
        v45 = RaUnitQuiesceDeviceSrb(a1, a2);
        LOBYTE(v3) = v45 != 259;
        goto LABEL_88;
      default:
        v45 = RaUnitUnknownSrb(v18, a2);
        LOBYTE(v3) = 1;
        goto LABEL_88;
    }
  }
  *(_BYTE *)(v7 + 3) = 36;
  *(_QWORD *)(a2 + 56) = 0LL;
  v83 = (unsigned __int64)HIDWORD(KeGetPcr()[1].LockArray) << 6;
  v84 = *(_DWORD *)(v83 + *(_QWORD *)(a1 + 40));
  while ( (v84 & 1) == 0 )
  {
    v202 = v84;
    v84 = _InterlockedCompareExchange((volatile signed __int32 *)(v83 + *(_QWORD *)(a1 + 40)), v84 - 2, v84);
    if ( v202 == v84 )
      goto LABEL_488;
  }
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 1032), 0xFFFFFFFF) == 1 )
    KeSetEvent((PRKEVENT)(a1 + 520), 0, 0);
LABEL_488:
  v35 = StorEtwLoggingEnabled == 0;
  *(_BYTE *)(a2 + 141) = -84;
  *(_DWORD *)(a2 + 48) = -1073741823;
  if ( v35 )
    goto LABEL_549;
  v318 = 0LL;
  IoGetActivityIdIrp(a2, &v318);
  v204 = *(char **)(a2 + 184);
  v205 = *v204;
  if ( *v204 != 15 )
  {
    if ( v205 == 14 )
    {
      if ( (byte_140171462 & 8) != 0 )
        McTemplateK0pd_EtwWriteTransfer(v203, &EventNonReadWriteRequestComplete, &v318, a2, *(_DWORD *)(a2 + 48));
    }
    else if ( v205 == 27 )
    {
      if ( v204[1] != 7 || *((_DWORD *)v204 + 2) )
      {
        if ( (byte_140171462 & 0x20) != 0 )
          McTemplateK0pd_EtwWriteTransfer(v203, &EventPnpRequestComplete, &v318, a2, *(_DWORD *)(a2 + 48));
      }
      else if ( (byte_140171462 & 0x40) != 0 )
      {
        v206 = *(_DWORD **)(a2 + 56);
        if ( v206 )
          LODWORD(v3) = *v206;
        McTemplateK0pqd_EtwWriteTransfer(v203, (_DWORD)v204, (unsigned int)&v318, a2, (char)v3, *(_DWORD *)(a2 + 48));
      }
    }
    goto LABEL_549;
  }
  if ( byte_140171461 >= 0 )
    goto LABEL_549;
  v207 = *((_QWORD *)v204 + 1);
  v208 = 0;
  v209 = 0;
  v210 = 0;
  v211 = 0;
  v212 = 0;
  if ( *(_BYTE *)(v207 + 2) == 40 )
  {
    v213 = 0LL;
    if ( *(_DWORD *)(v207 + 20) )
      goto LABEL_549;
    v313 = 0;
    if ( !*(_DWORD *)(v207 + 56) )
      goto LABEL_521;
    v214 = (unsigned int *)(v207 + 120);
    v215 = *(_DWORD *)(v207 + 56);
    while ( 1 )
    {
      v216 = *v214;
      if ( (unsigned int)v216 >= 0x80 )
      {
        v217 = *(unsigned int *)(v207 + 16);
        if ( (unsigned int)v216 < (unsigned int)v217 )
        {
          v218 = *(_DWORD *)(v216 + v207);
          if ( v218 == 64 )
          {
            if ( v216 + 40 <= v217 )
            {
              if ( !*(_BYTE *)(v216 + v207 + 10) )
                goto LABEL_519;
LABEL_518:
              v213 = (char *)(v216 + v207 + 24);
LABEL_519:
              v3 = *(_BYTE **)(v216 + v207 + 16);
              goto LABEL_520;
            }
          }
          else
          {
            v219 = v218 - 65;
            if ( v219 )
            {
              if ( v219 == 1 && v216 + 40 <= v217 )
              {
                if ( *(_DWORD *)(v216 + v207 + 12) )
                  v213 = (char *)(v216 + v207 + 32);
                v3 = *(_BYTE **)(v216 + v207 + 24);
LABEL_520:
                v208 = *(_BYTE *)(v216 + v207 + 8);
                v209 = *(_BYTE *)(v216 + v207 + 9);
LABEL_521:
                if ( v213 )
                {
                  v220 = *v213;
                  goto LABEL_530;
                }
                goto LABEL_549;
              }
            }
            else if ( v216 + 56 <= v217 )
            {
              if ( *(_BYTE *)(v216 + v207 + 10) )
                goto LABEL_518;
              goto LABEL_519;
            }
          }
          v215 = *(_DWORD *)(v207 + 56);
        }
      }
      ++v214;
      if ( ++v313 >= v215 )
        goto LABEL_521;
    }
  }
  v220 = *(_BYTE *)(v207 + 72);
  v3 = *(_BYTE **)(v207 + 32);
  v209 = *(_BYTE *)(v207 + 11);
  v208 = *(_BYTE *)(v207 + 4);
  if ( *(_BYTE *)(v207 + 2) )
    goto LABEL_549;
LABEL_530:
  if ( ((v220 - 8) & 0x5D) == 0 )
  {
    if ( *(_BYTE *)(v207 + 3) == 1 || !v3 || !v209 )
      goto LABEL_547;
    v221 = 0;
    v222 = &v3[v209];
    v223 = v3 + 8;
    if ( (unsigned __int8)((*v3 & 0x7F) - 114) <= 1u )
    {
      if ( v223 > v222 )
        goto LABEL_546;
      v211 = v3[2];
      v210 = v3[1] & 0xF;
      v212 = v3[3];
    }
    else
    {
      if ( v223 > v222 )
        goto LABEL_546;
      v224 = v3 + 13;
      v210 = v3[2] & 0xF;
      v225 = v209;
      if ( (unsigned int)(unsigned __int8)v3[7] + 8 <= v209 )
        v225 = (unsigned __int8)v3[7] + 8;
      v226 = (unsigned __int64)&v3[v225];
      if ( (unsigned __int64)v224 <= v226 )
        v211 = v3[12];
      if ( (unsigned __int64)(v3 + 14) > v226 )
        v212 = 0;
      else
        v212 = *v224;
    }
    v221 = 1;
LABEL_546:
    if ( v221 )
    {
LABEL_548:
      McTemplateK0pduuuuup_EtwWriteTransfer(
        *(_DWORD *)(a2 + 48),
        v207,
        (unsigned int)&v318,
        a2,
        *(_DWORD *)(a2 + 48),
        *(_BYTE *)(v207 + 3),
        v208,
        v210,
        v211,
        v212,
        a2);
      goto LABEL_549;
    }
LABEL_547:
    v212 = 0;
    v211 = 0;
    v210 = 0;
    goto LABEL_548;
  }
LABEL_549:
  IofCompleteRequest((PIRP)a2, 0);
  return 3221225473LL;
}
