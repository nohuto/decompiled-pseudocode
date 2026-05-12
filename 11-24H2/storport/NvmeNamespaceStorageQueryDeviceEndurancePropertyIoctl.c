/*
 * XREFs of NvmeNamespaceStorageQueryDeviceEndurancePropertyIoctl @ 0x1401AB7AC
 * Callers:
 *     NvmeNamespaceStorageQueryPropertyIoctl @ 0x1401AF820 (NvmeNamespaceStorageQueryPropertyIoctl.c)
 * Callees:
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x140052DF0 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140052EC8 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x1400569AC (McTemplateK0pqd_EtwWriteTransfer.c)
 *     BuildGetLogPageCommand @ 0x1400BE764 (BuildGetLogPageCommand.c)
 *     NvmeAllocateDmaBuffer @ 0x1400E97F4 (NvmeAllocateDmaBuffer.c)
 *     NvmeFreeDmaBuffer @ 0x1400F8B80 (NvmeFreeDmaBuffer.c)
 *     NvmeControllerGetExtendedCommand @ 0x14012949C (NvmeControllerGetExtendedCommand.c)
 *     NvmeControllerProcessCommand @ 0x140129520 (NvmeControllerProcessCommand.c)
 *     NvmeControllerReclaimExtendedCommand @ 0x140129B08 (NvmeControllerReclaimExtendedCommand.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 */

