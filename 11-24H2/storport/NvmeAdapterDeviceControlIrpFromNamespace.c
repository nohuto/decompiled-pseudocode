/*
 * XREFs of NvmeAdapterDeviceControlIrpFromNamespace @ 0x1400CE6CC
 * Callers:
 *     NvmeNamespaceStorageProtocolCommandIoctl @ 0x1401AA82C (NvmeNamespaceStorageProtocolCommandIoctl.c)
 * Callees:
 *     RaForwardIrp @ 0x1400177F0 (RaForwardIrp.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x140052DF0 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140052EC8 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pddd_EtwWriteTransfer @ 0x140056884 (McTemplateK0pddd_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x1400569AC (McTemplateK0pqd_EtwWriteTransfer.c)
 *     NvmeAdapterAcquireRemoveLock @ 0x1400CC668 (NvmeAdapterAcquireRemoveLock.c)
 *     NvmeAdapterFirmwareActivateIoctl @ 0x1400D0584 (NvmeAdapterFirmwareActivateIoctl.c)
 *     NvmeAdapterFirmwareDownloadIoctl @ 0x1400D17BC (NvmeAdapterFirmwareDownloadIoctl.c)
 *     NvmeAdapterFirmwareGetInfoIoctl @ 0x1400D2588 (NvmeAdapterFirmwareGetInfoIoctl.c)
 *     NvmeAdapterSetLedState @ 0x1400D70B0 (NvmeAdapterSetLedState.c)
 *     NvmeAdapterSetTemperatureThresholdIoctl @ 0x1400D74F4 (NvmeAdapterSetTemperatureThresholdIoctl.c)
 *     NvmeAdapterStorageInternalQueryPropertyIoctl @ 0x1400D99FC (NvmeAdapterStorageInternalQueryPropertyIoctl.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 *     NvmeAdapterStorageProtocolCommandIoctl @ 0x14019CCFC (NvmeAdapterStorageProtocolCommandIoctl.c)
 *     NvmeAdapterStorageQueryProperty @ 0x14019D454 (NvmeAdapterStorageQueryProperty.c)
 */

