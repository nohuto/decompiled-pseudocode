/*
 * XREFs of StorUnitStartBypassIo @ 0x1400A23A0
 * Callers:
 *     <none>
 * Callees:
 *     StorEtwIORequestDispatch @ 0x1400023D4 (StorEtwIORequestDispatch.c)
 *     RaidUnitSubmitRequest @ 0x140004620 (RaidUnitSubmitRequest.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x140052DF0 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140052EC8 (McTemplateK0pd_EtwWriteTransfer.c)
 *     WPP_SF_qqD @ 0x140055624 (WPP_SF_qqD.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x1400569AC (McTemplateK0pqd_EtwWriteTransfer.c)
 *     WPP_SF_qqqD @ 0x14007AA40 (WPP_SF_qqqD.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 */

__int64 __fastcall StorUnitStartBypassIo(__int64 a1, __int64 a2)
{
  __int64 v2; // r8
  int v5; // ebx
  int v6; // ecx
  __int64 v7; // r14
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rsi
  unsigned __int64 v11; // rcx
  unsigned __int8 *v12; // rdx
  int v13; // eax
  int *v14; // rax
  const EVENT_DESCRIPTOR *v15; // rdx
  unsigned __int64 v16; // rdx
  _BYTE *v17; // r9
  unsigned __int8 v18; // r10
  char v19; // r12
  char v20; // r11
  char *v21; // r11
  char v22; // r13
  unsigned int v23; // r12d
  unsigned int *v24; // r15
  __int64 v25; // rax
  unsigned __int64 v26; // rsi
  char v27; // si
  char v28; // cl
  char v29; // r8
  _BYTE *v30; // rax
  unsigned int v31; // eax
  char v32; // al
  bool v33; // zf
  unsigned int v34; // ebx
  __int64 v35; // rsi
  unsigned __int64 v36; // rcx
  unsigned __int8 *v37; // rdx
  int v38; // eax
  int *v39; // rax
  const EVENT_DESCRIPTOR *v40; // rdx
  unsigned __int64 v41; // rdx
  _BYTE *v42; // r9
  unsigned __int8 v43; // r10
  char v44; // r12
  int v45; // eax
  char v46; // r11
  char *v47; // r11
  char v48; // r13
  unsigned int v49; // r12d
  unsigned int *v50; // r15
  __int64 v51; // rax
  unsigned __int64 v52; // rsi
  __int64 v53; // r8
  char v54; // si
  char v55; // cl
  char v56; // r8
  _BYTE *v57; // rax
  unsigned int v58; // eax
  char v59; // al
  char v60; // r13
  unsigned int v61; // r12d
  unsigned int *v62; // r15
  unsigned __int64 v63; // rsi
  char v64; // cl
  int v65; // eax
  char v66; // r13
  unsigned int v67; // r12d
  unsigned int *v68; // r15
  __int64 v69; // rax
  unsigned __int64 v70; // rsi
  _DWORD *v71; // rax
  __int64 v72; // rax
  unsigned __int64 v73; // rcx
  __int64 v74; // rdx
  int *v75; // rax
  const EVENT_DESCRIPTOR *v76; // rdx
  unsigned __int64 v77; // rdx
  _BYTE *v78; // r9
  unsigned __int8 v79; // r10
  char v80; // r12
  char v81; // r11
  char *v82; // r11
  char v83; // r13
  unsigned int v84; // r12d
  unsigned int *v85; // r15
  __int64 v86; // rax
  unsigned __int64 v87; // rsi
  char v88; // si
  char v89; // cl
  char v90; // r8
  _BYTE *v91; // rax
  unsigned int v92; // eax
  char v93; // al
  int v94; // r12d
  int v95; // r13d
  char v96; // r13
  unsigned int v97; // r12d
  unsigned int *v98; // r15
  unsigned __int64 v99; // rsi
  __int64 v100; // rcx
  __int64 v101; // rax
  char v102; // r13
  _BYTE *v103; // r9
  unsigned __int8 v104; // r10
  char v105; // r14
  char v106; // si
  int v107; // eax
  char v108; // r11
  char *v109; // r11
  unsigned int v110; // r12d
  unsigned int *v111; // r15
  __int64 v112; // rax
  unsigned __int64 v113; // rsi
  char v114; // cl
  char v115; // r8
  _BYTE *v116; // rax
  unsigned int v117; // eax
  unsigned __int64 v118; // r8
  char v119; // al
  unsigned int v120; // r12d
  unsigned int *v121; // r15
  unsigned __int64 v122; // rsi
  _BYTE *v123; // r8
  char v124; // r13
  unsigned int v125; // r12d
  unsigned int v126; // r11d
  unsigned int *v127; // r10
  __int64 v128; // rax
  unsigned __int64 v129; // r9
  __int64 v130; // r8
  _BYTE *v131; // r9
  unsigned __int8 v132; // r10
  char v133; // r14
  char v134; // r12
  char v135; // si
  char *v136; // rsi
  char v137; // r13
  unsigned int v138; // r12d
  unsigned int *v139; // r15
  __int64 v140; // rax
  unsigned __int64 v141; // r11
  char v142; // r11
  char v143; // cl
  char v144; // r8
  _BYTE *v145; // rax
  unsigned int v146; // eax
  unsigned __int64 v147; // r8
  char v148; // al
  __int64 v150; // [rsp+20h] [rbp-59h]
  __int64 v151; // [rsp+28h] [rbp-51h]
  __int64 v152; // [rsp+30h] [rbp-49h]
  char v153; // [rsp+30h] [rbp-49h]
  char v154; // [rsp+38h] [rbp-41h]
  char v155; // [rsp+40h] [rbp-39h]
  char v156; // [rsp+48h] [rbp-31h]
  __int64 v157; // [rsp+50h] [rbp-29h]
  char v158; // [rsp+60h] [rbp-19h]
  char v159; // [rsp+60h] [rbp-19h]
  char v160; // [rsp+60h] [rbp-19h]
  char v161; // [rsp+60h] [rbp-19h]
  char v162; // [rsp+60h] [rbp-19h]
  char v163; // [rsp+61h] [rbp-18h]
  char v164; // [rsp+61h] [rbp-18h]
  char v165; // [rsp+61h] [rbp-18h]
  char v166; // [rsp+61h] [rbp-18h]
  char v167; // [rsp+61h] [rbp-18h]
  char v168; // [rsp+62h] [rbp-17h]
  char v169; // [rsp+62h] [rbp-17h]
  char v170; // [rsp+62h] [rbp-17h]
  char v171; // [rsp+62h] [rbp-17h]
  char v172; // [rsp+62h] [rbp-17h]
  char v173; // [rsp+62h] [rbp-17h]
  unsigned int v174; // [rsp+64h] [rbp-15h]
  unsigned int v175; // [rsp+64h] [rbp-15h]
  unsigned int v176; // [rsp+64h] [rbp-15h]
  unsigned int v177; // [rsp+64h] [rbp-15h]
  unsigned int v178; // [rsp+64h] [rbp-15h]
  unsigned int v179; // [rsp+64h] [rbp-15h]
  unsigned int v180; // [rsp+64h] [rbp-15h]
  unsigned int v181; // [rsp+64h] [rbp-15h]
  unsigned int v182; // [rsp+64h] [rbp-15h]
  __int64 v183; // [rsp+68h] [rbp-11h]
  GUID v185; // [rsp+78h] [rbp-1h] BYREF
  __int128 v186; // [rsp+88h] [rbp+Fh] BYREF

  v2 = *(_QWORD *)(a1 + 64);
  v183 = v2;
  v5 = 0;
  v6 = *(_DWORD *)v2;
  v7 = 0LL;
  v8 = *(_QWORD *)(a2 + 184);
  --*(_BYTE *)(a2 + 67);
  v8 -= 72LL;
  *(_QWORD *)(a2 + 184) = v8;
  v186 = 0LL;
  *(_QWORD *)(v8 + 40) = a1;
  v9 = *(_QWORD *)(a2 + 184);
  v10 = *(_QWORD *)(v9 + 8);
  if ( v6 != 1431193940 )
  {
    v33 = StorEtwLoggingEnabled == 0;
    *(_QWORD *)(a2 + 56) = 0LL;
    *(_BYTE *)(a2 + 141) = -84;
    *(_DWORD *)(a2 + 48) = -1073741823;
    if ( v33 )
      goto LABEL_71;
    v185 = 0LL;
    IoGetActivityIdIrp(a2, &v185);
    v12 = *(unsigned __int8 **)(a2 + 184);
    if ( *v12 != 14 )
    {
      v13 = *v12 - 15;
      if ( *v12 == 15 )
      {
        if ( byte_140171461 >= 0 )
          goto LABEL_71;
        v16 = *((_QWORD *)v12 + 1);
        v158 = 0;
        v17 = 0LL;
        v18 = 0;
        v163 = 0;
        v19 = 0;
        v168 = 0;
        v20 = 0;
        if ( *(_BYTE *)(v16 + 2) == 40 )
        {
          v21 = 0LL;
          v22 = 0;
          if ( *(_DWORD *)(v16 + 20) )
            goto LABEL_71;
          v23 = 0;
          v174 = *(_DWORD *)(v16 + 56);
          if ( v174 )
          {
            v24 = (unsigned int *)(v16 + 120);
            do
            {
              v25 = *v24;
              if ( (unsigned int)v25 >= 0x80 )
              {
                v26 = *(unsigned int *)(v16 + 16);
                if ( (unsigned int)v25 < (unsigned int)v26 )
                {
                  if ( *(_DWORD *)(v25 + v16) == 64 )
                  {
                    v11 = v25 + 40;
                    if ( v25 + 40 <= v26 )
                    {
                      if ( *(_BYTE *)(v25 + v16 + 10) )
                        v21 = (char *)((unsigned int)v25 + v16 + 24);
                      v17 = *(_BYTE **)(v25 + v16 + 16);
                      goto LABEL_28;
                    }
                  }
                  else
                  {
                    v11 = (unsigned int)(*(_DWORD *)(v25 + v16) - 65);
                    if ( *(_DWORD *)(v25 + v16) == 65 )
                    {
                      v11 = v25 + 56;
                      if ( v25 + 56 <= v26 )
                      {
                        v22 = 1;
                        if ( *(_BYTE *)(v25 + v16 + 10) )
                          v21 = (char *)((unsigned int)v25 + v16 + 24);
                        v17 = *(_BYTE **)((unsigned int)v25 + v16 + 16);
                        v18 = *(_BYTE *)((unsigned int)v25 + v16 + 9);
                        v158 = *(_BYTE *)(v25 + v16 + 8);
                      }
                    }
                    else if ( *(_DWORD *)(v25 + v16) == 66 )
                    {
                      v11 = v25 + 40;
                      if ( v25 + 40 <= v26 )
                      {
                        if ( *(_DWORD *)(v25 + v16 + 12) )
                          v21 = (char *)(v25 + v16 + 32);
                        v17 = *(_BYTE **)(v25 + v16 + 24);
LABEL_28:
                        v27 = *(_BYTE *)(v25 + v16 + 8);
                        v18 = *(_BYTE *)(v25 + v16 + 9);
                        goto LABEL_37;
                      }
                    }
                  }
                  if ( v22 )
                    break;
                }
              }
              ++v23;
              ++v24;
            }
            while ( v23 < v174 );
            v27 = v158;
          }
          else
          {
            v27 = 0;
          }
LABEL_37:
          if ( !v21 )
            goto LABEL_71;
          v28 = *v21;
          v19 = 0;
          v20 = 0;
        }
        else
        {
          v28 = *(_BYTE *)(v16 + 72);
          v17 = *(_BYTE **)(v16 + 32);
          v18 = *(_BYTE *)(v16 + 11);
          v27 = *(_BYTE *)(v16 + 4);
          if ( *(_BYTE *)(v16 + 2) )
            goto LABEL_71;
        }
        LOBYTE(v11) = v28 - 8;
        if ( (v11 & 0x5D) != 0 )
          goto LABEL_71;
        v29 = *(_BYTE *)(v16 + 3);
        if ( v29 == 1 || !v17 || !v18 )
          goto LABEL_64;
        LOBYTE(v16) = 0;
        v11 = (unsigned __int64)&v17[v18];
        v30 = v17 + 8;
        if ( (unsigned __int8)((*v17 & 0x7F) - 114) <= 1u )
        {
          if ( (unsigned __int64)v30 <= v11 )
          {
            LOBYTE(v16) = 1;
            v19 = v17[2];
            LOBYTE(v7) = v17[1] & 0xF;
            v20 = v17[3];
          }
        }
        else
        {
          if ( (unsigned __int64)v30 <= v11 )
          {
            LOBYTE(v7) = v17[2] & 0xF;
            v31 = v18;
            if ( (unsigned int)(unsigned __int8)v17[7] + 8 <= v18 )
              v31 = (unsigned __int8)v17[7] + 8;
            v11 = (unsigned __int64)(v17 + 13);
            v16 = (unsigned __int64)&v17[v31];
            if ( (unsigned __int64)(v17 + 13) > v16 )
              v163 = 0;
            else
              v163 = v17[12];
            if ( (unsigned __int64)(v17 + 14) > v16 )
              v168 = 0;
            else
              v168 = *(_BYTE *)v11;
            LOBYTE(v16) = 1;
          }
          v20 = v168;
          v19 = v163;
        }
        if ( (_BYTE)v16 )
        {
          LOBYTE(v5) = v19;
          v32 = v20;
        }
        else
        {
LABEL_64:
          LOBYTE(v7) = 0;
          v32 = 0;
        }
        v157 = a2;
        v156 = v32;
        v155 = v5;
        v154 = v7;
        v153 = v27;
        LOBYTE(v151) = v29;
        goto LABEL_66;
      }
      goto LABEL_5;
    }
    goto LABEL_67;
  }
  if ( *(_BYTE *)v9 != 15 )
  {
    v33 = StorEtwLoggingEnabled == 0;
    *(_QWORD *)(a2 + 56) = 0LL;
    *(_BYTE *)(a2 + 141) = -84;
    *(_DWORD *)(a2 + 48) = -1073741811;
    if ( v33 )
      goto LABEL_141;
    v185 = 0LL;
    IoGetActivityIdIrp(a2, &v185);
    v37 = *(unsigned __int8 **)(a2 + 184);
    if ( *v37 != 14 )
    {
      v38 = *v37 - 15;
      if ( *v37 != 15 )
      {
LABEL_77:
        if ( v38 != 12 )
          goto LABEL_141;
        if ( v37[1] == 7 && !*((_DWORD *)v37 + 2) )
        {
          if ( (byte_140171462 & 0x40) != 0 )
          {
            v39 = *(int **)(a2 + 56);
            if ( v39 )
              v5 = *v39;
            McTemplateK0pqd_EtwWriteTransfer(v36, (__int64)v37, &v185, a2, v5, *(_DWORD *)(a2 + 48));
          }
          goto LABEL_141;
        }
        if ( (byte_140171462 & 0x20) == 0 )
          goto LABEL_141;
        v40 = &EventPnpRequestComplete;
LABEL_140:
        McTemplateK0pd_EtwWriteTransfer(v36, v40, &v185, a2, *(_DWORD *)(a2 + 48));
        goto LABEL_141;
      }
      if ( byte_140171461 >= 0 )
        goto LABEL_141;
      v41 = *((_QWORD *)v37 + 1);
      v164 = 0;
      v42 = 0LL;
      v43 = 0;
      v159 = 0;
      v44 = 0;
      v169 = 0;
      v45 = *(unsigned __int8 *)(v41 + 2);
      v46 = 0;
      if ( (_BYTE)v45 == 40 )
      {
        v47 = 0LL;
        v48 = 0;
        if ( *(_DWORD *)(v41 + 20) )
          goto LABEL_141;
        v49 = 0;
        v175 = *(_DWORD *)(v41 + 56);
        if ( v175 )
        {
          v50 = (unsigned int *)(v41 + 120);
          while ( 1 )
          {
            v51 = *v50;
            if ( (unsigned int)v51 >= 0x80 )
            {
              v52 = *(unsigned int *)(v41 + 16);
              if ( (unsigned int)v51 < (unsigned int)v52 )
              {
                v53 = (unsigned int)v51;
                if ( *(_DWORD *)(v51 + v41) == 64 )
                {
                  v36 = v51 + 40;
                  if ( v51 + 40 <= v52 )
                    goto LABEL_111;
                }
                else
                {
                  v36 = (unsigned int)(*(_DWORD *)(v51 + v41) - 65);
                  if ( *(_DWORD *)(v51 + v41) == 65 )
                  {
                    v36 = v51 + 56;
                    if ( v51 + 56 <= v52 )
                    {
                      v48 = 1;
                      if ( *(_BYTE *)(v51 + v41 + 10) )
                        v47 = (char *)((unsigned int)v51 + v41 + 24);
                      v42 = *(_BYTE **)((unsigned int)v51 + v41 + 16);
                      v43 = *(_BYTE *)((unsigned int)v51 + v41 + 9);
                      v164 = *(_BYTE *)(v51 + v41 + 8);
                    }
                  }
                  else if ( *(_DWORD *)(v51 + v41) == 66 )
                  {
                    v36 = v51 + 40;
                    if ( v51 + 40 <= v52 )
                      goto LABEL_97;
                  }
                }
                if ( v48 )
                  goto LABEL_108;
              }
            }
            ++v49;
            ++v50;
            if ( v49 >= v175 )
              goto LABEL_108;
          }
        }
        goto LABEL_114;
      }
LABEL_115:
      v55 = *(_BYTE *)(v41 + 72);
      v42 = *(_BYTE **)(v41 + 32);
      v43 = *(_BYTE *)(v41 + 11);
      v54 = *(_BYTE *)(v41 + 4);
      if ( !v45 )
        goto LABEL_116;
      goto LABEL_141;
    }
LABEL_138:
    if ( (byte_140171462 & 8) == 0 )
      goto LABEL_141;
    v40 = (const EVENT_DESCRIPTOR *)&EventNonReadWriteRequestComplete;
    goto LABEL_140;
  }
  if ( !v10 )
  {
    v33 = StorEtwLoggingEnabled == 0;
    *(_QWORD *)(a2 + 56) = 0LL;
    *(_BYTE *)(a2 + 141) = -84;
    *(_DWORD *)(a2 + 48) = -1073741811;
    if ( v33 )
      goto LABEL_141;
    v185 = 0LL;
    IoGetActivityIdIrp(a2, &v185);
    v37 = *(unsigned __int8 **)(a2 + 184);
    if ( *v37 == 14 )
      goto LABEL_138;
    v38 = *v37 - 15;
    if ( *v37 != 15 )
      goto LABEL_77;
    if ( byte_140171461 >= 0 )
      goto LABEL_141;
    v41 = *((_QWORD *)v37 + 1);
    v164 = 0;
    v42 = 0LL;
    v43 = 0;
    v159 = 0;
    v44 = 0;
    v169 = 0;
    v45 = *(unsigned __int8 *)(v41 + 2);
    v46 = 0;
    if ( (_BYTE)v45 != 40 )
      goto LABEL_115;
    v47 = 0LL;
    v60 = 0;
    if ( *(_DWORD *)(v41 + 20) )
      goto LABEL_141;
    v61 = 0;
    v176 = *(_DWORD *)(v41 + 56);
    if ( v176 )
    {
      v62 = (unsigned int *)(v41 + 120);
      while ( 1 )
      {
        v51 = *v62;
        if ( (unsigned int)v51 >= 0x80 )
        {
          v63 = *(unsigned int *)(v41 + 16);
          if ( (unsigned int)v51 < (unsigned int)v63 )
          {
            v53 = (unsigned int)v51;
            if ( *(_DWORD *)(v51 + v41) == 64 )
            {
              v36 = v51 + 40;
              if ( v51 + 40 <= v63 )
                goto LABEL_111;
            }
            else
            {
              v36 = (unsigned int)(*(_DWORD *)(v51 + v41) - 65);
              if ( *(_DWORD *)(v51 + v41) == 65 )
              {
                v36 = v51 + 56;
                if ( v51 + 56 <= v63 )
                {
                  v60 = 1;
                  if ( *(_BYTE *)(v51 + v41 + 10) )
                    v47 = (char *)((unsigned int)v51 + v41 + 24);
                  v42 = *(_BYTE **)((unsigned int)v51 + v41 + 16);
                  v43 = *(_BYTE *)((unsigned int)v51 + v41 + 9);
                  v164 = *(_BYTE *)(v51 + v41 + 8);
                }
              }
              else if ( *(_DWORD *)(v51 + v41) == 66 )
              {
                v36 = v51 + 40;
                if ( v51 + 40 <= v63 )
                  goto LABEL_97;
              }
            }
            if ( v60 )
              goto LABEL_108;
          }
        }
        ++v61;
        ++v62;
        if ( v61 >= v176 )
          goto LABEL_108;
      }
    }
LABEL_114:
    v54 = 0;
    goto LABEL_109;
  }
  v64 = *(_BYTE *)(v10 + 2);
  if ( v64 == 40 )
    v65 = *(_DWORD *)(v10 + 24);
  else
    v65 = *(_DWORD *)(v10 + 12);
  if ( (v65 & 0x4000) != 0 )
  {
    v71 = *(_DWORD **)(v2 + 24);
    if ( *v71 == 1314275652 )
    {
      v72 = (__int64)v71 + 274;
    }
    else if ( *v71 == 1094997074 )
    {
      v72 = (__int64)v71 + 482;
    }
    else
    {
      v72 = 98LL;
    }
    if ( v64 == 40 )
    {
      if ( *(_BYTE *)v72 != 1 )
      {
        v33 = StorEtwLoggingEnabled == 0;
        *(_BYTE *)(v10 + 3) = 6;
        *(_QWORD *)(a2 + 56) = 0LL;
        *(_BYTE *)(a2 + 141) = -84;
        *(_DWORD *)(a2 + 48) = -1073741637;
        if ( v33 )
          goto LABEL_273;
        v185 = 0LL;
        IoGetActivityIdIrp(a2, &v185);
        v74 = *(_QWORD *)(a2 + 184);
        switch ( *(_BYTE *)v74 )
        {
          case 0xE:
            if ( (byte_140171462 & 8) == 0 )
              goto LABEL_273;
            v76 = (const EVENT_DESCRIPTOR *)&EventNonReadWriteRequestComplete;
            break;
          case 0xF:
            if ( byte_140171461 >= 0 )
              goto LABEL_273;
            v77 = *(_QWORD *)(v74 + 8);
            v78 = 0LL;
            v165 = 0;
            v79 = 0;
            v80 = 0;
            v160 = 0;
            v81 = 0;
            v170 = 0;
            if ( *(_BYTE *)(v77 + 2) != 40 )
            {
              v89 = *(_BYTE *)(v77 + 72);
              v78 = *(_BYTE **)(v77 + 32);
              v79 = *(_BYTE *)(v77 + 11);
              v88 = *(_BYTE *)(v77 + 4);
              if ( !*(_BYTE *)(v77 + 2) )
                goto LABEL_248;
              goto LABEL_273;
            }
            v82 = 0LL;
            v83 = 0;
            if ( *(_DWORD *)(v77 + 20) )
              goto LABEL_273;
            v84 = 0;
            v178 = *(_DWORD *)(v77 + 56);
            if ( !v178 )
            {
              v88 = 0;
              goto LABEL_241;
            }
            v85 = (unsigned int *)(v77 + 120);
            while ( 1 )
            {
              v86 = *v85;
              if ( (unsigned int)v86 >= 0x80 )
              {
                v87 = *(unsigned int *)(v77 + 16);
                if ( (unsigned int)v86 < (unsigned int)v87 )
                {
                  if ( *(_DWORD *)(v77 + v86) == 64 )
                  {
                    v73 = v86 + 40;
                    if ( v86 + 40 <= v87 )
                    {
                      if ( *(_BYTE *)(v77 + v86 + 10) )
                        v82 = (char *)((unsigned int)v86 + v77 + 24);
                      v78 = *(_BYTE **)(v77 + v86 + 16);
LABEL_232:
                      v88 = *(_BYTE *)(v77 + v86 + 8);
                      v79 = *(_BYTE *)(v77 + v86 + 9);
LABEL_241:
                      if ( v82 )
                      {
                        v89 = *v82;
                        v80 = 0;
                        v81 = 0;
LABEL_248:
                        LOBYTE(v73) = v89 - 8;
                        if ( (v73 & 0x5D) == 0 )
                        {
                          v90 = *(_BYTE *)(v77 + 3);
                          if ( v90 == 1 || !v78 || !v79 )
                            goto LABEL_268;
                          LOBYTE(v77) = 0;
                          v73 = (unsigned __int64)&v78[v79];
                          v91 = v78 + 8;
                          if ( (unsigned __int8)((*v78 & 0x7F) - 114) <= 1u )
                          {
                            if ( (unsigned __int64)v91 <= v73 )
                            {
                              LOBYTE(v77) = 1;
                              v80 = v78[2];
                              LOBYTE(v7) = v78[1] & 0xF;
                              v81 = v78[3];
                            }
                          }
                          else
                          {
                            if ( (unsigned __int64)v91 <= v73 )
                            {
                              LOBYTE(v7) = v78[2] & 0xF;
                              v92 = v79;
                              if ( (unsigned int)(unsigned __int8)v78[7] + 8 <= v79 )
                                v92 = (unsigned __int8)v78[7] + 8;
                              v73 = (unsigned __int64)(v78 + 13);
                              v77 = (unsigned __int64)&v78[v92];
                              if ( (unsigned __int64)(v78 + 13) > v77 )
                                v160 = 0;
                              else
                                v160 = v78[12];
                              if ( (unsigned __int64)(v78 + 14) > v77 )
                                v170 = 0;
                              else
                                v170 = *(_BYTE *)v73;
                              LOBYTE(v77) = 1;
                            }
                            v81 = v170;
                            v80 = v160;
                          }
                          if ( (_BYTE)v77 )
                          {
                            LOBYTE(v5) = v80;
                            v93 = v81;
                          }
                          else
                          {
LABEL_268:
                            LOBYTE(v7) = 0;
                            v93 = 0;
                          }
                          McTemplateK0pduuuuup_EtwWriteTransfer(
                            v73,
                            v77,
                            &v185,
                            a2,
                            *(_DWORD *)(a2 + 48),
                            v90,
                            v88,
                            v7,
                            v5,
                            v93,
                            a2);
                        }
                      }
                      goto LABEL_273;
                    }
                  }
                  else
                  {
                    v73 = (unsigned int)(*(_DWORD *)(v77 + v86) - 65);
                    if ( *(_DWORD *)(v77 + v86) == 65 )
                    {
                      v73 = v86 + 56;
                      if ( v86 + 56 <= v87 )
                      {
                        v83 = 1;
                        if ( *(_BYTE *)(v77 + v86 + 10) )
                          v82 = (char *)((unsigned int)v86 + v77 + 24);
                        v78 = *(_BYTE **)(v77 + (unsigned int)v86 + 16);
                        v79 = *(_BYTE *)(v77 + (unsigned int)v86 + 9);
                        v165 = *(_BYTE *)(v77 + v86 + 8);
                      }
                    }
                    else if ( *(_DWORD *)(v77 + v86) == 66 )
                    {
                      v73 = v86 + 40;
                      if ( v86 + 40 <= v87 )
                      {
                        if ( *(_DWORD *)(v77 + v86 + 12) )
                          v82 = (char *)(v86 + v77 + 32);
                        v78 = *(_BYTE **)(v77 + v86 + 24);
                        goto LABEL_232;
                      }
                    }
                  }
                  if ( v83 )
                    goto LABEL_240;
                }
              }
              ++v84;
              ++v85;
              if ( v84 >= v178 )
              {
LABEL_240:
                v88 = v165;
                goto LABEL_241;
              }
            }
          case 0x1B:
            if ( *(_BYTE *)(v74 + 1) == 7 && !*(_DWORD *)(v74 + 8) )
            {
              if ( (byte_140171462 & 0x40) != 0 )
              {
                v75 = *(int **)(a2 + 56);
                if ( v75 )
                  v5 = *v75;
                McTemplateK0pqd_EtwWriteTransfer(v73, v74, &v185, a2, v5, *(_DWORD *)(a2 + 48));
              }
              goto LABEL_273;
            }
            if ( (byte_140171462 & 0x20) == 0 )
            {
LABEL_273:
              IofCompleteRequest((PIRP)a2, 0);
              v34 = -1073741637;
              goto LABEL_72;
            }
            v76 = &EventPnpRequestComplete;
            break;
          default:
            goto LABEL_273;
        }
        McTemplateK0pd_EtwWriteTransfer(v73, v76, &v185, a2, *(_DWORD *)(a2 + 48));
        goto LABEL_273;
      }
      v7 = v10;
      v94 = *(_DWORD *)(v10 + 20);
      v95 = *(_DWORD *)(v10 + 24);
      if ( *(_DWORD *)(v10 + 8) != 1397899864 || *(_DWORD *)(v10 + 48) || *(_QWORD *)(v10 + 72) )
      {
        v33 = StorEtwLoggingEnabled == 0;
        *(_BYTE *)(v10 + 3) = 6;
        *(_QWORD *)(a2 + 56) = 0LL;
        *(_BYTE *)(a2 + 141) = -84;
        *(_DWORD *)(a2 + 48) = -1073741811;
        if ( v33 )
          goto LABEL_141;
        v185 = 0LL;
        IoGetActivityIdIrp(a2, &v185);
        v37 = *(unsigned __int8 **)(a2 + 184);
        if ( *v37 == 14 )
          goto LABEL_138;
        v38 = *v37 - 15;
        if ( *v37 != 15 )
          goto LABEL_77;
        if ( byte_140171461 >= 0 )
          goto LABEL_141;
        v41 = *((_QWORD *)v37 + 1);
        v42 = 0LL;
        v164 = 0;
        v43 = 0;
        LOBYTE(v7) = 0;
        v159 = 0;
        v44 = 0;
        v169 = 0;
        v45 = *(unsigned __int8 *)(v41 + 2);
        v46 = 0;
        if ( (_BYTE)v45 != 40 )
          goto LABEL_115;
        v47 = 0LL;
        v96 = 0;
        if ( *(_DWORD *)(v41 + 20) )
          goto LABEL_141;
        v97 = 0;
        v179 = *(_DWORD *)(v41 + 56);
        if ( v179 )
        {
          v98 = (unsigned int *)(v41 + 120);
          while ( 1 )
          {
            v51 = *v98;
            if ( (unsigned int)v51 >= 0x80 )
            {
              v99 = *(unsigned int *)(v41 + 16);
              if ( (unsigned int)v51 < (unsigned int)v99 )
              {
                v53 = (unsigned int)v51;
                if ( *(_DWORD *)(v51 + v41) == 64 )
                {
                  v36 = v51 + 40;
                  if ( v51 + 40 <= v99 )
                  {
LABEL_111:
                    if ( *(_BYTE *)(v51 + v41 + 10) )
                      v47 = (char *)(v53 + v41 + 24);
                    v42 = *(_BYTE **)(v51 + v41 + 16);
                    goto LABEL_100;
                  }
                }
                else
                {
                  v36 = (unsigned int)(*(_DWORD *)(v51 + v41) - 65);
                  if ( *(_DWORD *)(v51 + v41) == 65 )
                  {
                    v36 = v51 + 56;
                    if ( v51 + 56 <= v99 )
                    {
                      v96 = 1;
                      if ( *(_BYTE *)(v51 + v41 + 10) )
                        v47 = (char *)((unsigned int)v51 + v41 + 24);
                      v42 = *(_BYTE **)((unsigned int)v51 + v41 + 16);
                      v43 = *(_BYTE *)((unsigned int)v51 + v41 + 9);
                      v164 = *(_BYTE *)(v51 + v41 + 8);
                    }
                  }
                  else if ( *(_DWORD *)(v51 + v41) == 66 )
                  {
                    v36 = v51 + 40;
                    if ( v51 + 40 <= v99 )
                    {
LABEL_97:
                      if ( *(_DWORD *)(v51 + v41 + 12) )
                        v47 = (char *)(v53 + v41 + 32);
                      v42 = *(_BYTE **)(v51 + v41 + 24);
LABEL_100:
                      v54 = *(_BYTE *)(v51 + v41 + 8);
                      v43 = *(_BYTE *)(v51 + v41 + 9);
                      goto LABEL_109;
                    }
                  }
                }
                if ( v96 )
                  goto LABEL_108;
              }
            }
            ++v97;
            ++v98;
            if ( v97 >= v179 )
            {
LABEL_108:
              v54 = v164;
              goto LABEL_109;
            }
          }
        }
        goto LABEL_114;
      }
    }
    else
    {
      v95 = *(_DWORD *)(v10 + 12);
      v94 = *(unsigned __int8 *)(v10 + 2);
    }
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
    {
      WPP_SF_qqD(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        0x4Cu,
        (__int64)&WPP_e6323699744f33baefc587a6e43a33df_Traceguids,
        v2,
        a2,
        v94);
      v2 = v183;
    }
    if ( (v95 & 0x100000) != 0
      && ((v100 = *(_QWORD *)(v2 + 24), (v101 = *(_QWORD *)(v100 + 4960)) != 0) && (*(_DWORD *)(v101 + 20) & 1) == 0
       || (*(_BYTE *)(v100 + 107) & 4) != 0
       || *(_DWORD *)(v100 + 348) != 1) )
    {
      v33 = StorEtwLoggingEnabled == 0;
      *(_BYTE *)(v10 + 3) = 36;
      *(_QWORD *)(a2 + 56) = 0LL;
      *(_BYTE *)(a2 + 141) = -84;
      *(_DWORD *)(a2 + 48) = -1073741823;
      if ( v33 )
        goto LABEL_71;
      v185 = 0LL;
      IoGetActivityIdIrp(a2, &v185);
      v12 = *(unsigned __int8 **)(a2 + 184);
      if ( *v12 != 14 )
      {
        v13 = *v12 - 15;
        if ( *v12 == 15 )
        {
          if ( byte_140171461 >= 0 )
            goto LABEL_71;
          v16 = *((_QWORD *)v12 + 1);
          v102 = 0;
          v103 = 0LL;
          v161 = 0;
          v104 = 0;
          v166 = 0;
          v105 = 0;
          v106 = 0;
          v107 = *(unsigned __int8 *)(v16 + 2);
          v108 = 0;
          if ( (_BYTE)v107 == 40 )
          {
            v109 = 0LL;
            v171 = 0;
            if ( !*(_DWORD *)(v16 + 20) )
            {
              v110 = 0;
              v180 = *(_DWORD *)(v16 + 56);
              if ( v180 )
              {
                v111 = (unsigned int *)(v16 + 120);
                while ( 1 )
                {
                  v112 = *v111;
                  if ( (unsigned int)v112 >= 0x80 )
                  {
                    v113 = *(unsigned int *)(v16 + 16);
                    if ( (unsigned int)v112 < (unsigned int)v113 )
                    {
                      if ( *(_DWORD *)(v112 + v16) == 64 )
                      {
                        v11 = v112 + 40;
                        if ( v112 + 40 <= v113 )
                          goto LABEL_335;
                      }
                      else
                      {
                        v11 = (unsigned int)(*(_DWORD *)(v112 + v16) - 65);
                        if ( *(_DWORD *)(v112 + v16) == 65 )
                        {
                          v11 = v112 + 56;
                          if ( v112 + 56 <= v113 )
                          {
                            v171 = 1;
                            if ( *(_BYTE *)(v112 + v16 + 10) )
                              v109 = (char *)(v112 + v16 + 24);
                            v102 = *(_BYTE *)(v112 + v16 + 8);
                            v103 = *(_BYTE **)(v112 + v16 + 16);
                            v104 = *(_BYTE *)(v112 + v16 + 9);
                          }
                        }
                        else if ( *(_DWORD *)(v112 + v16) == 66 )
                        {
                          v11 = v112 + 40;
                          if ( v112 + 40 <= v113 )
                            goto LABEL_324;
                        }
                      }
                      if ( v171 )
                        goto LABEL_339;
                    }
                  }
                  ++v110;
                  ++v111;
                  if ( v110 >= v180 )
                    goto LABEL_339;
                }
              }
              goto LABEL_340;
            }
            goto LABEL_71;
          }
LABEL_342:
          v114 = *(_BYTE *)(v16 + 72);
          v103 = *(_BYTE **)(v16 + 32);
          v104 = *(_BYTE *)(v16 + 11);
          v102 = *(_BYTE *)(v16 + 4);
          if ( v107 )
            goto LABEL_71;
LABEL_343:
          LOBYTE(v11) = v114 - 8;
          if ( (v11 & 0x5D) != 0 )
            goto LABEL_71;
          if ( *(_BYTE *)(v16 + 3) == 1 || !v103 || !v104 )
            goto LABEL_363;
          v115 = 0;
          v11 = (unsigned __int64)&v103[v104];
          v116 = v103 + 8;
          if ( (unsigned __int8)((*v103 & 0x7F) - 114) <= 1u )
          {
            if ( (unsigned __int64)v116 <= v11 )
            {
              v115 = 1;
              v106 = v103[2];
              v105 = v103[1] & 0xF;
              v108 = v103[3];
            }
          }
          else
          {
            if ( (unsigned __int64)v116 <= v11 )
            {
              v105 = v103[2] & 0xF;
              v117 = v104;
              if ( (unsigned int)(unsigned __int8)v103[7] + 8 <= v104 )
                v117 = (unsigned __int8)v103[7] + 8;
              v11 = (unsigned __int64)(v103 + 13);
              v118 = (unsigned __int64)&v103[v117];
              if ( (unsigned __int64)(v103 + 13) > v118 )
                v161 = 0;
              else
                v161 = v103[12];
              if ( (unsigned __int64)(v103 + 14) > v118 )
                v166 = 0;
              else
                v166 = *(_BYTE *)v11;
              v115 = 1;
            }
            v106 = v161;
            v108 = v166;
          }
          if ( v115 )
          {
            LOBYTE(v5) = v106;
            v119 = v108;
          }
          else
          {
LABEL_363:
            v105 = 0;
            v119 = 0;
          }
          v157 = a2;
          v156 = v119;
          v155 = v5;
          v154 = v105;
          v153 = v102;
          goto LABEL_365;
        }
        goto LABEL_5;
      }
    }
    else
    {
      if ( !v94 )
      {
        if ( *(_BYTE *)(v10 + 2) != 40 )
        {
          v123 = (_BYTE *)(v10 + 72);
          goto LABEL_414;
        }
        v123 = 0LL;
        v124 = 0;
        if ( *(_BYTE *)(v7 + 2) == 40 && !*(_DWORD *)(v7 + 20) )
        {
          v125 = *(_DWORD *)(v7 + 56);
          v126 = 0;
          if ( v125 )
          {
            v127 = (unsigned int *)(v7 + 120);
            do
            {
              v128 = *v127;
              if ( (unsigned int)v128 >= 0x80 )
              {
                v129 = *(unsigned int *)(v7 + 16);
                if ( (unsigned int)v128 < (unsigned int)v129 )
                {
                  if ( *(_DWORD *)(v128 + v7) == 64 )
                  {
                    if ( v128 + 40 <= v129 )
                    {
                      if ( *(_BYTE *)(v128 + v7 + 10) )
                      {
                        v130 = v7 + 24;
LABEL_412:
                        v123 = (_BYTE *)(v128 + v130);
                      }
                      break;
                    }
                  }
                  else if ( *(_DWORD *)(v128 + v7) == 65 )
                  {
                    if ( v128 + 56 <= v129 )
                    {
                      v124 = 1;
                      if ( !*(_BYTE *)(v128 + v7 + 10) )
                        break;
                      v123 = (_BYTE *)(v128 + v7 + 24);
                    }
                  }
                  else if ( *(_DWORD *)(v128 + v7) == 66 && v128 + 40 <= v129 )
                  {
                    if ( *(_DWORD *)(v128 + v7 + 12) )
                    {
                      v130 = v7 + 32;
                      goto LABEL_412;
                    }
                    break;
                  }
                  if ( v124 )
                    break;
                }
              }
              ++v126;
              ++v127;
            }
            while ( v126 < v125 );
          }
        }
LABEL_414:
        if ( ((*v123 - 8) & 0x5D) == 0 )
        {
          if ( StorEtwLoggingEnabled && (byte_140171461 & 0x1E) != 0 && ((*v123 - 8) & 0x5D) == 0 )
          {
            IoGetActivityIdIrp(a2, &v186);
            StorEtwIORequestDispatch(a2);
          }
          v35 = v183;
          *(_BYTE *)(a2 + 141) = -88;
          v34 = RaidUnitSubmitRequest(v183, a2);
          goto LABEL_476;
        }
        v33 = StorEtwLoggingEnabled == 0;
        *(_BYTE *)(v10 + 3) = 6;
        *(_QWORD *)(a2 + 56) = 0LL;
        *(_BYTE *)(a2 + 141) = -84;
        *(_DWORD *)(a2 + 48) = -1073741823;
        if ( v33 )
          goto LABEL_71;
        v185 = 0LL;
        IoGetActivityIdIrp(a2, &v185);
        v12 = *(unsigned __int8 **)(a2 + 184);
        if ( *v12 != 14 )
        {
          v13 = *v12 - 15;
          if ( *v12 == 15 )
          {
            if ( byte_140171461 >= 0 )
              goto LABEL_71;
            v16 = *((_QWORD *)v12 + 1);
            v131 = 0LL;
            v167 = 0;
            v132 = 0;
            v133 = 0;
            v162 = 0;
            v134 = 0;
            v173 = 0;
            v135 = 0;
            if ( *(_BYTE *)(v16 + 2) != 40 )
            {
              v143 = *(_BYTE *)(v16 + 72);
              v131 = *(_BYTE **)(v16 + 32);
              v132 = *(_BYTE *)(v16 + 11);
              v142 = *(_BYTE *)(v16 + 4);
              if ( *(_BYTE *)(v16 + 2) )
                goto LABEL_71;
              goto LABEL_448;
            }
            v136 = 0LL;
            v137 = 0;
            if ( *(_DWORD *)(v16 + 20) )
              goto LABEL_71;
            v138 = 0;
            v182 = *(_DWORD *)(v16 + 56);
            if ( !v182 )
            {
              v142 = 0;
              goto LABEL_441;
            }
            v139 = (unsigned int *)(v16 + 120);
            while ( 1 )
            {
              v140 = *v139;
              if ( (unsigned int)v140 >= 0x80 )
              {
                v141 = *(unsigned int *)(v16 + 16);
                if ( (unsigned int)v140 < (unsigned int)v141 )
                {
                  if ( *(_DWORD *)(v16 + v140) == 64 )
                  {
                    v11 = v140 + 40;
                    if ( v140 + 40 <= v141 )
                    {
                      if ( *(_BYTE *)(v16 + v140 + 10) )
                        v136 = (char *)((unsigned int)v140 + v16 + 24);
                      v131 = *(_BYTE **)(v16 + v140 + 16);
LABEL_432:
                      v142 = *(_BYTE *)(v16 + v140 + 8);
                      v132 = *(_BYTE *)(v16 + v140 + 9);
LABEL_441:
                      if ( !v136 )
                        goto LABEL_71;
                      v143 = *v136;
                      v134 = 0;
                      v135 = 0;
LABEL_448:
                      LOBYTE(v11) = v143 - 8;
                      if ( (v11 & 0x5D) != 0 )
                        goto LABEL_71;
                      if ( *(_BYTE *)(v16 + 3) == 1 || !v131 || !v132 )
                        goto LABEL_468;
                      v144 = 0;
                      v11 = (unsigned __int64)&v131[v132];
                      v145 = v131 + 8;
                      if ( (unsigned __int8)((*v131 & 0x7F) - 114) <= 1u )
                      {
                        if ( (unsigned __int64)v145 <= v11 )
                        {
                          v144 = 1;
                          v134 = v131[2];
                          v133 = v131[1] & 0xF;
                          v135 = v131[3];
                        }
                      }
                      else
                      {
                        if ( (unsigned __int64)v145 <= v11 )
                        {
                          v133 = v131[2] & 0xF;
                          v146 = v132;
                          if ( (unsigned int)(unsigned __int8)v131[7] + 8 <= v132 )
                            v146 = (unsigned __int8)v131[7] + 8;
                          v11 = (unsigned __int64)(v131 + 13);
                          v147 = (unsigned __int64)&v131[v146];
                          if ( (unsigned __int64)(v131 + 13) > v147 )
                            v162 = 0;
                          else
                            v162 = v131[12];
                          if ( (unsigned __int64)(v131 + 14) > v147 )
                            v173 = 0;
                          else
                            v173 = *(_BYTE *)v11;
                          v144 = 1;
                        }
                        v135 = v173;
                        v134 = v162;
                      }
                      if ( v144 )
                      {
                        LOBYTE(v5) = v134;
                        v148 = v135;
                      }
                      else
                      {
LABEL_468:
                        v133 = 0;
                        v148 = 0;
                      }
                      v157 = a2;
                      v156 = v148;
                      v155 = v5;
                      v154 = v133;
                      v153 = v142;
LABEL_365:
                      LOBYTE(v151) = *(_BYTE *)(v16 + 3);
LABEL_66:
                      LODWORD(v150) = *(_DWORD *)(a2 + 48);
                      McTemplateK0pduuuuup_EtwWriteTransfer(
                        v11,
                        v16,
                        &v185,
                        a2,
                        v150,
                        v151,
                        v153,
                        v154,
                        v155,
                        v156,
                        v157);
                      goto LABEL_71;
                    }
                  }
                  else
                  {
                    v11 = (unsigned int)(*(_DWORD *)(v16 + v140) - 65);
                    if ( *(_DWORD *)(v16 + v140) == 65 )
                    {
                      v11 = v140 + 56;
                      if ( v140 + 56 <= v141 )
                      {
                        v137 = 1;
                        if ( *(_BYTE *)(v16 + v140 + 10) )
                          v136 = (char *)((unsigned int)v140 + v16 + 24);
                        v131 = *(_BYTE **)(v16 + (unsigned int)v140 + 16);
                        v132 = *(_BYTE *)(v16 + (unsigned int)v140 + 9);
                        v167 = *(_BYTE *)(v16 + v140 + 8);
                      }
                    }
                    else if ( *(_DWORD *)(v16 + v140) == 66 )
                    {
                      v11 = v140 + 40;
                      if ( v140 + 40 <= v141 )
                      {
                        if ( *(_DWORD *)(v16 + v140 + 12) )
                          v136 = (char *)(v140 + v16 + 32);
                        v131 = *(_BYTE **)(v16 + v140 + 24);
                        goto LABEL_432;
                      }
                    }
                  }
                  if ( v137 )
                    goto LABEL_440;
                }
              }
              ++v138;
              ++v139;
              if ( v138 >= v182 )
              {
LABEL_440:
                v142 = v167;
                goto LABEL_441;
              }
            }
          }
          goto LABEL_5;
        }
        v33 = (byte_140171462 & 8) == 0;
LABEL_68:
        if ( v33 )
          goto LABEL_71;
        v15 = (const EVENT_DESCRIPTOR *)&EventNonReadWriteRequestComplete;
        goto LABEL_70;
      }
      v33 = StorEtwLoggingEnabled == 0;
      *(_BYTE *)(v10 + 3) = 6;
      *(_QWORD *)(a2 + 56) = 0LL;
      *(_BYTE *)(a2 + 141) = -84;
      *(_DWORD *)(a2 + 48) = -1073741823;
      if ( v33 )
        goto LABEL_71;
      v185 = 0LL;
      IoGetActivityIdIrp(a2, &v185);
      v12 = *(unsigned __int8 **)(a2 + 184);
      if ( *v12 != 14 )
      {
        v13 = *v12 - 15;
        if ( *v12 == 15 )
        {
          if ( byte_140171461 >= 0 )
            goto LABEL_71;
          v16 = *((_QWORD *)v12 + 1);
          v102 = 0;
          v103 = 0LL;
          v161 = 0;
          v104 = 0;
          v166 = 0;
          v105 = 0;
          v106 = 0;
          v107 = *(unsigned __int8 *)(v16 + 2);
          v108 = 0;
          if ( (_BYTE)v107 == 40 )
          {
            v109 = 0LL;
            v172 = 0;
            if ( *(_DWORD *)(v16 + 20) )
              goto LABEL_71;
            v120 = 0;
            v181 = *(_DWORD *)(v16 + 56);
            if ( !v181 )
              goto LABEL_340;
            v121 = (unsigned int *)(v16 + 120);
            while ( 1 )
            {
              v112 = *v121;
              if ( (unsigned int)v112 >= 0x80 )
              {
                v122 = *(unsigned int *)(v16 + 16);
                if ( (unsigned int)v112 < (unsigned int)v122 )
                {
                  if ( *(_DWORD *)(v112 + v16) == 64 )
                  {
                    v11 = v112 + 40;
                    if ( v112 + 40 <= v122 )
                    {
LABEL_335:
                      if ( *(_BYTE *)(v112 + v16 + 10) )
                        v109 = (char *)(v112 + v16 + 24);
                      v103 = *(_BYTE **)(v112 + v16 + 16);
                      goto LABEL_338;
                    }
                  }
                  else
                  {
                    v11 = (unsigned int)(*(_DWORD *)(v112 + v16) - 65);
                    if ( *(_DWORD *)(v112 + v16) == 65 )
                    {
                      v11 = v112 + 56;
                      if ( v112 + 56 <= v122 )
                      {
                        v172 = 1;
                        if ( *(_BYTE *)(v112 + v16 + 10) )
                          v109 = (char *)(v112 + v16 + 24);
                        v102 = *(_BYTE *)(v112 + v16 + 8);
                        v103 = *(_BYTE **)(v112 + v16 + 16);
                        v104 = *(_BYTE *)(v112 + v16 + 9);
                      }
                    }
                    else if ( *(_DWORD *)(v112 + v16) == 66 )
                    {
                      v11 = v112 + 40;
                      if ( v112 + 40 <= v122 )
                      {
LABEL_324:
                        if ( *(_DWORD *)(v112 + v16 + 12) )
                          v109 = (char *)(v112 + v16 + 32);
                        v103 = *(_BYTE **)(v112 + v16 + 24);
LABEL_338:
                        v104 = *(_BYTE *)(v112 + v16 + 9);
                        v102 = *(_BYTE *)(v112 + v16 + 8);
LABEL_339:
                        v106 = 0;
LABEL_340:
                        if ( v109 )
                        {
                          v114 = *v109;
                          v108 = 0;
                          goto LABEL_343;
                        }
                        goto LABEL_71;
                      }
                    }
                  }
                  if ( v172 )
                    goto LABEL_339;
                }
              }
              ++v120;
              ++v121;
              if ( v120 >= v181 )
                goto LABEL_339;
            }
          }
          goto LABEL_342;
        }
LABEL_5:
        if ( v13 != 12 )
          goto LABEL_71;
        if ( v12[1] == 7 && !*((_DWORD *)v12 + 2) )
        {
          if ( (byte_140171462 & 0x40) != 0 )
          {
            v14 = *(int **)(a2 + 56);
            if ( v14 )
              v5 = *v14;
            LODWORD(v151) = *(_DWORD *)(a2 + 48);
            LODWORD(v150) = v5;
            McTemplateK0pqd_EtwWriteTransfer(v11, (__int64)v12, &v185, a2, v150, v151);
          }
          goto LABEL_71;
        }
        if ( (byte_140171462 & 0x20) == 0 )
        {
LABEL_71:
          IofCompleteRequest((PIRP)a2, 0);
          v34 = -1073741823;
          goto LABEL_72;
        }
        v15 = &EventPnpRequestComplete;
LABEL_70:
        LODWORD(v150) = *(_DWORD *)(a2 + 48);
        McTemplateK0pd_EtwWriteTransfer(v11, v15, &v185, a2, v150);
        goto LABEL_71;
      }
    }
LABEL_67:
    v33 = (byte_140171462 & 8) == 0;
    goto LABEL_68;
  }
  v33 = StorEtwLoggingEnabled == 0;
  *(_QWORD *)(a2 + 56) = 0LL;
  *(_BYTE *)(a2 + 141) = -84;
  *(_DWORD *)(a2 + 48) = -1073741811;
  if ( v33 )
    goto LABEL_141;
  v185 = 0LL;
  IoGetActivityIdIrp(a2, &v185);
  v37 = *(unsigned __int8 **)(a2 + 184);
  if ( *v37 == 14 )
    goto LABEL_138;
  v38 = *v37 - 15;
  if ( *v37 != 15 )
    goto LABEL_77;
  if ( byte_140171461 >= 0 )
    goto LABEL_141;
  v41 = *((_QWORD *)v37 + 1);
  v42 = 0LL;
  v164 = 0;
  v43 = 0;
  v44 = 0;
  v159 = 0;
  v46 = 0;
  v169 = 0;
  v45 = *(unsigned __int8 *)(v41 + 2);
  if ( (_BYTE)v45 != 40 )
    goto LABEL_115;
  v47 = 0LL;
  v66 = 0;
  if ( *(_DWORD *)(v41 + 20) )
    goto LABEL_141;
  v67 = 0;
  v177 = *(_DWORD *)(v41 + 56);
  if ( !v177 )
    goto LABEL_114;
  v68 = (unsigned int *)(v41 + 120);
  while ( 1 )
  {
    v69 = *v68;
    if ( (unsigned int)v69 >= 0x80 )
    {
      v70 = *(unsigned int *)(v41 + 16);
      if ( (unsigned int)v69 < (unsigned int)v70 )
        break;
    }
LABEL_194:
    ++v67;
    ++v68;
    if ( v67 >= v177 )
      goto LABEL_108;
  }
  if ( *(_DWORD *)(v41 + v69) != 64 )
  {
    v36 = (unsigned int)(*(_DWORD *)(v41 + v69) - 65);
    if ( *(_DWORD *)(v41 + v69) == 65 )
    {
      v36 = v69 + 56;
      if ( v69 + 56 <= v70 )
      {
        v66 = 1;
        if ( *(_BYTE *)(v41 + v69 + 10) )
          v47 = (char *)((unsigned int)v69 + v41 + 24);
        v42 = *(_BYTE **)(v41 + (unsigned int)v69 + 16);
        v43 = *(_BYTE *)(v41 + (unsigned int)v69 + 9);
        v164 = *(_BYTE *)(v41 + v69 + 8);
      }
    }
    else if ( *(_DWORD *)(v41 + v69) == 66 )
    {
      v36 = v69 + 40;
      if ( v69 + 40 <= v70 )
      {
        if ( *(_DWORD *)(v41 + v69 + 12) )
          v47 = (char *)(v69 + v41 + 32);
        v42 = *(_BYTE **)(v41 + v69 + 24);
        goto LABEL_187;
      }
    }
    goto LABEL_193;
  }
  v36 = v69 + 40;
  if ( v69 + 40 > v70 )
  {
LABEL_193:
    if ( v66 )
      goto LABEL_108;
    goto LABEL_194;
  }
  if ( *(_BYTE *)(v41 + v69 + 10) )
    v47 = (char *)((unsigned int)v69 + v41 + 24);
  v42 = *(_BYTE **)(v41 + v69 + 16);
LABEL_187:
  v54 = *(_BYTE *)(v41 + v69 + 8);
  v43 = *(_BYTE *)(v41 + v69 + 9);
LABEL_109:
  if ( v47 )
  {
    v55 = *v47;
    v44 = 0;
    v46 = 0;
LABEL_116:
    LOBYTE(v36) = v55 - 8;
    if ( (v36 & 0x5D) == 0 )
    {
      v56 = *(_BYTE *)(v41 + 3);
      if ( v56 == 1 || !v42 || !v43 )
        goto LABEL_136;
      LOBYTE(v41) = 0;
      v36 = (unsigned __int64)&v42[v43];
      v57 = v42 + 8;
      if ( (unsigned __int8)((*v42 & 0x7F) - 114) <= 1u )
      {
        if ( (unsigned __int64)v57 <= v36 )
        {
          LOBYTE(v41) = 1;
          v44 = v42[2];
          LOBYTE(v7) = v42[1] & 0xF;
          v46 = v42[3];
        }
      }
      else
      {
        if ( (unsigned __int64)v57 <= v36 )
        {
          LOBYTE(v7) = v42[2] & 0xF;
          v58 = v43;
          if ( (unsigned int)(unsigned __int8)v42[7] + 8 <= v43 )
            v58 = (unsigned __int8)v42[7] + 8;
          v36 = (unsigned __int64)(v42 + 13);
          v41 = (unsigned __int64)&v42[v58];
          if ( (unsigned __int64)(v42 + 13) > v41 )
            v159 = 0;
          else
            v159 = v42[12];
          if ( (unsigned __int64)(v42 + 14) > v41 )
            v169 = 0;
          else
            v169 = *(_BYTE *)v36;
          LOBYTE(v41) = 1;
        }
        v44 = v159;
        v46 = v169;
      }
      if ( (_BYTE)v41 )
      {
        LOBYTE(v5) = v44;
        v59 = v46;
      }
      else
      {
LABEL_136:
        LOBYTE(v7) = 0;
        v59 = 0;
      }
      McTemplateK0pduuuuup_EtwWriteTransfer(v36, v41, &v185, a2, *(_DWORD *)(a2 + 48), v56, v54, v7, v5, v59, a2);
    }
  }
LABEL_141:
  IofCompleteRequest((PIRP)a2, 0);
  v34 = -1073741811;
LABEL_72:
  v35 = v183;
LABEL_476:
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    LODWORD(v152) = v34;
    WPP_SF_qqqD(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      0x4Du,
      (__int64)&WPP_e6323699744f33baefc587a6e43a33df_Traceguids,
      a1,
      v35,
      a2,
      v152);
  }
  return v34;
}
