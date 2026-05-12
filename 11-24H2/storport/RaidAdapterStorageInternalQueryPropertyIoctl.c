/*
 * XREFs of RaidAdapterStorageInternalQueryPropertyIoctl @ 0x140062DCC
 * Callers:
 *     RaidAdapterDeviceControlIrp @ 0x14002B3B0 (RaidAdapterDeviceControlIrp.c)
 * Callees:
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x140052DF0 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140052EC8 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x1400569AC (McTemplateK0pqd_EtwWriteTransfer.c)
 *     StorAdapterQueryAdapterObjectProperty @ 0x1400669DC (StorAdapterQueryAdapterObjectProperty.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 *     StorAdapterQueryIdentifyControllerProperty @ 0x14018CF64 (StorAdapterQueryIdentifyControllerProperty.c)
 *     StorQueryMFNDCapability @ 0x14018EC48 (StorQueryMFNDCapability.c)
 *     StorQueryMFNDChildPFCommandPermission @ 0x14018EE90 (StorQueryMFNDChildPFCommandPermission.c)
 *     StorQueryMFNDChildPFGlobalProperty @ 0x14018F10C (StorQueryMFNDChildPFGlobalProperty.c)
 *     StorQueryMFNDChildPFList @ 0x14018F2D0 (StorQueryMFNDChildPFList.c)
 *     StorQueryMFNDChildPFQoSStatisticsLog @ 0x14018F94C (StorQueryMFNDChildPFQoSStatisticsLog.c)
 *     StorQueryMFNDChildPFQoSStatisticsProperty @ 0x14018FC9C (StorQueryMFNDChildPFQoSStatisticsProperty.c)
 *     StorQueryMFNDChildPFQueuesState @ 0x14018FEA4 (StorQueryMFNDChildPFQueuesState.c)
 *     StorQueryMFNDChildPFSettings @ 0x140190278 (StorQueryMFNDChildPFSettings.c)
 *     StorQueryMFNDMigrationQoS @ 0x140190584 (StorQueryMFNDMigrationQoS.c)
 *     StorQueryMFNDNamespacePageMap @ 0x140190768 (StorQueryMFNDNamespacePageMap.c)
 *     StorQueryMFNDOperationInfo @ 0x140190B74 (StorQueryMFNDOperationInfo.c)
 *     StorQueryPciLinkInformation @ 0x1401B3514 (StorQueryPciLinkInformation.c)
 */

