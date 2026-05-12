/*
 * XREFs of NvmeNamespaceTelemetryIdIoctl @ 0x140113F68
 * Callers:
 *     NvmeNamespaceDeviceControlIrp @ 0x1401A2234 (NvmeNamespaceDeviceControlIrp.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140035110 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x14003D27C (_tlgKeywordOn.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x140052DF0 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140052EC8 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x1400569AC (McTemplateK0pqd_EtwWriteTransfer.c)
 *     StorEtwNvmeNamespaceEvent @ 0x1400A9A30 (StorEtwNvmeNamespaceEvent.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 */

__int64 __fastcall NvmeNamespaceTelemetryIdIoctl(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // r9
  int v6; // edi
  bool v7; // zf
  unsigned __int64 v8; // rcx
  __int64 v9; // rdx
  int *v10; // rax
  const GUID *v11; // r8
  const GUID *v12; // r8
  const EVENT_DESCRIPTOR *v13; // rdx
  unsigned __int64 v14; // rdx
  char v15; // bl
  char v16; // r15
  _BYTE *v17; // r9
  unsigned __int8 v18; // r10
  char v19; // r11
  char v20; // r13
  char *v21; // rbx
  unsigned int v22; // r12d
  unsigned __int64 v23; // r14
  __int64 v24; // r8
  int v25; // ecx
  char v26; // cl
  char v27; // r8
  _BYTE *v28; // rax
  unsigned int v29; // eax
  char v30; // al
  const GUID *v31; // r8
  int *v32; // rax
  char v33; // bl
  char v34; // r15
  _BYTE *v35; // r9
  unsigned __int8 v36; // r10
  char v37; // r11
  char v38; // r13
  char *v39; // rbx
  unsigned int v40; // r12d
  unsigned __int64 v41; // r14
  __int64 v42; // r8
  int v43; // ecx
  char v44; // cl
  char v45; // r8
  _BYTE *v46; // rax
  unsigned int v47; // eax
  char v48; // al
  __int64 v50; // rax
  const GUID *v51; // rbx
  ULONG v52; // edi
  __int64 v53; // rcx
  __int64 v54; // r8
  __int64 v55; // r9
  __int64 v56; // rax
  __int64 v57; // rcx
  wchar_t *Buffer; // r15
  wchar_t *v59; // rax
  unsigned __int64 v60; // rcx
  __int64 v61; // rdx
  ULONG *v62; // rax
  const EVENT_DESCRIPTOR *v63; // rdx
  unsigned __int64 v64; // rdx
  char v65; // bl
  char v66; // r15
  _BYTE *v67; // r9
  unsigned __int8 v68; // r10
  char v69; // r11
  char v70; // r13
  char *v71; // rbx
  unsigned int v72; // r12d
  unsigned __int64 v73; // r14
  __int64 v74; // r8
  int v75; // ecx
  char v76; // cl
  char v77; // r8
  _BYTE *v78; // rax
  unsigned int v79; // eax
  char v80; // al
  int v81; // edi
  unsigned __int64 v82; // rcx
  __int64 v83; // rdx
  int *v84; // rax
  const EVENT_DESCRIPTOR *v85; // rdx
  unsigned __int64 v86; // rdx
  char v87; // bl
  char v88; // r15
  _BYTE *v89; // r9
  unsigned __int8 v90; // r10
  char v91; // r11
  char v92; // r13
  char *v93; // rbx
  unsigned int v94; // r12d
  unsigned __int64 v95; // r14
  __int64 v96; // r8
  int v97; // ecx
  char v98; // cl
  char v99; // r8
  _BYTE *v100; // rax
  unsigned int v101; // eax
  char v102; // al
  int v103; // [rsp+20h] [rbp-100h]
  ULONG v104[2]; // [rsp+20h] [rbp-100h]
  int v105; // [rsp+20h] [rbp-100h]
  char v106; // [rsp+28h] [rbp-F8h]
  __int64 v107; // [rsp+28h] [rbp-F8h]
  char v108; // [rsp+30h] [rbp-F0h]
  __int64 v109; // [rsp+30h] [rbp-F0h]
  char v110; // [rsp+38h] [rbp-E8h]
  __int64 v111; // [rsp+38h] [rbp-E8h]
  char v112; // [rsp+40h] [rbp-E0h]
  __int64 v113; // [rsp+40h] [rbp-E0h]
  char v114; // [rsp+48h] [rbp-D8h]
  __int64 v115; // [rsp+48h] [rbp-D8h]
  __int64 v116; // [rsp+50h] [rbp-D0h]
  char v117; // [rsp+A0h] [rbp-80h]
  char v118; // [rsp+A0h] [rbp-80h]
  char v119; // [rsp+A0h] [rbp-80h]
  char v120; // [rsp+A0h] [rbp-80h]
  char v121; // [rsp+A1h] [rbp-7Fh]
  char v122; // [rsp+A1h] [rbp-7Fh]
  char v123; // [rsp+A1h] [rbp-7Fh]
  char v124; // [rsp+A1h] [rbp-7Fh]
  unsigned int v125; // [rsp+A4h] [rbp-7Ch] BYREF
  unsigned int v126; // [rsp+A8h] [rbp-78h] BYREF
  unsigned int v127; // [rsp+ACh] [rbp-74h] BYREF
  struct _UNICODE_STRING GuidString; // [rsp+B0h] [rbp-70h] BYREF
  GUID v129; // [rsp+C0h] [rbp-60h] BYREF
  __int128 v130; // [rsp+D0h] [rbp-50h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v131; // [rsp+E0h] [rbp-40h] BYREF
  __int128 *v132; // [rsp+100h] [rbp-20h]
  __int64 v133; // [rsp+108h] [rbp-18h]
  __int64 v134; // [rsp+110h] [rbp-10h]
  __int64 v135; // [rsp+118h] [rbp-8h]
  const GUID *v136; // [rsp+120h] [rbp+0h]
  __int64 v137; // [rsp+128h] [rbp+8h]
  unsigned int *v138; // [rsp+130h] [rbp+10h]
  __int64 v139; // [rsp+138h] [rbp+18h]
  unsigned int *v140; // [rsp+140h] [rbp+20h]
  __int64 v141; // [rsp+148h] [rbp+28h]
  unsigned int *v142; // [rsp+150h] [rbp+30h]
  __int64 v143; // [rsp+158h] [rbp+38h]

  v2 = *(_QWORD *)(a2 + 184);
  v3 = *(_QWORD *)(a1 + 16);
  GuidString = 0LL;
  if ( *(_DWORD *)(v2 + 16) < 0x28u )
  {
    v6 = 0;
    *(_BYTE *)(a2 + 141) = -84;
    v7 = StorEtwLoggingEnabled == 0;
    *(_QWORD *)(a2 + 56) = 0LL;
    v127 = -1073741820;
    *(_DWORD *)(a2 + 48) = -1073741820;
    if ( v7 )
      goto LABEL_134;
    v130 = 0LL;
    IoGetActivityIdIrp(a2, &v130);
    v9 = *(_QWORD *)(a2 + 184);
    if ( *(_BYTE *)v9 != 14 )
    {
      if ( *(_BYTE *)v9 == 15 )
      {
        if ( byte_140171461 >= 0 )
          goto LABEL_134;
        v14 = *(_QWORD *)(v9 + 8);
        v15 = 0;
        v16 = 0;
        v117 = 0;
        v17 = 0LL;
        v18 = 0;
        v19 = 0;
        v20 = 0;
        if ( *(_BYTE *)(v14 + 2) == 40 )
        {
          v21 = 0LL;
          v121 = 0;
          if ( *(_DWORD *)(v14 + 20) )
            goto LABEL_134;
          v22 = 0;
          v125 = *(_DWORD *)(v14 + 56);
          if ( !v125 )
            goto LABEL_41;
          while ( 1 )
          {
            v8 = *(unsigned int *)(v14 + 4LL * v22 + 120);
            if ( (unsigned int)v8 >= 0x80 )
            {
              v23 = *(unsigned int *)(v14 + 16);
              if ( (unsigned int)v8 < (unsigned int)v23 )
              {
                v24 = (unsigned int)v8;
                v25 = *(_DWORD *)(v8 + v14) - 64;
                if ( v25 )
                {
                  v8 = (unsigned int)(v25 - 1);
                  if ( (_DWORD)v8 )
                  {
                    if ( (_DWORD)v8 == 1 )
                    {
                      v8 = v24 + 40;
                      if ( v24 + 40 <= v23 )
                      {
                        if ( *(_DWORD *)(v24 + v14 + 12) )
                          v21 = (char *)(v24 + v14 + 32);
                        v17 = *(_BYTE **)(v24 + v14 + 24);
                        goto LABEL_40;
                      }
                    }
                  }
                  else
                  {
                    v8 = v24 + 56;
                    if ( v24 + 56 <= v23 )
                    {
                      v121 = 1;
                      if ( *(_BYTE *)(v24 + v14 + 10) )
                        v21 = (char *)(v24 + v14 + 24);
                      v16 = *(_BYTE *)(v24 + v14 + 8);
                      v17 = *(_BYTE **)(v24 + v14 + 16);
                      v18 = *(_BYTE *)(v24 + v14 + 9);
                    }
                  }
                }
                else
                {
                  v8 = v24 + 40;
                  if ( v24 + 40 <= v23 )
                  {
                    if ( *(_BYTE *)(v24 + v14 + 10) )
                      v21 = (char *)(v24 + v14 + 24);
                    v17 = *(_BYTE **)(v24 + v14 + 16);
LABEL_40:
                    v18 = *(_BYTE *)(v24 + v14 + 9);
                    v16 = *(_BYTE *)(v24 + v14 + 8);
LABEL_41:
                    if ( v21 )
                    {
                      v26 = *v21;
                      v15 = 0;
                      goto LABEL_44;
                    }
                    goto LABEL_134;
                  }
                }
                if ( v121 )
                  goto LABEL_41;
              }
            }
            if ( ++v22 >= v125 )
              goto LABEL_41;
          }
        }
        v26 = *(_BYTE *)(v14 + 72);
        v17 = *(_BYTE **)(v14 + 32);
        v18 = *(_BYTE *)(v14 + 11);
        v16 = *(_BYTE *)(v14 + 4);
        if ( *(_BYTE *)(v14 + 2) )
          goto LABEL_134;
LABEL_44:
        LOBYTE(v8) = v26 - 8;
        if ( (v8 & 0x5D) == 0 )
        {
          v27 = *(_BYTE *)(v14 + 3);
          if ( v27 == 1 || !v17 || !v18 )
            goto LABEL_63;
          LOBYTE(v14) = 0;
          v8 = (unsigned __int64)&v17[v18];
          v28 = v17 + 8;
          if ( (unsigned __int8)((*v17 & 0x7F) - 114) <= 1u )
          {
            if ( (unsigned __int64)v28 <= v8 )
            {
              LOBYTE(v14) = 1;
              v15 = v17[2];
              v19 = v17[1] & 0xF;
              v20 = v17[3];
            }
          }
          else
          {
            if ( (unsigned __int64)v28 <= v8 )
            {
              v19 = v17[2] & 0xF;
              v29 = v18;
              if ( (unsigned int)(unsigned __int8)v17[7] + 8 <= v18 )
                v29 = (unsigned __int8)v17[7] + 8;
              v8 = (unsigned __int64)(v17 + 13);
              v14 = (unsigned __int64)&v17[v29];
              if ( (unsigned __int64)(v17 + 13) > v14 )
                v117 = 0;
              else
                v117 = v17[12];
              if ( (unsigned __int64)(v17 + 14) <= v14 )
                v20 = *(_BYTE *)v8;
              LOBYTE(v14) = 1;
            }
            v15 = v117;
          }
          if ( (_BYTE)v14 )
          {
            LOBYTE(v6) = v15;
            v30 = v20;
          }
          else
          {
LABEL_63:
            v19 = 0;
            v30 = 0;
          }
          v116 = a2;
          v114 = v30;
          v112 = v6;
          v110 = v19;
          v108 = v16;
          v106 = v27;
          v31 = (const GUID *)&v130;
          goto LABEL_65;
        }
LABEL_134:
        IofCompleteRequest((PIRP)a2, 0);
        return v127;
      }
      if ( *(_BYTE *)v9 != 27 )
        goto LABEL_134;
      if ( *(_BYTE *)(v9 + 1) == 7 && !*(_DWORD *)(v9 + 8) )
      {
        if ( (byte_140171462 & 0x40) == 0 )
          goto LABEL_134;
        v10 = *(int **)(a2 + 56);
        if ( v10 )
          v6 = *v10;
        v11 = (const GUID *)&v130;
        goto LABEL_12;
      }
      if ( (byte_140171462 & 0x20) == 0 )
        goto LABEL_134;
      v12 = (const GUID *)&v130;
LABEL_15:
      v13 = &EventPnpRequestComplete;
      v103 = *(_DWORD *)(a2 + 48);
LABEL_133:
      McTemplateK0pd_EtwWriteTransfer(v8, v13, v12, a2, v103);
      goto LABEL_134;
    }
    if ( (byte_140171462 & 8) == 0 )
      goto LABEL_134;
    v12 = (const GUID *)&v130;
    v103 = *(_DWORD *)(a2 + 48);
    goto LABEL_132;
  }
  if ( *(_DWORD *)(v2 + 8) < 0x28u )
  {
    v6 = 0;
    *(_BYTE *)(a2 + 141) = -84;
    v7 = StorEtwLoggingEnabled == 0;
    *(_QWORD *)(a2 + 56) = 0LL;
    v127 = -1073741789;
    *(_DWORD *)(a2 + 48) = -1073741789;
    if ( v7 )
      goto LABEL_134;
    v129 = 0LL;
    IoGetActivityIdIrp(a2, &v129);
    v9 = *(_QWORD *)(a2 + 184);
    if ( *(_BYTE *)v9 != 14 )
    {
      if ( *(_BYTE *)v9 == 15 )
      {
        if ( byte_140171461 >= 0 )
          goto LABEL_134;
        v14 = *(_QWORD *)(v9 + 8);
        v33 = 0;
        v34 = 0;
        v118 = 0;
        v35 = 0LL;
        v36 = 0;
        v37 = 0;
        v38 = 0;
        if ( *(_BYTE *)(v14 + 2) != 40 )
        {
          v44 = *(_BYTE *)(v14 + 72);
          v35 = *(_BYTE **)(v14 + 32);
          v36 = *(_BYTE *)(v14 + 11);
          v34 = *(_BYTE *)(v14 + 4);
          if ( *(_BYTE *)(v14 + 2) )
            goto LABEL_134;
          goto LABEL_109;
        }
        v39 = 0LL;
        v122 = 0;
        if ( *(_DWORD *)(v14 + 20) )
          goto LABEL_134;
        v40 = 0;
        v125 = *(_DWORD *)(v14 + 56);
        if ( !v125 )
          goto LABEL_106;
        while ( 1 )
        {
          v8 = *(unsigned int *)(v14 + 4LL * v40 + 120);
          if ( (unsigned int)v8 >= 0x80 )
          {
            v41 = *(unsigned int *)(v14 + 16);
            if ( (unsigned int)v8 < (unsigned int)v41 )
            {
              v42 = (unsigned int)v8;
              v43 = *(_DWORD *)(v14 + v8) - 64;
              if ( v43 )
              {
                v8 = (unsigned int)(v43 - 1);
                if ( (_DWORD)v8 )
                {
                  if ( (_DWORD)v8 == 1 )
                  {
                    v8 = v42 + 40;
                    if ( v42 + 40 <= v41 )
                    {
                      if ( *(_DWORD *)(v14 + v42 + 12) )
                        v39 = (char *)(v42 + v14 + 32);
                      v35 = *(_BYTE **)(v14 + v42 + 24);
                      goto LABEL_105;
                    }
                  }
                }
                else
                {
                  v8 = v42 + 56;
                  if ( v42 + 56 <= v41 )
                  {
                    v122 = 1;
                    if ( *(_BYTE *)(v14 + v42 + 10) )
                      v39 = (char *)(v42 + v14 + 24);
                    v34 = *(_BYTE *)(v14 + v42 + 8);
                    v35 = *(_BYTE **)(v14 + v42 + 16);
                    v36 = *(_BYTE *)(v14 + v42 + 9);
                  }
                }
              }
              else
              {
                v8 = v42 + 40;
                if ( v42 + 40 <= v41 )
                {
                  if ( *(_BYTE *)(v14 + v42 + 10) )
                    v39 = (char *)(v42 + v14 + 24);
                  v35 = *(_BYTE **)(v14 + v42 + 16);
LABEL_105:
                  v36 = *(_BYTE *)(v14 + v42 + 9);
                  v34 = *(_BYTE *)(v14 + v42 + 8);
LABEL_106:
                  if ( !v39 )
                    goto LABEL_134;
                  v44 = *v39;
                  v33 = 0;
LABEL_109:
                  LOBYTE(v8) = v44 - 8;
                  if ( (v8 & 0x5D) != 0 )
                    goto LABEL_134;
                  v45 = *(_BYTE *)(v14 + 3);
                  if ( v45 == 1 || !v35 || !v36 )
                    goto LABEL_128;
                  LOBYTE(v14) = 0;
                  v8 = (unsigned __int64)&v35[v36];
                  v46 = v35 + 8;
                  if ( (unsigned __int8)((*v35 & 0x7F) - 114) <= 1u )
                  {
                    if ( (unsigned __int64)v46 <= v8 )
                    {
                      LOBYTE(v14) = 1;
                      v33 = v35[2];
                      v37 = v35[1] & 0xF;
                      v38 = v35[3];
                    }
                  }
                  else
                  {
                    if ( (unsigned __int64)v46 <= v8 )
                    {
                      v37 = v35[2] & 0xF;
                      v47 = v36;
                      if ( (unsigned int)(unsigned __int8)v35[7] + 8 <= v36 )
                        v47 = (unsigned __int8)v35[7] + 8;
                      v8 = (unsigned __int64)(v35 + 13);
                      v14 = (unsigned __int64)&v35[v47];
                      if ( (unsigned __int64)(v35 + 13) > v14 )
                        v118 = 0;
                      else
                        v118 = v35[12];
                      if ( (unsigned __int64)(v35 + 14) <= v14 )
                        v38 = *(_BYTE *)v8;
                      LOBYTE(v14) = 1;
                    }
                    v33 = v118;
                  }
                  if ( (_BYTE)v14 )
                  {
                    LOBYTE(v6) = v33;
                    v48 = v38;
                  }
                  else
                  {
LABEL_128:
                    v37 = 0;
                    v48 = 0;
                  }
                  v116 = a2;
                  v114 = v48;
                  v112 = v6;
                  v110 = v37;
                  v108 = v34;
                  v106 = v45;
                  v31 = &v129;
LABEL_65:
                  McTemplateK0pduuuuup_EtwWriteTransfer(
                    v8,
                    v14,
                    v31,
                    a2,
                    *(_DWORD *)(a2 + 48),
                    v106,
                    v108,
                    v110,
                    v112,
                    v114,
                    v116);
                  goto LABEL_134;
                }
              }
              if ( v122 )
                goto LABEL_106;
            }
          }
          if ( ++v40 >= v125 )
            goto LABEL_106;
        }
      }
      if ( *(_BYTE *)v9 != 27 )
        goto LABEL_134;
      if ( *(_BYTE *)(v9 + 1) == 7 && !*(_DWORD *)(v9 + 8) )
      {
        if ( (byte_140171462 & 0x40) == 0 )
          goto LABEL_134;
        v32 = *(int **)(a2 + 56);
        if ( v32 )
          v6 = *v32;
        v11 = &v129;
LABEL_12:
        McTemplateK0pqd_EtwWriteTransfer(v8, v9, v11, a2, v6, *(_DWORD *)(a2 + 48));
        goto LABEL_134;
      }
      if ( (byte_140171462 & 0x20) == 0 )
        goto LABEL_134;
      v12 = &v129;
      goto LABEL_15;
    }
    if ( (byte_140171462 & 8) == 0 )
      goto LABEL_134;
    v8 = *(unsigned int *)(a2 + 48);
    v12 = &v129;
    v103 = *(_DWORD *)(a2 + 48);
LABEL_132:
    v13 = &EventNonReadWriteRequestComplete;
    goto LABEL_133;
  }
  v50 = *(_QWORD *)(a2 + 24);
  if ( *(_DWORD *)v50 != 40 || *(_DWORD *)(v50 + 4) != 40 )
  {
    v81 = 0;
    *(_BYTE *)(a2 + 141) = -84;
    v7 = StorEtwLoggingEnabled == 0;
    *(_QWORD *)(a2 + 56) = 0LL;
    *(_DWORD *)(a2 + 48) = -1073741811;
    if ( v7 )
      goto LABEL_276;
    v129 = 0LL;
    IoGetActivityIdIrp(a2, &v129);
    v83 = *(_QWORD *)(a2 + 184);
    switch ( *(_BYTE *)v83 )
    {
      case 0xE:
        if ( (byte_140171462 & 8) == 0 )
          goto LABEL_276;
        v82 = *(unsigned int *)(a2 + 48);
        v85 = &EventNonReadWriteRequestComplete;
        v105 = *(_DWORD *)(a2 + 48);
        break;
      case 0xF:
        if ( byte_140171461 >= 0 )
          goto LABEL_276;
        v86 = *(_QWORD *)(v83 + 8);
        v87 = 0;
        v88 = 0;
        v120 = 0;
        v89 = 0LL;
        v90 = 0;
        v91 = 0;
        v92 = 0;
        if ( *(_BYTE *)(v86 + 2) != 40 )
        {
          v98 = *(_BYTE *)(v86 + 72);
          v89 = *(_BYTE **)(v86 + 32);
          v90 = *(_BYTE *)(v86 + 11);
          v88 = *(_BYTE *)(v86 + 4);
          if ( !*(_BYTE *)(v86 + 2) )
            goto LABEL_252;
          goto LABEL_276;
        }
        v93 = 0LL;
        v124 = 0;
        if ( *(_DWORD *)(v86 + 20) )
          goto LABEL_276;
        v94 = 0;
        v126 = *(_DWORD *)(v86 + 56);
        if ( !v126 )
          goto LABEL_249;
        while ( 1 )
        {
          v82 = *(unsigned int *)(v86 + 4LL * v94 + 120);
          if ( (unsigned int)v82 >= 0x80 )
          {
            v95 = *(unsigned int *)(v86 + 16);
            if ( (unsigned int)v82 < (unsigned int)v95 )
            {
              v96 = (unsigned int)v82;
              v97 = *(_DWORD *)(v82 + v86) - 64;
              if ( v97 )
              {
                v82 = (unsigned int)(v97 - 1);
                if ( (_DWORD)v82 )
                {
                  if ( (_DWORD)v82 == 1 )
                  {
                    v82 = v96 + 40;
                    if ( v96 + 40 <= v95 )
                    {
                      if ( *(_DWORD *)(v96 + v86 + 12) )
                        v93 = (char *)(v96 + v86 + 32);
                      v89 = *(_BYTE **)(v96 + v86 + 24);
                      goto LABEL_248;
                    }
                  }
                }
                else
                {
                  v82 = v96 + 56;
                  if ( v96 + 56 <= v95 )
                  {
                    v124 = 1;
                    if ( *(_BYTE *)(v96 + v86 + 10) )
                      v93 = (char *)(v96 + v86 + 24);
                    v88 = *(_BYTE *)(v96 + v86 + 8);
                    v89 = *(_BYTE **)(v96 + v86 + 16);
                    v90 = *(_BYTE *)(v96 + v86 + 9);
                  }
                }
              }
              else
              {
                v82 = v96 + 40;
                if ( v96 + 40 <= v95 )
                {
                  if ( *(_BYTE *)(v96 + v86 + 10) )
                    v93 = (char *)(v96 + v86 + 24);
                  v89 = *(_BYTE **)(v96 + v86 + 16);
LABEL_248:
                  v90 = *(_BYTE *)(v96 + v86 + 9);
                  v88 = *(_BYTE *)(v96 + v86 + 8);
LABEL_249:
                  if ( v93 )
                  {
                    v98 = *v93;
                    v87 = 0;
LABEL_252:
                    LOBYTE(v82) = v98 - 8;
                    if ( (v82 & 0x5D) == 0 )
                    {
                      v99 = *(_BYTE *)(v86 + 3);
                      if ( v99 == 1 || !v89 || !v90 )
                        goto LABEL_271;
                      LOBYTE(v86) = 0;
                      v82 = (unsigned __int64)&v89[v90];
                      v100 = v89 + 8;
                      if ( (unsigned __int8)((*v89 & 0x7F) - 114) <= 1u )
                      {
                        if ( (unsigned __int64)v100 <= v82 )
                        {
                          LOBYTE(v86) = 1;
                          v87 = v89[2];
                          v91 = v89[1] & 0xF;
                          v92 = v89[3];
                        }
                      }
                      else
                      {
                        if ( (unsigned __int64)v100 <= v82 )
                        {
                          v91 = v89[2] & 0xF;
                          v101 = v90;
                          if ( (unsigned int)(unsigned __int8)v89[7] + 8 <= v90 )
                            v101 = (unsigned __int8)v89[7] + 8;
                          v82 = (unsigned __int64)(v89 + 13);
                          v86 = (unsigned __int64)&v89[v101];
                          if ( (unsigned __int64)(v89 + 13) > v86 )
                            v120 = 0;
                          else
                            v120 = v89[12];
                          if ( (unsigned __int64)(v89 + 14) <= v86 )
                            v92 = *(_BYTE *)v82;
                          LOBYTE(v86) = 1;
                        }
                        v87 = v120;
                      }
                      if ( (_BYTE)v86 )
                      {
                        LOBYTE(v81) = v87;
                        v102 = v92;
                      }
                      else
                      {
LABEL_271:
                        v91 = 0;
                        v102 = 0;
                      }
                      McTemplateK0pduuuuup_EtwWriteTransfer(
                        v82,
                        v86,
                        &v129,
                        a2,
                        *(_DWORD *)(a2 + 48),
                        v99,
                        v88,
                        v91,
                        v81,
                        v102,
                        a2);
                    }
                  }
                  goto LABEL_276;
                }
              }
              if ( v124 )
                goto LABEL_249;
            }
          }
          if ( ++v94 >= v126 )
            goto LABEL_249;
        }
      case 0x1B:
        if ( *(_BYTE *)(v83 + 1) == 7 && !*(_DWORD *)(v83 + 8) )
        {
          if ( (byte_140171462 & 0x40) != 0 )
          {
            v84 = *(int **)(a2 + 56);
            if ( v84 )
              v81 = *v84;
            McTemplateK0pqd_EtwWriteTransfer(v82, v83, &v129, a2, v81, *(_DWORD *)(a2 + 48));
          }
          goto LABEL_276;
        }
        if ( (byte_140171462 & 0x20) == 0 )
        {
LABEL_276:
          IofCompleteRequest((PIRP)a2, 0);
          return 3221225485LL;
        }
        v85 = &EventPnpRequestComplete;
        v105 = *(_DWORD *)(a2 + 48);
        break;
      default:
        goto LABEL_276;
    }
    McTemplateK0pd_EtwWriteTransfer(v82, v85, &v129, a2, v105);
    goto LABEL_276;
  }
  v51 = (const GUID *)(a1 + 160);
  v52 = 0;
  *(_OWORD *)(a1 + 160) = *(_OWORD *)(v50 + 8);
  *(_OWORD *)(v50 + 24) = *(_OWORD *)(*(_QWORD *)(v3 + 128) + 1032LL);
  *(_QWORD *)(a2 + 56) = 40LL;
  if ( (unsigned int)dword_140170178 > 5 && tlgKeywordOn(v50 + 24, 0x400000000000LL) )
  {
    *(_QWORD *)&v130 = 0x1000000LL;
    v132 = &v130;
    v125 = *(_DWORD *)(a1 + 56);
    v138 = &v125;
    v56 = *(_QWORD *)(v55 + 128);
    v133 = 8LL;
    v134 = v53;
    v135 = 16LL;
    v136 = v51;
    v137 = 16LL;
    v139 = 4LL;
    v57 = *(unsigned int *)(v56 + 56);
    v140 = &v127;
    v126 = *(unsigned __int16 *)(v55 + 4);
    v142 = &v126;
    v127 = v57;
    v141 = 4LL;
    v143 = 4LL;
    tlgWriteTransfer_EtwWriteTransfer(v57, (unsigned __int8 *)dword_14016337C, v54, v55, 8u, &v131);
  }
  RtlStringFromGUID(v51, &GuidString);
  Buffer = (wchar_t *)&word_140150F48;
  if ( FeatureFixFUAForReadIoPerf )
  {
    if ( GuidString.Buffer )
      Buffer = GuidString.Buffer;
    StorEtwNvmeNamespaceEvent(
      a1,
      1,
      4,
      (__int64)L"NVMe namespace identification",
      Buffer,
      *(_DWORD *)(a1 + 68),
      L"Optimal IO boundary",
      *(_DWORD *)(a1 + 428),
      L"Optimal write size",
      *(_DWORD *)(a1 + 72),
      L"Optimal write granularity",
      *(_DWORD *)(a1 + 76),
      L"Optimal write alignment",
      *(_DWORD *)(a1 + 80),
      L"Deallocate granularity in blocks",
      *(_DWORD *)(a1 + 84),
      L"Deallocate alignment in blocks",
      *(_DWORD *)(a1 + 88),
      L"Logical block size",
      *(_DWORD *)(a1 + 64));
  }
  else
  {
    v59 = (wchar_t *)&word_140150F48;
    if ( GuidString.Buffer )
      v59 = GuidString.Buffer;
    StorEtwNvmeNamespaceEvent(
      a1,
      1,
      4,
      (__int64)L"NVMe namespace identification",
      v59,
      0,
      (void *)&word_140150F48,
      0,
      (void *)&word_140150F48,
      0,
      (void *)&word_140150F48,
      0,
      (void *)&word_140150F48,
      0,
      (void *)&word_140150F48,
      0,
      (void *)&word_140150F48,
      0,
      (void *)&word_140150F48,
      0);
  }
  RtlFreeUnicodeString(&GuidString);
  v7 = StorEtwLoggingEnabled == 0;
  *(_BYTE *)(a2 + 141) = -84;
  *(_DWORD *)(a2 + 48) = 0;
  if ( v7 )
    goto LABEL_211;
  v129 = 0LL;
  IoGetActivityIdIrp(a2, &v129);
  v61 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)v61 == 14 )
  {
    if ( (byte_140171462 & 8) == 0 )
      goto LABEL_211;
    v63 = &EventNonReadWriteRequestComplete;
    goto LABEL_210;
  }
  if ( *(_BYTE *)v61 != 15 )
  {
    if ( *(_BYTE *)v61 != 27 )
      goto LABEL_211;
    if ( *(_BYTE *)(v61 + 1) == 7 && !*(_DWORD *)(v61 + 8) )
    {
      if ( (byte_140171462 & 0x40) != 0 )
      {
        v62 = *(ULONG **)(a2 + 56);
        if ( v62 )
          v52 = *v62;
        LODWORD(v107) = *(_DWORD *)(a2 + 48);
        v104[0] = v52;
        McTemplateK0pqd_EtwWriteTransfer(v60, v61, &v129, a2, *(_QWORD *)v104, v107);
      }
      goto LABEL_211;
    }
    if ( (byte_140171462 & 0x20) == 0 )
      goto LABEL_211;
    v63 = &EventPnpRequestComplete;
LABEL_210:
    v104[0] = *(_DWORD *)(a2 + 48);
    McTemplateK0pd_EtwWriteTransfer(v60, v63, &v129, a2, *(_QWORD *)v104);
    goto LABEL_211;
  }
  if ( byte_140171461 >= 0 )
    goto LABEL_211;
  v64 = *(_QWORD *)(v61 + 8);
  v65 = 0;
  v66 = 0;
  v119 = 0;
  v67 = 0LL;
  v68 = 0;
  v69 = 0;
  v70 = 0;
  if ( *(_BYTE *)(v64 + 2) != 40 )
  {
    v76 = *(_BYTE *)(v64 + 72);
    v67 = *(_BYTE **)(v64 + 32);
    v68 = *(_BYTE *)(v64 + 11);
    v66 = *(_BYTE *)(v64 + 4);
    if ( !*(_BYTE *)(v64 + 2) )
      goto LABEL_187;
    goto LABEL_211;
  }
  v71 = 0LL;
  v123 = 0;
  if ( *(_DWORD *)(v64 + 20) )
    goto LABEL_211;
  v72 = 0;
  v126 = *(_DWORD *)(v64 + 56);
  if ( !v126 )
    goto LABEL_184;
  while ( 1 )
  {
    v60 = *(unsigned int *)(v64 + 4LL * v72 + 120);
    if ( (unsigned int)v60 >= 0x80 )
    {
      v73 = *(unsigned int *)(v64 + 16);
      if ( (unsigned int)v60 < (unsigned int)v73 )
        break;
    }
LABEL_178:
    if ( ++v72 >= v126 )
      goto LABEL_184;
  }
  v74 = (unsigned int)v60;
  v75 = *(_DWORD *)(v64 + v60) - 64;
  if ( v75 )
  {
    v60 = (unsigned int)(v75 - 1);
    if ( (_DWORD)v60 )
    {
      if ( (_DWORD)v60 == 1 )
      {
        v60 = v74 + 40;
        if ( v74 + 40 <= v73 )
        {
          if ( *(_DWORD *)(v64 + v74 + 12) )
            v71 = (char *)(v74 + v64 + 32);
          v67 = *(_BYTE **)(v64 + v74 + 24);
          goto LABEL_183;
        }
      }
    }
    else
    {
      v60 = v74 + 56;
      if ( v74 + 56 <= v73 )
      {
        v123 = 1;
        if ( *(_BYTE *)(v64 + v74 + 10) )
          v71 = (char *)(v74 + v64 + 24);
        v66 = *(_BYTE *)(v64 + v74 + 8);
        v67 = *(_BYTE **)(v64 + v74 + 16);
        v68 = *(_BYTE *)(v64 + v74 + 9);
      }
    }
    goto LABEL_177;
  }
  v60 = v74 + 40;
  if ( v74 + 40 > v73 )
  {
LABEL_177:
    if ( v123 )
      goto LABEL_184;
    goto LABEL_178;
  }
  if ( *(_BYTE *)(v64 + v74 + 10) )
    v71 = (char *)(v74 + v64 + 24);
  v67 = *(_BYTE **)(v64 + v74 + 16);