__int64 __fastcall NvmeNamespaceStorageQueryDeviceEndurancePropertyIoctl(__int64 a1, __int64 a2)
{
  unsigned int v3; // ebx
  _DWORD *v4; // rdx
  bool v6; // zf
  unsigned __int64 v7; // rcx
  __int64 v8; // rdx
  unsigned int *v9; // rax
  const EVENT_DESCRIPTOR *v10; // rdx
  __int64 v11; // rdx
  char v12; // r14
  _BYTE *v13; // r9
  unsigned __int8 v14; // r10
  char v15; // r11
  char v16; // r8
  char v17; // r13
  char *v18; // rsi
  unsigned int v19; // r12d
  unsigned __int64 v20; // r15
  __int64 v21; // r8
  int v22; // ecx
  char v23; // cl
  char v24; // si
  _BYTE *v25; // rax
  char *v26; // r13
  unsigned int v27; // eax
  char v28; // al
  int v29; // ecx
  unsigned __int64 v30; // rcx
  __int64 v31; // rdx
  unsigned int *v32; // rax
  const EVENT_DESCRIPTOR *v33; // rdx
  __int64 v34; // rdx
  char v35; // r14
  _BYTE *v36; // r9
  unsigned __int8 v37; // r10
  char v38; // r11
  char v39; // r8
  char v40; // r13
  char *v41; // rsi
  unsigned int v42; // r12d
  unsigned __int64 v43; // r15
  __int64 v44; // r8
  int v45; // ecx
  char v46; // cl
  char v47; // si
  _BYTE *v48; // rax
  char *v49; // r13
  unsigned int v50; // eax
  char v51; // al
  __int64 v52; // rcx
  __int64 v53; // rdx
  unsigned int *v54; // rax
  __int64 v55; // rcx
  const EVENT_DESCRIPTOR *v56; // rdx
  __int64 v57; // rdx
  char v58; // r14
  _BYTE *v59; // r9
  unsigned __int8 v60; // r10
  char v61; // r11
  char v62; // r8
  unsigned __int8 v63; // r13
  char *v64; // rsi
  unsigned int v65; // r12d
  __int64 v66; // rcx
  unsigned __int64 v67; // r15
  __int64 v68; // r8
  int v69; // ecx
  int v70; // ecx
  char v71; // cl
  char v72; // si
  _BYTE *v73; // rcx
  _BYTE *v74; // rax
  unsigned __int8 *v75; // r13
  unsigned int v76; // eax
  unsigned __int64 v77; // rcx
  char v78; // al
  __int64 v79; // rcx
  unsigned int v80; // ecx
  __int64 v81; // rax
  int v82; // ecx
  unsigned __int64 v83; // rcx
  __int64 v84; // rdx
  unsigned int *v85; // rax
  const EVENT_DESCRIPTOR *v86; // rdx
  __int64 v87; // rdx
  char v88; // r14
  _BYTE *v89; // r9
  unsigned __int8 v90; // r10
  char v91; // r11
  char v92; // r8
  char v93; // r13
  char *v94; // rsi
  unsigned int v95; // r12d
  unsigned __int64 v96; // r15
  __int64 v97; // r8
  int v98; // ecx
  char v99; // cl
  char v100; // si
  _BYTE *v101; // rax
  char *v102; // r13
  unsigned int v103; // eax
  char v104; // al
  __int64 v106; // r8
  PHYSICAL_ADDRESS *ExtendedCommand; // r14
  int v108; // r12d
  __int64 QuadPart; // r8
  unsigned __int64 v110; // rcx
  __int64 v111; // rdx
  unsigned int *v112; // rax
  const EVENT_DESCRIPTOR *v113; // rdx
  __int64 v114; // rdx
  char v115; // r14
  _BYTE *v116; // r9
  unsigned __int8 v117; // r10
  char v118; // r11
  char v119; // r8
  char v120; // r13
  char *v121; // rsi
  unsigned int v122; // r12d
  unsigned __int64 v123; // r15
  __int64 v124; // r8
  int v125; // ecx
  char v126; // cl
  char v127; // si
  _BYTE *v128; // rax
  char *v129; // r13
  unsigned int v130; // eax
  char v131; // al
  __int64 v132; // [rsp+20h] [rbp-89h]
  int v133; // [rsp+20h] [rbp-89h]
  __int64 v134; // [rsp+28h] [rbp-81h]
  __int64 v135; // [rsp+30h] [rbp-79h]
  __int64 v136; // [rsp+38h] [rbp-71h]
  __int64 v137; // [rsp+40h] [rbp-69h]
  __int64 v138; // [rsp+48h] [rbp-61h]
  char v139; // [rsp+60h] [rbp-49h]
  char v140; // [rsp+60h] [rbp-49h]
  char v141; // [rsp+60h] [rbp-49h]
  char v142; // [rsp+60h] [rbp-49h]
  char v143; // [rsp+60h] [rbp-49h]
  char v144; // [rsp+61h] [rbp-48h]
  char v145; // [rsp+61h] [rbp-48h]
  char v146; // [rsp+61h] [rbp-48h]
  char v147; // [rsp+61h] [rbp-48h]
  char v148; // [rsp+61h] [rbp-48h]
  unsigned int v149; // [rsp+64h] [rbp-45h]
  unsigned int v150; // [rsp+64h] [rbp-45h]
  unsigned int v151; // [rsp+64h] [rbp-45h]
  unsigned int v152; // [rsp+64h] [rbp-45h]
  int DmaBuffer; // [rsp+64h] [rbp-45h]
  unsigned int v154; // [rsp+68h] [rbp-41h]
  unsigned int v155; // [rsp+68h] [rbp-41h]
  __int128 v156; // [rsp+70h] [rbp-39h] BYREF
  GUID v157; // [rsp+80h] [rbp-29h] BYREF
  GUID v158; // [rsp+90h] [rbp-19h] BYREF
  GUID v159; // [rsp+A0h] [rbp-9h] BYREF
  GUID v160; // [rsp+B0h] [rbp+7h] BYREF

  v3 = 0;
  v4 = *(_DWORD **)(a2 + 24);
  v156 = 0LL;
  if ( v4 )
  {
    v29 = v4[1];
    if ( v29 )
    {
      *(_QWORD *)(a2 + 56) = 0LL;
      *(_BYTE *)(a2 + 141) = -84;
      if ( v29 != 1 )
      {
        v6 = StorEtwLoggingEnabled == 0;
        *(_DWORD *)(a2 + 48) = -1073741637;
        if ( v6 )
          goto LABEL_137;
        v159 = 0LL;
        IoGetActivityIdIrp(a2, &v159);
        v31 = *(_QWORD *)(a2 + 184);
        switch ( *(_BYTE *)v31 )
        {
          case 0xE:
            if ( (byte_140171462 & 8) == 0 )
              goto LABEL_137;
            v33 = &EventNonReadWriteRequestComplete;
            break;
          case 0xF:
            if ( byte_140171461 >= 0 )
              goto LABEL_137;
            v34 = *(_QWORD *)(v31 + 8);
            v35 = 0;
            v36 = 0LL;
            v140 = 0;
            v37 = 0;
            v38 = 0;
            v39 = 0;
            v40 = 0;
            if ( *(_BYTE *)(v34 + 2) != 40 )
            {
              v46 = *(_BYTE *)(v34 + 72);
              v36 = *(_BYTE **)(v34 + 32);
              v37 = *(_BYTE *)(v34 + 11);
              v35 = *(_BYTE *)(v34 + 4);
              if ( !*(_BYTE *)(v34 + 2) )
                goto LABEL_112;
              goto LABEL_137;
            }
            v41 = 0LL;
            v145 = 0;
            if ( *(_DWORD *)(v34 + 20) )
              goto LABEL_137;
            v42 = 0;
            v150 = *(_DWORD *)(v34 + 56);
            if ( !v150 )
              goto LABEL_109;
            while ( 1 )
            {
              v30 = *(unsigned int *)(v34 + 4LL * v42 + 120);
              if ( (unsigned int)v30 >= 0x80 )
              {
                v43 = *(unsigned int *)(v34 + 16);
                if ( (unsigned int)v30 < (unsigned int)v43 )
                {
                  v44 = (unsigned int)v30;
                  v45 = *(_DWORD *)(v30 + v34) - 64;
                  if ( v45 )
                  {
                    v30 = (unsigned int)(v45 - 1);
                    if ( (_DWORD)v30 )
                    {
                      if ( (_DWORD)v30 == 1 )
                      {
                        v30 = v44 + 40;
                        if ( v44 + 40 <= v43 )
                        {
                          if ( *(_DWORD *)(v44 + v34 + 12) )
                            v41 = (char *)(v44 + v34 + 32);
                          v36 = *(_BYTE **)(v44 + v34 + 24);
LABEL_107:
                          v37 = *(_BYTE *)(v44 + v34 + 9);
                          v35 = *(_BYTE *)(v44 + v34 + 8);
LABEL_108:
                          v39 = 0;
LABEL_109:
                          if ( v41 )
                          {
                            v46 = *v41;
LABEL_112:
                            LOBYTE(v30) = v46 - 8;
                            if ( (v30 & 0x5D) == 0 )
                            {
                              v47 = *(_BYTE *)(v34 + 3);
                              if ( v47 == 1 || !v36 || !v37 )
                                goto LABEL_132;
                              LOBYTE(v34) = 0;
                              v30 = (unsigned __int64)&v36[v37];
                              v48 = v36 + 8;
                              if ( (unsigned __int8)((*v36 & 0x7F) - 114) <= 1u )
                              {
                                if ( (unsigned __int64)v48 <= v30 )
                                {
                                  LOBYTE(v34) = 1;
                                  v39 = v36[2];
                                  v38 = v36[1] & 0xF;
                                  v40 = v36[3];
                                }
                              }
                              else
                              {
                                if ( (unsigned __int64)v48 <= v30 )
                                {
                                  v49 = v36 + 13;
                                  v38 = v36[2] & 0xF;
                                  v50 = v37;
                                  if ( (unsigned int)(unsigned __int8)v36[7] + 8 <= v37 )
                                    v50 = (unsigned __int8)v36[7] + 8;
                                  v30 = (unsigned __int64)&v36[v50];
                                  if ( (unsigned __int64)v49 > v30 )
                                    v140 = 0;
                                  else
                                    v140 = v36[12];
                                  if ( (unsigned __int64)(v36 + 14) > v30 )
                                    v40 = 0;
                                  else
                                    v40 = *v49;
                                  LOBYTE(v34) = 1;
                                }
                                v39 = v140;
                              }
                              if ( (_BYTE)v34 )
                              {
                                LOBYTE(v3) = v39;
                                v51 = v40;
                              }
                              else
                              {
LABEL_132:
                                v38 = 0;
                                v51 = 0;
                              }
                              McTemplateK0pduuuuup_EtwWriteTransfer(
                                v30,
                                v34,
                                &v159,
                                a2,
                                *(_DWORD *)(a2 + 48),
                                v47,
                                v35,
                                v38,
                                v3,
                                v51,
                                a2);
                            }
                          }
                          goto LABEL_137;
                        }
                      }
                    }
                    else
                    {
                      v30 = v44 + 56;
                      if ( v44 + 56 <= v43 )
                      {
                        v145 = 1;
                        if ( *(_BYTE *)(v44 + v34 + 10) )
                          v41 = (char *)(v44 + v34 + 24);
                        v35 = *(_BYTE *)(v44 + v34 + 8);
                        v36 = *(_BYTE **)(v44 + v34 + 16);
                        v37 = *(_BYTE *)(v44 + v34 + 9);
                      }
                    }
                  }
                  else
                  {
                    v30 = v44 + 40;
                    if ( v44 + 40 <= v43 )
                    {
                      if ( *(_BYTE *)(v44 + v34 + 10) )
                        v41 = (char *)(v44 + v34 + 24);
                      v36 = *(_BYTE **)(v44 + v34 + 16);
                      goto LABEL_107;
                    }
                  }
                  if ( v145 )
                    goto LABEL_108;
                }
              }
              if ( ++v42 >= v150 )
                goto LABEL_108;
            }
          case 0x1B:
            if ( *(_BYTE *)(v31 + 1) == 7 && !*(_DWORD *)(v31 + 8) )
            {
              if ( (byte_140171462 & 0x40) != 0 )
              {
                v32 = *(unsigned int **)(a2 + 56);
                if ( v32 )
                  v3 = *v32;
                McTemplateK0pqd_EtwWriteTransfer(v30, v31, &v159, a2, v3, *(_DWORD *)(a2 + 48));
              }
              goto LABEL_137;
            }
            if ( (byte_140171462 & 0x20) == 0 )
            {
LABEL_137:
              v3 = -1073741637;
              goto LABEL_276;
            }
            v33 = &EventPnpRequestComplete;
            break;
          default:
            goto LABEL_137;
        }
        McTemplateK0pd_EtwWriteTransfer(v30, v33, &v159, a2, *(_DWORD *)(a2 + 48));
        goto LABEL_137;
      }
      v6 = StorEtwLoggingEnabled == 0;
      *(_DWORD *)(a2 + 48) = 0;
      if ( v6 )
        goto LABEL_276;
      v160 = 0LL;
      IoGetActivityIdIrp(a2, &v160);
      v53 = *(_QWORD *)(a2 + 184);
      switch ( *(_BYTE *)v53 )
      {
        case 0xE:
          if ( (byte_140171462 & 8) == 0 )
            goto LABEL_276;
          v56 = &EventNonReadWriteRequestComplete;
          break;
        case 0xF:
          if ( byte_140171461 >= 0 )
            goto LABEL_276;
          v57 = *(_QWORD *)(v53 + 8);
          v58 = 0;
          v59 = 0LL;
          v141 = 0;
          v60 = 0;
          v61 = 0;
          v62 = 0;
          v63 = 0;
          if ( *(_BYTE *)(v57 + 2) == 40 )
          {
            v64 = 0LL;
            v146 = 0;
            if ( *(_DWORD *)(v57 + 20) )
              goto LABEL_276;
            v65 = 0;
            v151 = *(_DWORD *)(v57 + 56);
            if ( !v151 )
              goto LABEL_177;
            while ( 1 )
            {
              v66 = *(unsigned int *)(v57 + 4LL * v65 + 120);
              if ( (unsigned int)v66 >= 0x80 )
              {
                v67 = *(unsigned int *)(v57 + 16);
                if ( (unsigned int)v66 < (unsigned int)v67 )
                {
                  v68 = (unsigned int)v66;
                  v69 = *(_DWORD *)(v66 + v57) - 64;
                  if ( v69 )
                  {
                    v70 = v69 - 1;
                    if ( v70 )
                    {
                      if ( v70 == 1 && v68 + 40 <= v67 )
                      {
                        if ( *(_DWORD *)(v68 + v57 + 12) )
                          v64 = (char *)(v68 + v57 + 32);
                        v59 = *(_BYTE **)(v68 + v57 + 24);
LABEL_175:
                        v60 = *(_BYTE *)(v68 + v57 + 9);
                        v58 = *(_BYTE *)(v68 + v57 + 8);
LABEL_176:
                        v62 = 0;
LABEL_177:
                        if ( !v64 )
                          goto LABEL_276;
                        v71 = *v64;
LABEL_180:
                        if ( ((v71 - 8) & 0x5D) == 0 )
                        {
                          v72 = *(_BYTE *)(v57 + 3);
                          if ( v72 == 1 || !v59 || !v60 )
                            goto LABEL_200;
                          LOBYTE(v57) = 0;
                          v73 = &v59[v60];
                          v74 = v59 + 8;
                          if ( (unsigned __int8)((*v59 & 0x7F) - 114) <= 1u )
                          {
                            if ( v74 <= v73 )
                            {
                              LOBYTE(v57) = 1;
                              v62 = v59[2];
                              v61 = v59[1] & 0xF;
                              v63 = v59[3];
                            }
                          }
                          else
                          {
                            if ( v74 <= v73 )
                            {
                              v75 = v59 + 13;
                              v61 = v59[2] & 0xF;
                              v76 = v60;
                              if ( (unsigned int)(unsigned __int8)v59[7] + 8 <= v60 )
                                v76 = (unsigned __int8)v59[7] + 8;
                              v77 = (unsigned __int64)&v59[v76];
                              if ( (unsigned __int64)v75 > v77 )
                                v141 = 0;
                              else
                                v141 = v59[12];
                              if ( (unsigned __int64)(v59 + 14) > v77 )
                                v63 = 0;
                              else
                                v63 = *v75;
                              LOBYTE(v57) = 1;
                            }
                            v62 = v141;
                          }
                          if ( (_BYTE)v57 )
                          {
                            v78 = v62;
                            v79 = v63;
                          }
                          else
                          {
LABEL_200:
                            v61 = 0;
                            v78 = 0;
                            v79 = 0LL;
                          }
                          McTemplateK0pduuuuup_EtwWriteTransfer(
                            v79,
                            v57,
                            &v160,
                            a2,
                            *(_DWORD *)(a2 + 48),
                            v72,
                            v58,
                            v61,
                            v78,
                            v79,
                            a2);
                        }
                        goto LABEL_276;
                      }
                    }
                    else if ( v68 + 56 <= v67 )
                    {
                      v146 = 1;
                      if ( *(_BYTE *)(v68 + v57 + 10) )
                        v64 = (char *)(v68 + v57 + 24);
                      v58 = *(_BYTE *)(v68 + v57 + 8);
                      v59 = *(_BYTE **)(v68 + v57 + 16);
                      v60 = *(_BYTE *)(v68 + v57 + 9);
                    }
                  }
                  else if ( v68 + 40 <= v67 )
                  {
                    if ( *(_BYTE *)(v68 + v57 + 10) )
                      v64 = (char *)(v68 + v57 + 24);
                    v59 = *(_BYTE **)(v68 + v57 + 16);
                    goto LABEL_175;
                  }
                  if ( v146 )
                    goto LABEL_176;
                }
              }
              if ( ++v65 >= v151 )
                goto LABEL_176;
            }
          }
          v71 = *(_BYTE *)(v57 + 72);
          v59 = *(_BYTE **)(v57 + 32);
          v60 = *(_BYTE *)(v57 + 11);
          v58 = *(_BYTE *)(v57 + 4);
          if ( *(_BYTE *)(v57 + 2) )
            goto LABEL_276;
          goto LABEL_180;
        case 0x1B:
          if ( *(_BYTE *)(v53 + 1) == 7 && !*(_DWORD *)(v53 + 8) )
          {
            if ( (byte_140171462 & 0x40) != 0 )
            {
              v54 = *(unsigned int **)(a2 + 56);
              if ( v54 )
                v55 = *v54;
              else
                v55 = 0LL;
              McTemplateK0pqd_EtwWriteTransfer(v55, v53, &v160, a2, v55, *(_DWORD *)(a2 + 48));
            }
            goto LABEL_276;
          }
          if ( (byte_140171462 & 0x20) == 0 )
            goto LABEL_276;
          v56 = &EventPnpRequestComplete;
          break;
        default:
          goto LABEL_276;
      }
      McTemplateK0pd_EtwWriteTransfer(v52, v56, &v160, a2, *(_DWORD *)(a2 + 48));
      goto LABEL_276;
    }
    v80 = *(_DWORD *)(*(_QWORD *)(a2 + 184) + 8LL);
    if ( v80 < 0x38 )
    {
      if ( v80 < 8 )
      {
        v82 = -1073741789;
        v81 = 0LL;
      }
      else
      {
        *v4 = 56;
        v81 = 8LL;
        v4[1] = 56;
        v82 = 0;
      }
      *(_QWORD *)(a2 + 56) = v81;
      v6 = StorEtwLoggingEnabled == 0;
      v152 = v82;
      *(_BYTE *)(a2 + 141) = -84;
      *(_DWORD *)(a2 + 48) = v82;
      if ( v6 )
        goto LABEL_275;
      v157 = 0LL;
      IoGetActivityIdIrp(a2, &v157);
      v84 = *(_QWORD *)(a2 + 184);
      switch ( *(_BYTE *)v84 )
      {
        case 0xE:
          if ( (byte_140171462 & 8) == 0 )
            goto LABEL_275;
          v133 = *(_DWORD *)(a2 + 48);
          v86 = &EventNonReadWriteRequestComplete;
          break;
        case 0xF:
          if ( byte_140171461 >= 0 )
            goto LABEL_275;
          v87 = *(_QWORD *)(v84 + 8);
          v88 = 0;
          v89 = 0LL;
          v142 = 0;
          v90 = 0;
          v91 = 0;
          v92 = 0;
          v93 = 0;
          if ( *(_BYTE *)(v87 + 2) != 40 )
          {
            v99 = *(_BYTE *)(v87 + 72);
            v89 = *(_BYTE **)(v87 + 32);
            v90 = *(_BYTE *)(v87 + 11);
            v88 = *(_BYTE *)(v87 + 4);
            if ( !*(_BYTE *)(v87 + 2) )
              goto LABEL_250;
            goto LABEL_275;
          }
          v94 = 0LL;
          v147 = 0;
          if ( *(_DWORD *)(v87 + 20) )
            goto LABEL_275;
          v95 = 0;
          v154 = *(_DWORD *)(v87 + 56);
          if ( !v154 )
            goto LABEL_247;
          while ( 1 )
          {
            v83 = *(unsigned int *)(v87 + 4LL * v95 + 120);
            if ( (unsigned int)v83 >= 0x80 )
            {
              v96 = *(unsigned int *)(v87 + 16);
              if ( (unsigned int)v83 < (unsigned int)v96 )
              {
                v97 = (unsigned int)v83;
                v98 = *(_DWORD *)(v87 + v83) - 64;
                if ( v98 )
                {
                  v83 = (unsigned int)(v98 - 1);
                  if ( (_DWORD)v83 )
                  {
                    if ( (_DWORD)v83 == 1 )
                    {
                      v83 = v97 + 40;
                      if ( v97 + 40 <= v96 )
                      {
                        if ( *(_DWORD *)(v87 + v97 + 12) )
                          v94 = (char *)(v97 + v87 + 32);
                        v89 = *(_BYTE **)(v87 + v97 + 24);
LABEL_245:
                        v90 = *(_BYTE *)(v87 + v97 + 9);
                        v88 = *(_BYTE *)(v87 + v97 + 8);
LABEL_246:
                        v92 = 0;
LABEL_247:
                        if ( v94 )
                        {
                          v99 = *v94;
LABEL_250:
                          LOBYTE(v83) = v99 - 8;
                          if ( (v83 & 0x5D) == 0 )
                          {
                            v100 = *(_BYTE *)(v87 + 3);
                            if ( v100 == 1 || !v89 || !v90 )
                              goto LABEL_270;
                            LOBYTE(v87) = 0;
                            v83 = (unsigned __int64)&v89[v90];
                            v101 = v89 + 8;
                            if ( (unsigned __int8)((*v89 & 0x7F) - 114) <= 1u )
                            {
                              if ( (unsigned __int64)v101 <= v83 )
                              {
                                LOBYTE(v87) = 1;
                                v92 = v89[2];
                                v91 = v89[1] & 0xF;
                                v93 = v89[3];
                              }
                            }
                            else
                            {
                              if ( (unsigned __int64)v101 <= v83 )
                              {
                                v102 = v89 + 13;
                                v91 = v89[2] & 0xF;
                                v103 = v90;
                                if ( (unsigned int)(unsigned __int8)v89[7] + 8 <= v90 )
                                  v103 = (unsigned __int8)v89[7] + 8;
                                v83 = (unsigned __int64)&v89[v103];
                                if ( (unsigned __int64)v102 > v83 )
                                  v142 = 0;
                                else
                                  v142 = v89[12];
                                if ( (unsigned __int64)(v89 + 14) > v83 )
                                  v93 = 0;
                                else
                                  v93 = *v102;
                                LOBYTE(v87) = 1;
                              }
                              v92 = v142;
                            }
                            if ( (_BYTE)v87 )
                            {
                              LOBYTE(v3) = v92;
                              v104 = v93;
                            }
                            else
                            {
LABEL_270:
                              v91 = 0;
                              v104 = 0;
                            }
                            McTemplateK0pduuuuup_EtwWriteTransfer(
                              v83,
                              v87,
                              &v157,
                              a2,
                              *(_DWORD *)(a2 + 48),
                              v100,
                              v88,
                              v91,
                              v3,
                              v104,
                              a2);
                          }
                        }
                        goto LABEL_275;
                      }
                    }
                  }
                  else
                  {
                    v83 = v97 + 56;
                    if ( v97 + 56 <= v96 )
                    {
                      v147 = 1;
                      if ( *(_BYTE *)(v87 + v97 + 10) )
                        v94 = (char *)(v97 + v87 + 24);
                      v88 = *(_BYTE *)(v87 + v97 + 8);
                      v89 = *(_BYTE **)(v87 + v97 + 16);
                      v90 = *(_BYTE *)(v87 + v97 + 9);
                    }
                  }
                }
                else
                {
                  v83 = v97 + 40;
                  if ( v97 + 40 <= v96 )
                  {
                    if ( *(_BYTE *)(v87 + v97 + 10) )
                      v94 = (char *)(v97 + v87 + 24);
                    v89 = *(_BYTE **)(v87 + v97 + 16);
                    goto LABEL_245;
                  }
                }
                if ( v147 )
                  goto LABEL_246;
              }
            }
            if ( ++v95 >= v154 )
              goto LABEL_246;
          }
        case 0x1B:
          if ( *(_BYTE *)(v84 + 1) == 7 && !*(_DWORD *)(v84 + 8) )
          {
            if ( (byte_140171462 & 0x40) != 0 )
            {
              v85 = *(unsigned int **)(a2 + 56);
              if ( v85 )
                v3 = *v85;
              McTemplateK0pqd_EtwWriteTransfer(v83, v84, &v157, a2, v3, *(_DWORD *)(a2 + 48));
            }
            goto LABEL_275;
          }
          if ( (byte_140171462 & 0x20) == 0 )
          {
LABEL_275:
            v3 = v152;
            goto LABEL_276;
          }
          v86 = &EventPnpRequestComplete;
          v133 = *(_DWORD *)(a2 + 48);
          break;
        default:
          goto LABEL_275;
      }
      McTemplateK0pd_EtwWriteTransfer(v83, v86, &v157, a2, v133);
      goto LABEL_275;
    }
    ExtendedCommand = NvmeControllerGetExtendedCommand(*(union _SLIST_HEADER **)(a1 + 16));
    if ( ExtendedCommand )
    {
      DmaBuffer = NvmeAllocateDmaBuffer(*(_QWORD *)(a1 + 16), 0x200u, v106, (void **)&v156, (_QWORD *)&v156 + 1, 0);
      v108 = DmaBuffer;
      if ( DmaBuffer >= 0 )
      {
        *(_DWORD *)(ExtendedCommand->QuadPart + 4256) |= 1u;
        *(_DWORD *)(ExtendedCommand->QuadPart + 4256) |= 0x20u;
        *(_DWORD *)(ExtendedCommand->QuadPart + 4256) |= 2u;
        *(_DWORD *)(ExtendedCommand->QuadPart + 4256) &= ~0x40u;
        *(_WORD *)(ExtendedCommand->QuadPart + 4252) = 0;
        *(_QWORD *)(ExtendedCommand->QuadPart + 4184) = a2;
        *(_QWORD *)(ExtendedCommand->QuadPart + 4216) = a1;
        *(_QWORD *)(ExtendedCommand->QuadPart + 4192) = NvmeNamespaceQueryDeviceEndurancePropertyCompletion;
        *(_QWORD *)(ExtendedCommand->QuadPart + 4200) = ExtendedCommand;
        *(_OWORD *)(ExtendedCommand->QuadPart + 4160) = v156;
        *(_DWORD *)(ExtendedCommand->QuadPart + 4248) = 512;
        QuadPart = ExtendedCommand->QuadPart;
        LOBYTE(QuadPart) = 9;
        BuildGetLogPageCommand(
          *(_QWORD *)(a1 + 16),
          ExtendedCommand->QuadPart + 4096,
          QuadPart,
          0x200u,
          *((__int64 *)&v156 + 1),
          *(_DWORD *)(a1 + 56),
          0LL,
          *(_WORD *)(*(_QWORD *)(a1 + 176) + 102LL),
          ExtendedCommand->QuadPart,
          ExtendedCommand[1].QuadPart);
        DmaBuffer = NvmeControllerProcessCommand(*(_QWORD *)(a1 + 16), ExtendedCommand);
        v108 = DmaBuffer;
        if ( DmaBuffer >= 0 )
          return 259LL;
      }
      *(_QWORD *)(a2 + 56) = 0LL;
      _interlockedbittestandreset((volatile signed __int32 *)(ExtendedCommand->QuadPart + 4256), 3u);
      NvmeControllerReclaimExtendedCommand(*(union _SLIST_HEADER **)(a1 + 16), (__int64)ExtendedCommand);
    }
    else
    {
      v108 = -1073741670;
      *(_QWORD *)(a2 + 56) = 0LL;
      DmaBuffer = -1073741670;
    }
    if ( (_QWORD)v156 )
      NvmeFreeDmaBuffer(*(_QWORD *)(a1 + 16), 0x200u, v106, v156, *((__int64 *)&v156 + 1));
    v6 = StorEtwLoggingEnabled == 0;
    *(_BYTE *)(a2 + 141) = -84;
    *(_DWORD *)(a2 + 48) = v108;
    if ( v6 )
      goto LABEL_350;
    v157 = 0LL;
    IoGetActivityIdIrp(a2, &v157);
    v111 = *(_QWORD *)(a2 + 184);
    switch ( *(_BYTE *)v111 )
    {
      case 0xE:
        if ( (byte_140171462 & 8) == 0 )
          goto LABEL_350;
        v113 = &EventNonReadWriteRequestComplete;
        break;
      case 0xF:
        if ( byte_140171461 >= 0 )
          goto LABEL_350;
        v114 = *(_QWORD *)(v111 + 8);
        v115 = 0;
        v116 = 0LL;
        v143 = 0;
        v117 = 0;
        v118 = 0;
        v119 = 0;
        v120 = 0;
        if ( *(_BYTE *)(v114 + 2) != 40 )
        {
          v126 = *(_BYTE *)(v114 + 72);
          v116 = *(_BYTE **)(v114 + 32);
          v117 = *(_BYTE *)(v114 + 11);
          v115 = *(_BYTE *)(v114 + 4);
          if ( !*(_BYTE *)(v114 + 2) )
            goto LABEL_325;
          goto LABEL_350;
        }
        v121 = 0LL;
        v148 = 0;
        if ( *(_DWORD *)(v114 + 20) )
          goto LABEL_350;
        v122 = 0;
        v155 = *(_DWORD *)(v114 + 56);
        if ( !v155 )
          goto LABEL_322;
        while ( 1 )
        {
          v110 = *(unsigned int *)(v114 + 4LL * v122 + 120);
          if ( (unsigned int)v110 >= 0x80 )
          {
            v123 = *(unsigned int *)(v114 + 16);
            if ( (unsigned int)v110 < (unsigned int)v123 )
            {
              v124 = (unsigned int)v110;
              v125 = *(_DWORD *)(v114 + v110) - 64;
              if ( v125 )
              {
                v110 = (unsigned int)(v125 - 1);
                if ( (_DWORD)v110 )
                {
                  if ( (_DWORD)v110 == 1 )
                  {
                    v110 = v124 + 40;
                    if ( v124 + 40 <= v123 )
                    {
                      if ( *(_DWORD *)(v114 + v124 + 12) )
                        v121 = (char *)(v124 + v114 + 32);
                      v116 = *(_BYTE **)(v114 + v124 + 24);
LABEL_320:
                      v117 = *(_BYTE *)(v114 + v124 + 9);
                      v115 = *(_BYTE *)(v114 + v124 + 8);
LABEL_321:
                      v119 = 0;
LABEL_322:
                      if ( v121 )
                      {
                        v126 = *v121;
LABEL_325:
                        LOBYTE(v110) = v126 - 8;
                        if ( (v110 & 0x5D) == 0 )
                        {
                          v127 = *(_BYTE *)(v114 + 3);
                          if ( v127 == 1 || !v116 || !v117 )
                            goto LABEL_345;
                          LOBYTE(v114) = 0;
                          v110 = (unsigned __int64)&v116[v117];
                          v128 = v116 + 8;
                          if ( (unsigned __int8)((*v116 & 0x7F) - 114) <= 1u )
                          {
                            if ( (unsigned __int64)v128 <= v110 )
                            {
                              LOBYTE(v114) = 1;
                              v119 = v116[2];
                              v118 = v116[1] & 0xF;
                              v120 = v116[3];
                            }
                          }
                          else
                          {
                            if ( (unsigned __int64)v128 <= v110 )
                            {
                              v129 = v116 + 13;
                              v118 = v116[2] & 0xF;
                              v130 = v117;
                              if ( (unsigned int)(unsigned __int8)v116[7] + 8 <= v117 )
                                v130 = (unsigned __int8)v116[7] + 8;
                              v110 = (unsigned __int64)&v116[v130];
                              if ( (unsigned __int64)v129 > v110 )
                                v143 = 0;
                              else
                                v143 = v116[12];
                              if ( (unsigned __int64)(v116 + 14) > v110 )
                                v120 = 0;
                              else
                                v120 = *v129;
                              LOBYTE(v114) = 1;
                            }
                            v119 = v143;
                          }
                          if ( (_BYTE)v114 )
                          {
                            LOBYTE(v3) = v119;
                            v131 = v120;
                          }
                          else
                          {
LABEL_345:
                            v118 = 0;
                            v131 = 0;
                          }
                          LOBYTE(v138) = v131;
                          LOBYTE(v137) = v3;
                          LOBYTE(v136) = v118;
                          LOBYTE(v135) = v115;
                          LOBYTE(v134) = v127;
                          LODWORD(v132) = *(_DWORD *)(a2 + 48);
                          McTemplateK0pduuuuup_EtwWriteTransfer(
                            v110,
                            v114,
                            &v157,
                            a2,
                            v132,
                            v134,
                            v135,
                            v136,
                            v137,
                            v138,
                            a2);
                        }
                      }
                      goto LABEL_350;
                    }
                  }
                }
                else
                {
                  v110 = v124 + 56;
                  if ( v124 + 56 <= v123 )
                  {
                    v148 = 1;
                    if ( *(_BYTE *)(v114 + v124 + 10) )
                      v121 = (char *)(v124 + v114 + 24);
                    v115 = *(_BYTE *)(v114 + v124 + 8);
                    v116 = *(_BYTE **)(v114 + v124 + 16);
                    v117 = *(_BYTE *)(v114 + v124 + 9);
                  }
                }
              }
              else
              {
                v110 = v124 + 40;
                if ( v124 + 40 <= v123 )
                {
                  if ( *(_BYTE *)(v114 + v124 + 10) )
                    v121 = (char *)(v124 + v114 + 24);
                  v116 = *(_BYTE **)(v114 + v124 + 16);
                  goto LABEL_320;
                }
              }
              if ( v148 )
                goto LABEL_321;
            }
          }
          if ( ++v122 >= v155 )
            goto LABEL_321;
        }
      case 0x1B:
        if ( *(_BYTE *)(v111 + 1) == 7 && !*(_DWORD *)(v111 + 8) )
        {
          if ( (byte_140171462 & 0x40) != 0 )
          {
            v112 = *(unsigned int **)(a2 + 56);
            if ( v112 )
              v3 = *v112;
            LODWORD(v134) = *(_DWORD *)(a2 + 48);
            LODWORD(v132) = v3;
            McTemplateK0pqd_EtwWriteTransfer(v110, v111, &v157, a2, v132, v134);
          }
          goto LABEL_350;
        }
        if ( (byte_140171462 & 0x20) == 0 )
        {
LABEL_350:
          IofCompleteRequest((PIRP)a2, 0);
          return (unsigned int)DmaBuffer;
        }
        v113 = &EventPnpRequestComplete;
        break;
      default:
        goto LABEL_350;
    }
    LODWORD(v132) = *(_DWORD *)(a2 + 48);
    McTemplateK0pd_EtwWriteTransfer(v110, v113, &v157, a2, v132);
    goto LABEL_350;
  }
  v6 = StorEtwLoggingEnabled == 0;
  *(_QWORD *)(a2 + 56) = 0LL;
  *(_BYTE *)(a2 + 141) = -84;
  *(_DWORD *)(a2 + 48) = -1073741811;
  if ( v6 )
    goto LABEL_68;
  v158 = 0LL;
  IoGetActivityIdIrp(a2, &v158);
  v8 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)v8 == 14 )
  {
    if ( (byte_140171462 & 8) == 0 )
      goto LABEL_68;
    v10 = &EventNonReadWriteRequestComplete;
    goto LABEL_67;
  }
  if ( *(_BYTE *)v8 != 15 )
  {
    if ( *(_BYTE *)v8 != 27 )
      goto LABEL_68;
    if ( *(_BYTE *)(v8 + 1) == 7 && !*(_DWORD *)(v8 + 8) )
    {
      if ( (byte_140171462 & 0x40) != 0 )
      {
        v9 = *(unsigned int **)(a2 + 56);
        if ( v9 )
          v3 = *v9;
        McTemplateK0pqd_EtwWriteTransfer(v7, v8, &v158, a2, v3, *(_DWORD *)(a2 + 48));
      }
      goto LABEL_68;
    }
    if ( (byte_140171462 & 0x20) == 0 )
      goto LABEL_68;
    v10 = &EventPnpRequestComplete;
LABEL_67:
    McTemplateK0pd_EtwWriteTransfer(v7, v10, &v158, a2, *(_DWORD *)(a2 + 48));
    goto LABEL_68;
  }
  if ( byte_140171461 >= 0 )
    goto LABEL_68;
  v11 = *(_QWORD *)(v8 + 8);
  v12 = 0;
  v13 = 0LL;
  v139 = 0;
  v14 = 0;
  v15 = 0;
  v16 = 0;
  v17 = 0;
  if ( *(_BYTE *)(v11 + 2) != 40 )
  {
    v23 = *(_BYTE *)(v11 + 72);
    v13 = *(_BYTE **)(v11 + 32);
    v14 = *(_BYTE *)(v11 + 11);
    v12 = *(_BYTE *)(v11 + 4);
    if ( !*(_BYTE *)(v11 + 2) )
      goto LABEL_43;
    goto LABEL_68;
  }
  v18 = 0LL;
  v144 = 0;
  if ( *(_DWORD *)(v11 + 20) )
    goto LABEL_68;
  v19 = 0;
  v149 = *(_DWORD *)(v11 + 56);
  if ( !v149 )
    goto LABEL_40;
  while ( 1 )
  {
    v7 = *(unsigned int *)(v11 + 4LL * v19 + 120);
    if ( (unsigned int)v7 >= 0x80 )
    {
      v20 = *(unsigned int *)(v11 + 16);
      if ( (unsigned int)v7 < (unsigned int)v20 )
        break;
    }
LABEL_33:
    if ( ++v19 >= v149 )
      goto LABEL_39;
  }
  v21 = (unsigned int)v7;
  v22 = *(_DWORD *)(v7 + v11) - 64;
  if ( v22 )
  {
    v7 = (unsigned int)(v22 - 1);
    if ( (_DWORD)v7 )
    {
      if ( (_DWORD)v7 == 1 )
      {
        v7 = v21 + 40;
        if ( v21 + 40 <= v20 )
        {
          if ( *(_DWORD *)(v21 + v11 + 12) )
            v18 = (char *)(v21 + v11 + 32);
          v13 = *(_BYTE **)(v21 + v11 + 24);
          goto LABEL_38;
        }
      }
    }
    else
    {
      v7 = v21 + 56;
      if ( v21 + 56 <= v20 )
      {
        v144 = 1;
        if ( *(_BYTE *)(v21 + v11 + 10) )
          v18 = (char *)(v21 + v11 + 24);
        v12 = *(_BYTE *)(v21 + v11 + 8);
        v13 = *(_BYTE **)(v21 + v11 + 16);
        v14 = *(_BYTE *)(v21 + v11 + 9);
      }
    }
    goto LABEL_32;
  }
  v7 = v21 + 40;
  if ( v21 + 40 > v20 )
  {
LABEL_32:
    if ( v144 )
      goto LABEL_39;
    goto LABEL_33;
  }
  if ( *(_BYTE *)(v21 + v11 + 10) )
    v18 = (char *)(v21 + v11 + 24);
  v13 = *(_BYTE **)(v21 + v11 + 16);