__int64 __fastcall NvmeAdapterDeviceControlIrpFromNamespace(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // r13
  int v6; // eax
  __int64 v7; // rcx
  int v8; // ebx
  int v9; // r15d
  unsigned int v10; // esi
  bool v11; // zf
  unsigned __int64 v12; // rcx
  __int64 v13; // rdx
  int *v14; // rax
  const EVENT_DESCRIPTOR *v15; // rdx
  unsigned __int64 v16; // rdx
  char v17; // r12
  _BYTE *v18; // r9
  unsigned __int8 v19; // r10
  char v20; // si
  char v21; // r11
  char v22; // r13
  char *v23; // r11
  unsigned int v24; // r15d
  unsigned __int64 v25; // r14
  __int64 v26; // r8
  int v27; // ecx
  char v28; // cl
  char v29; // r8
  _BYTE *v30; // rax
  unsigned int v31; // eax
  char v32; // al
  unsigned int v34; // esi
  unsigned int v35; // esi
  unsigned int v36; // esi
  unsigned int v37; // esi
  NTSTATUS PropertyIoctl; // eax
  unsigned int v39; // esi
  unsigned int InfoIoctl; // eax
  int v41; // ecx
  __int64 v42; // rcx
  __int64 v43; // rdx
  unsigned int *v44; // rax
  __int64 v45; // rcx
  const EVENT_DESCRIPTOR *v46; // rdx
  unsigned __int64 v47; // rdx
  char v48; // r12
  _BYTE *v49; // r9
  unsigned __int8 v50; // r10
  char v51; // si
  char v52; // r11
  unsigned __int8 v53; // r13
  char *v54; // r11
  unsigned int v55; // r15d
  __int64 v56; // rcx
  unsigned __int64 v57; // r14
  __int64 v58; // r8
  int v59; // ecx
  int v60; // ecx
  char v61; // cl
  char v62; // r8
  _BYTE *v63; // rcx
  _BYTE *v64; // rax
  unsigned int v65; // eax
  char v66; // al
  __int64 v67; // rcx
  unsigned __int64 v68; // rcx
  unsigned __int8 *v69; // rdx
  int v70; // eax
  unsigned __int64 v71; // rdx
  char v72; // r13
  _BYTE *v73; // r9
  unsigned __int8 v74; // r10
  char v75; // r15
  char v76; // r14
  int v77; // eax
  char v78; // r11
  char *v79; // r11
  unsigned int v80; // r12d
  unsigned __int64 v81; // r14
  __int64 v82; // r8
  int v83; // ecx
  int *v84; // rax
  const EVENT_DESCRIPTOR *v85; // rdx
  char v86; // cl
  char v87; // r8
  _BYTE *v88; // rax
  unsigned int v89; // eax
  char v90; // al
  unsigned int v91; // esi
  unsigned int v92; // esi
  unsigned int v93; // esi
  unsigned int v94; // esi
  unsigned int v95; // r12d
  unsigned __int64 v96; // r14
  int v97; // ecx
  __int64 v98; // [rsp+20h] [rbp-59h]
  __int64 v99; // [rsp+28h] [rbp-51h]
  __int64 v100; // [rsp+30h] [rbp-49h]
  char v101; // [rsp+60h] [rbp-19h] BYREF
  char v102; // [rsp+61h] [rbp-18h]
  char v103; // [rsp+62h] [rbp-17h]
  __int64 v104; // [rsp+68h] [rbp-11h]
  unsigned int v105; // [rsp+70h] [rbp-9h]
  GUID v106; // [rsp+78h] [rbp-1h] BYREF
  GUID v107; // [rsp+88h] [rbp+Fh] BYREF

  v104 = a1;
  v107 = 0LL;
  v101 = 1;
  v5 = a1;
  v6 = NvmeAdapterAcquireRemoveLock(a1);
  v7 = *(_QWORD *)(a3 + 184);
  v8 = 0;
  v9 = v6;
  v105 = v6;
  v10 = *(_DWORD *)(v7 + 24);
  if ( StorEtwLoggingEnabled )
  {
    IoGetActivityIdIrp(a3, &v107);
    if ( (byte_140171462 & 2) != 0 )
      McTemplateK0pddd_EtwWriteTransfer(
        *(unsigned __int8 *)(*(_QWORD *)(a3 + 184) + 1LL),
        &EventIOCTL,
        &v107,
        a3,
        **(unsigned __int8 **)(a3 + 184),
        *(unsigned __int8 *)(*(_QWORD *)(a3 + 184) + 1LL),
        v10);
  }
  if ( v9 >= 0 )
  {
    if ( v10 > 0x2DD200 )
    {
      v91 = v10 - 3003328;
      if ( v91 )
      {
        v92 = v91 - 2116;
        if ( v92 )
        {
          v93 = v92 - 4;
          if ( v93 )
          {
            v94 = v93 - 320504;
            if ( !v94 || v94 == 56 )
            {
              PropertyIoctl = RaForwardIrp(*(struct _DEVICE_OBJECT **)(v5 + 24), (IRP *)a3);
              goto LABEL_78;
            }
            goto LABEL_221;
          }
          InfoIoctl = NvmeAdapterFirmwareActivateIoctl(v5, a2, a3, 0LL, &v101);
        }
        else
        {
          InfoIoctl = NvmeAdapterFirmwareDownloadIoctl(v5, a2, a3, &v101);
        }
      }
      else
      {
        InfoIoctl = NvmeAdapterStorageProtocolCommandIoctl(v5, a2, a3, &v101);
      }
    }
    else if ( v10 == 3002880 )
    {
      InfoIoctl = NvmeAdapterSetTemperatureThresholdIoctl(v5, a3, &v101);
    }
    else
    {
      v34 = v10 - 266268;
      if ( !v34 )
      {
        v41 = *(_DWORD *)(*(_QWORD *)(v5 + 400) + 184LL) >> 30;
        *(_BYTE *)(a3 + 141) = -84;
        if ( (v41 & 1) != 0 )
        {
          v11 = StorEtwLoggingEnabled == 0;
          *(_DWORD *)(a3 + 48) = 0;
          if ( v11 )
            goto LABEL_147;
          v106 = 0LL;
          IoGetActivityIdIrp(a3, &v106);
          v43 = *(_QWORD *)(a3 + 184);
          switch ( *(_BYTE *)v43 )
          {
            case 0xE:
              if ( (byte_140171462 & 8) == 0 )
                goto LABEL_147;
              v46 = (const EVENT_DESCRIPTOR *)&EventNonReadWriteRequestComplete;
              break;
            case 0xF:
              if ( byte_140171461 >= 0 )
                goto LABEL_147;
              v47 = *(_QWORD *)(v43 + 8);
              v48 = 0;
              v49 = 0LL;
              v101 = 0;
              v50 = 0;
              v51 = 0;
              v52 = 0;
              v53 = 0;
              if ( *(_BYTE *)(v47 + 2) != 40 )
              {
                v61 = *(_BYTE *)(v47 + 72);
                v49 = *(_BYTE **)(v47 + 32);
                v50 = *(_BYTE *)(v47 + 11);
                v48 = *(_BYTE *)(v47 + 4);
                if ( !*(_BYTE *)(v47 + 2) )
                  goto LABEL_125;
                goto LABEL_146;
              }
              v54 = 0LL;
              v102 = 0;
              if ( *(_DWORD *)(v47 + 20) )
                goto LABEL_146;
              v55 = 0;
              v105 = *(_DWORD *)(v47 + 56);
              if ( !v105 )
                goto LABEL_122;
              while ( 1 )
              {
                v56 = *(unsigned int *)(v47 + 4LL * v55 + 120);
                if ( (unsigned int)v56 >= 0x80 )
                {
                  v57 = *(unsigned int *)(v47 + 16);
                  if ( (unsigned int)v56 < (unsigned int)v57 )
                  {
                    v58 = (unsigned int)v56;
                    v59 = *(_DWORD *)(v56 + v47) - 64;
                    if ( v59 )
                    {
                      v60 = v59 - 1;
                      if ( v60 )
                      {
                        if ( v60 == 1 && v58 + 40 <= v57 )
                        {
                          if ( *(_DWORD *)(v58 + v47 + 12) )
                            v54 = (char *)(v58 + v47 + 32);
                          v49 = *(_BYTE **)(v58 + v47 + 24);
                          goto LABEL_121;
                        }
                      }
                      else if ( v58 + 56 <= v57 )
                      {
                        v102 = 1;
                        if ( *(_BYTE *)(v58 + v47 + 10) )
                          v54 = (char *)(v58 + v47 + 24);
                        v48 = *(_BYTE *)(v58 + v47 + 8);
                        v49 = *(_BYTE **)(v58 + v47 + 16);
                        v50 = *(_BYTE *)(v58 + v47 + 9);
                      }
                    }
                    else if ( v58 + 40 <= v57 )
                    {
                      if ( *(_BYTE *)(v58 + v47 + 10) )
                        v54 = (char *)(v58 + v47 + 24);
                      v49 = *(_BYTE **)(v58 + v47 + 16);
LABEL_121:
                      v50 = *(_BYTE *)(v58 + v47 + 9);
                      v48 = *(_BYTE *)(v58 + v47 + 8);
LABEL_122:
                      if ( v54 )
                      {
                        v61 = *v54;
                        v52 = 0;
LABEL_125:
                        if ( ((v61 - 8) & 0x5D) == 0 )
                        {
                          v62 = *(_BYTE *)(v47 + 3);
                          if ( v62 == 1 || !v49 || !v50 )
                            goto LABEL_144;
                          LOBYTE(v47) = 0;
                          v63 = &v49[v50];
                          v64 = v49 + 8;
                          if ( (unsigned __int8)((*v49 & 0x7F) - 114) <= 1u )
                          {
                            if ( v64 <= v63 )
                            {
                              LOBYTE(v47) = 1;
                              v52 = v49[2];
                              v51 = v49[1] & 0xF;
                              v53 = v49[3];
                            }
                          }
                          else
                          {
                            if ( v64 <= v63 )
                            {
                              v51 = v49[2] & 0xF;
                              v65 = v50;
                              if ( (unsigned int)(unsigned __int8)v49[7] + 8 <= v50 )
                                v65 = (unsigned __int8)v49[7] + 8;
                              v47 = (unsigned __int64)&v49[v65];
                              if ( (unsigned __int64)(v49 + 13) > v47 )
                                v101 = 0;
                              else
                                v101 = v49[12];
                              if ( (unsigned __int64)(v49 + 14) <= v47 )
                                v53 = v49[13];
                              LOBYTE(v47) = 1;
                            }
                            v52 = v101;
                          }
                          if ( (_BYTE)v47 )
                          {
                            v66 = v52;
                            v67 = v53;
                          }
                          else
                          {
LABEL_144:
                            v51 = 0;
                            v66 = 0;
                            v67 = 0LL;
                          }
                          LOBYTE(v100) = v48;
                          LOBYTE(v99) = v62;
                          LODWORD(v98) = *(_DWORD *)(a3 + 48);
                          McTemplateK0pduuuuup_EtwWriteTransfer(v67, v47, &v106, a3, v98, v99, v100, v51, v66, v67, a3);
                        }
                      }
LABEL_146:
                      v5 = v104;
LABEL_147:
                      IofCompleteRequest((PIRP)a3, 0);
                      v39 = 0;
LABEL_252:
                      ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v5 + 152));
                      return v39;
                    }
                    if ( v102 )
                      goto LABEL_122;
                  }
                }
                if ( ++v55 >= v105 )
                  goto LABEL_122;
              }
            case 0x1B:
              if ( *(_BYTE *)(v43 + 1) == 7 && !*(_DWORD *)(v43 + 8) )
              {
                if ( (byte_140171462 & 0x40) != 0 )
                {
                  v44 = *(unsigned int **)(a3 + 56);
                  if ( v44 )
                    v45 = *v44;
                  else
                    v45 = 0LL;
                  LODWORD(v99) = *(_DWORD *)(a3 + 48);
                  LODWORD(v98) = v45;
                  McTemplateK0pqd_EtwWriteTransfer(v45, v43, &v106, a3, v98, v99);
                }
                goto LABEL_147;
              }
              if ( (byte_140171462 & 0x20) == 0 )
                goto LABEL_147;
              v46 = &EventPnpRequestComplete;
              break;
            default:
              goto LABEL_147;
          }
          LODWORD(v98) = *(_DWORD *)(a3 + 48);
          McTemplateK0pd_EtwWriteTransfer(v42, v46, &v106, a3, v98);
          goto LABEL_147;
        }
        v11 = StorEtwLoggingEnabled == 0;
        v39 = -1073741637;
        *(_DWORD *)(a3 + 48) = -1073741637;
        if ( v11 )
          goto LABEL_212;
        v106 = 0LL;
        IoGetActivityIdIrp(a3, &v106);
        v69 = *(unsigned __int8 **)(a3 + 184);
        if ( *v69 != 14 )
        {
          v70 = *v69 - 15;
          if ( *v69 != 15 )
            goto LABEL_224;
          if ( byte_140171461 >= 0 )
            goto LABEL_212;
          v71 = *((_QWORD *)v69 + 1);
          v72 = 0;
          v73 = 0LL;
          v101 = 0;
          v74 = 0;
          v102 = 0;
          v75 = 0;
          v76 = 0;
          v77 = *(unsigned __int8 *)(v71 + 2);
          v78 = 0;
          if ( (_BYTE)v77 == 40 )
          {
            v79 = 0LL;
            v103 = 0;
            if ( *(_DWORD *)(v71 + 20) )
              goto LABEL_211;
            v80 = 0;
            v105 = *(_DWORD *)(v71 + 56);
            if ( !v105 )
              goto LABEL_186;
            while ( 1 )
            {
              v68 = *(unsigned int *)(v71 + 4LL * v80 + 120);
              if ( (unsigned int)v68 >= 0x80 )
              {
                v81 = *(unsigned int *)(v71 + 16);
                if ( (unsigned int)v68 < (unsigned int)v81 )
                {
                  v82 = (unsigned int)v68;
                  v83 = *(_DWORD *)(v71 + v68) - 64;
                  if ( v83 )
                  {
                    v68 = (unsigned int)(v83 - 1);
                    if ( (_DWORD)v68 )
                    {
                      if ( (_DWORD)v68 == 1 )
                      {
                        v68 = v82 + 40;
                        if ( v82 + 40 <= v81 )
                        {
LABEL_163:
                          if ( *(_DWORD *)(v71 + v82 + 12) )
                            v79 = (char *)(v82 + v71 + 32);
                          v73 = *(_BYTE **)(v71 + v82 + 24);
LABEL_184:
                          v74 = *(_BYTE *)(v71 + v82 + 9);
                          v72 = *(_BYTE *)(v71 + v82 + 8);
LABEL_185:
                          v76 = 0;
LABEL_186:
                          if ( v79 )
                          {
                            v86 = *v79;
                            v78 = 0;
LABEL_189:
                            LOBYTE(v68) = v86 - 8;
                            if ( (v68 & 0x5D) == 0 )
                            {
                              v87 = *(_BYTE *)(v71 + 3);
                              if ( v87 == 1 || !v73 || !v74 )
                                goto LABEL_209;
                              LOBYTE(v71) = 0;
                              v68 = (unsigned __int64)&v73[v74];
                              v88 = v73 + 8;
                              if ( (unsigned __int8)((*v73 & 0x7F) - 114) <= 1u )
                              {
                                if ( (unsigned __int64)v88 <= v68 )
                                {
                                  LOBYTE(v71) = 1;
                                  v76 = v73[2];
                                  v75 = v73[1] & 0xF;
                                  v78 = v73[3];
                                }
                              }
                              else
                              {
                                if ( (unsigned __int64)v88 <= v68 )
                                {
                                  v75 = v73[2] & 0xF;
                                  v89 = v74;
                                  if ( (unsigned int)(unsigned __int8)v73[7] + 8 <= v74 )
                                    v89 = (unsigned __int8)v73[7] + 8;
                                  v68 = (unsigned __int64)(v73 + 13);
                                  v71 = (unsigned __int64)&v73[v89];
                                  if ( (unsigned __int64)(v73 + 13) > v71 )
                                    v101 = 0;
                                  else
                                    v101 = v73[12];
                                  if ( (unsigned __int64)(v73 + 14) > v71 )
                                    v102 = 0;
                                  else
                                    v102 = *(_BYTE *)v68;
                                  LOBYTE(v71) = 1;
                                }
                                v76 = v101;
                                v78 = v102;
                              }
                              if ( (_BYTE)v71 )
                              {
                                LOBYTE(v8) = v76;
                                v90 = v78;
                              }
                              else
                              {
LABEL_209:
                                v75 = 0;
                                v90 = 0;
                              }
                              LOBYTE(v100) = v72;
                              LOBYTE(v99) = v87;
                              LODWORD(v98) = *(_DWORD *)(a3 + 48);
                              McTemplateK0pduuuuup_EtwWriteTransfer(
                                v68,
                                v71,
                                &v106,
                                a3,
                                v98,
                                v99,
                                v100,
                                v75,
                                v8,
                                v90,
                                a3);
                            }
                          }
LABEL_211:
                          v5 = v104;
                          goto LABEL_212;
                        }
                      }
                    }
                    else
                    {
                      v68 = v82 + 56;
                      if ( v82 + 56 <= v81 )
                      {
                        v103 = 1;
                        if ( *(_BYTE *)(v71 + v82 + 10) )
                          v79 = (char *)(v82 + v71 + 24);
                        v72 = *(_BYTE *)(v71 + v82 + 8);
                        v73 = *(_BYTE **)(v71 + v82 + 16);
                        v74 = *(_BYTE *)(v71 + v82 + 9);
                      }
                    }
                  }
                  else
                  {
                    v68 = v82 + 40;
                    if ( v82 + 40 <= v81 )
                    {
LABEL_181:
                      if ( *(_BYTE *)(v71 + v82 + 10) )
                        v79 = (char *)(v82 + v71 + 24);
                      v73 = *(_BYTE **)(v71 + v82 + 16);
                      goto LABEL_184;
                    }
                  }
                  if ( v103 )
                    goto LABEL_185;
                }
              }
              if ( ++v80 >= v105 )
                goto LABEL_185;
            }
          }
          goto LABEL_188;
        }
LABEL_213:
        if ( (byte_140171462 & 8) == 0 )
          goto LABEL_212;
        v85 = (const EVENT_DESCRIPTOR *)&EventNonReadWriteRequestComplete;
        goto LABEL_172;
      }
      v35 = v34 - 2687964;
      if ( !v35 )
      {
        PropertyIoctl = NvmeAdapterStorageInternalQueryPropertyIoctl(v5, a3);
        goto LABEL_78;
      }
      v36 = v35 - 8;
      if ( v36 )
      {
        v37 = v36 - 2048;
        if ( v37 )
        {
          if ( v37 == 204 )
          {
            PropertyIoctl = NvmeAdapterSetLedState(v5, a3);
LABEL_78:
            v39 = PropertyIoctl;
            goto LABEL_252;
          }
LABEL_221:
          v11 = StorEtwLoggingEnabled == 0;
          v39 = -1073741637;
          *(_DWORD *)(a3 + 48) = -1073741637;
          *(_BYTE *)(a3 + 141) = -84;
          if ( v11 )
            goto LABEL_212;
          v106 = 0LL;
          IoGetActivityIdIrp(a3, &v106);
          v69 = *(unsigned __int8 **)(a3 + 184);
          if ( *v69 != 14 )
          {
            v70 = *v69 - 15;
            if ( *v69 != 15 )
            {
LABEL_224:
              if ( v70 != 12 )
                goto LABEL_212;
              if ( v69[1] == 7 && !*((_DWORD *)v69 + 2) )
              {
                if ( (byte_140171462 & 0x40) != 0 )
                {
                  v84 = *(int **)(a3 + 56);
                  if ( v84 )
                    v8 = *v84;
                  LODWORD(v99) = *(_DWORD *)(a3 + 48);
                  LODWORD(v98) = v8;
                  McTemplateK0pqd_EtwWriteTransfer(v68, (__int64)v69, &v106, a3, v98, v99);
                }
                goto LABEL_212;
              }
              if ( (byte_140171462 & 0x20) == 0 )
              {
LABEL_212:
                IofCompleteRequest((PIRP)a3, 0);
                goto LABEL_252;
              }
              v85 = &EventPnpRequestComplete;
LABEL_172:
              LODWORD(v98) = *(_DWORD *)(a3 + 48);
              McTemplateK0pd_EtwWriteTransfer(v68, v85, &v106, a3, v98);
              goto LABEL_212;
            }
            if ( byte_140171461 >= 0 )
              goto LABEL_212;
            v71 = *((_QWORD *)v69 + 1);
            v72 = 0;
            v73 = 0LL;
            v101 = 0;
            v74 = 0;
            v102 = 0;
            v75 = 0;
            v76 = 0;
            v77 = *(unsigned __int8 *)(v71 + 2);
            v78 = 0;
            if ( (_BYTE)v77 == 40 )
            {
              v79 = 0LL;
              v103 = 0;
              if ( !*(_DWORD *)(v71 + 20) )
              {
                v95 = 0;
                v105 = *(_DWORD *)(v71 + 56);
                if ( v105 )
                {
                  while ( 1 )
                  {
                    v68 = *(unsigned int *)(v71 + 4LL * v95 + 120);
                    if ( (unsigned int)v68 >= 0x80 )
                    {
                      v96 = *(unsigned int *)(v71 + 16);
                      if ( (unsigned int)v68 < (unsigned int)v96 )
                      {
                        v82 = (unsigned int)v68;
                        v97 = *(_DWORD *)(v71 + v68) - 64;
                        if ( v97 )
                        {
                          v68 = (unsigned int)(v97 - 1);
                          if ( (_DWORD)v68 )
                          {
                            if ( (_DWORD)v68 == 1 )
                            {
                              v68 = v82 + 40;
                              if ( v82 + 40 <= v96 )
                                goto LABEL_163;
                            }
                          }
                          else
                          {
                            v68 = v82 + 56;
                            if ( v82 + 56 <= v96 )
                            {
                              v103 = 1;
                              if ( *(_BYTE *)(v71 + v82 + 10) )
                                v79 = (char *)(v82 + v71 + 24);
                              v72 = *(_BYTE *)(v71 + v82 + 8);
                              v73 = *(_BYTE **)(v71 + v82 + 16);
                              v74 = *(_BYTE *)(v71 + v82 + 9);
                            }
                          }
                        }
                        else
                        {
                          v68 = v82 + 40;
                          if ( v82 + 40 <= v96 )
                            goto LABEL_181;
                        }
                        if ( v103 )
                          goto LABEL_185;
                      }
                    }
                    if ( ++v95 >= v105 )
                      goto LABEL_185;
                  }
                }
                goto LABEL_186;
              }
              goto LABEL_211;
            }
LABEL_188:
            v86 = *(_BYTE *)(v71 + 72);
            v73 = *(_BYTE **)(v71 + 32);
            v74 = *(_BYTE *)(v71 + 11);
            v72 = *(_BYTE *)(v71 + 4);
            if ( !v77 )
              goto LABEL_189;
            goto LABEL_211;
          }
          goto LABEL_213;
        }
        InfoIoctl = NvmeAdapterFirmwareGetInfoIoctl(v5, a2, a3, &v101);
      }
      else
      {
        InfoIoctl = NvmeAdapterStorageQueryProperty(v5, a3, &v101);
      }
    }
    v39 = InfoIoctl;
    if ( v101 )
      goto LABEL_252;
    return v39;
  }
  v11 = StorEtwLoggingEnabled == 0;
  *(_QWORD *)(a3 + 56) = 0LL;
  *(_BYTE *)(a3 + 141) = -84;
  *(_DWORD *)(a3 + 48) = v9;
  if ( v11 )
    goto LABEL_69;
  v106 = 0LL;
  IoGetActivityIdIrp(a3, &v106);
  v13 = *(_QWORD *)(a3 + 184);
  if ( *(_BYTE *)v13 == 14 )
  {
    if ( (byte_140171462 & 8) == 0 )
      goto LABEL_69;
    v15 = (const EVENT_DESCRIPTOR *)&EventNonReadWriteRequestComplete;
    goto LABEL_68;
  }
  if ( *(_BYTE *)v13 != 15 )
  {
    if ( *(_BYTE *)v13 != 27 )
      goto LABEL_69;
    if ( *(_BYTE *)(v13 + 1) == 7 && !*(_DWORD *)(v13 + 8) )
    {
      if ( (byte_140171462 & 0x40) != 0 )
      {
        v14 = *(int **)(a3 + 56);
        if ( v14 )
          v8 = *v14;
        LODWORD(v99) = *(_DWORD *)(a3 + 48);
        LODWORD(v98) = v8;
        McTemplateK0pqd_EtwWriteTransfer(v12, v13, &v106, a3, v98, v99);
      }
      goto LABEL_69;
    }
    if ( (byte_140171462 & 0x20) == 0 )
      goto LABEL_69;
    v15 = &EventPnpRequestComplete;
LABEL_68:
    LODWORD(v98) = *(_DWORD *)(a3 + 48);
    McTemplateK0pd_EtwWriteTransfer(v12, v15, &v106, a3, v98);
    goto LABEL_69;
  }
  if ( byte_140171461 >= 0 )
    goto LABEL_69;
  v16 = *(_QWORD *)(v13 + 8);
  v17 = 0;
  v18 = 0LL;
  v101 = 0;
  v19 = 0;
  v20 = 0;
  v21 = 0;
  v22 = 0;
  if ( *(_BYTE *)(v16 + 2) != 40 )
  {
    v28 = *(_BYTE *)(v16 + 72);
    v18 = *(_BYTE **)(v16 + 32);
    v19 = *(_BYTE *)(v16 + 11);
    v17 = *(_BYTE *)(v16 + 4);
    if ( !*(_BYTE *)(v16 + 2) )
      goto LABEL_45;
    goto LABEL_69;
  }
  v23 = 0LL;
  v102 = 0;
  if ( *(_DWORD *)(v16 + 20) )
    goto LABEL_69;
  v24 = 0;
  LODWORD(v104) = *(_DWORD *)(v16 + 56);
  if ( !(_DWORD)v104 )
    goto LABEL_42;
  while ( 1 )
  {
    v12 = *(unsigned int *)(v16 + 4LL * v24 + 120);
    if ( (unsigned int)v12 >= 0x80 )
    {
      v25 = *(unsigned int *)(v16 + 16);
      if ( (unsigned int)v12 < (unsigned int)v25 )
        break;
    }
LABEL_36:
    if ( ++v24 >= (unsigned int)v104 )
      goto LABEL_42;
  }
  v26 = (unsigned int)v12;
  v27 = *(_DWORD *)(v12 + v16) - 64;
  if ( v27 )
  {
    v12 = (unsigned int)(v27 - 1);
    if ( (_DWORD)v12 )
    {
      if ( (_DWORD)v12 == 1 )
      {
        v12 = v26 + 40;
        if ( v26 + 40 <= v25 )
        {
          if ( *(_DWORD *)(v26 + v16 + 12) )
            v23 = (char *)(v26 + v16 + 32);
          v18 = *(_BYTE **)(v26 + v16 + 24);
          goto LABEL_41;
        }
      }
    }
    else
    {
      v12 = v26 + 56;
      if ( v26 + 56 <= v25 )
      {
        v102 = 1;
        if ( *(_BYTE *)(v26 + v16 + 10) )
          v23 = (char *)(v26 + v16 + 24);
        v17 = *(_BYTE *)(v26 + v16 + 8);
        v18 = *(_BYTE **)(v26 + v16 + 16);
        v19 = *(_BYTE *)(v26 + v16 + 9);
      }
    }
    goto LABEL_35;
  }
  v12 = v26 + 40;
  if ( v26 + 40 > v25 )
  {
LABEL_35:
    if ( v102 )
      goto LABEL_42;
    goto LABEL_36;
  }
  if ( *(_BYTE *)(v26 + v16 + 10) )
    v23 = (char *)(v26 + v16 + 24);
  v18 = *(_BYTE **)(v26 + v16 + 16);
