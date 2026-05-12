/*
 * XREFs of NvmeNamespaceQueryCapabilitiesIrp @ 0x1401A5E28
 * Callers:
 *     NvmeNamespacePnpIrp @ 0x140105C68 (NvmeNamespacePnpIrp.c)
 * Callees:
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x140052DF0 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140052EC8 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x1400569AC (McTemplateK0pqd_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 *     memset_0 @ 0x140143A80 (memset_0.c)
 *     PortWdmGetDeviceCapabilities @ 0x1401B8450 (PortWdmGetDeviceCapabilities.c)
 */

__int64 __fastcall NvmeNamespaceQueryCapabilitiesIrp(__int64 a1, __int64 a2)
{
  int v4; // eax
  int v5; // edi
  __int64 v6; // rbx
  unsigned int DeviceCapabilities; // r14d
  bool v8; // zf
  unsigned __int64 v9; // rcx
  __int64 v10; // rdx
  int *v11; // rax
  const EVENT_DESCRIPTOR *v12; // rdx
  unsigned __int64 v13; // rdx
  char v14; // r15
  _BYTE *v15; // r9
  unsigned __int8 v16; // r10
  char v17; // bl
  char v18; // r11
  char v19; // r12
  char *v20; // r11
  unsigned int *v21; // r13
  __int64 v22; // rax
  unsigned __int64 v23; // r14
  char v24; // cl
  char v25; // r8
  _BYTE *v26; // rax
  unsigned int v27; // eax
  char v28; // al
  unsigned __int64 v30; // rcx
  __int64 v31; // rdx
  int *v32; // rax
  const EVENT_DESCRIPTOR *v33; // rdx
  unsigned __int64 v34; // rdx
  char v35; // r15
  _BYTE *v36; // r9
  unsigned __int8 v37; // r10
  char v38; // bl
  char v39; // r11
  char v40; // r12
  char *v41; // r11
  unsigned int *v42; // r13
  __int64 v43; // rax
  unsigned __int64 v44; // r14
  char v45; // cl
  char v46; // r8
  _BYTE *v47; // rax
  unsigned int v48; // eax
  char v49; // al
  int v50; // [rsp+20h] [rbp-89h]
  char v51; // [rsp+60h] [rbp-49h]
  char v52; // [rsp+60h] [rbp-49h]
  char v53; // [rsp+61h] [rbp-48h]
  char v54; // [rsp+61h] [rbp-48h]
  int v55; // [rsp+64h] [rbp-45h]
  int v56; // [rsp+64h] [rbp-45h]
  unsigned int v57; // [rsp+68h] [rbp-41h]
  unsigned int v58; // [rsp+6Ch] [rbp-3Dh]
  unsigned int v59; // [rsp+6Ch] [rbp-3Dh]
  GUID v60; // [rsp+70h] [rbp-39h] BYREF
  _OWORD v61[4]; // [rsp+80h] [rbp-29h] BYREF

  memset_0(v61, 0, sizeof(v61));
  v4 = *(_DWORD *)(a1 + 96);
  v5 = 0;
  if ( !v4 || (unsigned int)(v4 - 5) <= 1 )
  {
    v8 = StorEtwLoggingEnabled == 0;
    *(_QWORD *)(a2 + 56) = 0LL;
    *(_BYTE *)(a2 + 141) = -84;
    *(_DWORD *)(a2 + 48) = -1073741810;
    if ( v8 )
      goto LABEL_137;
    v60 = 0LL;
    IoGetActivityIdIrp(a2, &v60);
    v31 = *(_QWORD *)(a2 + 184);
    switch ( *(_BYTE *)v31 )
    {
      case 0xE:
        if ( (byte_140171462 & 8) == 0 )
          goto LABEL_137;
        v30 = *(unsigned int *)(a2 + 48);
        v33 = &EventNonReadWriteRequestComplete;
        v50 = *(_DWORD *)(a2 + 48);
        break;
      case 0xF:
        if ( byte_140171461 >= 0 )
          goto LABEL_137;
        v34 = *(_QWORD *)(v31 + 8);
        v35 = 0;
        v36 = 0LL;
        v52 = 0;
        v37 = 0;
        v38 = 0;
        v39 = 0;
        v40 = 0;
        if ( *(_BYTE *)(v34 + 2) != 40 )
        {
          v45 = *(_BYTE *)(v34 + 72);
          v36 = *(_BYTE **)(v34 + 32);
          v37 = *(_BYTE *)(v34 + 11);
          v35 = *(_BYTE *)(v34 + 4);
          if ( !*(_BYTE *)(v34 + 2) )
            goto LABEL_113;
          goto LABEL_137;
        }
        v41 = 0LL;
        v54 = 0;
        if ( *(_DWORD *)(v34 + 20) )
          goto LABEL_137;
        v30 = 0LL;
        v56 = 0;
        v59 = *(_DWORD *)(v34 + 56);
        if ( !v59 )
          goto LABEL_110;
        v42 = (unsigned int *)(v34 + 120);
        while ( 1 )
        {
          v43 = *v42;
          if ( (unsigned int)v43 >= 0x80 )
          {
            v44 = *(unsigned int *)(v34 + 16);
            if ( (unsigned int)v43 < (unsigned int)v44 )
            {
              if ( *(_DWORD *)(v43 + v34) == 64 )
              {
                v30 = v43 + 40;
                if ( v43 + 40 <= v44 )
                {
                  if ( *(_BYTE *)(v43 + v34 + 10) )
                    v41 = (char *)(v43 + v34 + 24);
                  v36 = *(_BYTE **)(v43 + v34 + 16);
LABEL_109:
                  v37 = *(_BYTE *)(v43 + v34 + 9);
                  v35 = *(_BYTE *)(v43 + v34 + 8);
LABEL_110:
                  if ( v41 )
                  {
                    v45 = *v41;
                    v39 = 0;
LABEL_113:
                    LOBYTE(v30) = v45 - 8;
                    if ( (v30 & 0x5D) == 0 )
                    {
                      v46 = *(_BYTE *)(v34 + 3);
                      if ( v46 == 1 || !v36 || !v37 )
                        goto LABEL_132;
                      LOBYTE(v34) = 0;
                      v30 = (unsigned __int64)&v36[v37];
                      v47 = v36 + 8;
                      if ( (unsigned __int8)((*v36 & 0x7F) - 114) <= 1u )
                      {
                        if ( (unsigned __int64)v47 <= v30 )
                        {
                          LOBYTE(v34) = 1;
                          v39 = v36[2];
                          v38 = v36[1] & 0xF;
                          v40 = v36[3];
                        }
                      }
                      else
                      {
                        if ( (unsigned __int64)v47 <= v30 )
                        {
                          v38 = v36[2] & 0xF;
                          v48 = v37;
                          if ( (unsigned int)(unsigned __int8)v36[7] + 8 <= v37 )
                            v48 = (unsigned __int8)v36[7] + 8;
                          v30 = (unsigned __int64)(v36 + 13);
                          v34 = (unsigned __int64)&v36[v48];
                          if ( (unsigned __int64)(v36 + 13) > v34 )
                            v52 = 0;
                          else
                            v52 = v36[12];
                          if ( (unsigned __int64)(v36 + 14) <= v34 )
                            v40 = *(_BYTE *)v30;
                          LOBYTE(v34) = 1;
                        }
                        v39 = v52;
                      }
                      if ( (_BYTE)v34 )
                      {
                        LOBYTE(v5) = v39;
                        v49 = v40;
                      }
                      else
                      {
LABEL_132:
                        v38 = 0;
                        v49 = 0;
                      }
                      McTemplateK0pduuuuup_EtwWriteTransfer(
                        v30,
                        v34,
                        &v60,
                        a2,
                        *(_DWORD *)(a2 + 48),
                        v46,
                        v35,
                        v38,
                        v5,
                        v49,
                        a2);
                    }
                  }
                  goto LABEL_137;
                }
              }
              else
              {
                v30 = (unsigned int)(*(_DWORD *)(v43 + v34) - 65);
                if ( *(_DWORD *)(v43 + v34) == 65 )
                {
                  v30 = v43 + 56;
                  if ( v43 + 56 <= v44 )
                  {
                    v54 = 1;
                    if ( *(_BYTE *)(v43 + v34 + 10) )
                      v41 = (char *)(v43 + v34 + 24);
                    v35 = *(_BYTE *)(v43 + v34 + 8);
                    v36 = *(_BYTE **)(v43 + v34 + 16);
                    v37 = *(_BYTE *)(v43 + v34 + 9);
                  }
                }
                else if ( *(_DWORD *)(v43 + v34) == 66 )
                {
                  v30 = v43 + 40;
                  if ( v43 + 40 <= v44 )
                  {
                    if ( *(_DWORD *)(v43 + v34 + 12) )
                      v41 = (char *)(v43 + v34 + 32);
                    v36 = *(_BYTE **)(v43 + v34 + 24);
                    goto LABEL_109;
                  }
                }
              }
              if ( v54 )
                goto LABEL_110;
              LODWORD(v30) = v56;
            }
          }
          v30 = (unsigned int)(v30 + 1);
          ++v42;
          v56 = v30;
          if ( (unsigned int)v30 >= v59 )
            goto LABEL_110;
        }
      case 0x1B:
        if ( *(_BYTE *)(v31 + 1) == 7 && !*(_DWORD *)(v31 + 8) )
        {
          if ( (byte_140171462 & 0x40) != 0 )
          {
            v32 = *(int **)(a2 + 56);
            if ( v32 )
              v5 = *v32;
            McTemplateK0pqd_EtwWriteTransfer(v30, v31, &v60, a2, v5, *(_DWORD *)(a2 + 48));
          }
          goto LABEL_137;
        }
        if ( (byte_140171462 & 0x20) == 0 )
        {
LABEL_137:
          IofCompleteRequest((PIRP)a2, 0);
          return 3221225486LL;
        }
        v33 = &EventPnpRequestComplete;
        v50 = *(_DWORD *)(a2 + 48);
        break;
      default:
        goto LABEL_137;
    }
    McTemplateK0pd_EtwWriteTransfer(v30, v33, &v60, a2, v50);
    goto LABEL_137;
  }
  v6 = *(_QWORD *)(*(_QWORD *)(a2 + 184) + 8LL);
  DeviceCapabilities = PortWdmGetDeviceCapabilities(
                         *(PDEVICE_OBJECT *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 128LL) + 8LL),
                         v61);
  *(_OWORD *)v6 = v61[0];
  v57 = DeviceCapabilities;
  *(_OWORD *)(v6 + 16) = v61[1];
  *(_OWORD *)(v6 + 32) = v61[2];
  *(_OWORD *)(v6 + 48) = v61[3];
  *(_DWORD *)(v6 + 4) |= 0x1C0u;
  v8 = StorEtwLoggingEnabled == 0;
  *(_BYTE *)(a2 + 141) = -84;
  *(_DWORD *)(a2 + 48) = DeviceCapabilities;
  if ( v8 )
    goto LABEL_70;
  v60 = 0LL;
  IoGetActivityIdIrp(a2, &v60);
  v10 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)v10 == 14 )
  {
    if ( (byte_140171462 & 8) == 0 )
      goto LABEL_70;
    v12 = &EventNonReadWriteRequestComplete;
    goto LABEL_69;
  }
  if ( *(_BYTE *)v10 != 15 )
  {
    if ( *(_BYTE *)v10 != 27 )
      goto LABEL_70;
    if ( *(_BYTE *)(v10 + 1) == 7 && !*(_DWORD *)(v10 + 8) )
    {
      if ( (byte_140171462 & 0x40) != 0 )
      {
        v11 = *(int **)(a2 + 56);
        if ( v11 )
          v5 = *v11;
        McTemplateK0pqd_EtwWriteTransfer(v9, v10, &v60, a2, v5, *(_DWORD *)(a2 + 48));
      }
      goto LABEL_70;
    }
    if ( (byte_140171462 & 0x20) == 0 )
      goto LABEL_70;
    v12 = &EventPnpRequestComplete;
LABEL_69:
    McTemplateK0pd_EtwWriteTransfer(v9, v12, &v60, a2, *(_DWORD *)(a2 + 48));
    goto LABEL_70;
  }
  if ( byte_140171461 >= 0 )
    goto LABEL_70;
  v13 = *(_QWORD *)(v10 + 8);
  v14 = 0;
  v15 = 0LL;
  v51 = 0;
  v16 = 0;
  v17 = 0;
  v18 = 0;
  v19 = 0;
  if ( *(_BYTE *)(v13 + 2) != 40 )
  {
    v24 = *(_BYTE *)(v13 + 72);
    v15 = *(_BYTE **)(v13 + 32);
    v16 = *(_BYTE *)(v13 + 11);
    v14 = *(_BYTE *)(v13 + 4);
    if ( !*(_BYTE *)(v13 + 2) )
      goto LABEL_46;
    goto LABEL_70;
  }
  v20 = 0LL;
  v53 = 0;
  if ( *(_DWORD *)(v13 + 20) )
    goto LABEL_70;
  v9 = 0LL;
  v55 = 0;
  v58 = *(_DWORD *)(v13 + 56);
  if ( !v58 )
    goto LABEL_43;
  v21 = (unsigned int *)(v13 + 120);
  while ( 1 )
  {
    v22 = *v21;
    if ( (unsigned int)v22 >= 0x80 )
    {
      v23 = *(unsigned int *)(v13 + 16);
      if ( (unsigned int)v22 < (unsigned int)v23 )
        break;
    }
LABEL_36:
    v9 = (unsigned int)(v9 + 1);
    ++v21;
    v55 = v9;
    if ( (unsigned int)v9 >= v58 )
      goto LABEL_42;
  }
  if ( *(_DWORD *)(v22 + v13) != 64 )
  {
    v9 = (unsigned int)(*(_DWORD *)(v22 + v13) - 65);
    if ( *(_DWORD *)(v22 + v13) == 65 )
    {
      v9 = v22 + 56;
      if ( v22 + 56 <= v23 )
      {
        v53 = 1;
        if ( *(_BYTE *)(v22 + v13 + 10) )
          v20 = (char *)(v22 + v13 + 24);
        v14 = *(_BYTE *)(v22 + v13 + 8);
        v15 = *(_BYTE **)(v22 + v13 + 16);
        v16 = *(_BYTE *)(v22 + v13 + 9);
      }
    }
    else if ( *(_DWORD *)(v22 + v13) == 66 )
    {
      v9 = v22 + 40;
      if ( v22 + 40 <= v23 )
      {
        if ( *(_DWORD *)(v22 + v13 + 12) )
          v20 = (char *)(v22 + v13 + 32);
        v15 = *(_BYTE **)(v22 + v13 + 24);
        goto LABEL_41;
      }
    }
    goto LABEL_34;
  }
  v9 = v22 + 40;
  if ( v22 + 40 > v23 )
  {
LABEL_34:
    if ( v53 )
      goto LABEL_42;
    LODWORD(v9) = v55;
    goto LABEL_36;
  }
  if ( *(_BYTE *)(v22 + v13 + 10) )
    v20 = (char *)(v22 + v13 + 24);
  v15 = *(_BYTE **)(v22 + v13 + 16);
