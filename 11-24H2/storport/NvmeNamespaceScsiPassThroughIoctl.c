/*
 * XREFs of NvmeNamespaceScsiPassThroughIoctl @ 0x1401A85FC
 * Callers:
 *     NvmeNamespaceDeviceControlIrp @ 0x1401A2234 (NvmeNamespaceDeviceControlIrp.c)
 * Callees:
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x140052DF0 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140052EC8 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x1400569AC (McTemplateK0pqd_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 *     PortPassThroughSetAddress @ 0x1401B8868 (PortPassThroughSetAddress.c)
 */

NTSTATUS __fastcall NvmeNamespaceScsiPassThroughIoctl(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // ebx
  __int64 v5; // r14
  __int64 v6; // rdi
  bool v8; // zf
  unsigned __int64 v9; // rcx
  __int64 v10; // rdx
  int *v11; // rax
  const EVENT_DESCRIPTOR *v12; // rdx
  unsigned __int64 v13; // rdx
  char v14; // r12
  _BYTE *v15; // r9
  unsigned __int8 v16; // r10
  char v17; // r14
  char v18; // r11
  char v19; // r13
  char *v20; // r11
  unsigned int v21; // r15d
  unsigned __int64 v22; // rsi
  __int64 v23; // r8
  int v24; // ecx
  char v25; // cl
  char v26; // r8
  _BYTE *v27; // rax
  unsigned int v28; // eax
  char v29; // al
  int v30; // esi
  BOOLEAN v31; // al
  unsigned int v32; // ecx
  unsigned __int64 v33; // rcx
  __int64 v34; // rdx
  int *v35; // rax
  const EVENT_DESCRIPTOR *v36; // rdx
  unsigned __int64 v37; // rdx
  char v38; // r12
  _BYTE *v39; // r9
  unsigned __int8 v40; // r10
  char v41; // r14
  char v42; // r11
  char v43; // r13
  char *v44; // r11
  unsigned int v45; // r15d
  unsigned __int64 v46; // rsi
  __int64 v47; // r8
  int v48; // ecx
  char v49; // cl
  char v50; // r8
  _BYTE *v51; // rax
  unsigned int v52; // eax
  char v53; // al
  unsigned __int64 v54; // rcx
  __int64 v55; // rdx
  int *v56; // rax
  const GUID *v57; // r8
  const EVENT_DESCRIPTOR *v58; // rdx
  unsigned __int64 v59; // rdx
  char v60; // r12
  _BYTE *v61; // r9
  unsigned __int8 v62; // r10
  char v63; // r14
  char v64; // r11
  char v65; // r13
  char *v66; // r11
  unsigned int v67; // r15d
  unsigned __int64 v68; // rsi
  __int64 v69; // r8
  int v70; // ecx
  char v71; // cl
  char v72; // r8
  _BYTE *v73; // rax
  unsigned int v74; // eax
  char v75; // al
  const GUID *v76; // r8
  int *v77; // rax
  const EVENT_DESCRIPTOR *v78; // rdx
  char v79; // r12
  _BYTE *v80; // r9
  unsigned __int8 v81; // r10
  char v82; // r14
  char v83; // r11
  char v84; // r13
  char *v85; // r11
  unsigned int v86; // r15d
  unsigned __int64 v87; // rsi
  __int64 v88; // r8
  int v89; // ecx
  char v90; // cl
  char v91; // r8
  _BYTE *v92; // rax
  unsigned int v93; // eax
  char v94; // al
  __int64 v96; // rcx
  int v97; // [rsp+20h] [rbp-69h]
  char v98; // [rsp+28h] [rbp-61h]
  char v99; // [rsp+30h] [rbp-59h]
  char v100; // [rsp+38h] [rbp-51h]
  char v101; // [rsp+40h] [rbp-49h]
  char v102; // [rsp+48h] [rbp-41h]
  __int64 v103; // [rsp+50h] [rbp-39h]
  char v104; // [rsp+60h] [rbp-29h]
  char v105; // [rsp+60h] [rbp-29h]
  char v106; // [rsp+60h] [rbp-29h]
  char v107; // [rsp+60h] [rbp-29h]
  char v108; // [rsp+61h] [rbp-28h]
  char v109; // [rsp+61h] [rbp-28h]
  char v110; // [rsp+61h] [rbp-28h]
  char v111; // [rsp+61h] [rbp-28h]
  unsigned int v112; // [rsp+64h] [rbp-25h]
  unsigned int v113; // [rsp+64h] [rbp-25h]
  unsigned int v114; // [rsp+64h] [rbp-25h]
  unsigned int v115; // [rsp+64h] [rbp-25h]
  GUID v116; // [rsp+68h] [rbp-21h] BYREF
  GUID v117; // [rsp+78h] [rbp-11h] BYREF
  GUID v118; // [rsp+88h] [rbp-1h] BYREF
  GUID v119; // [rsp+98h] [rbp+Fh] BYREF

  v4 = 0;
  v5 = *(_QWORD *)(a2 + 184);
  v6 = a2;
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 16) + 136LL) & 2) == 0 )
  {
    if ( ((*(_DWORD *)(v5 + 24) - 315396) & 0xFFFFFFEF) == 0 )
    {
      v31 = IoIs32bitProcess((PIRP)a2);
      v32 = *(_DWORD *)(v5 + 16);
      if ( v31 )
      {
        if ( v32 < 0x2C )
        {
          v8 = StorEtwLoggingEnabled == 0;
          *(_BYTE *)(v6 + 141) = -84;
          *(_DWORD *)(v6 + 48) = -1073741811;
          if ( v8 )
            goto LABEL_134;
          v117 = 0LL;
          IoGetActivityIdIrp(v6, &v117);
          v34 = *(_QWORD *)(v6 + 184);
          switch ( *(_BYTE *)v34 )
          {
            case 0xE:
              if ( (byte_140171462 & 8) == 0 )
                goto LABEL_134;
              v36 = &EventNonReadWriteRequestComplete;
              break;
            case 0xF:
              if ( byte_140171461 >= 0 )
                goto LABEL_134;
              v37 = *(_QWORD *)(v34 + 8);
              v38 = 0;
              v39 = 0LL;
              v105 = 0;
              v40 = 0;
              v41 = 0;
              v42 = 0;
              v43 = 0;
              if ( *(_BYTE *)(v37 + 2) != 40 )
              {
                v49 = *(_BYTE *)(v37 + 72);
                v39 = *(_BYTE **)(v37 + 32);
                v40 = *(_BYTE *)(v37 + 11);
                v38 = *(_BYTE *)(v37 + 4);
                if ( !*(_BYTE *)(v37 + 2) )
                  goto LABEL_110;
                goto LABEL_134;
              }
              v44 = 0LL;
              v109 = 0;
              if ( *(_DWORD *)(v37 + 20) )
                goto LABEL_134;
              v45 = 0;
              v113 = *(_DWORD *)(v37 + 56);
              if ( !v113 )
                goto LABEL_107;
              while ( 1 )
              {
                v33 = *(unsigned int *)(v37 + 4LL * v45 + 120);
                if ( (unsigned int)v33 >= 0x80 )
                {
                  v46 = *(unsigned int *)(v37 + 16);
                  if ( (unsigned int)v33 < (unsigned int)v46 )
                  {
                    v47 = (unsigned int)v33;
                    v48 = *(_DWORD *)(v33 + v37) - 64;
                    if ( v48 )
                    {
                      v33 = (unsigned int)(v48 - 1);
                      if ( (_DWORD)v33 )
                      {
                        if ( (_DWORD)v33 == 1 )
                        {
                          v33 = v47 + 40;
                          if ( v47 + 40 <= v46 )
                          {
                            if ( *(_DWORD *)(v47 + v37 + 12) )
                              v44 = (char *)(v47 + v37 + 32);
                            v39 = *(_BYTE **)(v47 + v37 + 24);
                            goto LABEL_106;
                          }
                        }
                      }
                      else
                      {
                        v33 = v47 + 56;
                        if ( v47 + 56 <= v46 )
                        {
                          v109 = 1;
                          if ( *(_BYTE *)(v47 + v37 + 10) )
                            v44 = (char *)(v47 + v37 + 24);
                          v38 = *(_BYTE *)(v47 + v37 + 8);
                          v39 = *(_BYTE **)(v47 + v37 + 16);
                          v40 = *(_BYTE *)(v47 + v37 + 9);
                        }
                      }
                    }
                    else
                    {
                      v33 = v47 + 40;
                      if ( v47 + 40 <= v46 )
                      {
                        if ( *(_BYTE *)(v47 + v37 + 10) )
                          v44 = (char *)(v47 + v37 + 24);
                        v39 = *(_BYTE **)(v47 + v37 + 16);
LABEL_106:
                        v40 = *(_BYTE *)(v47 + v37 + 9);
                        v38 = *(_BYTE *)(v47 + v37 + 8);
LABEL_107:
                        if ( v44 )
                        {
                          v49 = *v44;
                          v42 = 0;
LABEL_110:
                          LOBYTE(v33) = v49 - 8;
                          if ( (v33 & 0x5D) == 0 )
                          {
                            v50 = *(_BYTE *)(v37 + 3);
                            if ( v50 == 1 || !v39 || !v40 )
                              goto LABEL_129;
                            LOBYTE(v37) = 0;
                            v33 = (unsigned __int64)&v39[v40];
                            v51 = v39 + 8;
                            if ( (unsigned __int8)((*v39 & 0x7F) - 114) <= 1u )
                            {
                              if ( (unsigned __int64)v51 <= v33 )
                              {
                                LOBYTE(v37) = 1;
                                v42 = v39[2];
                                v41 = v39[1] & 0xF;
                                v43 = v39[3];
                              }
                            }
                            else
                            {
                              if ( (unsigned __int64)v51 <= v33 )
                              {
                                v41 = v39[2] & 0xF;
                                v52 = v40;
                                if ( (unsigned int)(unsigned __int8)v39[7] + 8 <= v40 )
                                  v52 = (unsigned __int8)v39[7] + 8;
                                v33 = (unsigned __int64)(v39 + 13);
                                v37 = (unsigned __int64)&v39[v52];
                                if ( (unsigned __int64)(v39 + 13) > v37 )
                                  v105 = 0;
                                else
                                  v105 = v39[12];
                                if ( (unsigned __int64)(v39 + 14) <= v37 )
                                  v43 = *(_BYTE *)v33;
                                LOBYTE(v37) = 1;
                              }
                              v42 = v105;
                            }
                            if ( (_BYTE)v37 )
                            {
                              LOBYTE(v4) = v42;
                              v53 = v43;
                            }
                            else
                            {
LABEL_129:
                              v41 = 0;
                              v53 = 0;
                            }
                            McTemplateK0pduuuuup_EtwWriteTransfer(
                              v33,
                              v37,
                              &v117,
                              v6,
                              *(_DWORD *)(v6 + 48),
                              v50,
                              v38,
                              v41,
                              v4,
                              v53,
                              v6);
                          }
                        }
                        goto LABEL_134;
                      }
                    }
                    if ( v109 )
                      goto LABEL_107;
                  }
                }
                if ( ++v45 >= v113 )
                  goto LABEL_107;
              }
            case 0x1B:
              if ( *(_BYTE *)(v34 + 1) == 7 && !*(_DWORD *)(v34 + 8) )
              {
                if ( (byte_140171462 & 0x40) != 0 )
                {
                  v35 = *(int **)(v6 + 56);
                  if ( v35 )
                    v4 = *v35;
                  McTemplateK0pqd_EtwWriteTransfer(v33, v34, &v117, v6, v4, *(_DWORD *)(v6 + 48));
                }
                goto LABEL_134;
              }
              if ( (byte_140171462 & 0x20) == 0 )
              {
LABEL_134:
                v30 = -1073741811;
                goto LABEL_269;
              }
              v36 = &EventPnpRequestComplete;
              break;
            default:
              goto LABEL_134;
          }
          McTemplateK0pd_EtwWriteTransfer(v33, v36, &v117, v6, *(_DWORD *)(v6 + 48));
          goto LABEL_134;
        }
      }
      else if ( v32 < 0x38 )
      {
        v8 = StorEtwLoggingEnabled == 0;
        v30 = -1073741811;
        *(_DWORD *)(v6 + 48) = -1073741811;
        *(_BYTE *)(v6 + 141) = -84;
        if ( v8 )
          goto LABEL_269;
        v118 = 0LL;
        IoGetActivityIdIrp(v6, &v118);
        v55 = *(_QWORD *)(v6 + 184);
        switch ( *(_BYTE *)v55 )
        {
          case 0xE:
            if ( (byte_140171462 & 8) == 0 )
              goto LABEL_269;
            v58 = &EventNonReadWriteRequestComplete;
            break;
          case 0xF:
            if ( byte_140171461 >= 0 )
              goto LABEL_269;
            v59 = *(_QWORD *)(v55 + 8);
            v60 = 0;
            v61 = 0LL;
            v106 = 0;
            v62 = 0;
            v63 = 0;
            v64 = 0;
            v65 = 0;
            if ( *(_BYTE *)(v59 + 2) == 40 )
            {
              v66 = 0LL;
              v110 = 0;
              if ( *(_DWORD *)(v59 + 20) )
                goto LABEL_269;
              v67 = 0;
              v114 = *(_DWORD *)(v59 + 56);
              if ( !v114 )
                goto LABEL_174;
              while ( 1 )
              {
                v54 = *(unsigned int *)(v59 + 4LL * v67 + 120);
                if ( (unsigned int)v54 >= 0x80 )
                {
                  v68 = *(unsigned int *)(v59 + 16);
                  if ( (unsigned int)v54 < (unsigned int)v68 )
                  {
                    v69 = (unsigned int)v54;
                    v70 = *(_DWORD *)(v59 + v54) - 64;
                    if ( v70 )
                    {
                      v54 = (unsigned int)(v70 - 1);
                      if ( (_DWORD)v54 )
                      {
                        if ( (_DWORD)v54 == 1 )
                        {
                          v54 = v69 + 40;
                          if ( v69 + 40 <= v68 )
                          {
                            if ( *(_DWORD *)(v59 + v69 + 12) )
                              v66 = (char *)(v69 + v59 + 32);
                            v61 = *(_BYTE **)(v59 + v69 + 24);
LABEL_172:
                            v62 = *(_BYTE *)(v59 + v69 + 9);
                            v60 = *(_BYTE *)(v59 + v69 + 8);
LABEL_173:
                            v30 = -1073741811;
LABEL_174:
                            if ( !v66 )
                              goto LABEL_269;
                            v71 = *v66;
                            v64 = 0;
LABEL_177:
                            LOBYTE(v54) = v71 - 8;
                            if ( (v54 & 0x5D) != 0 )
                              goto LABEL_269;
                            v72 = *(_BYTE *)(v59 + 3);
                            if ( v72 == 1 || !v61 || !v62 )
                              goto LABEL_196;
                            LOBYTE(v59) = 0;
                            v54 = (unsigned __int64)&v61[v62];
                            v73 = v61 + 8;
                            if ( (unsigned __int8)((*v61 & 0x7F) - 114) <= 1u )
                            {
                              if ( (unsigned __int64)v73 <= v54 )
                              {
                                LOBYTE(v59) = 1;
                                v64 = v61[2];
                                v63 = v61[1] & 0xF;
                                v65 = v61[3];
                              }
                            }
                            else
                            {
                              if ( (unsigned __int64)v73 <= v54 )
                              {
                                v63 = v61[2] & 0xF;
                                v74 = v62;
                                if ( (unsigned int)(unsigned __int8)v61[7] + 8 <= v62 )
                                  v74 = (unsigned __int8)v61[7] + 8;
                                v54 = (unsigned __int64)(v61 + 13);
                                v59 = (unsigned __int64)&v61[v74];
                                if ( (unsigned __int64)(v61 + 13) > v59 )
                                  v106 = 0;
                                else
                                  v106 = v61[12];
                                if ( (unsigned __int64)(v61 + 14) <= v59 )
                                  v65 = *(_BYTE *)v54;
                                LOBYTE(v59) = 1;
                              }
                              v64 = v106;
                            }
                            if ( (_BYTE)v59 )
                            {
                              LOBYTE(v4) = v64;
                              v75 = v65;
                            }
                            else
                            {
LABEL_196:
                              v63 = 0;
                              v75 = 0;
                            }
                            v103 = v6;
                            v102 = v75;
                            v101 = v4;
                            v100 = v63;
                            v99 = v60;
                            v98 = v72;
                            v76 = &v118;
                            goto LABEL_265;
                          }
                        }
                      }
                      else
                      {
                        v54 = v69 + 56;
                        if ( v69 + 56 <= v68 )
                        {
                          v110 = 1;
                          if ( *(_BYTE *)(v59 + v69 + 10) )
                            v66 = (char *)(v69 + v59 + 24);
                          v60 = *(_BYTE *)(v59 + v69 + 8);
                          v61 = *(_BYTE **)(v59 + v69 + 16);
                          v62 = *(_BYTE *)(v59 + v69 + 9);
                        }
                      }
                    }
                    else
                    {
                      v54 = v69 + 40;
                      if ( v69 + 40 <= v68 )
                      {
                        if ( *(_BYTE *)(v59 + v69 + 10) )
                          v66 = (char *)(v69 + v59 + 24);
                        v61 = *(_BYTE **)(v59 + v69 + 16);
                        goto LABEL_172;
                      }
                    }
                    if ( v110 )
                      goto LABEL_173;
                  }
                }
                if ( ++v67 >= v114 )
                  goto LABEL_173;
              }
            }
            v71 = *(_BYTE *)(v59 + 72);
            v61 = *(_BYTE **)(v59 + 32);
            v62 = *(_BYTE *)(v59 + 11);
            v60 = *(_BYTE *)(v59 + 4);
            if ( *(_BYTE *)(v59 + 2) )
              goto LABEL_269;
            goto LABEL_177;
          case 0x1B:
            if ( *(_BYTE *)(v55 + 1) == 7 && !*(_DWORD *)(v55 + 8) )
            {
              if ( (byte_140171462 & 0x40) == 0 )
                goto LABEL_269;
              v56 = *(int **)(v6 + 56);
              if ( v56 )
                v4 = *v56;
              v57 = &v118;
LABEL_212:
              McTemplateK0pqd_EtwWriteTransfer(v54, v55, v57, v6, v4, *(_DWORD *)(v6 + 48));
              goto LABEL_269;
            }
            if ( (byte_140171462 & 0x20) == 0 )
              goto LABEL_269;
            v58 = &EventPnpRequestComplete;
            break;
          default:
            goto LABEL_269;
        }
        McTemplateK0pd_EtwWriteTransfer(v54, v58, &v118, v6, *(_DWORD *)(v6 + 48));
        goto LABEL_269;
      }
    }
    LOBYTE(a4) = *(_BYTE *)(a1 + 102);
    LOBYTE(a3) = *(_BYTE *)(a1 + 101);
    LOBYTE(a2) = *(_BYTE *)(a1 + 100);
    if ( (int)PortPassThroughSetAddress(v6, a2, a3, a4) >= 0 )
    {
      v96 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 128LL);
      ++*(_BYTE *)(v6 + 67);
      *(_QWORD *)(v6 + 184) += 72LL;
      return IofCallDriver(*(PDEVICE_OBJECT *)(v96 + 8), (PIRP)v6);
    }
    v8 = StorEtwLoggingEnabled == 0;
    v30 = -1073741808;
    *(_DWORD *)(v6 + 48) = -1073741808;
    *(_BYTE *)(v6 + 141) = -84;
    if ( v8 )
      goto LABEL_269;
    v119 = 0LL;
    IoGetActivityIdIrp(v6, &v119);
    v55 = *(_QWORD *)(v6 + 184);
    switch ( *(_BYTE *)v55 )
    {
      case 0xE:
        if ( (byte_140171462 & 8) == 0 )
          goto LABEL_269;
        v97 = *(_DWORD *)(v6 + 48);
        v78 = &EventNonReadWriteRequestComplete;
        break;
      case 0xF:
        if ( byte_140171461 >= 0 )
          goto LABEL_269;
        v59 = *(_QWORD *)(v55 + 8);
        v79 = 0;
        v80 = 0LL;
        v107 = 0;
        v81 = 0;
        v82 = 0;
        v83 = 0;
        v84 = 0;
        if ( *(_BYTE *)(v59 + 2) != 40 )
        {
          v90 = *(_BYTE *)(v59 + 72);
          v80 = *(_BYTE **)(v59 + 32);
          v81 = *(_BYTE *)(v59 + 11);
          v79 = *(_BYTE *)(v59 + 4);
          if ( *(_BYTE *)(v59 + 2) )
            goto LABEL_269;
          goto LABEL_244;
        }
        v85 = 0LL;
        v111 = 0;
        if ( *(_DWORD *)(v59 + 20) )
          goto LABEL_269;
        v86 = 0;
        v115 = *(_DWORD *)(v59 + 56);
        if ( !v115 )
          goto LABEL_241;
        while ( 1 )
        {
          v54 = *(unsigned int *)(v59 + 4LL * v86 + 120);
          if ( (unsigned int)v54 >= 0x80 )
          {
            v87 = *(unsigned int *)(v59 + 16);
            if ( (unsigned int)v54 < (unsigned int)v87 )
            {
              v88 = (unsigned int)v54;
              v89 = *(_DWORD *)(v59 + v54) - 64;
              if ( v89 )
              {
                v54 = (unsigned int)(v89 - 1);
                if ( (_DWORD)v54 )
                {
                  if ( (_DWORD)v54 == 1 )
                  {
                    v54 = v88 + 40;
                    if ( v88 + 40 <= v87 )
                    {
                      if ( *(_DWORD *)(v59 + v88 + 12) )
                        v85 = (char *)(v88 + v59 + 32);
                      v80 = *(_BYTE **)(v59 + v88 + 24);
LABEL_239:
                      v81 = *(_BYTE *)(v59 + v88 + 9);
                      v79 = *(_BYTE *)(v59 + v88 + 8);
LABEL_240:
                      v30 = -1073741808;
LABEL_241:
                      if ( !v85 )
                        goto LABEL_269;
                      v90 = *v85;
                      v83 = 0;
LABEL_244:
                      LOBYTE(v54) = v90 - 8;
                      if ( (v54 & 0x5D) != 0 )
                        goto LABEL_269;
                      v91 = *(_BYTE *)(v59 + 3);
                      if ( v91 == 1 || !v80 || !v81 )
                        goto LABEL_263;
                      LOBYTE(v59) = 0;
                      v54 = (unsigned __int64)&v80[v81];
                      v92 = v80 + 8;
                      if ( (unsigned __int8)((*v80 & 0x7F) - 114) <= 1u )
                      {
                        if ( (unsigned __int64)v92 <= v54 )
                        {
                          LOBYTE(v59) = 1;
                          v83 = v80[2];
                          v82 = v80[1] & 0xF;
                          v84 = v80[3];
                        }
                      }
                      else
                      {
                        if ( (unsigned __int64)v92 <= v54 )
                        {
                          v82 = v80[2] & 0xF;
                          v93 = v81;
                          if ( (unsigned int)(unsigned __int8)v80[7] + 8 <= v81 )
                            v93 = (unsigned __int8)v80[7] + 8;
                          v54 = (unsigned __int64)(v80 + 13);
                          v59 = (unsigned __int64)&v80[v93];
                          if ( (unsigned __int64)(v80 + 13) > v59 )
                            v107 = 0;
                          else
                            v107 = v80[12];
                          if ( (unsigned __int64)(v80 + 14) <= v59 )
                            v84 = *(_BYTE *)v54;
                          LOBYTE(v59) = 1;
                        }
                        v83 = v107;
                      }
                      if ( (_BYTE)v59 )
                      {
                        LOBYTE(v4) = v83;
                        v94 = v84;
                      }
                      else
                      {
LABEL_263:
                        v82 = 0;
                        v94 = 0;
                      }
                      v103 = v6;
                      v102 = v94;
                      v101 = v4;
                      v100 = v82;
                      v99 = v79;
                      v98 = v91;
                      v76 = &v119;
LABEL_265:
                      McTemplateK0pduuuuup_EtwWriteTransfer(
                        v54,
                        v59,
                        v76,
                        v6,
                        *(_DWORD *)(v6 + 48),
                        v98,
                        v99,
                        v100,
                        v101,
                        v102,
                        v103);
                      goto LABEL_269;
                    }
                  }
                }
                else
                {
                  v54 = v88 + 56;
                  if ( v88 + 56 <= v87 )
                  {
                    v111 = 1;
                    if ( *(_BYTE *)(v59 + v88 + 10) )
                      v85 = (char *)(v88 + v59 + 24);
                    v79 = *(_BYTE *)(v59 + v88 + 8);
                    v80 = *(_BYTE **)(v59 + v88 + 16);
                    v81 = *(_BYTE *)(v59 + v88 + 9);
                  }
                }
              }
              else
              {
                v54 = v88 + 40;
                if ( v88 + 40 <= v87 )
                {
                  if ( *(_BYTE *)(v59 + v88 + 10) )
                    v85 = (char *)(v88 + v59 + 24);
                  v80 = *(_BYTE **)(v59 + v88 + 16);
                  goto LABEL_239;
                }
              }
              if ( v111 )
                goto LABEL_240;
            }
          }
          if ( ++v86 >= v115 )
            goto LABEL_240;
        }
      case 0x1B:
        if ( *(_BYTE *)(v55 + 1) == 7 && !*(_DWORD *)(v55 + 8) )
        {
          if ( (byte_140171462 & 0x40) == 0 )
            goto LABEL_269;
          v77 = *(int **)(v6 + 56);
          if ( v77 )
            v4 = *v77;
          v57 = &v119;
          goto LABEL_212;
        }
        if ( (byte_140171462 & 0x20) == 0 )
          goto LABEL_269;
        v78 = &EventPnpRequestComplete;
        v97 = *(_DWORD *)(v6 + 48);
        break;
      default:
        goto LABEL_269;
    }
    McTemplateK0pd_EtwWriteTransfer(v54, v78, &v119, v6, v97);
    goto LABEL_269;
  }
  v8 = StorEtwLoggingEnabled == 0;
  *(_QWORD *)(a2 + 56) = 0LL;
  *(_BYTE *)(a2 + 141) = -84;
  *(_DWORD *)(a2 + 48) = -1073741637;
  if ( v8 )
    goto LABEL_66;
  v116 = 0LL;
  IoGetActivityIdIrp(a2, &v116);
  v10 = *(_QWORD *)(v6 + 184);
  if ( *(_BYTE *)v10 == 14 )
  {
    if ( (byte_140171462 & 8) == 0 )
      goto LABEL_66;
    v12 = &EventNonReadWriteRequestComplete;
    goto LABEL_65;
  }
  if ( *(_BYTE *)v10 != 15 )
  {
    if ( *(_BYTE *)v10 != 27 )
      goto LABEL_66;
    if ( *(_BYTE *)(v10 + 1) == 7 && !*(_DWORD *)(v10 + 8) )
    {
      if ( (byte_140171462 & 0x40) != 0 )
      {
        v11 = *(int **)(v6 + 56);
        if ( v11 )
          v4 = *v11;
        McTemplateK0pqd_EtwWriteTransfer(v9, v10, &v116, v6, v4, *(_DWORD *)(v6 + 48));
      }
      goto LABEL_66;
    }
    if ( (byte_140171462 & 0x20) == 0 )
      goto LABEL_66;
    v12 = &EventPnpRequestComplete;
LABEL_65:
    McTemplateK0pd_EtwWriteTransfer(v9, v12, &v116, v6, *(_DWORD *)(v6 + 48));
    goto LABEL_66;
  }
  if ( byte_140171461 >= 0 )
    goto LABEL_66;
  v13 = *(_QWORD *)(v10 + 8);
  v14 = 0;
  v15 = 0LL;
  v104 = 0;
  v16 = 0;
  v17 = 0;
  v18 = 0;
  v19 = 0;
  if ( *(_BYTE *)(v13 + 2) != 40 )
  {
    v25 = *(_BYTE *)(v13 + 72);
    v15 = *(_BYTE **)(v13 + 32);
    v16 = *(_BYTE *)(v13 + 11);
    v14 = *(_BYTE *)(v13 + 4);
    if ( !*(_BYTE *)(v13 + 2) )
      goto LABEL_42;
    goto LABEL_66;
  }
  v20 = 0LL;
  v108 = 0;
  if ( *(_DWORD *)(v13 + 20) )
    goto LABEL_66;
  v21 = 0;
  v112 = *(_DWORD *)(v13 + 56);
  if ( !v112 )
    goto LABEL_39;
  while ( 1 )
  {
    v9 = *(unsigned int *)(v13 + 4LL * v21 + 120);
    if ( (unsigned int)v9 >= 0x80 )
    {
      v22 = *(unsigned int *)(v13 + 16);
      if ( (unsigned int)v9 < (unsigned int)v22 )
        break;
    }
LABEL_33:
    if ( ++v21 >= v112 )
      goto LABEL_39;
  }
  v23 = (unsigned int)v9;
  v24 = *(_DWORD *)(v9 + v13) - 64;
  if ( v24 )
  {
    v9 = (unsigned int)(v24 - 1);
    if ( (_DWORD)v9 )
    {
      if ( (_DWORD)v9 == 1 )
      {
        v9 = v23 + 40;
        if ( v23 + 40 <= v22 )
        {
          if ( *(_DWORD *)(v23 + v13 + 12) )
            v20 = (char *)(v23 + v13 + 32);
          v15 = *(_BYTE **)(v23 + v13 + 24);
          goto LABEL_38;
        }
      }
    }
    else
    {
      v9 = v23 + 56;
      if ( v23 + 56 <= v22 )
      {
        v108 = 1;
        if ( *(_BYTE *)(v23 + v13 + 10) )
          v20 = (char *)(v23 + v13 + 24);
        v14 = *(_BYTE *)(v23 + v13 + 8);
        v15 = *(_BYTE **)(v23 + v13 + 16);
        v16 = *(_BYTE *)(v23 + v13 + 9);
      }
    }
    goto LABEL_32;
  }
  v9 = v23 + 40;
  if ( v23 + 40 > v22 )
  {
LABEL_32:
    if ( v108 )
      goto LABEL_39;
    goto LABEL_33;
  }
  if ( *(_BYTE *)(v23 + v13 + 10) )
    v20 = (char *)(v23 + v13 + 24);
  v15 = *(_BYTE **)(v23 + v13 + 16);