__int64 __fastcall RaidAdapterStorageInternalQueryPropertyIoctl(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  signed int *v5; // rdx
  int v7; // ebx
  unsigned int v8; // esi
  unsigned int v9; // ecx
  signed int v10; // ecx
  int v11; // eax
  signed int v12; // edx
  int v13; // ecx
  int v14; // ecx
  int v15; // ecx
  int v16; // ecx
  int v17; // ecx
  int v18; // ecx
  unsigned int v19; // eax
  int v20; // ecx
  int v21; // ecx
  int v22; // ecx
  int v23; // ecx
  int v24; // ecx
  int v25; // ecx
  bool v26; // zf
  unsigned __int64 v27; // rcx
  unsigned __int8 *v28; // rdx
  int v29; // eax
  unsigned __int64 v30; // rdx
  char v31; // r13
  _BYTE *v32; // r9
  unsigned __int8 v33; // r10
  char v34; // r11
  char v35; // r15
  char v36; // r14
  char *v37; // r14
  unsigned int v38; // r12d
  unsigned __int64 v39; // r15
  __int64 v40; // r8
  int v41; // ecx
  const EVENT_DESCRIPTOR *v42; // rdx
  char v43; // cl
  char v44; // r8
  _BYTE *v45; // rax
  unsigned int v46; // eax
  char v47; // al
  int *v48; // rax
  _BYTE *v49; // r9
  unsigned __int8 v50; // r10
  char v51; // r14
  char v52; // r15
  char v53; // r11
  char *v54; // r11
  unsigned int v55; // r12d
  unsigned __int64 v56; // r15
  __int64 v57; // r8
  int v58; // ecx
  char v59; // cl
  _BYTE *v60; // rax
  unsigned int v61; // eax
  char v62; // al
  char v64; // [rsp+38h] [rbp-31h]
  char v65; // [rsp+40h] [rbp-29h]
  char v66; // [rsp+48h] [rbp-21h]
  __int64 v67; // [rsp+50h] [rbp-19h]
  char v68; // [rsp+60h] [rbp-9h]
  char v69; // [rsp+60h] [rbp-9h]
  char v70; // [rsp+61h] [rbp-8h]
  char v71; // [rsp+61h] [rbp-8h]
  char v72; // [rsp+62h] [rbp-7h]
  char v73; // [rsp+62h] [rbp-7h]
  __int64 v74; // [rsp+68h] [rbp-1h] BYREF
  unsigned int v75; // [rsp+70h] [rbp+7h]
  GUID v76; // [rsp+78h] [rbp+Fh] BYREF

  v3 = *(_QWORD *)(a2 + 184);
  v5 = *(signed int **)(a2 + 24);
  v7 = 0;
  v8 = -1073741811;
  v9 = *(_DWORD *)(v3 + 16);
  v74 = *(unsigned int *)(v3 + 8);
  if ( !v5 || v9 < 8 || (v10 = *v5, (unsigned int)*v5 > 0x1C) || (v11 = 294108946, !_bittest(&v11, v10)) )
  {
    v26 = StorEtwLoggingEnabled == 0;
    v8 = -1073741808;
    *(_DWORD *)(a2 + 48) = -1073741808;
    *(_QWORD *)(a2 + 56) = 0LL;
    *(_BYTE *)(a2 + 141) = -84;
    if ( v26 )
      goto LABEL_163;
    v76 = 0LL;
    IoGetActivityIdIrp(a2, &v76);
    v28 = *(unsigned __int8 **)(a2 + 184);
    if ( *v28 != 14 )
    {
      v29 = *v28 - 15;
      if ( *v28 == 15 )
      {
        if ( byte_140171461 >= 0 )
          goto LABEL_163;
        v30 = *((_QWORD *)v28 + 1);
        v31 = 0;
        v49 = 0LL;
        v69 = 0;
        v50 = 0;
        v71 = 0;
        v51 = 0;
        v52 = 0;
        v53 = 0;
        if ( *(_BYTE *)(v30 + 2) != 40 )
        {
          v59 = *(_BYTE *)(v30 + 72);
          v49 = *(_BYTE **)(v30 + 32);
          v50 = *(_BYTE *)(v30 + 11);
          v31 = *(_BYTE *)(v30 + 4);
          if ( *(_BYTE *)(v30 + 2) )
            goto LABEL_163;
          goto LABEL_137;
        }
        v54 = 0LL;
        v73 = 0;
        if ( *(_DWORD *)(v30 + 20) )
          goto LABEL_163;
        v55 = 0;
        v75 = *(_DWORD *)(v30 + 56);
        if ( !v75 )
          goto LABEL_134;
        while ( 1 )
        {
          v27 = *(unsigned int *)(v30 + 4LL * v55 + 120);
          if ( (unsigned int)v27 >= 0x80 )
          {
            v56 = *(unsigned int *)(v30 + 16);
            if ( (unsigned int)v27 < (unsigned int)v56 )
            {
              v57 = (unsigned int)v27;
              v58 = *(_DWORD *)(v27 + v30) - 64;
              if ( v58 )
              {
                v27 = (unsigned int)(v58 - 1);
                if ( (_DWORD)v27 )
                {
                  if ( (_DWORD)v27 == 1 )
                  {
                    v27 = v57 + 40;
                    if ( v57 + 40 <= v56 )
                    {
                      if ( *(_DWORD *)(v57 + v30 + 12) )
                        v54 = (char *)(v57 + v30 + 32);
                      v49 = *(_BYTE **)(v57 + v30 + 24);
LABEL_132:
                      v50 = *(_BYTE *)(v57 + v30 + 9);
                      v31 = *(_BYTE *)(v57 + v30 + 8);
LABEL_133:
                      v52 = 0;
LABEL_134:
                      if ( !v54 )
                        goto LABEL_163;
                      v59 = *v54;
                      v53 = 0;
LABEL_137:
                      LOBYTE(v27) = v59 - 8;
                      if ( (v27 & 0x5D) != 0 )
                        goto LABEL_163;
                      v44 = *(_BYTE *)(v30 + 3);
                      if ( v44 == 1 || !v49 || !v50 )
                        goto LABEL_157;
                      LOBYTE(v30) = 0;
                      v27 = (unsigned __int64)&v49[v50];
                      v60 = v49 + 8;
                      if ( (unsigned __int8)((*v49 & 0x7F) - 114) <= 1u )
                      {
                        if ( (unsigned __int64)v60 <= v27 )
                        {
                          LOBYTE(v30) = 1;
                          v52 = v49[2];
                          v51 = v49[1] & 0xF;
                          v53 = v49[3];
                        }
                      }
                      else
                      {
                        if ( (unsigned __int64)v60 <= v27 )
                        {
                          v51 = v49[2] & 0xF;
                          v61 = v50;
                          if ( (unsigned int)(unsigned __int8)v49[7] + 8 <= v50 )
                            v61 = (unsigned __int8)v49[7] + 8;
                          v27 = (unsigned __int64)(v49 + 13);
                          v30 = (unsigned __int64)&v49[v61];
                          if ( (unsigned __int64)(v49 + 13) > v30 )
                            v69 = 0;
                          else
                            v69 = v49[12];
                          if ( (unsigned __int64)(v49 + 14) > v30 )
                            v71 = 0;
                          else
                            v71 = *(_BYTE *)v27;
                          LOBYTE(v30) = 1;
                        }
                        v53 = v71;
                        v52 = v69;
                      }
                      if ( (_BYTE)v30 )
                      {
                        LOBYTE(v7) = v52;
                        v62 = v53;
                      }
                      else
                      {
LABEL_157:
                        v51 = 0;
                        v62 = 0;
                      }
                      v67 = a2;
                      v66 = v62;
                      v65 = v7;
                      v64 = v51;
LABEL_159:
                      McTemplateK0pduuuuup_EtwWriteTransfer(
                        v27,
                        v30,
                        &v76,
                        a2,
                        *(_DWORD *)(a2 + 48),
                        v44,
                        v31,
                        v64,
                        v65,
                        v66,
                        v67);
                      goto LABEL_163;
                    }
                  }
                }
                else
                {
                  v27 = v57 + 56;
                  if ( v57 + 56 <= v56 )
                  {
                    v73 = 1;
                    if ( *(_BYTE *)(v57 + v30 + 10) )
                      v54 = (char *)(v57 + v30 + 24);
                    v31 = *(_BYTE *)(v57 + v30 + 8);
                    v49 = *(_BYTE **)(v57 + v30 + 16);
                    v50 = *(_BYTE *)(v57 + v30 + 9);
                  }
                }
              }
              else
              {
                v27 = v57 + 40;
                if ( v57 + 40 <= v56 )
                {
                  if ( *(_BYTE *)(v57 + v30 + 10) )
                    v54 = (char *)(v57 + v30 + 24);
                  v49 = *(_BYTE **)(v57 + v30 + 16);
                  goto LABEL_132;
                }
              }
              if ( v73 )
                goto LABEL_133;
            }
          }
          if ( ++v55 >= v75 )
            goto LABEL_133;
        }
      }
      goto LABEL_101;
    }
LABEL_160:
    if ( (byte_140171462 & 8) == 0 )
      goto LABEL_163;
    v42 = (const EVENT_DESCRIPTOR *)&EventNonReadWriteRequestComplete;
    goto LABEL_162;
  }
  v12 = v5[1];
  if ( !v12 )
  {
    if ( v10 > 13 )
    {
      v20 = v10 - 15;
      if ( !v20 )
      {
        v19 = StorQueryMFNDChildPFCommandPermission(a1, a2, &v74);
        goto LABEL_41;
      }
      v21 = v20 - 1;
      if ( !v21 )
      {
        v19 = StorQueryMFNDMigrationQoS(a1, a2, &v74);
        goto LABEL_41;
      }
      v22 = v21 - 1;
      if ( !v22 )
      {
        v19 = StorQueryMFNDNamespacePageMap(a1, a2, &v74);
        goto LABEL_41;
      }
      v23 = v22 - 1;
      if ( !v23 )
      {
        v19 = StorQueryMFNDChildPFQueuesState(a1, a2, &v74);
        goto LABEL_41;
      }
      v24 = v23 - 5;
      if ( !v24 )
      {
        v19 = StorQueryMFNDChildPFQoSStatisticsProperty(a1, a2, &v74);
        goto LABEL_41;
      }
      v25 = v24 - 1;
      if ( !v25 )
      {
        v19 = StorQueryMFNDChildPFQoSStatisticsLog(a1, a2, &v74);
        goto LABEL_41;
      }
      if ( v25 == 4 )
      {
        v19 = StorQueryPciLinkInformation(a1, a2, &v74);
        goto LABEL_41;
      }
    }
    else
    {
      if ( v10 == 13 )
      {
        v19 = StorQueryMFNDChildPFSettings(a1, a2, &v74);
        goto LABEL_41;
      }
      v13 = v10 - 1;
      if ( !v13 )
      {
        v19 = StorAdapterQueryIdentifyControllerProperty(a1, a2, &v74);
        goto LABEL_41;
      }
      v14 = v13 - 3;
      if ( v14 )
      {
        v15 = v14 - 4;
        if ( v15 )
        {
          v16 = v15 - 1;
          if ( v16 )
          {
            v17 = v16 - 1;
            if ( v17 )
            {
              v18 = v17 - 1;
              if ( v18 )
              {
                if ( v18 == 1 )
                {
                  v8 = StorQueryMFNDChildPFGlobalProperty(a1, a2, &v74);
                  *(_QWORD *)(a2 + 56) = v74;
                  goto LABEL_42;
                }
                goto LABEL_24;
              }
              v19 = StorQueryMFNDOperationInfo(a1, a2, &v74);
            }
            else
            {
              v19 = StorQueryMFNDCapability(a1, a2, &v74);
            }
          }
          else
          {
            v19 = StorQueryMFNDChildPFList(a1, a2, &v74);
          }
        }
        else
        {
          v19 = StorAdapterQueryAdapterObjectProperty(a1, a2, &v74, a3);
        }
LABEL_41:
        v8 = v19;
        *(_QWORD *)(a2 + 56) = v74;
        goto LABEL_42;
      }
      v8 = -1073741808;
    }
LABEL_24:
    *(_QWORD *)(a2 + 56) = 0LL;
    goto LABEL_42;
  }
  if ( v12 == 1 )
  {
    v8 = 0;
  }
  else
  {
    *(_QWORD *)(a2 + 56) = 0LL;
    v8 = -1073741808;
  }
LABEL_42:
  v26 = StorEtwLoggingEnabled == 0;
  *(_BYTE *)(a2 + 141) = -84;
  *(_DWORD *)(a2 + 48) = v8;
  if ( v26 )
    goto LABEL_163;
  v76 = 0LL;
  IoGetActivityIdIrp(a2, &v76);
  v28 = *(unsigned __int8 **)(a2 + 184);
  if ( *v28 == 14 )
    goto LABEL_160;
  v29 = *v28 - 15;
  if ( *v28 != 15 )
  {
LABEL_101:
    if ( v29 != 12 )
      goto LABEL_163;
    if ( v28[1] == 7 && !*((_DWORD *)v28 + 2) )
    {
      if ( (byte_140171462 & 0x40) != 0 )
      {
        v48 = *(int **)(a2 + 56);
        if ( v48 )
          v7 = *v48;
        McTemplateK0pqd_EtwWriteTransfer(v27, (__int64)v28, &v76, a2, v7, *(_DWORD *)(a2 + 48));
      }
      goto LABEL_163;
    }
    if ( (byte_140171462 & 0x20) == 0 )
      goto LABEL_163;
    v42 = &EventPnpRequestComplete;
LABEL_162:
    McTemplateK0pd_EtwWriteTransfer(v27, v42, &v76, a2, *(_DWORD *)(a2 + 48));
    goto LABEL_163;
  }
  if ( byte_140171461 >= 0 )
    goto LABEL_163;
  v30 = *((_QWORD *)v28 + 1);
  v31 = 0;
  v32 = 0LL;
  v68 = 0;
  v33 = 0;
  v70 = 0;
  v34 = 0;
  v35 = 0;
  v36 = 0;
  if ( *(_BYTE *)(v30 + 2) != 40 )
  {
    v43 = *(_BYTE *)(v30 + 72);
    v32 = *(_BYTE **)(v30 + 32);
    v33 = *(_BYTE *)(v30 + 11);
    v31 = *(_BYTE *)(v30 + 4);
    if ( *(_BYTE *)(v30 + 2) )
      goto LABEL_163;
LABEL_76:
    LOBYTE(v27) = v43 - 8;
    if ( (v27 & 0x5D) != 0 )
      goto LABEL_163;
    v44 = *(_BYTE *)(v30 + 3);
    if ( v44 == 1 || !v32 || !v33 )
      goto LABEL_96;
    LOBYTE(v30) = 0;
    v27 = (unsigned __int64)&v32[v33];
    v45 = v32 + 8;
    if ( (unsigned __int8)((*v32 & 0x7F) - 114) <= 1u )
    {
      if ( (unsigned __int64)v45 <= v27 )
      {
        LOBYTE(v30) = 1;
        v35 = v32[2];
        v34 = v32[1] & 0xF;
        v36 = v32[3];
      }
    }
    else
    {
      if ( (unsigned __int64)v45 <= v27 )
      {
        v34 = v32[2] & 0xF;
        v46 = v33;
        if ( (unsigned int)(unsigned __int8)v32[7] + 8 <= v33 )
          v46 = (unsigned __int8)v32[7] + 8;
        v27 = (unsigned __int64)(v32 + 13);
        v30 = (unsigned __int64)&v32[v46];
        if ( (unsigned __int64)(v32 + 13) > v30 )
          v68 = 0;
        else
          v68 = v32[12];
        if ( (unsigned __int64)(v32 + 14) > v30 )
          v70 = 0;
        else
          v70 = *(_BYTE *)v27;
        LOBYTE(v30) = 1;
      }
      v36 = v70;
      v35 = v68;
    }
    if ( (_BYTE)v30 )
    {
      LOBYTE(v7) = v35;
      v47 = v36;
    }
    else
    {
LABEL_96:
      v34 = 0;
      v47 = 0;
    }
    v67 = a2;
    v66 = v47;
    v65 = v7;
    v64 = v34;
    goto LABEL_159;
  }
  v37 = 0LL;
  v72 = 0;
  if ( *(_DWORD *)(v30 + 20) )
    goto LABEL_163;
  v38 = 0;
  v75 = *(_DWORD *)(v30 + 56);
  if ( !v75 )
    goto LABEL_73;
  while ( 1 )
  {
    v27 = *(unsigned int *)(v30 + 4LL * v38 + 120);
    if ( (unsigned int)v27 >= 0x80 )
    {
      v39 = *(unsigned int *)(v30 + 16);
      if ( (unsigned int)v27 < (unsigned int)v39 )
        break;
    }
LABEL_66:
    if ( ++v38 >= v75 )
      goto LABEL_72;
  }
  v40 = (unsigned int)v27;
  v41 = *(_DWORD *)(v30 + v27) - 64;
  if ( v41 )
  {
    v27 = (unsigned int)(v41 - 1);
    if ( (_DWORD)v27 )
    {
      if ( (_DWORD)v27 == 1 )
      {
        v27 = v40 + 40;
        if ( v40 + 40 <= v39 )
        {
          if ( *(_DWORD *)(v30 + v40 + 12) )
            v37 = (char *)(v40 + v30 + 32);
          v32 = *(_BYTE **)(v30 + v40 + 24);
          goto LABEL_71;
        }
      }
    }
    else
    {
      v27 = v40 + 56;
      if ( v40 + 56 <= v39 )
      {
        v72 = 1;
        if ( *(_BYTE *)(v30 + v40 + 10) )
          v37 = (char *)(v40 + v30 + 24);
        v31 = *(_BYTE *)(v30 + v40 + 8);
        v32 = *(_BYTE **)(v30 + v40 + 16);
        v33 = *(_BYTE *)(v30 + v40 + 9);
      }
    }
    goto LABEL_65;
  }
  v27 = v40 + 40;
  if ( v40 + 40 > v39 )
  {
LABEL_65:
    if ( v72 )
      goto LABEL_72;
    goto LABEL_66;
  }
  if ( *(_BYTE *)(v30 + v40 + 10) )
    v37 = (char *)(v40 + v30 + 24);
  v32 = *(_BYTE **)(v30 + v40 + 16);
LABEL_71:
  v33 = *(_BYTE *)(v30 + v40 + 9);
  v31 = *(_BYTE *)(v30 + v40 + 8);
LABEL_72:
  v35 = 0;
LABEL_73:
  if ( v37 )
  {
    v43 = *v37;
    v36 = 0;
    goto LABEL_76;
  }
LABEL_163:
  IofCompleteRequest((PIRP)a2, 0);
  return v8;
}