LABEL_38:
  v14 = *(_BYTE *)(v21 + v11 + 9);
  v12 = *(_BYTE *)(v21 + v11 + 8);
LABEL_39:
  v16 = 0;
LABEL_40:
  if ( v18 )
  {
    v23 = *v18;
LABEL_43:
    LOBYTE(v7) = v23 - 8;
    if ( (v7 & 0x5D) == 0 )
    {
      v24 = *(_BYTE *)(v11 + 3);
      if ( v24 == 1 || !v13 || !v14 )
        goto LABEL_63;
      LOBYTE(v11) = 0;
      v7 = (unsigned __int64)&v13[v14];
      v25 = v13 + 8;
      if ( (unsigned __int8)((*v13 & 0x7F) - 114) <= 1u )
      {
        if ( (unsigned __int64)v25 <= v7 )
        {
          LOBYTE(v11) = 1;
          v16 = v13[2];
          v15 = v13[1] & 0xF;
          v17 = v13[3];
        }
      }
      else
      {
        if ( (unsigned __int64)v25 <= v7 )
        {
          v26 = v13 + 13;
          v15 = v13[2] & 0xF;
          v27 = v14;
          if ( (unsigned int)(unsigned __int8)v13[7] + 8 <= v14 )
            v27 = (unsigned __int8)v13[7] + 8;
          v7 = (unsigned __int64)&v13[v27];
          if ( (unsigned __int64)v26 > v7 )
            v139 = 0;
          else
            v139 = v13[12];
          if ( (unsigned __int64)(v13 + 14) > v7 )
            v17 = 0;
          else
            v17 = *v26;
          LOBYTE(v11) = 1;
        }
        v16 = v139;
      }
      if ( (_BYTE)v11 )
      {
        LOBYTE(v3) = v16;
        v28 = v17;
      }
      else
      {
LABEL_63:
        v15 = 0;
        v28 = 0;
      }
      McTemplateK0pduuuuup_EtwWriteTransfer(v7, v11, &v158, a2, *(_DWORD *)(a2 + 48), v24, v12, v15, v3, v28, a2);
    }
  }
LABEL_68:
  v3 = -1073741811;
LABEL_276:
  IofCompleteRequest((PIRP)a2, 0);
  return v3;
}