LABEL_38:
  v16 = *(_BYTE *)(v23 + v13 + 9);
  v14 = *(_BYTE *)(v23 + v13 + 8);
LABEL_39:
  if ( v20 )
  {
    v25 = *v20;
    v18 = 0;
LABEL_42:
    LOBYTE(v9) = v25 - 8;
    if ( (v9 & 0x5D) == 0 )
    {
      v26 = *(_BYTE *)(v13 + 3);
      if ( v26 == 1 || !v15 || !v16 )
        goto LABEL_61;
      LOBYTE(v13) = 0;
      v9 = (unsigned __int64)&v15[v16];
      v27 = v15 + 8;
      if ( (unsigned __int8)((*v15 & 0x7F) - 114) <= 1u )
      {
        if ( (unsigned __int64)v27 <= v9 )
        {
          LOBYTE(v13) = 1;
          v18 = v15[2];
          v17 = v15[1] & 0xF;
          v19 = v15[3];
        }
      }
      else
      {
        if ( (unsigned __int64)v27 <= v9 )
        {
          v17 = v15[2] & 0xF;
          v28 = v16;
          if ( (unsigned int)(unsigned __int8)v15[7] + 8 <= v16 )
            v28 = (unsigned __int8)v15[7] + 8;
          v9 = (unsigned __int64)(v15 + 13);
          v13 = (unsigned __int64)&v15[v28];
          if ( (unsigned __int64)(v15 + 13) > v13 )
            v104 = 0;
          else
            v104 = v15[12];
          if ( (unsigned __int64)(v15 + 14) <= v13 )
            v19 = *(_BYTE *)v9;
          LOBYTE(v13) = 1;
        }
        v18 = v104;
      }
      if ( (_BYTE)v13 )
      {
        LOBYTE(v4) = v18;
        v29 = v19;
      }
      else
      {
LABEL_61:
        v17 = 0;
        v29 = 0;
      }
      McTemplateK0pduuuuup_EtwWriteTransfer(v9, v13, &v116, v6, *(_DWORD *)(v6 + 48), v26, v14, v17, v4, v29, v6);
    }
  }
LABEL_66:
  v30 = -1073741637;
LABEL_269:
  IofCompleteRequest((PIRP)v6, 0);
  return v30;
}
