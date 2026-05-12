/*
 * XREFs of NvmeNamespaceDataSetManagementIoctl @ 0x1401A15F8
 * Callers:
 *     NvmeNamespaceDeviceControlIrp @ 0x1401A2234 (NvmeNamespaceDeviceControlIrp.c)
 * Callees:
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x140052DF0 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140052EC8 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x1400569AC (McTemplateK0pqd_EtwWriteTransfer.c)
 *     Feature_FixTrimRequestParameterValidation__private_IsEnabledDeviceUsageNoInline @ 0x1400FA258 (Feature_FixTrimRequestParameterValidation__private_IsEnabledDeviceUsageNoInline.c)
 *     NvmeNamespaceDsmDeallocate @ 0x1400FE7D0 (NvmeNamespaceDsmDeallocate.c)
 *     NvmeNamespaceDsmDeallocate2 @ 0x1400FECF0 (NvmeNamespaceDsmDeallocate2.c)
 *     NvmeNamespaceDsmWriteZeroes @ 0x1400FF274 (NvmeNamespaceDsmWriteZeroes.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 */

__int64 __fastcall NvmeNamespaceDataSetManagementIoctl(__int64 a1, __int64 a2)
{
  _DWORD *v3; // rsi
  unsigned __int64 v5; // r14
  int v6; // ebx
  bool v7; // zf
  unsigned __int64 v8; // rcx
  unsigned __int8 *v9; // rdx
  int v10; // eax
  unsigned __int64 v11; // rdx
  char v12; // r12
  _BYTE *v13; // r9
  unsigned __int8 v14; // r10
  char v15; // r14
  char v16; // r11
  char v17; // r13
  char *v18; // r11
  unsigned int v19; // r15d
  unsigned __int64 v20; // rsi
  __int64 v21; // r8
  int v22; // ecx
  const EVENT_DESCRIPTOR *v23; // rdx
  char v24; // cl
  char v25; // r8
  _BYTE *v26; // rax
  unsigned int v27; // eax
  __int64 v28; // r8
  __int64 v29; // rdx
  unsigned int v30; // esi
  unsigned __int64 v31; // rcx
  __int64 v32; // rdx
  int *v33; // rax
  const EVENT_DESCRIPTOR *v34; // rdx
  unsigned __int64 v35; // rdx
  char v36; // r12
  _BYTE *v37; // r9
  unsigned __int8 v38; // r10
  char v39; // r14
  char v40; // r11
  char v41; // r13
  char *v42; // r11
  unsigned int v43; // r15d
  unsigned __int64 v44; // rsi
  __int64 v45; // r8
  int v46; // ecx
  char v47; // cl
  char v48; // r8
  _BYTE *v49; // rax
  unsigned int v50; // eax
  char v51; // al
  int v53; // eax
  unsigned int v54; // eax
  char v55; // r13
  _BYTE *v56; // r9
  unsigned __int8 v57; // r10
  char v58; // r15
  char v59; // r14
  char v60; // r11
  char *v61; // r11
  unsigned int v62; // r12d
  unsigned __int64 v63; // r14
  __int64 v64; // r8
  int v65; // ecx
  char v66; // cl
  _BYTE *v67; // rax
  unsigned int v68; // eax
  char v69; // al
  int *v70; // rax
  unsigned __int8 v71; // r10
  char *v72; // r11
  unsigned int v73; // r15d
  unsigned __int64 v74; // rsi
  __int64 v75; // r8
  int v76; // ecx
  char v77; // cl
  unsigned int v78; // eax
  char v79; // al
  int v80; // [rsp+20h] [rbp-60h]
  int v81; // [rsp+20h] [rbp-60h]
  char v82; // [rsp+30h] [rbp-50h]
  char v83; // [rsp+38h] [rbp-48h]
  char v84; // [rsp+40h] [rbp-40h]
  char v85; // [rsp+48h] [rbp-38h]
  __int64 v86; // [rsp+50h] [rbp-30h]
  char v87; // [rsp+60h] [rbp-20h]
  char v88; // [rsp+60h] [rbp-20h]
  char v89; // [rsp+60h] [rbp-20h]
  char v90; // [rsp+61h] [rbp-1Fh]
  char v91; // [rsp+61h] [rbp-1Fh]
  char v92; // [rsp+61h] [rbp-1Fh]
  char v93; // [rsp+61h] [rbp-1Fh]
  char v94; // [rsp+62h] [rbp-1Eh]
  char v95; // [rsp+62h] [rbp-1Eh]
  unsigned int v96; // [rsp+64h] [rbp-1Ch]
  unsigned int v97; // [rsp+64h] [rbp-1Ch]
  unsigned int v98; // [rsp+64h] [rbp-1Ch]
  unsigned int v99; // [rsp+64h] [rbp-1Ch]
  GUID v100; // [rsp+68h] [rbp-18h] BYREF

  v3 = *(_DWORD **)(a2 + 24);
  v5 = *(unsigned int *)(*(_QWORD *)(a2 + 184) + 16LL);
  v6 = 0;
  if ( (unsigned int)Feature_FixTrimRequestParameterValidation__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( !v3
      || (unsigned int)v5 < 0x1C
      || (v28 = (unsigned int)v3[4], v5 < v28 + (unsigned __int64)(unsigned int)v3[3])
      || (v29 = (unsigned int)v3[6], v5 < v29 + (unsigned __int64)(unsigned int)v3[5])
      || v5 < v29 + v28 + 28 )
    {
      v7 = StorEtwLoggingEnabled == 0;
      *(_BYTE *)(a2 + 141) = -84;
      *(_DWORD *)(a2 + 48) = -1073741811;
      if ( v7 )
        goto LABEL_264;
      v100 = 0LL;
      IoGetActivityIdIrp(a2, &v100);
      v9 = *(unsigned __int8 **)(a2 + 184);
      if ( *v9 != 14 )
      {
        v10 = *v9 - 15;
        if ( *v9 == 15 )
        {
          if ( byte_140171461 >= 0 )
            goto LABEL_264;
          v11 = *((_QWORD *)v9 + 1);
          v12 = 0;
          v13 = 0LL;
          v93 = 0;
          v71 = 0;
          v15 = 0;
          v16 = 0;
          v17 = 0;
          if ( *(_BYTE *)(v11 + 2) != 40 )
          {
            v77 = *(_BYTE *)(v11 + 72);
            v13 = *(_BYTE **)(v11 + 32);
            v71 = *(_BYTE *)(v11 + 11);
            v12 = *(_BYTE *)(v11 + 4);
            if ( *(_BYTE *)(v11 + 2) )
              goto LABEL_264;
            goto LABEL_239;
          }
          v72 = 0LL;
          v95 = 0;
          if ( *(_DWORD *)(v11 + 20) )
            goto LABEL_264;
          v73 = 0;
          v99 = *(_DWORD *)(v11 + 56);
          if ( !v99 )
            goto LABEL_236;
          while ( 1 )
          {
            v8 = *(unsigned int *)(v11 + 4LL * v73 + 120);
            if ( (unsigned int)v8 >= 0x80 )
            {
              v74 = *(unsigned int *)(v11 + 16);
              if ( (unsigned int)v8 < (unsigned int)v74 )
              {
                v75 = (unsigned int)v8;
                v76 = *(_DWORD *)(v8 + v11) - 64;
                if ( v76 )
                {
                  v8 = (unsigned int)(v76 - 1);
                  if ( (_DWORD)v8 )
                  {
                    if ( (_DWORD)v8 == 1 )
                    {
                      v8 = v75 + 40;
                      if ( v75 + 40 <= v74 )
                      {
                        if ( *(_DWORD *)(v75 + v11 + 12) )
                          v72 = (char *)(v75 + v11 + 32);
                        v13 = *(_BYTE **)(v75 + v11 + 24);
                        goto LABEL_235;
                      }
                    }
                  }
                  else
                  {
                    v8 = v75 + 56;
                    if ( v75 + 56 <= v74 )
                    {
                      v95 = 1;
                      if ( *(_BYTE *)(v75 + v11 + 10) )
                        v72 = (char *)(v75 + v11 + 24);
                      v12 = *(_BYTE *)(v75 + v11 + 8);
                      v13 = *(_BYTE **)(v75 + v11 + 16);
                      v71 = *(_BYTE *)(v75 + v11 + 9);
                    }
                  }
                }
                else
                {
                  v8 = v75 + 40;
                  if ( v75 + 40 <= v74 )
                  {
                    if ( *(_BYTE *)(v75 + v11 + 10) )
                      v72 = (char *)(v75 + v11 + 24);
                    v13 = *(_BYTE **)(v75 + v11 + 16);
LABEL_235:
                    v71 = *(_BYTE *)(v75 + v11 + 9);
                    v12 = *(_BYTE *)(v75 + v11 + 8);
LABEL_236:
                    if ( !v72 )
                      goto LABEL_264;
                    v77 = *v72;
                    v16 = 0;
LABEL_239:
                    LOBYTE(v8) = v77 - 8;
                    if ( (v8 & 0x5D) != 0 )
                      goto LABEL_264;
                    v25 = *(_BYTE *)(v11 + 3);
                    if ( v25 == 1 || !v13 || !v71 )
                      goto LABEL_258;
                    LOBYTE(v11) = 0;
                    v8 = (unsigned __int64)&v13[v71];
                    v26 = v13 + 8;
                    if ( (unsigned __int8)((*v13 & 0x7F) - 114) > 1u )
                    {
                      if ( (unsigned __int64)v26 <= v8 )
                      {
                        v15 = v13[2] & 0xF;
                        v78 = v71;
                        if ( (unsigned int)(unsigned __int8)v13[7] + 8 <= v71 )
                          v78 = (unsigned __int8)v13[7] + 8;
                        v8 = (unsigned __int64)(v13 + 13);
                        v11 = (unsigned __int64)&v13[v78];
                        if ( (unsigned __int64)(v13 + 13) > v11 )
                          v93 = 0;
                        else
                          v93 = v13[12];
                        if ( (unsigned __int64)(v13 + 14) <= v11 )
                          v17 = *(_BYTE *)v8;
                        LOBYTE(v11) = 1;
                      }
                      v16 = v93;
LABEL_256:
                      if ( (_BYTE)v11 )
                      {
                        LOBYTE(v6) = v16;
                        v79 = v17;
LABEL_259:
                        McTemplateK0pduuuuup_EtwWriteTransfer(
                          v8,
                          v11,
                          &v100,
                          a2,
                          *(_DWORD *)(a2 + 48),
                          v25,
                          v12,
                          v15,
                          v6,
                          v79,
                          a2);
                        goto LABEL_264;
                      }
LABEL_258:
                      v15 = 0;
                      v79 = 0;
                      goto LABEL_259;
                    }
LABEL_254:
                    if ( (unsigned __int64)v26 <= v8 )
                    {
                      LOBYTE(v11) = 1;
                      v16 = v13[2];
                      v15 = v13[1] & 0xF;
                      v17 = v13[3];
                    }
                    goto LABEL_256;
                  }
                }
                if ( v95 )
                  goto LABEL_236;
              }
            }
            if ( ++v73 >= v99 )
              goto LABEL_236;
          }
        }
        goto LABEL_204;
      }
      if ( (byte_140171462 & 8) == 0 )
        goto LABEL_264;
      v80 = *(_DWORD *)(a2 + 48);
LABEL_262:
      v23 = &EventNonReadWriteRequestComplete;
      goto LABEL_263;
    }
LABEL_61:
    if ( (*(_BYTE *)(a1 + 112) & 4) != 0 )
    {
      v7 = StorEtwLoggingEnabled == 0;
      v30 = -1073741637;
      *(_DWORD *)(a2 + 48) = -1073741637;
      *(_BYTE *)(a2 + 141) = -84;
      if ( v7 )
        goto LABEL_128;
      v100 = 0LL;
      IoGetActivityIdIrp(a2, &v100);
      v32 = *(_QWORD *)(a2 + 184);
      switch ( *(_BYTE *)v32 )
      {
        case 0xE:
          if ( (byte_140171462 & 8) == 0 )
            goto LABEL_128;
          v31 = *(unsigned int *)(a2 + 48);
          v34 = &EventNonReadWriteRequestComplete;
          v81 = *(_DWORD *)(a2 + 48);
          break;
        case 0xF:
          if ( byte_140171461 >= 0 )
            goto LABEL_128;
          v35 = *(_QWORD *)(v32 + 8);
          v36 = 0;
          v37 = 0LL;
          v88 = 0;
          v38 = 0;
          v39 = 0;
          v40 = 0;
          v41 = 0;
          if ( *(_BYTE *)(v35 + 2) == 40 )
          {
            v42 = 0LL;
            v91 = 0;
            if ( *(_DWORD *)(v35 + 20) )
              goto LABEL_128;
            v43 = 0;
            v97 = *(_DWORD *)(v35 + 56);
            if ( !v97 )
              goto LABEL_100;
            while ( 1 )
            {
              v31 = *(unsigned int *)(v35 + 4LL * v43 + 120);
              if ( (unsigned int)v31 >= 0x80 )
              {
                v44 = *(unsigned int *)(v35 + 16);
                if ( (unsigned int)v31 < (unsigned int)v44 )
                {
                  v45 = (unsigned int)v31;
                  v46 = *(_DWORD *)(v31 + v35) - 64;
                  if ( v46 )
                  {
                    v31 = (unsigned int)(v46 - 1);
                    if ( (_DWORD)v31 )
                    {
                      if ( (_DWORD)v31 == 1 )
                      {
                        v31 = v45 + 40;
                        if ( v45 + 40 <= v44 )
                        {
                          if ( *(_DWORD *)(v45 + v35 + 12) )
                            v42 = (char *)(v45 + v35 + 32);
                          v37 = *(_BYTE **)(v45 + v35 + 24);
                          goto LABEL_98;
                        }
                      }
                    }
                    else
                    {
                      v31 = v45 + 56;
                      if ( v45 + 56 <= v44 )
                      {
                        v91 = 1;
                        if ( *(_BYTE *)(v45 + v35 + 10) )
                          v42 = (char *)(v45 + v35 + 24);
                        v36 = *(_BYTE *)(v45 + v35 + 8);
                        v37 = *(_BYTE **)(v45 + v35 + 16);
                        v38 = *(_BYTE *)(v45 + v35 + 9);
                      }
                    }
                  }
                  else
                  {
                    v31 = v45 + 40;
                    if ( v45 + 40 <= v44 )
                    {
                      if ( *(_BYTE *)(v45 + v35 + 10) )
                        v42 = (char *)(v45 + v35 + 24);
                      v37 = *(_BYTE **)(v45 + v35 + 16);
LABEL_98:
                      v38 = *(_BYTE *)(v45 + v35 + 9);
                      v36 = *(_BYTE *)(v45 + v35 + 8);
LABEL_99:
                      v30 = -1073741637;
LABEL_100:
                      if ( v42 )
                      {
                        v47 = *v42;
                        v40 = 0;
                        goto LABEL_103;
                      }
                      goto LABEL_128;
                    }
                  }
                  if ( v91 )
                    goto LABEL_99;
                }
              }
              if ( ++v43 >= v97 )
                goto LABEL_99;
            }
          }
          v47 = *(_BYTE *)(v35 + 72);
          v37 = *(_BYTE **)(v35 + 32);
          v38 = *(_BYTE *)(v35 + 11);
          v36 = *(_BYTE *)(v35 + 4);
          if ( *(_BYTE *)(v35 + 2) )
            goto LABEL_128;
LABEL_103:
          LOBYTE(v31) = v47 - 8;
          if ( (v31 & 0x5D) == 0 )
          {
            v48 = *(_BYTE *)(v35 + 3);
            if ( v48 == 1 || !v37 || !v38 )
              goto LABEL_122;
            LOBYTE(v35) = 0;
            v31 = (unsigned __int64)&v37[v38];
            v49 = v37 + 8;
            if ( (unsigned __int8)((*v37 & 0x7F) - 114) <= 1u )
            {
              if ( (unsigned __int64)v49 <= v31 )
              {
                LOBYTE(v35) = 1;
                v40 = v37[2];
                v39 = v37[1] & 0xF;
                v41 = v37[3];
              }
            }
            else
            {
              if ( (unsigned __int64)v49 <= v31 )
              {
                v39 = v37[2] & 0xF;
                v50 = v38;
                if ( (unsigned int)(unsigned __int8)v37[7] + 8 <= v38 )
                  v50 = (unsigned __int8)v37[7] + 8;
                v31 = (unsigned __int64)(v37 + 13);
                v35 = (unsigned __int64)&v37[v50];
                if ( (unsigned __int64)(v37 + 13) > v35 )
                  v88 = 0;
                else
                  v88 = v37[12];
                if ( (unsigned __int64)(v37 + 14) <= v35 )
                  v41 = *(_BYTE *)v31;
                LOBYTE(v35) = 1;
              }
              v40 = v88;
            }
            if ( (_BYTE)v35 )
            {
              LOBYTE(v6) = v40;
              v51 = v41;
            }
            else
            {
LABEL_122:
              v39 = 0;
              v51 = 0;
            }
            v86 = a2;
            v85 = v51;
            v84 = v6;
            v83 = v39;
            v82 = v36;
            goto LABEL_124;
          }
LABEL_128:
          IofCompleteRequest((PIRP)a2, 0);
          return v30;
        case 0x1B:
          if ( *(_BYTE *)(v32 + 1) == 7 && !*(_DWORD *)(v32 + 8) )
          {
LABEL_68:
            if ( (byte_140171462 & 0x40) != 0 )
            {
              v33 = *(int **)(a2 + 56);
              if ( v33 )
                v6 = *v33;
              McTemplateK0pqd_EtwWriteTransfer(v31, v32, &v100, a2, v6, *(_DWORD *)(a2 + 48));
            }
            goto LABEL_128;
          }
          if ( (byte_140171462 & 0x20) == 0 )
            goto LABEL_128;
          v34 = &EventPnpRequestComplete;
          v81 = *(_DWORD *)(a2 + 48);
          break;
        default:
          goto LABEL_128;
      }
LABEL_127:
      McTemplateK0pd_EtwWriteTransfer(v31, v34, &v100, a2, v81);
      goto LABEL_128;
    }
    v53 = v3[1];
    if ( v53 == 1 )
    {
      if ( FeatureFixTRIMAddSCSIPassthrough )
        v54 = NvmeNamespaceDsmDeallocate2(a1, (__int64)v3);
      else
        v54 = NvmeNamespaceDsmDeallocate(a1, v3);
    }
    else
    {
      if ( v53 != 25 )
      {
        v30 = -1073741822;
        if ( v53 != -2147483646 )
          v30 = -1073741637;
        goto LABEL_139;
      }
      v54 = NvmeNamespaceDsmWriteZeroes(a1, (__int64)v3);
    }
    v30 = v54;
LABEL_139:
    v7 = StorEtwLoggingEnabled == 0;
    *(_BYTE *)(a2 + 141) = -84;
    *(_DWORD *)(a2 + 48) = v30;
    if ( v7 )
      goto LABEL_128;
    v100 = 0LL;
    IoGetActivityIdIrp(a2, &v100);
    v32 = *(_QWORD *)(a2 + 184);
    switch ( *(_BYTE *)v32 )
    {
      case 0xE:
        if ( (byte_140171462 & 8) == 0 )
          goto LABEL_128;
        v34 = &EventNonReadWriteRequestComplete;
        break;
      case 0xF:
        if ( byte_140171461 >= 0 )
          goto LABEL_128;
        v35 = *(_QWORD *)(v32 + 8);
        v55 = 0;
        v56 = 0LL;
        v89 = 0;
        v57 = 0;
        v92 = 0;
        v58 = 0;
        v59 = 0;
        v60 = 0;
        if ( *(_BYTE *)(v35 + 2) != 40 )
        {
          v66 = *(_BYTE *)(v35 + 72);
          v56 = *(_BYTE **)(v35 + 32);
          v57 = *(_BYTE *)(v35 + 11);
          v55 = *(_BYTE *)(v35 + 4);
          if ( *(_BYTE *)(v35 + 2) )
            goto LABEL_128;
          goto LABEL_176;
        }
        v61 = 0LL;
        v94 = 0;
        if ( *(_DWORD *)(v35 + 20) )
          goto LABEL_128;
        v62 = 0;
        v98 = *(_DWORD *)(v35 + 56);
        if ( !v98 )
          goto LABEL_173;
        while ( 1 )
        {
          v31 = *(unsigned int *)(v35 + 4LL * v62 + 120);
          if ( (unsigned int)v31 >= 0x80 )
          {
            v63 = *(unsigned int *)(v35 + 16);
            if ( (unsigned int)v31 < (unsigned int)v63 )
            {
              v64 = (unsigned int)v31;
              v65 = *(_DWORD *)(v35 + v31) - 64;
              if ( v65 )
              {
                v31 = (unsigned int)(v65 - 1);
                if ( (_DWORD)v31 )
                {
                  if ( (_DWORD)v31 == 1 )
                  {
                    v31 = v64 + 40;
                    if ( v64 + 40 <= v63 )
                    {
                      if ( *(_DWORD *)(v35 + v64 + 12) )
                        v61 = (char *)(v64 + v35 + 32);
                      v56 = *(_BYTE **)(v35 + v64 + 24);
LABEL_171:
                      v57 = *(_BYTE *)(v35 + v64 + 9);
                      v55 = *(_BYTE *)(v35 + v64 + 8);
LABEL_172:
                      v59 = 0;
LABEL_173:
                      if ( !v61 )
                        goto LABEL_128;
                      v66 = *v61;
                      v60 = 0;
LABEL_176:
                      LOBYTE(v31) = v66 - 8;
                      if ( (v31 & 0x5D) != 0 )
                        goto LABEL_128;
                      v48 = *(_BYTE *)(v35 + 3);
                      if ( v48 == 1 || !v56 || !v57 )
                        goto LABEL_196;
                      LOBYTE(v35) = 0;
                      v31 = (unsigned __int64)&v56[v57];
                      v67 = v56 + 8;
                      if ( (unsigned __int8)((*v56 & 0x7F) - 114) <= 1u )
                      {
                        if ( (unsigned __int64)v67 <= v31 )
                        {
                          LOBYTE(v35) = 1;
                          v59 = v56[2];
                          v58 = v56[1] & 0xF;
                          v60 = v56[3];
                        }
                      }
                      else
                      {
                        if ( (unsigned __int64)v67 <= v31 )
                        {
                          v58 = v56[2] & 0xF;
                          v68 = v57;
                          if ( (unsigned int)(unsigned __int8)v56[7] + 8 <= v57 )
                            v68 = (unsigned __int8)v56[7] + 8;
                          v31 = (unsigned __int64)(v56 + 13);
                          v35 = (unsigned __int64)&v56[v68];
                          if ( (unsigned __int64)(v56 + 13) > v35 )
                            v89 = 0;
                          else
                            v89 = v56[12];
                          if ( (unsigned __int64)(v56 + 14) > v35 )
                            v92 = 0;
                          else
                            v92 = *(_BYTE *)v31;
                          LOBYTE(v35) = 1;
                        }
                        v60 = v92;
                        v59 = v89;
                      }
                      if ( (_BYTE)v35 )
                      {
                        LOBYTE(v6) = v59;
                        v69 = v60;
                      }
                      else
                      {
LABEL_196:
                        v58 = 0;
                        v69 = 0;
                      }
                      v86 = a2;
                      v85 = v69;
                      v84 = v6;
                      v83 = v58;
                      v82 = v55;
LABEL_124:
                      McTemplateK0pduuuuup_EtwWriteTransfer(
                        v31,
                        v35,
                        &v100,
                        a2,
                        *(_DWORD *)(a2 + 48),
                        v48,
                        v82,
                        v83,
                        v84,
                        v85,
                        v86);
                      goto LABEL_128;
                    }
                  }
                }
                else
                {
                  v31 = v64 + 56;
                  if ( v64 + 56 <= v63 )
                  {
                    v94 = 1;
                    if ( *(_BYTE *)(v35 + v64 + 10) )
                      v61 = (char *)(v64 + v35 + 24);
                    v55 = *(_BYTE *)(v35 + v64 + 8);
                    v56 = *(_BYTE **)(v35 + v64 + 16);
                    v57 = *(_BYTE *)(v35 + v64 + 9);
                  }
                }
              }
              else
              {
                v31 = v64 + 40;
                if ( v64 + 40 <= v63 )
                {
                  if ( *(_BYTE *)(v35 + v64 + 10) )
                    v61 = (char *)(v64 + v35 + 24);
                  v56 = *(_BYTE **)(v35 + v64 + 16);
                  goto LABEL_171;
                }
              }
              if ( v94 )
                goto LABEL_172;
            }
          }
          if ( ++v62 >= v98 )
            goto LABEL_172;
        }
      case 0x1B:
        if ( *(_BYTE *)(v32 + 1) == 7 && !*(_DWORD *)(v32 + 8) )
          goto LABEL_68;
        if ( (byte_140171462 & 0x20) == 0 )
          goto LABEL_128;
        v34 = &EventPnpRequestComplete;
        break;
      default:
        goto LABEL_128;
    }
    v81 = *(_DWORD *)(a2 + 48);
    goto LABEL_127;
  }
  if ( v3
    && (unsigned int)v5 >= 0x1C
    && v5 >= (unsigned int)v3[3] + (unsigned __int64)(unsigned int)v3[4] + 28
    && v5 >= (unsigned int)v3[5] + (unsigned __int64)(unsigned int)v3[6] + 28 )
  {
    goto LABEL_61;
  }
  v7 = StorEtwLoggingEnabled == 0;
  *(_BYTE *)(a2 + 141) = -84;
  *(_DWORD *)(a2 + 48) = -1073741811;
  if ( v7 )
    goto LABEL_264;
  v100 = 0LL;
  IoGetActivityIdIrp(a2, &v100);
  v9 = *(unsigned __int8 **)(a2 + 184);
  if ( *v9 == 14 )
  {
    if ( (byte_140171462 & 8) == 0 )
      goto LABEL_264;
    v8 = *(unsigned int *)(a2 + 48);
    v80 = *(_DWORD *)(a2 + 48);
    goto LABEL_262;
  }
  v10 = *v9 - 15;
  if ( *v9 != 15 )
  {
LABEL_204:
    if ( v10 != 12 )
      goto LABEL_264;
    if ( v9[1] == 7 && !*((_DWORD *)v9 + 2) )
    {
      if ( (byte_140171462 & 0x40) != 0 )
      {
        v70 = *(int **)(a2 + 56);
        if ( v70 )
          v6 = *v70;
        McTemplateK0pqd_EtwWriteTransfer(v8, (__int64)v9, &v100, a2, v6, *(_DWORD *)(a2 + 48));
      }
      goto LABEL_264;
    }
    if ( (byte_140171462 & 0x20) == 0 )
      goto LABEL_264;
    v23 = &EventPnpRequestComplete;
    v80 = *(_DWORD *)(a2 + 48);
LABEL_263:
    McTemplateK0pd_EtwWriteTransfer(v8, v23, &v100, a2, v80);
    goto LABEL_264;
  }
  if ( byte_140171461 >= 0 )
    goto LABEL_264;
  v11 = *((_QWORD *)v9 + 1);
  v12 = 0;
  v13 = 0LL;
  v87 = 0;
  v14 = 0;
  v15 = 0;
  v16 = 0;
  v17 = 0;
  if ( *(_BYTE *)(v11 + 2) == 40 )
  {
    v18 = 0LL;
    v90 = 0;
    if ( *(_DWORD *)(v11 + 20) )
      goto LABEL_264;
    v19 = 0;
    v96 = *(_DWORD *)(v11 + 56);
    if ( !v96 )
      goto LABEL_36;
    while ( 1 )
    {
      v8 = *(unsigned int *)(v11 + 4LL * v19 + 120);
      if ( (unsigned int)v8 >= 0x80 )
      {
        v20 = *(unsigned int *)(v11 + 16);
        if ( (unsigned int)v8 < (unsigned int)v20 )
        {
          v21 = (unsigned int)v8;
          v22 = *(_DWORD *)(v8 + v11) - 64;
          if ( v22 )
          {
            v8 = (unsigned int)(v22 - 1);
            if ( (_DWORD)v8 )
            {
              if ( (_DWORD)v8 == 1 )
              {
                v8 = v21 + 40;
                if ( v21 + 40 <= v20 )
                {
                  if ( *(_DWORD *)(v21 + v11 + 12) )
                    v18 = (char *)(v21 + v11 + 32);
                  v13 = *(_BYTE **)(v21 + v11 + 24);
                  goto LABEL_35;
                }
              }
            }
            else
            {
              v8 = v21 + 56;
              if ( v21 + 56 <= v20 )
              {
                v90 = 1;
                if ( *(_BYTE *)(v21 + v11 + 10) )
                  v18 = (char *)(v21 + v11 + 24);
                v12 = *(_BYTE *)(v21 + v11 + 8);
                v13 = *(_BYTE **)(v21 + v11 + 16);
                v14 = *(_BYTE *)(v21 + v11 + 9);
              }
            }
          }
          else
          {
            v8 = v21 + 40;
            if ( v21 + 40 <= v20 )
            {
              if ( *(_BYTE *)(v21 + v11 + 10) )
                v18 = (char *)(v21 + v11 + 24);
              v13 = *(_BYTE **)(v21 + v11 + 16);
LABEL_35:
              v14 = *(_BYTE *)(v21 + v11 + 9);
              v12 = *(_BYTE *)(v21 + v11 + 8);
LABEL_36:
              if ( v18 )
              {
                v24 = *v18;
                v16 = 0;
                goto LABEL_39;
              }
              goto LABEL_264;
            }
          }
          if ( v90 )
            goto LABEL_36;
        }
      }
      if ( ++v19 >= v96 )
        goto LABEL_36;
    }
  }
  v24 = *(_BYTE *)(v11 + 72);
  v13 = *(_BYTE **)(v11 + 32);
  v14 = *(_BYTE *)(v11 + 11);
  v12 = *(_BYTE *)(v11 + 4);
  if ( *(_BYTE *)(v11 + 2) )
    goto LABEL_264;
LABEL_39:
  LOBYTE(v8) = v24 - 8;
  if ( (v8 & 0x5D) == 0 )
  {
    v25 = *(_BYTE *)(v11 + 3);
    if ( v25 == 1 || !v13 || !v14 )
      goto LABEL_258;
    LOBYTE(v11) = 0;
    v8 = (unsigned __int64)&v13[v14];
    v26 = v13 + 8;
    if ( (unsigned __int8)((*v13 & 0x7F) - 114) > 1u )
    {
      if ( (unsigned __int64)v26 <= v8 )
      {
        v15 = v13[2] & 0xF;
        v27 = v14;
        if ( (unsigned int)(unsigned __int8)v13[7] + 8 <= v14 )
          v27 = (unsigned __int8)v13[7] + 8;
        v8 = (unsigned __int64)(v13 + 13);
        v11 = (unsigned __int64)&v13[v27];
        if ( (unsigned __int64)(v13 + 13) > v11 )
          v87 = 0;
        else
          v87 = v13[12];
        if ( (unsigned __int64)(v13 + 14) <= v11 )
          v17 = *(_BYTE *)v8;
        LOBYTE(v11) = 1;
      }
      v16 = v87;
      goto LABEL_256;
    }
    goto LABEL_254;
  }
LABEL_264:
  IofCompleteRequest((PIRP)a2, 0);
  return 3221225485LL;
}