LABEL_183:
  v68 = *(_BYTE *)(v64 + v74 + 9);
  v66 = *(_BYTE *)(v64 + v74 + 8);
LABEL_184:
  if ( v71 )
  {
    v76 = *v71;
    v65 = 0;
LABEL_187:
    LOBYTE(v60) = v76 - 8;
    if ( (v60 & 0x5D) == 0 )
    {
      v77 = *(_BYTE *)(v64 + 3);
      if ( v77 == 1 || !v67 || !v68 )
        goto LABEL_206;
      LOBYTE(v64) = 0;
      v60 = (unsigned __int64)&v67[v68];
      v78 = v67 + 8;
      if ( (unsigned __int8)((*v67 & 0x7F) - 114) <= 1u )
      {
        if ( (unsigned __int64)v78 <= v60 )
        {
          LOBYTE(v64) = 1;
          v65 = v67[2];
          v69 = v67[1] & 0xF;
          v70 = v67[3];
        }
      }
      else
      {
        if ( (unsigned __int64)v78 <= v60 )
        {
          v69 = v67[2] & 0xF;
          v79 = v68;
          if ( (unsigned int)(unsigned __int8)v67[7] + 8 <= v68 )
            v79 = (unsigned __int8)v67[7] + 8;
          v60 = (unsigned __int64)(v67 + 13);
          v64 = (unsigned __int64)&v67[v79];
          if ( (unsigned __int64)(v67 + 13) > v64 )
            v119 = 0;
          else
            v119 = v67[12];
          if ( (unsigned __int64)(v67 + 14) <= v64 )
            v70 = *(_BYTE *)v60;
          LOBYTE(v64) = 1;
        }
        v65 = v119;
      }
      if ( (_BYTE)v64 )
      {
        LOBYTE(v52) = v65;
        v80 = v70;
      }
      else
      {
LABEL_206:
        v69 = 0;
        v80 = 0;
      }
      LOBYTE(v115) = v80;
      LOBYTE(v113) = v52;
      LOBYTE(v111) = v69;
      LOBYTE(v109) = v66;
      LOBYTE(v107) = v77;
      v104[0] = *(_DWORD *)(a2 + 48);
      McTemplateK0pduuuuup_EtwWriteTransfer(v60, v64, &v129, a2, *(_QWORD *)v104, v107, v109, v111, v113, v115, a2);
    }
  }
LABEL_211:
  IofCompleteRequest((PIRP)a2, 0);
  return 0LL;
}