LABEL_41:
  v16 = *(_BYTE *)(v22 + v13 + 9);
  v14 = *(_BYTE *)(v22 + v13 + 8);
LABEL_42:
  DeviceCapabilities = v57;
LABEL_43:
  if ( v20 )
  {
    v24 = *v20;
    v18 = 0;
LABEL_46:
    LOBYTE(v9) = v24 - 8;
    if ( (v9 & 0x5D) == 0 )
    {
      v25 = *(_BYTE *)(v13 + 3);
      if ( v25 == 1 || !v15 || !v16 )
        goto LABEL_65;
      LOBYTE(v13) = 0;
      v9 = (unsigned __int64)&v15[v16];
      v26 = v15 + 8;
      if ( (unsigned __int8)((*v15 & 0x7F) - 114) <= 1u )
      {
        if ( (unsigned __int64)v26 <= v9 )
        {
          LOBYTE(v13) = 1;
          v18 = v15[2];
          v17 = v15[1] & 0xF;
          v19 = v15[3];
        }
      }
      else
      {
        if ( (unsigned __int64)v26 <= v9 )
        {
          v17 = v15[2] & 0xF;
          v27 = v16;
          if ( (unsigned int)(unsigned __int8)v15[7] + 8 <= v16 )
            v27 = (unsigned __int8)v15[7] + 8;
          v9 = (unsigned __int64)(v15 + 13);
          v13 = (unsigned __int64)&v15[v27];
          if ( (unsigned __int64)(v15 + 13) > v13 )
            v51 = 0;
          else
            v51 = v15[12];
          if ( (unsigned __int64)(v15 + 14) <= v13 )
            v19 = *(_BYTE *)v9;
          LOBYTE(v13) = 1;
        }
        v18 = v51;
      }
      if ( (_BYTE)v13 )
      {
        LOBYTE(v5) = v18;
        v28 = v19;
      }
      else
      {
LABEL_65:
        v17 = 0;
        v28 = 0;
      }
      McTemplateK0pduuuuup_EtwWriteTransfer(v9, v13, &v60, a2, *(_DWORD *)(a2 + 48), v25, v14, v17, v5, v28, a2);
    }
  }
LABEL_70:
  IofCompleteRequest((PIRP)a2, 0);
  return DeviceCapabilities;
}