LABEL_41:
  v19 = *(_BYTE *)(v26 + v16 + 9);
  v17 = *(_BYTE *)(v26 + v16 + 8);
LABEL_42:
  if ( v23 )
  {
    v28 = *v23;
    v21 = 0;
LABEL_45:
    LOBYTE(v12) = v28 - 8;
    if ( (v12 & 0x5D) == 0 )
    {
      v29 = *(_BYTE *)(v16 + 3);
      if ( v29 == 1 || !v18 || !v19 )
        goto LABEL_64;
      LOBYTE(v16) = 0;
      v12 = (unsigned __int64)&v18[v19];
      v30 = v18 + 8;
      if ( (unsigned __int8)((*v18 & 0x7F) - 114) <= 1u )
      {
        if ( (unsigned __int64)v30 <= v12 )
        {
          LOBYTE(v16) = 1;
          v21 = v18[2];
          v20 = v18[1] & 0xF;
          v22 = v18[3];
        }
      }
      else
      {
        if ( (unsigned __int64)v30 <= v12 )
        {
          v20 = v18[2] & 0xF;
          v31 = v19;
          if ( (unsigned int)(unsigned __int8)v18[7] + 8 <= v19 )
            v31 = (unsigned __int8)v18[7] + 8;
          v12 = (unsigned __int64)(v18 + 13);
          v16 = (unsigned __int64)&v18[v31];
          if ( (unsigned __int64)(v18 + 13) > v16 )
            v101 = 0;
          else
            v101 = v18[12];
          if ( (unsigned __int64)(v18 + 14) <= v16 )
            v22 = *(_BYTE *)v12;
          LOBYTE(v16) = 1;
        }
        v21 = v101;
      }
      if ( (_BYTE)v16 )
      {
        LOBYTE(v8) = v21;
        v32 = v22;
      }
      else
      {
LABEL_64:
        v20 = 0;
        v32 = 0;
      }
      LOBYTE(v100) = v17;
      LOBYTE(v99) = v29;
      LODWORD(v98) = *(_DWORD *)(a3 + 48);
      McTemplateK0pduuuuup_EtwWriteTransfer(v12, v16, &v106, a3, v98, v99, v100, v20, v8, v32, a3);
    }
  }
LABEL_69:
  IofCompleteRequest((PIRP)a3, 0);
  return v105;
}
